# PSO 学习笔记和 UE 5.8 源码要点

## 资料范围

- Tom Looman: Setting up PSO Precaching & Bundled PSOs for Unreal Engine.
- Epic 技术博客: Game Engines and Shader Stuttering: Unreal Engine's Solution to the Problem.
- Epic 社区教程: Game Engines & Shader Stuttering: UE's Solution.
- UE 5.8 官方文档: PSO Precaching、Optimizing Rendering With PSO Caches、Manually Creating Bundled PSO Caches.
- YouTube: `NVoXDgXKS5k` 是 bundled PSO 收集/转换实操参考；`8h1k2ViADgU` 是显示编译 shader 数量/进度的 UI 参考。网页工具只能读取标题/摘要，关键结论仍以 UE 5.8 文档、源码和项目代码为准。
- UE 5.8 源码：`RenderCore/ShaderPipelineCache.*`、`Engine/PSOPrecache.*`、`RHI/PipelineStateCache.*`、`D3D12RHI/WindowsD3D12Device.cpp`、`UnrealEd/ShaderPipelineCacheToolsCommandlet.cpp`。

## 基本概念

- PSO 是 GPU 执行一次 draw/dispatch 前需要的一整套管线状态；在 D3D12、Vulkan、Metal 这类现代图形 API 中，驱动看到完整状态后才能生成 GPU 可执行代码。
- PC 上 GPU 厂商、架构和驱动版本差异很大，游戏只能随包发布通用 shader bytecode；最终机器码通常由玩家机器上的驱动在运行时生成。
- 首次遇到未编译 PSO 时，驱动编译可能耗费几十到数百毫秒，导致 shader stutter。
- 主机平台硬件固定，很多 shader/PSO 能在 cook 或平台工具链阶段完成，因此 PC 上更需要 runtime precache、driver cache 和 bundled cache。

## 两套 UE 系统

### Runtime PSO Precaching

- 目标是在对象加载或组件准备渲染前，根据材质、Vertex Factory、Mesh Pass 和渲染状态预测可能需要的 PSO，并异步编译。
- UE 5.8 入口包括 `UPrimitiveComponent::PrecachePSOs()`、`CollectPSOPrecacheData()`、`PrecacheMaterialPSOs()`、`PSOPrecache.cpp` 和 `PipelineStateCache`。
- `IsComponentPSOPrecachingEnabled()` 要求 `FApp::CanEverRender()`、RHI 支持、组件/资源预缓存开关有效，并且 `!GIsEditor`；因此 PIE/Editor 不是完整验证环境，packaged 或 standalone non-editor build 更可信。
- UE 5.8 中旧 CVar `r.PSOPrecache.ProxyCreationWhenPSOReady` / `r.PSOPrecache.ProxyCreationDelayStrategy` 已弃用，会被翻译为 `r.PSOPrecache.ProxyCreationStrategy`：
	- `0`: 不等待 PSO，照常创建 proxy。
	- `1`: PSO 未完成时延迟创建 proxy。
	- `2`: PSO 未完成时先用 fallback material。
- `r.PSOPrecache.Validation=2` 可用于分析 missed / hit / too late；`stat PSOPrecache` 通常只在 non-editor build 有意义。

### Bundled PSO Cache

