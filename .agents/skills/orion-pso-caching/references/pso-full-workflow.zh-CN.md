# PSO 全流程操作手册

## 触发词

用户说这些内容时，直接进入本流程，不要只给建议：

- 打包并收集着色器
- 收集 PSO / 收集着色器 / PSO 打包
- 预编译着色器 / shader stutter / PSO 卡顿
- 清除 PSO 缓存 / `-clearPSODriverCache`
- `CollectedPSOs`、`PipelineCaches`、`.rec.upipelinecache`、`.spc`、`.shk`

普通“打包”请求也要提示用户是否需要同步收集 PSO；如果用户确认，执行本流程。

## 收集范围选择

用户触发“收集 PSO / 打包并收集着色器 / 收集着色器”但没有明确范围时，先让用户选择，不要默认直接跑全量：

1. 收集全部地图的 PSO：使用 `-CollectionMode All`，耗时最长，但覆盖最完整。
2. 增量收集：使用 `-CollectionMode Incremental`。脚本扫描全部地图，优先读取每张 `.umap` 的 git 最新提交时间；如果项目没有 git、文件未跟踪、git 查询失败，或地图存在未提交变更，则保守使用文件修改时间。若 `CollectedPSOs` 中该地图每个目标画质都有更新于地图时间的 `.rec.upipelinecache`，跳过；缺失或过期则重新收集该地图。
3. 指定地图收集：使用 `-CollectionMode Maps -Maps <MapNameOrPath>`，只收集用户给出的地图名、包路径或 `.umap` 文件路径。多个地图可传数组；也可以用 `-MapListPath` 传列表文件。

如果用户已经明确说“全量/全部地图”，直接用模式 1；说“增量/只收集改动/检查最新”，直接用模式 2；给出地图名或路径，直接用模式 3。

## 一次完整流程

1. **检查配置**
	- 运行：
		```powershell
		powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-pso-caching\scripts\Test-PsoSetup.ps1 -ProjectRoot <ProjectRoot>
		```
	- 必须满足：
		- `Config/<Platform>/<Platform>Engine.ini`: `NeedsShaderStableKeys=true`
		- `Config/<Platform>/<Platform>Engine.ini`: `r.PSOPrecaching=1`
		- `Config/<Platform>/<Platform>Engine.ini`: `r.ShaderPipelineCache.Enabled=1`
		- `Config/DefaultGame.ini`: `bShareMaterialShaderCode=True`
		- `Config/DefaultGame.ini`: `bSharedMaterialNativeLibraries=True`
	- UE 5.8 推荐使用 `r.PSOPrecache.ProxyCreationStrategy=1`，不要新增旧 CVar `r.PSOPrecache.ProxyCreationWhenPSOReady`。

2. **第一次 cook/package**
	- 使用 `../orion-packaging/SKILL.md` 的 Steam Windows 打包流程。
	- Cook 完成后，确认存在：
		```text
		Saved/Cooked/<Platform>/<ProjectName>/Metadata/PipelineCaches/ShaderStableInfo-Global-<ShaderFormat>.shk
		Saved/Cooked/<Platform>/<ProjectName>/Metadata/PipelineCaches/ShaderStableInfo-<ProjectName>-<ShaderFormat>.shk
		```
	- 只复制目标 shader format，例如 `PCD3D_SM6`；不要把 SM5 和 SM6 混在一起转换。

