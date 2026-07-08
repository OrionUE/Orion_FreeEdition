---
name: orion-gameui
description: "Use when designing, implementing, extending, validating, or debugging Orion GameUI runtime systems: Source/GameUI, CommonUI layer stacks, UGameUIManagerSubsystem, UGameUIPolicy, UPrimaryGameLayout, UUI_ActivatableWidget, UGameHUDLayout, UIExtension, GameFeature Add Widgets, UI messages, dialogs, popup queues, reward or ad or news or HTML popups, UI theme, CommonInput action domains, online/settings/loading-screen UI integration, and OrionBrowser HTML/CSS embedding."
---

# Orion GameUI

本 Skill 是 Orion GameUI 的总入口，用于管理 `Source/GameUI`、CommonUI 层栈、UI Subsystem、HUD layout、弹窗系统、UIExtension、主题、输入域、在线/设置/加载屏 UI 集成，以及 HTML/CSS 嵌入。

详细中文流程见：

`references/orion-gameui.zh-CN.md`

## 工作流

1. 先读取 `.uproject`、`Source/GameUI/GameUI.Build.cs`、`Config/DefaultGame.ini` 和相关 `Source/GameUI` 类，确认插件、模块依赖、配置节和真实入口。
2. 写代码或功能前先遵守 `.agents/skills/orion-framework-architecture/SKILL.md` 和 `.agents/skills/orion-code-style/SKILL.md`。
3. 默认采用 `LocalPlayer Subsystem / CommonUI Layer / UIExtension / 数据描述符` 组合，不把 UI 业务直接塞进 Widget Blueprint graph。
4. 页面和弹窗进入 CommonUI 层栈；默认使用 `UI.Layer.Menu`、`UI.Layer.Game`、`UI.Layer.GameMenu`、`UI.Layer.Modal`，不要直接 `AddToViewport` 绕过 `UPrimaryGameLayout`。
5. Widget Blueprint 主要负责美术布局、动画、BindWidget 和默认变量；可复用流程放在 GameUI C++ 基类、Subsystem、GameFeature Action 或 UIExtension。
6. 弹窗、奖励、公告、活动、HTML 内容等统一走 `UGameUIMessagingSubsystem` 的队列和数据描述符；不要为每类运营弹窗拆孤立 Subsystem。
7. 不要在 `UGameUIMessagingSubsystem` 或 `DefaultGame.ini` 放一个全局统一的弹窗 Definition 列表；启动页、奖励系统、商店、活动入口等调用方自己持有候选 Definition 蓝图类，再把列表传给通用队列。
8. 弹窗外壳只负责 CommonUI Modal、标题、副标题、动作按钮、尺寸、关闭和内容插槽；HTML、奖励、图片、视频等具体控件必须放到 `UUI_PopupContentWidget` 子类或对应 Widget Blueprint 子类。
9. 启动游戏后的弹窗检测属于前端 ControlFlow 扩展点；资源预热必须尽量发生在 LoadingScreen 仍可见的前置 Flow，正式展示放在 `UOrionFrontendStateComponent::FlowStep_TryShowMainScreen` 后的独立 Flow；启动页 Widget 只负责按任意键后继续前端流程。
10. 实现后验证代码风格、Editor/Game 构建、Widget Blueprint 编译保存、配置读取和必要的 packaged/cook 路径。

## 路由

- UMG、Widget Blueprint、BindWidget、WidgetTree、MCP 创建/编译/保存 UI 资产时，读取 `.agents/skills/orion-umg/SKILL.md`。
- `Content/UI` 蓝图框架、`BP_UIPolicy`、`W_OverallUILayout`、`BP_CommonInputData`、`DA_GameUIInputActionDomainTable`、`DT_UniversalActions` 或 UI 蓝图模仿/生成时，读取 `.agents/skills/orion-ui-blueprint-framework/SKILL.md`。
- UI 输入、返回键、CommonInput action、Action Domain、按键图标或手柄 glyph，配合 `.agents/skills/unreal-commoninput/SKILL.md`；涉及 gameplay input 再配合 `.agents/skills/unreal-enhancedinput/SKILL.md`。
- UI 文案、按钮文本、RichText、本地化 gather 或多语言预览，读取 `.agents/skills/orion-localization-framework/SKILL.md`。
- UI 资产、图标、奖励图、活动素材、Splash 或目录命名，读取 `.agents/skills/orion-asset-management/SKILL.md`。
- 加载屏、启动屏、shader 编译加载 UI 或加载屏视频，读取 `.agents/skills/orion-loading-screen-framework/SKILL.md` 和 `.agents/skills/orion-movie-media-framework/SKILL.md`。
- GameFeature 添加 HUD layout、菜单、UIExtension slot widget 或玩法 UI 时，读取 `.agents/skills/orion-gamefeatures/SKILL.md` 和 `.agents/skills/orion-gamemode-experience-framework/SKILL.md`。
- 好友、邀请、Session/Lobby、在线房间或 `GameUI/Online`，读取 `.agents/skills/orion-online-steam-framework/SKILL.md`。
- UI toast、击杀提示、通知 feed、GameplayTag channel 或跨系统 UI 消息，读取 `.agents/skills/orion-gameplay-message-router/SKILL.md`。
- 配置、平台覆盖、CommonUI/CommonInput config 或 packaged staging，读取 `.agents/skills/orion-project-config/SKILL.md` 和 `.agents/skills/orion-packaging/SKILL.md`。
- OrionBrowser、CEF 内核、H.264/AAC 视频、`UOrionBrowserWidget` 或 `UGameUIWebBrowser` 底层浏览器运行时，读取 `.agents/skills/orion-browser-framework/SKILL.md`。
