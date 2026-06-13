# Unreal UI Framework / UMG 工作流

## 适用范围

当任务涉及 GameUI 模块、CommonUI、UMG、Widget Blueprint、HUD layout、UIExtension 插槽、CommonGame UI layer、按钮、列表、标签页、设置页、弹窗、UI 输入、按键提示、主题、加载屏、启动 Splash、视频 UI、在线 UI 或通过 MCP 修改 UI 资产时，使用本 Skill。

本框架的 UI 原则是：

- UI 业务和可复用行为优先在 C++ 基类中实现。
- UMG / Widget Blueprint 主要负责美术布局、动画、BindWidget、样式和默认变量配置。
- 进入屏幕的页面优先走 CommonUI 可激活层栈，进入玩法的 UI 优先走 Experience / GameFeature `Add Widgets`，局部可插拔 HUD 元素优先走 UIExtension。
- 不要直接在普通 Widget Blueprint graph 里堆核心业务流程；需要业务逻辑时先判断是否已有 GameUI C++ 基类、Subsystem、GameFeature Action、GameplayMessageRouter 或设置注册表可以承载。

## 必读路由

- 资产命名、目录、GameFeature `Content/UI` 规则：读取 `../unreal-asset-management/SKILL.md`。
- MCP 创建、编辑、编译、保存 Widget Blueprint：读取 `../unreal-mcp-workflow/SKILL.md` 和 `../unreal-mcp-project-toolsets/SKILL.md`。
- UI 输入模式、返回键、点击动作、Action Domain、按键图标：读取 `../unreal-commoninput/SKILL.md`；涉及 `UInputAction`、IMC 或 gameplay action 共用输入资产时再读取 `../unreal-enhancedinput/SKILL.md`。
- Feature/Experience 添加 UI：读取 `../unreal-gamefeatures/SKILL.md`、`../unreal-gamemode-experience-framework/SKILL.md` 和 `../unreal-mcp-project-toolsets/SKILL.md`。
- UI 监听 tag 消息、toast、击杀提示、通知 feed：读取 `../unreal-gameplay-message-router/SKILL.md`。
- 玩家可见文案、TextBlock、RichText、按钮文本、设置项名称/描述：读取 `../unreal-localization-framework/SKILL.md`，静态文本必须是可收集 `FText`。
- 好友、邀请、Session、Lobby、Steam UI：读取 `../unreal-online-steam-framework/SKILL.md`。
- CommonLoadingScreen、启动/运行期加载屏、加载进度、加载屏卡住、shader 编译加载 UI：读取 `../unreal-loading-screen-framework/SKILL.md`。
- 编辑器启动或游戏启动 Splash 图片：读取 `../unreal-asset-management/SKILL.md`，Splash 是 `Content/Splash` 下的固定图片文件，不是 Widget Blueprint。
- UI 内视频、Bink、Media Texture、菜单背景视频：读取 `../unreal-movie-media-framework/SKILL.md`；加载屏视频同时读取 `../unreal-loading-screen-framework/SKILL.md`。
- UI 涉及多人状态、owner-only 数据、client/server 消息桥接：读取 `../unreal-network-replication-framework/SKILL.md`。

## 运行时架构

### UI 根布局

框架使用 CommonGame 的 UI policy 机制：

1. `UGameUIManagerSubsystem` 从 `DefaultGame.ini` 读取默认 UI policy。
2. `UGameUIPolicy` 为每个 `UCommonLocalPlayer` 创建一个 `UPrimaryGameLayout`。
3. `UPrimaryGameLayout` 在 Widget Blueprint 中注册 `UI.Layer.*` 容器。
4. 业务 UI 通过 `UCommonUIExtensions::PushContentToLayer_ForPlayer` 或 `PushStreamedContentToLayer_ForPlayer` 推入层栈。

常用层 tag 来自 `DefaultGameplayTags.ini`：

- `UI.Layer.Game`
- `UI.Layer.GameMenu`
- `UI.Layer.Menu`
- `UI.Layer.Modal`

规则：

- 全屏页面、菜单、弹窗、HUD layout 必须能放入 CommonUI 层栈时，父类必须是 `UCommonActivatableWidget` 派生类，项目内优先使用 `UUI_ActivatableWidget` 或更具体子类。
- 不要直接 `AddToViewport` 绕过 `UPrimaryGameLayout`，除非是明确的开发调试 HUD 或已有框架类这么做。
- CommonUI 容器会池化并重新创建实例；每次 Push 后都要在初始化回调或 `NativeOnActivated` 中重新设置实例状态，不要依赖上一次实例残留。
- `UPrimaryGameLayout::RegisterLayer` 在设计时不注册层；运行时才可用。

