---
name: orion-audio-framework
description: "Use when Codex works on Unreal Engine audio in this framework: Content/Audio assets, Content/Acoustics, SoundClass, SoundConcurrency, SoundSubmix, SoundControlBus, ControlBusMix, AudioModulation, AudioMixer, MetaSound, ProjectAcoustics, SteamAudio, OrionVoiceChat, voice chat, microphone input, audio output device switching, CoreAudioSettings, GameSettingRegistry_Audio, UAudioMixEffectsSubsystem, spatialization, reverb, occlusion, HDR/LDR audio, or DefaultEngine/DefaultGame audio configuration."
---

# Unreal Audio Framework

本 Skill 用于处理框架内音频代码、配置、资产、空间音频、语音聊天和音频设置页。音频涉及引擎模块、第三方插件、项目配置和用户设置链路，写代码前必须先确认当前启用的插件和配置。

## 工作流

1. 先读取 `.uproject`、目标模块 `*.Build.cs`、相关插件 `.uplugin`，确认 `AudioMixer`、`AudioModulation`、`Voice`、`OrionVoiceChat`、`ProjectAcoustics`、`SteamAudio` 等依赖是否已经在正确模块中。
2. 读取 `Config/DefaultEngine.ini` 的 `[/Script/Engine.AudioSettings]`、目标平台音频设置、SteamAudio 和 ProjectAcoustics 设置；读取 `Config/DefaultGame.ini` 的 `[/Script/GameCore.CoreAudioSettings]`。
3. 读取 `references/audio-framework.zh-CN.md`，按“配置层、资产层、运行时层、插件层、引擎扩展点”拆分问题。
4. 代码默认写在宿主 Game 模块或 `Plugins/GameFeatures/<FeatureName>`；`Source/GameCore` 是核心基座，除非用户明确允许，不要修改 GameCore。
5. 语音聊天优先使用 `OrionVoiceChat` 和宿主 Game 模块中的音频输入管理器；不要新建第二套麦克风枚举、输入设备切换或 Opus 传输链路。
6. 音量、HDR/LDR 动态范围、加载屏混音优先走 `UCoreAudioSettings`、`UOrionSettingsLocal`、`UAudioMixEffectsSubsystem`、`UAudioModulationStatics` 和 `UAudioMixerBlueprintLibrary`。
7. 空间音频先确认平台插件组合。当前框架模式下，Windows 常用 SteamAudio 做 Spatialization 和 Reverb，ProjectAcoustics 做 SourceDataOverride；不要无意中同时启用两套互相覆盖的 Reverb/Occlusion。
8. MetaSound 相关任务必须继续读取 `../unreal-metasound/SKILL.md`，检查 Builder API、ProjectAcoustics 参数接口和引擎 `IAudioParameterInterfaceRegistry`，不要只按普通 SoundWave/SoundCue 处理。

## 路由

- 创建、移动、命名、导入或整理音频资产时，先配合 `../orion-asset-management/SKILL.md`。
- 判断代码落点、模块职责、插件职责、Target 或构建变体时，配合 `../orion-framework-architecture/SKILL.md`。
- 处理 SteamAudio / Steam Audio 插件源码、HRTF、Spatialization、Reverb、Occlusion、ProbeVolume、动态几何、烘焙或 GPUAudioAcceleration 时，配合 `../orion-steam-audio/SKILL.md`。
- 处理 ProjectAcoustics 插件源码、SourceDataOverride、虚拟扬声器、`AcousticsAudioPluginListener`、`OnListenerUpdated` 或 audio thread/Actor 生命周期崩溃时，配合 `../orion-project-acoustics/SKILL.md`。
- 处理 MetaSound Source/Patch、MetaSound 图节点、Builder API、ProjectAcoustics MetaSound 参数接口或 MCP MetaSound 自动化时，配合 `../unreal-metasound/SKILL.md`。
- 触碰 `UCoreAudioSettings`、GameCore 音频配置或核心基座边界时，配合 `../orion-gamecore-framework/SKILL.md`。
- 查真实类、函数、变量、模块依赖、引擎 AudioMixer/AudioModulation/MetaSound 源码时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 音频设置页、`GameSettingRegistry_Audio`、音量/HDR/设备用户设置保存或 CommonUI 设置界面，先配合 `../orion-game-settings-framework/SKILL.md`；只改 Widget 外观时再配合 `../orion-umg/SKILL.md`。
- 加载屏显示/隐藏驱动 `LoadingScreenControlBusMix`、CommonLoadingScreen visibility delegate 或加载屏媒体音频时，配合 `../orion-loading-screen-framework/SKILL.md`。
- `OrionVoiceChat` 的语音包传输、频道同步、麦克风状态、Server/Client/NetMulticast RPC 或多人语音权限/范围判断，配合 `../orion-network-replication-framework/SKILL.md`。
- 语音聊天 Ability、输入触发或 GameFeature 授予语音能力时，按需要配合 `../unreal-gameplayabilities/SKILL.md`、`../unreal-enhancedinput/SKILL.md` 和 `../orion-gamefeatures/SKILL.md`。

## Reference

读取 `references/audio-framework.zh-CN.md` 获取音频目录规范、配置契约、核心类职责、插件分工、引擎扩展点、常用实现流程和验证清单。

## 硬规则

- 不把宿主项目名、绝对路径、用户名或机器路径写进 Skill、代码注释、配置示例或生成文档。
- 资产路径使用相对约定：音频在 `Content/Audio`，ProjectAcoustics 烘焙/空间声学内容在 `Content/Acoustics`，玩法特定音频跟随对应 GameFeature 插件内容目录。
- 不修改 GameCore 以满足单个游戏玩法需求；优先从宿主 Game 模块继承、组合设置、写 GameFeature 插件或新增项目侧配置。
- 改音频平台插件配置前，必须确认目标平台、插件支持列表和 cook/packaging 影响。
