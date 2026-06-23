# 输入框架使用手册

## 范围

本框架的输入系统不是单一插件，而是四层协作：

- `InputCore`：`FKey`、`EKeys`、key metadata、key 分类和底层输入兼容。
- `EnhancedInput`：`UInputAction`、`UInputMappingContext`、trigger、modifier、mapping context、用户改键和 profile。
- `CommonInput` / `CommonUI`：当前输入设备、手柄类型、平台 controller data、key brush、UI click/back、Action Domain 和 input mode。
- `CommonInputSystem`：项目级桥接插件，把 `UInputAction` 映射到 `InputTag`，把 Ability 输入转给 ASC，并扩展 EnhancedInput 用户设置和 CommonInput glyph 查询。

处理输入需求时先判断目标属于哪一层。不要把 CommonInput 当成角色移动输入系统，也不要把 EnhancedInput 的 `FKey` display name 当成最终 UI glyph。

## 代码与配置地图

源码入口：

- `Plugins/Common/CommonInputSystem/Source/CommonInputSystem`
- `Plugins/Common/CommonInputSystem/Source/CommonInputSystem/Public/InputSystemPlayerInput.h`
- `Plugins/Common/CommonInputSystem/Source/CommonInputSystem/Private/InputSystemPlayerInput.cpp`
- `Source/GameCore/Public/Character/CorePawnData.h`
- `Source/GameCore/Public/Character/CorePawnControlComponent.h`
- `Source/GameCore/Public/GameFeatures/GameFeatureAction_AddInputContextMapping.h`
- `Source/GameCore/Public/GameFeatures/GameFeatureAction_AddInputBinding.h`
- `Source/GameCore/Public/Settings/GameSettingInput.h`
- `Source/GameCore/Public/AbilitySystem/CoreAbilitySet.h`
- `Source/OrionGame/Character/OrionPawnControlComponent.*`
- `Source/OrionGame/Input/OrionInputModifiers.*`
- `Source/OrionGame/Input/OrionAimSensitivityData.*`
- `Source/OrionGame/Settings/User/GameSettingRegistry_MouseAndKeyboard.cpp`
- `Source/OrionGame/Settings/User/GameSettingRegistry_Gamepad.cpp`
- `Source/OrionGame/Settings/User/OrionSettingsLocal.*`
- `Source/OrionGame/Settings/User/OrionSettingsShared.*`

配置入口：

- `Config/DefaultInput.ini`
- `Config/DefaultGame.ini` 的 `[/Script/CommonInput.CommonInputSettings]`
- `Config/<Platform>/<Platform>Game.ini` 的 `[CommonInputPlatformSettings_<Platform> CommonInputPlatformSettings]`
- `Config/<Platform>/<Platform>Game.ini` 的 `[/Script/CommonUI.CommonUISettings]`

引擎源码对照：

- `<EngineRoot>/Engine/Source/Runtime/InputCore`
- `<EngineRoot>/Engine/Plugins/EnhancedInput/Source/EnhancedInput`
- `<EngineRoot>/Engine/Plugins/Runtime/CommonUI/Source/CommonInput`
- `<EngineRoot>/Engine/Plugins/Runtime/CommonUI/Source/CommonUI`

## 运行时输入链路

默认配置要求：

- `DefaultPlayerInputClass=/Script/CommonInputSystem.InputSystemPlayerInput`
- `DefaultInputComponentClass=/Script/CommonInputSystem.InputSystemComponent`
- `bEnableUserSettings=True`
- `UserSettingsClass=/Script/CommonInputSystem.InputSystemUserSettings`
- `DefaultPlayerMappableKeyProfileClass=/Script/CommonInputSystem.InputSystemPlayerMappableKeyProfile`
- `bEnablePreferredInputAPIPreferences=True`
- `DefaultPreferredInputAPIList=XInput,WinDualShock`
- `[/Script/CommonInput.CommonInputSettings]` 中启用 `bEnableEnhancedInputSupport=True`
- Windows/WinGDK 的 `[GameInputPlatformSettings_<Platform> GameInputPlatformSettings]` 中按需启用 `bProcessGamepad=True`，并避免 raw/controller 重复处理。

