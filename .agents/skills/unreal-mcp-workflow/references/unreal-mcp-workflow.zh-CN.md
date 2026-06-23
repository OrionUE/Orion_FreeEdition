# UE 5.8 官方 MCP 工作流

## 适用范围

本参考用于当前 UE 5.8 官方 `ModelContextProtocol` + `ToolsetRegistry` 工作流，包括：

- 验证 Editor 内置 HTTP MCP server。
- 连接 `http://127.0.0.1:18765/mcp` 并处理 session/SSE。
- 使用 deferred/聚合调用入口：`list_toolsets`、`describe_toolset`、`load_toolset` 或顶层 `call_tool`。
- 调用官方 `AssetTools`、`ObjectTools`、`BlueprintTools`、`UMGToolSet`、`SlateInspectorToolset`、`ToolsetRegistry.EditorAppToolset`。
- 判断 `AICallable`、Python `@tool_call`、MCP Tool Library 和项目自定义 Toolset 的边界。

## 当前项目 MCP 结论

- `.uproject` 的 `EngineAssociation` 是 `5.8`。
- `.codex/config.toml` 指向 `http://127.0.0.1:18765/mcp`。
- 当前实测端口由 UnrealEditor 监听，JSON-RPC session 成功。
- 当前 5.8 MCP 存在两种实测入口形态，先以实时 `tools/list` 为准，不要固定假设：
  - `list_toolsets` / `describe_toolset` / `load_toolset`：先加载 toolset，再直接 `tools/call` 完整工具名。
  - `list_toolsets` / `describe_toolset` / `call_tool`：不需要 `load_toolset`，通过顶层 `call_tool` 传 `toolset_name`、`tool_name`、`arguments` 调用工具。
- 2026-06-20 在当前已打开的 Editor 中，初始 `tools/list` 返回 `list_toolsets`、`describe_toolset`、`call_tool`；直接调用 `load_toolset` 会报 `Unknown tool: load_toolset`。
- 同次实测中，`describe_toolset` 参数名是 `toolset_name`，不是 `toolset`。

## 官方调用链

UE 5.8 官方 MCP 的主链路：

```text
MCP client
  -> UE HTTPServer / JSON-RPC / SSE
  -> FModelContextProtocolServer::ProcessToolCallJsonRpcCall
  -> IModelContextProtocolTool::RunAsync
  -> FToolsetRegistryToolAdapter::RunAsync
  -> UToolsetRegistrySubsystem::ToolsetRegistry.ExecuteTool
  -> FFunctionLibraryToolset::ExecuteTool
  -> FObjectFunctionToolCall::Execute
  -> UFunction::Invoke
  -> ToolsetDefinition function body
```

关键点：

- MCP 网络层只负责协议、session、SSE 和工具分发。
- `ModelContextProtocolEditor` 把 `ToolsetRegistry` 中的 toolset schema 注册成 MCP tool。
- deferred 模式只注册 `list_toolsets`、`describe_toolset`、`load_toolset`，按需加载具体 toolset。
- `ToolsetRegistry.ExecuteTool` 按最后一个 `.` 拆分 `ToolsetName.ToolName`，所以 Python toolset 名中可以包含多个点。
- C++ `UToolsetDefinition` 工具最终通过 JSON -> frame memory -> `UFunction::Invoke` 执行。

## Python 在 5.8 中的真实角色

不要把 UE 5.8 官方 MCP 误解成“外部 Python MCP server + socket bridge”。当前没有外部 Python server。

但也不要说“官方 5.8 默认完全不用 Python”。实测和源码显示：

- `ToolsetRegistry.Build.cs` 依赖 `PythonScriptPlugin`。
- 很多通用核心工具来自引擎内 Python 包，例如：
  - `toolset_registry.toolsets.core.asset.AssetTools`
  - `toolset_registry.toolsets.core.object.ObjectTools`
  - `toolset_registry.toolsets.core.blueprint.BlueprintTools`
