# Unreal 渲染框架手册

## 使用边界

本手册用于渲染运行时、视频设置、DLSS/NIS/Streamline、画质档位和 PSO 缓存。处理具体任务时必须读取当前工程真实源码和配置，本手册只提供导航和约束。

不要把宿主项目名、绝对路径、用户名、机器路径或实际 PSO 文件名前缀写进可发布内容。公开框架模块名、类名、插件名、配置 section、CVar 和相对路径模板可以保留。

## 运行时架构

渲染运行时主链路：

1. `UOrionGameInstance` 持有 `FOrionGameRenderManager`。
2. `UOrionGameRenderSubsystem` 是 world subsystem，在 `OnWorldBeginPlay` 中取得 GameInstance 的 render manager 并初始化。
3. `FOrionGameRenderManager::Initialize` 先应用本地抗锯齿方法，再初始化 `UGameDLSSSubsystem`。
4. `UOrionSettingsLocal` 保存用户本机渲染设置，并通过 subsystem 或 CVar 应用到运行时。
5. `GameSettingRegistry_Video.cpp` 把 UI 设置项接到 `UOrionSettingsLocal`、`UGameDLSSSubsystem` 和 `UOrionGameRenderSubsystem`。

核心类职责：

| 类 / 文件 | 职责 | 注意点 |
| --- | --- | --- |
| `FOrionGameRenderManager` | 初始化渲染状态、查询 ray tracing 支持、切换 RTX、设置 `r.AntiAliasingMethod` | 构造时同步 RTX CVar，world begin play 后初始化 DLSS。 |
| `UOrionGameRenderSubsystem` | Blueprint/runtime 访问入口，包装 render manager | 设置项和蓝图不要直接持有 manager。 |
| `UOrionSettingsLocal` | 本机用户渲染设置、帧率限制、画质、DLSS、RTX、抗锯齿、gamma | `SetDLSSUpscaleEnabled`、`SetDLSSFGEnabled` 会调用 DLSS subsystem；RTX setter 只保存状态，RTX 生效还依赖 render manager 和重启语义。 |
| `UGameDLSSSubsystem` | DLSS/NIS/Streamline 运行时封装 | 自动选择 DLSS、NIS 或 BuiltIn，维护支持消息、默认模式、屏幕百分比、TSR 抗锯齿约束。 |
| `UGameDLSSSettings` | `Config=Game` 的 DLSS 项目默认 | 当前默认值在 C++ 中，ini 不一定有覆盖。 |
| `UGamePerformanceSettings` | 桌面帧率选项、性能统计、平台渲染设置集合 | 平台差异通过 `UGamePlatformSpecificRenderingSettings`。 |
| `UGamePlatformSpecificRenderingSettings` | `UPlatformSettings`，定义 frame pacing、移动帧率、是否支持颗粒画质/自动 benchmark | 移动平台可在平台 `Game.ini` 覆盖 `FramePacingMode=MobileStyle`。 |

## 视频设置页

`GameSettingRegistry_Video.cpp` 中的视频设置分区：

- Display：窗口模式、显示器、分辨率、性能统计页。
- Graphics：亮度、HDR 开关、HDR 校准、HDR paper white、字幕页。
- Graphics Quality：设备档后缀、移动帧率、自动画质、整体画质、分辨率比例、GI、阴影、抗锯齿质量、视距、纹理、特效、反射、后处理、抗锯齿方法、RTX。
- DLSS：DLSS Upscale、DLSS Mode、DLSS Frame Generation、DLSS Frame Generation Mode。
- Advanced Graphics：垂直同步。
- FrameRates：电池、菜单、后台、常规帧率限制、动态分辨率目标帧率。

新增一个渲染设置项的顺序：

