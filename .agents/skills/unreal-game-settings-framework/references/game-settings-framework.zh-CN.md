# Game Settings Framework 参考

## 适用范围

当需求涉及“玩家设置、设置页、选项菜单、视频/音频/输入/语言/字幕设置、设置默认值、保存应用、取消恢复、按键重映射、世界创建参数”时，先使用本 Skill。

GameSettings 插件只提供通用模型和 UI 支撑；项目侧实际设置由宿主 Game 模块和 GameUI 模块承接。业务设置不要新增到 GameCore，除非用户明确允许修改核心基座。

## 必读源码

通用插件：

- `Plugins/GameSettings/Source/Public/GameSetting.h`
- `Plugins/GameSettings/Source/Public/GameSettingValue.h`
- `Plugins/GameSettings/Source/Public/GameSettingCollection.h`
- `Plugins/GameSettings/Source/Public/GameSettingAction.h`
- `Plugins/GameSettings/Source/Public/GameSettingValueScalarDynamic.h`
- `Plugins/GameSettings/Source/Public/GameSettingValueDiscreteDynamic.h`
- `Plugins/GameSettings/Source/Public/GameSettingValueEditable.h`
- `Plugins/GameSettings/Source/Public/DataSource/GameSettingDataSourceDynamic.h`
- `Plugins/GameSettings/Source/Public/GameSettingRegistry.h`
- `Plugins/GameSettings/Source/Public/GameSettingRegistryChangeTracker.h`
- `Plugins/GameSettings/Source/Public/Widgets/GameSettingScreen.h`
- `Plugins/GameSettings/Source/Public/Widgets/GameSettingPanel.h`
- `Plugins/GameSettings/Source/Public/Widgets/GameSettingListView.h`
- `Plugins/GameSettings/Source/Public/Widgets/GameSettingVisualData.h`

项目侧设置：

- `Source/<GameModule>/Settings/User/OrionGameSettingRegistry.*`
- `Source/<GameModule>/Settings/User/GameSettingRegistry_*.cpp`
- `Source/<GameModule>/Settings/User/GameSettingRegistry_DLC.cpp`
- `Source/<GameModule>/Settings/User/OrionSettingsLocal.*`
- `Source/<GameModule>/Settings/User/OrionSettingsShared.*`
- `Source/<GameModule>/Settings/User/CustomSettings/*`
- `Source/<GameModule>/Settings/User/CustomSettings/GameSettingValueDiscrete_Display.*`
- `Source/<GameModule>/Settings/User/CustomSettings/GameSettingAction_HDRCalibrationEditor.*`
- `Source/<GameModule>/Settings/Game/OrionGameWorldSettingRegistry.*`
- `Source/<GameModule>/Settings/Game/OrionSettingsWorldOption.*`
- `Source/<UIModule>/Settings/UI_UserSettingScreen.*`
- `Source/<UIModule>/Settings/UI_GameWorldSettingScreen.*`
- `Source/<UIModule>/Settings/UI_UserSettingsListEntry_Input.*`

配置入口：

- `Config/DefaultEngine.ini` 的 `[/Script/Engine.Engine] GameUserSettingsClassName`
- `Config/DefaultInput.ini` 的 `[/Script/EnhancedInput.EnhancedInputDeveloperSettings]`
- `Config/DefaultDeviceProfiles.ini` 的移动端帧率、画质和分辨率限制 CVar
- `Config/<Platform>/<Platform>GameUserSettings.ini`
- `Config/DefaultGame.ini` 中性能、音频、平台设置相关 section
- `Config/<Platform>/<Platform>Game.ini` 中 CommonUI platform traits，例如延迟统计、动态分辨率、窗口模式等 setting gating

引擎源码参考：

- `Engine/Source/Runtime/Engine/Classes/GameFramework/GameUserSettings.h`
- `Engine/Source/Runtime/Engine/Private/GameUserSettings.cpp`
- `Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/UserSettings/EnhancedInputUserSettings.h`
- `Engine/Plugins/EnhancedInput/Source/EnhancedInput/Private/UserSettings/EnhancedInputUserSettings.cpp`

## GameSettings 插件模型

### `UGameSetting`

所有设置的根类。关键职责：

