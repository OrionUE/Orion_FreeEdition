# Unreal MCP 调用工作流 Skill

## 适用范围

当任务需要通过 Unreal Editor 的 Model Context Protocol（MCP）控制 UE 项目时使用本 Skill。典型任务包括：

- 查询 UE MCP 是否启动、连接是否可用、当前有哪些 toolset。
- 通过 MCP 创建、编辑、编译、保存 UMG、Niagara、PCG、GameplayTags、PhysicsAsset、Plugin 等编辑器资产。
- 使用 SlateInspector 自动点击 UE 编辑器 UI。
- 调试 MCP 调用卡住、编辑器弹窗拦截、资产未保存等问题。

本 Skill 是项目本地通用文档，不绑定 Codex。Codex、Cursor、Antigravity、DeepSeek、Claude 或其他 MCP 客户端都可以按这里的端点和流程连接。

中文说明可以作为 Skill 内容。工具名、JSON-RPC 字段、toolset 名、函数名必须保留英文原文。

## 项目默认 MCP 配置

当前项目默认在编辑器启动时自动启动 MCP：

- Endpoint: `http://127.0.0.1:18765/mcp`
- URL Path: `/mcp`
- Port: `18765`
- 配置文件: `Config/DefaultEditorPerProjectUserSettings.ini`
- Codex 项目配置: `.codex/config.toml`

通用 MCP 客户端配置可以写成：

```json
{
  "mcpServers": {
    "unreal-mcp": {
      "url": "http://127.0.0.1:18765/mcp"
    }
  }
}
```

Codex 项目本地配置示例：

```toml
[mcp_servers.unreal-mcp]
url = "http://127.0.0.1:18765/mcp"
enabled = true
startup_timeout_sec = 20
tool_timeout_sec = 300
default_tools_approval_mode = "prompt"
```

不同客户端的配置文件位置不统一。若客户端支持项目级 MCP 配置，就引用上面的 URL；若只支持用户级配置，就把同一个 endpoint 写入该客户端的用户级 MCP 配置。

## 硬约束

- 不要切换或修改用户的 Unreal Engine 源码仓库。引擎路径必须从用户提供的信息、项目配置或环境变量读取，不要在 Skill 中写死机器路径。
- 不要修改引擎源码；只改项目内文件。
- 本项目生成或修改的文本文件必须保持 CRLF 行尾。
- MCP 相关插件通常应保持 Editor-only。验证时至少跑项目的 Editor target；如果改了 Runtime 模块，也跑项目的 Game/Client target。target 名称从 `Source/*.Target.cs` 读取，不要写死。
- 创建或修改资产前，先检查是否已有同名资产，避免覆盖用户资产。
- 不确定 tool schema 时再调用 `describe_toolset`，不要猜参数。

## UE 5.8 Backport 兼容性判断

本项目里的 MCP/Toolsets 是从 UE 5.8 源码迁移到当前项目使用的 backport，不要默认它与 5.8 原生引擎逐字节、逐行为完全一致。回答或改动时按以下规则判断：

- `AICallable` 是 `UFUNCTION(meta = (AICallable))` 元数据，不是需要 UE 5.8 编译器支持的新 C++ 关键字。是否暴露为 MCP 工具由 `ToolsetRegistry` 读取 `UFunction` metadata 决定。
- 5.8 代码里的 `UE_LOGF` / `UE_CLOGF` 等宏在项目内通过 `Plugins/MCP/UE58Compatibility.h` 兼容到旧引擎；不要把这些宏改回散落的 `UE_LOG(TEXT(...))`，优先维护统一兼容层。
- MCP/Toolsets 相关 `*.Build.cs` 应 force include `UE58Compatibility.h`。新增 MCP 模块时也要加同样的兼容 include。
- 官方 5.8 源码路径与项目路径可能不同。例如官方 `MCPClientToolset` 位于 `Toolsets` 下，项目可放在 `Plugins/MCP/MCPClientToolset`；这类布局差异不一定影响 UE 插件发现，但说明它不是原样安装。
- 官方测试文件可被省略或禁用；判断功能是否迁移时优先比对非测试源码、`.uplugin` descriptor、Build.cs 依赖、Editor target 编译和运行时 `list_toolsets` / `describe_toolset`。
- 不要承诺“跟 UE 5.8 完全一样”。只能在经过源码 diff、编译验证、运行时 toolset 列表和关键工具调用验证后，说明当前项目已达到哪些能力。