1. 判断它是用户本机设置、共享设置、项目默认配置，还是纯 CVar。
2. 本机设置优先扩展 `UOrionSettingsLocal`，字段使用 `UPROPERTY(Config)`，同时提供 getter/setter。
3. 如果是平台默认值，放平台 `GameUserSettings.ini` 或 `UPlatformSettings` 平台覆盖；不要硬编码平台名。
4. 在 `GameSettingRegistry_Video.cpp` 添加 setting，使用 `AddEditCondition` 处理平台 trait、DLSS 支持、frame pacing 或硬件能力。
5. 如果设置需要立即应用，setter 调用 subsystem 或 `Scalability::SetQualityLevels`；如果需要重启，UI 要提示而不是伪装成即时生效。
6. 验证设置 UI 状态、保存/重启后加载值、目标平台 ini 合并结果和实际 CVar。

抗锯齿和 DLSS 的特殊规则：

- 用户可选择 None、FXAA、TAA、MSAA、TSR。
- DLSS Upscale 或 NIS 启用后，项目封装会把 desired anti-aliasing method 改为 TSR 并禁用用户手动改 AA method。
- 关闭 DLSS/NIS 时，系统会恢复用户保存的抗锯齿方法。
- 不要绕过 `UOrionGameRenderSubsystem::CanChangeAntiAliasingMethod`。

显示器、HDR 和动态分辨率的特殊规则：

- Windows 显示器设置通过自定义 `UGameSettingValueDiscrete_Display` 读取 `FDisplayMetrics`，分辨率列表应按当前显示器调用 RHI 查询。
- 无边框窗口模式下分辨率跟随桌面原生分辨率，设置项应禁用而不是写入无效值。
- HDR 设置要区分系统/平台提供的 fixed HDR、dynamic HDR 开关、校准值和 paper white；校准入口在 HDR 未启用时应禁用。
- 动态分辨率设置需要 `r.DynamicRes.OperationMode=1`、RHI 支持 `GRHISupportsDynamicResolution`，并由 `Platform.Trait.SupportsCustomDynamicResolution` 控制 UI gating。

RTX 的特殊规则：

- `IsRayTracingSupported` 来自 RHI 的 `GRHISupportsRayTracing`。
- `EnableRTX(true)` 设置 `r.RayTracing.ForceAllRayTracingEffects -1` 和 `r.Lumen.HardwareRayTracing 1`。
- `EnableRTX(false)` 设置 `r.RayTracing.ForceAllRayTracingEffects 0` 和 `r.Lumen.HardwareRayTracing 0`。
- UI 修改 RTX 后提示完全重启；不要假设所有 ray tracing 相关资源都可热切换。

## DLSS / NIS / Streamline

项目依赖的渲染插件组合：

| 插件/模块 | 用途 | 项目封装入口 |
| --- | --- | --- |
| NVIDIA DLSS | DLSS-SR、DLSS-RR、DLAA | `UDLSSLibrary` 由 `UGameDLSSSubsystem` 调用。 |
| NIS | 非 RTX 或 DLSS 不可用时的 NVIDIA Image Scaling fallback | `UNISLibrary` 由 `UGameDLSSSubsystem` 调用。 |
| Streamline Core | Streamline feature 查询和 RHI 集成 | `UStreamlineLibrary`。 |
| Streamline DLSSG | DLSS Frame Generation / Multi Frame Generation | `UStreamlineLibraryDLSSG`。 |
| Streamline Reflex | Reflex 默认低延迟模式 | `UStreamlineLibraryReflex`。 |
| Streamline DeepDVC | DeepDVC CVar 支持 | 通常由 config 控制。 |

`UGameDLSSSubsystem::InitDLSS` 的初始化顺序：

1. 生成 DLSS Upscale 支持消息。
2. 根据硬件和配置选择默认 DLSS-SR/NIS 模式。
3. 生成 DLSS Ray Reconstruction 支持消息。
4. 生成 DLSS Frame Generation 支持消息。
5. 根据硬件选择默认 DLSS-FG 模式。
6. 设置默认 Reflex 模式。
7. 刷新 Upscale 状态。
8. 按 `UGameDLSSSettings` 设置 DLSS-RR。
9. 按 `UOrionSettingsLocal` 设置 DLSS-FG。

支持检测和 UI gating：

