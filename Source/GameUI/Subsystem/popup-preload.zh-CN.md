# 弹窗预热使用说明

## 功能入口

`UGameUIMessagingSubsystem` 提供两类弹窗入口：

- `PreloadPopupsForContext` / `PreloadPopupDefinitionsForContext`：只加载和预热弹窗资源，不入队、不显示。
- `ShowPopupsForContext` / `ShowPopupDefinitionsForContext`：按 context 评估 Definition，构建 descriptor，并进入通用弹窗队列展示。

启动前端默认由 `UGameUIFrontendPopupFlowAction::PreloadAction()` 在 LoadingScreen 阶段调用预热入口，再由 `ExecuteAction()` 在主菜单入栈后调用展示入口。

## 可创建的蓝图或数据

- 弹窗 Definition 蓝图：父类选择 `UGameUIPopupDefinitionBase`、`UGameUIHtmlPopupDefinition`、`UGameUIRewardPopupDefinition` 或项目自定义子类。
- 弹窗外壳 Widget Blueprint：父类选择 `UUI_PopupScreen`，填到 Definition 的 `PopupScreenClass`。
- 弹窗内容 Widget Blueprint：父类选择 `UUI_PopupContentWidget` 或其子类，填到 Definition 的 `ContentWidgetClass`。
- 前端启动 Flow Action 蓝图：父类选择 `UGameUIFrontendPopupFlowAction`，配置 `PopupContext` 和 `PopupDefinitionClasses`。

## 关键属性配置

- `PopupContext`：用于区分启动、活动、奖励、商店等触发上下文。
- `PopupDefinitionClasses`：调用方持有的候选弹窗 Definition 类列表，不放到 `GameUIMessagingSubsystem` 的全局配置。
- `PopupScreenClass`：每个弹窗自己的外壳样式；未配置时使用 `PopupDialogClass` fallback。
- `ContentWidgetClass`：每个弹窗自己的内容 Presenter；未配置时根据 `ContentKind` 使用文本、奖励或 HTML 默认内容类。
- `Priority`、`PopupGroup`、`bReplaceQueuedPopupsInGroup`：控制队列顺序和同组替换。

## 配置文件入口

`Config/DefaultGame.ini` 的 `[/Script/GameUI.GameUIMessagingSubsystem]` 只配置 fallback：

- `ConfirmationDialogClass`
- `ErrorDialogClass`
- `PopupDialogClass`

不要在这里新增全局 `PopupDefinitionClasses`。启动弹窗候选列表由前端 Flow Action 蓝图持有，奖励、商店、活动等系统也应各自持有自己的候选列表。

## 运行时触发方式

1. 调用方先调用 `PreloadPopupsForContext` 或 C++ 的 `PreloadPopupDefinitionsForContext`。
2. 子系统异步加载 Definition 类，并用当前 `PopupContext` 和 `LocalPlayer` 构建可展示 descriptor。
3. 子系统异步加载 descriptor 指定的 `PopupScreenClass` 和 `ContentWidgetClass`。
4. 子系统创建一次外壳 Widget 和内容 Widget，并调用 `TakeWidget()` 触发 Slate/UMG 初始构建；内容类是 `UUI_PopupContentWidget` 时还会调用 `SetupPopupContent()`。
5. 后续调用展示入口时，首个弹窗不需要在用户可见帧里再加载这些类或首次构建 Widget。

## 验证步骤

1. 首次启动游戏，确认日志中 `Try Preload Startup Popups` 发生在 `CompleteStartupLoadingScreen()` 之前。
2. 首次弹出启动公告、广告、奖励或 HTML 弹窗，确认显示瞬间不再出现明显卡顿。
3. 使用两个不同 `PopupScreenClass` 的 Definition，确认两个样式都能正常显示，不会被 `PopupDialogClass` 强制覆盖。
4. HTML 弹窗确认 WebBrowser 可用时正常加载，插件不可用时仍走内容控件的降级逻辑。
5. 回到主菜单后确认首次启动弹窗不会再次执行。

## 常见扩展点

- 新增一种弹窗样式：新增 `UUI_PopupScreen` Widget Blueprint，并在对应 Definition 设置 `PopupScreenClass`。
- 新增一种内容展示：新增 `UUI_PopupContentWidget` 子类或 Widget Blueprint，并在对应 Definition 设置 `ContentWidgetClass`。
- 新增一个需要预热的 Flow Action：覆盖 `UOrionFlowAction::PreloadAction()`，在回调完成前不要继续前端 Flow。
- 需要在非启动场景预热弹窗：由对应业务系统在自己的 loading、转场或后台准备阶段调用 `PreloadPopupsForContext`，不要把候选 Definition 塞进全局配置。
