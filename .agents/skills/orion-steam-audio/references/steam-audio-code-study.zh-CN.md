# SteamAudio 源码与使用研究

## 目录

- 信息源
- 当前框架事实
- 模块架构
- 配置契约
- 运行时链路
- 组件和资产
- 编辑器导出与烘焙
- 使用流程
- ProjectAcoustics 共存规则
- GPU 加速规则
- 验证清单
- 常见问题

## 信息源

本研究以项目内插件源码为主，以 Valve 官方 Unreal 文档为辅：

- `Plugins/Audio/SteamAudio/SteamAudio.uplugin`
- `Plugins/Audio/SteamAudio/Source/SteamAudio/`
- `Plugins/Audio/SteamAudio/Source/SteamAudioEditor/`
- `Plugins/Audio/SteamAudio/Source/SteamAudioSDK/include/phonon.h`
- `Config/DefaultEngine.ini`
- `Config/DefaultGame.ini`
- Valve Steam Audio Unreal 文档入口：https://valvesoftware.github.io/steam-audio/doc/unreal/index.html
- Valve Steam Audio Unreal User's Guide：https://valvesoftware.github.io/steam-audio/doc/unreal/guide.html
- Valve Steam Audio Unreal Reference：https://valvesoftware.github.io/steam-audio/doc/unreal/reference.html
- Valve Steam Audio Unreal Settings Reference：https://valvesoftware.github.io/steam-audio/doc/unreal/settings.html

不要把网上文档当作当前项目事实；如果源码、配置和文档冲突，以当前插件源码与项目配置为准。

## 当前框架事实

当前插件描述符显示 Steam Audio 插件版本为 `4.8.1`，`phonon_version.h` 中 SDK 版本同为 `4.8.1`。插件包含：

| 模块 | 类型 | LoadingPhase | 平台 |
| --- | --- | --- | --- |
| `SteamAudio` | Runtime | `PreDefault` | Win64、Linux、Mac、Android、IOS |
| `SteamAudioEditor` | Editor | `PostEngineInit` | Win64、Linux、Mac |
| `SteamAudioSDK` | External | Build.cs 外部库模块 | Win64、Linux、Mac、Android、IOS |

当前 Windows 音频配置：

```ini
[/Script/WindowsTargetPlatform.WindowsTargetSettings]
SpatializationPlugin=Steam Audio Spatialization
SourceDataOverridePlugin=Project Acoustics
ReverbPlugin=Steam Audio Reverb
OcclusionPlugin=
```

含义：

- SteamAudio 负责 HRTF / binaural spatialization。
- ProjectAcoustics 负责 SourceDataOverride。
- SteamAudio 负责 Reverb。
- Windows 当前没有启用 `Steam Audio Occlusion`，所以 `USteamAudioOcclusionSettings` 资产不会自动进入实际 occlusion plugin 音频处理。

当前 `[/Script/SteamAudio.SteamAudioSettings]` 使用安全启动默认值：

```ini
SceneType=DEFAULT
ReflectionEffectType=CONVOLUTION
```

`Config/DefaultGame.ini` 已包含：

```ini
+DirectoriesToAlwaysCook=(Path="/SteamAudio/Materials")
```

保留这个配置。SteamAudio 默认材质来自插件内容，如果打包时没有 cook，几何组件或默认材质加载可能在 cooked build 中失败。

## 模块架构

### Runtime 模块

`FSteamAudioModule` 是 Runtime 模块入口：

- 在 `StartupModule` 中加载平台 `phonon` 动态库。
- 注册三个 AudioExtensions modular feature：
	- `Steam Audio Spatialization`
	- `Steam Audio Occlusion`
	- `Steam Audio Reverb`
- 创建单例 `FSteamAudioManager`。
- Editor 下通过 `PostPIEStarted` / `EndPIE` 管理初始化计数。
- 非 Editor 下通过 `OnFEngineLoopInitComplete` / `OnEnginePreExit` 初始化和释放。
- 在 Occlusion/Reverb factory 创建时调用 `RegisterAudioDevice`，注册 `IAudioPluginListener` 以接收 listener transform。

