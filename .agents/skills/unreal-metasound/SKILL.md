---
name: unreal-metasound
description: "Use when working with Unreal Engine MetaSound/MetaSounds: MetaSound Source or Patch assets, Content/Audio/MetaSounds assets, MetaSound graph nodes, UMetaSoundBuilderSubsystem, UMetaSoundEditorSubsystem, MetaSound interfaces, ProjectAcoustics MetaSound parameters, or MCP automation for MetaSound creation and graph editing."
---

# Unreal MetaSound

## 路由

处理 MetaSound 资产、节点、接口、图连接或 MCP 自动化时使用本 Skill。开始前读取 `references/metasound-code-study.zh-CN.md`。

同时按需读取这些相关 Skill：

- `orion-audio-framework`：涉及项目音频配置、ProjectAcoustics、SteamAudio 或 Sound Attenuation 时。
- `orion-mcp-workflow`：需要连接 Unreal MCP、列出 Toolset、调用 Toolset 或验证 live Editor 时。
- `unreal-source-code-navigator`：需要核对引擎源码、模块依赖或 MetaSound 原生节点 ClassName 时。
- `orion-framework-skill-authoring`：修改本 Skill 或生成新的项目 Skill 时。
- `orion-code-style`：修改 C++、Build.cs、脚本或配置文件时。

## 工作流

1. 先确认目标是运行时音频逻辑、编辑器资产生成，还是 MCP 自动化。运行时逻辑不要放进 MCP Toolset；编辑器自动化放进 Editor-only 插件或 Editor Utility。
2. 操作 MetaSound 图时优先使用 MetaSound Builder API：`UMetaSoundBuilderSubsystem` 创建 builder，`UMetaSoundEditorSubsystem` 将 builder 写入资产或打开已有资产继续编辑。
3. 通过 MCP 操作时先调用 `scripts/Test-MetaSoundMcp.ps1`。只有 `list_toolsets` 中存在 `OrionProjectToolsets.OrionMetaSoundToolset` 时，才可以通过 MCP 创建或编辑 MetaSound 节点。
4. 如果 MCP 只有 `ProgrammaticToolset` 或 `BlueprintTools`，不要用它们伪造 MetaSound 节点；当前 Programmatic 沙箱不能导入 `unreal`，Blueprint 图工具也不是 MetaSound 图工具。
5. 创建节点时传显式 ClassName 三元组：`Namespace`、`Name`、`Variant`。标准节点常见命名空间为 `UE`，Wave Player 等 Engine 节点的 Variant 可能是 `Mono`、`Stereo`、`5dot1` 等。
6. 编辑完成后用 `DescribeAsset` 读回 RootGraph、节点、接口和边数量，再保存资产。

## MCP 工具

项目 MCP Toolset 名称：`OrionProjectToolsets.OrionMetaSoundToolset`。

核心能力：

- `DescribeAsset`：读回 MetaSound 文档、节点、接口和边数量。
- `CreateSourceAsset` / `CreatePatchAsset`：创建 MetaSound Source 或 Patch。
- `AddInterface`：添加 MetaSound 参数接口，例如 `ProjectAcoustics`。
- `AddGraphInput` / `AddGraphOutput`：添加图输入、输出。
- `AddNodeByClassName`：按 `FMetasoundFrontendClassName` 添加原生或已注册节点。
- `SetNodeInputDefault`、`ConnectNodes`、`ConnectGraphInputToNode`、`ConnectNodeToGraphOutput`、`RemoveNode`：基础图编辑。

## 验证

运行：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-metasound\scripts\Test-MetaSoundMcp.ps1
```

需要真实创建测试资产时才加：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-metasound\scripts\Test-MetaSoundMcp.ps1 -CreateProbeAsset
```
