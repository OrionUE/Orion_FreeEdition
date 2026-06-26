# EnhancedInput 源码指南

EnhancedInput 是 Unreal Engine 的现代输入系统，负责输入动作资产、mapping context、modifier、trigger、玩家输入评估、输入绑定、用户改键和编辑器工具。不同 UE 版本会有差异，最终以当前机器源码为准。

## 源码入口

优先从这些相对位置和符号开始查：

- `<EngineRoot>/Engine/Plugins/EnhancedInput`
- `EnhancedInput.uplugin`
- `EnhancedInput.Build.cs`
- `InputBlueprintNodes.Build.cs`
- `InputEditor.Build.cs`
- `UInputAction`
- `UInputMappingContext`
- `FEnhancedActionKeyMapping`
- `FInputActionValue`
- `FInputActionInstance`
- `UEnhancedPlayerInput`
- `UEnhancedInputComponent`
- `UEnhancedInputLocalPlayerSubsystem`
- `IEnhancedInputSubsystemInterface`
- `UInputModifier`
- `UInputTrigger`
- `UEnhancedInputUserSettings`
- `UEnhancedPlayerMappableKeyProfile`
- `UEnhancedInputDeveloperSettings`

如果项目或插件封装了 EnhancedInput，先查项目封装层，再回到引擎模块确认原生行为。

## 模块分层

常见模块：

- `EnhancedInput`：运行时模块，包含输入资产、玩家输入评估、subsystem、component binding、settings、modifier、trigger、query API 和 debug 命令。
- `InputBlueprintNodes`：Blueprint/K2 节点，处理 Input Action 事件节点、debug key、action value 节点等。
- `InputEditor`：编辑器工具，包含 asset factory、details customization、editor subsystem、validation、style 和测试。

调用方模块通常至少需要依赖 `EnhancedInput`。如果只在 `.cpp` 使用相关类型，优先放 private dependency；如果公共头文件暴露相关类型，需要 public dependency。Editor 工具不要放进 runtime 模块。

## 输入资产模型

`UInputAction` 是逻辑输入命令资产。重点查：

- value type：Boolean、Axis1D、Axis2D、Axis3D。
- action-level triggers。
- action-level modifiers。
- consumption、pause、accumulation 等行为。
- player-mappable settings。
- 支持哪些 trigger events。

`FInputActionValue` 保存带类型的输入值。使用前确认 action 的 value type，并使用匹配的 `Get<bool>`、`Get<float>`、`Get<FVector2D>` 或 `Get<FVector>`。

`FInputActionInstance` 保存某个 action 的运行时状态，包括当前 value、trigger event/state、elapsed/triggered 时间和实例化 trigger/modifier 状态。需要 timing 或状态细节时，优先使用 instance。

## Mapping Context

`UInputMappingContext` 保存一组 `FEnhancedActionKeyMapping`。重点查：

- `GetMappings`
- `MapKey`
- `UnmapKey`
- `UnmapAllKeysFromAction`
- `UnmapAll`
- input mode filtering 或等价版本功能。

`FEnhancedActionKeyMapping` 绑定一个 `UInputAction` 和一个 `FKey`，并可带 mapping-level modifiers、triggers、ignored state、player-mappable metadata。

修改 mapping 时要区分：

- action-level modifier/trigger。
- mapping-level modifier/trigger。
- context priority。
- key consumption。
- input mode filtering。

## Runtime Evaluation

`UEnhancedPlayerInput` 是输入评估核心，通常不应由 gameplay 代码直接改内部数组。

典型评估流程：

1. subsystem 维护 applied mapping contexts。
2. 请求重建 control mappings。
3. player input 按优先级排序 contexts。
4. 应用平台 redirects、input mode filter、user settings 和 key consumption。
5. 复制 mapping，并应用 modifiers。
6. triggers 计算 action state。
7. component stack 触发绑定回调。

调试时要区分：

- 原始硬件输入。
- mapping 后的 action value。
- modifier 后的 value。
- trigger state。
- component binding 是否注册。

## Subsystem 与 Mapping Lifecycle

`IEnhancedInputSubsystemInterface` 是 mapping 和 user settings 的共享接口。常见实现包括 local player、world、editor subsystem。

常用能力：

- `AddMappingContext`
- `RemoveMappingContext`
- `ClearAllMappings`
- `HasMappingContext`
- `RequestRebuildControlMappings`
- `QueryMapKeyInActiveContextSet`
- `QueryMapKeyInContextSet`
- `QueryKeysMappedToAction`
- `GetAllPlayerMappableActionKeyMappings`
- input mode tag/container 操作。
- injected input。
- user settings 查询和注册。

`FModifyContextOptions` 或当前版本等价结构通常决定：

- 是否忽略已按下的 key 直到释放。
- 是否立即 rebuild。
- 是否通知 user settings。

选择 rebuild 行为时要明确是否需要同帧可用。立即 rebuild 成本更高，不应无脑使用。

## Component Binding

`UEnhancedInputComponent` 用 action asset 绑定输入，不应继续使用 legacy action name/axis name 模式。

常见 API：

- `BindAction`
- `BindActionValue`
- `BindActionValueLambda`
- `BindActionInstanceLambda`
- `GetBoundActionValue`
- `RemoveActionEventBinding`
- `RemoveActionValueBinding`
- `RemoveBindingByHandle`
- `ClearActionBindings`
- `ClearBindingsForObject`

选择 `ETriggerEvent` 时先确认语义：

- `Started`：输入刚进入触发流程。
- `Ongoing`：触发条件还在进行。
- `Triggered`：触发成功，持续类 action 可能多帧触发。
- `Completed`：动作成功结束。
- `Canceled`：触发流程取消。

