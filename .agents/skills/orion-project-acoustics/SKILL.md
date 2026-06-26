---
name: orion-project-acoustics
description: "Use when Codex works on Unreal Engine ProjectAcoustics or Project Acoustics plugin code, configuration, SourceDataOverride, spatial reverb, virtual speakers, AcousticsAudioPluginListener, ProjectAcousticsNative, ProjectAcousticsSpatializer, MetaSound ProjectAcoustics parameters, or crashes involving OnListenerUpdated, AActor::SetActorLocation, audio thread listener updates, EXCEPTION_ACCESS_VIOLATION, SteamAudio plus ProjectAcoustics integration."
---

# Unreal Project Acoustics

本 Skill 用于处理 Unreal ProjectAcoustics 插件的运行时、配置和崩溃排查，尤其是 `ProjectAcousticsNative` listener、SourceDataOverride、空间混响虚拟扬声器和 UE audio thread 生命周期问题。

## 工作流

1. 先读取项目 `.uproject`、`Plugins/Audio/ProjectAcoustics/ProjectAcoustics.uplugin`、相关 `*.Build.cs` 和 `Config/DefaultEngine.ini` 平台音频插件配置，确认 `SourceDataOverridePlugin`、`SpatializationPlugin`、`ReverbPlugin` 的组合。
2. 崩溃栈命中 `FAcousticsAudioPluginListener`、`OnListenerUpdated`、`AActor::SetActorLocation` 或 `FAudioThread::RunCommandOnAudioThread` 时，先读取 `references/orion-project-acoustics.zh-CN.md` 的“Listener 线程规则”和“虚拟扬声器崩溃修复”。
3. 写代码前用 `../unreal-source-code-navigator/SKILL.md` 对照当前 `<EngineRoot>` 的 `IAudioPluginListener`、`FAudioDevice::SetListener` 和 `FAudioDevice::NotifyPluginListenersWorldChanged`，不要凭旧 UE 版本记忆判断线程。
4. ProjectAcoustics listener 中所有 `AActor`、`UActorComponent`、World Outliner label、Spawn/Destroy/SetActorLocation 等 UObject/Actor 状态操作必须在 GameThread 入口执行；UE 5.8 中优先使用 `IAudioPluginListener::OnTick`。
5. `OnListenerUpdated` 视为 audio thread 回调，只放音频线程安全的数据处理；不要在这里访问或移动 Actor，也不要解引用可能随 World 销毁的裸 Actor 指针。
6. 持有虚拟扬声器 Actor 时优先使用 `TWeakObjectPtr<AAmbientSound>`，更新前检查 `IsValid`、`!IsActorBeingDestroyed()` 和 `GetWorld() == InWorld`。
7. 修改后运行代码风格校验、最小模块构建和必要的 PIE/日志验证；不要通过禁用 ProjectAcoustics 或修改安装版引擎源码来掩盖插件生命周期问题。

## 路由

- 先配合 `../orion-audio-framework/SKILL.md` 确认音频系统整体配置、SteamAudio/ProjectAcoustics 插件分工、MetaSound 参数和资产目录。
- 需要查 UE 当前版本接口、线程、模块、Build.cs 或引擎调用点时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 需要判断插件模块职责、Runtime/Editor 模块边界或目标平台 allow list 时，配合 `../orion-framework-architecture/SKILL.md`。
- 创建、移动或命名 ProjectAcoustics 烘焙/空间声学资产时，配合 `../orion-asset-management/SKILL.md`。
- 把新的 ProjectAcoustics 排查经验继续沉淀为 Skill 时，配合 `../orion-framework-skill-authoring/SKILL.md` 和系统 `skill-creator`。

## Reference

读取 `references/orion-project-acoustics.zh-CN.md` 获取插件配置契约、listener 线程规则、虚拟扬声器崩溃修复、常见错误和验证清单。

## 验证

常用最小验证命令：

```powershell
& "<EngineRoot>\Engine\Build\BatchFiles\Build.bat" <EditorTarget> Win64 Development -Project="<ProjectRoot>\<ProjectName>.uproject" -Module=ProjectAcousticsNative -WaitMutex -NoHotReloadFromIDE
```

改动 ProjectAcoustics C++ 后，还必须对 touched code files 运行项目代码风格校验。