`SteamAudioSDK.Build.cs` 负责第三方库：

- Win64 链接 `phonon.lib`，delay load `phonon.dll`、`TrueAudioNext.dll`、`GPUUtilities.dll`，并写入 RuntimeDependencies。
- Linux/Mac 使用 `libphonon.so` / `libphonon.dylib`。
- Android 使用 APL：`SteamAudioSDK_APL.xml`。
- iOS 静态链接 `libpffft.a`、`libmysofa.a`、`libphonon.a`。

### Manager

`FSteamAudioManager` 持有全局 SteamAudio 状态：

- `IPLContext`
- `IPLHRTF`
- `IPLEmbreeDevice`
- `IPLOpenCLDevice`
- `IPLRadeonRaysDevice`
- `IPLTrueAudioNextDevice`
- `IPLScene`
- `IPLSimulator`
- simulation thread pool
- source/listener component 列表
- dynamic object sub-scene cache 和引用计数

`InitializeSteamAudio` 按原因初始化：

- `PLAYING`：创建 scene、simulator、HRTF、audio engine state、thread pool，运行 direct/reflection/pathing simulation。
- `EXPORTING_SCENE` 和 `GENERATING_PROBES`：强制 `ActualSceneType=DEFAULT`。
- `BAKING`：使用 baking settings，可用 Embree/Radeon Rays。

`Tick` 每帧运行 direct simulation；达到 `SimulationUpdateInterval` 后在单线程池里运行 reflections/pathing。源码里已经防止 OpenCL device 未初始化时继续跑异步 GPU simulation。

### Audio Engine Interface

当前使用 Unreal 内置 audio engine 时：

- `FUnrealAudioEngineState::GetAudioSettings` 从 active audio device 读取 sample rate 和 callback frame size，默认 fallback 为 48000 / 1024。
- `SetReverbSource` 把 listener component 创建的 `IPLSource` 交给 reverb submix plugin。
- `SetHRTFDisabled` 是全局 atomic 开关，用于禁用 HRTF。

第三方 FMOD/Wwise 支持存在接口分支，但当前工作流默认按 Unreal 内置 audio engine 分析。

## 配置契约

### AudioSettings 插件名

平台 section 的插件名必须和 factory display name 完全一致：

```ini
SpatializationPlugin=Steam Audio Spatialization
OcclusionPlugin=Steam Audio Occlusion
ReverbPlugin=Steam Audio Reverb
```

Factory 平台支持：

- Spatialization：Windows、Linux、Mac、Android、IOS
- Occlusion：Windows、Linux、Mac、Android、IOS
- Reverb：Windows、Linux、Mac、Android、IOS

`.uplugin` 的 Runtime module allow list 使用 `Win64`，但 factory `SupportsPlatform` 返回的是 Unreal 平台显示名 `Windows`。排查平台插件不生效时同时检查 `.uplugin` 和 factory。

### SteamAudioSettings

`USteamAudioSettings` 是 `Config=Engine, DefaultConfig`，来源是 `DefaultEngine.ini`。主要类别：

- Scene export：Landscape、BSP、MinLOD、默认 mesh/landscape/BSP material、Physics Material 到 SteamAudio Material 的映射。
- Ray tracer：`SceneType=DEFAULT|EMBREE|RADEONRAYS`。
- Occlusion：`MaxOcclusionSamples`。
- Realtime reflections：rays、bounces、duration、ambisonic order、max sources、CPU cores、irradiance min distance。
- Baking reflections：bake convolution / parametric、rays、bounces、duration、order、CPU cores、irradiance min distance。
- Reverb：`ReverbSubmix`。
- Pathing：visibility samples/radius/threshold/range、path range、CPU cores。
- Simulation update：`SimulationUpdateInterval`。
- Reflection effect：`CONVOLUTION|PARAMETRIC|HYBRID|TRUEAUDIONEXT`。
- OpenCL / Radeon Rays / TrueAudio Next：device type、CU reservation、baking batch、TAN duration/order/max sources。
- HRTF：SOFA file、volume、normalization。
- Advanced：`EnableValidation`。

