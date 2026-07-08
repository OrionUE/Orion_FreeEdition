---
name: orion-project-acoustics
description: "Use when Codex works on Unreal Engine ProjectAcoustics or Project Acoustics plugin code, full spatial-audio baking workflow, requests like start/calculate/process/generate spatial audio or baked acoustics, scene parsing for acoustic geometry, AcousticProxy bake maps, SourceDataOverride, spatial reverb, virtual speakers, AcousticsAudioPluginListener, ProjectAcousticsNative, ProjectAcousticsSpatializer, MetaSound ProjectAcoustics parameters, or crashes involving OnListenerUpdated, AActor::SetActorLocation, audio thread listener updates, EXCEPTION_ACCESS_VIOLATION, SteamAudio plus ProjectAcoustics integration."
---

# Unreal Project Acoustics

本 Skill 用于处理 Unreal ProjectAcoustics 插件的运行时、配置和崩溃排查，尤其是 `ProjectAcousticsNative` listener、SourceDataOverride、空间混响虚拟扬声器和 UE audio thread 生命周期问题。

## 工作流

1. 先读取项目 `.uproject`、`Plugins/Audio/ProjectAcoustics/ProjectAcoustics.uplugin`、相关 `*.Build.cs` 和 `Config/DefaultEngine.ini` 平台音频插件配置，确认 `SourceDataOverridePlugin`、`SpatializationPlugin`、`ReverbPlugin` 的组合。
2. 用户提到“开始计算 / 帮我处理 / 帮我生成 / 制作 / 烘焙 / 烘培”空间音频、烘焙声音或 baked acoustics 时，先读取 `references/project-acoustics-bake-workflow.zh-CN.md`，按完整 Step 1-6 编排执行，不要只跑单个脚本。
3. 完整流程中遇到必须由用户在 Editor 内操作、选择或确认的节点时，停止继续执行，明确说明“当前暂停在 Step X”，列出用户要做的操作，并要求用户完成后输入“继续”。用户输入“继续”后，先读取上一阶段 JSON 报告和当前资产状态，从下一个未完成步骤继续，不要从 Step 1 重跑。
4. 崩溃栈命中 `FAcousticsAudioPluginListener`、`OnListenerUpdated`、`AActor::SetActorLocation` 或 `FAudioThread::RunCommandOnAudioThread` 时，先读取 `references/orion-project-acoustics.zh-CN.md` 的“Listener 线程规则”和“虚拟扬声器崩溃修复”。
5. 写代码前用 `../unreal-source-code-navigator/SKILL.md` 对照当前 `<EngineRoot>` 的 `IAudioPluginListener`、`FAudioDevice::SetListener` 和 `FAudioDevice::NotifyPluginListenersWorldChanged`，不要凭旧 UE 版本记忆判断线程。
6. ProjectAcoustics listener 中所有 `AActor`、`UActorComponent`、World Outliner label、Spawn/Destroy/SetActorLocation 等 UObject/Actor 状态操作必须在 GameThread 入口执行；UE 5.8 中优先使用 `IAudioPluginListener::OnTick`。
7. `OnListenerUpdated` 视为 audio thread 回调，只放音频线程安全的数据处理；不要在这里访问或移动 Actor，也不要解引用可能随 World 销毁的裸 Actor 指针。
8. 持有虚拟扬声器 Actor 时优先使用 `TWeakObjectPtr<AAmbientSound>`，更新前检查 `IsValid`、`!IsActorBeingDestroyed()` 和 `GetWorld() == InWorld`。
9. 修改后运行代码风格校验、最小模块构建和必要的 PIE/日志验证；不要通过禁用 ProjectAcoustics 或修改安装版引擎源码来掩盖插件生命周期问题。

## 路由