- Python `@toolset_registry.tool_call` 会生成 `unreal.ufunction(static=True, meta={'AICallable': ''})`。
- 这些 Python ToolsetDefinition 仍然注册到 `ToolsetRegistry`，再被 MCP adapter 暴露，不是外部 Python MCP 服务器。

准确表述：

> UE 5.8 官方 MCP 的统一入口是 UE 进程内 MCP server + ToolsetRegistry。工具实现可以是 C++ `UToolsetDefinition`，也可以是 UE 进程内 Python `unreal.ToolsetDefinition`，最终都通过 UE 反射/UFunction 进入编辑器进程内执行。

## 连接流程

请求头：

```text
Accept: application/json, text/event-stream
Content-Type: application/json
Mcp-Protocol-Version: 2025-11-25
Mcp-Session-Id: <initialize 返回值>
```

调用顺序：

1. `initialize`
2. 从响应头读取 `Mcp-Session-Id`；PowerShell 中如果是数组，取第一个元素。
3. `notifications/initialized`
4. `tools/list`
5. `tools/call` -> `list_toolsets`
6. `tools/call` -> `describe_toolset`，参数使用 `toolset_name`
7. 按 `tools/list` 选择调用入口：
   - 有 `load_toolset`：先 `load_toolset`，再次 `tools/list` 确认工具已经注册，再 `tools/call` 直接调用完整工具名。
   - 有 `call_tool`：直接调用顶层 `call_tool`，传入 `toolset_name`、`tool_name`、`arguments`。

示例：

```json
{
  "jsonrpc": "2.0",
  "id": 10,
  "method": "tools/call",
  "params": {
    "name": "ToolsetRegistry.EditorAppToolset.GetContentBrowserPath",
    "arguments": {}
  }
}
```

聚合入口示例：

```json
{
  "jsonrpc": "2.0",
  "id": 10,
  "method": "tools/call",
  "params": {
    "name": "call_tool",
    "arguments": {
      "toolset_name": "editor_toolset.toolsets.asset.AssetTools",
      "tool_name": "find_assets",
      "arguments": {
        "folder_path": "/Game/UI/Menu",
        "name": "W_FrontEnd",
        "recursive": false
      }
    }
  }
}
```

## PowerShell 注意事项

SSE 响应可能包含多条 `data:`，不要把所有 `data:` payload 拼成一个 JSON。逐条解析，取最后一个带 `result` 的对象。

`list_toolsets` 的 text 不是 JSON：

```text
- ToolsetRegistry.EditorAppToolset: Tools for querying...
- toolset_registry.toolsets.core.blueprint.BlueprintTools: Provides tools...
```

`describe_toolset` 的 text 是 JSON schema 字符串，需要二次 `ConvertFrom-Json`。聚合入口下工具名通常仍显示为完整名，例如 `editor_toolset.toolsets.asset.AssetTools.find_assets`，但传给 `call_tool.tool_name` 时使用短名 `find_assets`。

不要把参数变量命名为 `$Args`，这是 PowerShell 自动变量。推荐 `$ArgObject` 或 `$ToolArgs`。

在 PowerShell 函数中同时传 hashtable 和 timeout 时使用命名参数，避免哈希表和后续位置参数被绑定成 `System.Object[]`。

`editor_toolset.toolsets.programmatic.ProgrammaticToolset.execute_tool_script` 适合把多次 MCP 工具调用压到 Editor 内执行，减少 HTTP 往返。注意该脚本环境返回的是 `_StrictDict` 风格对象，`value.get("key", default)` 会失败；用直接索引加 `try/except` 回退。

`ObjectTools.list_properties` 可能返回很大的 JSON schema 字符串，尤其是 `CameraComponent.postProcessSettings`。不要为了筛选少量字段直接 dump 全量输出；已知字段可在确认属性存在后用 `ObjectTools.get_properties` 精确读取。