初始化链路：

1. `CorePawnData` 保存该 Pawn 使用的 `UInputSystemConfig`。
2. `CorePawnControlComponent` 在初始化状态达到 DataInitialized 时调用 `InitializePlayerInput`。
3. `InitializePlayerInput` 取得 `UEnhancedInputLocalPlayerSubsystem`，清空旧 mapping。
4. `DefaultInputMappings` 中的 IMC 会按 priority 添加；若 `bRegisterWithSettings=true`，还会注册到 `UEnhancedInputUserSettings`。
5. PawnData 的 `InputConfig` 交给 `UInputSystemComponent`。
6. `UInputSystemComponent::BindAbilityActions` 自动绑定 `AbilityInputActions`，把 `Triggered`、`Started`、`Completed` 分别转成 ASC 的 pressed、started、released 输入 tag。
7. 派生 PawnControl 覆盖 `AddNativeActionInput`，用 `BindNativeAction` 绑定移动、镜头等硬编码 Native 输入。
8. 初始化结束后发送 `BindInputsNow` 扩展事件，GameFeature Action 可在这个时机补充输入。

默认不要绕过这个链路直接在 Pawn、Controller 或 Ability 里裸调用 `BindAction`。如果确实要写特殊绑定，先确认它不会绕过 `InputTag`、GameFeature 反激活、用户改键和输入设置页。

## CommonInputSystem 关键类型

`UInputSystemConfig` 是输入配置资产：

- `NativeInputActions`：C++ 手动绑定的输入动作，适合移动、镜头、交互基础动作等稳定输入。
- `AbilityInputActions`：自动绑定到 Ability 的输入动作，要求 AbilitySet 授予 GA 时使用匹配 `InputTag`。
- `FindNativeInputActionForTag` 和 `FindAbilityInputActionForTag` 用 tag 找 action，找不到时可记录日志。

`UInputSystemComponent` 继承 `UEnhancedInputComponent`：

- `BindNativeAction`：从 `NativeInputActions` 查 action，再绑定到对象函数。
- `BindAbilityActions`：遍历 `AbilityInputActions`，把 tag 作为参数传给 ASC 输入函数。
- `AddInputMappings` / `RemoveInputMappings` 当前是预留扩展点；本框架中 IMC 的实际添加主要来自 `DefaultInputMappings` 和 `GameFeatureAction_AddInputContextMapping`。
- `RemoveBinds` 用 binding handle 清理绑定；新增动态绑定时必须保存 handle。

`UInputSystemPlayerInput` 继承 `UEnhancedPlayerInput`：

- 作为 `DefaultPlayerInputClass` 使用，负责在输入事件进入 EnhancedInput 后额外处理项目级延迟 marker。
- 覆盖 `InputKey`，调用父类后再处理 `ProcessInputEventForLatencyMarker`。
- 当延迟 flash indicator 开启且输入 key 是 `EKeys::LeftMouseButton` 时，会通过 `ILatencyMarkerModule` 发送 custom marker 7。
- 监听 `UInputSystemUserSettings::OnLatencyFlashInidicatorSettingsChangedEvent`，根据设置启用或关闭各 latency marker module 的 flash indicator。
- 该类会从 owning local player 取 `UEnhancedInputLocalPlayerSubsystem` 和 `UInputSystemUserSettings`；新增或修改构造/析构路径时必须保护 CDO、archetype、空 LocalPlayer 和空 subsystem。
- PIE 停止或编辑器关闭 Play 时，LocalPlayer / EnhancedInput subsystem 可能已经先于 `UInputSystemPlayerInput` 析构失效；绑定设置委托时优先缓存 `TWeakObjectPtr<UInputSystemUserSettings>`，解绑和回调先使用弱引用，弱引用失效时安全返回，不要在析构路径无保护地重新 `GetOwningLocalPlayer()->GetSubsystem()`。

`UInputSystemUserSettings` 继承 `UEnhancedInputUserSettings`：

