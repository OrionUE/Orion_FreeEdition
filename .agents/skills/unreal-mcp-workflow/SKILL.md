---
name: unreal-mcp-workflow
description: Use when working with this Unreal project through MCP: start the visible Unreal Editor, connect to http://127.0.0.1:18765/mcp, list or call toolsets, create or save UMG/Niagara/PCG/assets, and handle modal editor windows.
---

# Unreal MCP Workflow

本 Skill 用于通过 Unreal Editor MCP 操作本项目。正文可以使用中文；工具名、JSON-RPC 字段、toolset 名和函数名必须保持英文精确拼写。

先读取同目录下的详细中文说明：

`references/unreal-mcp-workflow.zh-CN.md`

核心规则：

- 使用可见窗口启动 Unreal Editor，不要隐藏窗口运行。
- MCP endpoint 是 `http://127.0.0.1:18765/mcp`。
- 调用顺序是 `initialize` -> `notifications/initialized` -> `tools/list` -> `list_toolsets` -> `describe_toolset` 或 `call_tool`。
- 启动或退出编辑器时如果出现恢复/保存/取消等模态窗口，提示用户在编辑器里手动处理后继续；退出卡住时直接询问用户判断窗口状态，不做耗时窗口探测。
- 创建资产前先查领域 Skill 和 `.agents/skills/unreal-asset-management/SKILL.md`，确认命名、目录、覆盖策略和保存验证。
- MCP 创建或编译资产后必须单独验证保存，UMG `CompileWidgetBlueprint` 不等于 `.uasset` 已落盘。
- 当前项目没有注册独立 `AssetTools` / `ObjectTools` toolset 时，可以用 `SlateInspectorToolset` 打开资产窗口并点击 `Save` 作为保存 fallback。
