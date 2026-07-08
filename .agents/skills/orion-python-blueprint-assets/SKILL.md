---
name: orion-python-blueprint-assets
description: "Use when creating, updating, saving, or validating Unreal Blueprint/DataAsset/Widget Blueprint assets through UnrealEditor-Cmd Python, especially when UE MCP or UMGToolSet is unavailable, returns HTTP 502, lacks a needed asset tool, or when command-line asset automation must handle generated_class, Blueprint compile, CDO property defaults, SavePackage logs, CRLF helper scripts, and /Game asset path validation."
---

# Unreal Python Blueprint Assets

本 Skill 记录 UE 5.8 项目里用 `UnrealEditor-Cmd -run=pythonscript` 创建、配置、保存和验证 Blueprint 类资产的兜底流程。优先使用 MCP/Toolset；当 MCP 不可用或缺少安全资产编辑面时，再用本流程。

## 工作流

1. 先读取 `../orion-asset-management/SKILL.md`，确认资产路径和命名。
2. 如果是 UMG/Widget Blueprint，再读取 `../orion-umg/SKILL.md`；如果是 MCP 失败后的兜底，再读取 `../orion-mcp-workflow/SKILL.md`。
3. 把临时 Python 放到 `Saved/OrionUE/Agents`，不要放进正式 `Source` 或 `Content`。
4. 用 `UnrealEditor-Cmd.exe <Project>.uproject -run=pythonscript -script=<script.py> -unattended -nop4 -nosplash -NullRHI -NoSound -NoLiveCoding` 执行。
5. 保存后验证 `.uasset` 落盘、日志存在 `Compiling Blueprint` / `Saving Package` / `Python script executed successfully`，必要时再用二进制文本搜索确认关键默认值。

## 路由

- 创建、命名或保存正式资产前，先读取 `../orion-asset-management/SKILL.md`。
- 创建或修改 UMG / Widget Blueprint 时，配合 `../orion-umg/SKILL.md`。
- MCP 可用时优先读取并使用 `../orion-mcp-workflow/SKILL.md`；只有 MCP 失败、HTTP 502 或工具面不足时才使用本命令行 Python 兜底。
- 修改临时脚本或生成代码文件时，遵守 `../orion-code-style/SKILL.md` 的 CRLF 和缩进要求。

详细步骤、脚本模板和已验证坑位见：

`references/orion-python-blueprint-assets.zh-CN.md`

## 关键约束

- 不编辑引擎源码；只执行引擎命令行工具。
- 缺失资产检查先用 `EditorAssetLibrary.does_asset_exist`，不要直接 `load_asset` 让日志产生错误。
- `generated_class` 在 UE Python 里可能是属性，也可能是方法，脚本必须兼容两种形式。
- `KismetCompilerLibrary` 不一定暴露；优先尝试 `BlueprintEditorLibrary.compile_blueprint`，没有编译入口时记录 warning 并保存。
- 普通 `Blueprint` 不一定能通过 `get_editor_property("parent_class")` 读取父类；重设父类优先用 `BlueprintEditorLibrary.reparent_blueprint`，验证父类时读取 GeneratedClass/CDO 可用属性或用 `.uasset` 二进制字符串确认 `NativeParentClass`。
- 任务完成后仍要跑项目代码风格检查和目标构建；资产保存不等于代码可编译。