## UE 5.8 官方调用链速记

当需要判断“当前 MCP 到底是脚本还是反射”或排查工具为什么没有注册时，按这条主链路定位：

```text
MCP client
  -> UE 内置 HTTPServer / JSON-RPC / SSE
  -> FModelContextProtocolServer::ProcessToolCallJsonRpcCall
  -> IModelContextProtocolTool::RunAsync
  -> FToolsetRegistryToolAdapter::RunAsync
  -> UToolsetRegistrySubsystem::ToolsetRegistry.ExecuteTool
  -> FFunctionLibraryToolset::ExecuteTool
  -> FObjectFunctionToolCall::Execute
  -> UFunction::Invoke
  -> UToolsetDefinition static UFUNCTION
  -> GEditor / EditorSubsystem / ContentBrowser / AssetEditor / Slate / 其他 UE Editor API
```

关键判断：

- 网络层只处理 MCP 协议、session、SSE 和 JSON-RPC 分发；真正控制编辑器的是注册到 MCP 的 `IModelContextProtocolTool`。
- `ModelContextProtocolEditor` 启动时把 `ToolsetRegistry` 里的工具适配成 MCP tools；实现上可能是 eager 全量注册，也可能 deferred 只暴露 `list_toolsets` / `describe_toolset` / `load_toolset` 后按需加载。
- `FToolsetRegistryToolAdapter::RunAsync` 只是把 MCP JSON 参数转交 `ToolsetRegistry.ExecuteTool`，不要把它误解成直接编辑器控制层。
- `FObjectFunctionToolCall::Execute` 会把 JSON arguments 转为 `UFunction` 参数内存，必要时自动填 WorldContext，最后通过 `UFunction::Invoke` 调用函数。
- 官方默认编辑器控制工具不是外部脚本遥控，而是 C++ 工具函数直连 `GEditor`、`GCurrentLevelEditingViewportClient`、`UUnrealEditorSubsystem`、`UAssetEditorSubsystem`、`ContentBrowser`、`FSlateApplication` 等 Editor API。

## ToolsetDefinition 扩展规则

如果要按 UE 5.8 官方 ToolsetRegistry 路径新增工具，使用这个模型：

1. 新增或复用 `UToolsetDefinition` 子类。
2. 工具函数必须是 `static UFUNCTION`。
3. 工具函数必须带 `meta=(AICallable)`。
4. 让模块或插件注册 toolset，并重新编译 Editor target。
5. 启动可见编辑器后，用 `list_toolsets`、`describe_toolset`、`tools/list` 或目标工具调用确认 schema 和注册状态。

不要混淆两条扩展路径：

- `UToolsetDefinition + static UFUNCTION(meta=(AICallable))`：官方 ToolsetRegistry 路径，适合新增正式 toolset。
- `UModelContextProtocolEditorToolLibrary + public static UFUNCTION(BlueprintCallable)`：MCP Tool Library 路径，适合项目内快速暴露工具函数或验证 BlueprintCallable 函数注册。

如果某个工具没有出现在 MCP 中，优先检查：

- 函数是否真的 `static`。
- 是否有 `AICallable` metadata。
- 所在模块是否 Editor target 编译并加载。
- toolset 是否注册到 `UToolsetRegistrySubsystem`。
- 当前 MCP 是 eager 还是 deferred；deferred 模式下是否需要先 `load_toolset` 或通过 `call_tool` 触发。

## Python 在官方链路中的角色

官方 5.8 源码里存在 `PythonScriptPlugin` 依赖和 Python 测试/兼容代码，但不要把它当成默认编辑器控制路径：

