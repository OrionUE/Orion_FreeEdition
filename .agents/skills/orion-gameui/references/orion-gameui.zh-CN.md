# Orion GameUI 工作流

## 适用边界

本 Skill 管理 Orion 的 GameUI 运行时框架和跨 UI 系统约定，覆盖：

- `Source/GameUI` 模块、`GameUI.Build.cs`、GameUI Subsystem、CommonUI 基类和日志。
- `UGameUIManagerSubsystem`、`UGameUIPolicy`、`UPrimaryGameLayout`、CommonUI layer stack。
- `UUI_ActivatableWidget`、`UGameHUDLayout`、按钮、Action glyph、主题、设置/在线/加载屏集成。
- UIExtension、GameFeature `Add Widgets`、HUD layout、菜单和可插拔 UI。
- `UGameUIMessagingSubsystem`、确认/错误弹窗、通用 popup 队列、奖励/公告/广告/HTML 弹窗。
- `OrionBrowser` HTML/CSS 嵌入和平台降级。

`orion-umg` 仍然负责 UMG / Widget Blueprint / WidgetTree / MCP 资产编辑细节；`orion-ui-blueprint-framework` 仍然负责 `Content/UI` 蓝图资产体系。不要再为单个弹窗子系统单独创建窄 Skill；弹窗属于本 Skill 的一个章节。

## 架构默认值

默认组合：

1. `Subsystem service`：GameUI 运行时入口优先放 `UGameUIManagerSubsystem`、`UGameUIMessagingSubsystem`、主题/设置/字幕等已有 subsystem。
2. `CommonUI layer stack`：页面、菜单、弹窗走 `UPrimaryGameLayout` 注册的 `UI.Layer.*`，不要直接 `AddToViewport`。
3. `UIExtension`：GameFeature 或运行时插槽 UI 通过 GameplayTag slot 注册，不在宿主 HUD 写死全部玩法面板。
4. `Data descriptor`：弹窗、奖励、公告、HTML 内容等通过数据描述符携带内容、样式类、优先级和回调。
5. `Widget Blueprint as presentation`：Blueprint 负责布局、动画、BindWidget 和默认样式，核心流程放 C++。

实现前必须确认：

- 代码落点：`Source/GameUI`、GameFeature Runtime、宿主 Game 模块、Online/Steam 插件还是设置/加载屏框架。
- 数据/资产：`Content/UI`、GameFeature `Content/UI`、`Config/DefaultGame.ini`、DataAsset 或 GameplayTag。
- 通信方式：直接调用、delegate、GameplayMessage、UIExtension、CommonUI action、GameFeature action。
- 验证目标：Editor、Game、Client、Server、Steam、Widget Blueprint 编译保存、cook/stage。

## 配置入口

常见配置集中在 `Config/DefaultGame.ini`：

- `[/Script/GameUI.GameUIManagerSubsystem]`
	- `DefaultUIPolicyClass`：默认 UI policy，通常由 Blueprint 配置 layout class。
	- `DevelopmentHUDClass`：开发 HUD，通常只用于调试。
- `[/Script/GameUI.UIThemeSubsystem]`
	- `DefaultTheme`：默认 UI 主题 DataAsset。
- `[/Script/GameUI.GameUIMessagingSubsystem]`
	- `ConfirmationDialogClass`：确认弹窗 fallback class。
	- `ErrorDialogClass`：错误弹窗 fallback class。
	- `PopupDialogClass`：通用 popup 默认壳，只是 fallback，不是唯一样式。
	- 不注册全局 `PopupDefinitionClasses`；弹窗候选 Definition 由启动页、奖励系统、商店、活动入口等调用方自己持有。
- CommonInput 配置：
	- `InputData`、`ActionDomainTable`、`DT_UniversalActions`、平台 controller data。

修改配置时读取 `orion-project-config`；涉及平台/cook/stage 时读取 `orion-packaging`。

## UI 根布局

运行时根流程：