- DLSS-SR 使用 `UDLSSLibrary::IsDLSSSupported`、`QueryDLSSSupport` 和 minimum driver version。
- DLSS-RR 使用 `IsDLSSRRSupported`、`QueryDLSSRRSupport`。
- NIS 使用 `UNISLibrary::IsNISSupported`。
- DLSS-FG 使用 `UStreamlineLibraryDLSSG::IsDLSSGSupported` 和 `QueryDLSSGSupport`，错误原因包括硬件、驱动、系统、硬件调度、RHI、平台构建时支持和 API capture tool。
- Reflex 默认使用 `UStreamlineLibraryReflex::GetDefaultReflexMode`。
- DLSS-FG 不能只用硬件支持作为启用条件。还要检查项目级允许开关、目标模式是否支持、窗口是否处于前台、Reflex 默认模式是否可用；旧 `GameUserSettings.ini` 可能保存了 `bDLSSFGEnabled=True`。

模式应用规则：

- BuiltIn：关闭 DLSS 或 NIS，`r.ScreenPercentage 100`，恢复用户抗锯齿。
- DLSS Auto：根据 viewport 或屏幕分辨率调用 `GetDLSSModeInformation`，设置最佳 `r.ScreenPercentage`。
- DLSS DLAA：启用 DLSS-SR 且 screen percentage 100。
- DLSS Quality/Balanced/Performance 等：启用 DLSS-SR，使用插件返回的最佳 screen percentage。
- NIS：映射到 `UNISMode`，设置 NIS 后强制 TSR。

`DefaultEngine.ini` 的 DLSS/Streamline section：

- `[/Script/DLSS.DLSSSettings]`：编辑器 viewport、PIE、non-production binaries、NGX Application ID。
- `[/Script/StreamlineRHI.StreamlineSettings]`：debug overlay、Streamline feature 相关配置。
- `[/Script/Engine.RendererSettings]` 里的 DLSS/NIS/DeepDVC CVar 用于运行时默认行为。

## 配置层地图

| 配置 | 用途 | 典型内容 |
| --- | --- | --- |
| `Config/DefaultEngine.ini` `[/Script/Engine.RendererSettings]` | 全局渲染能力和默认 CVar | Lumen、RayTracing 默认、Nanite、Virtual Shadow Maps、Distance Fields、Virtual Texture、TSR、FSR/NIS/DLSS、Skin Cache、Hair、Volumetric、Water、Niagara、static lighting 开关。 |
| `Config/<Platform>/<Platform>Engine.ini` | 平台渲染和 RHI 覆盖 | Windows 中启用 RayTracing、PSO Precaching、ShaderPipelineCache、FSR3 DX12、sync、VT pool、`r.DynamicRes.OperationMode` 等。 |
| `Config/DefaultScalability.ini` | 画质等级 CVar | AntiAliasing、ViewDistance、Shadow、GI、Reflection、PostProcess、Texture、Effects、Foliage、Shading。 |
| `Config/DefaultDeviceProfiles.ini` | 设备 profile 默认值 | iOS/Android 设备 profile、移动帧率、整体画质限制、分辨率质量限制、安全区和移动渲染 CVar。 |
| `Config/DefaultEngine.ini` 平台 target settings | RHI 和 shader format | Windows 默认 DX12、D3D12 SM6、Vulkan SM6 等。 |
| `Config/<Platform>/<Platform>Game.ini` | 平台 Game 配置 | 移动平台可覆盖 `OrionPlatformSpecificRenderingSettings` 的 frame pacing；桌面平台可声明 `Platform.Trait.SupportsCustomDynamicResolution` 等 UI gating trait。 |
| `Config/<Platform>/<Platform>GameUserSettings.ini` | 用户设置初始默认 | fullscreen、window mode、可扩展本地用户默认值。 |

配置修改建议：

- 改 Lumen、Nanite、VSM、Distance Fields、Skin Cache、VT、全局 feature support，优先查 `DefaultEngine.ini`。
- 改 Windows RayTracing、PSO、ShaderPipelineCache、DX12/FSR sync，优先查 Windows `Engine.ini`。
- 改“低/中/高/极高/电影级”画质下的渲染命令，优先查 `DefaultScalability.ini`。
- 改移动端默认帧率、最大帧率、整体质量上限、分辨率质量推荐或设备 safe zone，优先查 `DefaultDeviceProfiles.ini`。
- 改玩家设置项的默认或保存，优先查 `UOrionSettingsLocal` 和平台 `GameUserSettings.ini`。

