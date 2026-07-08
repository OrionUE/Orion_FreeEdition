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
- 处理 UMG/Widget Blueprint、UI 层级、Widget Tree 或 CommonUI 资产时，配合 `../orion-umg/SKILL.md` 和 `../orion-ui-blueprint-framework/SKILL.md`。
- 处理资产保存、重定向器、引用扫描或批量修复时，配合 `../orion-asset-management/SKILL.md`。
- 涉及 MCP 自动化读取/编译/保存 Blueprint 时，配合 `../orion-mcp-workflow/SKILL.md`。

## 验证

- 运行目标蓝图编译或项目的 Blueprint 编译命令。
- 检查日志中不再出现原始 missing class/function/variable/struct、orphaned pin 或 stale widget variable 错误。
- 打开并保存被修复资产，确认重启编辑器后错误不复现。
- 如果原始问题表现为运行崩溃，必须验证同一启动/PIE/Cook 路径。

## 常见问题

### 迁移后蓝图仍引用旧 C++ 类型导致 PIE 崩溃

- 现象：编辑器或 PIE 日志出现 `Unable to load <ComponentName> ... because its class (<OldClass>) does not exist`，随后调用栈落在组件方法内的空指针访问；或 `.uasset` 原始字符串仍命中旧类名、旧委托签名、旧 GameplayAbility 基类。
- 原因：Blueprint 资产在旧模块/旧类名下保存过，迁移后 C++ 类型已重命名，但缺少 CoreRedirect 或资产没有在新 redirect 下重新保存。
- 修复：先在 `Config/DefaultEngine.ini` 补 `ClassRedirects` / `FunctionRedirects` / `StructRedirects`，再用命令let重存受影响资产；不要手工改二进制 `.uasset`。
- 命令：PowerShell 调外部 exe 时，包含变量的等号参数必须写成字符串，例如 `"-Package=$Package"`、`"-script=$Script"`；裸写 `-Package=$Package` 可能把 `$Package` 原样传给 Unreal。
- 命令：如果命令行编辑器因本地构建加速插件或工作站插件版本不匹配而在启动阶段失败，可临时追加 `-DisablePlugins=<PluginName>`；如果日志提示包保存 changelist 高于当前编辑器，可追加 `-IgnoreChangelist` 后重存。
- 命令：项目路径优先传绝对 `.uproject` 路径，避免命令let在不同工作目录下把相对路径解析失败。
- 验证：重存日志必须出现 `Resaving package`、`packages were resaved` 和 `Success - 0 error(s)`；同时确认不再出现原始 `Unable to load`、旧类名 missing 或旧模块名 missing。
- 验证：Git LFS 管理的 `.uasset` 历史对比不能只看 `git show <rev>:<asset>`，那通常只是 LFS pointer；需要从本地 LFS 对象或工作区真实文件扫描旧字符串。