3. **复制 `.shk` 到 `CollectedPSOs`**
	- Cook 后只准备 stable keys，不启动游戏：
		```powershell
		powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-pso-caching\scripts\Collect-PSOs-Windows.ps1 `
			-ProjectRoot <ProjectRoot> `
			-ShaderFormat PCD3D_SM6 `
			-CopyStableKeysOnly
		```
	- 完整收集时 `Collect-PSOs-Windows.ps1` 也会在启动 packaged game 前自动复制；也可以手动复制：
		```text
		<ProjectRoot>/CollectedPSOs/ShaderStableInfo-Global-<ShaderFormat>.shk
		<ProjectRoot>/CollectedPSOs/ShaderStableInfo-<ProjectName>-<ShaderFormat>.shk
		```

4. **运行 packaged game 记录 PSO**
	- 全量自动流程：
		```powershell
		powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-pso-caching\scripts\Collect-PSOs-Windows.ps1 `
			-ProjectRoot <ProjectRoot> `
			-PackageRoot <PackageRoot> `
			-ShaderFormat PCD3D_SM6 `
			-CollectionMode All `
			-AdditionalArgs "-CustomConfig=Steam" `
			-RoamSeconds 90 `
			-CaptureGrid 5
	```
	- 增量流程：
		```powershell
		powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-pso-caching\scripts\Collect-PSOs-Windows.ps1 `
			-ProjectRoot <ProjectRoot> `
			-PackageRoot <PackageRoot> `
			-ShaderFormat PCD3D_SM6 `
			-CollectionMode Incremental `
			-AdditionalArgs "-CustomConfig=Steam" `
			-RoamSeconds 90 `
			-CaptureGrid 5
		```
	- 指定地图流程：
		```powershell
		powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-pso-caching\scripts\Collect-PSOs-Windows.ps1 `
			-ProjectRoot <ProjectRoot> `
			-PackageRoot <PackageRoot> `
			-ShaderFormat PCD3D_SM6 `
			-CollectionMode Maps `
			-Maps "/Game/Maps/<MapName>" `
			-AdditionalArgs "-CustomConfig=Steam" `
			-RoamSeconds 90 `
			-CaptureGrid 5
		```
	- 脚本会：
		- 扫描 `Content/**/*.umap` 和插件 `Content/**/*.umap`。
		- 按 `-CollectionMode` 决定收集全部地图、增量缺失/过期地图或用户指定地图。
		- 转为 `/Game/...` 或 `/<PluginName>/...` 地图路径。
		- 对 `Low/Medium/High/Epic/Cinematic` 画质分别设置 `sg.*Quality=0..4`。
		- 启动 packaged game 时传入 `-NoLoadingScreen -clearPSODriverCache -logPSO`，并使用 `-abslog=<RunLog>` 写文件日志；不要传 `-log`，避免 packaged game 弹出额外命令窗口。
		- Steam 包收集时通过 `-AdditionalArgs "-CustomConfig=Steam"` 保持运行时配置和打包目标一致。
		- 传入 `-OrionPSOCapture -OrionPSOCaptureExit`，让游戏内 `UOrionPSOCaptureSubsystem` 在地图 BeginPlay 后生成第三视角巡航相机。
		- `-RoamSeconds` 会映射到 `-OrionPSOCaptureDuration`；`-StartupWaitSeconds` 会映射到 `-OrionPSOCaptureStartDelay`。
		- 巡航相机会基于场景 Primitive bounds 生成蛇形路径，使用第三视角跟随偏移穿越全场景；不再发送 WASD、鼠标或依赖输入法状态。
		- 巡航结束前调用 `FShaderPipelineCache::SavePipelineFileCache(BoundPSOsOnly)`，再按 `-OrionPSOCaptureExit` 退出游戏。
		- 每次运行结束或超时都会在 `finally` 中清理本次启动的游戏进程和子进程，避免命令窗口或 bootstrap 子进程残留。
		- 退出后从 Saved 目录搜集 `.upipelinecache`，复制到 `CollectedPSOs`。
	- 自动漫游不是玩法全覆盖。复杂交互、武器开火、受击后处理、粒子爆炸、UI 弹窗、换装、昼夜切换等必须补充人工或专用测试脚本。
	- 只想检查地图发现时运行：
		```powershell
		powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-pso-caching\scripts\Collect-PSOs-Windows.ps1 -ProjectRoot <ProjectRoot> -CollectionMode Incremental -ListMapsOnly
		```

5. **转换 `.spc`**
	- 批处理入口：
		```bat
		.agents\skills\orion-pso-caching\scripts\Cmd_ConvertPSOs_5.8.bat -ProjectRoot <ProjectRoot> -CopyToBuild
		```
	- PowerShell 入口：
		```powershell
		powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-pso-caching\scripts\Convert-PSOs-5.8.ps1 `
			-ProjectRoot <ProjectRoot> `
			-ShaderFormat PCD3D_SM6 `
			-CopyToBuild
		```
	- 正式格式使用 `.spc`。`stablepc.csv.compressed` 是旧文本诊断格式，不作为 UE 5.8 本流程的正式打包格式。
	- 使用 `-CopyToBuild` 时，脚本会先在 `Saved/OrionUE/PSO/convert-output` 生成临时 stable cache，再用 `ShaderPipelineCacheTools build` 做读回验证；验证通过后才移动到 `Build/<Platform>/PipelineCaches`。不要在 `CollectedPSOs` 和 `Build/<Platform>/PipelineCaches` 同时保留同一份 `.spc`，避免 Git 多出重复文件。
	- 除非只是做底层命令调试，不要传 `-SkipBuildValidation`。本项目已实测过 `expand` 成功但 `build` 读回崩溃的情况；不验证就移动进 Build 会让后续 Cook 继续崩溃。
	- 最终保留：
		```text
		Build/<Platform>/PipelineCaches/PSO_<ProjectName>_<ShaderFormat>.spc
		```
	- UE 5.8 还支持生成旧格式 `stablepc.csv.compressed` 供诊断，但不要用于正式打包：
		```powershell
		powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-pso-caching\scripts\Convert-PSOs-5.8.ps1 `
			-ProjectRoot <ProjectRoot> `
			-ShaderFormat PCD3D_SM6 `
			-StablePCCompressed `
			-CopyToBuild
		```
		诊断输出：
		```text
		Build/<Platform>/PipelineCaches/PSO_<ProjectName>_<ShaderFormat>.stablepc.csv.compressed
		```
		注意：2026-06-25 在本项目 UE 5.8 上实测，`stablepc.csv.compressed` 会在 Cook 的 `BuildPSOSC` 中被拒绝为 `not in the correct format (GraphicsDesc)`，不能作为可靠 fallback。不要把它长期留在 `Build/<Platform>/PipelineCaches`。
	- 转换命令底层等价于：
		```powershell
		<EngineRoot>/Engine/Binaries/Win64/UnrealEditor-Cmd.exe <ProjectRoot>/<ProjectName>.uproject `
			-run=ShaderPipelineCacheTools expand `
			<ProjectRoot>/CollectedPSOs/*.rec.upipelinecache `
			<ProjectRoot>/CollectedPSOs/ShaderStableInfo-*-<ShaderFormat>.shk `
			<ProjectRoot>/Saved/OrionUE/PSO/convert-output/PSO_<ProjectName>_<ShaderFormat>.spc `
			-unattended -nop4 -NoSound -NoSplash `
			-abslog=<ProjectRoot>/Saved/Logs/PSO/pso-convert-<Timestamp>.log
		```
	UE 5.8 的 `Expand` 可直接写出新格式 `.spc`。调用外部 `UnrealEditor-Cmd.exe` 时必须带 `.uproject`；不要把每一个 `.rec` 文件展开成上百个命令行参数，使用通配符交给 UE 的 `ExpandWildcards` 处理。`-CopyToBuild` 成功后只在 `Build/<Platform>/PipelineCaches` 保留通过读回验证的最终 `.spc`。

	- 如果要定位是哪一组录制导致 `.spc` 读回失败，运行：
		```powershell
		powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-pso-caching\scripts\Test-PSOSpcBatches-5.8.ps1 `
			-ProjectRoot <ProjectRoot> `
			-GroupBy Quality
		```
		可选 `-GroupBy Map`、`-GroupBy Chunk -ChunkSize 1 -GroupName Chunk_050_050` 或 `-BisectFailures`。结果写到 `Saved/OrionUE/PSO/spc-batches-*/results.csv`。