## 常用官方 Toolset

当前实测可用的核心 toolset。不同 5.8 构建可能使用 `toolset_registry.toolsets.core.*` 或 `editor_toolset.toolsets.*` 命名，先以 `list_toolsets` 为准：

- `ToolsetRegistry.EditorAppToolset`：Content Browser、选择、相机、截图、资产编辑器窗口。
- `ToolsetRegistry.LogsToolset`：日志分类、日志行、verbosity。
- `toolset_registry.toolsets.core.asset.AssetTools`：资产查找、加载、保存、删除、移动、文件读写、依赖/引用。
- `toolset_registry.toolsets.core.object.ObjectTools`：类搜索、对象/Blueprint CDO 属性读取和设置。
- `toolset_registry.toolsets.core.blueprint.BlueprintTools`：Blueprint 创建、父类、图表、节点、pin、变量、函数、编译。
- `UMGToolSet.UMGToolSet`：Widget Blueprint 创建、WidgetTree 查询/编辑、编译。
- `SlateInspectorToolset.SlateInspectorToolset`：Slate 窗口快照、点击、输入、截图。
- `GameFeaturesToolset.GameFeaturesToolset`：GameFeature 查询和根 GameFeatureData。
- `GameplayTagsToolset.GameplayTagsToolset`：Gameplay Tag 增删改查。
- `GASToolsets.*`：GameplayCue、AttributeSet、ASC 运行时检查。

2026-06-20 当前 Editor 实测核心名称：

- `editor_toolset.toolsets.asset.AssetTools`
- `editor_toolset.toolsets.object.ObjectTools`
- `editor_toolset.toolsets.blueprint.BlueprintTools`
- `editor_toolset.toolsets.actor.ActorTools`
- `editor_toolset.toolsets.programmatic.ProgrammaticToolset`
- `EditorToolset.EditorAppToolset`
- `EditorToolset.LogsToolset`

如果不确定 toolset 或 schema，先 `list_toolsets` 和 `describe_toolset`。不要凭旧 Skill 猜名称。

## Blueprint 能力边界

官方 `BlueprintTools` 已经能覆盖通用蓝图图表工作：

- `create`
- `compile_blueprint`
- `get_parent` / `set_parent`
- `list_graphs` / `get_graph` / `add_function_graph` / `remove_function_graph`
- `find_node_types` / `create_node` / `delete_node` / `get_node_info` / `get_graph_info`
- `connect_pins` / `break_pins` / `set_pin_value` / `get_pin_value`
- `add_variable` / `add_object_variable` / `add_struct_variable` / `remove_variable`
- `add_function_param` / `remove_function_param`

实测读取成功：

- Widget Blueprint：`/Game/UI/Menu/W_FrontEnd.W_FrontEnd`
- Experience/DataAsset 型 Blueprint：`/TPP/Experiences/BP_TPPGame_Experience.BP_TPPGame_Experience`
- Actor Blueprint：`/Game/GamePlay/Characters/BP_CharacterBase.BP_CharacterBase`

实测写入流程：

1. 用 `BlueprintTools.create` 创建临时 Actor Blueprint。
2. 用 `list_graphs` 获取 `EventGraph`。
3. 用 `find_node_types` 搜索 `Development|PrintString`。
4. 用 `create_node` 写入节点。
5. 用 `compile_blueprint` 编译。
6. 用 `AssetTools.save_assets` 保存。
7. 用 `AssetTools.delete` 删除临时资产和目录。
8. 用 `AssetTools.exists` 确认不存在。

边界：

- 不能凭空写不存在的节点；必须用当前 graph 的 `find_node_types` 得到合法 `type_id`。
- 节点连线必须使用 `get_node_info` / `get_graph_info` 返回的 pin 引用，不要猜 pin index。
- WidgetTree 子控件实例属性仍要先确认 `ObjectTools` 或 `UMGToolSet` 能表达该属性；复杂样式批量设置可用项目专用 UMG helper。
- 修改真实资产前先采用可逆流程或临时资产流程，避免留下测试节点。