## RenderGraph / DistanceField 运行时报错

### FrontLayerTranslucency GBuffer ensure

现象：

- PIE 或 packaged build 首次进入场景后出现 `=== Handled ensure ===`。
- 日志包含 `FrontLayerTranslucencyGBuffer resources should only be created if any view will render in this pass` 或 `RenderGraphValidation`。

原因：

- Lumen translucent reflection 或 MegaLights front-layer translucency 请求了 front-layer GBuffer 资源。
- 当前 view 没有任何材质实际进入 `FrontLayerTranslucencyGBuffer` mesh pass，Renderer 仍创建资源时会触发 ensure。

项目侧修复顺序：

1. 先在 `DefaultEngine.ini` 的 renderer settings 关闭项目默认 front-layer 请求，例如 `r.Lumen.TranslucencyReflections.FrontLayer.EnableForProject=0` 和 `r.MegaLights.FrontLayerTranslucency.EnableForProject=0`。
2. 再在 `[ConsoleVariables]` 或对应平台配置中关闭运行时 override：`r.Lumen.TranslucencyReflections.FrontLayer.Allow=0`、`r.Lumen.TranslucencyReflections.FrontLayer.Enable=0`、`r.MegaLights.FrontLayerTranslucency.Allow=0`、`r.MegaLights.FrontLayerTranslucency.Debug.OverrideEnable=0`。
3. 检查 `DefaultScalability.ini`：高档 `ReflectionQuality` 和 `ShadowQuality` 可能重新把 Lumen/MegaLights front-layer CVar 打开；所有会被当前画质档应用的组都要覆盖。
4. 验证时不要只看启动日志；进入地图、等待旧问题触发窗口、停止 PIE 后再统计 `=== Handled ensure`、`FrontLayerTranslucencyGBuffer` 和 `RenderGraphValidation`。

### DistanceField `InverseFast` / `DoubleFloat.cpp`

现象：

- 日志持续出现 `LogUnrealMath: Error: TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix`。
- 调用栈指向 `FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers`、`DistanceFieldObjectManagement.cpp` 或 `DoubleFloat.cpp`。

原因：

- Distance Field object buffer 更新过程中遇到无效、奇异或超大世界坐标的 primitive transform。
- 这类错误常在加载完成后一段时间持续刷屏，容易造成编辑器卡顿。

项目侧修复顺序：

1. 先定位触发路径是 Distance Field AO、Distance Field Shadow、Global Distance Field 还是 Lumen software tracing，不要直接关闭整项工程能力。
2. 优先查实际 primitive：扫描注册的 primitive component 是否有 NaN、接近 0 的 scale、不可逆 transform、极大世界坐标或异常 bounds，再只修复对应资产、Actor 或组件。
3. 如果 ensure 前面有 `FStaticMeshRenderData::Serialize found NaN in Bounds of '<AssetPath>'`，先加载并重新保存日志点名的 StaticMesh 资产。很多情况下只是资产里旧序列化 render data / bounds 已损坏，重存能清掉后续 DistanceField object buffer 的 `InverseFast` 刷屏，不需要改全局 CVar。
4. 如果脚本尝试修改 StaticMesh LOD build settings 但值没有持久化，不要直接改成全局禁用；先确认“只重存资产”后的加载日志是否已经没有 `Serialize found NaN`、`DoubleFloat.cpp` 和 `InverseFast`。仍失败时再考虑用 `StaticMeshEditorSubsystem` 或重新导入资产。
5. 如果需要临时隔离，可以短时间禁用不需要的运行时使用方，例如 `r.DistanceFieldAO=0`、`r.DistanceFieldShadowing=0` 或 Global Distance Field 相关 CVar；但这类改动会改变 AO、阴影、Lumen software tracing 和整体亮度，不能作为默认长期修复。
6. 不要只写 `r.Lumen.TraceMeshSDFs=0`。还要检查实际运行值 `r.Lumen.TraceMeshSDFs.Allow`，因为高档 `GlobalIlluminationQuality` 可以把 `.Allow` 重新设为 1；如果确实临时禁用，需要在 `DefaultEngine.ini` 的 `[ConsoleVariables]` 和所有 GI Scalability 档位中同步覆盖。
7. 不要在仍使用 Lumen software tracing / global distance field shader permutation 的项目里贸然把 `r.GenerateMeshDistanceFields=False` 当成第一修复手段；这可能导致启动或 PIE 时缺少 Lumen distance-field shader permutation。
8. 修改渲染 CVar 后必须做画面回归，尤其检查整体曝光、AO、阴影、反射和室内亮度；如果画面明显变亮，优先回退过宽的 DistanceField/AO/GI 关闭，只保留针对实际 ensure 的窄范围 CVar。
9. 验证时统计 `FStaticMeshRenderData::Serialize found NaN`、`TMatrix<T>::InverseFast`、`LogUnrealMath: Error`、`DistanceFieldSceneData`、`DoubleFloat.cpp`，并确认停止 PIE 后编辑器仍响应。