角色移动和镜头输入通常不是简单 pressed/released；要根据 value type 和 trigger 语义选择回调。

## Modifier

`UInputModifier` 在 trigger 之前转换 `FInputActionValue`。自定义 modifier 通常重写 `ModifyRaw_Implementation`。

常见类型：

- dead zone。
- scalar。
- delta time scaling。
- negate。
- swizzle axis。
- response curve。
- world space transform。
- player settings based scalar。

实现自定义 modifier 时：

- 保持 `FInputActionValue` 类型预期。
- 处理 null player/local player/user settings。
- 不在 modifier 中做过重 gameplay 逻辑。
- 先查当前版本已有 modifier 的实现和调用时机。

## Trigger

`UInputTrigger` 把 modifier 后的 value 转成 trigger state。

常见 trigger 语义：

- Explicit：显式触发条件。
- Implicit：隐式条件，通常需要全部满足。
- Blocker：阻止 action firing。

常见 trigger：

- Down。
- Pressed。
- Released。
- Hold。
- HoldAndRelease。
- Tap。
- Pulse。
- ChordAction。
- ChordBlocker。
- Combo。

Chord 和 Combo 对 mapping priority、trigger order、blocker 行为很敏感。修改前必须查当前源码和同项目样例。

## User Settings 与改键

`UEnhancedInputUserSettings` 通常负责玩家改键、profile、保存和应用。

重点查：

- mapping context 注册/注销。
- profile 创建和切换。
- map/unmap/reset player key。
- profile row 和 mapping name 查询。
- player mappable key settings。
- deprecated 类型或字段。

当 UI 改键需要看到尚未激活或来自 GameFeature/插件内容的 mapping context 时，通常需要注册 mapping context 到 user settings，而不只是 add mapping context 到 local player subsystem。

如果 mapping context 来自 GameFeature 或模块化玩法插件，同时读取 `../../orion-gamefeatures/SKILL.md`，确认激活时添加、反激活时移除、user settings 注册/注销和 completion delegate 时机。

如果输入动作用于触发 GameplayAbility，同时读取 `../../unreal-gameplayabilities/SKILL.md`，确认 ability grant、activation policy、prediction、commit/end 和 authority 行为。

## Developer / Platform Settings

`UEnhancedInputDeveloperSettings` 可能影响全局行为：

- default mapping contexts。
- user settings class。
- default player mappable profile class。
- save slot。
- default player/world input classes。
- triggered events when input is flushed。
- user settings enablement。
- default mapping contexts enablement。
- chord trigger behavior。
- input mode filtering。
- world subsystem。

`UEnhancedInputPlatformSettings` 或等价平台数据可能做 mapping-context redirects。跨平台输入问题要检查平台设置，不要只看单个 IMC。

## Blueprint 和 Editor

`InputBlueprintNodes` 用于 Blueprint action event、debug key 和 get action value 节点。运行时代码不要依赖 editor-only 模块。

`InputEditor` 用于资产创建、details panel、settings UI、editor subsystem、validation 和测试。新增编辑器工具时先确认模块类型和依赖边界。

## 与 InputCore 的关系

EnhancedInput 依赖底层 Engine 输入基础，但职责不同。InputCore 提供 `FKey`、key metadata、platform key conversion 和 legacy input 基础；EnhancedInput 负责 action、mapping context、trigger、modifier、user settings 和 runtime evaluation。

路由规则：

- 判断 key 是否是 gamepad、mouse、touch、modifier、analog 或 Blueprint/action bindable：读取 `../../unreal-inputcore/SKILL.md`。
- 查 mapping context 中的 key 如何触发 action value、trigger state、binding callback：继续使用本 Skill。
- `UEnhancedPlayerInput` 的底层 key state、legacy axis properties 或 input flushing 异常：同时查 InputCore 和本 Skill。
- `UEnhancedInputComponent` 绑定异常但 component stack、block input、legacy binding 可能参与：同时查 InputCore 和本 Skill。

## 与 CommonInput 的关系

EnhancedInput 负责 action、mapping、trigger、modifier 和 gameplay input lifecycle。CommonInput 负责 UI 输入设备状态、输入模式、按键提示、UI back/click 等行为。

路由规则：

- 角色移动、镜头、技能输入、action binding：优先 EnhancedInput。
- UI 输入模式、back/click、手柄图标、按键提示：优先 CommonInput。
- UI back/click 使用 EnhancedInput action：同时查 EnhancedInput 和 CommonInput。
- 打开 UI 后角色不能动或鼠标捕获异常：同时查 input mode、mapping context 和 CommonUI/CommonInput action domain。

## 修改前检查清单

- 目标是 gameplay 输入，还是 UI 输入状态。
- 输入是否经过项目封装层。
- action value type 是否正确。
- trigger event 是否符合预期。
- mapping context priority 是否正确。
- add/remove mapping 是否对称。
- user remapping 是否需要注册 mapping context。
- input mode filtering 是否会隐藏 mapping。
- chord/combo 是否受 priority 或 blocker 影响。
- module dependency 是否正确。

## 验证

- 构建目标模块，确认 Build.cs 依赖正确。
- 修改反射声明时触发 UHT。
- 实测 key/gamepad 输入是否触发预期 action。
- 检查 `Started`、`Triggered`、`Completed`、`Canceled` 触发时机。
- 检查 add/remove mapping context 在本地玩家加入、离开、GameFeature 激活/停用时是否对称。
- 检查 remapping save/apply/reset。
- 检查 UI key prompt 是否反映 remapped key。