- 覆盖 `RegisterKeyMappingsToProfile`，读取每个 mappable mapping 的 `UInputSystemMappableKeySettings`。
- 将 `GamepadKeyName`、`bEnabledInKeySetting` 和 metadata 保存到 `KeyMappingExtensions`。
- 设置页用这些扩展数据把键鼠 mapping row 与对应手柄 mapping row 关联。
- 管理延迟统计和延迟 flash indicator 设置。平台 trait `Platform.Trait.SupportsLatencyStats` 控制统计开关，`Platform.Trait.SupportsLatencyMarkers` 控制 flash marker。
- `SetEnableLatencyTrackingStats` 应同步 `ILatencyMarkerModule::SetEnabled`，并在 `FSlateApplication` 未初始化或平台不支持时安全返回。

`UInputSystemPlayerMappableKeyProfile` 继承 `UEnhancedPlayerMappableKeyProfile`：

- `KeySettingControllerData` 在 `DefaultInput.ini` 中配置。
- `TryGetInputBrush` 根据 `ECommonInputType`、`FKey` 和 `GamepadName` 查 CommonInput controller data。
- UI 不应硬编码按钮贴图路径，应通过 profile/controller data 查询。

`UInputSystemMappableKeySettings` 继承 `UPlayerMappableKeySettings`：

- `GamepadKeyName` 指向同一功能的手柄 mapping row 名。
- `bEnabledInKeySetting=false` 可隐藏不希望出现在按键设置中的 mapping。
- inherited metadata 可承载 UI 提示所需的额外信息。

## Native 输入新增流程

Native 输入适合“运行时不随玩法内容动态改变”的 C++ 输入，例如移动和镜头。

流程：

1. 新建或确认 `IA_<ActionName>`，设置正确 `ValueType`。
2. 将 IA 加入 `UInputSystemConfig.NativeInputActions`，绑定 `InputTag.<Name>`。
3. 将 IA 绑定到 IMC，并配置 triggers、modifiers、mappable settings。
4. 确认 IMC 会通过 PawnControl `DefaultInputMappings` 或 `GameFeatureAction_AddInputContextMapping` 添加。
5. 在 OrionGame 派生 PawnControl 中覆盖 `AddNativeActionInput`，调用 `BindNativeAction`。
6. 函数参数按 IA 的 `ValueType` 使用 `FInputActionValue::Get<T>`；不要把 Axis2D 当 Boolean。

模板：

```cpp
void UMyPawnControlComponent::AddNativeActionInput(UInputSystemComponent* InputComponent, const UInputSystemConfig* InputConfig)
{
	Super::AddNativeActionInput(InputComponent, InputConfig);

	InputComponent->BindNativeAction(InputConfig, MyGameplayTags::InputTag_MyAction, ETriggerEvent::Triggered, this, &ThisClass::Input_MyAction, /*bLogIfNotFound=*/ false);
}
```

注意：

- Native input tag 推荐定义为 native gameplay tag，前缀使用 `InputTag.*`。
- 输入处理函数可以是 `BlueprintNativeEvent`，方便蓝图覆盖；但 C++ 默认实现要保证空 Pawn、Controller、World 时安全返回。
- 不要为了新增项目输入修改 `CorePawnControlComponent`，除非用户明确允许改 GameCore。

## Ability 输入新增流程

Ability 输入适合“由 GA 响应”的动作，例如开火、换弹、瞄准、互动或技能。

流程：

1. 新建或确认 `IA_<AbilityName>`。
2. 在 GameplayTag 配置或 native tag 中创建 `InputTag.Ability.<Name>`。
3. 将 IA 和 `InputTag.Ability.<Name>` 加入 `UInputSystemConfig.AbilityInputActions`。
4. 在 `UCoreAbilitySet` 的 GA 条目中给目标 GA 填同一个 `InputTag`。
5. 确认 AbilitySet 会通过 PawnData 或 GameFeature Action 授予给 ASC。
6. 确认 IMC 会通过 `GameFeatureAction_AddInputContextMapping` 添加并注册到 user settings。
7. 如果该输入属于可选玩法插件，把 `UInputSystemConfig` 放入 `GameFeatureAction_AddInputBinding.InputConfigs`。