5.1. **UE 5.8 `.spc` 读回失败时生成 direct stable cache**
	- `.spc` 仍是首选正式格式；只有 `Convert-PSOs-5.8.ps1 -CopyToBuild` 的读回验证失败，或 Cook 已确认崩在 `PipelineFileCache.cpp:1424` / `PipelineCacheUtilities.cpp:205` 时，才走此绕过方案。
	- 不要改用 `stablepc.csv.compressed` 作为正式包格式。本项目 UE 5.8 已实测该格式会被 Cook 拒绝为 `not in the correct format (GraphicsDesc)`。
	- 确认 `Config/<Platform>/<Platform>Engine.ini` 有：
		```ini
		[ConsoleVariables]
		r.ShaderPipelineCacheTools.IncludeComputePSODuringCook=0
		```
		该 CVar 用于避免没有 `.spc` 输入时 Cook 仍运行 `ShaderPipelineCacheTools build` 并删除 `Content/PipelineCaches` 下的 direct stable cache。
	- 确认 `Config/DefaultGame.ini` 的 `[/Script/UnrealEd.ProjectPackagingSettings]` 有：
		```ini
		+DirectoriesToAlwaysStageAsUFS=(Path="PipelineCaches")
		```
		`*.stable.upipelinecache` 不是 `.uasset`，不会作为普通资产 Cook；必须显式 Stage `Content/PipelineCaches`，否则包内没有 PSO cache。
	- 运行：
		```powershell
		powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-pso-caching\scripts\Build-DirectStablePSO-5.8.ps1 `
			-ProjectRoot <ProjectRoot> `
			-ShaderFormat PCD3D_SM6 `
			-CleanExisting `
			-CleanBuildPipelineCaches
		```
	- 脚本会：
		- 合并 `CollectedPSOs/*.rec.upipelinecache`。
		- 默认使用 `FShaderPipelineCache::GetGameVersionForPSOFileCache()` 写入当前 GameVersion。
		- 输出：
			```text
			Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache
			```
		- 检查 `DirectoriesToAlwaysStageAsUFS=(Path="PipelineCaches")`，避免生成了 direct stable cache 但打包 manifest 漏掉。
		- 把 `Build/<Platform>/PipelineCaches` 中残留的 `.spc`、`.stablepc.csv`、`.stablepc.csv.compressed` 移到 `Saved/OrionUE/PSO/disabled-build-pipelinecaches/<Timestamp>`，避免下一次 Cook 再进入失败路径。
	- 这是“同一批 cook/同一批录制数据”的项目侧绕过方案：它直接把 recorded PSO cache 作为包内 stable cache 使用，不经过 `.shk` stable-key remap。后续 UE 版本修复 `.spc` 读回后，优先恢复 `.spc + build 验证` 正式路径。

