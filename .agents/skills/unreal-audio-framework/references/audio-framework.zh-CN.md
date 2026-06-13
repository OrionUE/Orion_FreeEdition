# Unreal 音频框架使用手册

## 目录

- 使用边界
- 音频资产目录
- 配置契约
- 运行时链路
- 插件分工
- 引擎扩展点
- 常用实现流程
- 验证清单
- 常见错误

## 使用边界

本 Skill 处理框架中的音频系统：普通音效与音乐、SoundClass、Concurrency、Submix、AudioModulation、AudioMixer、MetaSound、空间音频、ProjectAcoustics、SteamAudio、语音聊天、音频输入输出设备、设置页音频选项和平台音频配置。

不要把宿主项目名、绝对路径或机器路径写进 Skill、示例或生成文档。需要说明路径时使用 `Content/Audio`、`Content/Acoustics`、`Source/<GameModule>/Audio`、`Plugins/Audio/<PluginName>`、`Plugins/GameFeatures/<FeatureName>/Content` 这类相对路径。

`Source/GameCore` 是核心基座，默认只读。音频业务逻辑、玩法语音规则、关卡/玩法特定音频和 UI 设置胶水优先写在宿主 Game 模块或 GameFeature 插件。

## 音频资产目录

全局音频资产默认放在 `Content/Audio`，其中常用子目录职责如下：

| 目录 | 职责 |
| --- | --- |
| `Content/Audio/Classes` | SoundClass 资产，例如 Overall、Music、SFX、UI、VoiceChat、RenderedCinematics。 |
| `Content/Audio/Concurrency` | SoundConcurrency 资产，例如默认并发和 whiz-by 等特殊并发规则。 |
| `Content/Audio/Modulation/ControlBuses` | 全局音量控制总线，例如 Main、Music、SFX、Dialogue、UI、VoiceChat、Cinematics。 |
| `Content/Audio/Modulation/ControlBusMixes` | 基础混音、加载屏混音、用户设置混音。 |
| `Content/Audio/Modulation/ParameterPatches` | SoundClass、MetaSound 或音频资产使用的参数 patch。 |
| `Content/Audio/Submixes` | Main、Music、SFX、UI、Voice、Reverb、EarlyReflections、SendEffect 等 Submix。 |
| `Content/Audio/Effects` | SubmixEffect、SourceEffect、动态范围处理链等效果资产。 |
| `Content/Audio/MetaSounds` | MetaSound Source、Patch、图形化生成音频。 |
| `Content/Audio/SteamAudio` | SteamAudio 材质、探针、烘焙或插件专用资产。 |
| `Content/Acoustics` | ProjectAcoustics 空间声学、烘焙和运行时声学内容。 |

玩法特定音频跟随对应 GameFeature 插件：`Plugins/GameFeatures/<FeatureName>/Content/Game` 或更具体子目录。资产命名、前缀和覆盖规则以 `unreal-asset-management` 为准。

## 配置契约

### Engine AudioSettings

`Config/DefaultEngine.ini` 的 `[/Script/Engine.AudioSettings]` 负责引擎默认音频资源：

- `DefaultSoundClassName` 指向全局 Overall SoundClass。
- `DefaultMediaSoundClassName` 指向过场或媒体默认 SoundClass。
- `DefaultSoundConcurrencyName` 指向默认并发资产。
- `VoiPSoundClass` 指向语音聊天 SoundClass。
- `MasterSubmix` 指向主 Submix。
- `ReverbSubmix`、`EQSubmix` 等按引擎默认或项目需要配置。

### 平台音频插件

目标平台音频设置在 `DefaultEngine.ini` 对应平台 section 中。当前框架在 Windows 常用以下组合：

```ini
SpatializationPlugin=Steam Audio Spatialization
SourceDataOverridePlugin=Project Acoustics
ReverbPlugin=Project Acoustics
```

含义：