### 可激活页面基类

`UUI_ActivatableWidget` 是普通页面、菜单、弹窗的默认基类。它封装：

- `InputConfig`：`Default`、`GameAndMenu`、`Game`、`Menu`。
- `GameMouseCaptureMode`：游戏输入模式下的鼠标捕获。
- CommonUI desired input config：激活页面时驱动输入模式。
- CommonUI back action 和项目第二返回动作。
- 右键返回：当第二返回动作映射为鼠标键时，`NativeOnMouseButtonDown` 可触发返回。
- 编译期焦点检查：直接继承它的 Widget Blueprint 未实现 `Get Desired Focus Target` 时会警告。

创建页面时：

1. 优先选择 `UUI_ActivatableWidget` 或已有具体 C++ 页面类作为 parent。
2. 在 Widget Blueprint 中实现 `Get Desired Focus Target`，尤其是手柄/键盘可导航页面。
3. 按页面性质设置 `InputConfig`：
   - 纯菜单/弹窗：`Menu`
   - 叠加 UI 但保留游戏输入：`GameAndMenu`
   - 纯游戏 HUD：通常 `Default` 或 `Game`
4. 需要返回关闭时设置 CommonUI back handler；需要第二返回动作时设置项目第二返回字段。

### HUD layout

`UGameHUDLayout` 继承 `UUI_ActivatableWidget`，用于玩家 HUD 根布局，通常由 Experience / GameFeature 的 `Add Widgets` action 添加。

它处理：

- `UI.Action.Escape`：按 Escape/Pause 时把 `EscapeMenuClass` 推入 `UI.Layer.Menu`。
- 手柄断开屏幕：平台 trait 满足要求时检测玩家输入设备，推入 `ControllerDisconnectedScreen`。

规则：

- 玩法 HUD 根页面优先继承 `UGameHUDLayout`。
- `EscapeMenuClass` 必须指向 `UCommonActivatableWidget` 派生页面。
- Controller disconnected 页面使用 `UUI_ControllerDisconnectedScreen` 派生类。
- HUD layout 本身应作为 layer 页面进入 `UI.Layer.Game` 或项目约定层，不要手动驻留 viewport。

### 消息弹窗

`UGameUIMessagingSubsystem` 继承 CommonGame 的 messaging subsystem：

- `ShowConfirmation` 推入 `ConfirmationDialogClass` 到 `UI.Layer.Modal`。
- `ShowError` 推入 `ErrorDialogClass` 到 `UI.Layer.Modal`。
- 默认类通过 `DefaultGame.ini` 配置。

需要确认/错误弹窗时优先使用该 subsystem 或 CommonGame dialog descriptor，不要新建散落弹窗流程。

## 基类选择表

| 需求 | 优先父类 / 系统 | 备注 |
| --- | --- | --- |
| 普通全屏页面、菜单、弹窗 | `UUI_ActivatableWidget` 或已有具体页面类 | 实现焦点目标，设置输入模式和返回键 |
| 玩家 HUD 根布局 | `UGameHUDLayout` | 由 Experience / GameFeature `Add Widgets` 添加 |
| 按钮 | `UUI_ButtonBase` | `SetButtonText`、`SetButtonIconBrush`、BP 实现 `UpdateButtonText`/`UpdateButtonStyle` |
| Action Bar 按钮 | `UUI_BoundActionButton` | 根据键鼠/手柄/触摸切换 style |
| 按键图标 / glyph | `UUI_ActionWidget` | 根据 EnhancedInput 当前绑定和 CommonInput 输入类型取 brush |
| 标签页 | `UUI_TabListWidgetBase` + `UUI_TabButtonBase` | 通过 `FTabDescriptor` 配置 tab、button、content |
| 数据驱动列表 | `UUI_ListView` + `UUI_WidgetFactory` | 必须配置 `FactoryRules`，编译期会校验 |
| 主题响应 | `UThemedUserWidget` / `IUIThemeInterface` | 主题变化时执行 `ApplyTheme` |
| 设置页面 | `UUI_UserSettingScreen`、`UUI_GameWorldSettingScreen` 或 GameSettings 插件基类 | 设置逻辑先读 `unreal-game-settings-framework`；UMG 只处理布局、entry、VisualData 和美术 |
| 加载屏 | `UUI_LoadingScreenHost`、`LoadingScreenSubsystem`、`unreal-loading-screen-framework` | 通过 `ULoadingScreenManager` 接入，不手动 AddToViewport |
| 启动 Press Any Key | `UUI_StartUpScreen` | 激活时注册 preprocessor，按键后推进前端流程 |
| 在线好友/邀请 UI | `GameUI/Online` 下已有 C++ 基类 | 同时读取在线 Steam Skill |
| Feature 可插拔 HUD 元素 | `UUIExtensionPointWidget` + `UGameFeatureAction_AddWidgets` | Widget 通过 SlotID tag 注册到插槽 |