- `DevName`：开发名，必须稳定且在 registry 内唯一。导航、VisualData name override、调试和自动定位都依赖它。
- `DisplayName`、`DescriptionRichText`、`WarningRichText`：玩家可见文案，发布内容必须使用可收集 `FText`。
- `Tags`、`DynamicDetails`：用于筛选、说明和 UI 详情面板。
- `AddEditCondition`：添加显示/禁用/隐藏条件。
- `AddEditDependency`：依赖其他设置变更并刷新编辑状态。
- `Initialize(ULocalPlayer*)`、`Startup()`、`StartupComplete()`：设置生命周期和异步准备。
- `NotifySettingChanged`、`OnSettingChanged`、`OnApply`：变更、应用和广播链路。

非 Shipping 构建里存在 `FString` 版本的 `SetDisplayName` 等辅助函数，但正式可本地化 UI 必须使用 `FText` / `LOCTEXT`。

### `UGameSettingValue`

有值的设置基类。每个值都必须支持：

- `StoreInitial()`：保存当前值，供取消和 dirty tracking 使用。
- `ResetToDefault()`：恢复默认值。
- `RestoreToInitial()`：取消未应用更改。

`FGameSettingRegistryChangeTracker` 只会对 dirty 的 `UGameSettingValue` 调用 `Apply()` 和 `StoreInitial()`；普通 `UGameSettingAction` 默认不进入可撤销值流程。

### 常用设置类型

- `UGameSettingCollection`：设置分组，不可选中，递归持有 child settings。
- `UGameSettingCollectionPage`：可导航子页，适合“字幕选项”这类二级页面。
- `UGameSettingAction`：按钮动作。可设置 `NamedAction` 或 `CustomAction`；默认不会让设置页变 dirty，除非调用 `SetDoesActionDirtySettings(true)`。
- `UGameSettingValueScalarDynamic`：滑条/数值范围。配置 getter/setter、默认值、`SetSourceRangeAndStep`、`SetDisplayFormat`、最小/最大限制。
- `UGameSettingValueDiscreteDynamic`：离散选项。适合 bool、enum、number、color、vector2d。通过 `AddDynamicOption`、`AddEnumOption` 或 `SetDefaultValueFromString` 填充选项。
- `UGameSettingValueEditable_String`：文本输入，项目中用于世界名等可编辑字符串。
- `UGameSettingInput`：项目在 GameCore 提供的输入改键 setting，不要为改键另造 UI。

### Dynamic 数据源

`FGameSettingDataSourceDynamic` 使用 `FCachedPropertyPath` 从 `ULocalPlayer` 开始解析属性路径，并以字符串读写最终值。

项目宏封装了常用路径：

```cpp
GET_LOCAL_SETTINGS_FUNCTION_PATH(GetOverallVolume)
GET_LOCAL_SETTINGS_FUNCTION_PATH(SetOverallVolume)
GET_SHARED_SETTINGS_FUNCTION_PATH(GetMouseSensitivityX)
GET_SHARED_SETTINGS_FUNCTION_PATH(SetMouseSensitivityX)
```

这类路径实际含义是：

1. 从当前 `ULocalPlayer` 调用 `GetLocalSettings()` 或 `GetSharedSettings()`。
2. 在返回对象上调用 getter/setter 或访问可写属性。
3. 通过 `PropertyPathHelpers` 转成字符串读写。

新增动态设置时，getter/setter 应加 `UFUNCTION()`，签名保持简单：getter 无参数返回值，setter 一个参数且类型可字符串转换。直接绑定字段只适合短期状态或已有可写属性，持久设置优先用函数。

### 编辑条件

常用 edit condition：

- `FWhenPlayingAsPrimaryPlayer::Get()`：只允许主本地玩家调整。
- `FWhenPlatformHasTrait::KillIfMissing/DisableIfMissing/KillIfPresent/DisableIfPresent`：按 CommonUI platform trait 显示或禁用。
- `FWhenCondition`：lambda 自定义条件，适合检查 DLSS 支持、窗口模式、渲染 subsystem、硬件能力等。

`Kill` 会让设置从列表里消失；`Disable` 会保留但不可编辑并显示原因。面向玩家的禁用原因用 `FText`。

## Registry 与 UI 生命周期

### `UGameSettingRegistry`