1. `UGameUIManagerSubsystem` 从配置读取默认 UI policy。
2. `UGameUIPolicy` 为每个 `UCommonLocalPlayer` 创建 `UPrimaryGameLayout`。
3. 根 layout Widget Blueprint 注册 `UI.Layer.Game`、`UI.Layer.GameMenu`、`UI.Layer.Menu`、`UI.Layer.Modal`。
4. 业务页面通过 CommonUI layer stack 推入对应层。

规则：

- 全屏页面、菜单、弹窗、HUD layout 必须是 `UCommonActivatableWidget` 派生类；项目内优先用 `UUI_ActivatableWidget` 或更具体 GameUI 基类。
- 弹窗默认进入 `UI.Layer.Modal`。
- 前端菜单默认进入 `UI.Layer.Menu`。
- 玩法 HUD layout 默认由 Experience / GameFeature `Add Widgets` 添加。
- 局部可插拔 UI 使用 UIExtension slot，不把 slot 内容硬编码在根 HUD。

## 开发 HUD 排查

`UDevelopmentHUDLayout` 是开发期调试入口，不是普通业务 HUD layout。排查 `Orion.ShowDevelopmentHUD`、开发者面板不显示、同一关卡内偶发消失时，先区分三层状态：

1. 外层 Widget 是否存在并加到 Player Screen：由 `AGameHUD::BeginPlay()` 调 `UGameUIManagerSubsystem::CreateHUDLayout()` 和 `AddDevelopmentHUDToViewport()`。
2. 控制台命令状态：`Orion.ShowDevelopmentHUD` 必须注册为带 World/Args 的 ConsoleCommand，由 `UGameUIManagerSubsystem` 解析本地 PlayerController，必要时创建、重建、重新 `AddToPlayerScreen()` 并同步可见状态。
3. 面板激活状态：`HandleDevelopmentAction()` 切换 `bDevelopmentHUDActivated`，再调用蓝图事件 `K2_HandleDevelopmentAction`；Widget Blueprint 可能在这里对 `MasterDevelopmentWidget`、`GameplayDevelopmentWidget`、`AudioDevelopmentWidget` 或 `DevelopmentOutline` 调 `SetVisibility`。

同一关卡内“偶发消失”优先查以下点：

- `DevelopmentActionKeys` 是否与玩法或编辑器常用输入冲突。当前 Widget Blueprint 可配置组合键，例如 `LeftControl + F2`；`FUIComboActionBinding` 每帧用 `APlayerController::IsInputKeyDown` 检测组合键，触发后会切换 `bDevelopmentHUDActivated`，所以误按组合键会关闭子面板。
- `ShouldShowDevelopmentHUDInPackage=False` 只能作为没有显式控制台请求时的默认隐藏策略；不要在每次 Add 时无条件 `Exec("Orion.ShowDevelopmentHUD 0")`，否则会覆盖用户手动显示请求。
- `Orion.ShowDevelopmentHUD 1` 必须恢复外层可见性并强制刷新 `bDevelopmentHUDActivated` / `K2_HandleDevelopmentAction`，否则子面板被 `Hidden/Collapsed` 后会出现“命令执行但面板不显示”。快捷键路径也要先判断外层 Widget 是否真实可见；外层隐藏、透明或禁用时，不能再盲目反转激活状态。
- `RemoveDevelopmentHUDToViewport()` 移除 Widget 后应清空 `DevelopmentHUD` 缓存。跨世界、重启玩家或 HUD 重建路径下，如果 OwningPlayer/World 变化，应按新 Player 重新创建。

最小验证顺序：

1. 在 `SetDevelopmentHUDRequestedVisible()`、`CreateHUDLayout()`、`AddDevelopmentHUDToViewport()`、`RemoveDevelopmentHUDToViewport()`、`HandleDevelopmentAction()` 加临时日志，确认消失前最后一次路径是命令请求、Widget 移除，还是 action 切换。
2. 消失后先执行 `Orion.ShowDevelopmentHUD 1`；若没有恢复，继续查控制台命令是否注册、能否解析到 game world 和本地 PlayerController。
3. 临时改掉或清空 `DevelopmentActionKeys` 做对照；如果不再偶发消失，说明是组合键误触或输入冲突。
4. 如果是 HUD 重建导致，优先把开发 HUD 生命周期迁到 LocalPlayer/UI Subsystem，或在 `UGameUIManagerSubsystem` 中按 OwningPlayer/World 失配重建。