## UIExtension 插槽系统

UIExtension 用 GameplayTag 把“页面里的插槽”和“Feature 提供的 widget/data”解耦。

核心类型：

- `UUIExtensionSubsystem`：`UWorldSubsystem`，维护 extension point 和 extension。
- `UUIExtensionPointWidget`：放在 layout Widget Blueprint 里的动态 entry box，设置 `ExtensionPointTag`、匹配方式和 `DataClasses`。
- `FUIExtensionHandle` / `FUIExtensionPointHandle`：注册后必须保存并在生命周期结束时 unregister。
- `EUIExtensionPointMatch::ExactMatch`：只匹配完全相同 tag。
- `EUIExtensionPointMatch::PartialMatch`：匹配当前 tag 及子层级 tag。

匹配条件：

1. extension point tag 和 extension tag 满足 exact/partial 规则。
2. context 必须相同；两边都是 null 也算相同。
3. extension data class 必须是 allowed data class 的子类，或实现 allowed interface。

`UUIExtensionPointWidget` 在运行时会自动注册三类上下文：

- 无上下文。
- owning `UCommonLocalPlayer`。
- owning player state。

GameFeature `Add Widgets` 注册 widget 时使用 LocalPlayer 作为 context，所以 layout 中的 `UUIExtensionPointWidget` 可以收到对应玩家的 widget。

注意：

- `ExtensionPointTag` 不可为空；编辑器编译会报错。
- `Priority` 当前会进入 request，但 UIExtension 系统本身没有排序逻辑；如果需要稳定顺序，在 extension point widget 或数据层自己排序。
- `SlotID` 不是 `UI.Layer.*` 层 tag；它必须和页面里 `UUIExtensionPointWidget.ExtensionPointTag` 使用同一个有效 GameplayTag。
- 手写注册 extension 时必须保存 handle 并在页面释放、feature 反激活或组件销毁时 unregister。

## GameFeature / Experience 添加 UI

框架提供 `UGameFeatureAction_AddWidgets`：

- `Layout`：`FCoreHUDLayoutRequest`，把 `UCommonActivatableWidget` 派生 layout 推入指定 `UI.Layer.*`。
- `Widgets`：`FCoreHUDElementEntry`，把 `UUserWidget` class 注册到 UIExtension 的 `SlotID`。
- 激活时绑定 `ACoreHUD` extension handler；HUD ready 后添加 UI。
- 反激活时 deactive layout，并 unregister extension handles。

使用规则：

1. 玩法独有 HUD、菜单、提示、任务追踪、交互提示，优先放在 GameFeature 插件 `Content/UI`。
2. 如果是整屏 layout 或菜单，添加到 `Layout`，父类必须是 `UCommonActivatableWidget` 派生。
3. 如果是插到现有 HUD 的局部 widget，添加到 `Widgets`，`SlotID` 必须等于目标 `UUIExtensionPointWidget.ExtensionPointTag`。
4. 通过 `OrionExperienceToolset.AddWidgetLayoutEntry` / `AddWidgetEntry` 自动写入 Experience 或 ActionSet。
5. 添加 layout 后务必在编辑器和 cooked build 验证激活时 `LayoutClass.Get()` 不为空；当前实现对 `Widgets` 写 client asset bundle，layout 是否已加载需要真实流程验证。

## Widget Blueprint 自动化

### 能力边界

官方 `UMGToolSet.UMGToolSet` 源码确认支持：