## Scalability 和自动 benchmark

`DefaultScalability.ini` 由 `UOrionSettingsLocal::ApplyScalabilitySettings` 通过 `Scalability::SetQualityLevels` 应用。

当前画质组覆盖：

- `AntiAliasingQuality`：TAA 和 TSR history、update quality、flicker rejection、resurrection 等。
- `ViewDistanceQuality`：skeletal/static mesh LOD、occlusion wait、light draw distance、Lumen local lighting distance、translucency local light distance。
- `ShadowQuality`：CSM、DistanceField shadow/AO、VSM page/ray/sample、Nanite shadow LOD、capsule/contact shadow、foliage cascade shadow。
- `GlobalIlluminationQuality`：Lumen diffuse indirect、radiosity、trace mesh SDF、screen probe gather、radiance cache、surface cache、translucency volume。
- `ReflectionQuality`：Lumen reflections、radiance cache、trace mesh SDF、foliage、front layer translucency reflections。
- `PostProcessQuality`：motion blur、AO、DOF、bloom、lens flare、tonemapper、upscale。
- `TextureQuality`：mip bias、streaming pool、VT upload/pool/aniso、VHM。
- `EffectsQuality`：translucency、SSR、scene color format、material quality、SSS、SSGI、Niagara、volumetric cloud、heterogeneous volumes。
- `FoliageQuality`：foliage/grass density、cull distance、LOD、static mesh min LOD。
- `ShadingQuality`：Hair/TressFX 相关质量。

自动 benchmark 流程：

1. `UOrionFrontendStateComponent::FlowStep_TryRunBenchmarkAtStartup` 检查 `UOrionSettingsLocal::ShouldRunAutoBenchmarkAtStartup`。
2. 只有平台支持自动 benchmark 且还没有 `LastCPUBenchmarkResult` 时才启动。
3. `RunAutoBenchmark` 调用 `RunHardwareBenchmark`，再 `ApplyScalabilitySettings`。
4. 如果整体画质低于极高，当前封装会关闭 DLSS Upscale 并刷新 DLSS 状态。
5. 可选保存到用户设置。

### 编辑器打开地图较暗，PIE 后变亮

现象：

- 编辑器启动后直接打开地图，Level Viewport 画面偏暗。
- 运行一次 PIE / Simulate 后，不改灯光资产，整体画面变亮，像天空光、定向光、Lumen GI 或阴影路径发生变化。
- 把 `Config/<Platform>` 拷到只有场景的测试工程后也复现时，优先按平台 `Engine.ini` 渲染覆盖排查。

排查顺序：