## GameUI 基类选择

| 需求 | 默认入口 | 备注 |
| --- | --- | --- |
| 普通页面、菜单、弹窗 | `UUI_ActivatableWidget` 或子类 | 设置输入模式、返回键和 desired focus。 |
| 玩法 HUD 根 | `UGameHUDLayout` | 由 Experience / GameFeature 添加。 |
| 通用按钮 | `UUI_ButtonBase` | 文本、图标和 CommonInput glyph 逻辑在基类。 |
| Action bar 按钮 | `UUI_BoundActionButton` | 绑定 CommonUI action。 |
| 输入图标 | `UUI_ActionWidget` | 根据当前输入设备显示 glyph。 |
| 设置页 | `UUI_UserSettingScreen` / `UUI_GameWorldSettingScreen` | 逻辑读取 game settings Skill。 |
| 加载屏 | Loading screen host / subsystem | 不手动 AddToViewport。 |
| 在线 UI | `GameUI/Online` 基类 | 业务走 Online/Steam/session flow。 |
| 弹窗 | `UUI_PopupScreen` 或其 Widget Blueprint 子类 | 内容走 descriptor，样式类可按 popup 指定。 |

## 弹窗系统

### 适用场景

- 广告、活动、公告、礼包、每日登录、首充、商店优惠。
- 奖励领取、经验发放、等级提升、成就解锁、物品获得、补偿发放。
- 确认、错误、警告、二次确认、退出确认、网络失败、权限失败。
- 弹窗排队、优先级、去重、分组替换、自动关闭、外部点击关闭、按钮回调。
- HTML/CSS 内容嵌入。

### 架构落点

默认选择 `LocalPlayer Subsystem + CommonUI Modal Layer + 数据描述符`：

1. 业务入口在 `UGameUIMessagingSubsystem`。
2. 弹窗请求用 `UGameUIPopupDescriptor` 或等价数据对象描述。
3. 展示控件使用 `UUI_PopupScreen` 或其 Widget Blueprint 子类。
4. 弹窗进入 `UI.Layer.Modal`。
5. 类型、分组、按钮、奖励行、HTML 内容、优先级用 GameplayTag、FText、soft class 和软资源表达。
6. 确认/错误弹窗仍保留 `UCommonMessagingSubsystem` 兼容路径；复杂弹窗走 popup 队列。

`PopupDialogClass` 只是全局默认壳和配置缺失时的 fallback，不代表所有弹窗只能用一个样式。不同广告、活动、公告、奖励、HTML 或错误弹窗需要不同外观时，在 `UGameUIPopupDescriptor.PopupScreenClass` 指定对应 `UUI_PopupScreen` Widget Blueprint 子类；Subsystem 必须先异步加载该类，再推入同一个 `UI.Layer.Modal` 队列。

弹窗 Definition 来源必须由调用方或业务 Provider 持有，不要做 `ShowStartupPopups`、`ShowRewardPopups` 这类流程函数，也不要把所有 Definition 统一塞进 `GameUIMessagingSubsystem` 配置。推荐模式是：调用方暴露 `TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>`，在合适时机调用 `ShowPopupDefinitionsForContext(Context, DefinitionClasses, CompletionCallback)`；Subsystem 只负责异步加载、校验、构建 descriptor、排队和展示。

`UUI_PopupScreen` 是弹窗外壳 Presenter，只能持有标题、副标题、尺寸、关闭区域、动作按钮和通用内容插槽。不要把 `Panel_Rewards`、`WebBrowser_Html`、视频播放器、图片轮播或任何内容类型专属控件放进外壳。具体内容必须放到 `UUI_PopupContentWidget` 子类，例如 `UUI_HtmlPopupContent`、`UUI_RewardPopupContent`、`UUI_TextPopupContent` 或项目自己的 Widget Blueprint 子类，并通过 descriptor / definition 的 `ContentWidgetClass` 选择。

