---
name: unreal-blueprint-migration-repair
description: "Use when repairing Unreal Engine Blueprint or UMG assets after migration between projects or engine versions, especially CompileAllBlueprints failures, Widget Blueprint compile failures, missing macro graphs, orphaned pins, missing functions, missing variables, missing structs, broken casts, wildcard pins, stale UMG widget variable GUIDs, CoreRedirect issues, GameMode default class loss, or runtime startup crashes that remain after Blueprint compile cleanup."
---

# Unreal Blueprint Migration Repair

本 Skill 用于处理 Unreal 工程迁移、插件迁移或 UE 版本升级后出现的大量 Blueprint/UMG 编译和引用损坏。

## 工作流

1. 先读取 `../unreal-source-code-navigator/SKILL.md`，确认当前工程、模块、插件、CoreRedirects 和引擎版本边界。
2. 优先收集真实错误：`CompileAllBlueprints`、编辑器日志、蓝图编译面板、Cook/UAT 日志和启动崩溃栈。
3. 按资产依赖层级排查：父类、接口、结构体、枚举、函数库、Widget Tree、GameMode/Pawn/Controller 默认类、DataAsset 和配置引用。
4. 对迁移重命名问题，先检查 `Config/DefaultEngine.ini` 的 CoreRedirects，再检查 C++ 类型、模块名、插件名和蓝图父类路径是否一致。
5. 对 UMG 损坏，重点检查 Widget 变量、绑定函数、命名冲突、stale GUID、orphaned pin 和缺失子 Widget。
6. 修复时优先使用 Unreal Editor、命令let、MCP 或资产级保存流程；不要手工编辑二进制 `.uasset`。
7. 修复后重新运行蓝图编译、保存受影响资产，并用最小 PIE/启动路径验证不是只清掉了编译错误。

## 路由

- 查源码、模块依赖、CoreRedirect 和引擎版本差异时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 处理 UMG/Widget Blueprint、UI 层级、Widget Tree 或 CommonUI 资产时，配合 `../unreal-umg/SKILL.md` 和 `../unreal-ui-blueprint-framework/SKILL.md`。
- 处理资产保存、重定向器、引用扫描或批量修复时，配合 `../unreal-asset-management/SKILL.md`。
- 涉及 MCP 自动化读取/编译/保存 Blueprint 时，配合 `../unreal-mcp-workflow/SKILL.md`。

## 验证

- 运行目标蓝图编译或项目的 Blueprint 编译命令。
- 检查日志中不再出现原始 missing class/function/variable/struct、orphaned pin 或 stale widget variable 错误。
- 打开并保存被修复资产，确认重启编辑器后错误不复现。
- 如果原始问题表现为运行崩溃，必须验证同一启动/PIE/Cook 路径。