1. 先查 `Config/<Platform>/<Platform>Engine.ini`，重点看 `r.RayTracing`、`r.Lumen.HardwareRayTracing`、`r.PSOPrecaching`、`r.PSOPrecache.*` 和 `r.ShaderPipelineCache.*`。
2. 再查启动日志里的 `Set CVar [[r.RayTracing:*]]`、`Set CVar [[r.Lumen.HardwareRayTracing:*]]`、`Ray tracing is enabled` 和 `r.PSOPrecache.ProxyCreationWhenPSOReady` 弃用 warning，确认平台覆盖是否真实生效。
3. 对比 `UOrionSettingsLocal::GetRTXEnabled()` 默认值和 `FOrionGameRenderManager::SetupRTX()`。如果本地 RTX 默认关闭，但平台启动配置先打开 `r.Lumen.HardwareRayTracing=1`，第一次 PIE 会把它改回 0，编辑器视口就会表现成“运行一次后变亮”。
4. 窄修复优先保持 `r.RayTracing=True` 以保留运行时 RTX 支持，同时在平台 `Engine.ini` 覆盖 `r.Lumen.HardwareRayTracing=0`，让编辑器首次打开和默认 `bRTXEnabled=False` 状态一致。玩家开启 RTX 时，现有 runtime toggle 再把 Lumen hardware RT 打开。
5. 如果问题仍存在，再单独验证 PSO。UE 5.8 中旧 `r.PSOPrecache.ProxyCreationWhenPSOReady=1` 会被翻译成 `r.PSOPrecache.ProxyCreationStrategy=1`，即 PSO 未完成时延迟创建 render proxy；但 editor 下组件级 PSO precaching 通常受 `GIsEditor` 禁用，不要在没有日志或源码证据时把它当作第一修复。

验证：

1. 重启编辑器，直接打开目标地图，不运行 PIE，等待几秒确认画面稳定。
2. 最新日志应显示 `r.RayTracing` 仍按目标平台启用，而 `r.Lumen.HardwareRayTracing` 的启动值与默认 RTX 设置一致。
3. 再运行一次 PIE 并退出，确认 PIE 前后画面没有明显亮度跳变。

移动端 DeviceProfile 帧率/画质规则：

- `Game.DeviceProfile.Mobile.DefaultFrameRate` 是设备首次或默认目标帧率。
- `Game.DeviceProfile.Mobile.MaxFrameRate` 是设备允许的最大移动帧率。
- `Game.DeviceProfile.Mobile.OverallQualityLimits` 表示某帧率下的整体画质上限，例如高刷新率限制更低画质。
- `Game.DeviceProfile.Mobile.ResolutionQualityLimits` 和 `ResolutionQualityRecommendation` 约束或推荐 `sg.ResolutionQuality`。
- `UOrionSettingsLocal` 在设置移动 FPS 或整体质量时会 clamp / remap quality。新增移动 profile 后必须验证设置页、实际 CVar 和 `Scalability::GetQualityLevels()` 一致。

## PSO Precaching 和 Bundled PSO

两套机制要分清：

- PSO Precaching：运行时根据对象和材质预测需要的 PSO，并异步编译。由 `r.PSOPrecaching`、`r.PSOPrecache.*`、`PipelineStateCache` 和 `PSOPrecache` 管。
- Bundled PSO cache：从 packaged build 运行日志记录 `.rec.upipelinecache`，结合 cook 生成的 `.shk` 转成 `.spc`，放进下一次 cook/package 的 pipeline cache 目录。

Windows 平台 PSO 关键配置：

- `[DevOptions.Shaders] NeedsShaderStableKeys=true`
- `r.PSOPrecaching=1`
- `r.PSOPrecache.ProxyCreationStrategy=1`
- `r.ShaderPipelineCache.Enabled=1`
- `r.ShaderPipelineCache.StartupMode=2`
- `r.ShaderPipelineCache.BatchSize`、`BatchTime`
- `r.ShaderPipelineCache.BackgroundBatchSize`、`BackgroundBatchTime`
- `r.ShaderPipelineCache.PrecompileBatchSize`、`PrecompileBatchTime`
- `r.ShaderPipelineCache.SaveAfterPSOsLogged`
- `r.ShaderPipelineCache.AutoSaveTime`
- `r.ShaderPipelineCache.AutoSaveTimeBoundPSO`
- `r.ShaderPipelineCache.PreOptimizeEnabled`
- `r.ShaderPipelineCache.MinBindCount`
- `r.ShaderPipelineCache.MaxPrecompileTime`