发布默认值应保持：

```ini
SceneType=DEFAULT
ReflectionEffectType=CONVOLUTION
```

不要为了“开启 GPU 音频”直接把默认 ini 改为 Radeon Rays / TrueAudio Next；SteamAudio Runtime 模块 `PreDefault` 加载，项目游戏模块或设置页可能来不及在初始化前兜底。

## 运行时链路

### Spatialization

`FSteamAudioSpatializationPlugin` 实现 `IAudioSpatialization`：

- `OnInitSource` 在 GameThread 确保 SteamAudio 初始化。
- 从 `USteamAudioSpatializationSettings` 读取是否 binaural、HRTF interpolation、pathing 开关和 mix level。
- 创建或复用 HRTF、panning effect、binaural effect、path effect、ambisonics decode effect 和音频 buffer。
- `ProcessAudio` 中，如果全局 SteamAudio disabled，则直通输入。
- 启用 binaural 且 HRTF 未禁用时走 `iplBinauralEffectApply`；否则走 `iplPanningEffectApply`。
- 启用 pathing 时，通过 `AudioComponentId` 找到 owner 的 `USteamAudioSourceComponent`，取 simulation pathing output，再叠加到空间化输出。

使用要点：

- 每个需要 SteamAudio spatialization 的声源应配置 `USteamAudioSpatializationSettings`，并确保平台 `SpatializationPlugin=Steam Audio Spatialization`。
- Pathing 需要 `SteamAudioSourceComponent.bSimulatePathing=true`、有效 `PathingProbeBatch` 和已 bake pathing 数据。
- HRTF 可通过 `USteamAudioFunctionLibrary::SetHRTFDisabled` 全局禁用。

### Occlusion

`FSteamAudioOcclusionPlugin` 实现 `IAudioOcclusion`：

- 设置来自 `USteamAudioOcclusionSettings`。
- Direct effect 可应用 distance attenuation、air absorption、directivity、occlusion、transmission。
- Occlusion/transmission 值来自同 owner 的 `USteamAudioSourceComponent`，不是 occlusion plugin 自己发射所有 ray。
- `USteamAudioSourceComponent` 在 manager tick 中运行 direct simulation，并更新 `OcclusionValue`、`TransmissionLowValue`、`TransmissionMidValue`、`TransmissionHighValue`。

当前 Windows `OcclusionPlugin=` 为空时，occlusion settings asset 不会被平台音频插件调用。若要让 SteamAudio 接管 occlusion，需要修改平台 section，并确认不会和 ProjectAcoustics SourceDataOverride 的遮挡逻辑重复。

### Reverb / Reflections

`FSteamAudioReverbPlugin` 实现 `IAudioReverb`：

- Source-centric reflections 由 `USteamAudioReverbSettings` 控制。
- Listener-centric reverb 通过 `USteamAudioListenerComponent` 设置当前 reverb source，再由 `FSteamAudioReverbSubmixPlugin` 在 submix 中处理。
- `GetSubmix` 从 `USteamAudioSettings.ReverbSubmix` 读取 submix；缺失时创建临时 submix，并确保 effect chain 里有 `USteamAudioReverbSubmixPluginPreset`。
- `ProcessSourceAudio` 可把每个声源的 reflections 写入 `ReflectionMixer`。
- `OnProcessAudio` 从 mixer 混合 source-centric reflections，并按 preset 决定是否应用 listener-centric reverb 和 HRTF。

使用要点：

- 平台必须启用 `ReverbPlugin=Steam Audio Reverb`。
- 需要 listener-centric reverb 时，玩家/监听器侧放 `USteamAudioListenerComponent`，开启 `bSimulateReverb`。
- 需要 source-centric reflections 时，声源 actor 放 `USteamAudioSourceComponent`，开启 `bSimulateReflections`，并给音频源配置 `USteamAudioReverbSettings`。