6. **第二次 cook/package**
	- 重新运行打包流程。
	- `.spc` 正常路径的成功标准不只是 UAT 成功，还要在日志里看到 `ShaderPipelineCacheTools` 把 `.spc` 和 `.shk` 合成包内 cache。
	- direct stable 路径的成功标准是：日志不再出现从 `Build/<Platform>/PipelineCaches` 读取 `.spc/.stablepc*`；UFS manifest 包含 `Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache`；最终 `BUILD SUCCESSFUL`。
	- `.spc` 路径搜索关键字：
		```powershell
		Select-String -Path <UATLog> -Pattern "UShaderPipelineCacheToolsCommandlet|With Args: build|ShaderStableInfo|Loaded .* stable PSOs|Number of PSOs after sanity checks|Wrote .* stable.upipelinecache|BUILD SUCCESSFUL|AutomationTool exiting"
		```
	- direct stable 路径搜索关键字：
		```powershell
		Select-String -Path <UATLog> -Pattern "PipelineCaches|stable.upipelinecache|BUILD SUCCESSFUL|AutomationTool exiting"
		```

7. **运行时验证**
	- 用清驱动缓存首跑：
		```powershell
		<PackagedGameExe> <MapPath> -clearPSODriverCache -trace=default -log
		```
	- 验证日志：
		- `LogRHI: Opened FPipelineCacheFile`
		- `enqueued ... tasks for precompile`
		- entries/tasks 不能是 0。
		- `Encountered a new graphics PSO` 数量应明显低于采集前。
	- 如仍卡顿，用 Unreal Insights 看 PSO bookmarks；若没有 PSO 新发现，卡顿可能来自 streaming、同步加载、spawn、场景捕捉或其他 CPU/GPU 工作。

## 文件命名规则

- Cook stable keys：
	```text
	ShaderStableInfo-Global-<ShaderFormat>.shk
	ShaderStableInfo-<ProjectName>-<ShaderFormat>.shk
	```