- 默认 MCP 编辑器控制主链路是 ToolsetRegistry + UE 反射 + `UFunction::Invoke`。
- Python 可以是测试、兼容或由 Python 生成 UClass/toolset 的辅助部分。
- 判断当前工程是否“走脚本”时，看 `ProcessToolCallJsonRpcCall`、`FToolsetRegistryToolAdapter::RunAsync`、`FToolsetRegistry::ExecuteTool`、`FFunctionLibraryToolset::ExecuteTool`、`FObjectFunctionToolCall::Execute` 是否最终进入 `UFunction::Invoke`。
- 除非项目新增了外部 Python MCP server 或 socket bridge，否则不要按 Trishyn 社区 `unreal-mcp` 的外部 Python server 模型解释 UE 5.8 官方 MCP。

## 反射与 Blueprint 能力边界

不要把“MCP 可以通过反射调用工具函数”和“已经有通用 Blueprint 图表编辑器”混为一谈：

- 当前迁移包含官方 MCP 的核心反射执行链路，不是外部 Python MCP server 或脚本桥：`tools/call` -> `ModelContextProtocolToolsetRegistryAdapter` -> `ToolsetRegistry.ExecuteTool` -> `FunctionLibraryToolset` -> `FObjectFunctionToolCall` -> `UFunction::Invoke`。
- `FunctionLibraryToolset` 会扫描 `UToolsetDefinition` 子类里的 `static UFUNCTION(meta=(AICallable))`，用 UE 反射生成 JSON schema，并把 JSON 参数转换到 `UFunction` frame memory 后调用。
- `AICallable` 是 UHT metadata key，不是必须由 UE 5.8 定义的 C++ 宏。UE 5.6 的 UHT 可以保留未知 metadata；项目里 C++ 工具函数可继续写 `UFUNCTION(meta=(AICallable))`。
- Blueprint-authored 工具函数不要走 `UToolsetDefinition + AICallable` 路径。蓝图里创建的函数通常不是 static，也不方便直接设置任意 `AICallable` metadata；应使用 `UModelContextProtocolToolLibraryBlueprint` / `UModelContextProtocolEditorToolLibraryBlueprint` 这条旧 MCP Tool Library 路径，它会自动把 public Blueprint functions 注册为 MCP tools，不要求 `AICallable`。
- `UModelContextProtocolToolLibraryBlueprint` / `UModelContextProtocolEditorToolLibraryBlueprint` 允许用 Blueprint Function Library / Editor Utility Blueprint 形式定义 MCP 工具函数；这是“用蓝图写工具给 MCP 调用”，不是“任意编辑一个普通 Blueprint 图表”。
- 已有专用 toolset 能编辑部分蓝图相关资产：`UMGToolSet` 可创建和修改 Widget Blueprint；`NiagaraToolsets.NiagaraToolset_Blueprint` 可从 Niagara System/Component 生成 Actor Blueprint wrapper；`MVVMToolset` 源码可创建 ViewModel Blueprint 和 Widget MVVM binding，但默认是否启用要看 `.uproject`、`AllToolsets.uplugin` 和运行时 `list_toolsets`。
- 当前没有通用 `BlueprintToolset` / `BlueprintGraphToolset`。如果用户要求“创建任意 Actor Blueprint、添加 K2 节点、连接执行/数据 pin、创建变量/函数/事件并编译保存”，先检查是否已有项目自定义 toolset；没有就需要新增项目内专用 toolset，不能只靠现有 MCP 反射自动完成。
- 查询 UE 5.8 官方源码时也要区分：官方 `ModelContextProtocol` 有 MCP Tool Library Blueprint；官方 Toolsets 中目前可见的是 UMG、Niagara、MVVM 等专用蓝图能力，不等于存在全领域通用蓝图图表编辑能力。

## 启动编辑器

不要用隐藏窗口启动 Unreal Editor。已经验证过隐藏窗口或无可见 UI 状态可能导致 HTTP POST 卡住，即端口监听存在但请求不进入正常处理。

推荐使用可见窗口：

```powershell
$EngineRoot = $env:UE_ENGINE_ROOT
if (-not $EngineRoot) { throw "Set UE_ENGINE_ROOT to the Unreal Engine root, or ask the user for the engine path." }
$Project = (Get-ChildItem -Path (Get-Location) -Filter *.uproject | Select-Object -First 1).FullName
if (-not $Project) { throw "Run this command from the Unreal project root, or set the .uproject path explicitly." }
$EditorExe = Join-Path $EngineRoot "Engine\Binaries\Win64\UnrealEditor.exe"
$Process = Start-Process -FilePath $EditorExe -ArgumentList @($Project, "-NoSplash", "-NoSound") -PassThru
"Started UnrealEditor PID=$($Process.Id)"
```