不要把弹窗写成关卡 Actor、临时 Manager、HUD 直接添加 Widget 或 Level Blueprint 流程。

### 启动前端弹窗 Flow

启动游戏后的广告、奖励、公告等检测逻辑属于前端流程扩展点，不属于启动页 Widget。

正确结构：

1. `UUI_StartUpScreen` 只负责按任意键、触发 `OnPressedAnyKey`、调用 `ContinueFrontendFlow()`；不要在启动页保存 `PopupDefinitionClasses`，也不要直接调用 `UGameUIMessagingSubsystem`。
2. `UOrionFrontendStateComponent` 在 `FlowStep_TryShowMainScreen` 后追加独立步骤，例如 `FlowStep_TryEvaluateStartupPopups`。
3. 前端状态组件只持有 `TSoftClassPtr<UOrionFlowAction>` 列表，负责异步加载、实例化并顺序执行 Action，不直接依赖 GameUI 模块的弹窗实现。
4. GameUI 侧实现 `UGameUIFrontendPopupFlowAction`，由它持有 `PopupContext` 和 `PopupDefinitionClasses`，并调用 `UGameUIMessagingSubsystem::ShowPopupDefinitionsForContext`。
5. Blueprint 配置上创建 `BP_StartupPopupFlowAction`，父类选择 `GameUIFrontendPopupFlowAction`，配置 `PopupContext=Startup` 和广告/奖励等 Definition 类；再把该 Flow Action 配到前端状态组件 Blueprint 的 `StartupPopupFlowActionClasses`。

启动首弹卡顿的默认修复策略是预热，不是把所有弹窗样式合并成一个类。`UOrionFlowAction` 派生类如果首次执行会加载 UI 资源，应覆盖 `PreloadAction()`；`UGameUIFrontendPopupFlowAction::PreloadAction()` 必须调用 `UGameUIMessagingSubsystem::PreloadPopupDefinitionsForContext()`，让 Definition 类、descriptor 指定的 `PopupScreenClass`、`ContentWidgetClass` 和内容 Widget 初始构建在 LoadingScreen 仍可见时完成。正式展示仍放在 `FlowStep_TryEvaluateStartupPopups`，并且主菜单页已入栈后再进入 `UI.Layer.Modal`。

启动专用步骤需要在 `UOrionFrontendStateComponent::BeginPlay()` 捕获一次 `ULoadingScreenManager::GetIsStartUpLoadingScreen()` 作为本轮前端 Flow 快照，再由后续步骤读取该快照。不要在 `FlowStep_TryJoinRequestedSession`、`FlowStep_TryEvaluateStartupPopups` 等后置步骤中临时读取 LoadingScreen 的 startup 标记；`TryShowPressStartScreen` / `TryShowMainScreen` 可能已经调用 `CompleteStartupLoadingScreen()` 并清掉该标记，导致首次启动判断失真。返回主菜单后，新的前端组件会捕获到非 startup 状态，启动专用 Join/Popup 步骤应直接 `ContinueFlow()`。

这种结构避免 `ShowStartupPopups`、`ShowRewardPopups` 这类流程函数扩散，也避免 `OrionGame` 模块反向依赖 `GameUI`。其他界面需要类似检测时，优先复用通用 `UOrionFlowAction` 或在对应 Flow 宿主上建立同类 Action 扩展点，而不是把业务写进页面 Widget。

迁移旧启动页配置时，如果 C++ 已移除启动页上的旧属性，但 `W_StartUp` 仍在资产依赖中报告旧广告 Definition，先用单包 `ResavePackages -Package=/Game/UI/Menu/W_StartUp` 强制重存，再重新跑资产依赖验证。普通 Blueprint 保存有时不会立刻清理旧属性留下的导入表。