运行时语义：

- `Triggered` 调用 `AbilityInputTagPressed`。
- `Started` 调用 `AbilityInputTagStarted`。
- `Completed` 调用 `AbilityInputTagReleased`。
- ASC 根据 AbilitySpec 动态标签匹配输入 tag。

常见错误：

- AbilitySet 的 `InputTag` 和 InputConfig 的 `InputTag` 不一致，GA 不会响应。
- 只创建 IA/IMC，没注册 IMC，输入不会触发。
- 只注册 InputConfig，没通过 `AddInputMapping` 加 IMC，按键设置可能看不到 mapping。
- IA 的 trigger 语义不对，把持续触发和按下/释放混用，导致 GA 激活时机错误。

## GameFeature 输入接入

玩法插件中的输入通常需要两类 Action 同时配置：

- `UGameFeatureAction_AddInputContextMapping`：添加 `UInputMappingContext` 到 local player subsystem，并可注册到用户设置。
- `UGameFeatureAction_AddInputBinding`：添加额外 `UInputSystemConfig`，由 PawnControl 把 Ability 输入绑定到 ASC。

`FInputMappingContextAndPriority` 字段：

- `InputMapping`：IMC 软引用。
- `Priority`：EnhancedInput mapping 优先级，数值越高优先级越高。
- `bRegisterWithSettings`：是否注册到 `UEnhancedInputUserSettings`，影响改键 UI 是否能看到该 IMC。

Feature 激活时要验证：

- 当前 world 已存在时能添加输入。
- 后续 LocalPlayer 加入时能注册 input mapping。
- `BindInputsNow` 触发后能补充绑定。
- 反激活时 mapping context、binding 和已保存 handle 能清理。

注意当前框架里 `RemoveAdditionalInputConfig` 仍是扩展点；为动态可卸载玩法新增输入时，必须额外验证反激活后旧输入不会继续触发。需要修复核心反激活行为时，先征得用户允许再改 GameCore。

## OrionGameTemplate 输入排查要点

当用户反馈 OrionGameTemplate 关卡运行后角色不能移动、WASD/鼠标/技能键无响应，但 ESC 能打开菜单时，优先按以下链路排查，不要先改 UI：

1. 用 MCP `DescribeExperienceAsset` 检查 `/OrionGameTemplate/Experiences/BP_OrionGameTemplate_Experience` 是否引用 `/OrionGameTemplate/Experiences/DA_OrionGameTemplate_ActionSet`。
2. 检查 `/OrionGameTemplate/Player/DA_OrionGameTemplatePawnData` 的 `InputConfig`。模板 Pawn 的主 InputConfig 应指向 `/Game/GamePlay/Input/InputData_Default.InputData_Default`，否则 `UOrionPawnControlComponent` 找不到 `InputTag.Move`、`InputTag.Look.Mouse`、`InputTag.Look.Stick` 的 Native 输入。
3. 检查 `DA_OrionGameTemplate_ActionSet` 的 `GameFeatureAction_AddInputBinding`。模板能力输入仍应通过 `/OrionGameTemplate/Player/Input/InputData_OrionGameTemplate.InputData_OrionGameTemplate` 作为额外 Ability InputConfig 注入。
4. 检查 `DA_OrionGameTemplate_ActionSet` 的 `GameFeatureAction_AddInputContextMapping` 是否同时包含 `/Game/GamePlay/Input/Mappings/IMC_Default.IMC_Default` 和 `/OrionGameTemplate/Player/Input/IMC_OrionGameTemplate.IMC_OrionGameTemplate`。`IMC_Default` 提供 WASD/鼠标/手柄移动视角，模板 IMC 提供 Attack/Collect/Build/Trade 等玩法键。
5. 检查模板角色蓝图或父蓝图资产中是否有 `BBL_PawnControlComponent` / `PawnControl_GEN_VARIABLE`。属性导出里 `PawnControl` 值可能为空，不等于组件缺失；可用 `rg -a "PawnControl_GEN_VARIABLE|BBL_PawnControlComponent" <BP>.uasset` 辅助确认。