引擎源码关系：

- `FShaderPipelineCache` 提供 `SetBatchMode`、`ResumeBatching`、`PauseBatching`、`NumPrecompilesRemaining`、`SavePipelineFileCache`。
- `FShaderPipelineCache::BatchMode::Fast` 适合加载屏或视频播放时加速预编译。
- `BatchMode::Background` 适合交互菜单、前台 UI 或需要避免卡顿的时段。
- `NumPrecompilesRemaining` 同时加上 active PSO precache requests，可用于控制加载屏是否继续显示。
- `PipelineStateCache::IsPSOPrecachingEnabled` 在 editor 下默认 false，非 editor 还要看 RHI 是否支持。
- `r.PSOPrecache.Validation=1/2` 可验证 miss/hit/too late 等情况；开发构建中使用 `stat PSOPrecache` 观察。

项目启动流程：

1. `UOrionLoadingScreenManager::SetIsStartUpLoadingScreen` 在启动加载屏阶段把 ShaderPipelineCache 设为 `Background`，防止加载视频卡顿。
2. `UOrionFrontendStateComponent::FlowStep_TryCompileShaders` 调用 `CheckIfCompileShaders`。
3. 只有启动加载屏存在且 `FShaderPipelineCache::NumPrecompilesRemaining() > 0` 时才显示编译 shader UI。
4. 用户/蓝图触发 `StartCompileShaders` 后，`ULoadingScreenManager::StartCompileShaders` 切到 `Fast` 并 `ResumeBatching`。
5. `ULoadingScreenManager::Tick` 在剩余数量为 0 时执行 `OnCompilingShadersFinished`。
6. `UOrionFrontendStateComponent` 用 ticker 计算百分比并继续前端流程。

Bundled PSO 收集和注入模板：