## 组件和资产

| 类/资产 | 作用 | 关键字段 |
| --- | --- | --- |
| `USteamAudioSpatializationSettings` | per-source spatialization 设置 | `bBinaural`、`Interpolation`、`bApplyPathing`、`bApplyHRTFToPathing`、`PathingMixLevel` |
| `USteamAudioOcclusionSettings` | per-source direct effect 设置 | distance attenuation、air absorption、directivity、occlusion、transmission |
| `USteamAudioReverbSettings` | per-source reflections 设置 | `bApplyReflections`、`bApplyHRTFToReflections`、`ReflectionsMixLevel` |
| `USteamAudioSourceComponent` | 声源 simulation 设置 | occlusion、transmission、reflections、pathing、baked source/listener |
| `USteamAudioListenerComponent` | listener-centric reverb 和 baked listener | `CurrentBakedListener`、`bSimulateReverb`、`ReverbType` |
| `USteamAudioGeometryComponent` | 标记静态声学几何 | material、runtime material update、export all children、export index |
| `USteamAudioDynamicObjectComponent` | 动态几何 | serialized object asset、child actors dynamic export、runtime instanced mesh |
| `ASteamAudioProbeVolume` | 探针体积和 baked layer 资产 | generation type、spacing、height、probe count、detailed stats |
| `USteamAudioMaterial` | 声学材质 | low/mid/high absorption、scattering、low/mid/high transmission |
| `USteamAudioBakedSourceComponent` | 静态声源 bake endpoint | influence radius |
| `USteamAudioBakedListenerComponent` | 静态 listener bake endpoint | influence radius |
| `ASteamAudioStaticMeshActor` | 运行时静态声学场景载体 | serialized static geometry asset |
| `USteamAudioSerializedObject` | SteamAudio 序列化数据容器 | static mesh、dynamic object、probe batch、baked data |

## 编辑器导出与烘焙

`SteamAudioEditor` 在 Level Editor 工具栏加入 `Steam Audio` 菜单：

- Select All Actors with Geometry Component
- Add Geometry Component to all Actors
- Remove Geometry Component from all Actors
- Export Static Geometry
- Export Static Geometry (Current Level)
- Export Static Geometry to .obj
- Export Static Geometry to .obj (Current Level)
- Export All Dynamic Objects
- Export All Dynamic Objects (Current Level)
- Bake Indirect Sound

静态几何导出：

1. `USteamAudioGeometryComponent` 标记需要导出的 actor。
2. 如果组件勾选 `bExportAllChildren`，子 actor 也会进入导出。
3. 带 `USteamAudioDynamicObjectComponent` 的 actor 会从静态几何排除。
4. StaticMesh 导出使用 `MinLODForExport`，并会设置 `StaticMesh->bAllowCPUAccess = true` 以支持 runtime 更新。
5. Landscape/BSP 由全局设置决定是否导出。
6. 导出结果保存为 `USteamAudioSerializedObject`，并由 `ASteamAudioStaticMeshActor` 在 BeginPlay 加载到 `IPLScene`。

动态几何：

1. 给动态 actor 或 Blueprint 添加 `USteamAudioDynamicObjectComponent`。
2. Editor 导出后 `Asset` 指向该动态对象的 serialized geometry。
3. BeginPlay 时 manager 通过 `LoadDynamicObject` 把 serialized geometry 作为 sub-scene 加载，并创建 `IPLInstancedMesh`。
4. owner root transform 更新时调用 `iplInstancedMeshUpdateTransform`。
5. 未提前导出的动态对象可调用 `ExportDynamicObjectRuntime`，但这是异步 runtime 导出，复杂正式流程应优先在 Editor 中生成资产。

Probe 和烘焙：