- 目标是人工或自动游玩 packaged build，把真实遇到的 graphics PSO 记录为 `.rec.upipelinecache`，结合 cook 生成的 stable shader keys `.shk` 转成 `.spc`，让下一次 cook/package 生成包内 stable pipeline cache。
- `.rec.upipelinecache` 记录运行时实际绑定过的 PSO，里面的 shader 使用 SHA/hash 标识。
- `.shk` 是 cook 产物，保存稳定 shader key，例如材质、Vertex Factory、shader type 等跨 build 相对稳定的描述。
- `.spc` 是 stable PSO cache 输入文件，放到 `Build/<Platform>/PipelineCaches` 后，Cook 会用 `UShaderPipelineCacheToolsCommandlet build` 生成随包发布的 stable `.upipelinecache`。
- `.stable.upipelinecache` 是运行时读取的 bundled cache 输出形态。正常情况下它由 Cook 从 `.spc + .shk` 生成并 Stage；本项目 UE 5.8 `.spc` 读回失败时，可以用项目 commandlet 直接从 `.rec.upipelinecache` 生成 `Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache` 作为临时绕过。
- Bundled PSO 只覆盖采集期间真正出现的内容。切换地图、画质、天气、材质变体、特效、UI、武器、角色皮肤、DLSS/RTX/Scalability 都可能产生不同 PSO。
- Runtime PSO Precaching 与 bundled PSO 可以同时使用。实际项目通常用 precache 兜住大部分材质对象，用 bundled cache 捕获全局 shader、漏网路径、特殊特效和验证中发现的 miss。

## 官方配置要点

- 平台 Engine 配置推荐放在 `Config/<Platform>/<Platform>Engine.ini`，避免其他平台误吃 PSO 设置。
- 必需：
	- `[DevOptions.Shaders] NeedsShaderStableKeys=true`
	- `[/Script/Engine.RendererSettings] r.ShaderPipelineCache.Enabled=1`
	- `[/Script/UnrealEd.ProjectPackagingSettings] bShareMaterialShaderCode=True`
	- `[/Script/UnrealEd.ProjectPackagingSettings] bSharedMaterialNativeLibraries=True`
- Runtime precaching：
	- `r.PSOPrecaching=1`
	- UE 5.8 用 `r.PSOPrecache.ProxyCreationStrategy=1` 或 `2`，不要继续新增旧的 `ProxyCreationWhenPSOReady`。
- 记录：
	- 打包版启动参数加 `-logPSO`。
	- 首跑测试加 `-clearPSODriverCache`，避免误用驱动缓存。
	- `r.ShaderPipelineCache.SaveAfterPSOsLogged`、`AutoSaveTime`、`AutoSaveTimeBoundPSO` 控制记录保存时机；UE 5.8 源码注释显示默认自动保存策略偏保守，因此流程脚本应在退出后主动搜集 Saved 下的 `.upipelinecache`。

## UE 5.8 源码结论

### `FShaderPipelineCache`

- 声明位于 `RenderCore/Public/ShaderPipelineCache.h`，实现位于 `RenderCore/Private/ShaderPipelineCache.cpp`。
- 关键 API：
	- `SetBatchMode(BatchMode)`：切换 `Fast`、`Background`、`Precompile` 等模式。
	- `PauseBatching()` / `ResumeBatching()`：暂停或恢复包内 cache 预编译。
	- `NumPrecompilesRemaining()`：返回剩余预编译数量，适合驱动加载屏或前端编译 shader UI。
	- `SavePipelineFileCache()`：保存记录。
	- `GetGameVersionForPSOFileCache()`：从 `[ShaderPipelineCache.CacheFile] GameVersion` 读取版本；没有配置时回退引擎/构建 changelist。
- `NumPrecompilesRemaining()` 每个进程启动都会基于当前打开的 bundled/user pipeline cache 重新统计待预编译 PSO；它不能证明驱动机器码缓存是否已经持久化。驱动缓存存在时这一步通常很快，异常退出导致驱动缓存未落盘时则可能看起来像“全部重新编译”。
- UE 5.8 的 Windows D3D12 源码里 `D3D12.PSO.DiskCache` 和 `D3D12.PSO.DriverOptimizedDiskCache` 默认是 `0` 且 ReadOnly，源码注释说明旧 D3D12 RHI PSO file cache 已不再作为推荐路径，应使用 `FPipelineFileCacheManager` / `FShaderPipelineCache`。不要为了这个问题直接把这两个 CVar 改成 `1`。
- UE 5.8 只在 iOS 的 `FPipelineFileCacheManager::PreCompileComplete()` 中写本地 `usecache.txt` 完成标记；Windows 没有同等完成标记。项目侧若用启动 UI 阻塞等待 `NumPrecompilesRemaining()==0`，应自行记录“当前 bundled cache 已完成一次”的标记，并用 stable cache 指纹让新包或新 PSO 文件自动失效。
- 启动模式：
	- `0`: Paused，需要代码调用 `ResumeBatching()`。
	- `1`: Fast，适合加载屏、非交互阶段。
	- `2`: Background，适合菜单/前台 UI。
	- `3`: Precompile，先按 `PreCompileMask` 快速编译一部分，再后台处理其余。
