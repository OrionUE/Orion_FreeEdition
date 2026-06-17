---
name: unreal-ui-blueprint-framework
description: "Use when Codex works on the reusable Unreal Content/UI Blueprint framework: Art, HUD, Interaction, Menu, Online, Settings Widget Blueprints, BP_UIPolicy, W_OverallUILayout, BP_CommonInputData, DA_GameUIInputActionDomainTable, DT_UniversalActions, GameUI C++ UI base classes, CommonGame UI policy/layers, CommonInput action data, GameSettings UI assets, Online/Friends UI, Indicator interaction UI, UITheme assets, LoadingScreen UI links, MCP UMGToolSet, or OrionProjectToolsets UI automation."
---

# Unreal UI Blueprint Framework

本 Skill 是 `Content/UI` 蓝图框架的入口。它不替代源码和 MCP 回读；它负责告诉 Codex 先读哪份文档、用哪组 C++ 基类契约、如何模仿现有 UI 蓝图，以及何时补项目语义 Toolset。

## Workflow

1. 处理任何 `Content/UI` 蓝图前，先读取 `references/ui-blueprint-framework.zh-CN.md`，确认 UI 总架构、资产分组和 C++/Blueprint 边界。
2. 根据资产类型继续读取分册：
   - Root、`BP_UIPolicy`、`W_OverallUILayout`、CommonInput、Action Domain、`DT_UniversalActions`：读 `references/ui-root-input.zh-CN.md`。
   - HUD、前端菜单、GameMenu、Archive、按钮、Tab、列表：读 `references/ui-menu-hud.zh-CN.md`。
   - Settings、`GameSettingRegistryVisuals`、设置项 Entry、输入改键 UI：读 `references/ui-settings.zh-CN.md`。
   - Online/Friends、Session UI、Interaction、Indicator、Key Brush：读 `references/ui-online-interaction.zh-CN.md`。
   - Art、Theme、Themed widgets、主题色和美术框：读 `references/ui-theme-art.zh-CN.md`。
   - MCP 读取、编辑、保存、补 Toolset：读 `references/ui-mcp-editing.zh-CN.md`。
3. 修改或创建蓝图前，连接 UE 5.8 MCP，优先用官方 `AssetTools`、`ObjectTools`、`BlueprintTools`、`UMGToolSet` 回读 parent、WidgetTree、Graph、默认属性和依赖。
4. 只有官方工具无法安全表达项目语义时，才在 `OrionProjectToolsets` 增加小型专用函数；不要恢复旧的泛用 Graph/Object Toolset。
5. Widget Blueprint 主要放布局、动画、BindWidget、样式和默认变量；业务流程、保存/应用、Session、交互权威、输入注册默认写在 C++ 基类、Subsystem、Registry、GameFeature Action 或 Ability 中。
6. 修改后必须编译、保存并重新回读资产；Widget Blueprint compile 不等于 `.uasset` 已保存。

## Core Documents

- `references/ui-blueprint-framework.zh-CN.md`：总览、资产职责矩阵、C++ 基类矩阵、Mermaid 文本 UML 图和新增 UI 功能决策。
- `references/ui-root-input.zh-CN.md`：UI policy、PrimaryGameLayout、CommonInputData、ActionDomainTable、DataTable 行和返回键。
- `references/ui-menu-hud.zh-CN.md`：HUD、菜单、前端、Archive、按钮、Tab/List、Experience Add Widgets。
- `references/ui-settings.zh-CN.md`：GameSettings UI、VisualData、设置页、输入重绑定。
- `references/ui-online-interaction.zh-CN.md`：好友/邀请 UI、Session UI、交互提示 UI 和 Indicator。
- `references/ui-theme-art.zh-CN.md`：UIThemeData、ThemeSubsystem、ThemedArtBorder、主题资产和美术资源边界。
- `references/ui-mcp-editing.zh-CN.md`：MCP 工具调用、已验证事实、批量回读限制、编辑与 Toolset 扩展策略。

## 路由

- 查源码、父类、模块依赖或真实调用点时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 创建、命名、保存、移动或整理 UI 资产时，配合 `../unreal-asset-management/SKILL.md`。
- 普通 UMG / CommonUI / UIExtension 工作继续配合 `../unreal-umg/SKILL.md`；本 Skill 负责当前 `Content/UI` 资产族的具体约定。
- UI 输入、back/click、Action Domain、key brush、手柄图标，配合 `../unreal-commoninput/SKILL.md`。
- Settings UI 和可配置项，配合 `../unreal-game-settings-framework/SKILL.md`。
- LoadingScreen Widget 外观和加载生命周期，配合 `../unreal-loading-screen-framework/SKILL.md`。
- Online/Friends/Session UI，配合 `../unreal-online-steam-framework/SKILL.md`。
- Interaction/Indicator/key prompt UI，配合 `../unreal-inventory-interaction-framework/SKILL.md`。
- Feature 或 Experience 激活时添加 UI，配合 `../unreal-gamefeatures/SKILL.md`、`../unreal-gamemode-experience-framework/SKILL.md` 和 `../unreal-mcp-project-toolsets/SKILL.md`。
- 修改本 Skill 或沉淀新 UI 框架规则时，配合 `../ue-framework-skill-authoring/SKILL.md` 和系统 `skill-creator`。
