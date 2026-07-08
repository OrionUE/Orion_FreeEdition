# ProjectAcoustics 插件源码深度研究

## 目录

- 研究范围和当前结论
- 当前工程的音频插件组合
- 插件模块分层
- 运行时总信号流
- `ProjectAcoustics` 核心 Runtime 模块
- `ProjectAcousticsNative` SourceDataOverride 模块
- Spatial Reverb 输入捕获和虚拟扬声器
- `ProjectAcousticsSpatializer` 模块
- `ProjectAcousticsBakeUI` 烘焙工具链
- 资产和关卡制作流程
- World Partition、子关卡和 Level Instance 烘焙
- 源设置、MetaSound、Runtime Volume 和 Dynamic Opening
- 参数、CVar、日志和排查清单
- 修改验证清单

## 研究范围和当前结论

本文件用于开始制作空间音频前的 ProjectAcoustics 源码级手册。它不是插件官方入门文档，而是面向当前工程集成方式的代码阅读结论和制作检查表。

本次重点阅读的入口：

| 路径 | 结论 |
| --- | --- |
| `Plugins/Audio/ProjectAcoustics/ProjectAcoustics.uplugin` | 插件版本、模块边界、平台 allow list 和依赖。 |
| `Plugins/Audio/ProjectAcoustics/Source/ProjectAcoustics/*` | Triton Runtime、ACE 加载、声学查询、tile streaming、调试绘制。 |
| `Plugins/Audio/ProjectAcoustics/Source/ProjectAcousticsNative/*` | UE SourceDataOverride 集成、遮挡、湿声、MetaSound 参数、Spatial Reverb 输入捕获。 |
| `Plugins/Audio/ProjectAcoustics/Source/ProjectAcousticsSpatializer/*` | ProjectAcoustics 自带 spatializer/reverb 插件，当前工程默认没有用它承担 Windows spatialization/reverb。 |
| `Plugins/Audio/ProjectAcoustics/Source/ProjectAcousticsBakeUI/*` | Editor Mode、tag、probe、material、Azure/local bake、ACE 资产导入。 |
| `Plugins/Audio/ProjectAcoustics/Source/ProjectAcousticsNativeEditor/*` | SourceDataOverride settings editor、reverb bus preset、空间混响质量配置。 |
| `Config/DefaultEngine.ini` | 平台音频插件组合和 `ProjectAcousticsNative.AcousticsSourceDataOverrideSettings`。 |
| `Config/DefaultGame.ini` | `Content/Acoustics` 的 UFS staging 配置。 |

核心结论：

- 当前工程的安全分工是：ProjectAcoustics 负责 `SourceDataOverride`，SteamAudio 负责 Windows spatialization/reverb。
- ProjectAcoustics Spatial Reverb 在当前工程里不是通过 ProjectAcoustics spatializer 插件输出，而是通过 SourceDataOverride 插件内部的 per-source submix capture、HRTF spatial reverb 引擎和虚拟扬声器输出。
- `AAcousticsSpace` 是运行时 ACE 加载、坐标系、tile streaming、global design 和 debug tick 的关卡入口。没有它，SourceDataOverride 可以被创建，但没有可查询的声学空间。
- ProjectAcoustics 查询是异步缓存模型：每个 source 第一次查询同步完成，之后每帧消费上一次完成结果，并把下一次查询排入插件自己的单线程队列。
- SourceDataOverride 查询失败时会复用该 source 上一次成功参数；完全没有成功参数时直接返回，避免把未定义声学参数写进 WaveInstance。
- 运行时 Source 设置优先级是：`UAcousticsAudioComponent` 高于 attenuation asset 的 `UAcousticsSourceDataOverrideSourceSettings`。如果 Actor 上用了 `UAcousticsAudioComponent`，它会覆盖 attenuation 里的 ProjectAcoustics source settings。
- `OnListenerUpdated` 是 audio thread 回调；虚拟扬声器 Actor 的创建、移动和销毁必须在 GameThread 路径。当前代码已经把移动放到 `OnTick`，这是必须保留的安全边界。
- ACE 文件运行时真实加载路径来自 `UAcousticsData::AceFilePath`，格式是 `Content/Acoustics/<AssetName>.ace`，并依赖 `DefaultGame.ini` 把 `Acoustics` 目录作为 UFS staged content。

## 当前工程的音频插件组合

当前工程启用了 `ProjectAcoustics` 和 `SteamAudio`。`ProjectAcoustics.uplugin` 中 ProjectAcoustics 支持 `Win64` 和 `Android`，并声明这些模块：

| 模块 | Type | LoadingPhase | 作用 |
| --- | --- | --- | --- |
| `ProjectAcoustics` | Runtime | PreDefault | Triton Runtime、ACE 加载、声学查询、空间坐标和 debug。 |
| `ProjectAcousticsNative` | Runtime | PreDefault | UE Audio SourceDataOverride 集成、Spatial Reverb、MetaSound 参数。 |
| `ProjectAcousticsSpatializer` | Runtime | PreDefault | ProjectAcoustics 自带 Spatialization/Reverb factory。 |
| `ProjectAcousticsBakeUI` | UncookedOnly | Default | Editor Mode、烘焙 UI、Azure/local bake、packaging setting 辅助。 |
| `ProjectAcousticsNativeEditor` | UncookedOnly | PreDefault | SourceDataOverride settings editor。 |
| `ProjectAcousticsSpatializerEditor` | UncookedOnly | PreDefault | Spatializer settings editor。 |

`Config/DefaultEngine.ini` 的 Windows section 当前组合：

```ini
[WindowsTargetPlatform.WindowsTargetSettings]
SpatializationPlugin=Steam Audio Spatialization
SourceDataOverridePlugin=Project Acoustics
ReverbPlugin=Steam Audio Reverb
OcclusionPlugin=
```

这个组合的含义：

- 3D 声像定位由 SteamAudio spatializer 负责。
- ProjectAcoustics 插件只通过 SourceDataOverride 修改 source 的 occlusion、portaling location、reverb send、MetaSound 参数等。
- 混响主插件仍是 SteamAudio Reverb；ProjectAcoustics Spatial Reverb 是 SourceDataOverride 内部的额外空间混响链路，不等同于把平台 `ReverbPlugin` 切成 `Project Acoustics`。
- 不要只把 Reverb 切到 `Project Acoustics` 而 Spatialization 仍用别的插件。`ProjectAcousticsSpatializer` 自带 listener 会检查 Reverb 和 Spatialization 必须同时都是 `Project Acoustics`，否则会打印 `Project Acoustics requires both Reverb and Spatialization plugins` 并拒绝连接。

`ProjectAcousticsNative.AcousticsSourceDataOverrideSettings` 当前关键含义：

- `ReverbType=SpatialReverb`：启用 SourceDataOverride 内部 spatial reverb。
- `SpatialReverbQuality=Best`：HRTF spatial reverb 用高质量模式，虚拟扬声器数量更多，CPU 更高。
- `ReverbBusesPreset=Default` 和六个默认 submix 路径仍保留，用于 Stereo Convolution 模式或配置兼容。
- `Short/Medium/LongReverbSubmixLength` 仍会被校验，必须满足 `Short < Medium < Long`。

`Config/DefaultGame.ini` 需要保留：

```ini
+DirectoriesToAlwaysStageAsUFS=(Path="Acoustics")
```

原因是 `UAcousticsData` 资产本身不是 ACE 二进制内容。运行时通过 `Content/Acoustics/<AssetName>.ace` 用 UFS 文件接口读取 ACE；没有 staging，打包后会出现编辑器能跑、包里加载失败的问题。

## 插件模块分层

### Runtime 层

`ProjectAcoustics` 是底层 Runtime 模块。它不直接处理 UE 声音播放，而是提供 `IAcoustics` 接口：

- 加载和卸载 ACE。
- 将 UE 坐标转换到 Triton 坐标。
- 注册、注销声源对象。
- 接收 source/listener 位置，向 Triton 查询声学参数。
- 维护 dynamic opening、global design、runtime volume 叠加后的设计参数。
- 维护 tile streaming 和 outdoorness 缓存。
- 在非 Shipping 下支持 debug 绘制、stats、source 参数可视化。

`ProjectAcousticsNative` 是 UE Audio Mixer SourceDataOverride 层。它负责：

- 向 UE 注册 `IAudioSourceDataOverrideFactory`，显示名是 `Project Acoustics`。
- 给每个 audio device 创建 `FAcousticsSourceDataOverride`。
- 给每个 audio device 注册 `FAcousticsAudioPluginListener`，让 Spatial Reverb 虚拟扬声器跟随 listener。
- 在每个 source 的 `GetSourceDataOverrides` 阶段查询 `IAcoustics`，并把声学结果写到 WaveInstance、submix send、MetaSound transmitter。

`ProjectAcousticsSpatializer` 是另一套完整 spatialization/reverb 插件层。它可以让平台 spatializer/reverb 都切为 `Project Acoustics`，用 HRTF DSP 直接渲染声像和混响。但是当前工程 Windows 默认没有使用这条链路。

### Editor 层

`ProjectAcousticsBakeUI` 是编辑器烘焙 UI：

- 注册 Editor Mode `Bake Acoustics`。
- 管理对象 tag、材料、probe、bake 四个页签。
- 调用 `Triton.Preprocessor.dll` 生成 `.vox`、probe 和 config。
- 调 Python bridge 提交 Azure bake 或准备 local bake 包。
- 导入 `.ace` 并生成 `UAcousticsData` 资产。
- 确保 packaging 设置包含 `Acoustics` staged 目录。