Registry 持有 top-level settings 和所有递归注册的 settings：

1. `Initialize(LocalPlayer)` 调用 `OnInitialize` 构建设置树。
2. `RegisterSetting` 把顶层 collection 加入 `TopLevelSettings`，并递归注册 child。
3. 注册时绑定 setting changed、applied、edit condition changed、named action、navigation 事件。
4. `IsFinishedInitializing()` 默认要求所有 setting `IsReady()`。
5. `SaveChanges()` 是空实现，项目 registry 必须 override。

项目的 `UOrionGameSettingRegistry`：

- 每个 `UCoreLocalPlayer` 下缓存一个 registry object，名字固定。
- `OnInitialize` 依次创建 Game、Video、Audio、MouseAndKeyboard、Gamepad 顶层 collection。
- `SaveChanges` 先调用 `LocalSettings->ApplySettings(false)`，再调用 `SharedSettings->ApplySettings()` 和 `SharedSettings->SaveSettings()`。
- `IsFinishedInitializing` 会等待 `SharedSettings` 有效。

项目的 `UOrionGameWorldSettingRegistry`：

- 用于世界/房间创建设置。
- `SaveChanges` 保存当前 archive 的 WorldOption 和 LevelMeta 类型。
- 当前示例中 `WorldName` 通过 editable string 绑定到 LevelMeta。

### `UGameSettingScreen`

设置屏继承 `UCommonActivatableWidget`：

- `CreateRegistry()` 由子类返回具体 registry。
- `GetOrCreateRegistry()` 创建 registry 后交给 `Settings_Panel`。
- `NativeOnActivated()` 调用 `ChangeTracker.WatchRegistry(Registry)`。
- `ApplyChanges()`：ChangeTracker 应用 dirty setting，清除 dirty，registry 保存。
- `CancelChanges()`：ChangeTracker 恢复 dirty setting 的 initial value。
- `NavigateToSetting(s)` 按 `DevName` 切换过滤根。
- `AttemptToPopNavigation()` 处理子页返回。

项目 UI：

- `UUI_UserSettingScreen` 返回 `UOrionGameSettingRegistry::Get(LocalPlayer)`，并绑定 Apply/Cancel/Back action。
- `UUI_GameWorldSettingScreen` 返回 `UOrionGameWorldSettingRegistry::Get(LocalPlayer)`，确认后根据当前前端 phase 继续创建 Session 或返回。
- `UUI_UserSettingsListEntry_Input` 是输入设置专用 entry，负责弹出 PressAnyKey、检测重复绑定、显示 key brush、恢复默认键。

### VisualData 与 Entry Widget

`UGameSettingListView` 通过 `UGameSettingVisualData` 决定每个 setting 用哪个 entry class：

- `EntryWidgetForClass`：按 setting class 映射。
- `EntryWidgetForName`：按 `DevName` 精确映射。
- `ExtensionsForClasses` / `ExtensionsForName`：详情面板扩展。

新增普通 scalar/discrete/action/navigation/editable 设置通常只要已有 class 映射可覆盖。新增自定义 setting class 或特殊交互时，必须检查对应 VisualData 资产是否需要加 entry/extension 映射。

## 存储选择

### `UOrionSettingsLocal`

本机设置，继承 `UGameUserSettings`，通过 `GameUserSettingsClassName` 指定。适合：

- 分辨率、窗口模式、VSync、画质、Scalability。
- 帧率上限、移动/主机设备 profile、自动 benchmark。
- 显示 gamma、显示器选择、动态分辨率目标、DLSS、DLSS-FG、RTX、抗锯齿方法。
- HDR 输出、HDR 校准值、HDR paper white、安全区缩放、移动端帧率和 DeviceProfile 质量限制。
- 音量、音频输出/输入设备、麦克风采样率/声道。
- 耳机 HRTF、HDR/LDR 音频、手柄硬件类型。
- 只和当前机器/平台有关的开关。

`UGameUserSettings::ApplySettings` 会应用分辨率和非分辨率设置、请求 UI 更新并保存到 `GGameUserSettingsIni`。项目 registry 保存时会调用 `ApplySettings(false)`。