- `CreateWidgetBlueprint(FolderPath, AssetName, ParentClass)`
- `ListWidgetBlueprints`
- `ListWidgetClasses`
- `GetWidgetClassInfo`
- `GetWidgets`
- `GetWidgetDescription`
- `GetWidgetTreeDepth`
- `AddWidget`
- `MoveWidget`
- `RemoveWidget`
- `RenameWidget`
- `ToggleWidgetAsVariable`
- `WrapWidgets`
- `ReplaceWidgetWithTemplate`
- `ReplaceWidgetWithNamedSlot`
- `ReplaceWidgetWithChild`
- `GetNamedSlots`
- `SetNamedSlotContent`
- `AddUIComponent`
- `RemoveUIComponent`
- `MoveUIComponent`
- `BindToEventProperty`
- `CompileWidgetBlueprint`

项目 MCP Toolset 补充：

- `OrionBlueprintGraphToolset.SetBlueprintDefaultProperty`：设置 Blueprint CDO 上的父类 `UPROPERTY` 默认值，例如 `InputConfig`、`EscapeMenuClass`、`FactoryRules` 等可导入文本格式的属性。
- `OrionBlueprintGraphToolset.AddMemberVariable` / `SetMemberVariableDefault` / `SetMemberVariableFlags`：创建和调整 Blueprint 成员变量。
- `OrionBlueprintGraphToolset.CompileBlueprint` / `SaveAsset` / `ValidateBlueprint`：编译、保存和验证资产。
- `OrionUMGToolset.AddArtTextTitle`：项目封装的安全 UMG 属性化编辑示例。
- `OrionExperienceToolset.AddWidgetLayoutEntry` / `AddWidgetEntry`：把 UI 接到 Experience / ActionSet 的 Add Widgets action。

当前注意：

- `UMGToolSet.CompileWidgetBlueprint` 使用 `SkipSave`，只编译不保存。
- `UMGToolSet` 文档里提到的通用 `ObjectTools` 不一定在当前 MCP session 中暴露；修改单个 widget/slot 的 `Text`、`Padding`、`Anchors`、`Brush`、`ColorAndOpacity` 等实例属性前必须先确认可用 toolset 和真实属性名。
- `SetBlueprintDefaultProperty` 适合改 Widget Blueprint 类默认值或父类暴露变量，不等于能改 WidgetTree 中某个子控件实例属性。
- 如果必须批量编辑 WidgetTree 实例属性且当前没有 ObjectTools/专用函数，先写项目 Editor-only Toolset，而不是猜属性字符串。

### 创建 Widget Blueprint 流程

1. 读取资产 Skill，确定目录和命名。正式 UI 默认 `Content/UI`；玩法独有 UI 默认对应 GameFeature 插件 `Content/UI`。
2. 读取源码或调用 `ListWidgetClasses`，确认父类确实存在且是 `UUserWidget` 派生。
3. 优先选择 GameUI C++ 基类，例如 `UUI_ActivatableWidget`、`UGameHUDLayout`、具体菜单/设置/在线页面类。
4. 调用 `CreateWidgetBlueprint(FolderPath, AssetName, ParentClass)`。
5. 调用 `GetWidgets` 检查 root、父类、BindWidget 占位项和继承 widget。
6. 按 C++ 父类的 `BindWidget` / `BindWidgetOptional` 名称补齐 WidgetTree。名字必须完全一致。
7. 使用 `SetNamedSlotContent`、`AddWidget`、`WrapWidgets`、`ToggleWidgetAsVariable` 等编辑树。
8. 使用 `SetBlueprintDefaultProperty` 设置父类默认变量；使用 `AddMemberVariable` 系列创建需要暴露给美术层的变量。
9. 编译：`CompileWidgetBlueprint` 或 `CompileBlueprint`。
10. 保存：`SaveAsset`。
11. 重新读取 `GetWidgets` / `DescribeBlueprint` / `ValidateBlueprint`，确认 parent、变量、编译状态和 `.uasset` 持久化。

### 修改已有 Widget Blueprint 流程

1. 先读取 `GetWidgets` 和 `GetWidgetDescription`，不要凭编辑器印象猜 WidgetTree。
2. 如果父类有 C++ `BindWidget` 要求，优先确认缺失项；编译错误里会出现缺失 widget 名。
3. 需要替换模板 widget 时用 `ReplaceWidgetWithTemplate`，先看返回的 unmatched member warning。
4. 需要事件绑定时用 `BindToEventProperty`，例如按钮 `OnClicked`；复杂逻辑优先回 C++ 基类或 ViewModel/Subsystem，不在 Widget graph 中堆。
5. 需要设置类默认变量时使用 `SetBlueprintDefaultProperty`，值使用 UE `ImportText` 可接受的文本格式。
6. 编译、保存、重新读取验证。