`ProjectAcousticsNativeEditor` 和 `ProjectAcousticsSpatializerEditor` 只负责 settings 资产和详情面板。

### ThirdParty 层

`ProjectAcoustics` 链接：

- `Triton.Runtime`
- `Triton.Codec`
- `zfp`

`ProjectAcousticsNative` 和 `ProjectAcousticsSpatializer` 在 Windows 预加载：

- `HrtfDsp.dll`

这说明当前插件包含两类第三方能力：

- Triton：声学传播查询、ACE 数据读取、probe/tile 查询。
- HRTF DSP：ProjectAcoustics spatial reverb 和 spatializer 输出。

## 运行时总信号流

典型运行时流程：

```text
关卡里放置 AAcousticsSpace
		|
		v
BeginPlay 加载 UAcousticsData 对应的 Content/Acoustics/*.ace
		|
		v
声音开始播放，UE Audio 创建 source
		|
		v
ProjectAcousticsNative::OnInitSource 注册 source，缓存 source settings
		|
		v
每帧 GetSourceDataOverrides
		|
		v
读取 source/listener 位置 + runtime volume + dynamic opening + design params
		|
		v
IAcoustics::UpdateObjectParameters 查询 Triton
		|
		v
写回 WaveInstance：
	- portaling location / azimuth
	- occlusion attenuation
	- submix sends 或 spatial reverb capture send
	- MetaSound ProjectAcoustics 参数
		|
		v
Spatial Reverb：
	- 每个 source 的 pre-distance submix capture 保存输入 buffer
	- HRTF spatial reverb 一次处理全部 active source
	- 虚拟扬声器 source effect 拷贝每个 output channel
		|
		v
SteamAudio spatialization/reverb + UE Audio Mixer 输出最终声音
```

要理解这个流程，最重要的不是先看 UI，而是先抓住三个对象：

- `AAcousticsSpace`：加载空间数据。
- `FAcousticsSourceDataOverride`：每个 source 查询声学参数并写进音频播放链。
- `FAcousticsAudioPluginListener`：为 Spatial Reverb 维护跟随 listener 的虚拟扬声器。

## `ProjectAcoustics` 核心 Runtime 模块

### `IAcoustics` 接口

`IAcoustics` 是对外 Runtime 接口。核心方法：

| 方法 | 用途 |
| --- | --- |
| `LoadAceFile` | 从工程相对路径加载 ACE，并初始化 Triton。 |
| `UnloadAceFile` | 等待查询任务结束，清理 Triton 数据和缓存。 |
| `SetSpaceTransform` | 把 `AAcousticsSpace` 的位置和旋转作为声学空间变换。 |
| `RegisterSourceObject` | source 开始播放时注册 acoustic query key。 |
| `UnregisterSourceObject` | source 停止时撤销或回收未完成查询。 |
| `UpdateObjectParameters` | 用 source/listener 位置查询 Triton 并填充 `AcousticsObjectParams`。 |
| `SetGlobalDesign` | 设置全局 occlusion、wetness、decay、outdoorness 设计偏移。 |
| `AddDynamicOpening` / `UpdateDynamicOpening` / `RemoveDynamicOpening` | 管理运行时动态开口。 |
| `UpdateLoadedRegion` | 根据 listener 所在 tile 加载 ACE tile。 |
| `PostTick` | 每帧末尾更新内部缓存状态。 |

### ACE 加载

`LoadAceFile` 的文件路径不是绝对路径。它会用：

```text
FPaths::ProjectDir() + FilePath
```

再交给 `FTritonUnrealIOHook` 打开。`FTritonUnrealIOHook` 使用 Unreal 文件接口，因此可以读取 staged UFS/pak 中的 ACE 文件。

加载时会：

1. `UnloadAceFile(false)`，先清掉旧 Triton 数据，但可选择不清旧 query map。
2. 创建 IO hook。
3. 调 `m_Triton->InitLoad(...)`。
4. 设置 `m_AceFileLoaded=true`。
5. 非 Shipping 下记录 debug loaded filename。

制作时需要注意：

- `UAcousticsData` 资产可以放在内容目录下，但它的 `AceFilePath` 固定指向 `Content/Acoustics/<AssetName>.ace`。
- 复制、重命名或导入 ACE 后，要确认 `.ace` 文件和 `UAcousticsData` 资产名一致。
- 打包验证不能只看资产是否存在，还要看 staged UFS 中是否真的有 `Acoustics/<AssetName>.ace`。

### 查询模型

ProjectAcoustics 的声学查询不是简单同步每帧阻塞。

`UpdateObjectParameters` 的行为：

1. source 必须先 `RegisterSourceObject`。
2. 第一次没有缓存时，会同步执行一次查询，立刻给当前帧可用结果。
3. 后续帧优先消费上一次已完成的 future。
4. 消费成功后，排入下一次后台查询。
5. 后台查询运行在插件自己的 `FQueuedThreadPool`，当前是 1 个线程。
6. 如果本帧没有 ready result，会打印 warning 并返回 false。
7. SourceDataOverride 层如果有 last successful query，会复用旧结果。

这个模型的实际影响：

- 首帧声音不会因为没有 async 缓存而完全无声学参数。
- source/listener 快速移动时，声学结果天然会有一帧或多帧延迟。
- 如果大量声音同时需要 ProjectAcoustics 查询，单线程队列会变成瓶颈。
- 对环境音、可听但不重要的小声源，应谨慎开启 expensive 特性，如 dynamic openings、per-source debug 显示等。
- 查询线程池不能使用 UE `FQueuedThreadPool::Create(1)` 的默认栈。UE 默认 queued thread stack 只有 32KB，Triton probe 解压可能在 `Triton::AzfpCodec::AzfpBlock::Decompress()` 中触发 `EXCEPTION_STACK_OVERFLOW`。当前代码应显式用 4MB 栈并命名为 `ProjectAcousticsQueryThreadPool`，让 crash log 可定位。

### 坐标系转换

Unreal 和 Triton 坐标不同：

- Unreal：厘米、左手系、Z up。
- Triton：米、右手系、Z up。

插件转换规则：

- Unreal -> Triton：缩放 `0.01`，并反转 Y。
- Triton -> Unreal：缩放 `100`，并反转 Y。
- `AAcousticsSpace` 的位置和旋转会参与转换。
- `AAcousticsSpace` 的 scale 不受支持，编辑器里会强制保持 1。

制作时不要通过缩放 `AAcousticsSpace` 解决空间对齐问题。应该让烘焙几何、声学空间 actor 和关卡坐标保持同一套比例。

### Tile Streaming

`AAcousticsSpace` 有：

- `TileSize`，默认 `5000cm`。
- `AutoStream`。
- `CacheScale`。

如果开启 `AutoStream`，BeginPlay 会加载 listener 所在 tile。Tick 中会调用 `UpdateLoadedRegion`，当玩家越过当前已加载 tile 的安全范围时，触发 Triton `LoadRegion`。

CVar：

```text
PA.AceTileLoadMargin
```

默认 `0.8`，表示在 tile 尺寸一定比例内提前加载周围区域。开放世界或大关卡需要关注：

- TileSize 太小会导致加载频繁。
- TileSize 太大会导致单次加载内存压力大。
- 需要在包里验证运行时日志，确认 streaming 没有反复抖动加载。

### Outdoorness 缓存

Outdoorness 每帧只计算一次。`AAcousticsSpace::Tick` 会调用 `UpdateOutdoorness`，然后 `PostTick` 在帧末标记缓存过期。

Outdoorness 由 Triton raw value 映射到 0..1：

- 近似 indoor raw：`0.02`。
- 近似 outdoor raw：`1.0`。
- 最终 clamped 到 `0..1`。

Source reverb 里还会叠加 design param 的 outdoorness adjustment。

### Debug

非 Shipping 下 Runtime 模块会创建 `TritonAcousticsDebug`，支持这些 CVar：

| CVar | 用途 |
| --- | --- |
| `PA.DrawVoxels` | 绘制 voxel。 |
| `PA.DrawProbes` | 绘制 probes。 |
| `PA.DrawDistances` | 绘制 distance 数据。 |
| `PA.ShowStats` | 显示 ProjectAcoustics stats。 |
| `PA.ShowAllSourceParameters` | `1` 显示所有 source，`2` 隐藏所有 source，`3` 使用 per-source 设置。 |

`PA.*` Debug CVar 必须能在 PIE/运行时即时生效，不能依赖重启游戏。`AAcousticsSpace` 不能只在 `BeginPlay()` 注册一次 HUD `PostRenderFor()`；HUD 可能在 BeginPlay 后才创建或被替换，用户也可能在运行中才执行 `PA.DrawProbes 1` / `PA.DrawVoxels 1` / `PA.ShowStats 1`。正确做法是在非 Shipping Tick 中按需调用 `EnsureDebugRenderingRegistered()`，当任一 Debug property、source 参数显示模式或 CVar 开启时把 `AcousticsSpace` 重新加入 HUD `PostRenderedActors` 并打开 `bShowOverlays`。`AHUD::AddPostRenderedActor()` 本身会去重，所以每帧按需调用是安全的。`PA.DrawDistances 1` 还必须触发 `UpdateDistances()`，否则 `UpdateDistances=false` 时 CVar 已经打开也没有可绘制的 distance 数据。