- SteamAudio 负责声源空间化和 HRTF。
- ProjectAcoustics 通过 SourceDataOverride 修改源数据、遮挡、湿声参数和 MetaSound 参数。
- ProjectAcoustics Reverb 负责当前平台混响路径。

其他平台可能使用 `Steam Audio Reverb` 和 `Steam Audio Occlusion`。改配置前必须确认插件 factory 的 `SupportsPlatform`、`.uplugin` 的 `PlatformAllowList`、第三方库是否随平台打包。

### CoreAudioSettings

`Config/DefaultGame.ini` 的 `[/Script/GameCore.CoreAudioSettings]` 是运行时音量和动态范围的项目配置入口：

- `DefaultControlBusMix`：世界开始后激活的基础 ControlBusMix。
- `LoadingScreenControlBusMix`：加载屏显示时临时激活，隐藏后反激活。
- `UserSettingsControlBusMix`：玩家设置页驱动的用户混音。
- `OverallVolumeControlBus`、`MusicVolumeControlBus`、`SoundFXVolumeControlBus`、`DialogueVolumeControlBus`、`VoiceChatVolumeControlBus`：用户设置对应的音量总线。
- `HDRAudioSubmixEffectChain`、`LDRAudioSubmixEffectChain`：HDR/LDR 音频模式切换时套用到 Submix 的效果链。

新增音量通道时要同时改配置、`UCoreAudioSettings` 字段、用户设置存取、设置注册表和运行时混音更新。不要只新增一个 ControlBus 资产。

## 运行时链路

### UCoreAudioSettings

`UCoreAudioSettings` 是 `UDeveloperSettings`，配置来自 `DefaultGame.ini`。它只保存软引用和 Submix 效果链映射，不应该承载玩法逻辑。

核心结构：

- `FSubmixEffectChainMap`：一个 Submix 软引用加一组 `USoundEffectSubmixPreset` 软引用。
- ControlBusMix 软路径：默认、加载屏、用户设置。
- 音量 ControlBus 软路径：总体、音乐、SFX、对白、语音聊天。
- HDR/LDR Submix 效果链数组。

### UAudioMixEffectsSubsystem

这是 `UWorldSubsystem`，只在 Game 和 PIE world 创建。职责：

1. `PostInitialize` 从 `UCoreAudioSettings` 加载 ControlBusMix、ControlBus 和 HDR/LDR Submix 效果链。
2. 注册加载屏可见性委托；加载屏显示时激活 LoadingScreen mix，隐藏时反激活。
3. `OnWorldBeginPlay` 激活默认 mix 和用户 mix，并用 `UOrionSettingsLocal` 的音量值更新用户 mix。
4. `ApplyDynamicRangeEffectsChains` 按 HDR/LDR 开关调用 `UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride` 或 `ClearSubmixEffectChainOverride`。

如果要新增动态范围模式或全局效果链，先扩展配置和此 Subsystem 的加载/应用流程。只改某个 Submix 资产不会自动进入运行时切换。

### 用户设置与设置页

音频用户设置主要由本地设置对象保存：

- 总体、音乐、SFX、对白、语音聊天音量。
- 音频输出设备 ID。
- 音频输入设备 ID。
- 输入采样率和通道数，默认 48000 Hz、单声道。
- 耳机模式和 HDR 音频模式。

音量设置调用 `LoadAndSetVolume`，确保用户 ControlBusMix 已加载，然后用 `UAudioModulationStatics::UpdateMix` 推送新的 `FSoundControlBusMixStage`。

`GameSettingRegistry_Audio.cpp` 注册设置页：

- Volume 分组：Overall、Music、Sound Effects、Dialogue、Voice Chat，使用 0 到 1 的百分比滑条。
- Sound 分组：Audio Output Device、Audio Input Device、Background Audio、Headphone Mode、HDR Audio Mode。
- 输出设备依赖平台 trait `Platform.Trait.SupportsChangingAudioOutputDevice`。
- 输入设备依赖平台 trait `Platform.Trait.SupportsChangingAudioInputDevice`。
- 后台音频依赖平台 trait `Platform.Trait.SupportsBackgroundAudio`。