- 记录文件：
	```text
	RecordedPSO-<ProjectName>_<ShaderFormat>_<Quality>_<MapName>_<Timestamp>.rec.upipelinecache
	```
	脚本允许多文件并存，转换时用 wildcard 合并。只有单次手工收集时，才需要使用 `RecordedPSO-<ProjectName>_<ShaderFormat>.rec.upipelinecache` 这类简名。
- Stable cache：
	```text
	PSO_<ProjectName>_<ShaderFormat>.spc
	```
- Direct stable fallback：
	```text
	Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache
	```

## 常见失败

### 找不到 `.shk`

原因：尚未 cook、平台名不匹配、shader format 不匹配，或 `NeedsShaderStableKeys` 没有被 cook 读取。

处理：重新 cook；确认日志和路径中使用相同 `<Platform>` / `<ShaderFormat>`；只复制对应 shader format 的 `.shk`。

### `expand` 后没有生成 `.spc`

原因：`CollectedPSOs` 没有 `.rec.upipelinecache`，`.shk` 为空/不匹配，命令行通配符没有展开，或者外部 `UnrealEditor-Cmd.exe` 没有带 `.uproject` 导致 commandlet 停在项目上下文外。

处理：用 `Convert-PSOs-5.8.ps1`，它会先验证真实文件数量，再用 `.uproject + 通配符` 调用 commandlet。若看到 `UnrealEditor-Cmd.exe -run=ShaderPipelineCacheTools expand` 长时间无 CPU、无输出、无 `.spc`，停止该进程，改用 `.uproject + wildcard` 方式重跑。

### `.spc` 已复制但打包日志没有处理 PSO

原因：`.spc` 不在 `Build/<Platform>/PipelineCaches`，文件名 shader format 不匹配，或者本次 cook 复用了旧内容没有重新 cook。

处理：确认 `Build/<Platform>/PipelineCaches/PSO_<ProjectName>_<ShaderFormat>.spc` 存在；重新 cook/package；日志必须有 `UShaderPipelineCacheToolsCommandlet`。

### `.spc` 已处理但 Cook 崩在 `PipelineFileCache.cpp:1424` 或 `PipelineCacheUtilities.cpp:205`

现象：Cook 日志已经出现 `With Args: build "...*<ProjectName>_<ShaderFormat>.spc"`，随后出现以下任意一种：

- `Assertion failed: !"Enclosing block should never be called"`，调用栈进入 `PipelineFileCache.cpp:1424` / `LoadStablePipelineCacheFile()`。
- `Assertion failed: PermDescriptor.ActivePerSlot[SF_Compute]`，调用栈进入 `PipelineCacheUtilities.cpp:205` / `SanityCheckActiveSlots()`。

处理：这是当前 UE 5.8 二进制 stable cache 读取路径与本项目录制 PSO 组合不兼容。将 `Build/<Platform>/PipelineCaches/*.spc` 移出该目录，避免后续普通打包继续崩溃；保留 `CollectedPSOs`、转换日志和失败 `.spc`。当前项目使用 direct stable cache 绕过：运行 `Build-DirectStablePSO-5.8.ps1 -CleanBuildPipelineCaches` 直接生成 `Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache`，并确保 `r.ShaderPipelineCacheTools.IncludeComputePSODuringCook=0`。不要在项目模块中手写 `.spc` 二进制修补；`FStablePipelineCache` 内部使用 `FName` 和 shader hash 索引压缩，手工改二进制风险高。

### direct stable 文件生成了但包内没有

现象：`Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache` 存在，打包也成功，但 `FinalCopyWin64_UFSFiles.txt`、`Manifest_UFSFiles_Win64.txt` 或包目录里搜不到 `PipelineCaches` / `stable.upipelinecache`。

原因：`*.stable.upipelinecache` 不是 `.uasset`，不会被普通 Cook 发现；UE staging 自动路径可能与 `SC.PlatformDir` 有差异，不能只依赖自动扫描。

处理：在 `Config/DefaultGame.ini` 的 `[/Script/UnrealEd.ProjectPackagingSettings]` 加：

```ini
+DirectoriesToAlwaysStageAsUFS=(Path="PipelineCaches")
```

然后重新 Stage/Package。完整重 Cook 不是必须；已有 Cook 内容可用时，可以用相同 UAT 参数追加 `-skipcook -stage -package` 重新生成 Pak/IoStore。验证 UFS manifest 必须出现：