等待 MCP 端口：

```powershell
Get-NetTCPConnection -LocalPort 18765 -State Listen -ErrorAction SilentlyContinue
```

若编辑器启动时弹出“是否恢复上次未保存资产/Restore Packages”等窗口，不要盲点。提示用户在 UE 窗口里手动选择后继续。用户处理完弹窗后，再重新测试端口和 MCP initialize。

## MCP JSON-RPC 基本流程

1. `initialize`
2. 保存响应头里的 `Mcp-Session-Id`
3. 发送 `notifications/initialized`
4. 调用 `tools/list`
5. 调用 meta tool `list_toolsets`
6. 需要具体 schema 时调用 `describe_toolset`
7. 调用 meta tool `call_tool`

HTTP header 建议：

```text
Accept: application/json, text/event-stream
Content-Type: application/json
Mcp-Session-Id: <initialize 返回的 session id>
Mcp-Protocol-Version: 2025-11-25
```

PowerShell 注意事项：

- `Invoke-WebRequest.Headers["Mcp-Session-Id"]` 可能返回 `System.String[]`。写回请求头前必须取第一个字符串，否则 UE MCP 会报 `Unknown session id 'System.String[]'`。

```powershell
$SessionId = $Init.Headers["Mcp-Session-Id"]
if ($SessionId -is [array]) { $SessionId = $SessionId[0] }
if (-not $SessionId) { throw "Missing Mcp-Session-Id from initialize response." }
```

`call_tool` 参数结构：

```json
{
  "jsonrpc": "2.0",
  "id": 10,
  "method": "tools/call",
  "params": {
    "name": "call_tool",
    "arguments": {
      "toolset_name": "UMGToolSet.UMGToolSet",
      "tool_name": "CreateWidgetBlueprint",
      "arguments": {
        "folderPath": "/Game/UI/MCP",
        "assetName": "WBP_Example",
        "parentClass": {
          "refPath": "/Script/UMG.UserWidget"
        }
      }
    }
  }
}
```

注意：`tool_name` 使用短名，不带 toolset 前缀。

## 创建资产前的 Skill 查阅流程

在用 MCP 创建资产前，按顺序查阅：

1. 本 Skill，确认 MCP 连接、弹窗处理、保存和验证流程。
2. 领域 Skill。比如创建 UMG 时读取 `.agents/skills/unreal-umg/SKILL.md`；创建 Niagara 时读取 `.agents/skills/unreal-niagara/SKILL.md`。
3. 资产管理 Skill。读取 `.agents/skills/unreal-asset-management/SKILL.md`，确认命名、目录、覆盖策略、保存策略和 GameFeatures 内容布局。
4. 只在 schema 或返回对象不明确时调用 `describe_toolset`，不要为了重复查询已知能力浪费上下文。

## 已注册 Toolset 索引

以下是本项目 MCP 测试时实际出现过的 toolset 名称。调用前若不确定当前编辑器状态，可用 `list_toolsets` 快速确认是否仍注册。