1. 关卡中必须已有 `ASteamAudioStaticMeshActor` 且它的 `Asset` 有效。
2. 放置 `ASteamAudioProbeVolume`，选择 `CENTROID` 或 `UNIFORM_FLOOR`。
3. 点击 ProbeVolume detail 面板中的 `Generate Probes`，生成 probe batch serialized asset。
4. 打开 `Steam Audio > Bake Indirect Sound...`，可选择 Reverb、Static Source、Static Listener、Pathing 任务。
5. Bake 会把 baked layer 写回每个 ProbeVolume 的 serialized asset，并更新 `DetailedStats`。
6. Pathing 也可在 ProbeVolume detail 面板中单独 `Bake Pathing`。

烘焙失败的硬前置：

- 没有 static geometry：`Bake failed: no static geometry.`
- 没有 probe volume：`Bake failed: no probe volumes.`
- ProbeVolume 没有生成 probes：该 volume 被跳过。

## 使用流程

### 基础 HRTF 空间化

1. 确认目标平台 section：`SpatializationPlugin=Steam Audio Spatialization`。
2. 创建 `SteamAudioSpatializationSettings` 资产，设置 `bBinaural` 和 HRTF interpolation。
3. 在声源使用的 attenuation / source plugin settings 中指定该 settings asset。
4. 如果只需要基础 binaural，不需要给 actor 添加 `USteamAudioSourceComponent`。
5. PIE 时听左右、前后、上下移动；日志中不应有 HRTF 或 panning effect 创建失败。

### SteamAudio 遮挡和透射

1. 平台必须启用 `OcclusionPlugin=Steam Audio Occlusion`。
2. 声源 actor 添加 `USteamAudioSourceComponent`。
3. 开启 `bSimulateOcclusion`，选择 `RAYCAST` 或 `VOLUMETRIC`。
4. 如需要透射，开启 `bSimulateTransmission`，设置 `MaxTransmissionSurfaces`。
5. 创建并指定 `SteamAudioOcclusionSettings`，勾选要应用的 direct effect 项。
6. 如果当前同时启用 ProjectAcoustics SourceDataOverride，先确认不会重复做遮挡/透射。

### 实时 reflections / reverb

1. 平台启用 `ReverbPlugin=Steam Audio Reverb`。
2. 声源 actor 添加 `USteamAudioSourceComponent`，开启 `bSimulateReflections`，`ReflectionsType=REALTIME`。
3. 声音使用 `SteamAudioReverbSettings`，开启 `bApplyReflections`。
4. listener actor 添加 `USteamAudioListenerComponent`，开启 `bSimulateReverb`，`ReverbType=REALTIME`。
5. `USteamAudioSettings.ReverbSubmix` 可指定正式 submix；缺失时插件会创建临时 submix，但正式项目应显式配置。

### Baked reflections / baked reverb / pathing

1. 给声学几何添加 `USteamAudioGeometryComponent`，导出 static geometry。
2. 放置 `ASteamAudioProbeVolume` 并生成 probes。
3. 对静态声源添加 `USteamAudioBakedSourceComponent`，设置 influence radius。
4. 对静态 listener 位置添加 `USteamAudioBakedListenerComponent`，设置 influence radius。
5. 在 Bake 窗口选择 Reverb、Static Source、Static Listener 或 Pathing。
6. 运行时：
	- Baked static source：source component 选择 `BAKED_STATIC_SOURCE`，并设置 `CurrentBakedSource`。
	- Baked static listener：listener component 设置 `CurrentBakedListener`，source component 选择 `BAKED_STATIC_LISTENER`。
	- Pathing：source component 开启 `bSimulatePathing`，设置 `PathingProbeBatch`，spatialization settings 开启 `bApplyPathing`。

### Runtime 几何材质更新

`USteamAudioFunctionLibrary::UpdateStaticMeshMaterial(AStaticMeshActor*)` 会根据 `USteamAudioGeometryComponent.ExportIndex` 调用 `iplStaticMeshSetMaterial`。只有 `bWantToChangeMaterialAtRuntime=true` 且 actor 参与静态导出时才有意义。

### 全局开关