```text
Content\PipelineCaches\<Platform>\<ProjectName>_<ShaderFormat>.stable.upipelinecache
```

补充：2026-06-25 在本项目 UE 5.8 上按画质分组和单 `.rec.upipelinecache` 分组实测，`expand` 都能返回 0 并生成 `.spc`，但 `build` 读回会崩在 `PipelineCacheUtilities.cpp:205` 或 `PipelineFileCache.cpp:1424`。因此正式流程必须让 `Convert-PSOs-5.8.ps1 -CopyToBuild` 的默认读回验证先通过，才能把 `.spc` 放进 Build 目录。

### `stablepc.csv.compressed` 被 Cook 拒绝为 `GraphicsDesc`

现象：使用 `Convert-PSOs-5.8.ps1 -StablePCCompressed -CopyToBuild` 后，Cook 日志出现：

```text
Using stable pipeline cache in a deprecated text format: ...stablepc.csv.compressed
File ...stablepc.csv.compressed is not in the correct format (GraphicsDesc) ignoring the rest of its contents.
Loaded 0 PSO lines ... 0 rejected, 0 merged
UShaderPipelineCacheToolsCommandlet failed 1
```

处理：当前 UE 5.8 的 `Expand` 可写出 `stablepc.csv.compressed`，但同版本 `BuildPSOSC` 不能可靠读回本项目生成的文本格式。把 `*.stablepc.csv.compressed` 从 `Build/<Platform>/PipelineCaches` 移出，保留在 `Saved/OrionUE/PSO/failed-*` 或 `CollectedPSOs` 作为诊断证据。

### 清驱动缓存后仍有首跑长加载

原因：runtime PSO precaching 正在工作，首跑会把 PSO 编译写入 driver cache；第二次加载才会显著缩短。也可能是 bundled cache 覆盖过宽、预编译批次过大或非 PSO 卡顿。

处理：看 `NumPrecompilesRemaining()`、`LogRHI`、Insights bookmarks 和 CPU/GPU 轨迹；不要只凭加载时间判定失败。

### 异常退出或返回桌面后下次启动像全量重编

现象：游戏已经进入关卡，之后返回桌面、异常退出或崩溃；小概率下一次启动又出现“编译全部着色器”的启动 UI。

原因：启动 UI 通常由 `FShaderPipelineCache::NumPrecompilesRemaining()` 驱动，它统计的是本进程还没预编译完的 bundled PSO，不等于真正的 shader compiler 全量重编。Windows UE 5.8 没有像 iOS `usecache.txt` 那样的“bundled PSO 已完成一次”标记；如果异常退出时驱动缓存没及时落盘，下次启动会被项目 UI 再次强制等待整包 PSO。

处理：不要直接开启 `D3D12.PSO.DiskCache` 或 `D3D12.PSO.DriverOptimizedDiskCache`；UE 5.8 源码里这两个 D3D12 RHI disk cache 默认关闭且 ReadOnly，旧 RHI cache 不是当前推荐路径。项目侧应在启动 PSO 预编译完成时记录当前 stable cache 指纹：`GameVersion + <Platform> + <ShaderFormat> + stable.upipelinecache 文件大小 + 时间戳`。后续启动如果指纹匹配，跳过阻塞式启动 shader UI，让 PSO 继续后台处理；如果指纹不匹配或首次运行，再阻塞编译一次。

例外：带 `-clearPSODriverCache`、`-deleteuserpsocache` 或 `-logPSO` 时必须忽略完成标记，因为这些参数通常用于清缓存验证或收集 PSO。

### 自动漫游覆盖不足

原因：游戏内 `UOrionPSOCaptureSubsystem` 会用第三视角相机穿越场景并触发可见渲染 PSO，但它仍然无法自动触发所有玩法状态、武器、VFX、UI 弹窗、换装或剧情逻辑。

处理：创建专门 PSO capture map，把武器、角色、材质变体、Niagara、UI、后处理、昼夜/天气状态集中展示；或补充 gameplay automation / Gauntlet / 人工巡检。

### 看到 Logo 后黑屏，或者脚本像是在 WASD 但没有真正漫游