如果要 A/B 声学效果，代码里还有 debug enabled state。关闭时会返回 freefield 参数，用来对比“没有几何声学影响”的声音。

## `ProjectAcousticsNative` SourceDataOverride 模块

### 模块启动

`FProjectAcousticsNativeModule::StartupModule` 做这些事：

- 预加载 Windows `HrtfDsp.dll`。
- 注册 MetaSound `ProjectAcoustics` 参数接口。
- 注册 `IAudioSourceDataOverrideFactory`，显示名 `Project Acoustics`。

Factory 的平台支持字符串当前只返回：

- `Windows`
- `Android`

这也是为什么只看 `Build.cs` 的平台数组不够，还必须看 `.uplugin`、`.uproject` 和 factory 的 `SupportsPlatform`。

### Audio Device 初始化

Factory 创建 `FAcousticsSourceDataOverride` 后，会为对应 audio device 注册一个 `FAcousticsAudioPluginListener`。

listener 只在 Game/PIE world 中初始化虚拟扬声器。初始化时会：

1. 找到当前 audio device 的 `SourceDataOverridePluginInterface`。
2. cast 成 `FAcousticsSourceDataOverride`。
3. 只在 `IsSpatialReverbInitialized()` 为 true 时创建虚拟扬声器。
4. 为每个 spatial reverb output channel 创建一个 `USoundSourceBus`。
5. 为每个 channel 创建一个 `USoundEffectAcousticsVirtualSpeakerPreset`。
6. 在世界里 spawn `AAmbientSound`，配置为 spatialize、无 attenuation、无 reverb send、无 occlusion、无 SourceDataOverride。
7. 播放虚拟扬声器，使其持续从 source effect 里拷贝 spatial reverb output。

虚拟扬声器不是游戏里的真实音源资产，而是 ProjectAcoustics spatial reverb 的输出通道载体。

### Listener 线程规则

必须保留当前安全模式：

- `OnListenerInitialize`：GameThread，可创建 Actor。
- `OnTick`：GameThread，可更新 Actor 位置。
- `OnWorldChanged`：GameThread，可 reset/reinitialize。
- `OnListenerShutdown`：清理状态。
- `OnListenerUpdated`：audio thread 回调，不能操作 Actor。

当前代码里 `OnListenerUpdated` 已经是 no-op，并明确注释 Actor state 必须留在 GameThread。后续维护不要把 `SetActorLocation` 放回 `OnListenerUpdated`。

虚拟扬声器持有方式应保持：

- `TWeakObjectPtr<AAmbientSound>`。
- 更新前检查 `IsValid`。
- 检查 `!IsActorBeingDestroyed()`。
- 检查 `Speaker->GetWorld() == InWorld`。
- 遍历数量用 speaker 数、位置数和 expected 数量的最小值。

### Source 生命周期

`FAcousticsSourceDataOverride::OnInitSource`：

- 保存 `UAcousticsSourceDataOverrideSourceSettings`。
- 如果 spatial reverb 初始化完成，创建 per-source spatial reverb input listener。
- 调 `m_Acoustics->RegisterSourceObject`。
- 非 Shipping 下创建/更新 debug source info。

`OnReleaseSource`：

- 移除 last successful query。
- 释放 spatial reverb source。
- 注销 source。
- 销毁 debug info。
- 清空 source settings。

如果 source 没有正常 release，容易出现 query map、debug info 或 spatial reverb source 残留。排查播放生命周期时要看 `OnInitSource` 和 `OnReleaseSource` 是否成对出现。

### Source settings 优先级

`GetSourceDataOverrides` 每帧会解析 source settings。优先级：

1. 默认 `FAcousticsDesignParams`。
2. attenuation asset 上的 `UAcousticsSourceDataOverrideSourceSettings`。
3. 如果实际 `UAudioComponent` 是 `UAcousticsAudioComponent`，组件设置覆盖 attenuation asset。

这意味着同一个 Sound Attenuation 可以作为默认规则，但某个 Actor 上挂了 `UAcousticsAudioComponent` 后，最终生效的是组件上的 ProjectAcoustics 设置。

常用 source 设置：

| 字段 | 用途 |
| --- | --- |
| `ApplyAcousticsVolumes` | 是否允许 `AAcousticsRuntimeVolume` 叠加设计参数。 |
| `DesignParams` | 每个 source 的 occlusion/wetness/decay/outdoorness 设计偏移。 |
| `EnablePortaling` | 是否用 dry arrival direction 改写声源位置/azimuth。 |
| `EnableOcclusion` | 是否用 ProjectAcoustics 参数写 UE occlusion attenuation。 |
| `EnableReverb` | 是否处理 ProjectAcoustics wet/reverb。 |
| `ApplyDynamicOpenings` | 是否把 Dynamic Opening 信息传给 Triton 查询。 |
| `Resolver` | probe interpolation resolver。 |
| `PushDirection` | Resolver 为 Push 时使用。 |
| `ShowAcousticParameters` | 非 Shipping 下 source 参数可视化。 |

### 声学查询和 fallback

每帧 `GetSourceDataOverrides` 会：

1. 拿到 source 位置。
2. 拿到 listener 位置。
3. 根据 settings 合并 source design params。
4. 根据 source 设置决定是否采集 runtime volumes。
5. 根据 source 设置决定是否查询 dynamic openings。
6. 调 `m_Acoustics->UpdateObjectParameters`。
7. 成功则保存 last successful query。
8. 失败但有 last successful query，则复用上次结果。
9. 失败且没有任何历史结果，则返回，不写 ProjectAcoustics 参数。

这个 fallback 对实际制作很关键。刚加载关卡、source 刚开始播放、ACE tile 正在 streaming 时，可能短暂失败。SourceDataOverride 不会直接写 0 或随机参数，而是用旧数据或跳过。

运行时保留一个诊断兜底：`PA.FallbackToNearestProbe` 默认关闭。`FProjectAcousticsModule::GetAcousticParameters` 会先按 source settings 的 `InterpolationConfig` 查询；如果失败且 resolver 不是 `Nearest`，只有 `PA.FallbackToNearestProbe=1` 时才会用 `InterpolationConfig::DisambiguationMode::Nearest` 重试一次。这个策略只适合小范围定位“附近有 Probe 但默认 resolver 失败”的问题，不适合大场景正式运行。大地图里最近 Probe 可能跨楼层、跨房间、跨门洞或跨声学连通区，错误结果会写入 occlusion、portaling、wet/reverb，表现为混响时有时无、声音忽大忽小或播放中途像消失。正式运行应保持 `PA.FallbackToNearestProbe=0`，让 SourceDataOverride 失败路径回到 last successful query 或跳过本帧更新；根因仍要通过补 Nav 区域内 Probe、修 AcousticProxy 门洞/碰撞代理、降低 source 高度偏差，或给特定 SourceDataOverride 单独设置 resolver 解决。

### Portaling

如果 source 开启 `EnablePortaling`，`FAcousticsSourceDataOverride` 会：

- 从 Triton dry path 取 arrival direction。
- 转换到 Unreal 世界方向。
- 用 `listenerLocation + portalDir * shortestDistance` 改写 `WaveInstance->Location`。
- 设置 `WaveInstance->AbsoluteAzimuth`，让 UE 后续 spatialization 使用经过 portal 的方向。

实际听感：

- 声源不再简单从几何直线方向传来。
- 门口、走廊、转角等会把 dry 声像推向声传播路径。
- 如果 spatializer 本身也有 occlusion/propagation 特性，需要避免重复解释同一物理现象。

当前工程由 SteamAudio spatializer 做最终声像，所以 portaling 改写的 WaveInstance 位置会进入 SteamAudio 的 spatialization。

### Occlusion

ProjectAcoustics occlusion 的基本逻辑：

- 结合 dry loudness 和 wet loudness。
- 应用 design param 的 occlusion multiplier。
- 写入 `SetOcclusionAttenuation`。

制作时的判断：

- 如果 source 自身、SteamAudio 或 Blueprint 里也在做遮挡，要确认不会双重遮挡。
- ProjectAcoustics 的遮挡更偏声学传播结果，不只是简单 line trace。
- 小道具和远距离环境声不一定都要开 ProjectAcoustics occlusion。

### Reverb

`ProcessReverb` 分两条路径：

1. `SpatialReverb`
2. `StereoConvolution`

当前工程配置是 `SpatialReverb`。

Wet loudness 计算会：

- 使用 Triton wet loudness。
- 加上 source/global/runtime volume design wetness adjustment。
- 应用 occlusion correction。
- clamp 到最高 0 dB。
- 当 UE distance attenuation 低到约 `-54dB` 到 `-60dB` 之间时逐渐淡出 wet，避免听不到 dry 的 source 还大量贡献 reverb。

Wet decay：

- 使用 Triton wet decay time。
- 乘以 design decay time multiplier。

Outdoorness：

- 使用 Runtime 模块每帧计算的 outdoorness。
- 加上 design outdoorness adjustment。
- clamp 后进入 spatial reverb 参数。

### MetaSound 参数接口

`ProjectAcousticsNative` 注册了 MetaSound 参数接口 `ProjectAcoustics`。只有 sound 实现该参数接口时，SourceDataOverride 才会发送参数。

参数名：