耳机模式通过控制台变量 `au.DisableBinauralSpatialization` 实现，语义是反向的：开启耳机模式时要禁用该 cvar。若平台 trait 表示系统控制双耳设置，则不允许项目设置页修改。

## 插件分工

### OrionVoiceChat

`OrionVoiceChat` 是语音聊天运行时插件，依赖 `AudioCapture`、`AudioMixer`、`Voice`、媒体相关模块和 Opus。它提供：

- `AOrionVoiceChatActor`：复制的语音聊天 Actor，持有麦克风组件、玩家标识、频道、音量、衰减和 source effect 设置。
- `UOrionMicrophoneSpeakComponent`：采集、Opus 编码/解码、网络发送、程序化 SoundWave 播放、静音和本地音量倍率。
- `UOrionVoiceChat`：Blueprint 友好的函数入口，包含设备枚举、输入设备设置、音质初始化、开始/停止说话、频道、静音、全局音量和权限请求。

宿主 Game 模块中的音频输入管理器负责枚举输入设备、响应默认采集设备变化、选择保存的设备 ID，并在设备切换后重新初始化语音质量。不要在新功能里绕过它直接调用底层 VoiceCapture，除非是在修复该管理器本身。

语音聊天 Ability 只负责把本地设置里的采样率和通道数同步给语音聊天能力；不要把设备枚举或 UI 设置逻辑塞进 Ability。

### ProjectAcoustics

ProjectAcoustics 插件组包括运行时、Native、Spatializer、Bake UI 和 Editor 模块。常见职责：

- `ProjectAcoustics`：查询声学数据、动态开口、runtime volume、设计参数和调试渲染。
- `ProjectAcousticsNative`：注册 `IAudioSourceDataOverrideFactory`，显示名为 `Project Acoustics`，支持 Windows 和 Android；提供 SourceDataOverride、声源设置和 ProjectAcoustics MetaSound 参数接口。
- `ProjectAcousticsSpatializer`：可注册 Spatialization 和 Reverb factory，但当前 Windows 配置通常只让 ProjectAcoustics 承担 SourceDataOverride/Reverb。
- Editor/Bake 模块：烘焙、预处理和编辑器 UI，不要依赖进普通 Runtime 业务模块。

SourceDataOverride 会在每个声源处理时读取声源设置、Actor 组件覆盖和声学查询结果，处理遮挡、混响、Submix send，并给 MetaSound 发送参数。

ProjectAcoustics 的 MetaSound 参数接口名为 `ProjectAcoustics`，输入包含：

- `Dry.Loudness`
- `Dry.PathLength`
- `Dry.ArrivalAzimuth`
- `Dry.ArrivalElevation`
- `Wet.Loudness`
- `Wet.AngularSpread`
- `Wet.DecayTime`
- `Wet.ArrivalAzimuth`
- `Wet.ArrivalElevation`

如果 MetaSound 需要响应空间声学，必须实现这个参数接口或接收同名参数；只创建普通音频参数不会自动获得 ProjectAcoustics 数据。

### SteamAudio

SteamAudio 插件注册 Spatialization、Occlusion、Reverb factory，并维护 `FSteamAudioManager`：

- `FSteamAudioModule` 加载平台第三方库，注册 modular features，并在 PIE/游戏开始和结束时初始化或关闭 SteamAudio。
- Spatialization plugin 使用 HRTF、panning、pathing、ambisonics decode 等处理声源空间化。
- Occlusion/Reverb 可用，但是否启用由平台音频插件配置决定。
- 组件层提供 Listener、Source、Geometry、DynamicObject、ProbeVolume、Material、BakedSource、BakedListener 等。

如果只是在当前框架默认配置下修复空间定位，优先查 SteamAudio Spatialization；如果是在 Windows 上修复混响或 ProjectAcoustics 参数，优先查 ProjectAcoustics SourceDataOverride/Reverb。

## 引擎扩展点

### AudioExtensions

