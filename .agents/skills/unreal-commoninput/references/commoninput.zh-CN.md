# CommonInput 源码指南

CommonInput 通常是 CommonUI 插件中的运行时模块，用于把键鼠、手柄、触摸等输入设备状态转成 UI 可用的输入方式、输入提示和输入模式。不同 UE 版本可能有差异，最终以当前机器源码为准。

## 源码入口

优先从这些相对位置和符号开始查：

- `<EngineRoot>/Engine/Plugins/Runtime/CommonUI/CommonUI.uplugin`
- `<EngineRoot>/Engine/Plugins/Runtime/CommonUI/Source/CommonInput`
- `<EngineRoot>/Engine/Plugins/Runtime/CommonUI/Source/CommonUI`
- `CommonInput.Build.cs`
- `UCommonInputSubsystem`
- `UCommonInputSettings`
- `UCommonUIInputData`
- `UCommonInputBaseControllerData`
- `UCommonInputPlatformSettings`
- `UCommonInputActionDomain`
- `UCommonInputActionDomainTable`

如果项目或插件封装了 CommonInput，先查项目封装层，再回到引擎模块确认原生行为。

## 模块关系

CommonInput 常见依赖方向：

- CommonInput 是 CommonUI 插件的一部分，不一定有独立插件描述文件。
- CommonInput 通常依赖 Core、CoreUObject、Engine、InputCore、EnhancedInput 和 DeveloperSettings。
- Slate、SlateCore、ApplicationCore、EngineSettings 常见于内部实现或私有依赖。
- Editor 专用行为应放在 Editor 模块或受 `WITH_EDITOR` 保护。

修改调用方模块时，先确认目标类型声明文件所在模块，再决定 `PublicDependencyModuleNames` 或 `PrivateDependencyModuleNames`。

## 核心类型

`ECommonInputType` 表示当前输入设备族，通常覆盖键鼠、手柄、触摸等。

`ECommonInputMode` 表示 UI/game 输入路由期望模式。

`UCommonInputSubsystem` 是本地玩家级 subsystem，重点关注：

- 当前有效输入类型。
- 默认输入类型。
- 当前手柄名称或手柄类型。
- 输入类型锁定和过滤。
- 输入方式变化委托。
- 是否使用 pointer input。
- 是否应显示输入按键提示。
- Action Domain Table。

常见查询或控制入口包括：

- `Get`
- `IsInputMethodActive`
- `GetCurrentInputType`
- `GetDefaultInputType`
- `SetCurrentInputType`
- `GetCurrentGamepadName`
- `SetGamepadInputType`
- `IsUsingPointerInput`
- `ShouldShowInputKeys`
- `SetInputTypeFilter`
- `AddOrRemoveInputTypeLock`
- `SetActionDomainTable`
- `GetActionDomainTable`

函数是否存在、签名是否一致，必须以当前版本源码为准。

## 输入检测

CommonInput 的输入方式变化通常来自输入预处理器。查 `FCommonInputPreprocessor` 或同类实现，确认它如何处理：

- Key input。
- Analog input。
- Mouse movement。
- Mouse wheel。
- Pointer event。
- Touch 或 gesture。
- Gamepad 类型识别。

如果 UI 状态频繁在键鼠和手柄之间切换，要检查输入防抖、输入过滤和 lock 机制，而不是只改 Widget 逻辑。

## Settings 与数据资产

`UCommonInputSettings` 通常是项目级 CommonInput 设置入口，重点检查：

- 默认输入数据。
- 平台输入配置。
- 输入方式 thrashing protection。
- out-of-focus device input。
- 默认 input config。
- EnhancedInput 支持。
- 自动手柄类型检测。
- Action Domain Table。
- 平台名升级或兼容映射。

常见 API 包括：

- `LoadData`
- `ValidateData`
- `GetDefaultClickAction`
- `GetDefaultBackAction`
- `GetDefaultHoldData`
- `GetEnhancedInputClickAction`
- `GetEnhancedInputBackAction`
- `IsEnhancedInputSupportEnabled`

`UCommonUIInputData` 通常保存默认 click/back action、hold data、EnhancedInput click/back action。

`UCommonUIHoldData` 通常保存键鼠、手柄、触摸的 hold 触发时间。

## Key Brush 与输入提示

UI 需要显示按键图标时，不要硬编码纹理路径。优先查：

- 当前 `ECommonInputType`。
- 当前 gamepad name。
- `UCommonInputPlatformSettings`。
- `UCommonInputBaseControllerData`。
- `TryGetInputBrush` 或当前版本等价函数。
- 项目自己的 player mappable key profile 或 key brush 扩展。

推荐流程：

1. 从 `UCommonInputSubsystem` 获取当前输入方式和手柄名称。
2. 从平台设置或项目封装层解析 controller data。
3. 用 controller data 查 key 或 key set 对应的 brush。
4. 查不到时再处理 fallback，而不是直接写死某个平台纹理。

