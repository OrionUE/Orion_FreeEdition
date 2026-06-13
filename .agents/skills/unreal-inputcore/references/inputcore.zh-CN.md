# InputCore 源码指南

InputCore 是 Unreal Engine 的底层输入基础之一，负责 key identity、key metadata、平台 key 转换和输入调试钩子。它不是 Gameplay 输入动作系统，也不是 UI 按键图标系统；EnhancedInput 和 CommonInput 会在更高层使用它提供的 `FKey` 语义。

## 源码入口

优先从这些相对位置和符号开始查：

- `<EngineRoot>/Engine/Source/Runtime/InputCore`
- `InputCore.Build.cs`
- `InputCoreTypes.h`
- `InputCoreTypes.cpp`
- `InputCore.h`
- `InputCoreModule.h`
- `IInputDebuggingInterface.h`
- `GenericPlatformInput.h`
- `PlayerInput.h`
- `InputComponent.h`
- `FKey`
- `FKeyDetails`
- `EKeys`
- `FInputKeyManager`
- `FGenericPlatformInput`
- `UPlayerInput`
- `UInputComponent`

如果项目或插件封装了输入系统，先查项目封装层，再回到引擎模块确认原生行为。

## 模块边界

InputCore 常见职责：

- 定义 canonical key identity。
- 保存 key display name、menu category、paired axis 和 key flags。
- 提供 keyboard、mouse、gamepad、touch、gesture、axis 等 key 分类。
- 做平台 key name 或 platform key code 的转换入口。
- 提供输入调试接口。

调用方模块如果公共头暴露 `FKey` 或 InputCore 类型，通常需要 public dependency；如果只在 `.cpp` 使用，优先 private dependency。具体依赖仍以当前 `*.Build.cs` 和声明所在模块为准。

## FKey

`FKey` 是 key identity 和 metadata handle，不是输入状态对象。它通常包装一个 key name，并通过 `FKeyDetails` 获取分类和显示信息。

常见查询方向：

- `IsValid`
- `IsModifierKey`
- `IsGamepadKey`
- `IsTouch`
- `IsMouseButton`
- `IsButtonAxis`
- `IsAxis1D`
- `IsAxis2D`
- `IsAxis3D`
- `IsDigital`
- `IsAnalog`
- `IsBindableInBlueprints`
- `ShouldUpdateAxisWithoutSamples`
- `IsBindableToActions`
- `IsDeprecated`
- `IsGesture`
- `GetDisplayName`
- `GetFName`
- `GetMenuCategory`
- `GetPairedAxis`
- `GetPairedAxisKey`

使用规则：

- 判断输入设备族时优先用 `FKey` helper，不要手写 key name 前缀判断。
- 保存或比较常用 key 时优先使用 `EKeys` 常量。
- UI 显示按键图标时不要只用 `GetDisplayName`；图标、glyph 和平台 controller data 属于 CommonInput 或项目封装。
- 不要把 `FKey` 当作 pressed/released 状态；输入状态要查 `UPlayerInput`、EnhancedInput action state 或项目封装。

## FKeyDetails

`FKeyDetails` 保存 key 的显示名、菜单分类、paired axis 信息和分类 flags。常见 flags 覆盖：

- gamepad
- touch
- mouse button
- modifier
- Blueprint bindability
- action bindability
- axis type
- gesture
- deprecated
- update-without-samples behavior

当某个 key 不能绑定、不能在 Blueprint 暴露、分类错误或 UI 过滤异常时，先查 `FKeyDetails` 的 flags 是否符合预期。

## EKeys 与 FInputKeyManager

`EKeys` 是中心化静态 key registry，用于 keyboard、mouse、gamepad、touch 和 axis key 的 canonical constants。

`FInputKeyManager` 负责 key 注册与查找。引擎级或插件级代码需要新增、解析或检查注册 key metadata 时，优先查它的当前源码和调用点。

注意：