引擎通过 `IAudioExtensionPlugin.h` 定义音频插件接口：

- `IAudioSpatializationFactory` / `IAudioSpatialization`
- `IAudioSourceDataOverrideFactory` / `IAudioSourceDataOverride`
- `IAudioReverbFactory` / reverb submix plugin
- `IAudioOcclusionFactory` / occlusion plugin
- `USpatializationPluginSourceSettingsBase`
- `USourceDataOverridePluginSourceSettingsBase`

平台配置中的插件名通过 `AudioPluginUtilities` 查找已注册的 modular feature。插件显示名必须和配置值一致，例如 `Steam Audio Spatialization`、`Project Acoustics`、`Steam Audio Reverb`。

### AudioMixer

项目用到的常见入口：

- `UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices`
- `UAudioMixerBlueprintLibrary::SwapAudioOutputDevice`
- `UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride`
- `UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride`

输出设备切换是异步结果回调；失败时要回滚到上一个可用选项。Submix 效果链 override 是运行时覆盖，不等同于修改资产默认效果链。

### AudioModulation

项目用到的常见入口：

- `UAudioModulationStatics::ActivateBusMix`
- `UAudioModulationStatics::DeactivateBusMix`
- `UAudioModulationStatics::CreateBusMixStage`
- `UAudioModulationStatics::UpdateMix`

用户音量设置应该更新用户 ControlBusMix，不要直接改 SoundClass 音量或遍历音频组件。

### MetaSound

MetaSound 通过 `IAudioParameterInterfaceRegistry` 注册参数接口，`USoundBase::ImplementsParameterInterface` 可判断声音是否实现接口。ProjectAcoustics SourceDataOverride 会检测当前声音是否实现 `ProjectAcoustics` 接口，然后用 `FAudioParameter` 更新干声/湿声参数。

新增 MetaSound 音频资产时，如果需要空间声学数据，先确认是否要实现 ProjectAcoustics 参数接口；如果只是普通 procedural 音频，则按 MetaSound 本身的输入和输出处理。

## 常用实现流程

### 新增一个用户音量通道

1. 在 `Content/Audio/Modulation/ControlBuses` 创建 ControlBus，命名遵守资产管理 Skill。
2. 在 `Content/Audio/Modulation/ControlBusMixes` 的基础 mix、加载屏 mix、用户 mix 中加入该 bus 的默认 stage。
3. 扩展 `UCoreAudioSettings` 的 config 字段，并在 `DefaultGame.ini` 写入软路径。
4. 扩展本地设置对象的保存字段、getter、setter 和事件广播。
5. 在 `UAudioMixEffectsSubsystem` 中加载该 bus，并在 begin play 时把当前用户值写入 `UserSettingsControlBusMix`。
6. 在 `GameSettingRegistry_Audio.cpp` 添加设置项，设置条件使用 PrimaryPlayer 和必要平台 trait。
7. 验证滑条、保存、重启后恢复、加载屏 mix 和默认 mix 不互相覆盖。

### 新增音频输出设备设置行为

1. 优先使用现有输出设备设置类，不重新写枚举逻辑。
2. 输出设备列表来自 `UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices`。
3. 列表第 0 项代表系统默认输出；保存值为空字符串时表示默认。
4. 调用 `SwapAudioOutputDevice` 后必须检查异步结果，失败时回滚 UI 选择。

### 新增音频输入设备或语音聊天行为

1. 优先使用宿主 Game 模块的音频输入管理器和 `OrionVoiceChat` 函数库。
2. 设备列表来自 `UOrionVoiceChat::GetAudioDevicesList`。
3. 切换设备时先卸载/加载 Voice module，再设置硬件输入并按本地设置采样率/通道数重新初始化语音质量。
4. 需要播放本地语音或远端语音时，通过 `AOrionVoiceChatActor` 和 `UOrionMicrophoneSpeakComponent` 的复制、频道、静音和音量机制扩展。
5. 不要在 GameplayAbility、Widget 或 GameFeature Action 中直接持有低层 `IVoiceCapture`。