| 参数 | 含义 |
| --- | --- |
| `Dry.Loudness` | dry path loudness。 |
| `Dry.PathLength` | dry path 路径长度。 |
| `Dry.ArrivalAzimuth` | dry arrival 方位角。 |
| `Dry.ArrivalElevation` | dry arrival 仰角。 |
| `Wet.Loudness` | wet loudness。 |
| `Wet.AngularSpread` | wet angular spread。 |
| `Wet.DecayTime` | wet decay time。 |
| `Wet.ArrivalAzimuth` | wet arrival 方位角。 |
| `Wet.ArrivalElevation` | wet arrival 仰角。 |

MetaSound 方位角约定：

- `0`：右侧。
- `90`：前方。
- `180`：左侧。
- `270`：后方。

仰角范围：

- `-90` 到 `90`。

制作 MetaSound 时可以用这些参数驱动滤波、混响 send、粒度变化或 UI debug，但不要假设它们每帧一定更新成功。查询失败时会保留或跳过，必须容忍短暂缺失。

## Spatial Reverb 输入捕获和虚拟扬声器

### 为什么有虚拟扬声器

ProjectAcoustics Spatial Reverb 的目标是产生空间化的 wet 声场。UE Audio Mixer 没有直接把一个插件内部多通道 HRTF wet 输出注入最终 spatial field 的通用接口，所以插件采用了这一套链路：

1. 每个真实 source 的音频通过 pre-distance submix send 送进 ProjectAcoustics spatial reverb input capture。
2. `FAcousticsSpatialReverb` 以 source 为单位保存 mono input buffer 和声学参数。
3. 每个 audio block 统一调用 HRTF DSP 处理所有 active source。
4. HRTF DSP 输出多个 output channel。
5. 插件在世界里放置多个虚拟 `AAmbientSound`，每个虚拟扬声器播放一个 output channel。
6. 虚拟扬声器被定位在 listener 周围固定方向上，由 UE/SteamAudio 继续 spatialize。

### Source input capture

当前代码里有一个工程内新增的 submix effect：

- `AcousticsSpatialReverbInput.h`
- `AcousticsSpatialReverbInput.cpp`

它的行为：

- 每个 source 有一个 transient `USoundSubmix`。
- submix 上挂 `USoundEffectAcousticsSpatialReverbInputPreset`。
- SourceDataOverride 添加一个 pre-distance submix send，send level 为 `1.0`。
- submix effect 在 `OnProcessAudio` 中把 input buffer 交给 `FAcousticsSpatialReverb::SaveInputBuffer`。
- 处理完后把 `OutData.AudioBuffer` 清零，避免这个 capture submix 自己发声。

这一层是当前 Spatial Reverb 能工作的关键。它把 source 原始音频块喂给 ProjectAcoustics，而不依赖旧式 per-source buffer listener 能否在当前 UE 音频链上触发。

仍存在旧的 `FAcousticsSourceBufferListener`：

- 检查 sample rate 是否 `48000`。
- 检查 channel 数量和 samples 数量。
- samples 必须至少 `256`。
- 调 `SaveNewInputBuffer`。

但当前更可靠的路径是 submix input capture。

### HRTF spatial reverb

`FAcousticsSpatialReverb` 初始化时会：

- 检查 buffer length 至少 `256`。
- 根据 quality 选择 HRTF 引擎类型。
- `Best` 使用高质量 spatial reverb。
- `Good` 使用低质量 spatial reverb。
- 分配每个 source 的 mono input buffer。
- 分配 output channel buffers。
- 获取 output channel directions。

每个 audio block：

1. `SaveInputBuffer` 把 source input 下混到 mono。
2. `SetHrtfParameters` 写入 wet loudness、decay、outdoorness、arrival direction、angular spread。
3. `ProcessAllSources` 调 HRTF DSP，一次处理所有 active source。
4. 输出 buffer 被 deinterleave 到每个 output channel。
5. `CopyOutputChannel` 被虚拟扬声器 source effect 调用，复制对应 channel。
6. 复制后清掉对应 channel 的 processed flag，防止重复播放旧数据。

### 虚拟扬声器定位

`FAcousticsAudioPluginListener::OnTick` 从 `FAcousticsSourceDataOverride` 取 output channel directions。方向会转换到 Unreal 世界坐标，并放在 listener 周围约 `100cm` 的位置。

这意味着：

- 虚拟扬声器 Actor 应该跟随 listener，而不是固定在关卡世界空间。
- 它们不应该参与 ProjectAcoustics SourceDataOverride、occlusion、reverb，否则会自反馈。
- 它们的 `UAudioComponent` 会关闭 attenuation、reverb send、occlusion、SourceDataOverride，只保留 spatialization。

如果空间混响听起来方向不稳定，优先检查：

- 虚拟扬声器是否创建成功。
- `OnTick` 是否在当前 world 更新位置。
- output channel count 是否和 speakers 数量一致。
- spatializer 是否正确处理这些虚拟 speaker。

### 线程和生命周期风险

Spatial Reverb 里最容易出问题的是线程边界：

- Audio render thread 可以处理 buffer 和 HRTF 参数。
- GameThread 才能操作 Actor。
- World 切换、停止 PIE、重新 Play 时，虚拟 speaker Actor 可能被销毁。

必须坚持：

- `OnListenerUpdated` 不移动 Actor。
- `OnWorldChanged` reset speaker。
- `OnListenerShutdown` reset speaker。
- speaker 引用用 `TWeakObjectPtr`。

## `ProjectAcousticsSpatializer` 模块

当前工程默认没有把 Windows spatializer/reverb 设置为 ProjectAcoustics，但需要理解它，因为日志里可能出现它的 warning。

### Factory 和 listener

模块注册两个 factory：

- `IAudioSpatializationFactory`
- `IAudioReverbFactory`

显示名也都是：

```text
Project Acoustics
```

`FAcousticsSpatializerPluginListener` 初始化时会检查：

- 当前 audio device 的 spatialization plugin 是否是 ProjectAcoustics spatializer。
- 当前 audio device 的 reverb plugin 是否是 ProjectAcoustics reverb。

如果只启用一个，会打印：

```text
Project Acoustics requires both Reverb and Spatialization plugins. Please enable them in the Project Settings.
```

这个 warning 在当前 SourceDataOverride + SteamAudio 组合下可能是噪声，但如果你真的打算切换到 ProjectAcoustics spatializer/reverb，就必须两个一起切。

### Spatializer 处理

`FAcousticsSpatializer` 要求：

- 默认输出或 stereo 输出。
- sample rate `48000`。
- buffer length 至少 `256`。
- 最大 input channel 数 `8`。

质量可由设置和 CVar 控制：

```text
PA.SpatializerQuality
```

常见值：

- `0`：不覆盖设置。
- `1`：panning。
- `2`：good。
- `3`：high。

代码只允许降低或指定质量，不会无条件把低配置提高到高质量。

### Reverb 输出

`FAcousticsSpatializerReverb` 自己不做 per-source reverb。它的 submix effect 主要负责把 spatializer 渲染好的 HRTF output 拷贝进 UE submix graph。

这条链路和当前 SourceDataOverride Spatial Reverb 链路不同：

- Spatializer 模块是平台 spatialization/reverb 插件方案。
- Native SourceDataOverride Spatial Reverb 是当前工程正在用的方案。

不要把这两条路径的设置混淆。

## `ProjectAcousticsBakeUI` 烘焙工具链

### Editor Mode

`ProjectAcousticsBakeUI` 注册 Editor Mode：

```text
Bake Acoustics
```

包含四类主要页面：

- Object Tag
- Materials
- Probes
- Bake

### Object Tag

ProjectAcoustics 用 Actor tag 区分 bake 几何：

| Tag | 用途 |
| --- | --- |
| `AcousticsGeometry` | 参与声学几何。 |
| `AcousticsNavigation` | 声学导航/可达区域。 |

代码里有这些限制和提醒：

- 不能把 geometry tag 直接加到 RecastNavMesh。
- NavMeshBoundsVolume 不是最终应该 tag 的对象，真正用于 navigation 的通常是生成后的 RecastNavMesh。
- 对特别大的 mesh 会提示风险，避免把巨型合并对象误当作声学导航或几何。

制作流程建议：

1. 先只标记稳定建筑、地形、大型遮挡物。
2. 不要一开始把所有小道具都标入声学几何。
3. 动态门、窗、可开合通道优先评估 Dynamic Opening，而不是重新烘焙多个版本。

### Materials

材料配置存在项目 `Config\ProjectAcoustics.ini` 下的 `Materials` section。Editor UI 会：

- 读取材料库。
- 支持 source control checkout。
- 把 UE material 映射到声学材料。

制作时要保证：

- 大面积材质有合理吸收/反射设置。
- 临时材质或默认材质不要覆盖大量墙面地面。
- 声学材料变更后要重新生成 probes/config 并重新 bake。

### Probes

Probe 生成依赖 acoustic mesh。`AcousticMesh` 会收集：

- 已 tag 的 geometry。
- navigation。
- landscape。
- probe volumes。
- pinned probes。
- material override/remap。

探针精度：

- Coarse：`250Hz`。
- Fine：`500Hz`。

Probe volume 类型：

| 类型 | 用途 |
| --- | --- |
| Include | 包含指定区域。 |
| Exclude | 排除指定区域。 |
| MaterialOverride | 覆盖区域材料。 |
| MaterialRemap | 重新映射材料。 |
| ProbeSpacing | 调整 probe 间距。 |

`AAcousticsPinnedProbe` 是手动 pin probe 的 editor-only Actor，适合在关键听音位置或狭窄路径补点。

### Bake