- `ToolsetRegistry.AgentSkillToolset`: 列出、读取、创建/更新 UE AgentSkill。
- `ConfigSettingsToolset.ConfigSettingsToolset`: 读取和修改 Project Settings / Editor Settings 的 config section。
- `AutomationTestToolset.AutomationTestToolset`: 发现、运行、停止自动化测试并读取结果。
- `EditorToolset.EditorAppToolset`: 编辑器状态、资产缩略图、视口截图、选择、Content Browser、PIE 控制。
- `EditorToolset.LogsToolset`: 读取 UE 输出日志、调整 log category verbosity。
- `GameFeaturesToolset.GameFeaturesToolset`: 查询、启用、停用 Game Feature Plugin。
- `DataflowAgent.DataflowAgentToolset`: 创建和编辑 Dataflow 图、节点、变量、模板。
- `GASToolsets.GameplayCueToolset`: GameplayCue tag、notify asset、选中 Actor 执行 cue。
- `GASToolsets.AttributeSetToolset`: 查询 AttributeSet 类和属性。
- `GASToolsets.AbilitySystemInspectorToolset`: 检查 AbilitySystemComponent 的运行时状态。
- `DataRegistryToolset.DataRegistryTools`: 查询 Data Registry、schema、items 和 data sources。
- `GameplayTagsToolset.GameplayTagsToolset`: 列表、添加、删除、重命名 Gameplay Tag，查引用。
- `PCGToolset.PCGToolset`: 创建和编辑 PCG graph、节点、参数、运行 graph。
- `PCGToolset.PCGSpatialToolset`: PCG spatial 相关工具。schema 不确定时调用 `describe_toolset`。
- `PluginToolset.PluginToolset`: 创建、查询、启用插件，读写插件 descriptor 和 dependency。
- `NiagaraToolsets.NiagaraToolset_Info`: Niagara 枚举、类型、通用信息。
- `NiagaraToolsets.NiagaraToolset_Component`: Niagara Component 运行时/编辑器实例操作。
- `NiagaraToolsets.NiagaraToolset_Blueprint`: 从 Niagara System 创建 Blueprint 包装 Actor。
- `NiagaraToolsets.NiagaraToolset_System`: Niagara System、Emitter、Module、Renderer、Stack、User Variable 编辑。
- `NiagaraToolsets.NiagaraToolset_Assets`: 查找 Niagara script asset 和读取 digest。
- `PhysicsToolsets.PhysicsAssetToolset`: 创建和编辑 Physics Asset、body、shape、constraint。
- `SemanticSearchToolset.SemanticSearchToolset`: 资产语义搜索和相似搜索。
- `WorldConditionsToolset.WorldConditionTools`: 读取 WorldCondition query/condition 描述。
- `SlateInspectorToolset.SlateInspectorToolset`: Slate UI 快照、截图、点击、输入、按键、窗口控制。
- `UMGToolSet.UMGToolSet`: 创建、查询、编辑、编译 Widget Blueprint。

## 源码可提取函数速查

这些函数名来自项目内 `Plugins/MCP/Toolsets` 源码中 `AICallable` 声明。具体参数以 `describe_toolset` 返回 schema 为准。

### AgentSkill

- `ListSkills`
- `GetSkills`
- `CreateSkill`
- `UpdateSkill`

### AutomationTestToolset

- `DiscoverTests`
- `ListTests`
- `RunTests`
- `RunTestsByFilter`
- `GetTestStatus`
- `GetTestResults`
- `StopTests`

### ChaosClothAssetToolset

- `CreateClothingAsset`
- `AssignClothingToSection`
- `RemoveClothingFromSection`
- `ListClothingAssets`
- `GetSectionClothing`
- `ConvertClothingAssetCommonToChaosClothAsset`

### ConfigSettingsToolset

- `ListContainers`
- `ListCategories`
- `ListSections`
- `GetSectionSchema`
- `GetSectionPropertyValues`
- `SetSectionProperties`
- `ResetSectionToDefaults`
- `SaveSection`

### DataflowAgent

- `ListDataflowCompatibleAssetTypes`
- `CreateDataflowCompatibleAsset`
- `CreateDataflowCompatibleAssetFromTemplate`
- `AssignDataflowTemplate`
- `ListDataflowTemplatesForAssetClass`
- `CreateGraph`
- `GetGraphStructure`
- `ListNodeTypes`
- `GetNodeTypeSchema`
- `AddNode`
- `UpdateNode`
- `RemoveNode`
- `RepositionNode`
- `ConnectNodePins`
- `DisconnectNodePins`
- `ListVariables`
- `AddVariable`
- `SetVariable`
- `RemoveVariable`
- `AddCommentBox`
- `UpdateCommentBox`
- `RemoveCommentBox`

### DataRegistryToolset

- `ListRegistries`
- `GetRegistryInfo`
- `ListRuntimeSources`
- `ListDataSources`
- `GetSchema`
- `ListItems`
- `GetItems`

### EditorToolset