- `-logpso` 会强制开启 bound PSO log；保存模式为 `BoundPSOsOnly`。

### `PSOPrecache`

- 实现位于 `Engine/Private/PSOPrecache.cpp`。
- `IsComponentPSOPrecachingEnabled()` 和 `ProxyCreationWhenPSOReady()` 都排除 `GIsEditor`，所以 Editor 下的直观表现不能代表 packaged build。
- `UPrimitiveComponent::PrecachePSOs()` 只在 Game Thread 收集并持有 material，避免异步预缓存时对象被 GC。
- 派生组件优先覆盖 `CollectPSOPrecacheData()`，而不是直接重写所有流程。
- 自定义 Vertex Factory 需要声明支持 PSO precaching，并实现 `GetPSOPrecacheVertexFetchElements()` 或在组件侧提供明确 vertex element set。
- Mesh Pass Processor 要实现 `CollectPSOInitializers()`，其逻辑应尽量复用 `AddMeshBatch` 的关键状态计算。

### Driver cache 清理

- D3D12 UE 5.8 源码中 `-clearPSODriverCache` 会按 GPU 厂商清理：
	- NVIDIA: `%LOCALAPPDATA%/NVIDIA/DXCache` 和 `%LOCALAPPDATA%/../LocalLow/NVIDIA/PerDriverVersion/DXCache`。
	- AMD: LocalAppData / LocalLow 下的 `AMD/DxCache` 和 `AMD/DxcCache`。
	- Intel: LocalLow 下的 `Intel/ShaderCache`。
	- Qualcomm: `%LOCALAPPDATA%/D3DSCache` 递归删除。
- Vulkan 也识别 `clearPSODriverCache`，会清理 Vulkan RHI 的 binary program cache。
- 不要手动删除不确定目录；优先用 UE 参数触发引擎内清理。

### `ShaderPipelineCacheTools` commandlet

- UE 5.8 stable key 扩展名是 `.shk`。
- `ShaderPipelineCacheTools expand` 接受多个 `.upipelinecache` 和多个 `.shk`，输出 `.spc`。
- `ShaderPipelineCacheTools build` 在 cook 阶段接收 `.spc`、`.shk` 和输出 `.stable.upipelinecache`。
- UE 5.8 源码中当前正式 stable PSO 扩展名是 `.spc`，`stablepc.csv` / `stablepc.csv.compressed` 是旧文本格式；`BuildPSOSC` 会优先按 `.spc` 二进制路径调用 `UE::PipelineCacheUtilities::LoadStablePipelineCacheFile()`，文本格式会输出 deprecated warning。
- `.spc` 内部用 `FStablePipelineCacheSerializedHeader`、稳定 shader key 表、PSO permutation 组和压缩数据保存；保存路径是 `SaveStablePipelineCacheFile()`，读取路径是 `LoadStablePipelineCacheFile()`。这不是普通 CSV，也不适合用脚本手工改二进制。
- `UCookOnTheFlyServer::CreatePipelineCache()` 会先扫描 `Build/<Platform>/PipelineCaches/*<LibraryName>_<ShaderFormat>.spc`，没有 `.spc` 时还会扫描旧的 `.stablepc.csv(.compressed)`。如果存在输入文件，Cook 会先删除 `Content/PipelineCaches/<Platform>/<LibraryName>_<ShaderFormat>.stable.upipelinecache`，再运行 `ShaderPipelineCacheTools build` 重建。
- `r.ShaderPipelineCacheTools.IncludeComputePSODuringCook` 默认可能让 Cook 在没有 `.spc` 输入时仍运行 `ShaderPipelineCacheTools build` 来补 compute PSO。direct stable 绕过流程必须把它设为 `0`，否则 Cook 可能删除手工生成的 `Content/PipelineCaches` cache。
- `CopyBuildToStagingDirectory.Automation.cs` 有自动 Stage `Content/PipelineCaches/<SC.PlatformDir>/*.upipelinecache` 的逻辑，但本项目 Win64 打包验证中没有自动匹配到 `Content/PipelineCaches/Windows`。direct stable 流程必须在 `ProjectPackagingSettings` 加 `+DirectoriesToAlwaysStageAsUFS=(Path="PipelineCaches")`，以 UFS manifest 作为最终证据。
- 关键日志：
	- `Running UShaderPipelineCacheToolsCommandlet`
	- `With Args: build ...`
	- `Loading ... ShaderStableInfo-Global-<ShaderFormat>.shk`
	- `Loaded ... stable PSOs`
	- `Number of PSOs after sanity checks`
	- `Wrote ... binary PSOs ... stable.upipelinecache`