### 添加空间音频或混响资产

1. 先判断目标是 SteamAudio、ProjectAcoustics，还是普通 UE attenuation/submix。
2. ProjectAcoustics 烘焙和空间声学内容放 `Content/Acoustics`。
3. 普通音频资产放 `Content/Audio`，玩法专属资产放对应 GameFeature 插件 Content。
4. Windows 默认组合下，空间定位优先看 SteamAudio Spatialization，混响和声学参数优先看 ProjectAcoustics SourceDataOverride/Reverb。
5. 改平台插件前，确认 `.uplugin` 支持平台、第三方库打包路径和目标平台 section。

### 创建 ProjectAcoustics MetaSound

1. 创建 MetaSound 资产前先走资产管理 Skill。
2. 在 MetaSound 中接入 `ProjectAcoustics` 参数接口或同名输入参数。
3. 使用干声参数处理遮挡、路径长度和到达方向；使用湿声参数处理混响响度、角扩散、衰减时间和到达方向。
4. 如果听不到参数变化，检查当前声音是否实现参数接口，以及 SourceDataOverride 是否在该平台启用。

## 验证清单

代码或配置改动后按影响面选择验证：

1. C++ 改动：构建目标模块，至少覆盖宿主 Game 模块；改插件时单独构建对应插件模块。
2. 配置改动：确认 `DefaultEngine.ini` 和 `DefaultGame.ini` 中平台 section、插件名、软路径都正确。
3. 资产改动：保存 `.uasset`，用资产管理 Skill 校验路径和命名。
4. 音量设置：PIE 中调整所有音量滑条，确认 `UserSettingsControlBusMix` 更新且重启后恢复。
5. 加载屏混音：加载屏显示时激活 LoadingScreen mix，隐藏后反激活。
6. HDR/LDR：切换 HDR Audio，确认对应 Submix effect chain 被 override/clear。
7. 输出设备：枚举、切换、失败回滚和系统默认设备占位项都正常。
8. 输入设备：枚举、保存设备 ID、设备变化回调、语音质量重新初始化都正常。
9. 语音聊天：本地开始/停止说话、静音、频道、距离/全局模式、音量倍率和远端播放正常。
10. 空间音频：目标平台 log 中插件加载正确，声源 spatialization、occlusion/reverb 或 ProjectAcoustics 参数变化符合预期。
11. 打包：确认第三方 DLL/so/dylib、Android APL、平台 allow list 和 cook 资产可用。

## 常见错误

### 把音量写到 SoundClass 而不是 ControlBus

现象：设置页滑条只影响部分声音，或重启/加载屏后被覆盖。

修复：使用 `UCoreAudioSettings` 配置的 ControlBus 和 `UAudioModulationStatics::UpdateMix` 更新用户 mix。

### 同时启用两套空间音频混响

现象：混响过重、遮挡重复、平台行为不一致。

修复：先读目标平台 section。Windows 默认让 SteamAudio 负责 Spatialization，让 ProjectAcoustics 负责 SourceDataOverride/Reverb；只有明确需要时才调整组合。

### 在 GameCore 写项目特定音频逻辑

现象：核心基座开始依赖具体玩法、关卡、UI 或平台特例。

修复：把逻辑放到宿主 Game 模块、GameFeature 插件、配置或资产中。只有框架级通用能力才考虑 GameCore，并需要用户明确允许。

### 语音聊天绕过输入管理器

现象：设备切换、保存 ID、默认设备变化或采样率不同步。

修复：使用现有音频输入管理器和 `OrionVoiceChat` API；Widget、Ability、GameFeature 只发起高层操作。

### MetaSound 没有收到 ProjectAcoustics 参数

现象：普通声音可听到空间声学变化，但 MetaSound 内部参数不变化。

修复：确认 MetaSound 实现 `ProjectAcoustics` 参数接口或使用同名参数，确认 SourceDataOverride 在平台配置中启用。