- `SearchCVars`
- `CaptureAssetImage`
- `CaptureEditorImage`
- `CaptureViewport`
- `GetSelectedActors`
- `SelectActors`
- `GetCameraTransform`
- `SetCameraTransform`
- `FocusOnActors`
- `GetVisibleActors`
- `WorldPosToScreenCoords`
- `ScreenCoordsToWorld`
- `GetSelectedAssets`
- `SelectAssets`
- `GetContentBrowserPath`
- `SetContentBrowserPath`
- `OpenEditorForAsset`
- `GetOpenAssets`
- `StartPIE`
- `StopPIE`
- `IsPIERunning`
- `GetLogCategories`
- `GetLogEntries`
- `GetVerbosity`
- `SetVerbosity`

### GameFeaturesToolset

- `ListEnabledGameFeaturePlugins`
- `ListDiscoveredGameFeaturePlugins`
- `GetGameFeatureState`
- `IsGameFeaturePlugin`
- `IsGameFeatureActive`
- `RequestActivateGameFeature`
- `RequestDeactivateGameFeature`

### GameplayTagsToolset

- `ListTags`
- `GetTagInfo`
- `AddTag`
- `RemoveTag`
- `RenameTag`
- `FindReferencersByTag`

### GASToolsets

- `ListCues`
- `GetCueInfo`
- `AddCueTag`
- `RemoveCueTag`
- `FindCueNotifyAssets`
- `FindCueTagsWithoutNotifies`
- `CreateCueNotifyAsset`
- `ExecuteCueOnSelectedActor`
- `FindAttributeSetClasses`
- `ListAttributes`
- `GetActiveEffects`
- `GetActiveTags`
- `GetAttributeValues`
- `GetGrantedAbilities`

### LiveCodingToolset

- `CompileLiveCoding`

### MVVMToolset

- `CreateViewModel`
- `AddViewModelProperty`
- `ListViewModels`
- `AddViewModelToWidget`
- `ListWidgetViewModels`
- `CreateViewBinding`
- `ListWidgetViewBindings`
- `RemoveWidgetViewBinding`
- `ListConversionFunctions`

### NiagaraToolsets

- `UEnum_Info`
- `GetAssetDiscoveryInfo`
- `FindNiagaraScripts`
- `GetNiagaraScriptDigest`
- `CreateNiagaraSystem`
- `GetSystemSchema`
- `GetSystemData`
- `SetSystemData`
- `GetSystemSummary`
- `GetSystemCompileState`
- `GetSystemDependencies`
- `AddEmitter`
- `RemoveEmitter`
- `GetEmitterSchema`
- `GetEmitterData`
- `SetEmitterData`
- `GetEmitterSummary`
- `GetEmitterTopology`
- `GetEmitterInputValues`
- `AddModule`
- `RemoveModule`
- `SetModuleEnabled`
- `GetModuleSchema`
- `GetModuleSchemaFromAsset`
- `GetModuleTopology`
- `GetModuleInputValues`
- `AddRenderer`
- `RemoveRenderer`
- `GetRendererSchema`
- `GetRendererData`
- `SetRendererData`
- `GetScriptStackTopology`
- `GetScriptStackInputValues`
- `GetStackInputTopology`
- `GetStackInputSchema`
- `GetStackInputData`
- `SetStackInputData`
- `GetStackIssues`
- `ApplyStackIssueFix`
- `GetAvailableDynamicInputs`
- `GetDynamicInputSchema`
- `GetDynamicInputSchemaFromAsset`
- `GetDynamicInputChain`
- `GetDataInterfaceSchema`
- `AddUserVariables`
- `RemoveUserVariables`
- `GetUserVariables`
- `GetVariable`
- `SetVariable`
- `AddSetParametersModule`
- `AddSetParameterEntry`
- `RemoveSetParameterEntry`
- `ConstructNiagaraBPWrapperFromSystem`
- `ConstructNiagaraBPWrapperFromComponent`

### PCGToolset

- `CreateGraph`
- `GetGraphSchema`
- `GetGraphStructure`
- `GetGraphDescription`
- `SetGraphDescription`
- `ListNativeNodes`
- `GetNativeNodeSchema`
- `AddNode`
- `UpdateNode`
- `RemoveNode`
- `RepositionNode`
- `ConnectNodePins`
- `DisconnectNodePins`
- `AddCommentBox`
- `UpdateCommentBox`
- `RemoveCommentBox`
- `SetNodeComment`
- `ListAvailableSubgraphs`
- `AddSubgraphNode`
- `SpawnGraphInstance`
- `ListGraphInstances`
- `GetGraphInstanceParams`
- `SetGraphInstanceParams`
- `ResetGraphInstanceParams`
- `SetGraphParams`
- `RemoveGraphParams`
- `ExecuteGraphInstance`
- `RunPCGInstantGraph`
- `GetNodeInfo`
- `GetNodeDataView`
- `DrawSpline`