推荐修复方式：

- 将模板 PawnData 的 `InputConfig` 设置为 `/Game/GamePlay/Input/InputData_Default.InputData_Default`。
- 保留 ActionSet 中模板 `InputData_OrionGameTemplate` 的 `AddInputBinding`，用于技能 Ability 输入。
- 在 ActionSet 的 `AddInputContextMapping` 中添加 `/Game/GamePlay/Input/Mappings/IMC_Default.IMC_Default`，priority 通常低于模板 IMC；模板 IMC 可保持较高 priority。

不要把移动/视角 Native 输入复制进模板 `InputData_OrionGameTemplate` 后又保留同一配置的 `AddInputBinding`，否则能力输入可能在 PawnData 初始化和 GameFeature 补绑阶段重复绑定。

## 输入资产和路径

命名：

- `IA_<Name>`：Input Action。
- `IMC_<Name>`：Input Mapping Context。
- `InputData_<Name>`：`UInputSystemConfig` 数据资产。
- GameplayTag 前缀使用 `InputTag.*`，Ability 输入常用 `InputTag.Ability.*`。

常见路径模板：

- 项目通用输入资产：`Content/Input/Actions`、`Content/Input/Mappings`、`Content/Input`。
- 玩法插件输入资产：`Plugins/GameFeatures/<FeatureName>/Content/Input/Actions`、`Plugins/GameFeatures/<FeatureName>/Content/Input/Mappings`、`Plugins/GameFeatures/<FeatureName>/Content/Input`。
- 玩法插件仍应遵守 GameFeatures 内容组织规则；创建正式资产前先读取 `unreal-asset-management`。

如果输入资产用于 UI 按键提示或 CommonInput controller data，还要检查 `Content/UI` 与平台 controller data 目录规则。

## 玩家改键和按键设置页

设置 UI、Apply/Cancel、VisualData 和保存行为先读取 `unreal-game-settings-framework`；本节只记录输入系统如何向设置页提供可改键数据。

改键 UI 由 `GameSettingRegistry_MouseAndKeyboard.cpp` 和 `UGameSettingInput` 生成：

1. 取得 `UEnhancedInputLocalPlayerSubsystem`。
2. 取得 `UInputSystemUserSettings` 和所有 available key profiles。
3. 遍历 profile 的 `PlayerMappingRows`。
4. 用 `FPlayerMappableKeyQueryOptions` 区分键鼠和手柄 mapping。
5. 通过 `KeyMappingExtensions` 找到同一功能的手柄 row。
6. 为每个 display category 创建 `UGameSettingCollection`。
7. 创建 `UGameSettingInput` 并初始化 mapping row、extension 和 edit condition。

`UGameSettingInput` 行为：

- `ChangeBinding` 对键鼠槽拒绝 gamepad key，对手柄槽只接受 gamepad key。
- `ResetToDefault` 使用 `ResetAllPlayerKeysInRow`。
- `GetKeyTextFromSlot` 返回当前 key display name。
- `GetKeyBrushFromSlot` 通过 `UInputSystemPlayerMappableKeyProfile::TryGetInputBrush` 查询 CommonInput glyph。
- `GetAllMappedActionsFromKey` 可用于冲突提示。

新增可改键输入时要确认：

- IMC mapping 标记为 player mappable。
- mapping name 稳定，不要随显示名变化。
- 键鼠 mapping 和手柄 mapping 的 `GamepadKeyName` 关联正确。
- `DisplayName` 和 `DisplayCategory` 可用于设置页分组。
- 不想暴露给设置页的 mapping 使用 `bEnabledInKeySetting=false`。
- IMC 已注册到 user settings，否则设置页不会生成行。

## 手柄、键鼠和平台设置

`GameSettingRegistry_Gamepad.cpp` 负责：