### 本项目 2026-06-25 验证结论

- `.spc` 是 UE 5.8 正式打包格式，应该放在 `Build/Windows/PipelineCaches`；`.stablepc.csv.compressed` 只保留为旧文本诊断格式，不作为本项目正式流程。
- 当前收集到的 `.rec.upipelinecache` 与 UE 5.8 installed build 的 `expand -> build` 路径存在读回兼容问题：按画质分组生成的 `.spc` 全部 `build` 失败；单个 `.rec.upipelinecache` 生成的 `.spc` 也可复现 `PipelineCacheUtilities.cpp:205` 或 `PipelineFileCache.cpp:1424` 断言。
- 类型筛选验证结论：只保留传统 graphics、只保留 mesh graphics、只保留 compute、去掉 compute 或去掉 mesh 都不能让 `.spc` 读回通过；因此问题不是单一 PSO 类型导致。
- 旧文本格式验证结论：UE 5.8 `expand` 能生成 `.stablepc.csv.compressed`，但 Cook 的 `BuildPSOSC` 会报 `not in the correct format (GraphicsDesc)` 并失败；因此不能把它作为 `.spc` 的 fallback。
- 因此正式转换脚本必须在移动 `.spc` 到 `Build/Windows/PipelineCaches` 前执行一次 `ShaderPipelineCacheTools build` 读回验证。验证失败时不要把 `.spc` 放入 Build，否则下一次 Cook 会在相同 commandlet 中崩溃。
- 当前项目可执行绕过：用 `OrionPSOFilter` commandlet 合并 `CollectedPSOs/*.rec.upipelinecache`，写出 `Content/PipelineCaches/Windows/InfernoHeart_PCD3D_SM6.stable.upipelinecache`；同时确保 `Build/Windows/PipelineCaches` 没有 `.spc/.stablepc*`，在 `Config/Windows/WindowsEngine.ini` 设置 `r.ShaderPipelineCacheTools.IncludeComputePSODuringCook=0`，并在 `Config/DefaultGame.ini` 设置 `+DirectoriesToAlwaysStageAsUFS=(Path="PipelineCaches")`。

## 当前项目链路

- 平台 Windows 配置已经启用 stable keys、PSO precaching 和 ShaderPipelineCache。
- 启动加载链路：
	1. `UOrionLoadingScreenManager::SetIsStartUpLoadingScreen` 把 `FShaderPipelineCache` 切到 `Background`，避免启动视频/加载 UI 卡顿。
	2. `UOrionFrontendStateComponent::FlowStep_TryCompileShaders` 调用 `CheckIfCompileShaders()`。
	3. `CheckIfCompileShaders()` 在启动加载屏期间检查 `FShaderPipelineCache::NumPrecompilesRemaining()`。
	4. `StartCompileShaders()` 绑定完成回调、调用 `ULoadingScreenManager::StartCompileShaders()`，后者切到 `Fast` 并 `ResumeBatching()`。
	5. `ULoadingScreenManager::Tick()` 在剩余数量为 0 时广播完成，前端继续流程。