```powershell
# 1. 用打包后的游戏启动参数收集 PSO。
<PackagedGameExe> -logPSO

# 2. 把收集到的 *.rec.upipelinecache 和 cook 生成的 *.shk 放入 CollectedPSOs。

# 3. 用 UnrealEditor-Cmd 的 ShaderPipelineCacheTools 转换为 stable pipeline cache。
<EngineRoot>/Engine/Binaries/Win64/UnrealEditor-Cmd.exe -run=ShaderPipelineCacheTools expand `
  <ProjectRoot>/CollectedPSOs/*.rec.upipelinecache `
  <ProjectRoot>/CollectedPSOs/*.shk `
  <ProjectRoot>/CollectedPSOs/PSO_<ProjectName>_<ShaderFormatName>.spc

# 4. 把生成的 .spc 放到下一次 cook 会读取的位置。
<ProjectRoot>/Build/<Platform>/PipelineCaches/PSO_<ProjectName>_<ShaderFormatName>.spc

# 5. 重新 cook/package，并在打包日志里确认 pipeline cache 被处理。
```

完整自动化流程、脚本入口、所有地图/画质漫游收集和打包前提示规则，读取 `../orion-pso-caching/SKILL.md` 与 `../orion-pso-caching/references/pso-full-workflow.zh-CN.md`。

清理驱动 PSO cache 的测试规则：

- UE 5.6 以上 D3D12 支持启动参数 `-clearPSODriverCache`。
- NVIDIA 常见目录是 `%LOCALAPPDATA%/NVIDIA/DXCache`，新驱动还可能使用 `%LOCALAPPDATA%/../LocalLow/NVIDIA/PerDriverVersion/DXCache`。
- AMD 和 Intel 也有各自 LocalAppData/LocalLow cache 目录。
- 清理驱动 cache 只用于评估首跑 shader hitch，不作为普通用户流程。

PSO 验证：

- 每次换 RHI、shader format、重要材质/渲染路径、Scalability 组合或地图覆盖范围，都重新收集。
- D3D12 的 `.spc` 不可用于 Vulkan；D3D11 手动 bundled PSO 支持有限，先查当前引擎文档和 RHI 源码。
- `.spc` 是内容和 shader key 相关资产；过期或覆盖不足会增加加载时间或导致 miss。
- 采样时覆盖不同地图、天气/昼夜、角色/武器/特效、UI 场景、Scalability 质量、DLSS/RTX 组合。
- 用 `r.PSOPrecache.Validation=2`、`stat PSOPrecache`、启动阶段 `NumPrecompilesRemaining` 和实际 hitch 证据一起判断。

## 常见任务模板

### 添加一个渲染 CVar 开关

1. 查该 CVar 是否属于 renderer settings、scalability、platform override 还是 runtime user setting。
2. 如果是固定项目能力，写 `DefaultEngine.ini` 或平台 `Engine.ini`。
3. 如果要进画质档，写 `DefaultScalability.ini` 对应组。
4. 如果是玩家可调，扩展 `UOrionSettingsLocal`、`GameSettingRegistry_Video.cpp` 和必要 subsystem。
5. 验证实际 CVar source，必要时用控制台 `r.<Name>` 或日志确认。

### 添加 DLSS 相关设置

1. 先查 NVIDIA plugin header 是否已有 Blueprint/function library API。
2. 在 `UGameDLSSSubsystem` 内封装支持检测、默认值、mode 映射和实际应用。
3. 在 `UOrionSettingsLocal` 保存用户选择。
4. 在自定义 `UGameSettingValueDiscreteDynamic_*` 中根据 supported modes 填充 UI。
5. 在 `GameSettingRegistry_Video.cpp` 用 support message 和 dependency 管 UI 状态。
6. 验证无支持硬件、旧驱动、非目标 RHI、capture tool 等禁用路径。

### 调整启动 shader 编译体验

1. 查 `WindowsEngine.ini` 的 ShaderPipelineCache 参数。
2. 查 `UOrionLoadingScreenManager` 和 `ULoadingScreenManager` 的 batch mode 切换。
3. 查 `UOrionFrontendStateComponent` 的前端 flow、percent ticker 和回调绑定。
4. 不要让视频加载屏和 `Fast` 预编译互相抢资源；启动视频阶段使用 `Background`，进入专门编译 UI 后再 `Fast`。
5. 用 packaged build 验证，editor 下 PSO Precaching 可能被引擎禁用。

## 官方参考

- [Manually Creating Bundled PSO Caches](https://dev.epicgames.com/documentation/en-us/unreal-engine/manually-creating-bundled-pso-caches-in-unreal-engine)
- [PSO Precaching](https://dev.epicgames.com/documentation/en-us/unreal-engine/pso-precaching-for-unreal-engine)
- [Optimizing Rendering With PSO Caches](https://dev.epicgames.com/documentation/en-us/unreal-engine/optimizing-rendering-with-pso-caches-in-unreal-engine)
- [Game Engines and Shader Stuttering](https://www.unrealengine.com/zh-CN/tech-blog/game-engines-and-shader-stuttering-unreal-engines-solution-to-the-problem)

## 验证清单

- 已确认目标平台、RHI、ShaderFormat 和构建配置。
- 已读取实际 `DefaultEngine.ini`、平台 `Engine.ini`、`DefaultScalability.ini` 和相关 Game/UserSettings 配置。
- 移动端任务已读取 `DefaultDeviceProfiles.ini`，并核对 `Game.DeviceProfile.Mobile.*` CVar。
- 已确认代码入口属于 `OrionGame` 或 GameFeature，不改 GameCore，除非用户明确允许。
- DLSS/NIS/Streamline 设置通过项目 DLSS subsystem 接入。
- AA method 与 DLSS Upscale 的 TSR 约束一致。
- Display/HDR/DynamicResolution 设置同时验证 UI gating、RHI 能力和实际 CVar。
- PSO `.rec.upipelinecache`、`.shk`、`.spc` 文件名使用占位模板，不泄漏项目名。
- 修改 PSO 后重新 cook/package，并验证 bundled cache 被打入目标构建。
- 运行时验证包括无 DLSS 硬件、RTX 不支持、不同 Scalability、首跑清驱动 cache 和二次启动驱动 cache 命中。