平台默认值可以写入 `Config/<Platform>/<Platform>GameUserSettings.ini` 的 `[/Script/<GameModule>.OrionSettingsLocal]` section。它是首次运行/默认配置，不是运行后唯一真相。

### `UOrionSettingsShared`

共享设置，继承 `ULocalPlayerSaveGame`。适合：

- 字幕启用、字幕大小/边框/背景透明度。
- 语言 pending culture 和默认语言状态。
- 后台音频偏好。
- 鼠标灵敏度、ADS multiplier、轴反转。
- 手柄震动、摇杆死区、手柄灵敏度 preset。
- Gamepad Input API 偏好，例如 Legacy XInput/WinDualShock 和 Modern GameInput。
- 能随账号或云存档迁移的偏好。

SharedSettings 保存时会：

- `SaveGameToSlotForLocalPlayer()`。
- 调用 EnhancedInput user settings 的 `AsyncSaveSettings()`。

应用时会：

- 应用字幕显示选项。
- 应用后台音频。
- 应用语言设置。
- 调用 EnhancedInput user settings 的 `ApplySettings()`。

`UOrionLocalPlayer` 会同步或异步加载 SharedSettings；非桌面平台可能先返回临时对象，加载完成后替换。

### World/Room 设置

世界或房间创建参数不要放 Local/Shared。使用：

- `UOrionGameWorldSettingRegistry`
- `UOrionSettingsWorldOption`
- 当前关卡 LevelMeta / WorldOption 对应 SaveGame handler

示例：`WorldName` 用 `UGameSettingValueEditable_String` 绑定到 LevelMeta 的 `GetWorldName` / `SetWorldName`。

## 当前设置清单

### Game

顶层：`GameCollection`

- `LanguageCollection`
- `Language`：自定义 `UGameSettingValueDiscrete_Language`，绑定 `UOrionSettingsShared` 的 pending culture 流程。
- `DownloadableContentCollection`
- `DLCPage`：开发用 DLC 管理页，受 `Orion.DLCMenu.Show` 和 `PlatformDLC` 可用性控制。

### Video

顶层：`VideoCollection`

Display：

- `WindowMode`
- `Display`：Windows 上使用 `UGameSettingValueDiscrete_Display` 枚举当前显示器。
- `Resolution`
- `PerformanceStat` 页面入口挂在 Display 分区。

`Resolution` 依赖 `WindowMode` 和 `Display`；窗口无边框模式下分辨率应跟随桌面原生分辨率并禁用手动选择。

Graphics：

- `Brightness`
- `AllowHDR`
- `HDRUseCalibration`
- `HDRCalibrationEditor`
- `HDRPaperWhite`
- `SubtitlePage`
- `Subtitles`
- `SubtitleTextSize`
- `SubtitleTextBorder`
- `SubtitleBackgroundOpacity`
- `SubtitleTextColor` 源码中存在但被注释。

Graphics Quality：

- `DeviceProfileSuffix`
- `FrameRateLimit_Mobile`
- `AutoSetQuality`
- `GraphicsQualityPresets`
- `ResolutionScale`
- `GlobalIlluminationQuality`
- `Shadows`
- `AntiAliasing`
- `ViewDistance`
- `TextureQuality`
- `VisualEffectQuality`
- `ReflectionQuality`
- `PostProcessingQuality`
- `AntiAliasingMethod`
- `RTX`

DLSS：

- `DLSSUpscale`
- `DLSSMode`
- `DLSSFG`
- `DLSS Frame Generation Mode`

Advanced Graphics：

- `VerticalSync`

Frame rate settings 追加到 Video 顶层：

- `FrameRateLimit_OnBattery`
- `FrameRateLimit_InMenu`
- `FrameRateLimit_WhenBackground`
- `FrameRateLimit_Always`
- `DynamicResolution`：目标帧率离散选项，受桌面 frame pacing、RHI 动态分辨率能力和 `Platform.Trait.SupportsCustomDynamicResolution` 共同 gating。

### Audio

顶层：`AudioCollection`

Volume：

- `OverallVolume`
- `MusicVolume`
- `SoundEffectsVolume`
- `DialogueVolume`
- `VoiceChatVolume`

Sound：

- `AudioOutputDevice`
- `AudioInputDevice`
- `BackgroundAudio`
- `HeadphoneMode`
- `HDRAudioMode`