如果问题是 key identity、`FKey` 分类、display name、menu category、paired axis 或 platform key conversion，读取 `../../unreal-inputcore/SKILL.md`。CommonInput 负责把 key 和当前输入设备解析为 UI brush；不要把 InputCore 的 display name 当成最终 UI glyph。

## CommonUI Action 图标回退

键鼠模式下出现点状、句点或通用默认 Action 图标时，先区分“默认 click fallback”和“显式 action”。

典型现象：

- 升级引擎后，键鼠模式下所有 CommonUI 按钮都显示 Action 图标。
- 原本只有显式指定键盘 action 的按钮显示图标，现在没有指定的按钮也显示。
- 手柄模式仍需要显示确认、返回等 Action 图标，不能为了修键鼠把手柄提示一起关掉。

先确认配置链：

1. `Config/DefaultGame.ini` 的 `[/Script/CommonInput.CommonInputSettings]`、`InputData`、`ActionDomainTable`、`bEnableEnhancedInputSupport`。
2. `Config/DefaultInput.ini` 的 `[/Script/CommonUI.CommonUIInputSettings]`、`+InputActions`、EnhancedInput user settings/profile class。
3. 平台 `Game.ini` 的 `CommonInputPlatformSettings_<Platform>`、`DefaultInputType`、`DefaultGamepadName`、`+ControllerData`。
4. UI 资产中的 `BP_CommonInputData` default click/back row、`DT_UniversalActions` 默认 forward/back row、键鼠 controller data 的 key brush 映射。

引擎行为检查点：

- `UCommonButtonBase::UpdateInputActionWidget()` 通常按 `TriggeringEnhancedInputAction`、`TriggeringInputAction`、`TriggeredInputAction`、默认 click action fallback 的顺序设置 action。
- 默认 click fallback 通常受 `bShouldUseFallbackDefaultInputAction && bButtonEnabled && IsHovered()` 控制。
- `bHideInputActionWithKeyboard` 是粗粒度开关，会隐藏非 gamepad 输入方式下的 action widget；不要用它修“普通按钮默认 fallback”问题，否则会把显式键鼠 action 也隐藏。
- `UCommonActionWidget::GetIcon()` 负责 action 到 key/brush 的解析；项目自定义 `UCommonActionWidget` 不应在当前输入类型没有有效 key 时继续回退出默认图标。
- `UCommonInputPlatformSettings::TryGetInputBrush()` 只负责 key 到 brush；不要把 action 是否应该显示的策略放进 controller data。

推荐项目修复模式：

1. 普通按钮需要“键鼠下不显示默认 click fallback，手柄仍显示默认确认”时，在项目按钮基类里临时关闭 `bShouldUseFallbackDefaultInputAction`，条件必须同时满足：
	- 当前输入类型是 `ECommonInputType::MouseAndKeyboard`。
	- 没有显式 action：`TriggeringEnhancedInputAction`、`TriggeringInputAction`、`TriggeredInputAction` 都为空。
	- 原本允许 default fallback。
2. 调用 `Super::UpdateInputActionWidget()` 前临时设为 false，调用后恢复原值；不要永久改资产默认值。
3. 项目自定义 `UCommonActionWidget` 处理 `AssociatedInputAction` 时，必须先从 EnhancedInput 查询当前输入类型可用 key，再通过 controller data 查 brush；没有匹配 key 或 brush 时返回 `FStyleDefaults::GetNoBrush()`，不要继续落回 `Super::GetIcon()`。
4. `UUI_BoundActionButton`、`UUI_TabButtonBase`、`UUI_TabListWidgetBase` 可能承载显式 action，例如 `Escape`、`RightMouseButton`、上一页/下一页。不要在这些基类上默认 `SetHideInputActionWithKeyboard(true)`。
5. 如果 BoundActionButton 或 TabList 仍显示键鼠图标，先查它是不是显式 action：`TriggeringInputAction`、`TriggeredInputAction`、`TriggeringEnhancedInputAction`、蓝图内独立 `UCommonActionWidget`、数据表行的 `KeyboardInputTypeInfo.Key`。
6. 显式 action 是否显示应由具体数据表行或具体资产控制：需要键鼠显示就保留 `KeyboardInputTypeInfo.Key`，不需要显示就清空该 row 的 keyboard key；不要改全局基类。

ActionBar 的显式绑定还要额外检查 `FBindUIActionArgs::InputTypesExemptFromValidKeyCheck`：

- UE 5.8 默认会把 `MouseAndKeyboard` 和 `Touch` 放进豁免集合；这会影响 ActionBar 是否创建 action button，不等价于“是否显示按键图标”。
- 只想隐藏 `UCommonActionWidget` 图标时，不要移除 `MouseAndKeyboard` 豁免；那会把整个 action button 过滤掉。应在按钮或 action widget 层调用 `UCommonActionWidget::SetHidden(true)`，或让项目自定义 `UCommonActionWidget::GetIcon()` 在键鼠无有效 key/brush 时返回 `NoBrush`。
- `UUI_BoundActionButton`、`UUI_TabButtonBase`、`UUI_TabListWidgetBase` 可能承载显式 action，例如 `Escape`、`RightMouseButton`、上一页/下一页。不要在这些基类上默认 `SetHideInputActionWithKeyboard(true)`，也不要过滤 action binding；只处理内部 `InputActionWidget`。
- 如果绑定走 EnhancedInput action，ActionBar 和 `UCommonActionWidget` 会从 EnhancedInput mapping 查 key，不会读取你改过的 DataTable row；此时要按 mapping 是否有当前输入类型 key 来决定图标显隐。