Bake 页面要求 prebake simulation config 已经准备好。路径和中间文件由 shared state 管理：

| 文件 | 含义 |
| --- | --- |
| `<Prefix>.vox` | 预处理 voxel 数据。 |
| `<Prefix>_config.xml` | 模拟配置。 |
| `<Prefix>.ace` | 最终运行时 ACE。 |
| `<Prefix>_Backup.ace` | 提交或取消 bake 时的备份。 |

Prefix 默认来自当前 level name 加 `_AcousticsData`，也可以在配置中按 level 映射。

Bake 有两条路径：

- Azure bake：需要 batch/storage/toolset 配置。
- Local bake：打包 vox/config/readme 到指定目录，由本地工具处理。

提交 bake 前代码会：

- 确认 `Content/Acoustics` 目录存在。
- checkout 现有 ACE。
- 备份旧 ACE。
- 删除旧 ACE。
- 提交任务。

取消 bake 会尝试恢复备份。

### ACE 导入

`UAcousticsDataFactory` 导入 `.ace` 时：

- 创建 `UAcousticsData` 资产。
- 通常放在 `/Game/Acoustics/<Name>`。
- 把 ACE 文件复制到 `Content/Acoustics/<Name>.ace`。
- Reimport 时也会把源 ACE 复制回 `UAcousticsData::AceFilePath`。

注意：

- `.ace` 文件本身不是普通 uasset。
- 不能只迁移 `UAcousticsData` 资产而漏掉 `Content/Acoustics/*.ace`。
- 不能只改资产名而不处理 ACE 文件名。

## 资产和关卡制作流程

### 第 1 步：确认插件组合

开始制作前先检查：

- `.uproject` 启用了 `ProjectAcoustics`。
- 平台 section 有 `SourceDataOverridePlugin=Project Acoustics`。
- Windows 当前 spatialization/reverb 是否仍按预期由 SteamAudio 承担。
- `DefaultGame.ini` 是否 stage `Acoustics`。

如果要改平台音频插件组合，先明确目标：

- 只用 ProjectAcoustics 声学参数：保持当前 SourceDataOverride 方案。
- 想改用 ProjectAcoustics 自带 spatializer/reverb：Spatialization 和 Reverb 都必须切成 `Project Acoustics`，并单独验证 sample rate、buffer size、输出通道和 CPU。

### 第 2 步：准备声学几何

在 Bake Acoustics mode 中：

1. 标记参与声学的静态几何为 `AcousticsGeometry`。
2. 标记可行走/可听音空间的 navigation 为 `AcousticsNavigation`。
3. 检查大型合并 mesh 是否过度复杂。
4. 设置材料映射。
5. 用 include/exclude/probe spacing volumes 控制 probe 密度。
6. 在关键门口、走廊、室内外过渡位置放 pinned probes。

原则：

- 先做稳定大结构，再加细节。
- 先做小范围验证，再扩大到完整关卡。
- 每次 bake 前记录 geometry/material/probe 配置变化。

### 第 3 步：生成并导入 ACE

推荐流程：

1. 在 Probes 页生成 simulation config。
2. 在 Bake 页提交 Azure 或 local bake。
3. bake 完成后导入 `.ace`。
4. 确认生成 `UAcousticsData` 资产。
5. 确认 `Content/Acoustics/<AssetName>.ace` 存在。
6. 确认资产名、ACE 文件名和 `AceFilePath` 对得上。

### 第 4 步：关卡放置 `AAcousticsSpace`

每个需要声学的 playable level 应该有 `AAcousticsSpace`。

关键属性：

| 属性 | 建议 |
| --- | --- |
| `AcousticsData` | 指向本关卡对应的 `UAcousticsData`。 |
| `TileSize` | 小关卡可默认，大关卡按 streaming 和内存调。 |
| `AutoStream` | 大多数运行时应开启。 |
| `CacheScale` | 一般保持默认，除非明确在优化缓存。 |
| `UpdateDistances` | 需要 distance debug 或相关功能时再开。 |
| `GlobalDesignParams` | 用于全局调音，不要拿它修单个 source 问题。 |

放置规则：

- Actor scale 保持 1。
- 不要通过缩放修坐标偏差。
- 如果关卡运行时移动/旋转整个声学空间，要确认 `SetSpaceTransform` 和 bake 坐标假设一致。

### 第 5 步：配置声音源

有两种方式让 source 使用 ProjectAcoustics 设置：

1. 在 Sound Attenuation 上配置 `UAcousticsSourceDataOverrideSourceSettings`。
2. 在 Actor 上使用 `UAcousticsAudioComponent`，由组件覆盖 attenuation 上的设置。

推荐默认：

- 关键 gameplay 声源开启 occlusion。
- 会受门、窗、通道影响的 source 开启 portaling。
- 需要空间混响贡献的 source 开启 reverb。
- 非关键、小音量、高密度、短生命周期 source 不要默认全开所有 ProjectAcoustics 特性。
- Dynamic Opening 只给确实需要响应开关门/窗的 source 开启。

### 第 6 步：MetaSound 可选增强

如果某个 MetaSound 需要使用 ProjectAcoustics 参数：

1. 让 MetaSound 实现 `ProjectAcoustics` 参数接口。
2. 读取 dry/wet loudness、arrival、decay、spread 等参数。
3. 对参数缺失或延迟做平滑和 fallback。
4. 不要让 MetaSound 自己再做一套和 SourceDataOverride 冲突的遮挡或 portaling，除非明确要做风格化效果。

### 第 7 步：运行时验证

PIE 或开发包中验证：

- 启动时 `AAcousticsSpace` 成功加载 ACE。
- 没有 missing file 或 UFS 读取失败。
- source 开始播放时注册成功。
- Spatial Reverb 初始化成功。
- 虚拟扬声器创建成功且没有在 World Outliner 中无限增长。
- 切换关卡、停止 PIE、重新 Play 不崩溃。
- 打包后 staged 目录有 ACE。

## World Partition、子关卡和 Level Instance 烘焙

ProjectAcoustics Bake UI 不把“子关卡资产”或 “Level Streaming 条目”当成声学几何。源码里的关键事实：

- Object Tab 的选择逻辑遍历当前 Editor World 中每个 visible `ULevel` 的 `level->Actors`。
- Probe prebake 阶段用 `TActorIterator<AActor>(EditorWorld)` 遍历当前 Editor World。
- 普通 Actor 自己带 `AcousticsGeometry` 或 `AcousticsNavigation` tag，才会进入 acoustic mesh。
- 项目内 ProjectAcoustics Bake UI 已扩展：如果 Actor 是已加载的 `ILevelInstanceInterface`，prebake 会通过 `ULevelInstanceSubsystem::ForEachActorInLevelInstance` 递归遍历内部 Actor，并把 Level Instance 外壳上的 Geometry/Nav tag 继承给内部 Actor。
- StaticMesh、Landscape、NavMesh、ProbeVolume、PinnedProbe、DynamicOpening 等真实 Actor/Component 才有意义。
- 把 tag 加到子关卡资源、Level Streaming 条目或不可见/未加载的 World Partition cell 上，仍然不会让内部几何进入烘焙。

遇到 World Partition、传统 streaming sublevel 或 Level Instance 场景时，按下面顺序处理。

### 先确认当前 Editor World 真的包含几何

1. 直接打开要烘焙的 playable map，而不是只在 Content Browser 里选择 map 资源。
2. 如果是传统 sublevel，在 Levels 面板中把要参与烘焙的 sublevel 设为 Loaded 和 Visible。
3. 如果是 World Partition，在 World Partition Editor 中加载玩家会走到的 cells，并确认相关 Data Layers 可见。
4. 如果是 Level Instance，确认它在当前 Editor World 中处于 loaded 状态；未加载的 Level Instance 只能处理外壳 Actor 自己的组件，不能展开内部 Actor。
5. 在 Bake Acoustics 的 Object Tab 使用 Select Objects。Object Tab 仍以当前 visible level actor 为主；prebake 会额外展开已加载 Level Instance，所以 Object Tab 的数量可能低于最终 acoustic mesh 的实际输入。

### tag 应该打到真实 Actor 上

正确做法：

- 给静态建筑、墙、地形、遮挡体等真实 Actor 打 `AcousticsGeometry`。
- 给 RecastNavMesh、可听音地面、Landscape 或可代表行走区域的静态网格打 `AcousticsNavigation`。
- 对于同一个普通 StaticMesh，可以同时打 Geometry 和 Navigation，插件会分别加入 acoustic mesh。
- RecastNavMesh 只能做 Navigation，不能打 Geometry。
- 对于已加载 Level Instance，可以把 `AcousticsGeometry` / `AcousticsNavigation` 打到 Level Instance 外壳 Actor 上，让 prebake 阶段把 tag 继承给内部 Actor。这个做法适合快速验证，正式烘焙仍建议把关键声学对象拆成清晰的 proxy 或真实 Actor。

错误做法：

- 不要只给 persistent level 资源打 tag。
- 不要给未加载的 Level Instance 外壳 Actor 打 tag 后期待内部 mesh 参与。
- 不要只选中子关卡条目或 map asset 并设置 Geometry。
- 不要在 cell 未加载时判断“没有可烘焙对象”。

### Level Instance 仍然识别不到时

先排查这些条件：