`USteamAudioFunctionLibrary` 提供：

- `IsInitialized`
- `SetSteamAudioEnabled`
- `IsSteamAudioEnabled`
- `UpdateStaticMesh`
- `UpdateStaticMeshMaterial`
- `ShutDownSteamAudio`
- `UnloadDynamicObject`
- `AddSource` / `RemoveSource`
- `AddListener` / `RemoveListener`
- `SetHRTFDisabled`

这些函数直接操作全局 manager 或 component registration。Gameplay 里优先使用组件生命周期；只有做调试、设置页或运行时几何更新时才直接调用。

## ProjectAcoustics 共存规则

当前框架的常用 Windows 组合是：

```ini
SpatializationPlugin=Steam Audio Spatialization
SourceDataOverridePlugin=Project Acoustics
ReverbPlugin=Steam Audio Reverb
OcclusionPlugin=
```

排查规则：

- 空间定位、HRTF、pathing spatialization：先查 SteamAudio。
- ProjectAcoustics 声学参数、MetaSound 参数、SourceDataOverride：先查 ProjectAcoustics。
- 混响听感异常：先确认当前是 `Steam Audio Reverb` 还是 `Project Acoustics`。
- 遮挡/透射异常：Windows 当前没有启用 Steam Audio Occlusion，先查 ProjectAcoustics SourceDataOverride 或普通 attenuation/trace。
- 不要设置 `ReverbPlugin=Project Acoustics` 但保留 `SpatializationPlugin=Steam Audio Spatialization`；ProjectAcoustics Reverb 需要 ProjectAcoustics Spatialization 同时启用。

## GPU 加速规则

当前插件源码包含框架侧 GPU 加速保护：

- CVar：`SteamAudio.GPUAudioAcceleration`
	- `-1`：Auto
	- `0`：Disabled
	- `1`：EnabledWhenSupported
- Auto 会读取本地用户设置 `bUseGPUAudioAcceleration`。
- Windows 下先检测 `OpenCL.dll`。
- 缺少 OpenCL runtime 时回退 `DEFAULT + CONVOLUTION`。
- OpenCL device list 为空或 device 创建失败时回退 `DEFAULT + CONVOLUTION`。
- 只有 `OpenCLDevice` 有效才继续 Radeon Rays / TrueAudio Next。
- 播放态启用 GPU 时，实际运行模式改为 `RADEONRAYS + TAN`。
- `EXPORTING_SCENE` 和 `GENERATING_PROBES` 强制使用 `DEFAULT` scene type。

修改规则：

- 不要只改 `DefaultEngine.ini` 打开 GPU 模式。
- 用户可见开关属于本机硬件能力设置，应由本地设置和下次启动生效的策略驱动。
- 如果要热切换，应先设计完整的 shutdown/reinitialize、source/listener/probe/dynamic object 重新注册流程；当前默认不建议运行中强行热重建。

## 验证清单