- Windows 启动 PSO UI 需要项目侧完成标记：
	- 完成标记写入用户配置，键值应包含 `FShaderPipelineCache::GetGameVersionForPSOFileCache()`、当前平台、当前 shader format、`Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache` 的文件大小和时间戳。
	- Windows `FPlatformProperties::RequiresCookedData()` 在非编辑器 game-only/client 构建中为 `true`，在 Editor 中为 `false`；适合用来避免 PIE/Editor 写入或读取启动 PSO 完成标记。
	- 标记匹配时，不再阻塞前端流程弹出“编译着色器”UI；让 `StartupMode=2` / `Background` 继续处理剩余 PSO，避免异常退出后下一次启动又强制等待全量 bundled PSO。
	- 标记不匹配、stable cache 文件变化、新包、新 GameVersion 或第一次运行时，仍然阻塞等待一次完整启动 PSO 预编译。
	- 带 `-clearPSODriverCache`、`-deleteuserpsocache` 或 `-logPSO` 启动时必须忽略该标记，确保 PSO 验证、清缓存首跑和收集流程能真实执行。
- 这说明“每次启动游戏都会查询 PSO 着色器是否编译完成”已经有项目侧实现，后续要验证 packaged build 而不是只看 Editor。

## 实践要点

- 采集必须覆盖所有会影响 PSO 的运行时状态：地图、画质、材质质量、阴影/GI/反射、特效、UI、角色/武器、天气/昼夜、DLSS/RTX/TSR 等。
- 所有画质档建议至少覆盖 `Low/Medium/High/Epic/Cinematic` 对应 `sg.*Quality=0..4`。
- 自动漫游只是采集基础覆盖率；复杂玩法、按键触发特效、UI 弹窗、伤害屏幕效果、武器开火、角色换装等仍需要脚本、测试关卡或人工补采。
- `.spc` 与平台、RHI、shader format、内容和渲染配置绑定；不要跨 D3D12/Vulkan/D3D11 或 SM5/SM6 混用。
- 如果 conversion 失败，先确认 `.rec.upipelinecache`、同一 shader format 的 `.shk` 是否来自同一代 cook；不要把 SM5 和 SM6 的 stable keys 混在同一次转换里。
- 如果包里已有 `.spc` 但仍卡顿，先看日志是否打开 cache 且 entries/tasks 不为 0，再用 `-logPSO` 看是否大量 `Encountered a new graphics PSO`。

## 参考链接

- Tom Looman: https://tomlooman.com/unreal-engine-psocaching/
- Epic 技术博客: https://www.unrealengine.com/tech-blog/game-engines-and-shader-stuttering-unreal-engines-solution-to-the-problem
- Epic 社区教程: https://dev.epicgames.com/community/learning/tutorials/xjzE/unreal-engine-epic-for-indies-game-engines-shader-stuttering-ue-s-solution
- UE 5.8 PSO Precaching: https://dev.epicgames.com/documentation/unreal-engine/pso-precaching-for-unreal-engine
- UE 5.8 Bundled PSO: https://dev.epicgames.com/documentation/unreal-engine/manually-creating-bundled-pso-caches-in-unreal-engine
- UE 5.8 PSO Caches overview: https://dev.epicgames.com/documentation/unreal-engine/optimizing-rendering-with-pso-caches-in-unreal-engine
- YouTube bundled PSO 实操: https://www.youtube.com/watch?v=NVoXDgXKS5k
- YouTube shader compile count UI: https://www.youtube.com/watch?v=8h1k2ViADgU