- Level Instance 外壳 Actor 是否在当前 Editor World 中 loaded。
- Level Instance 外壳或内部真实 Actor 是否带了 `AcousticsGeometry` / `AcousticsNavigation`。
- World Partition cell 和 Data Layer 是否已经加载并可见。
- 是否存在同一个 Actor 同时通过世界遍历和 Level Instance 遍历被处理；项目内代码用 `processedGeometryActors` / `processedNavigationActors` 做了去重。

如果仍然需要更稳定或更轻量的输入，使用 bake-only 工作流：

1. 创建一个烘焙专用地图或复制当前地图作为临时 bake map。
2. 把需要参与声学的大型 Level Instance 展开、转换或替换成真实 StaticMesh/Landscape/Navigation Actor。
3. 只保留声学需要的大结构：墙、地、顶、门洞、主要遮挡体和室内外边界。
4. 给这些真实 Actor 打 `AcousticsGeometry` / `AcousticsNavigation`。
5. 在 bake map 中生成 probes 和 ACE。
6. 把生成的 `UAcousticsData` 和 `Content/Acoustics/*.ace` 用回正式运行地图里的 `AAcousticsSpace`。

Bake-only map 仍然是大型环境的稳态方案。插件侧的 Level Instance 展开解决“已加载内容识别不到”的问题，但不会自动加载 World Partition cell/Data Layer，也不会替你决定哪些视觉细节应该进入声学网格。

### 使用声学代理几何

ProjectAcoustics 不需要视觉网格的全部细节。大型环境更推荐准备 acoustic proxy：

- 用简化墙体、地面、屋顶、围栏、门洞和主要遮挡体代表声学边界。
- 小道具、杂物、细碎装饰不要默认全部加入 Geometry。
- 对重复建筑或复杂子关卡，可以为每类建筑做一套简化代理。
- 代理只用于 bake，可以放在 bake-only map 或专门的 editor-only data layer。

优点：

- Bake 更快。
- 材料映射更清晰。
- 避免 Level Instance、Packed Level Actor、HLOD、foliage 或外部 Actor 加载状态影响声学结果。
- 声学效果更容易调试。

### 用脚本生成烘焙专用声学代理地图

项目内提供了一个可复用脚本，用于从现有地图递归扫描 StaticMesh 和 Landscape 声学几何，生成 bake-only 声学代理地图，并在代理组件上保留原组件材质引用和物理材质引用。当前默认模式不是旧的 bounds 白盒：StaticMesh 默认使用源渲染网格作为代理，以保留门洞、窗洞和房间开口；Landscape 默认由 C++ Commandlet 采样 heightfield 生成真实三角网格代理。普通 Actor 蓝图内的 `StaticMeshComponent`、`InstancedStaticMeshComponent`、`HierarchicalInstancedStaticMeshComponent` 会按组件扫描；`ChildActorComponent` 会递归读取子 Actor 的 StaticMesh 组件；PCG 已生成并注册到 Actor/Managed Resource 的 StaticMesh/ISM 组件也会参与扫描。

生成目标地图时，脚本会把 Python 生成的代理 `StaticMeshActor` 放进 Outliner 的 `ProxyStaticMesh` 文件夹，并添加默认 `SkyLight`、`Directional Light`、`Sky Atmosphere`、`Exponential Height Fog` 到 `Env` 文件夹。默认 `Heightfield` 模式下追加的 Landscape StaticMesh 代理由 `ProjectAcousticsLandscapeProxy` C++ Commandlet 生成，也会放入同一个 `ProxyStaticMesh` 文件夹。环境 Actor 不带 `AcousticsGeometry`，只用于打开代理场景时获得基础可视环境。

- Python 脚本：`scripts/create-acoustic-proxy-map.py`
- PowerShell 包装：`scripts/Invoke-CreateAcousticProxyMap.ps1`
- Landscape C++ Commandlet：`ProjectAcousticsLandscapeProxy`，代码位于 `Plugins/Audio/ProjectAcoustics/Source/ProjectAcousticsBakeUI/Private/Commandlets/`
- 默认输出目录：`/Game/Acoustics/AcousticProxyMaps/<SourceMapName>_AcousticProxy`
- 报告输出：`Saved/OrionUE/ProjectAcoustics/acoustic-proxy-map-report.json`

脚本的 Level Instance 策略和 Bake UI 不同。命令行 `UnrealEditor-Cmd -NullRHI` 中 `load_level_instance()` 可能不会让 Level Instance 进入 loaded 状态，因此脚本不会依赖当前 Editor World 的加载结果，而是读取 Level Instance actor 的 `get_world_asset()`，递归打开子地图，再用 `unreal.MathLibrary.compose_transforms` 把外壳 Actor transform 合成到子地图内部组件上。外壳 Actor 的 `AcousticsGeometry` / `AcousticsNavigation` tag 会继承给内部 Actor，适合快速为大型 Level Instance 场景生成 bake-only proxy。

每打开一张地图后，脚本还会读取当前 world 的 streaming levels。如果发现传统 sublevel，会读取其 world asset 和 level transform，并按同一套递归流程继续扫描。报告中 `streamingLevelsSeen` 为 0 时，说明这张图在当前命令行环境下没有暴露传统 streaming sublevel；此时如果仍然认为“子关卡还有子关卡”，通常要检查它们是否其实是 World Partition cell、Data Layer 内容，或不是 `LevelInstance` / `ULevelStreaming` 资产。

Landscape 不再依赖 UE Python 的组件 bounds。包装器在 `-LandscapeMode Heightfield` 默认模式下先让 Python 跳过 Landscape bounds，再调用 `ProjectAcousticsBakeUI` 模块中的 `ProjectAcousticsLandscapeProxy` 递归打开源地图、Level Instance 子地图和传统 streaming sublevel，读取 `ULandscapeComponent` 高度数据生成 StaticMesh 代理，并用 `ALandscapeProxy::VisibilityLayer` 跳过洞口 quad。该流程能保留地形起伏和 Landscape visibility holes；只有显式传 `-LandscapeMode Bounds` 时才退回旧的粗粒度 cube/bounds 代理。

先干运行，确认扫描数量、跳过原因和材质统计：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-CreateAcousticProxyMap.ps1 `
	-SourceMap /Game/YourFolder/Maps/YourMap `
	-Report Saved\OrionUE\ProjectAcoustics\your-map-acoustic-proxy-dryrun.json
```

确认后实际创建地图：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-CreateAcousticProxyMap.ps1 `
	-SourceMap /Game/YourFolder/Maps/YourMap `
	-Report Saved\OrionUE\ProjectAcoustics\your-map-acoustic-proxy-apply.json `
	-Apply `
	-Overwrite
```

常用参数：

- `-DestinationMap /Game/Acoustics/AcousticProxyMaps/YourMap_AcousticProxy`：指定输出地图。
- `-OnlyAcousticTagged`：只处理带 `AcousticsGeometry` 或 `AcousticsNavigation` 的 Actor。
- `-IncludeMovable`：默认会跳过可碰撞的 Movable StaticMesh；只有明确确认某些 Movable 几何应作为 bake-only 例外参与本次烘焙时才传入。
- `-StaticMeshMode SourceMesh`：默认模式。代理 Actor 复用源 StaticMesh 和组件材质覆盖，保留门洞、窗洞、房间开口等渲染网格中的真实洞口，避免 bounds/collision box 把房间封死。
- `-StaticMeshMode Bounds`：兼容旧白盒模式，按 simple collision 或 component/static mesh bounds 生成 Engine Cube 代理。只适合粗略挡声体；室内门洞、窗洞、走廊开口会被封闭时不要用。
- `-LandscapeMode Heightfield`：默认模式。Python 生成完目标地图后，调用 C++ Commandlet 追加 Landscape heightfield StaticMesh 代理，并输出 `.landscape.json` 报告。
- `-LandscapeMode Bounds`：退回旧 Landscape component/actor bounds 代理。
- `-LandscapeMode Skip`：完全跳过 Landscape。
- `-LandscapeStep 1`：Landscape 采样步长。`1` 最贴合源地形；较大值会降低三角面数但会牺牲地形和 visibility holes 精度。
- `-LandscapeGeneratedAssetRoot /Game/Acoustics/Generated/Landscape`：生成的 Landscape StaticMesh 资产目录。
- `-FallbackBounds $true`：读取不到 simple collision 时，用 actor/component bounds 做白盒代理。
- `-MaxInstancesPerComponent 5000`：限制 InstancedStaticMesh 单组件生成代理数量，避免 foliage 或海量实例炸开。
- `-MaxLevelInstanceDepth 8`：递归打开 Level Instance 子地图的最大深度；子关卡里还有子关卡时先看报告里的 `maxLevelInstanceDepthSeen` 和 `levelInstanceMapsSkipped`。
- `-MaxChildActorDepth 8`：递归处理蓝图 `ChildActorComponent` 的最大深度，避免蓝图互相嵌套或异常引用导致无限递归。

报告里的关键字段：