音量走 LocalSettings 和 ControlBusMix；后台音频走 SharedSettings；设备列表使用自定义 dynamic setting class。

### Mouse And Keyboard

顶层：`MouseAndKeyboardCollection`

Sensitivity：

- `MouseSensitivityYaw`
- `MouseSensitivityPitch`
- `MouseTargetingMultiplier`
- `InvertVerticalAxis`
- `InvertHorizontalAxis`

Key bindings：

- `KeyBindingCollection`
- 按 EnhancedInput mappable rows 的 `DisplayCategory` 自动创建子 collection。
- 每个可映射行创建一个 `UGameSettingInput`，DevName 形如 `Input_<MappingName>`。

### Gamepad

顶层：`GamepadCollection`

Hardware：

- `ControllerHardware`
- `GamepadVibration`
- `InvertVerticalAxis_Gamepad`
- `InvertHorizontalAxis_Gamepad`

Sensitivity：

- `LookSensitivityPreset`
- `LookSensitivityPresetAds`

DeadZone：

- `MoveStickDeadZone`
- `LookStickDeadZone`

Gamepad Input API：

- `GamepadInputAPI_Option`：绑定 `UOrionSettingsShared` 的 Gamepad Input API 偏好；Windows 且 `bEnablePreferredInputAPIPreferences=True` 时显示，修改后需要重启。

## 显示器、HDR 和动态分辨率

显示相关设置跨 `UGameUserSettings`、RHI、Slate/Viewport 和平台 trait，不要只在 registry 里加一行 UI：

1. 多显示器选择用自定义 `UGameSettingValueDiscrete_Display`，读取 `FDisplayMetrics.MonitorInfo`，保存显示器 ID / index，并通过 `UGameUserSettings::SetDisplayProperties` 影响后续分辨率列表。
2. 分辨率设置要监听 display metrics、窗口模式和显示器变化。Windows 上应优先用当前显示器调用 `RHIGetAvailableResolutionsForDisplay`；无边框窗口禁用手动分辨率选择。
3. `GameSettingRegistry_Video.cpp` 需要监听 viewport 的 `OnWindowDisplayChanged`、`OnToggleFullscreen` 以及本地设置的 video revert 事件，刷新 `WindowMode`、`Display` 和 `Resolution` 的 editable state。
4. HDR 设置分为开关、是否使用校准、校准 action 和 paper white。校准 action 使用 `UGameSettingAction_HDRCalibrationEditor`，内部子 scalar 绑定最大 HDR nits；HDR 未实际启用时应禁用校准入口。
5. 动态分辨率不是普通帧率限制。`DynamicResolution` 需要检查桌面 frame pacing、`GRHISupportsDynamicResolution`、`r.DynamicRes.OperationMode` 和 `Platform.Trait.SupportsCustomDynamicResolution`。

## DLC 设置页和动态详情

开发用 DLC 页走 `GameSettingRegistry_DLC.cpp`，不要塞进 GameCore 或普通 UI Widget Graph：

1. 页面由 CVar `Orion.DLCMenu.Show` 控制，并且只有 `PlatformDLC` 模块返回有效 `IPlatformDLC` 时才注册。
2. `DLCPage` 使用 initialization edit condition；`IPlatformDLC::RegisterInitializationCallback` 触发后再枚举 DLC 名称并填充动作。
3. 每个 DLC 通常有 Download、Mount、Launch、Unmount、Uninstall 动作。Launch 默认按 `/<DLCName>/<DLCName>` 地图约定打开。
4. 动态状态文本用 `SetDynamicDetails` 返回当前状态和下载百分比；如果要持续刷新，ticker 应调用 setting changed 广播，并在对象销毁或重建时清掉旧 ticker。
5. 在当前 DLC 地图中 Unmount 可能触发 GC 崩溃风险，必须先弹确认或阻止操作。

`GameSettingDetailView` 必须监听当前 setting 的 `OnSettingChangedEvent` 并刷新 `Description` / `DynamicDetails` 可见性。新增依赖动态状态的 action 时，先确认 detail view 有这条绑定，否则状态文本不会随下载进度变化。

## 移动设备画质和帧率

移动端质量限制由 `DefaultDeviceProfiles.ini`、`UOrionSettingsLocal` 和 Video setting 共同决定：

