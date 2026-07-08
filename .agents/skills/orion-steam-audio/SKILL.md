---
name: orion-steam-audio
description: "Use when Codex works on the Steam Audio Unreal plugin in this framework: SteamAudio, Steam Audio, phonon, HRTF, binaural spatialization, Steam Audio Spatialization, Steam Audio Reverb, Steam Audio Occlusion, USteamAudioSettings, SteamAudioSourceComponent, SteamAudioListenerComponent, SteamAudioGeometryComponent, SteamAudioDynamicObjectComponent, SteamAudioProbeVolume, baked reflections, baked reverb, pathing, Radeon Rays, TrueAudio Next, OpenCL, SteamAudio.GPUAudioAcceleration, or SteamAudio plus ProjectAcoustics platform audio configuration."
---

# Orion Steam Audio

本 Skill 用于处理 Steam Audio 插件源码学习、配置排查、空间化/混响/遮挡使用、声学几何导出、探针与烘焙、GPU 加速和与 ProjectAcoustics 共存的问题。

## 工作流

1. 先读取 `Plugins/Audio/SteamAudio/SteamAudio.uplugin`、`Source/SteamAudio/*.Build.cs`、`Source/SteamAudioSDK/phonon_version.h`，确认插件版本、模块、平台 allow list 和第三方库。
2. 读取 `Config/DefaultEngine.ini` 的目标平台音频插件 section、`[/Script/SteamAudio.SteamAudioSettings]`，以及 `Config/DefaultGame.ini` 的 packaging always-cook 配置。
3. 运行只读检查脚本：`powershell -NoProfile -ExecutionPolicy Bypass -File .agents/skills/orion-steam-audio/scripts/Test-SteamAudioConfig.ps1 -ProjectRoot <ProjectRoot>`。
4. 先判断目标属于 HRTF spatialization、occlusion/direct effect、source-centric reflections、listener-centric reverb、baked reflections/reverb/pathing、static geometry、dynamic object 还是 GPU acceleration。
5. 读取 `references/steam-audio-code-study.zh-CN.md` 中对应章节，不凭记忆修改 SteamAudio 或平台音频配置。
6. Windows 默认共存模式下，把 SteamAudio 视为 Spatialization/Reverb 入口，把 ProjectAcoustics 视为 SourceDataOverride 入口；不要把两套 Reverb/Occlusion 同时打开后再排查“音效不对”。
7. 修改 SteamAudio C++、配置或脚本时，先配合代码风格 Skill；改完运行 touched code files 的代码风格校验，再按影响面做 PIE、日志、打包或烘焙验证。

## 路由

- 先配合 `../orion-audio-framework/SKILL.md` 确认整个音频框架、ControlBus、Submix、MetaSound、ProjectAcoustics、OrionVoiceChat 和平台音频配置。
- 需要查类声明、生命周期、模块依赖、AudioExtensions、AudioMixer 或插件 factory 时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 触碰 SourceDataOverride、ProjectAcoustics Reverb、MetaSound 声学参数或两插件共存时，配合 `../orion-project-acoustics/SKILL.md`。
- 创建、移动或命名 SteamAudio Material、Spatialization/Occlusion/Reverb Settings、SerializedObject、ProbeVolume 相关资产时，配合 `../orion-asset-management/SKILL.md`。
- 修改音频设置页、HRTF/GPU 加速用户开关、本地保存或 `GameSettingRegistry_Audio` 时，配合 `../orion-game-settings-framework/SKILL.md`。
- 修改平台打包、第三方 DLL/so/dylib、Android APL、always cook 或 staged 内容时，配合 `../orion-packaging/SKILL.md`。
- 把新的 SteamAudio 经验继续沉淀为 Skill 时，配合 `../orion-framework-skill-authoring/SKILL.md` 和系统 `skill-creator`。

## References

- 需要源码架构、配置契约、组件用法、烘焙流程和故障排查时，读取 `references/steam-audio-code-study.zh-CN.md`。

## Scripts

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents/skills/orion-steam-audio/scripts/Test-SteamAudioConfig.ps1 -ProjectRoot <ProjectRoot>
```

脚本只读，输出插件版本、SDK 版本、平台插件组合、SteamAudio settings、always-cook 检查和问题列表。
