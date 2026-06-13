---
name: unreal-editor-extension-framework
description: "Use when working on Unreal Engine editor extensions in this framework: Editor modules, custom UUnrealEdEngine subclasses, FEditorDelegates PIE hooks, CommonEditorExtension, ToolMenus toolbar buttons, Common Maps, DataValidation validators, GameplayCue editor delegates, editor-only Build.cs dependencies, DefaultEditor.ini, DefaultEditorKeyBindings.ini, DefaultEditorPerProjectUserSettings.ini, Content Browser defaults, MCP editor settings, and editor config routing."
---

# Unreal Editor Extension Framework

本 Skill 用于编写、修改或审查框架内编辑器扩展：项目 Editor module、自定义 EditorEngine、CommonEditorExtension 插件、编辑器工具栏、资产验证器、GameplayCue 编辑器委托和 editor ini 配置。

## 工作流

1. 先读取目标 `.uproject`、`Source/*.Target.cs`、目标 `*.Build.cs`、相关 `.uplugin` 和 `Config/DefaultEditor*.ini`，确认代码属于 Editor module、Editor plugin 还是普通 runtime。
2. 涉及 EditorEngine、PIE、ToolMenus、DataValidation、GameplayCue editor 或 DeveloperSettings 时，读取 `references/editor-extension-framework.zh-CN.md`。
3. Editor-only 依赖只能放在 Editor module 或 Editor plugin module；不要把 `UnrealEd`、`ToolMenus`、`DataValidation`、`GameplayAbilitiesEditor` 等依赖加进 Runtime 模块。
4. 编辑器启动行为优先放在模块 `StartupModule`/`ShutdownModule` 或自定义 `UUnrealEdEngine` 的受控生命周期中，并保证委托、菜单和样式注册可撤销。
5. 编辑器 UI 扩展优先使用 `UToolMenus::RegisterStartupCallback`，按钮可见性要避开 PIE/SIE 中不安全的操作。
6. 资产检查优先继承框架编辑器验证基类，让 DataValidation 自动发现；不要重复手动注册原生验证器。
7. editor ini 改动要区分项目默认配置、每项目用户默认配置、键位绑定、本地化配置和运行时 Engine 配置，并验证最终 config 层级。

## 路由

- 查类声明、父类生命周期、include、模块依赖或引擎 API 时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 判断代码落点、Editor module 与 Runtime module 边界、Target 选择时，配合 `../unreal-framework-architecture/SKILL.md`。
- 编辑器工具创建、保存、编译 Blueprint/UMG/Experience 等资产时，配合 `../unreal-mcp-project-toolsets/SKILL.md` 和 `../unreal-asset-management/SKILL.md`。
- GameplayCue 编辑器委托、Cue Notify 路径或 GameplayCue 资产规则，配合 `../unreal-gameplayabilities/SKILL.md` 和 `../unreal-gamefeatures/SKILL.md`。
- UMG、CommonUI、UIExtension 或 Widget 编辑器工具，配合 `../unreal-umg/SKILL.md` 和 `../unreal-commoninput/SKILL.md`。
- 打包、Cook、DataValidation commandlet 或 shipping 构建风险，配合 `../unreal-packaging/SKILL.md`。

## Reference

读取 `references/editor-extension-framework.zh-CN.md` 获取完整编辑器扩展手册，包括模块职责、CommonEditorExtension 源码规则、DataValidation 验证器模式、editor ini 配置和验证清单。

## 验证

- C++ 改动后至少构建 `<PROJECT_EDITOR_TARGET>`；从 `Source/*.Target.cs` 自动推断，不要在 Skill 或脚本中写死本机 Target。
- 新增或修改 editor config 后，用编辑器实际启动验证配置生效；MCP 配置还要验证 `/mcp` endpoint 和工具列表。
- 新增 DataValidation 验证器后，用 Content Validation 或 DataValidation commandlet 跑一个最小资产集。
