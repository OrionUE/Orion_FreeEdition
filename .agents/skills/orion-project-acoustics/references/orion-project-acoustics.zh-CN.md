# Unreal ProjectAcoustics 工作手册

## 目录

- 配置和源码入口
- Listener 线程规则
- 虚拟扬声器崩溃修复
- 常见错误
- 验证清单

## 配置和源码入口

ProjectAcoustics 常见运行时入口：

| 入口 | 用途 |
| --- | --- |
| `Plugins/Audio/ProjectAcoustics/ProjectAcoustics.uplugin` | 插件模块、平台 allow list、运行时/编辑器模块边界。 |
| `Plugins/Audio/ProjectAcoustics/Source/ProjectAcousticsNative/ProjectAcousticsNative.Build.cs` | `ProjectAcousticsNative` 依赖、第三方 HRTF DSP 库和平台支持。 |
| `Plugins/Audio/ProjectAcoustics/Source/ProjectAcousticsNative/Private/AcousticsAudioPluginListener.*` | 空间混响虚拟扬声器 listener，负责创建并更新 `AAmbientSound`。 |
| `Plugins/Audio/ProjectAcoustics/Source/ProjectAcousticsNative/Private/AcousticsSourceDataOverride.*` | SourceDataOverride、遮挡、湿声、MetaSound 参数和空间混响输入。 |
| `Plugins/Audio/ProjectAcoustics/Source/ProjectAcousticsSpatializer/*` | ProjectAcoustics Spatialization/Reverb factory。 |
| `Config/DefaultEngine.ini` 平台音频 section | `SpatializationPlugin`、`SourceDataOverridePlugin`、`ReverbPlugin` 组合。 |

Windows 常见安全组合是 SteamAudio 负责 Spatialization/Reverb，ProjectAcoustics 负责 SourceDataOverride。不要在没有明确验证前把 Reverb 和 Spatialization 拆给互相不兼容的插件。

## Listener 线程规则

排查 listener 崩溃时，先对照当前 `<EngineRoot>` 的这些引擎入口：

- `Engine/Source/Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h`
- `Engine/Source/Runtime/Engine/Private/AudioDevice.cpp`

UE 5.8 中 `FAudioDevice::SetListener` 的关键行为：

- `IAudioPluginListener::OnTick` 在 GameThread 上调用，注释语义是给插件做 GameThread 行为。
- `IAudioPluginListener::OnListenerUpdated` 通过 `FAudioThread::RunCommandOnAudioThread` 调用，属于 audio thread 回调。
- `FAudioDevice::NotifyPluginListenersWorldChanged` 在 GameThread 上调用 `OnWorldChanged`。

因此 ProjectAcoustics listener 的规则是：

- `SpawnActor`、`Destroy`、`SetActorLocation`、`SetActorLabel`、访问 `UAudioComponent` 等 Actor/UObject 状态操作必须放在 `OnListenerInitialize`、`OnTick`、`OnWorldChanged` 等 GameThread 路径。
- `OnListenerUpdated` 中不要访问 `AActor` 或 `UActorComponent`，也不要解引用随 World 销毁的对象指针。
- 如果 audio thread 必须产生位置数据，只传递纯值数据，并在 GameThread 中消费。

## 虚拟扬声器崩溃修复

典型崩溃栈：

```text
AActor::SetActorLocation
FAcousticsAudioPluginListener::OnListenerUpdated
FAudioDevice::SetListener
FAudioThread::RunCommandOnAudioThread
```

常见现象是 `EXCEPTION_ACCESS_VIOLATION reading address 0xffffffffffffffff`，通常说明 listener 在 audio thread 中移动 Actor，或 `AAmbientSound*` 已经随 World/PIE/关卡切换销毁后仍被裸指针访问。

安全修复模式：

1. 在 `FAcousticsAudioPluginListener` 中 override `OnTick`，把虚拟扬声器位置更新移动到这里。
2. 让 `OnListenerUpdated` 保持 no-op，或只处理 audio thread 安全的纯数据。
3. 把 `TArray<AAmbientSound*>` 改为 `TArray<TWeakObjectPtr<AAmbientSound>>`。
4. 构造函数显式初始化 `m_SourceDataOverridePtr = nullptr`。
5. 初始化时检查 `AudioDevice`、`ListenerWorld`、`SourceDataOverridePluginInterface`、`SpawnActor` 和 `GetAudioComponent` 是否有效。
6. 更新前按 `FMath::Min3(m_NumVirtualSpeakers, m_VirtualSpeakers.Num(), m_VirtualSpeakerPositions.Num())` 计算安全范围。
7. 每个 speaker 更新前检查 `IsValid(Speaker)`、`!Speaker->IsActorBeingDestroyed()`、`Speaker->GetWorld() == InWorld`。
8. `OnWorldChanged` 和 `OnListenerShutdown` 统一调用 `ResetVirtualSpeakers()`，清空初始化标记、数量、弱引用数组和位置数组。

不要把这个问题先归因于 ProjectAcoustics 数据缺失、声学烘焙缺失或 SteamAudio 配置，除非调用栈不再命中 listener Actor 操作。

## 常见错误

### 在 OnListenerUpdated 里操作 Actor

现象：PIE 或运行时偶发崩溃，栈里出现 `FAudioThread::RunCommandOnAudioThread` 和 `AActor::SetActorLocation`。

原因：`OnListenerUpdated` 是 audio thread 回调，Actor 状态不是线程安全对象。

修复：把 Actor 移动放进 `OnTick`，并把 actor 引用改为弱引用。

验证：模块编译通过；崩溃栈中不再从 `OnListenerUpdated` 进入 `AActor::SetActorLocation`。

### World 切换后还访问虚拟扬声器

现象：停止 PIE、切图、重新进入游戏后偶发访问无效地址。

原因：虚拟扬声器 Actor 随 World 销毁，但 listener 仍保留裸指针或 speaker/position 数量不一致。

修复：弱引用持有 Actor；`OnWorldChanged`/`OnListenerShutdown` 统一 reset；更新前按数组最小长度遍历。

### SourceDataOverride 插件不存在

现象：初始化阶段空指针，或目标平台没有 ProjectAcoustics SourceDataOverride。

原因：平台 section 没配置 `SourceDataOverridePlugin=Project Acoustics`，插件未启用，或目标平台不在 allow list。

修复：先读 `.uproject`、`.uplugin` 和 `DefaultEngine.ini` 平台 section；只在配置明确启用且插件支持当前平台时初始化 listener。

## 验证清单

代码改动后至少执行：

1. 对 touched C++ 文件运行项目代码风格校验，确认 CRLF 和 Tab 缩进。
2. 构建最小模块：

```powershell
& "<EngineRoot>\Engine\Build\BatchFiles\Build.bat" <EditorTarget> Win64 Development -Project="<ProjectRoot>\<ProjectName>.uproject" -Module=ProjectAcousticsNative -WaitMutex -NoHotReloadFromIDE
```

3. 如果能稳定复现，运行 PIE 或目标构建，反复切换关卡、停止 PIE、重新 Play，观察日志中是否还有 `Unhandled Exception`、`EXCEPTION_ACCESS_VIOLATION`、`AcousticsAudioPluginListener`。
4. 如修改了平台音频配置，再验证日志中 ProjectAcoustics/SteamAudio 插件组合符合预期，且没有 `Project Acoustics requires both Reverb and Spatialization plugins`。