- Gameplay 代码通常不需要注册新 key。
- 不要用裸 `FName` 字符串替代已有 `EKeys` 常量。
- 如果 key 来源于平台硬件事件，先确认 platform input conversion 是否已经把它映射到正确 `FKey`。

## Platform Input

`FGenericPlatformInput` 是平台输入转换的基础层。平台实现通常会扩展它来处理不同系统的 key code、scan code、gamepad key 或触摸输入。

排查跨平台输入差异时：

1. 先确认高层 `FKey` 是否一致。
2. 再查 platform input conversion。
3. 最后查 EnhancedInput mapping、CommonInput controller data 或项目封装。

Gameplay 代码通常不要直接依赖平台转换层，除非任务明确是输入设备接入、平台 key 映射或引擎层插件。

## UPlayerInput

`UPlayerInput` 管理本地玩家输入状态，并保留 legacy config input 结构。常见方向：

- key bind。
- axis properties。
- action key mapping。
- axis key mapping。
- key state。
- input flushing。
- legacy action/axis config 兼容。

EnhancedInput 的 player input 类型继承自 `UPlayerInput`，因此 legacy axis properties、key state 和 input flushing 仍可能影响现代输入链路。遇到 EnhancedInput 行为异常时，不要只看 mapping context，也要确认底层 player input 状态。

## UInputComponent

`UInputComponent` 是 actor 输入绑定组件，也是 input component stack 的基础。它定义 legacy action、axis、key、touch、gesture 等 binding 容器和 native/dynamic delegate helper。

EnhancedInput 的 input component 类型继承自 `UInputComponent`，并用 action asset 绑定替代多数 legacy name-based API。

检查输入绑定时区分：

- input component 是否被创建并加入 stack。
- stack 优先级和 block input 是否影响下层组件。
- legacy binding 与 EnhancedInput action binding 是否混用。
- 解绑时是否使用正确 handle 或对象清理接口。

## 与 EnhancedInput 的关系

InputCore 提供 `FKey` 和底层 key metadata；EnhancedInput 用 `FKey` 表达 mapping context 中的 key，并把输入转换为 action value、trigger state 和 binding callback。

路由规则：

- key 是否是 gamepad/mouse/touch/modifier/axis：查 InputCore。
- action value、trigger、modifier、mapping priority、user remapping：查 EnhancedInput。
- `UEnhancedPlayerInput` 底层继承关系、legacy key state 或 input component stack：同时查 InputCore 和 EnhancedInput。

## 与 CommonInput 的关系

CommonInput 使用 `FKey` 作为 key identity，但 UI 输入类型、controller data、key brush、gamepad glyph 和 platform UI prompt 不属于 InputCore。

路由规则：

- `FKey` 分类、display name、menu category、paired axis：查 InputCore。
- 当前输入设备、手柄类型、key brush、UI back/click、Action Domain：查 CommonInput。
- UI 提示不正确时，先确认 `FKey` 是否正确，再查 CommonInput controller data 和平台设置。

## 修改前检查清单

- 当前问题是底层 key 分类，还是高层 action/UI 行为。
- 是否需要查项目封装层。
- `FKey` 是否用现有 `EKeys` 常量。
- key flags 是否允许当前绑定或 Blueprint 暴露。
- platform input conversion 是否影响当前平台。
- legacy `UPlayerInput` 或 `UInputComponent` 行为是否仍在链路内。
- 调用方模块是否需要 `InputCore`、`Engine`、`EnhancedInput` 或 `CommonInput` 依赖。

## 验证

- 编译目标模块，确认 `*.Build.cs` 依赖正确。
- 修改反射声明时触发 UHT。
- 实测 keyboard、mouse、gamepad、touch 或目标平台输入。
- 检查 `FKey` 分类结果是否符合预期。
- 检查 EnhancedInput action 是否仍按预期触发。
- 检查 CommonInput key brush 或 input type 是否仍按预期切换。