- DeviceProfile CVar 使用 `Game.DeviceProfile.Mobile.DefaultFrameRate`、`Game.DeviceProfile.Mobile.MaxFrameRate`、`Game.DeviceProfile.Mobile.OverallQualityLimits`、`Game.DeviceProfile.Mobile.ResolutionQualityLimits` 和 `Game.DeviceProfile.Mobile.ResolutionQualityRecommendation`。
- `UOrionSettingsLocal` 负责读取默认/最大移动帧率，约束不被设备支持的帧率，并在切换 FPS 时 remap 或 clamp resolution quality。
- 设置 overall quality 时要保留移动端 resolution quality 约束，不能只调用 `Scalability::SetQualityLevels` 后丢掉设备 profile 限制。
- iOS/Android 的具体设备 profile 可以覆盖 `r.MobileContentScaleFactor`、`sg.*`、safe zone、streaming pool 和移动抗锯齿；设置页只暴露玩家可调入口，不应复制 profile 表。

## 新增普通设置流程

1. 判断 owner：
   - 本机/硬件/平台/画质：`UOrionSettingsLocal`。
   - 账号偏好/输入偏好/语言字幕：`UOrionSettingsShared`。
   - 房间/世界参数：`UOrionGameWorldSettingRegistry` 和对应 SaveGame。
   - 单个玩法专属配置：优先 GameFeature 内的 DataAsset/SaveGame，再用宿主 registry 暴露入口。
2. 增加存储字段：
   - LocalSettings 使用 `UPROPERTY(Config)` 并提供 `UFUNCTION` getter/setter。
   - SharedSettings 使用 `UPROPERTY()`，setter 用 `ChangeValueAndDirty` 或等效逻辑广播 dirty。
   - World 设置要保证 SaveGame handler 会保存对应字段。
3. 决定应用时机：
   - 可以立即预览的值可在 setter 中应用运行时系统。
   - 需要点击应用的值让 ChangeTracker 先 dirty，最终由 registry `SaveChanges` 调 `ApplySettings`。
   - 需要重启或重新加载的值设置 warning/description，必要时只保存 desired 状态。
4. 在正确的 `GameSettingRegistry_*.cpp` 中创建 setting：
   - 设置 `DevName`、`DisplayName`、`DescriptionRichText`。
   - 设置 dynamic getter/setter。
   - 设置默认值、选项、范围、显示格式。
   - 添加 edit condition 和 dependency。
   - 加入合适 collection。
5. 如果新增顶层页：
   - 在 `UOrionGameSettingRegistry::OnInitialize` 中创建并 `RegisterSetting`。
   - 确认设置屏 tab 或导航 UI 能显示新 collection。
6. 如果使用新 setting class 或特殊交互：
   - 新增 C++ 类放宿主 Game 模块或 GameFeature，不放 GameCore。
   - 检查 GameUI 的 `UGameSettingVisualData` 资产是否需要映射 entry/extension。
7. 验证：
   - 设置页打开无空列表、无重复 DevName。
   - Apply 后值保存，Cancel 后恢复。
   - 重启后 Local/Shared/World 值仍正确。
   - 多 LocalPlayer、非 primary player、平台 trait 的显示/禁用符合预期。

## 新增 scalar 设置模板

```cpp
{
	UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
	Setting->SetDevName(TEXT("ExampleScalar"));
	Setting->SetDisplayName(LOCTEXT("ExampleScalar_Name", "Example Scalar"));
	Setting->SetDescriptionRichText(LOCTEXT("ExampleScalar_Description", "Example scalar tips."));

	Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetExampleScalar));
	Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetExampleScalar));
	Setting->SetDefaultValue(GetDefault<UOrionSettingsShared>()->GetExampleScalar());
	Setting->SetDisplayFormat(UGameSettingValueScalarDynamic::ZeroToOnePercent);
	Setting->SetSourceRangeAndStep(TRange<double>(0.0, 1.0), 0.01);
	Setting->SetMinimumLimit(0.01);

	Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

	Collection->AddSetting(Setting);
}
```

## 新增 enum/bool 设置模板