- 先配合 `../orion-audio-framework/SKILL.md` 确认音频系统整体配置、SteamAudio/ProjectAcoustics 插件分工、MetaSound 参数和资产目录。
- 需要查 UE 当前版本接口、线程、模块、Build.cs 或引擎调用点时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 需要判断插件模块职责、Runtime/Editor 模块边界或目标平台 allow list 时，配合 `../orion-framework-architecture/SKILL.md`。
- 创建、移动或命名 ProjectAcoustics 烘焙/空间声学资产时，配合 `../orion-asset-management/SKILL.md`。
- 需要从现有地图生成 bake-only 声学代理地图时，优先使用 `scripts/Invoke-CreateAcousticProxyMap.ps1`，并读取 `references/project-acoustics-code-study.zh-CN.md` 的“用脚本生成烘焙专用声学代理地图”。AcousticProxy 默认排除可碰撞的 Movable StaticMesh；如果报告中地面、墙体、楼梯等主结构因为 `reason=movable` 被跳过，优先修正源场景 Actor / Component 的 Mobility，只有明确确认该 Movable 几何应参与本次烘焙时才传 `-IncludeMovable`。`summary.destinationMap` 不等于 `summary.requestedDestinationMap` 时，视为 Step 1 失败，必须先修 Proxy 再继续。
- 需要给烘焙场景补齐 `AcousticsGeometry` / `AcousticsNavigation`、检查或创建 `NavMeshBoundsVolume` 时，使用 `scripts/Invoke-PrepareAcousticBakeScene.ps1`，并按 `references/project-acoustics-bake-workflow.zh-CN.md` 的 Step 2 执行；`NavMeshBoundsVolume` 不打 `AcousticsNavigation`，Navigation Tag 默认打在 `RecastNavMesh` 上。
- 如果命令行 `-Apply` 因已打开的 Editor 锁住 `.umap` 而无法保存，且当前 Editor 正打开目标关卡，改用 `scripts/Invoke-PrepareAcousticBakeSceneMcp.ps1` 通过 live MCP 在 Editor 内补 `NavMeshBoundsVolume`、清理 Volume 上的旧 Navigation tag，并给 `RecastNavMesh` 补 Navigation tag。
- 需要执行 ProjectAcoustics Bake UI 的 `Use Physical Materials` 和材质 Absorption 指定时，使用 `scripts/Invoke-AssignAcousticMaterials.ps1` 扫描目标地图中带 `AcousticsGeometry` 的 StaticMesh / Landscape，按组件 PhysMaterial、材质 PhysMaterial、材质名的优先级写入项目 `Config\ProjectAcoustics.ini` 的 `[UsePhysicalMaterials]` 与 `[Materials]`。
- 需要计算 Probes 声学探针时，使用 `scripts/Invoke-CalculateAcousticProbes.ps1`；运行前必须先提示用户选择“效率优先 / 速度最快”还是“精确度优先 / 最终质量”，分别对应 `Fastest` 和 `Quality`。除非用户本轮已经明确选择效率、精度、`Fastest` 或 `Quality`，否则不能因为用户只说“继续”就自行选择 `Fastest`。生成 `.vox` / `_config.xml` 后读取报告里的 `probeCount`、`estimatedProcessingMinutes`、`estimatedProcessingHours`、`estimatedProcessingDays` 与 `estimationModel`。如果用户说明“已有探针，又新增 Nav 体积 / 新可导航区域，需要继续补探针”，使用 `-AppendToExistingProbeList` 追加模式，不要传 `-Overwrite`；如果用户明确要求“只对新放置 Nav 框选的局部区域补密”，让用户把区域 Actor Tag 设为 `AcousticsProbeAppendRegion`，并加 `-AppendOnlyInTaggedRegion`。报告里检查 `appendToExistingProbeList`、`probeListMerged`、`existingProbeCount`、`generatedProbeCount`、`appendProbeRegionActorCount`、`appendProbeRegionCandidateCount`、`appendProbeOutOfRegionCount`、`appendedProbeCount`、`duplicateProbeCount`。默认脚本会用用户本机 CPU 实测点做幂律校准，并自动运行 `scripts/Test-AcousticProbeHealth.ps1` 做 ProbeList 结构预检和历史稳定失败 probe 检查；Step 4 完成后必须暂停，提示用户打开 Probes 页面人工检查和微调，不能自动进入 Step 5。本轮用户明确写出“不用看探针，直接本地烘焙 / 直接 Step 5”才可跳过暂停。大型户外+室内场景要读取“Step 4.0：大场景预览和分区探针策略”，优先用稀疏全图基线加室内手动加密，不要直接全图高质量盲 bake。
- 如果用户在生成新 Probe 后改口要求“用之前旧的”，不要重新计算旧 Probe；先备份当前 `Saved\OrionUE\ProjectAcoustics\AcousticsData` 中同 prefix 的 `.vox/_config.xml`，从旧 Step 4 报告或旧 LocalBake 目录恢复旧 `.vox/_config.xml`，运行 `scripts/Test-AcousticProbeHealth.ps1` 验证通过后，再用旧 Step 4 报告、旧 `-BakeDir` 和 `-Resume` 进入 Step 5。
- 需要本地烘焙 Probes 生成 `.ace` 时，使用 `scripts/Invoke-LocalBakeAcousticProbes.ps1`。只有在 Step 4 后用户已经人工检查 Probes 并回复“继续”，或用户本轮明确要求跳过探针检查直接烘焙时，才允许启动本脚本。它会把 LocalBake 处理程序、`.vox`、`_config.xml` 复制到 `Saved\OrionUE\ProjectAcoustics\LocalBake\<Prefix>_<timestamp>`，轮询 `.enc` 进度并写 JSON 报告，完成后复制 `.ace` 到 `Content\Acoustics`，并默认用 `scripts/import-acoustic-ace.py` 生成 `/Game/Acoustics/<Prefix>` 的 `UAcousticsData` 资产。长时间 bake 启动后必须继续用 `scripts/Watch-LocalBakeAcousticProbes.ps1` 附着到报告持续监控，直到状态为 `Completed` 且 ACE 已导入；不要只启动后台任务后停止。若 `.enc` 数量少于 `NumProbes` 或日志提示 missing/mismatched probes，即使 LocalProcessor 写出无扩展名输出，也不能导入；末尾连续缺失才用 `-Resume`，非连续缺洞要用 `-ExcludeProbeIndices` 过滤稳定失败 probe 或回到 Step 4 修 probe。追加少量室内 Probe 且 `.vox` 未变时，可用 `-ReuseProbeArtifactsFromBakeDir -AllowPartialProbeArtifactReuse -Resume` 复用已有 `.enc`，只补算缺失 Probe。
- 需要把 Step 5 生成的 `UAcousticsData` 应用到真实游戏地图时，使用 `scripts/Invoke-ApplyAcousticRuntime.ps1`。目标必须是实际游戏地图，不是 AcousticProxy 地图；脚本会创建或复用 `AcousticsSpace` 和 `AcousticsDebugRenderer`，放入 World Outliner 的 `Acoustics` 文件夹，并把 `AcousticsSpace.AcousticsData` 指向 Step 5 报告中的 `summary.importedAsset` 或显式传入的 `/Game/Acoustics/<Prefix>`。
- 如果 Step 6 命令在写出报告或日志前就失败，只输出 UBT / Editor 启动行，优先显式传入本轮 Step 4/5 已验证的 `-EditorCmd <EngineRoot>\Engine\Binaries\Win64\UnrealEditor-Cmd.exe`，并在 dry-run 与 apply 使用同一个引擎路径；不要反复依赖可能过期的 `Saved\OrionUE\UnrealEngine\InstallDirectory.txt` 默认值。
- 需要优化已烘焙空间音频、解释 ProjectAcoustics 源码里更高级的运行时能力、调 SourceDataOverride / Portaling / Runtime Volume / Dynamic Opening / Spatial Reverb / MetaSound 参数时，读取 `references/project-acoustics-bake-workflow.zh-CN.md` 的“Step 7：烘焙后运行时空间音频优化”，并结合 `references/project-acoustics-code-study.zh-CN.md` 的源码细节确认。
- 用户要求生成或配置 `UAcousticsSourceDataOverrideSourceSettings`、创建可复用 SourceDataOverride Source Settings 资产，或把这个设置指定到 `USoundAttenuation` 上时，使用 `scripts/Invoke-ConfigureAcousticSourceDataOverride.ps1`。设置资产命名统一使用 `AcousticsSettings_XXX`，默认资产路径是 `/Game/Acoustics/SourceDataOverride/AcousticsSettings_Default`；脚本会创建/更新该设置资产、打开 attenuation 的 `bEnableSourceDataOverride`，并把设置资产写入 `SourceDataOverridePluginSettingsArray`。如需替换已有每个 attenuation 内嵌的 ProjectAcoustics 设置，必须显式传 `-ReplaceExisting`。保存型 `-Apply` 前必须关闭 Unreal Editor，避免 `.uasset` 文件锁导致部分 attenuation 保存成功、部分失败；只做不保存的会话测试才使用 `-NoSave`，只有明确接受部分保存风险时才使用 `-AllowRunningEditor`。
- 用户要求“打开 Portaling”时，先确认 `Config/DefaultEngine.ini` 目标平台有 `SourceDataOverridePlugin=Project Acoustics`，再用 `scripts/Invoke-ApplyAcousticPortaling.ps1 -TargetMap <真实游戏地图> -Apply`。脚本会处理目标地图中实际引用的 `USoundAttenuation` 和 `AudioComponent` override，同时打开 `bEnableSourceDataOverride`、补 ProjectAcoustics source settings，并设置 `EnablePortaling=true`；默认不扫全项目，除非显式传 `-AllAttenuationAssets`。
- `ProjectAcoustics.cfg` 是 Bake UI 的本地制作配置，保存 `level_prefix_map`、simulation 参数和 Azure/作业操作参数；不要把它当运行时或 cook 必需的项目默认配置。当前约定路径是 `Saved\Config\ProjectAcoustics.cfg`，旧 `Config\ProjectAcoustics.cfg` 只用于一次性迁移兼容。
- 需要完整制作 ProjectAcoustics 空间音频、从场景解析进入 Geometry/Nav/Probe/Bake/Runtime 配置时，读取 `references/project-acoustics-bake-workflow.zh-CN.md` 的“完整 Step 1-6 编排规则”，按其中的暂停点和“继续”恢复规则执行。
- 把新的 ProjectAcoustics 排查经验继续沉淀为 Skill 时，配合 `../orion-framework-skill-authoring/SKILL.md` 和系统 `skill-creator`。