### 配置验证

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents/skills/orion-steam-audio/scripts/Test-SteamAudioConfig.ps1 -ProjectRoot <ProjectRoot>
```

检查点：

- 插件版本和 SDK 版本一致。
- `SteamAudio` Runtime 模块存在且平台 allow list 覆盖目标平台。
- 目标平台插件名拼写正确。
- Windows 默认组合没有同时启用重复 occlusion。
- `SceneType=DEFAULT`、`ReflectionEffectType=CONVOLUTION` 作为启动安全默认值。
- `DefaultGame.ini` 保留 `/SteamAudio/Materials` always cook。

### Runtime 验证

- PIE 日志包含 `Initialized module SteamAudio.`。
- 不出现 `Unable to create context`、`Unable to create HRTF`、`Unable to create simulator`。
- 声源移动时 HRTF 空间定位正常。
- 开启 reflections/reverb 时，listener component 和 source component 都已 BeginPlay 并注册。
- 如果 GPU 加速被请求但不可用，日志应显示回退，不应崩溃。

### 烘焙验证

- Static geometry export 后当前关卡有 `ASteamAudioStaticMeshActor` 且 `Asset` 有效。
- ProbeVolume `NumProbes > 0`，`DataSize > 0`。
- Bake 窗口中 Reverb / Static Source / Static Listener / Pathing 行可见。
- Bake 成功后 ProbeVolume `DetailedStats` 出现对应 layer 和数据大小。
- Runtime pathing 声源引用正确 ProbeVolume。

### 打包验证

- Win64 staged build 包含 `phonon.dll`、`TrueAudioNext.dll`、`GPUUtilities.dll`。
- Linux/Mac/Android/iOS 按 `SteamAudioSDK.Build.cs` 检查对应库和 APL。
- `/SteamAudio/Materials` 被 cook。
- 如果使用 SteamAudio serialized assets，确认相关 `.uasset` 被 cook。

## 常见问题

### SteamAudio Occlusion Settings 没有效果

现象：设置了 `USteamAudioOcclusionSettings`，但遮挡不变化。

原因：平台 `OcclusionPlugin` 未启用，或声源 actor 没有 `USteamAudioSourceComponent` 提供 simulation output。

修复：

1. 检查目标平台 section 是否有 `OcclusionPlugin=Steam Audio Occlusion`。
2. 给声源 actor 添加 `USteamAudioSourceComponent` 并开启 `bSimulateOcclusion`。
3. 如果启用 transmission，同时开启 `bSimulateTransmission`。
4. 确认没有和 ProjectAcoustics SourceDataOverride 重复处理遮挡。

### Reverb 开了但听不到

现象：`Steam Audio Reverb` 已启用，但没有混响或 reflections。

原因：只启用了平台 reverb plugin，没有 listener/source simulation 组件或 reverb settings。

修复：

1. Listener 侧添加 `USteamAudioListenerComponent` 并开启 `bSimulateReverb`。
2. Source 侧添加 `USteamAudioSourceComponent` 并开启 `bSimulateReflections`。
3. 声音指定 `USteamAudioReverbSettings` 并开启 `bApplyReflections`。
4. 检查 `ReverbSubmix` 或插件创建的 submix preset。

### Bake failed: no static geometry

原因：当前 level 没有有效 `ASteamAudioStaticMeshActor.Asset`。

修复：

1. 给需要参与声学的 StaticMesh/Landscape 添加 `USteamAudioGeometryComponent`。
2. 使用 `Steam Audio > Export Static Geometry` 或 current level export。
3. 确认生成或复用的 `ASteamAudioStaticMeshActor` 指向 serialized static geometry asset。

### Bake failed: no probe volumes

原因：关卡中没有 `ASteamAudioProbeVolume`，或当前 world 下没有可用 probe volume。

修复：放置 ProbeVolume，生成 probes，再打开 Bake 窗口。

### GPU 加速请求后仍回退

原因：缺少 `OpenCL.dll`、没有可用 OpenCL device、Radeon Rays 或 TrueAudio Next device 创建失败。

修复：

1. 保持 `SceneType=DEFAULT`、`ReflectionEffectType=CONVOLUTION`。
2. 用 CVar 或本地设置请求 GPU。
3. 查看日志，确认是 OpenCL runtime、device list、device create、Radeon Rays 还是 TAN 初始化失败。
4. 没有可靠 GPU 能力时接受回退，不要强行把 ini 改成 GPU 默认。

### SteamAudio 和 ProjectAcoustics 混响叠加

现象：混响过重、方向感不稳定或平台行为不一致。

原因：同一平台同时打开多套 Reverb/Occlusion/SourceDataOverride，或把 ProjectAcoustics Reverb 和 SteamAudio Spatialization 混配。

修复：

1. 先读目标平台 section。
2. 保留当前默认组合时：SteamAudio Spatialization + ProjectAcoustics SourceDataOverride + SteamAudio Reverb。
3. 如果切到 ProjectAcoustics Reverb，必须同时切 ProjectAcoustics Spatialization，并重新验证空间化和混响。