```cpp
{
	UGameSettingValueDiscreteDynamic_Enum* Setting = NewObject<UGameSettingValueDiscreteDynamic_Enum>();
	Setting->SetDevName(TEXT("ExampleMode"));
	Setting->SetDisplayName(LOCTEXT("ExampleMode_Name", "Example Mode"));
	Setting->SetDescriptionRichText(LOCTEXT("ExampleMode_Description", "Example mode tips."));

	Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetExampleMode));
	Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetExampleMode));
	Setting->SetDefaultValue(GetDefault<UOrionSettingsLocal>()->GetExampleMode());
	Setting->AddEnumOption(EExampleMode::Off, LOCTEXT("ExampleMode_Off", "Off"));
	Setting->AddEnumOption(EExampleMode::On, LOCTEXT("ExampleMode_On", "On"));

	Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

	Collection->AddSetting(Setting);
}
```

bool 设置使用 `UGameSettingValueDiscreteDynamic_Bool`，调用 `SetDefaultValue(bool)`，可选 `SetTrueText` / `SetFalseText`。

## 新增 action 设置模板

```cpp
{
	UGameSettingAction* Setting = NewObject<UGameSettingAction>();
	Setting->SetDevName(TEXT("ExampleAction"));
	Setting->SetDisplayName(LOCTEXT("ExampleAction_Name", "Example Action"));
	Setting->SetDescriptionRichText(LOCTEXT("ExampleAction_Description", "Example action tips."));
	Setting->SetActionText(LOCTEXT("ExampleAction_Button", "Run"));
	Setting->SetDoesActionDirtySettings(true);
	Setting->SetCustomAction([](ULocalPlayer* LocalPlayer)
	{
		// Run action through the owning subsystem or settings object.
	});

	Collection->AddSetting(Setting);
}
```

Action 如果会改变设置状态并希望 Apply/Cancel 链路感知，才设置 `SetDoesActionDirtySettings(true)`。不可撤销动作不要标记 dirty。

## 新增输入改键

不要直接改 `UUI_UserSettingsListEntry_Input` 来硬编码新按键。

正确流程：

1. 创建或更新 `UInputAction`，启用 Player Mappable 信息。
2. 在对应 `UInputMappingContext` 中配置键鼠和手柄默认键。
3. 确认该 IMC 会通过 GameFeature action 或输入系统注册到 EnhancedInput 用户设置。
4. 在项目的 `UInputSystemUserSettings` / mapping extension 中补充：
   - 键鼠 mapping 名。
   - 对应 gamepad mapping 名。
   - 是否允许在 key setting 中显示和编辑。
   - 显示分类与本地化文本。
5. 打开设置页，`GameSettingRegistry_MouseAndKeyboard.cpp` 会扫描 key profile 并自动创建 `UGameSettingInput`。
6. 验证 PressAnyKey、重复绑定弹窗、重置默认、保存重启、键鼠/手柄 glyph。

## 与领域系统的边界

音频设置：

- 音量字段在 `UOrionSettingsLocal`，应用到 ControlBusMix。
- 音频输入/输出设备由自定义 dynamic setting 枚举设备，并在 LocalSettings 中保存 device id。
- HDR/LDR、HRTF 需要联动音频 subsystem 和 CVar，先读取音频 Skill。

渲染设置：

- 分辨率、窗口模式、VSync、画质走 `UGameUserSettings` / `UOrionSettingsLocal`。
- DLSS、RTX、抗锯齿依赖项目的 render subsystem 和 DLSS subsystem。
- 显示器、HDR、动态分辨率和移动帧率还依赖平台 trait、RHI 能力和 `DefaultDeviceProfiles.ini`。
- `DefaultScalability.ini` 定义档位 CVar，设置页只改用户选择和应用。

本地化设置：

- 语言 setting 使用自定义 `UGameSettingValueDiscrete_Language`。
- 切换语言走 `UOrionSettingsShared` 的 pending culture、`ApplyCultureSettings` 和 `GGameUserSettingsIni` 的 `Internationalization/Culture`。
- UI 文案必须可被 GatherText 收集。

UI 设置：

- 设置页交互通过 CommonUI action binding、DirtyState、Back action、Panel navigation 实现。
- Widget Blueprint 只配置布局和默认变量，不能承担保存/应用逻辑。

世界/房间设置：