### 内容模型

通用 popup descriptor 应覆盖：

- 标识：`PopupId`、`PopupType`、`PopupGroup`。
- 排队：`Priority`、同组替换、排队取消、当前弹窗主动关闭。
- 关闭：是否可关闭、是否点击外部关闭、自动关闭秒数。
- 表现：默认弹窗壳、每个 descriptor 指定的 `PopupScreenClass`、窗口尺寸和可替换 Widget Blueprint。
- 内容：标题、副标题、内容 Widget 类、富文本正文、主视觉图、奖励列表、自定义 Widget、HTML 字符串、HTML URL。标题、副标题和正文都必须视为可选字段；奖励弹窗可以没有标题。内容字段可以留在 descriptor，但具体控件不能放进 `UUI_PopupScreen`。
- 按钮：按钮 Id、显示文本、CommonUI 输入 Action、GameplayTag、通用结果类型、是否关闭弹窗。
- 回调：Blueprint 动态委托和 C++ native delegate 都要能拿到 action、tag、result、dismiss 状态。

奖励、经验、物品等结果弹窗不要只传字符串；至少保留奖励名、描述、数量、图标和 tag，方便后续动画、音效、遥测和本地化。

### 内容 Widget 分层

推荐分层：

1. `UGameUIPopupDefinitionBase`：Blueprint 可配置的数据源，负责上下文、优先级、分组、动作、外壳类、内容类和校验入口。
2. `UGameUIPopupDescriptor`：运行时请求对象，承载本次弹窗的数据快照和结果回调。
3. `UUI_PopupScreen`：CommonUI 外壳，只负责 Modal layer、窗口、标题、副标题、内容插槽、按钮、关闭和结果回调。
4. `UUI_PopupContentWidget`：内容 Presenter 基类，接收 descriptor 后更新自己的 BindWidget。
5. 具体内容子类：HTML、奖励、文本、图片、视频、活动页等各自维护自己的 BindWidget 和表现逻辑。

新增一种内容类型时，优先新增 `UUI_PopupContentWidget` C++ 子类或 Widget Blueprint 子类，并让对应 Definition 设置 `ContentWidgetClass`。只有需要新增业务数据字段或验证规则时才新增 Definition 子类；不要把新控件塞回 `UUI_PopupScreen`。

## HTML/CSS 嵌入

项目 HTML/CSS/视频嵌入默认使用 `OrionBrowser`，不要再新增对引擎 `WebBrowserWidget` / `UWebBrowser` 的依赖。

- 插件：`Plugins/OrionBrowser/OrionBrowser.uplugin`。
- 通用 UMG 类：`UOrionBrowserWidget`。
- GameUI 兼容类：`UGameUIWebBrowser`。
- 能力：`LoadURL`、`LoadString`、`ExecuteJavascript`、URL/标题变化、加载状态、拦截新窗口、控制台消息。
- 支持平台：v1 仅 Win64；Server target 不链接 CEF runtime。

项目使用规则：