- 从 `UCommonInputPlatformSettings` 读取 `ControllerData`。
- 只把 `InputType == ECommonInputType::Gamepad` 的 controller data 加入硬件选项。
- 当平台允许切换手柄类型时，显示 controller hardware 设置。
- 绑定震动、反转、灵敏度和死区到 `UOrionSettingsShared` / `UOrionSettingsLocal`。
- 绑定 `GamepadInputAPI_Option` 到 `UOrionSettingsShared`，让玩家在 Legacy `XInput,WinDualShock` 和 Modern `GameInput` 之间选择。

`UOrionSettingsLocal::SetControllerPlatform` 会调用 `UCommonInputSubsystem::SetGamepadInputType`。因此手柄 UI 名称、glyph 和当前手柄类型必须与平台 `ControllerData` 的 `GamepadName` 对齐。

`UOrionSettingsShared::SetGamepadInputAPIOption` 会调用 `FGenericPlatformMisc::SetPreferredInputDevices`。新增或排查该设置时：

1. `.uproject` 需要启用 `XInputDevice` 和 `GameInputWindows` 等目标平台插件。
2. `Config/DefaultInput.ini` 需要 `bEnablePreferredInputAPIPreferences=True`。
3. Legacy 值使用 `XInput,WinDualShock`，Modern 值使用 `GameInput`。
4. 设置项只在 Windows 且 preferred input API preferences 开启时显示；修改后通常需要重启才能完全切换底层输入 API。
5. GameInput 平台 section 应避免 raw/controller/gamepad 重复处理同一设备，常见配置是只处理 gamepad 和 sensors。

平台配置要点：

- `[CommonInputPlatformSettings_<Platform> CommonInputPlatformSettings]` 设置默认输入类型、是否支持键鼠/触摸/手柄、默认手柄名、是否允许切换手柄类型和 `+ControllerData`。
- `[/Script/CommonUI.CommonUISettings]` 的 `PlatformTraits` 可用于设置页 gating，例如是否支持键鼠。
- `[/Script/CommonInput.CommonInputSettings]` 的 `InputData`、`ActionDomainTable`、`bAllowOutOfFocusDeviceInput`、`bEnableEnhancedInputSupport` 影响 CommonInput 行为。
- `Platform.Trait.SupportsLatencyStats`、`Platform.Trait.SupportsLatencyMarkers` 和 `Platform.Trait.SupportsCustomDynamicResolution` 会影响输入延迟设置和视频设置页显示。

## Modifiers 与用户输入设置

通用层：

- `UCommonInputModifierDeadZone` 提供基于 move/look stick 区分的死区 modifier 基类和可视化颜色。

OrionGame 派生层：

- `UOrionSettingBasedScalar` 根据 `UOrionSettingsShared` 中的属性名缩放输入值。
- `UOrionInputModifierDeadZone` 从共享设置读取 move/look stick dead zone。
- `UOrionInputModifierGamepadSensitivity` 使用 `UOrionAimSensitivityData` 把灵敏度枚举映射为 float。
- `UOrionInputModifierAimInversion` 根据共享设置反转 X/Y 轴。

新增 modifier 时：

- 放在派生层或 feature module，默认不改 GameCore。
- 检查 `FInputActionValue` 的 `ValueType`，Boolean 不应走轴缩放。
- 不在 modifier 中做重 gameplay 逻辑。
- 修改设置字段后确认 `UOrionSettingsShared::ApplySettings` 会应用 EnhancedInput user settings，`SaveSettings` 会保存输入设置。

## UI 输入与 CommonInput

UI 输入需求优先查 CommonInput：

- 当前输入类型：`UCommonInputSubsystem::GetCurrentInputType`。
- 当前手柄名：`GetCurrentGamepadName`。
- 手柄类型切换：`SetGamepadInputType`。
- 是否显示按键提示：`ShouldShowInputKeys`。
- controller data glyph：`UCommonInputBaseControllerData::TryGetInputBrush`。
- Action Domain：`UCommonInputActionDomainTable`。

不要在 Widget 中硬编码手柄贴图路径。用当前 `ECommonInputType`、当前 `GamepadName`、`FKey` 和 controller data 查询 brush。

如果 UI 打开后角色不能动、鼠标捕获异常或 back/click 行为错误，需要同时检查：