- 不和玩家偏好混用。
- 保存到当前 archive/SaveGame，确认创建 Session 或进入前端 phase 的流程。

## 常见坑

- `DevName` 重复：非 Shipping 会 `ensureAlwaysMsgf`，Shipping 中可能造成导航和 VisualData 映射混乱。
- `DisplayName` 用 `FString`：开发期可用，发布本地化不可收集。
- setter 没有 `UFUNCTION()`：Dynamic data source 解析失败，值无法写入。
- 默认值来自运行对象而不是 CDO：ResetToDefault 行为不稳定。
- 只添加字段不添加 registry setting：设置页不会出现。
- 只添加 registry setting 不更新 Save/Apply：Apply 后运行时不生效或重启丢失。
- 依赖动态状态的 action 没有广播 setting changed：详情面板不会刷新下载进度、状态文本或禁用原因。
- DLC 设置页无条件显示：没有 `PlatformDLC` 或 DLC 初始化未完成时会出现空页或不可用动作。
- 显示器/分辨率设置没有监听 viewport 和 display metrics：切换显示器、全屏或撤销后 UI 状态会和真实窗口不一致。
- HDR 校准入口没有按当前 HDR 输出状态禁用：玩家会看到可点但无效的校准动作。
- 移动帧率/画质没有读取 DeviceProfile CVar：设置页可能允许设备不支持的 FPS 或画质组合。
- 在 Widget Blueprint Graph 写业务保存：绕过 ChangeTracker，Cancel/Apply 不可靠。
- 平台 trait 用错 `Kill`/`Disable`：平台不支持的设置可能显示成空白或误导用户。
- 输入改键只改 IMC 不注册 EnhancedInput user settings：设置页扫描不到。
- SharedSettings 尚未加载：Registry 的 `IsFinishedInitializing` 应等待，UI 不要绕过该检查。
- `UGameUserSettings` 启动早于 `LocalPlayer`：编辑器或音频系统可能在第一个 `ULocalPlayer` 创建前调用 `GEngine->GetGameUserSettings()`，进而触发 `SetToDefaults()` / `LoadSettings()`。这些函数里访问 `OwningLocalPlayer->GetSubsystem<...>()` 前必须先检查 `OwningLocalPlayer.Get()`、目标 subsystem 和 user settings 是否有效；需要保留的子系统应用逻辑可在 `Initialize(ULocalPlayer*)` 后补做一次。验证时用 Editor 目标编译，再做一次无人值守编辑器启动，并检查最新日志没有 `Unhandled Exception`、`EXCEPTION_ACCESS_VIOLATION`、`Fatal error`。

## 验证清单

源码：

- `*.Build.cs` 依赖包含需要的插件模块。
- 新字段 owner 正确：Local/Shared/World。
- getter/setter 命名、`UFUNCTION`、类型和 dynamic path 匹配。
- `DevName` 唯一且稳定。
- 文案使用 `LOCTEXT` / `FText`。

UI：

- 设置页可打开。
- setting 显示在正确 collection/page。
- VisualData 能找到 entry class。
- disabled/hidden 状态和提示正确。
- Apply/Cancel/Back 行为符合预期。

持久化：

- Apply 后立即生效。
- Cancel 恢复 initial value。
- ResetToDefault 使用 CDO 默认。
- 重启游戏后保存值正确。
- 平台默认 `GameUserSettings.ini` 只作为默认输入，不覆盖用户 Saved 配置。

领域验证：

- 音频：ControlBusMix、设备切换、HDR/LDR、后台音频。
- 渲染：窗口模式、分辨率、Scalability、DLSS/RTX、帧率。
- 渲染：显示器切换、HDR、动态分辨率、移动帧率和 DeviceProfile 质量限制。
- 输入：EnhancedInput user settings、改键、重复绑定、glyph、手柄类型。
- 输入：Gamepad Input API 选项保存后，`FGenericPlatformMisc::SetPreferredInputDevices` 的目标列表与配置一致，重启后仍生效。
- DLC：`Orion.DLCMenu.Show` 开关、PlatformDLC 初始化、下载状态动态详情、挂载/卸载/启动/卸载确认流程。
- 本地化：culture 切换、locres、UI 文案收集。
- 世界设置：archive 保存和 Session 创建流程。
