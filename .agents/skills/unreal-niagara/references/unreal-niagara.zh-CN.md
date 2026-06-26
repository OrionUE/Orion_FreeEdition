# Unreal Niagara 项目工作流

## 适用范围

当任务涉及 Niagara System、Emitter、Renderer、材质绑定、NiagaraComponent、Actor Blueprint wrapper 或通过 MCP 自动创建粒子资产时，使用本 Skill。

## 推荐流程

1. 读取 `.agents/skills/orion-mcp-workflow/SKILL.md`，建立可见编辑器 MCP 连接。
2. 读取 `.agents/skills/orion-asset-management/SKILL.md`，确认正式资产目录、命名前缀和覆盖策略。
3. 用 `list_toolsets` 确认是否存在：
   - `NiagaraToolsets.NiagaraToolset_Info`
   - `NiagaraToolsets.NiagaraToolset_Component`
   - `NiagaraToolsets.NiagaraToolset_Blueprint`
   - `NiagaraToolsets.NiagaraToolset_System`
   - `NiagaraToolsets.NiagaraToolset_Assets`
4. 参数不确定时调用 `describe_toolset` 获取 schema。
5. 如果现有 Niagara toolset 无法满足创建、材质绑定或保存需求，补项目内 Editor-only MCP Tool Library 函数，而不是修改引擎源码。

## Editor-only C++ 工具函数模式

当需要确定性创建 Niagara 测试资产时，可在项目 Editor-only 模块中使用以下模式：

1. `*.Build.cs` 增加需要的 Editor/Niagara 依赖，例如 `ModelContextProtocolEditor`、`ModelContextProtocolEngine`、`AssetTools`、`EditorScriptingUtilities`、`Kismet`、`Niagara`、`NiagaraCore`、`NiagaraEditor`。
2. 新增继承 `UModelContextProtocolEditorToolLibrary` 的类。
3. 暴露 `public static UFUNCTION(BlueprintCallable)`。
4. 函数内创建或加载资产，避免无提示覆盖用户资产。
5. 保存资产并返回结构化结果，至少包含成功标记、资产路径和关键验证布尔值。
6. 重新编译 Editor target，重启可见编辑器，再通过 `tools/list` 和 `tools/call` 验证。

## 保存和验证

同时检查 MCP 返回：

- 材质是否绑定到 Sprite Renderer。
- Niagara System 是否创建成功。
- Blueprint wrapper 是否编译成功。

## 常见问题

- 只有端口监听不代表 MCP 可调用；先完成 `initialize` 并正确保存 `Mcp-Session-Id`。
- PowerShell 里 session id header 可能是数组，写回前取第一个字符串。
- 编辑器存在恢复/保存模态窗口时，MCP 请求可能卡住；提示用户手动处理窗口后继续。
- 如果目标是正式游戏内容，不要直接使用 `/Game/MCPTests/Particles`；该目录只用于 MCP 验证资产。