原因：外部输入法/窗口焦点/LoadingScreen 会吞掉 WASD 和鼠标；`ToggleDebugCamera; fly` 也不保证在 packaged game、启动电影或主菜单流程下生效。

处理：正式收集必须使用当前脚本的 `-NoLoadingScreen -OrionPSOCapture` 路径。确认运行日志包含 `LogOrionPSOCapture: PSO capture enabled`、`PSO capture started`、`PSO capture finished`，而不是只看外部键盘输入。

### 每次运行后留下命令窗口

原因：packaged game 带 `-log` 会打开额外日志控制台；根目录 bootstrap exe 可能拉起真正的 `Binaries/Win64` 游戏进程；超时关闭时如果只关闭 `Start-Process` 返回的进程，子进程和日志窗口可能残留。

处理：正式收集脚本不要传 `-log`，只传 `-abslog=<RunLog>` 写文件日志；启动后记录本次进程、启动时间和 exe 路径；结束或超时时在 `finally` 中关闭本次游戏进程树，先 `CloseMainWindow()`，10 秒后仍未退出再 `Stop-Process -Force`。不要按窗口标题或 exe 名称全局乱杀，以免误关用户正在运行的其他游戏/编辑器。

### 只筛选一张地图时报 `Count` 不存在

原因：Windows PowerShell 会把单元素数组拆成字符串；StrictMode 下字符串没有 `.Count`。

处理：脚本读取地图列表时必须用 `@(Get-Maps ...)` 包住结果；手工改脚本后要重新跑 parser 和 `check-code-style.ps1`。

### 单个 `.rec` 或 `.shk` 自测时报 `Count` 不存在

原因：转换脚本做小样本诊断时，`Get-ChildItem | Where-Object | Sort-Object` 只有一个结果也会被 PowerShell 拆成单对象；StrictMode 下单对象没有 `.Count`。

处理：所有需要 `.Count`、遍历或传给函数的文件查询结果必须用 `@(...)` 包住，例如 `$RecFiles = @(Get-ChildItem ... | Sort-Object FullName)` 和 `$ShkFiles = @(...)`。

### `Start-Process -ArgumentList` 拒绝 `System.String[]`

原因：不要用 PowerShell 自动变量名 `$Args` 保存启动参数；额外参数数组也要显式展平，否则可能把嵌套数组传给 `Start-Process`。

处理：使用 `$LaunchArgs` 这类普通变量，先写基础参数，再用 `$LaunchArgs += @($AdditionalArgs)` 和 `$LaunchArgs += <ExecCmds>` 追加。

### 只启动了包根目录 EXE，脚本过早结束

原因：Windows 打包目录根部的 `<Target>.exe` 可能只是 bootstrap 启动器，它会再拉起 `<ProjectName>/Binaries/Win64/<Target>.exe`。如果脚本监控 bootstrap 进程，进程退出时真正游戏还在运行，自动漫游和关闭都不会覆盖真实进程。

处理：收集脚本必须优先选择 `*\Binaries\Win64\<Target>.exe`；手工执行时也优先传内部 EXE，除非明确要测试 bootstrap。

### `.rec.upipelinecache` 已生成但复制数量为 0

原因：UE 5.8 packaged game 可能把记录文件写到 `<PackageRoot>/<ProjectName>/Saved/CollectedPSOs`，不是项目源码目录的 `Saved`，也不是 `<PackageRoot>/Saved`。

处理：收集脚本扫描顺序必须包含 `%LOCALAPPDATA%/<RuntimeAppName>/Saved`、`<PackageRoot>/Saved`、`<PackageRoot>/<ProjectName>/Saved`、`<PackageRoot>/<RuntimeAppName>/Saved`、`<ProjectRoot>/Saved`。确认日志里的 `Opened FPipelineCacheFile` 或 `saved ... .rec.upipelinecache` 路径，再对照实际复制结果。

## 打包请求中的默认行为

- 用户只说“打包”：先提示是否需要收集 PSO/着色器缓存。
- 用户说“打包并收集着色器”或类似语义：直接执行完整流程，不再停留在解释。
- 如果当前没有可运行 packaged build，先打包一次生成 `.shk` 和 packaged exe；然后收集；最后转换 `.spc` 后再打第二次包。