## 配置位置

常见配置：

- `DefaultGame.ini` 的 UI manager 默认 policy、开发 HUD、默认主题、确认/错误弹窗类。
- `DefaultGame.ini` 的 CommonInput 设置，尤其是 InputData、ActionDomainTable、EnhancedInput 支持。
- `DefaultInput.ini` 的 CommonUI input settings 和 `UI.Action.*`。
- 平台 `Game.ini` 的 CommonUI platform traits 和 CommonInput controller data。
- `DefaultGameplayTags.ini` 的 `UI.Layer.*`、`UI.Action.*` 和自定义 extension slot tag。

修改配置时读取 `../unreal-project-config/SKILL.md`，不要把个人编辑器状态写进可发布配置。

## Splash 启动图

Splash 启动图属于项目启动品牌图，不走 UMG / CommonUI / Widget Blueprint 流程。

固定目录：

- `Content/Splash`

固定文件：

- `Splash.png`：游戏启动 Splash。
- `Splash.bmp`：游戏启动 Splash 的 BMP 版本。
- `EdSplash.png`：编辑器启动 Splash。
- `EdSplash.bmp`：编辑器启动 Splash 的 BMP 版本。

修改规则：

1. 用户要求“修改 Splash / 启动图 / 编辑器启动图 / 游戏启动图”时，先读取资产管理 Skill。
2. 用户提供 `.jpg`、`.webp`、`.tga`、`.psd` 或其他格式时，不把原格式作为最终文件放入 `Content/Splash`；先转换为 `.png` 和 `.bmp`。
3. 保持固定文件名，不创建 `Logo_Final`、`Splash_New`、`StartupImage` 等变体名。
4. 替换后确认 `Content/Splash` 下 `.png` 和 `.bmp` 成对存在；如有导入生成的 `.uasset`，保存后确认资产落盘。
5. Splash 与 CommonLoadingScreen 加载屏不同：启动 Splash 是项目启动阶段图片；运行期加载屏 Widget、进度条和 shader 编译 UI 仍走 `unreal-loading-screen-framework`。

## 文案与本地化

- 玩家可见静态文本必须使用 `FText`，C++ 使用 `LOCTEXT` / `NSLOCTEXT`，Widget Blueprint 默认文本要能被 gather。
- `FText::FromString` 只用于玩家输入、好友名、存档名、设备名等运行时不可本地化数据。
- 修改 UI 文案后，保存资产再 gather；未保存的 Widget Blueprint 文本不会进入 manifest。

## 验证清单

- Widget Blueprint parent class 正确，不是裸 `UUserWidget`，除非它只是纯局部美术控件。
- 全屏/菜单页面实现 `Get Desired Focus Target`，手柄导航可用。
- `InputConfig`、back handler、second back handler 符合页面用途。
- `BindWidget` / `BindWidgetOptional` 名称匹配 C++ 属性。
- `UUI_ListView` 配置了 `FactoryRules`。
- `UUIExtensionPointWidget` 配置了有效 `ExtensionPointTag` 和需要的 `DataClasses`。
- GameFeature `Add Widgets` 的 layer tag / slot tag 有效，并能在激活和反激活时对称添加/移除。
- `CompileWidgetBlueprint` 成功后又执行 `SaveAsset`，并重新读取确认。
- UI 文案用可收集 `FText`。
- 键鼠、手柄、触摸至少验证主要导航路径；按键图标来自 CommonInput，不硬编码贴图路径。
- 需要 packaged 验证时确认 Feature UI 资产被 cook/stage，layout class 在激活时可加载。

## 不要做

- 不要为了一个玩法 UI 去改 GameCore 或底层 CommonGame 插件，除非用户明确允许。
- 不要把核心游戏状态、Session、能力、队伍、玩家账户逻辑写进 Widget Blueprint。
- 不要在 UI 中直接 travel/join session；走 Session component/CommonSession/Online flow。
- 不要直接写死绝对路径、项目名、用户名或本机引擎路径。
- 不要猜 UObject 属性名修改 WidgetTree 实例属性；先读 schema/属性列表，或补专用 Toolset。