- CommonUI widget 的 desired input config。
- CommonInput Action Domain。
- EnhancedInput mapping context priority。
- mapping context input mode filtering。
- GameFeature 激活期间是否添加了额外 UI 或输入映射。

## MCP 自动化路径

如果可用 MCP 修改 Experience 或 ActionSet，优先读取 `unreal-mcp-project-toolsets`。输入相关工具入口：

- `DescribeExperienceAsset`：查看 Experience / ActionSet 的 Action 列表。
- `CreateInputActionAsset`：创建 `UInputAction`，并设置 Boolean、Axis1D、Axis2D 或 Axis3D。
- `CreateInputSystemConfigAsset`：创建项目输入配置资产。
- `AddAbilityInputActionToInputConfig`：把 InputAction 与 InputTag 加入 `AbilityInputActions`。
- `AddNativeInputActionToInputConfig`：把 InputAction 与 InputTag 加入 `NativeInputActions`。
- `CreateAbilitySetAsset`、`AddGameplayAbilityToAbilitySet`、`AddAbilitySetToPawnData`：补齐 GA/InputTag/PawnData 授予链。
- `AddInputBindingActionEntry`：写入 `UGameFeatureAction_AddInputBinding.InputConfigs`。
- `AddInputMappingActionEntry`：写入 `UGameFeatureAction_AddInputContextMapping.InputMappings`。
- `SaveExperienceAsset`：保存修改后的 Experience / ActionSet。

创建完整关卡玩法输入闭环时，先读取 `../../unreal-gamemode-experience-framework/SKILL.md`，确认 Experience、PawnData、AbilitySet、InputConfig、InputAction、InputTag 和 IMC 的关系。

工具内部应处理 Blueprint asset、GeneratedClass CDO 和保存；不要在 Skill 中写死本机编辑器路径。

## Steam 手柄排查

打包后只有 Steam 环境下手柄不响应时，先不要直接改输入代码。排查顺序：

1. 确认非 Steam 运行时手柄是否正常。
2. 用 Steam 覆盖层打开控制器选项。
3. 选择并应用一个手柄模板。
4. 检查 Steam Input 配置是否启用了目标控制器类型。
5. 再回到项目侧检查 `DefaultInput.ini`、平台 `ControllerData`、当前 `GamepadName` 和 IMC。

## 验证清单

代码验证：

- 构建目标 game/editor module。
- 改反射声明后确认 UHT 通过。
- 新增 module 依赖时确认 `InputCore`、`EnhancedInput`、`CommonInput`、`CommonUI`、`CommonInputSystem` 放在正确 Public/Private dependency。

运行验证：

- PIE 中键鼠移动和镜头正常。
- 手柄移动、镜头、按键和 UI 操作正常。
- 切换键鼠/手柄后 CommonInput 当前输入类型和 glyph 更新。
- 改键后保存、重启、恢复默认、恢复初始值都正常。
- 新增 Ability 输入触发 `Started`、`Triggered`、`Completed` 时机正确。
- GameFeature 激活后输入出现，反激活后输入消失。
- UI 打开/关闭时输入模式、鼠标捕获和 gameplay 输入阻断符合预期。

资产验证：

- IA、IMC、InputConfig 命名符合前缀。
- IMC mapping 标记 player mappable 时有稳定 mapping name。
- 键鼠和手柄 mapping row 关联正确。
- ControllerData 中有目标 `FKey` 的 brush。
- 平台 `ControllerData` 包含目标手柄类型。

配置验证：

- `DefaultInput.ini` 使用 `CommonInputSystem.InputSystemPlayerInput` 和 `UInputSystemComponent`。
- EnhancedInput user settings class 和 player mappable profile class 指向 `CommonInputSystem` 扩展类。
- preferred input API 开启时，`DefaultPreferredInputAPIList`、`.uproject` 的 XInput/GameInput 插件和 `GameInputPlatformSettings_*` 一致。
- `DefaultGame.ini` CommonInput settings 启用 EnhancedInput 支持并设置 InputData/ActionDomainTable。
- 目标平台 `Game.ini` 声明支持的输入类型、默认手柄名和 controller data。
- 目标平台 traits 包含实际支持的 latency stats / latency markers；不支持的平台不显示对应设置。