- `proxyShapeCount` / `spawnedProxyActors`：最终代理体数量。
- `spawnedEnvironmentActors`：Python 创建的默认环境 Actor 数量，正常应为 `4`。
- `requestedDestinationMap` / `destinationMap`：最终写入地图必须与请求目标一致。`-Overwrite` 不能静默写到 `_001` 这类替代地图；不能覆盖时应失败并提示关闭 Editor 或清理锁。
- `proxyStaticMeshFolder` / `environmentFolder`：生成场景的 Outliner 归档目录，正常分别为 `ProxyStaticMesh` 和 `Env`。
- `componentsSkipped` 和 `skipped`：跳过原因，常见是 `movable`、`no_collision`、`no_static_mesh`；如果地面、墙体、楼梯、走廊、门框等主结构出现 `movable`，优先修源场景 Actor / Component 的 Mobility，或在明确接受该例外时用 `-IncludeMovable` 重跑 Step 1。
- `multiMaterialComponentCount`：多材质组件数量；报告会列出来源材质和代表材质。
- `sourceMeshProxyCount`：使用源 StaticMesh 代理的数量。需要保留房间门洞/窗洞时应大于 0。
- `fallbackBoundsCount`：使用 bounds fallback 的数量。该值很高时，说明当前 UE Python 没拿到 simple collision primitives，白盒近似会比真实碰撞更粗。
- `mapsScanned` / `scannedMaps`：实际打开并扫描过的地图。大型 Level Instance 地图不应只停留在 1。
- `levelInstanceActorsSeen` / `levelInstanceMapsQueued` / `levelInstanceMapsSkipped`：Level Instance 递归情况；`Skipped` 非 0 时先看 `levelInstanceSkipped` 里的原因。
- `streamingLevelsSeen` / `streamingLevelMapsQueued` / `streamingLevelMapsSkipped`：传统 streaming sublevel 递归情况；如果三者都是 0，当前图没有通过 `ULevelStreaming` 暴露子关卡。
- `maxNestedMapDepthSeen`：Level Instance 和 streaming sublevel 合并后的最大递归深度；子关卡套子关卡时应大于 1。
- `childActorComponentsSeen` / `childActorsQueued` / `childActorsSkipped` / `maxChildActorDepthSeen`：蓝图 `ChildActorComponent` 递归情况；蓝图套蓝图时应能看到对应计数。
- `pcgComponentsSeen` / `pcgManagedResourcesSeen` / `pcgGeneratedComponentsSeen` / `pcgGeneratedActorsSeen`：PCG 已生成资源参与情况。普通 StaticMesh/ISM 会按组件生成；GPU-only `PCGProceduralISMComponent` 没有普通 ISM 的 CPU 逐实例 transform，只能按当前可见组件 StaticMesh 或 bounds 近似。
- `landscapeActorsScanned` / `landscapeShapeCount` / `landscapeActorBoundsFallbackCount`：Python bounds 模式下的 Landscape 参与情况；默认 `Heightfield` 模式会由 C++ Commandlet 另写 `.landscape.json`。
- Landscape `.landscape.json` 的 `landscapeComponentsUsed`、`generatedMeshAssets`、`spawnedLandscapeActors`、`generatedVertices`、`generatedTriangles`、`hiddenQuadsSkipped` 和 `proxyStaticMeshFolder`：确认 heightfield 代理、地形洞、目标地图追加情况和 Outliner 归档目录。
- `requestedDestinationMap` / `destinationMap`：两者必须一致。如果命令行 Asset Registry 缓存仍认为旧目标存在，或旧 `.umap` 被打开的 Editor/其他进程锁住，`-Overwrite` 应失败并提示释放锁；不能自动选择 `_001` 后缀目标。

已知限制和排错：

- UE Python 在命令行模式下不一定能读取每个 StaticMesh 的 simple collision primitive；旧 Bounds 模式会退回 bounds。需要保留开口时优先用默认 `SourceMesh`，不要用 bounds/collision box 代理房间。
- 如果生成的白盒地图看起来“全乱了”、大量代理堆在原点附近，先打开报告检查 `proxies[*].shape.location` 的范围和 `shape.shape` 类型。大型关卡坐标不应只集中在几百厘米内；报告里也不应出现 `ActorBoundsFallback`。
- 如果子关卡或 Level Instance 中的碰撞没有生成，先看报告的 `mapsScanned` 是否大于 1、`levelInstanceMapsQueued` 是否包含预期子地图、`levelInstanceMapsSkipped` 是否为 0。命令行里不应只检查 Level Instance 是否 loaded，因为 `load_level_instance()` 在 `-NullRHI` commandlet 中可能不生效。
- 如果怀疑是传统 sublevel，继续看 `streamingLevelsSeen` 和 `streamingLevelMapsQueued`。如果为 0，脚本没有从当前 world 看到 `ULevelStreaming` 条目；这种情况通常不是传统子关卡，而是 World Partition cell、Data Layer、Level Instance 外部 actor 或自定义加载系统。
- 如果 Actor 蓝图里有模型但没生成，先看报告的 `childActorComponentsSeen`、`childActorsSkipped` 和 `componentsSkipped`。普通蓝图组件会直接按 `StaticMeshComponent` 扫描；`ChildActorComponent` 没有实际子 Actor 时会记录 `child_actor_component_no_child_actor`。
- 如果 PCG 生成内容没生成，先确认 PCG 结果已经在编辑器中生成并保存。离线命令行只读取已存在的生成组件/Managed Resource，不会代替运行时重新执行 PCG 图；运行时才生成的内容需要先转成离线可见组件或烘焙成代理。
- 如果地形没有生成，默认先看 `.landscape.json`：`mapsScanned` 是否大于 0、`landscapeComponentsScanned` 是否大于 0、`landscapeComponentsUsed` 和 `spawnedLandscapeActors` 是否大于 0。只有 `-LandscapeMode Bounds` 时才看 Python 报告的 `landscapeShapeCount` / `landscapeActorBoundsFallbackCount`。
- 代理脚本必须优先读取 `StaticMeshComponent.get_world_transform()` / `get_world_location()`。当前 UE Python 不一定暴露 `get_component_transform()` 或 `get_component_location()`；直接调用这些旧名会失败，吞掉失败后会把 mesh 局部 bounds 当成世界坐标，导致白盒堆在局部原点。
- 不要从 component fallback 到 actor bounds。Actor 级 bounds 会把多个组件、子对象和旋转后的世界 AABB 合成一个大盒子，烘焙代理会严重偏大、偏转或重复。读取不到 simple collision 时，只能使用 component/static mesh 局部 bounds 加组件世界 transform；读取不到这个 transform 时应跳过并记录原因。
- 上一条规则只针对普通 StaticMesh 组件。Landscape 是例外：UE Python 命令行拿不到组件级碰撞或 bounds 时，允许退回 `LandscapeActorBounds`，因为不生成地形比生成粗地形代理更容易导致声学 bake 缺失主要地面边界。
- UE Python 的 `unreal.Rotator(a, b, c)` 构造参数顺序是 `roll, pitch, yaw`，不是 `pitch, yaw, roll`。脚本报告可以继续用 `[pitch, yaw, roll]` 便于阅读，但生成 Actor 前必须通过 helper 按正确顺序构造 Rotator；否则代理位置正确但朝向会错。
- `SourceMesh` 代理会复用源 StaticMesh 和所有组件材质 slot 覆盖，洞口由源渲染网格保留；`Bounds` 代理才使用 Engine Cube 缩放，并且复杂多材质网格通常只能稳定使用代表材质。
- 命令行里不要用 `EditorLevelLibrary.spawn_actor_from_object` 放置 Cube asset；该路径会走 `UPlacementSubsystem`，在 `-NullRHI` commandlet 中可能崩溃。脚本必须用 `spawn_actor_from_class(unreal.StaticMeshActor, ...)`，再给组件设置 Cube mesh。
- PowerShell 调外部程序时不要写裸参数 `-Name=$Variable`；这会把 `$Variable` 原样传给 `UnrealEditor-Cmd`。包装脚本必须用参数数组或字符串拼接，例如 `"-LandscapeStep=$LandscapeStep"`、`"-MaxLevelInstanceDepth=$MaxLevelInstanceDepth"`。如果 `.landscape.json` 里 `mapsScanned=1` 且 `mapsSkipped` 等于 Level Instance 数量，先检查 Unreal 日志命令行是否出现了字面量 `$MaxLevelInstanceDepth`。
- 如果当前已有 Editor 开着且 MCP 插件占用了端口，commandlet 可能在脚本成功后仍因 `HttpListener unable to bind to 127.0.0.1:18765` 返回非 0。以 JSON 报告和生成地图文件为准；要拿干净退出码，关闭已打开的 Editor 后再跑。
- 如果安装版引擎的命令行启动会先做全平台 SDK 校验并失败，可以显式传 `-EditorCmd <EngineRoot>\Engine\Binaries\Win64\UnrealEditor-Cmd.exe` 指向当前能启动项目的源码或本机引擎。

### 快速判断问题属于哪一类

| 现象 | 通常原因 | 处理 |
| --- | --- | --- |
| Object Tab 的 Geometry/Nav 数量为 0 | tag 没打到真实 Actor，或 actor 不在当前 Editor World | 加载 visible sublevel/cell，tag StaticMesh/Landscape/NavMesh Actor。 |
| 选了子关卡但 prebake 仍提示缺 Geometry/Nav | 子关卡资源不是声学 Actor | 加载实际 sublevel/cell，tag 真实 Actor，或用 bake-only map。 |
| 只 tag 了 Level Instance 外壳但内部建筑没进 acoustic mesh | Level Instance 未加载，或运行的不是已扩展 Bake UI | 加载 Level Instance；确认 Bake UI 使用 `ULevelInstanceSubsystem` 展开；必要时制作 acoustic proxy。 |
| World Partition 地图只烘焙了一部分 | 只有部分 cells/Data Layers 被加载可见 | 烘焙前加载目标区域 cells/Data Layers。 |
| Navigation 为 0 | 没有可用 RecastNavMesh、地面或 Landscape 被打 Navigation | 至少给一个地面/导航 Actor 打 `AcousticsNavigation`。 |

