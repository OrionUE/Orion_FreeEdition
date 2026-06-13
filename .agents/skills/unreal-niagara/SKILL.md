---
name: unreal-niagara
description: Use when creating, editing, validating, or debugging Niagara assets in this Unreal project, including Niagara Systems, Emitters, renderers, materials, component wrappers, Blueprint wrappers, and MCP Niagara toolset workflows.
---

# Unreal Niagara

本 Skill 用于本项目内 Niagara 粒子资产相关工作。详细中文流程见：

`references/unreal-niagara.zh-CN.md`

核心规则：

- 先读取 `.agents/skills/unreal-mcp-workflow/SKILL.md`，确认 MCP 连接、保存、弹窗处理和 toolset 调用流程。
- 创建或修改正式资产前，读取 `.agents/skills/unreal-asset-management/SKILL.md`，确认正式资产目录、命名前缀和禁止测试目录落点。
- 优先使用已注册的 `NiagaraToolsets.*`；schema 不明确时用 `describe_toolset`，不要猜参数。
- 需要确定性创建复杂测试资产时，可以在项目 Editor-only 模块中添加 `UModelContextProtocolEditorToolLibrary` + `BlueprintCallable` 工具函数。
- 创建后必须验证材质、Emitter、System、Blueprint wrapper 是否保存到磁盘，并确认 Blueprint 编译结果。