## 常见失败

输入完全不触发：

- 检查 Pawn 是否使用了 `UInputSystemComponent`。
- 检查 PawnData 是否有 `InputConfig`。
- 检查 IMC 是否添加到 local player subsystem。
- 检查 IA `ValueType`、trigger 和 mapping key。

Ability 不响应输入：

- 检查 InputConfig 的 `AbilityInputActions`。
- 检查 AbilitySet 的 GA 条目是否使用同一个 `InputTag`。
- 检查 ASC 是否已授予能力。
- 检查输入事件是 `Triggered`、`Started` 还是 `Completed`。

设置页不显示某个按键：

- 检查 IMC 是否注册到 user settings。
- 检查 mapping 是否 player mappable。
- 检查 `bEnabledInKeySetting`。
- 检查 mapping display category / display name。
- 检查键鼠 row 和手柄 row 的 `GamepadKeyName` 关联。

手柄图标错误：

- 检查当前 `UCommonInputSubsystem::GetCurrentGamepadName`。
- 检查平台 `ControllerData` 是否包含该 `GamepadName`。
- 检查 controller data 是否有目标 `FKey` brush。
- 检查设置页使用的是 key brush，不是 `FKey::GetDisplayName`。

延迟 marker 或 flash indicator 不生效：

- 检查 `DefaultPlayerInputClass` 是否仍是 `UInputSystemPlayerInput`。
- 检查平台是否声明 `Platform.Trait.SupportsLatencyMarkers`。
- 检查 `UInputSystemUserSettings` 是否已经加载，并且 flash indicator 设置已广播。
- 检查 `ILatencyMarkerModule` modular feature 是否存在；没有模块实现时设置开关只会保存状态。

打包版 travel 或 GC 时 `UInputSystemPlayerInput` 析构崩溃：

- 典型栈：`UPlayerInput::GetOwningLocalPlayer()` -> `UInputSystemPlayerInput::GetInputSystemUserSettings()` -> `UInputSystemPlayerInput` 析构或 `FObjectPurge::DestroyObjects()`。
- 原因：地图切换、退出 Play 或打包版 `LoadMap` 触发 GC 时，`LocalPlayer`、`EnhancedInputLocalPlayerSubsystem` 或 outer 链可能已经处于销毁/不可访问状态；析构和解绑路径不能再重新调用 `GetOwningLocalPlayer()->GetSubsystem()`。
- 修复：绑定时缓存 `TWeakObjectPtr<UInputSystemUserSettings>`；`BeginDestroy` 中只通过缓存弱引用解绑并清空状态；析构函数只做本地成员 reset，不调用依赖 UObject outer/subsystem 的函数；回调中弱引用失效时直接关闭 flash flag 并返回。
- 验证：打包版从前台或房间流程 travel 到玩法/lobby 地图，日志不再出现 `GetInputSystemUserSettings`、`GetOwningLocalPlayer`、`FObjectPurge::DestroyObjects` 相关 Fatal。

GameInput 切换无效或手柄重复输入：

- 检查 `bEnablePreferredInputAPIPreferences=True` 和 `DefaultPreferredInputAPIList`。
- 检查 `UOrionSettingsShared::SetGamepadInputAPIOption` 是否调用了 `FGenericPlatformMisc::SetPreferredInputDevices`。
- 检查 `GameInputPlatformSettings_Windows` / `WinGDK` 是否同时处理 raw input、controller 和 gamepad，重复处理会导致一台设备产生多路输入。
- 修改底层 API 后重启进程验证，不要只靠热切设置页。

GameFeature 反激活后输入仍存在：

- 检查 `UGameFeatureAction_AddInputContextMapping` 是否移除了 IMC。
- 检查额外 InputConfig 的动态绑定是否保存 handle 并清理。
- 检查 `RemoveAdditionalInputConfig` 是否已经按需求实现；默认不要擅自改 GameCore。