## Reference

读取 `references/orion-project-acoustics.zh-CN.md` 获取插件配置契约、listener 线程规则、虚拟扬声器崩溃修复、常见错误和验证清单。
开始制作或烘焙 ProjectAcoustics 空间音频时，读取 `references/project-acoustics-bake-workflow.zh-CN.md`。
需要从源码层面理解 ProjectAcoustics 运行时、Spatial Reverb、Bake UI、资产制作和排查流程时，读取 `references/project-acoustics-code-study.zh-CN.md`。

## 验证

常用最小验证命令：

```powershell
& "<EngineRoot>\Engine\Build\BatchFiles\Build.bat" <EditorTarget> Win64 Development -Project="<ProjectRoot>\<ProjectName>.uproject" -Module=ProjectAcousticsNative -WaitMutex -NoHotReloadFromIDE
& "<EngineRoot>\Engine\Build\BatchFiles\Build.bat" <EditorTarget> Win64 Development -Project="<ProjectRoot>\<ProjectName>.uproject" -Module=ProjectAcousticsBakeUI -WaitMutex -NoHotReloadFromIDE
```

改动运行时 listener / spatializer 优先构建 `ProjectAcousticsNative`；改动 Bake Acoustics Mode、commandlet、AcousticProxy、Probe UI 时构建 `ProjectAcousticsBakeUI`。改动 ProjectAcoustics C++ 后，还必须对 touched code files 运行项目代码风格校验。

`ProjectAcousticsBakeUI` 必须保持非 unity 编译。该模块包含多个 editor/commandlet `.cpp`，历史 helper 放在 anonymous namespace 或 file-static scope，unity 合并后会出现 helper 重定义、ADL 歧义和 format string 级联错误；不要为加速构建恢复 `bUseUnity=true`。