### PhysicsToolsets

- `CreateFromMesh`
- `GetBodyNames`
- `GetBodyShapes`
- `SetSphere`
- `SetCapsule`
- `SetBox`
- `RemoveShape`
- `AddBody`
- `RemoveBody`
- `GetBodyPhysicsMode`
- `SetBodyPhysicsMode`
- `GetBodyMassScale`
- `SetBodyMassScale`
- `GetConstraints`
- `AddConstraint`
- `RemoveConstraint`
- `SetConstraintLimits`

### PluginToolset

- `ListDiscoveredPlugins`
- `ListEnabledPlugins`
- `GetPluginInfo`
- `GetPluginDescriptor`
- `GetPluginDependencies`
- `GetPluginDependents`
- `IsEnabled`
- `SetPluginEnabled`
- `CreatePlugin`
- `ValidateNewPluginNameAndLocation`
- `GetPluginTemplateDescriptions`
- `IsPluginCreationAllowed`
- `IsPluginModificationAllowed`
- `UpdatePluginDescriptor`
- `AddPluginDependency`
- `RemovePluginDependency`
- `GetPluginForAsset`

### SemanticSearchToolset

- `Search`
- `FindSimilar`

### SlateInspectorToolset

- `Snapshot`
- `Observe`
- `Unobserve`
- `ListObservers`
- `Screenshot`
- `Click`
- `Hover`
- `Type`
- `PressKey`
- `SelectOption`
- `Drag`
- `Windows`
- `WaitFor`
- `FillForm`

### UMGToolSet

- `CreateWidgetBlueprint`
- `AddWidget`
- `SetNamedSlotContent`
- `WrapWidgets`
- `GetWidgets`
- `GetWidgetTreeDepth`
- `ListWidgetBlueprints`
- `ListWidgetClasses`
- `GetWidgetClassInfo`
- `MoveWidget`
- `RemoveWidget`
- `RenameWidget`
- `ToggleWidgetAsVariable`
- `ReplaceWidgetWithTemplate`
- `ReplaceWidgetWithNamedSlot`
- `ReplaceWidgetWithChild`
- `GetWidgetDescription`
- `GetNamedSlots`
- `AddUIComponent`
- `RemoveUIComponent`
- `MoveUIComponent`
- `BindToEventProperty`
- `CompileWidgetBlueprint`

### WorldConditionsToolset

- `GetQueryDescription`
- `GetConditionDescription`

## UMG 创建资产工作流示例

创建 UMG 前先读取 `.agents/skills/unreal-umg/SKILL.md`。如果不存在，按以下保守流程：

1. 用 `UMGToolSet.UMGToolSet.ListWidgetClasses` 查父类路径，不要猜。
2. 用 `UMGToolSet.UMGToolSet.CreateWidgetBlueprint` 创建资产。
3. 用 `UMGToolSet.UMGToolSet.AddWidget`、`SetNamedSlotContent`、`WrapWidgets` 等编辑 Widget Tree。
4. 需要设置属性时，优先使用 ObjectTools；如果当前项目没有注册 ObjectTools，就改用 C++ 原生父类承载复杂 UI 和逻辑，再通过 MCP 创建继承它的 Widget Blueprint。
5. 用 `UMGToolSet.UMGToolSet.CompileWidgetBlueprint` 编译。
6. 保存资产。优先使用资产保存 tool；如果没有 AssetTools/ObjectTools，就用 `SlateInspectorToolset` 打开资产编辑器并点击工具栏 `Save`。
7. 验证 `.uasset` 已落盘，并检查 `Saved/Logs/InfernoHeart.log` 中是否出现 `OBJ SAVEPACKAGE` 或相关保存日志。

本项目曾验证过的保存 fallback：