UE 5.6 到 5.8 的相关差异要以当前源码为准，但常见结论是：

- 5.6 和 5.8 的 `UCommonButtonBase::UpdateInputActionWidget()` 默认 click fallback 分支基本一致，不要把“5.8 才新增 fallback”当作根因。
- 5.8 的 `FCommonInputTypeInfo` 增加了 `AdditionalKeys`、`GetAllKeys()`、`IsKeyBound()`，比 5.6 更容易把多个 key 视为同一个 input type info。
- 5.8 的 `TryGetInputBrushFromDataMap()` 可能使用 `Key.IsSameResolvedKey(InKey)` 这类更宽松的 key 匹配，比 5.6 直接相等匹配更容易解析到 brush。
- 遇到点号/句号样式图标时，检查键鼠 controller data 是否有 `Period`、`None` 或平台 remap 后等价的 key brush。

验证顺序：

1. 对 touched code files 运行项目 code style 校验。
2. 构建目标 Editor，确认 UHT、模块依赖和 include 都通过。
3. 实测键鼠：没有显式 action 的普通按钮不显示默认点状图标；显式配置键鼠 action 的按钮仍显示对应 key glyph。
4. 实测手柄：显式 action 仍显示；没有显式 action 但依赖默认确认提示的按钮仍显示 gamepad fallback。

## Action Domain

Action Domain 用于控制 UI 输入事件流、优先级、输入模式和鼠标捕获。

重点类型：

- `UCommonInputActionDomain`
- `UCommonInputActionDomainTable`
- `ECommonInputEventFlowBehavior`

重点字段或概念：

- Domain 行为。
- Inner behavior。
- Desired input config。
- Input mode。
- Mouse capture mode。
- Domain table 顺序。

使用场景：

- 多层 UI 需要稳定输入优先级。
- 某个 UI 激活时要阻止下层 UI 或 gameplay 响应。
- UI 需要切换 game-only、UI-only、game-and-UI 等输入模式。
- 鼠标捕获行为要随 UI 状态变化。

## 与 InputCore 和 EnhancedInput 的关系

CommonInput 负责 UI 输入状态、设备类型、按键提示和 UI action routing；InputCore 负责 `FKey` identity 与 key metadata；EnhancedInput 负责 action、mapping、trigger、modifier 等输入动作体系。三者经常一起出现，但不要混为一谈。

涉及 `FKey`、`EKeys`、key metadata、key category、paired axis、platform key conversion 或 key 分类时，读取 `../../unreal-inputcore/SKILL.md`。

涉及 EnhancedInput action、mapping context、trigger、modifier、binding、user settings 或 remapping 时，读取 `../../unreal-enhancedinput/SKILL.md`。

如果 UI、input mode、按键提示或 back/click 资源由 GameFeature 激活和反激活，读取 `../../unreal-gamefeatures/SKILL.md`，确认资源添加/移除对称，并验证现有 world 和未来 world。

如果 UI 显示 GameplayAbility 技能按键、cooldown、cost、激活状态或 GAS tag 状态，读取 `../../unreal-gameplayabilities/SKILL.md`，确认 ASC、AbilitySpec、GameplayEffect、Attribute 和 tag 查询语义。

检查顺序：

1. UI 默认 click/back 行为：查 `UCommonInputSettings`。
2. EnhancedInput click/back action：查 settings 是否启用 EnhancedInput 支持。
3. Gameplay 输入动作：查 EnhancedInput 的 mapping context、input action 和触发链。
4. UI 提示图标：回到 CommonInput controller data 或项目封装。

## 修改前检查清单

- 目标逻辑是 UI 输入状态、按键提示、输入模式，还是 gameplay input action。
- 当前 LocalPlayer 是否能拿到 `UCommonInputSubsystem`。
- 是否需要处理键鼠、手柄、触摸三类输入。
- 是否存在平台级 controller data。
- 是否启用 EnhancedInput 支持。
- 是否有项目自定义输入配置、重映射 profile 或 key brush provider。
- 调用方模块是否依赖 CommonInput、CommonUI、EnhancedInput 或 Slate 相关模块。

## 验证

- 编译目标模块，确认 Build.cs 依赖正确。
- 修改反射声明时触发 UHT。
- 在 UI 中实际切换键鼠和手柄，确认输入方式变化委托触发。
- 检查 click/back action 是否走预期路径。
- 检查 key brush 在键鼠、手柄和未知设备下的 fallback。
- 如果涉及 Action Domain，验证 UI 层级输入优先级和鼠标捕获行为。
