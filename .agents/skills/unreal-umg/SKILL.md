---
name: unreal-umg
description: Use when creating, editing, validating, or debugging Unreal GameUI, CommonUI, UMG, Widget Blueprints, HUD layouts, UIExtension slots, CommonGame UI layers, UI C++ base classes, UUI_ActivatableWidget, UGameHUDLayout, buttons, tabs, list entries, UI messages/dialogs, themed widgets, loading screen widgets, project Splash startup images, editor/game splash PNG/BMP assets, GameFeature Add Widgets actions, and MCP UMGToolSet or OrionProjectToolsets Widget Blueprint automation.
---

# Unreal UI Framework / UMG

本 Skill 用于框架内 GameUI / CommonUI / UMG / UIExtension 工作。详细中文流程见：

`references/unreal-umg.zh-CN.md`

核心规则：

- UI 逻辑默认写在 C++ 基类或已有框架类中，Widget Blueprint/UMG 主要负责美术层、布局、BindWidget 和默认变量配置；不要把核心业务流程塞进 Widget Blueprint graph。
- 创建或修改正式 UI 资产前，读取 `.agents/skills/unreal-asset-management/SKILL.md`，UI 资产默认放 `Content/UI` 或 GameFeature 插件的 `Content/UI`。
- UI 进入玩法时优先通过 CommonGame 层栈、GameFeature `Add Widgets` 或 UIExtension 插槽接入；不要直接 `AddToViewport` 绕过 `UPrimaryGameLayout`。
- 新建全屏、菜单、弹窗、HUD 页面时优先继承 `UUI_ActivatableWidget`、`UGameHUDLayout` 或更具体的 GameUI C++ 基类；不要直接继承裸 `UUserWidget`/`UCommonActivatableWidget`，除非框架基类确实不适用。

## 路由

- 创建或编辑 Widget Blueprint 时，先读取 `.agents/skills/unreal-mcp-workflow/SKILL.md` 和 `.agents/skills/unreal-mcp-project-toolsets/SKILL.md`，确认 MCP、保存、`UMGToolSet`、`OrionBlueprintGraphToolset`、`SaveAsset` 的当前可用 schema。
- 创建或修改 UI toast、击杀提示、错误提示、通知 feed、Widget 监听 gameplay message 或用 GameplayTag channel 驱动 UI 时，读取 `.agents/skills/unreal-gameplay-message-router/SKILL.md`。
- 创建或修改玩家可见 UI 文案、TextBlock、RichText、CommonUI 按钮文本、设置项显示名/描述或本地化预览时，读取 `.agents/skills/unreal-localization-framework/SKILL.md`，静态文案必须使用可收集 `FText`。
- 创建或修改 CommonLoadingScreen 加载屏 host、进度条、动画结束回调、shader 编译加载 UI 或加载屏卡住问题时，读取 `.agents/skills/unreal-loading-screen-framework/SKILL.md`。
- 修改编辑器启动或游戏启动 Splash 图片时，文件放在 `Content/Splash`；如果用户提供其他图片格式，先转换并同时产出 `.png` 和 `.bmp`，再保存为对应固定文件名。具体目录和命名规则读取 `.agents/skills/unreal-asset-management/SKILL.md`。
- 用户要求从源图裁剪、导出、直接覆盖 `Content/Splash` 或删除旧 Splash `.uasset` 时，读取 `.agents/skills/splash-image-conversion/SKILL.md`，用脚本生成 `Splash` / `EdSplash` 的 PNG/BMP 四件套。
- 创建或修改设置页、设置列表 entry、`UUI_UserSettingScreen`、`UUI_GameWorldSettingScreen`、`UGameSettingVisualData`、设置 dirty/apply/cancel 或用户设置保存逻辑时，读取 `.agents/skills/unreal-game-settings-framework/SKILL.md`。
- 创建或修改交互提示 UI、`IndicatorSystem`、`UIndicatorManagerComponent`、`UIndicatorDescriptor`、`UUI_InteractionWithKeyBrush`、物品拾取/开箱提示、交互按键图标或多人交互 UI 时，读取 `.agents/skills/unreal-inventory-interaction-framework/SKILL.md`。
- 创建或修改 UI 中的视频播放、Bink/Media Texture、菜单背景视频或 Media Player 接入时，读取 `.agents/skills/unreal-movie-media-framework/SKILL.md`；加载屏视频还要读取 `.agents/skills/unreal-loading-screen-framework/SKILL.md`，视频文件仍放 `Content/Movies`。
- 创建或修改好友列表、Steam 邀请、Session/Lobby 列表、在线房间、`GameUI/Online` 或 OnlineSubsystem 相关 UI 时，读取 `.agents/skills/unreal-online-steam-framework/SKILL.md`。
- Feature 激活时添加 UI、HUD layout、UIExtension slot widget 或玩法独有菜单时，读取 `.agents/skills/unreal-gamefeatures/SKILL.md` 和 `.agents/skills/unreal-gamemode-experience-framework/SKILL.md`。
- UI 输入模式、返回键、点击动作、Action Domain、按键图标或手柄 glyph，配合 `.agents/skills/unreal-commoninput/SKILL.md`；与 gameplay action 共用 EnhancedInput 资产时再配合 `.agents/skills/unreal-enhancedinput/SKILL.md`。
- Widget Blueprint 编译不等于保存 `.uasset`；修改后必须单独保存并重新读取/验证资产落盘。