## AssetTools 路径规则

`AssetTools.find_assets` 返回 package path：

```text
/Game/UI/Menu/W_FrontEnd
```

`BlueprintTools`、`ObjectTools` 等 UObject 参数通常需要 object path：

```text
/Game/UI/Menu/W_FrontEnd.W_FrontEnd
```

转换规则：取 package path 末尾资产名并追加 `.AssetName`。

## 扩展 UE 5.8 Toolset

C++ ToolsetRegistry 路径：

1. 创建 `UToolsetDefinition` 子类。
2. 函数必须是 `static UFUNCTION(meta=(AICallable))`。
3. 模块启动时调用 `UToolsetRegistry::RegisterToolsetClass(MyToolset::StaticClass())`。
4. 编译 Editor target。
5. 重启 Editor 或刷新工具后用 `list_toolsets` / `describe_toolset` / `load_toolset` 验证。

Python ToolsetRegistry 路径：

1. 创建 `class MyTools(unreal.ToolsetDefinition)`。
2. 静态函数使用 `@toolset_registry.tool_call`。
3. 函数参数和返回值必须有类型注解。
4. 通过 Python registration 调用 `registry.register_toolset_class(toolset_class)`。

MCP Tool Library 路径：

- `UModelContextProtocolToolLibrary` / `UModelContextProtocolEditorToolLibrary` 会把 public 函数直接注册成 MCP tool。
- 这条路径不使用 `ToolsetName.ToolName` 命名，也不经过 `load_toolset`。
- 适合快速暴露少量工具；正式编辑器能力优先走 ToolsetRegistry。

## OrionProjectToolsets 决策

官方 5.8 已覆盖通用 Blueprint graph、Object property 和 Asset save/delete，因此：

- 通用蓝图创建、读图、写节点、编译保存：优先官方 `BlueprintTools` + `AssetTools`。
- 通用 UObject/Blueprint CDO 属性读写：优先官方 `ObjectTools`。
- 通用资产查找、保存、删除：优先官方 `AssetTools`。

但当前不能删除 `OrionProjectToolsets` 插件，因为它仍提供项目框架语义工具：

- Experience、ActionSet、PawnData、AbilitySet、InputConfig、InputAction、IMC 的安全创建和组合。
- `UGameFeatureAction_AddComponents`、输入绑定、UI entry、Ability entry 等项目结构化写入。
- 项目 UMG 主题/艺术字 helper。
- 项目框架语义函数，例如 Experience、PawnData、AbilitySet、InputConfig、GameFeature Action 和安全 UMG 样式 helper。

结论：`OrionProjectToolsets` 从“补齐 5.6 缺失通用 MCP”降级为“UE 5.8 官方 MCP 之上的项目语义补充”。不要删除整个插件；后续可以逐步删除其中已被官方 5.8 完全覆盖且无项目语义的函数。

## 验证建议

MCP 连接验证：

```text
initialize -> notifications/initialized -> tools/list -> list_toolsets
```

官方工具验证：

```text
load_toolset ToolsetRegistry.EditorAppToolset
call ToolsetRegistry.EditorAppToolset.GetContentBrowserPath
load_toolset ToolsetRegistry.LogsToolset
call ToolsetRegistry.LogsToolset.GetLogCategories filter=LogModelContextProtocol
```

蓝图写入验证优先使用临时资产，并在结束时删除：

```text
BlueprintTools.create
BlueprintTools.list_graphs
BlueprintTools.find_node_types
BlueprintTools.create_node
BlueprintTools.compile_blueprint
AssetTools.save_assets
AssetTools.delete
AssetTools.exists
```

改动代码后按项目规则运行代码风格校验；只改 Skill 文档时运行 skill 校验和 CRLF/portable 检查。