## Source 设置、Runtime Volume 和 Dynamic Opening

### Design Params

`FAcousticsDesignParams` 包含：

| 参数 | 合并方式 | 用途 |
| --- | --- | --- |
| `OcclusionMultiplier` | 乘法 | 加强或削弱遮挡。 |
| `WetnessAdjustment` | 加法 dB | 提高或降低 wet loudness。 |
| `DecayTimeMultiplier` | 乘法 | 拉长或缩短 decay。 |
| `OutdoornessAdjustment` | 加法 | 推向 indoor/outdoor 混响特性。 |

合并顺序可以来自：

- Source 自身设置。
- Runtime Volume。
- GlobalDesignParams。

制作建议：

- 用 source design 修某个声源类型。
- 用 runtime volume 修某个区域。
- 用 global design 做全局审美调整。
- 不要用 global design 修单个门口或房间问题。

### Runtime Volume

`AAcousticsRuntimeVolume` 会在 SourceDataOverride 的查询中通过零半径 sphere overlap 找到 source 所在 volume。只有 source 开启 `ApplyAcousticsVolumes` 时才会应用。

特点：

- volume 碰撞响应设置为 overlap。
- 多个 volume 的 design params 会叠加。
- 适合房间、洞穴、室外区域、特殊材质空间的调音。

排查：

- 如果 volume 不生效，先查 source 是否开启 `ApplyAcousticsVolumes`。
- 再查 volume collision 是否能被查询到。
- 最后查是否被 component-level source settings 覆盖。

### Dynamic Opening

`UAcousticsDynamicOpening` 用于运行时门、窗、洞口。

源码行为：

- 组件继承 `UStaticMeshComponent`。
- 默认隐藏、无碰撞。
- Owner 自动加 tag `AcousticsNavigation`。
- Editor `PreSave` 会计算扁平凸包、中心、法线。
- BeginPlay 时转换到 Triton 空间并 `AddDynamicOpening`。
- Tick 中更新 dry/wet attenuation。

Source 端必须开启：

```text
ApplyDynamicOpenings=true
```

否则查询不会带 dynamic opening 信息。

使用建议：

- 开关门、窗、可破坏墙洞适合 Dynamic Opening。
- 大面积、复杂、非平面可变结构不适合直接用 Dynamic Opening 硬套。
- 需要在 bake 前确认 opening 周围 probes 和 navigation 足够密。

## 参数、CVar、日志和排查清单

### 关键配置速查

| 检查项 | 期望 |
| --- | --- |
| 平台 SourceDataOverride | `Project Acoustics`。 |
| Windows Spatialization | 当前工程默认 `Steam Audio Spatialization`。 |
| Windows Reverb | 当前工程默认 `Steam Audio Reverb`。 |
| ACE staging | `DirectoriesToAlwaysStageAsUFS=(Path="Acoustics")`。 |
| ACE runtime path | `Content/Acoustics/<AssetName>.ace`。 |
| Sample rate | HRTF/Spatial Reverb 重点验证 `48000`。 |
| Buffer length | Spatial Reverb 和 Spatializer 至少 `256`。 |

### CVar 速查

| CVar | 用途 |
| --- | --- |
| `PA.DrawVoxels` | Runtime voxel debug。 |
| `PA.DrawProbes` | Runtime probe debug。 |
| `PA.DrawDistances` | Runtime distance debug。 |
| `PA.ShowStats` | Runtime stats。 |
| `PA.ShowAllSourceParameters` | Source 参数显示控制。 |
| `PA.AceTileLoadMargin` | Tile streaming 提前加载 margin。 |
| `PA.SpatializerQuality` | ProjectAcoustics spatializer 质量覆盖。 |

### 常见日志和含义

| 日志/现象 | 解释 |
| --- | --- |
| `Project Acoustics requires both Reverb and Spatialization plugins` | 只启用了 ProjectAcoustics spatializer/reverb 中的一个；当前 SourceDataOverride+SteamAudio 组合下可先判断是否是噪声。 |
| `No acoustic query result found` | 本帧没有 ready query result；SourceDataOverride 可能会复用 last successful query。 |
| source 没有声学参数 | source 可能没有注册、没有 ACE、查询失败且没有历史结果，或 source settings 禁用了相关功能。 |
| 大场景中混响时有时无、声音忽大忽小、播放中途像消失，且开启了 `PA.FallbackToNearestProbe` | 不要把最近 Probe fallback 当正式补偿。它可能跨楼层/房间写入错误 occlusion、portaling、wet/reverb；先关闭 `PA.FallbackToNearestProbe`，再补局部 Probe 或修代理几何。 |
| `EXCEPTION_STACK_OVERFLOW`，栈含 `Triton::AzfpCodec::AzfpBlock::Decompress`、`DecodedProbeData::DecompressBlock`、`FProjectAcousticsModule::GetAcousticParameters`，线程名是 `UnknownThreadPool #0` | ProjectAcoustics 查询线程池栈太小。不要改引擎源码；在插件里创建查询线程池时传入足够栈大小，并给线程池命名。 |
| PIE 停止/切图崩溃，栈含 `OnListenerUpdated` 和 `SetActorLocation` | Actor 被 audio thread 操作，必须回到 listener 线程规则排查。 |
| 打包后无 ProjectAcoustics 效果 | 先查 staged UFS 的 `Acoustics/*.ace`，再查 `AAcousticsSpace` 是否加载成功。 |

### 排查顺序

遇到 ProjectAcoustics 没有效果时，按这个顺序查：

1. `.uproject` 是否启用插件，平台是否在 allow list。
2. `DefaultEngine.ini` 当前平台是否有 `SourceDataOverridePlugin=Project Acoustics`。
3. `AAcousticsSpace` 是否存在并绑定 `UAcousticsData`。
4. `Content/Acoustics/<AssetName>.ace` 是否存在。
5. 运行时日志是否加载 ACE 成功。
6. Source 是否使用 attenuation source settings 或 `UAcousticsAudioComponent`。
7. Source settings 是否开启了对应功能：occlusion、portaling、reverb、dynamic opening。
8. 如果是 spatial reverb，确认 Spatial Reverb 初始化、capture send 和虚拟扬声器。
9. 如果是 MetaSound 参数，确认 sound 实现 `ProjectAcoustics` 参数接口。
10. 打包问题再查 staged UFS 和平台 plugin section。

遇到崩溃时，按这个顺序查：

1. 栈是否命中 `FAcousticsAudioPluginListener`。
2. 是否从 `OnListenerUpdated` 进入 Actor/UObject 操作。
3. World 切换时 speaker 是否 reset。
4. speaker 是否弱引用且更新前校验 world。
5. source release 是否和 init 成对。
6. spatial reverb source/channel 数组是否越界。

遇到声音方向异常时，按这个顺序查：

1. 先关闭 source portaling 对比直达方向。
2. 确认 SteamAudio spatializer 是否拿到改写后的 WaveInstance location。
3. 确认 `AAcousticsSpace` transform 没有错误旋转或缩放。
4. 确认 probes 覆盖门口、转角和 source/listener 区域。
5. 确认 MetaSound 没有二次旋转或手动改方位。

遇到混响异常时，按这个顺序查：

1. Source 是否开启 `EnableReverb`。
2. Source 是否被距离 attenuation 淡出 wet。
3. Runtime/global/source design wetness 是否过高或过低。
4. outdoorness 是否被 volume/global design 推偏。
5. Spatial Reverb input capture 是否正常保存 buffer。
6. 虚拟扬声器是否创建和播放。
7. SteamAudio Reverb 是否和 ProjectAcoustics wet 链路叠加过重。

## 修改验证清单

### 修改配置后

必须验证：

- 当前平台 section 里最终插件名是否符合预期。
- PIE 日志中 SourceDataOverride factory 被创建。
- 如切换 ProjectAcoustics spatializer/reverb，必须两者同时切换。
- 打包后 staged UFS 包含 ACE。

### 修改 Runtime C++ 后

必须验证：

1. 代码风格和 CRLF。
2. 最小模块构建。
3. PIE 启动、停止、重复 Play。
4. 切换关卡或 World。
5. 至少一个 source 的 occlusion/portaling/reverb 生效。
6. Spatial Reverb 模式下虚拟扬声器数量稳定。

### 修改 Bake 流程后

必须验证：

1. Tag 保存和重新打开后仍存在。
2. Material library 能加载。
3. Probe generation 成功。
4. `.vox` 和 config 路径正确。
5. Azure/local bake 输出 `.ace`。
6. Import/reimport 后 `Content/Acoustics/<AssetName>.ace` 存在。
7. `UAcousticsData::AceFilePath` 指向正确相对路径。

### 开始正式空间音频制作前的最小通过门槛

在进入大量关卡调音前，先做一个小范围验收：

1. 一个小测试区域完成 geometry/navigation/material/probe/bake。
2. 关卡里放 `AAcousticsSpace` 并成功加载 ACE。
3. 一个循环播放 source 开启 occlusion、portaling、reverb。
4. listener 在门口、拐角、室内外移动时，dry 方向、遮挡和 wet 变化能听出差异。
5. 停止 PIE、重新 Play、切换关卡无崩溃。
6. 打一个开发包，确认 ACE staged 后仍有效。

只有这个最小链路跑通，再扩大到完整地图和正式资产。否则后面的问题会混在 bake、配置、source 设置和打包之间，很难定位。