1. `.uproject` 启用 `OrionBrowser`，禁用 `WebBrowserWidget`。
2. `GameUI.Build.cs` 只在 Win64 非 Server 下加入 `OrionBrowser`、`OrionBrowserWidget` 依赖，并定义 `GAMEUI_WITH_ORION_BROWSER`。
3. C++ 中所有 OrionBrowser Slate/include/调用逻辑都放在 `GAMEUI_WITH_ORION_BROWSER` 保护下；反射成员不要放进普通预处理块。
4. HTML 字符串优先用 `LoadString(Html, BaseURL)`；远程页面用 `LoadURL(URL)`。
5. HTML 内容必须能降级：插件不可用时显示普通文本或错误提示，不让弹窗系统整体崩溃。
6. GameUI 内嵌网页优先使用 `UGameUIWebBrowser`；新的通用蓝图可以直接使用 `UOrionBrowserWidget`。
7. HTML 弹窗默认使用 `UGameUIWebBrowser.CursorPolicy=ForceDefault`；如果自定义 `WebBrowser_Html` 直接放 `UOrionBrowserWidget`，弹窗代码必须在加载前设置 `CursorPolicy=GameControlled`。
8. 如果网页 CSS cursor 导致项目软件光标外又出现系统手型/抓手光标，根修复应落在 `OrionBrowser` 插件的 `EOrionBrowserCursorPolicy` / `UOrionBrowserWidget.CursorPolicy` / `FOrionCEFWebBrowserWindow::OnCursorChange` 策略层，GameUI 只负责默认选 `ForceDefault` 或 `GameControlled`；不要修改 popup Definition、启动 Flow 或引擎源码。
9. 单纯注入 `cursor: default !important` 不是完整修复。CEF 仍可能通过 `OnCursorChange` 把 `CT_HAND`、`CT_GRAB`、`CT_GRABBING` 或自定义 cursor 写入 Slate 并触发 `QueryCursor()`，所以需要插件层 cursor policy。
10. 涉及 CEF 版本、H.264/AAC、`OrionBrowserHelper`、runtime staging、cursor policy 或导入脚本时，先读取 `../orion-browser-framework/SKILL.md`。

## UIExtension 和 GameFeature UI

GameFeature 添加 UI 时优先使用 `UGameFeatureAction_AddWidgets`：

- 整屏 layout、菜单或 HUD root：加入 `Layout`，目标 class 必须是 `UCommonActivatableWidget` 派生。
- 局部 HUD 元素：加入 `Widgets`，通过 UIExtension `SlotID` 注册。
- `SlotID` 是 GameplayTag extension point，不是 `UI.Layer.*`。
- 反激活时必须移除 layout 和 unregister extension handle。

玩法独有 UI 放对应 GameFeature `Content/UI`；跨玩法复用控件和基类放 GameUI。

## 设置、在线、加载屏和消息

- 设置页：业务配置走 GameSettings；GameUI 负责设置页面、entry、VisualData 和用户交互。
- 在线 UI：好友、邀请、Session、Lobby 走 Online/Steam framework；GameUI 只承接通用显示和交互控件。
- 加载屏：运行期加载屏走 loading screen framework；启动 Splash 是固定图片资产，不是 UMG。
- 通知/Toast/击杀提示：跨系统语义事件优先用 GameplayMessageRouter，Widget 只监听并展示。

## 验证清单

最低验证：

1. 代码文件运行 `orion-code-style/scripts/check-code-style.ps1`。
2. GameUI C++ 改动至少构建 Editor target；影响 runtime 或 WebBrowser 时再构建 Game target。
3. Widget Blueprint 修改必须编译、保存、重新读取验证。
4. 配置修改必须确认目标配置节和 platform override。
5. GameFeature UI 必须验证激活、反激活和 cook/stage 可见性。
6. HTML 弹窗必须验证插件可用路径和降级路径。
7. 启动前端弹窗必须验证：`BP_StartupPopupFlowAction` 包含目标 Definition，前端状态组件 `StartupPopupFlowActionClasses` 包含该 Action，`W_StartUp` 不再暴露旧 `PopupDefinitionClasses`，启动页资产不再依赖具体广告 Definition，并且 `Try Preload Startup Popups` 在 `CompleteStartupLoadingScreen()` 之前完成。

弹窗专项冒烟：

- 文本弹窗：默认 `PopupDialogClass` fallback 能显示。
- 奖励弹窗：Rewards 数组、数量、按钮、回调正常。
- 多样式弹窗：descriptor 指定不同 `PopupScreenClass`，能异步加载并显示。
- HTML 字符串弹窗：`LoadString` 正常；无 WebBrowser 时降级。
- URL 弹窗：`LoadURL` 正常；新窗口/外链策略符合需求。
- 队列：高优先级先显示，同优先级保持入队顺序，同组替换能移除旧 queued popup，并且旧 popup 必须以 `Killed` 或等价结果结算回调，避免 Definition batch 的 completion 永远不执行。