1. `EditorToolset.EditorAppToolset.OpenEditorForAsset` 打开资产。
2. `SlateInspectorToolset.SlateInspectorToolset.Snapshot` 找到资产编辑器窗口和 `Save` 按钮 ref。
3. `SlateInspectorToolset.SlateInspectorToolset.Click` 点击 `Save`。
4. 检查 `Content/.../*.uasset` 是否存在。

## 弹窗和卡住处理

### 启动编辑器时弹恢复窗口

现象：编辑器启动后弹出是否恢复上次未保存资产，MCP 端口可能已经监听，但请求卡住或编辑器无法继续。

处理：

1. 停止自动操作。
2. 告诉用户当前有 UE 模态窗口，需要用户在可见编辑器里手动选择。
3. 用户处理后再继续 `initialize` 和 `list_toolsets`。

### 退出编辑器时弹未保存窗口

现象：关闭 UE 或关闭资产编辑器时，可能弹出保存/不保存/取消窗口，导致 MCP 请求超时。

处理：

1. 不要继续用 `SlateInspectorToolset.Snapshot`、窗口树扫描或截图识别去判断弹窗；这类探测慢且容易拖住当前任务。
2. 直接告诉用户：“编辑器退出可能被保存/不保存/取消窗口挡住了，请你看一下 UE 窗口，关闭或选择后告诉我继续。”
3. 用户确认处理完成后，再检查编辑器进程或 MCP 端口状态。
4. 不要强行点保存或不保存，除非本轮创建的资产已经确认需要保存，且用户明确同意。
5. 若本轮创建的资产已保存且只剩测试编辑器进程，可在确认无用户未保存资产后结束该测试进程。

### 端口监听但请求超时

优先检查：

- 是否用隐藏窗口启动了 UE。若是，关闭后用可见窗口重启。
- 是否有模态弹窗。
- 是否编辑器正在退出或保存。
- 是否 session id 过期。重启编辑器后必须重新 initialize。

## 资产保存策略

MCP 创建资产不等于资产已经写入磁盘。每次创建或修改资产后必须验证：

- `Test-Path Content\...\AssetName.uasset`
- `Get-Item Content\...\AssetName.uasset`
- `Saved/Logs/InfernoHeart.log` 中是否出现保存记录

UMGToolSet 的 `CompileWidgetBlueprint` 使用 SkipSave，编译成功后仍需单独保存。

## 验证命令

Editor 验证：

```powershell
$EngineRoot = $env:UE_ENGINE_ROOT
if (-not $EngineRoot) { throw "Set UE_ENGINE_ROOT to the Unreal Engine root." }
$Project = (Get-ChildItem -Path (Get-Location) -Filter *.uproject | Select-Object -First 1).FullName
$EditorTarget = "<PROJECT_EDITOR_TARGET>"
& (Join-Path $EngineRoot "Engine\Build\BatchFiles\Build.bat") $EditorTarget Win64 Development -Project="$Project" -WaitMutex -NoHotReloadFromIDE
```

Game 验证：

```powershell
$EngineRoot = $env:UE_ENGINE_ROOT
if (-not $EngineRoot) { throw "Set UE_ENGINE_ROOT to the Unreal Engine root." }
$Project = (Get-ChildItem -Path (Get-Location) -Filter *.uproject | Select-Object -First 1).FullName
$GameTarget = "<PROJECT_GAME_OR_CLIENT_TARGET>"
& (Join-Path $EngineRoot "Engine\Build\BatchFiles\Build.bat") $GameTarget Win64 Development -Project="$Project" -WaitMutex -NoHotReloadFromIDE
```

CRLF 和空白验证：

```powershell
git diff --check
```

## 记录已知缺口

- 当前项目没有独立注册 `AssetTools` / `ObjectTools` toolset。UMGToolSet 文档提到它们，但本项目测试时 `list_toolsets` 没出现这两个 toolset。
- 遇到需要大量设置 UObject 属性的任务，优先考虑补项目本地工具或用 C++ 原生类承载逻辑，而不是盲猜属性名。
- 资产任务必须先读取 `.agents/skills/unreal-asset-management/SKILL.md`；UMG、Niagara、GameFeatures 等领域资产还要读取对应领域 Skill。
