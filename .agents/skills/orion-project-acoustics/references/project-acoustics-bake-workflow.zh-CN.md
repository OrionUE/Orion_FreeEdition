# ProjectAcoustics 空间音频烘焙流程

## 目录

- 流程状态
- 完整 Step 1-6 编排规则
- Step 1：解析场景
- AcousticProxy 场景生成
- Step 2：Geometry 与 Navigation 准备
- Step 1-2 验证
- Step 3：Acoustic 材质属性指定
- Step 3 验证
- Step 4：计算 Probes 声学探针
- Step 4 验证
- Step 5：LocalBake 烘焙 Probes 生成 ACE
- Step 5 验证
- Step 6：应用烘焙声音到真实地图
- Step 6 验证
- Step 7：烘焙后运行时空间音频优化
- Step 7 验证
- 本地烘焙处理程序
- 后续待追加

## 流程状态

本文记录 ProjectAcoustics 插件制作空间音频、计算烘焙声音的完整 Step 1-6 流程。当前 Step 1-6 已构成完整闭环：场景解析、Bake 场景准备、材质吸声属性、Probe 计算、LocalBake 生成 ACE、应用到真实游戏地图。

Step 7 记录烘焙完成后的运行时优化能力。它不是生成 ACE 的必要步骤，但当用户问“如何优化空间音频效果”“ProjectAcoustics 源码里还有什么功能”“声音方向、门窗、混响、遮挡不自然”等问题时，应读取 Step 7，并把它作为 Step 1-6 之后的调音和验证阶段。

当前已记录：

1. 解析场景，并让用户选择在原场景直接操作，还是生成新的 AcousticProxy 烘焙场景。
2. 确保所有 StaticMesh / Landscape Actor 带 `AcousticsGeometry`，检查或创建 `NavMeshBoundsVolume`，并把 `AcousticsNavigation` 打到 `RecastNavMesh` 上。
3. 在 Bake Acoustics Mode 中启用 `Use Physical Materials`，并为材质表中的 PhysMaterial / 材质名指定 Acoustic Material 与 Absorption。
4. 计算 Probes 声学探针：先让用户选择质量优先或速度优先，再按选择写入探针参数并生成 `.vox` / `_config.xml`。
5. 使用 LocalBake 处理程序把当前 Probes 烘焙成 `.ace`，中间文件统一放入 `Saved\OrionUE\ProjectAcoustics\LocalBake`，完成后复制 `.ace` 到 `Content/Acoustics` 并导入为 `UAcousticsData`。
6. 在真实游戏地图中放置运行时 ProjectAcoustics Actor：创建或复用 `AcousticsSpace` 和 `AcousticsDebugRenderer`，放入 World Outliner 的 `Acoustics` 文件夹，并把 `AcousticsSpace.AcousticsData` 指向 Step 5 导入的 `UAcousticsData`。
7. 可选运行时优化：按声源、区域、开关门窗、空间混响、MetaSound 参数和 streaming 策略进一步调优。

## 完整 Step 1-6 编排规则

当用户提到以下意图时，默认进入完整 ProjectAcoustics 空间音频制作流程，而不是只回答说明或只执行单步脚本：

- “开始计算空间音频”
- “帮我处理空间音频”
- “帮我生成空间音频”
- “开始烘焙声音 / 烘培声音”
- “帮我烘焙 ProjectAcoustics”
- “给这个地图生成 ProjectAcoustics 数据”
- 其他含义相同的“空间音频 / 声音烘焙 / baked acoustics / ProjectAcoustics bake”请求

执行总规则：

1. 先确定真实游戏地图 `SourceMap`。如果用户没有给地图路径，停止并要求用户提供目标地图；用户提供后从 Step 1 开始。
2. 维护两个地图概念：`SourceMap` 是真实游戏地图，`BakeMap` 是 Step 1 选择或生成的烘焙地图。Step 6 必须回到 `SourceMap`，不能把 `AcousticsSpace` 应用到 `BakeMap`。
3. 每一步都优先运行 dry-run 或读取已有报告，再决定是否 apply。报告统一放在 `Saved\OrionUE\ProjectAcoustics`，用地图名和步骤号命名，方便用户输入“继续”后恢复。
4. 每次暂停都必须在回复末尾明确写出：当前暂停步骤、已经完成的报告路径、用户需要做什么、完成后输入“继续”。用户输入“继续”后，先读取最新相关 JSON 报告和资产状态，从下一步继续；不要从 Step 1 重新开始。
5. 如果用户已经在原请求里给出明确选择，例如“用 AcousticProxy 场景”“最快计算 Probes”“精确度优先计算 Probes”“直接开始本地烘焙”，就使用该选择，不要重复询问。
6. Step 4 计算前是强制精度选择门：除非用户本轮已经明确选择“效率优先 / 速度最快 / Fastest”或“精确度优先 / 最终质量 / Quality”，否则必须暂停询问。用户只说“继续”时不能自行选择 `Fastest`，也不能直接运行 `Invoke-CalculateAcousticProbes.ps1`。
7. Step 4 生成后是强制人工确认门：生成 Probes、`.vox` 和 `_config.xml` 后必须暂停，让用户在 Editor 的 Probes 页面检查、移动、删除或添加探针。除非用户本轮明确写出“无需检查探针，直接本地烘焙 / 直接 Step 5”，否则不能自动启动 LocalBake。
8. 如果用户没有给出选择，按本文默认建议执行；但会改变人工编辑结果、会覆盖资产、会启动 CPU bake，或需要用户在 Editor 内手动操作时必须停下。
9. 不要在 Step 5 启动 bake 后停止响应。启动后必须持续监控到 `Completed`、`AceCopiedImportFailed` 或 `Failed`，并根据状态继续 Step 6 或提示修复。
10. 如果任一步骤的 `UnrealEditor-Cmd` 返回非 0，但 JSON 报告存在且 `summary.completed=true`，先以报告判断任务是否完成，再决定是否需要处理退出阶段 warning。

完整流程：

| 步骤 | 自动动作 | 暂停条件 | 继续后动作 |
| --- | --- | --- | --- |
| Step 1 | 解析场景；默认选择生成 AcousticProxy；必要时运行 `Invoke-CreateAcousticProxyMap.ps1` dry-run 和 apply。 | 缺少 `SourceMap`；用户明确要求先确认是否直接用原场景；dry-run 发现严重扫描异常或保存锁。 | 确认 `BakeMap`，进入 Step 2。 |
| Step 2 | 对 `BakeMap` 添加 `AcousticsGeometry`，准备 `NavMeshBoundsVolume`，把 `AcousticsNavigation` 打到 `RecastNavMesh`。 | 需要用户在 Editor 中手动调整 `NavMeshBoundsVolume` 大小并 Build Navigation。 | 重新运行 Step 2 验证 `RecastNavMesh` tag 和导航状态，再进入 Step 3。 |
| Step 3 | 开启 `Use Physical Materials`，根据 PhysMaterial / 材质名写入 Acoustic Material 与 Absorption。 | 报告中大量 `fallbackMatches`、材质分类明显可疑，或用户要求人工检查材质表。 | 用户确认材质后进入 Step 4。 |
| Step 4 | 用户明确选择效率优先 / `Fastest` 或精确度优先 / `Quality` 后计算 Probes，生成 `.vox` / `_config.xml`，运行 Probe Health 检查。 | 计算前缺少精度选择时必须暂停询问；生成后必须让用户在 Probes 页面人工检查、移动、删除、添加探针；Probe Health 失败也必须暂停。 | 用户先做出精度选择后执行 Step 4；生成后用户完成探针检查并输入“继续”，先重跑 Probe Health；通过后进入 Step 5。只有用户本轮明确说跳过探针检查时才能直接进入 Step 5。 |
| Step 5 | 使用 LocalBake 生成 `.ace`，持续监控 ETA 和 `.enc` 进度，完成后复制到 `Content\Acoustics` 并导入 `UAcousticsData`。 | 启动前必须已有 Step 4 后的用户确认；LocalBake 失败、缺失 probe、导入失败。 | 成功导入后进入 Step 6；失败时按报告修复后再继续。 |
| Step 6 | 在 `SourceMap` 创建或复用 `AcousticsSpace` 与 `AcousticsDebugRenderer`，放入 `Acoustics` 文件夹，把 `AcousticsSpace.AcousticsData` 指向 Step 5 导入资产。 | 保存真实地图失败或目标误指向 AcousticProxy。 | 修复保存/目标地图后重跑 Step 6，最后输出完成报告。 |

标准暂停话术：

```text
当前暂停在 Step X：<步骤名>。
已完成：<报告路径或资产路径>。
请你现在在 Editor 中完成：<具体操作>。
完成后回复“继续”，我会从 Step X 的验证继续，不会从 Step 1 重跑。
```

标准完成话术：

```text
Step 1-6 已完成。真实地图 <SourceMap> 已绑定 <UAcousticsData>。
AcousticsSpace 和 AcousticsDebugRenderer 已在 Outliner 的 Acoustics 文件夹中。
关键报告：<Step4 report>、<Step5 report>、<Step6 report>。
```

## Step 1：解析场景

开始 ProjectAcoustics 空间音频制作时，先不要直接进入 Bake UI。先解析用户指定的源场景，并向用户确认要使用哪种场景准备方式：

1. **直接在原场景中操作**。
2. **生成新的 AcousticProxy 场景**。

默认建议用户选择 **生成新的 AcousticProxy 场景**。

向用户说明选择依据：

- 如果场景几乎全是普通、静态、已加载、可见的 `StaticMesh` / `StaticMeshComponent`，并且没有复杂生成系统，可以直接在原场景中操作。
- 如果场景包含 PCG、子关卡、Level Instance、World Partition、Data Layer、蓝图 Actor 内部模型、ChildActor、运行前需要生成的内容、复杂 Landscape，或任何当前 Bake UI 可能识别不完整的结构，建议生成 AcousticProxy 场景。
- 大型关卡即使能直接识别，也优先建议使用 AcousticProxy 场景，因为它更利于控制声学几何、减少视觉细节、保留门洞/窗洞/房间开口，并降低后续烘焙成本。

推荐提问话术：

```text
这个关卡可以有两种处理方式：
1. 直接在原场景中标记和烘焙。
2. 生成新的 AcousticProxy 烘焙场景。

如果场景全是普通 StaticMesh，可以直接用原场景；如果包含 PCG、子关卡、Level Instance、World Partition、蓝图内模型或复杂 Landscape，建议生成 AcousticProxy 场景。默认我建议生成 AcousticProxy 场景。你要选择哪一种？
```

如果用户没有明确选择，并且当前场景结构未知或复杂，按默认建议继续准备 AcousticProxy 场景；如果需要避免写资产，先跑 dry-run 报告再让用户确认。

## AcousticProxy 场景生成

当用户选择生成新的 AcousticProxy 场景时，使用本 Skill 已提供的脚本流程，把源关卡转换成 bake-only 声学代理场景。

默认输出路径：

```text
/Game/Acoustics/AcousticProxyMaps/<SourceMapName>_AcousticProxy
```

先运行 dry-run，确认扫描数量、跳过原因、Level Instance/PCG/ChildActor/Landscape 参与情况：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-CreateAcousticProxyMap.ps1 `
	-SourceMap /Game/YourFolder/Maps/YourMap `
	-Report Saved\OrionUE\ProjectAcoustics\your-map-acoustic-proxy-dryrun.json
```

dry-run 报告没有明显问题后，再生成实际 AcousticProxy 场景：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-CreateAcousticProxyMap.ps1 `
	-SourceMap /Game/YourFolder/Maps/YourMap `
	-Report Saved\OrionUE\ProjectAcoustics\your-map-acoustic-proxy-apply.json `
	-Apply `
	-Overwrite
```

生成时保留这些默认策略：

- `-StaticMeshMode SourceMesh`：复用源 StaticMesh，保留门洞、窗洞、房间开口。
- `-LandscapeMode Heightfield`：用 C++ Commandlet 生成 Landscape heightfield mesh 代理。
- `-IncludeInstanced $true`：展开 InstancedStaticMesh / HISM。
- 默认排除可碰撞的 Movable StaticMesh，避免把动态物误纳入烘焙几何；如果确有 bake-only 例外需要让 Movable 参与本次烘焙，才显式传 `-IncludeMovable`。
- `-MaxLevelInstanceDepth 8`：递归处理子关卡 / Level Instance。
- `-MaxChildActorDepth 8`：递归处理蓝图 ChildActor。

生成完成后，AcousticProxy 场景必须自动整理 Outliner：

1. 新建或使用 `ProxyStaticMesh` 文件夹，把所有生成的代理 `StaticMeshActor` 放入该文件夹；包括 Python 生成的普通 StaticMesh 代理，以及 `ProjectAcousticsLandscapeProxy` 追加的 Landscape heightfield StaticMesh 代理。
2. 新建或使用 `Env` 文件夹，并添加默认 `SkyLight`、`Directional Light`、`Sky Atmosphere`、`Exponential Height Fog`，这些环境 Actor 全部放入 `Env`。
3. 环境 Actor 不添加 `AcousticsGeometry`，避免被 ProjectAcoustics 当作声学几何参与烘焙。

如果用户选择直接在原场景中操作，不要生成 AcousticProxy 场景；后续步骤应基于原场景继续进行 Geometry / Navigation / Probe / Bake 操作。

## Step 2：Geometry 与 Navigation 准备

进入 ProjectAcoustics Bake UI 前，先准备场景 Tag：

1. 确保所有参与声学遮挡、反射、传播的 `StaticMesh` / `StaticMeshComponent` 所属 Actor 都添加 `AcousticsGeometry`。
2. 确保所有 `Landscape` / `LandscapeStreamingProxy` Actor 都添加 `AcousticsGeometry`。
3. 检查场景中是否已有 `NavMeshBoundsVolume`。
4. 如果没有 `NavMeshBoundsVolume`，就在场景中创建一个新的 `NavMeshBoundsVolume`。
5. `NavMeshBoundsVolume` 不添加 `AcousticsNavigation`；如果旧流程已经添加过，需要移除。
6. 确保生成出来的 `RecastNavMesh` Actor 添加 `AcousticsNavigation`。
7. 提醒用户打开编辑器手动调整 `NavMeshBoundsVolume` 大小，让它覆盖所有实际可听、可行走和需要探针生成的场景范围；调整后需要 Build Navigation 或等待导航重新生成，再重新执行本步骤确认 `RecastNavMesh` 已打 tag。

自动准备脚本：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-PrepareAcousticBakeScene.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-acousticproxy-step2-dryrun.json
```

dry-run 报告正常后，实际写入并保存地图：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-PrepareAcousticBakeScene.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-acousticproxy-step2-apply.json `
	-Apply
```

注意：ProjectAcoustics Bake UI 源码中明确提示 `NavMeshBoundsVolume` 不是最终受支持的 Navigation 输入对象。`NavMeshBoundsVolume` 只负责让 UE 生成导航数据，不作为 ProjectAcoustics 的最终 Navigation 输入；`AcousticsNavigation` 默认应打在 `RecastNavMesh` Actor 上。如果场景里暂时没有 `RecastNavMesh`，先调整 `NavMeshBoundsVolume` 并 Build Navigation，然后重新执行 Step 2。

## Step 1-2 验证

选择 AcousticProxy 场景时，至少检查 dry-run 或 apply 报告中的这些字段：

- `summary.completed` 应为 `true`。
- `summary.destinationMap` 必须等于 `summary.requestedDestinationMap`；如果脚本写到了 `_001` 等替代地图，视为 Step 1 失败，必须修覆盖/保存问题后重跑。
- `summary.proxyShapeCount` 应大于 0。
- `summary.spawnedEnvironmentActors` 应为 `4`。
- `summary.proxyStaticMeshFolder` 应为 `ProxyStaticMesh`。
- `summary.environmentFolder` 应为 `Env`。
- 复杂子关卡场景的 `summary.mapsScanned` 不应只停留在 1。
- 有 Level Instance 时检查 `summary.levelInstanceMapsQueued` 和 `summary.levelInstanceMapsSkipped`。
- 如果 `skipped` 中出现地面、墙体、楼梯、走廊、门框等主结构因为 `reason=movable` 被跳过，默认先修源场景 Actor / Component 的 Mobility；只有明确确认该 Movable 几何应参与本次烘焙时，才用 `-IncludeMovable` 重跑 Step 1。
- 有 ChildActor 蓝图时检查 `summary.childActorComponentsSeen`、`summary.childActorsQueued`、`summary.childActorsSkipped`。
- 有 PCG 时检查 `summary.pcgComponentsSeen`、`summary.pcgManagedResourcesSeen`、`summary.pcgGeneratedComponentsSeen`、`summary.pcgGeneratedActorsSeen`。
- 有 Landscape 时检查 `.landscape.json` 中的 `landscapeComponentsUsed`、`generatedMeshAssets`、`spawnedLandscapeActors`、`hiddenQuadsSkipped` 和 `proxyStaticMeshFolder`。

执行 Step 2 后，至少检查准备报告中的这些字段：

- `summary.completed` 应为 `true`。
- `summary.geometryActorsSeen` 应大于 0。
- `summary.geometryBounds.suggestedNavMeshBoundsVolumeTransform` 会给出自动创建 `NavMeshBoundsVolume` 时使用的建议位置和缩放。
- `summary.geometryTagAdded` 或 `summary.geometryTagAlreadyPresent` 应覆盖 StaticMesh / Landscape 数量。
- `summary.navMeshBoundsVolumesSeenAfter` 应大于 0。
- `summary.navMeshBoundsVolumeCreated` 表示本次是否自动创建了 `NavMeshBoundsVolume`。
- `summary.navMeshBoundsVolumeNavigationTagAlreadyPresent` 和 `summary.navMeshBoundsVolumeNavigationTagRemoved` 用于确认旧流程误打在 `NavMeshBoundsVolume` 上的 Navigation Tag 是否被清理。
- `summary.recastNavMeshActorsSeen` 应大于 0。
- `summary.recastNavMeshTagAdded` 或 `summary.recastNavMeshTagAlreadyPresent` 应表示 `RecastNavMesh` 已写入 Navigation Tag。
- `summary.recastNavMeshActorsWithNavigationTagAfter` 应等于 `summary.recastNavMeshActorsSeen`。
- `summary.manualNavMeshBoundsVolumeAdjustmentRequired` 固定为 `true`，后续必须提示用户手动调整范围。

如果 `UnrealEditor-Cmd` 最后返回非 0，但 JSON 报告已经完成，先读报告再判断是否失败。已知编辑器插件端口占用等关机阶段问题可能让命令返回非 0，但 AcousticProxy 报告和地图已经生成。

如果 `-Apply` 保存地图时报 `MoveFile ... Error Code 32`，通常是同一个 `.umap` 正被已打开的 `UnrealEditor.exe` 锁住。不要强制结束 Editor，避免丢失用户未保存改动；优先让用户保存并关闭 Editor 后重跑，或通过当前 Editor 的 MCP `SceneTools` / `ActorTools` 在已打开关卡内添加并保存。

live Editor MCP fallback 示例：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-PrepareAcousticBakeSceneMcp.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-GeometryReport Saved\OrionUE\ProjectAcoustics\militarycamp-acousticproxy-step2-dryrun-v2.json `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-acousticproxy-step2-mcp.json
```

该 MCP fallback 默认不切换关卡；如果当前 Editor 打开的不是目标关卡，它会停止并提示。只有明确传 `-LoadLevel` 时才切换关卡，避免覆盖用户当前打开场景的未保存改动。

## Step 3：Acoustic 材质属性指定

在 ProjectAcoustics Bake UI 的材质步骤中，先启用 `Use Physical Materials`。源码行为如下：

1. `UsePhysicalMaterials` 的勾选状态写入项目 `Config\ProjectAcoustics.ini` 的 `[UsePhysicalMaterials]` section，key 是当前 `GWorld->GetMapName()`。
2. Materials 表只扫描带 `AcousticsGeometry` 的 Actor。
3. StaticMesh 的材质 key 优先级是：`StaticMeshComponent.BodyInstance.GetSimplePhysicalMaterial()`、材质资产的 `GetPhysicalMaterial()`、最后才是 UE 材质名。
4. Landscape 的材质 key 优先级是：Landscape BodyInstance PhysMaterial、LayerInfo PhysMaterial、LayerInfo 名称、LandscapeMaterial PhysMaterial、LandscapeMaterial 名称。
5. Materials 表的保存位置是同一个项目配置文件的 `[Materials]` section，格式为 `UE材质名或PhysMaterial名=AcousticMaterialName,Absorptivity`。

自动指定脚本：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-AssignAcousticMaterials.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-acousticproxy-step3-materials-dryrun.json
```

dry-run 报告确认无误后，实际写入配置：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-AssignAcousticMaterials.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-acousticproxy-step3-materials-apply.json `
	-Apply
```

分类规则：

- 优先使用 `Plugins/Audio/ProjectAcoustics/Resources/DefaultMaterialProperties.json` 中已有 Acoustic Material 与 Absorption，因为这是 Bake UI 下拉表的来源。
- 如果 PhysMaterial 名称是 `Phys_XXX`，先去掉 `Phys_`、`PhysMat_`、`PM_` 等前缀，再按插件预置名和 EquivalenceList 匹配。
- 如果没有完全匹配，按关键词归到最接近的插件预置类别，例如 `concrete`、`brick unglazed`、`steel`、`glass window`、`wood`、`carpet heavy`、`grass`、`soil packed`、`gravel`、`asphalt`、`water surface`、`drapery medium`、`fiberboard shreddedwood`。
- 如果没有 PhysMaterial，就用 UE 材质名执行同样的匹配。
- 不要写入插件预置列表不存在的 Acoustic Material；未知材质最后落到 `Default,0.100000`，并在 JSON 报告中标为 `fallback`。

## Step 3 验证

执行 Step 3 后，至少检查报告中的这些字段：

- `summary.completed` 应为 `true`。
- `summary.geometryActorsScanned` 应大于 0，否则说明 Step 2 的 `AcousticsGeometry` 没准备好，或者打开的不是目标关卡。
- `summary.uniqueMaterialKeys` 应大于 0。
- `summary.componentPhysicalMaterialsUsed` 和 `summary.materialPhysicalMaterialsUsed` 表示 PhysMaterial 实际参与数量；如果两个都为 0，说明本关卡主要依赖材质名推断。
- `summary.materialNamesUsed`、`summary.landscapeLayerNamesUsed`、`summary.landscapeMaterialNamesUsed` 表示没有 PhysMaterial 时的材质名 fallback。
- `summary.fallbackMatches` 应尽量少；如果很多 key 落到 `Default`，需要人工检查报告中的 `materials[].key` 和 `materials[].sampleActors`。
- apply 后 `summary.usePhysicalMaterialsEnabled` 应为 `true`，`summary.mappingsWritten` 应等于 `summary.uniqueMaterialKeys`。
- apply 后检查 `Config/ProjectAcoustics.ini`，应有 `[UsePhysicalMaterials]` 下的 `<MapName>=true`，以及 `[Materials]` 下的材质映射。

## Step 4：计算 Probes 声学探针

计算 Probes 前必须暂停提示用户选择目标；不要因为用户只说“继续”就自行选择 `Fastest`。只有用户本轮已经明确说效率优先、速度最快、`Fastest`、精确度优先、最终质量或 `Quality`，才可以直接套用对应 preset。

```text
现在要生成 ProjectAcoustics Probes。这个步骤会生成 `.vox` 和 `_config.xml`，Probe 数量会直接影响后续烘焙耗时和 ACE 数据量。

请先确认这次要：
1. 效率优先 / 速度最快：使用 Fastest，探针更稀疏，适合快速验证流程，后续 bake 时间更短。
2. 精确度优先 / 最终质量：使用 Quality，探针更密，适合最终效果，后续 bake 时间更长。

你选 1 还是 2？
```

参数策略：

| 目标 | Max Frequency | Min Horizontal Spacing | Max Horizontal Spacing | Vertical Spacing | Min Height Above Ground | Receiver Spacing |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| `Fastest` | `250Hz` | `100cm` | `1000cm` | `300cm` | `150cm` | `1500cm` |
| `Quality` | `500Hz` | `50cm` | `350cm` | `100cm` | `75cm` | `150cm` |

说明：

- `Fastest` 用于快速生成 Probes 和预估后续 bake 时间。它会明显减少探针数量和输出数据规模，但门洞、室内小空间和高度变化复杂区域可能需要后续人工微调。
- `Quality` 接近插件默认高质量流程，更适合最终提交 bake 前使用。
- `Receiver Spacing` 主要影响 ACE 数据采样密度和运行时查询质量，不是 Probe 计算耗时的主因；快速模式把它调大是为了降低快速验证数据体积。
- 如果场景存在大型 RecastNavMesh，命令行流程默认记录 warning 并继续；需要人工阻止时传 `-StopOnLargeNavigationMesh`。

自动计算脚本：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-CalculateAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/<MapName>_AcousticProxy `
	-Preset Fastest `
	-Report Saved\OrionUE\ProjectAcoustics\<map-name>-step4-probes-fastest.json `
	-Overwrite
```

`-Overwrite` 会删除当前 prefix 对应的旧 `.vox` 和 `_config.xml` 后重新生成。没有传 `-Overwrite` 且已有 probe preview 文件时，脚本会停止并提示，避免覆盖已有结果。

如果已经生成了新的 Probe，但用户随后改口要求“用之前旧的”，不要再重算旧 Probe。先把当前 `Saved\OrionUE\ProjectAcoustics\AcousticsData` 中同 prefix 的 `.vox` 和 `_config.xml` 备份到带时间戳的目录，再从旧 Step 4 报告对应的旧 LocalBake 工作目录，或其他明确的旧 AcousticsData 备份中恢复旧 `.vox/_config.xml`。恢复后必须运行 `scripts/Test-AcousticProbeHealth.ps1`；只有 Probe health 通过，才允许 Step 5 使用旧 Step 4 报告、旧 `-BakeDir` 和 `-Resume` 继续。回复用户时要写明当前采用的是旧 preset、旧 `probeCount` 和旧 bake 工作目录，避免把刚生成的新质量档误认为正在使用。

如果场景已经有可用 Probes，用户后来又继续放置新的 `NavMeshBoundsVolume`，需要只给新增可导航区域补探针时，使用追加模式，不要传 `-Overwrite`：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-CalculateAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/<MapName>_AcousticProxy `
	-Preset Fastest `
	-Report Saved\OrionUE\ProjectAcoustics\<map-name>-step4-probes-append.json `
	-AppendToExistingProbeList
```

默认追加模式会先读取当前 `.vox` / `_config.xml` 中的现有 ProbeList，再按当前 Nav 重新生成一份新 ProbeList，然后把新 ProbeList 中不在旧列表附近的探针追加写回同一个 `_config.xml`。默认去重容差是 `50cm`，可用 `-AppendProbeDuplicateToleranceCm <值>` 调整。

如果用户明确要求“只对新放置 Nav 框选中的局部区域追加更密探针”，必须启用区域追加：

1. 在关卡中新增或选中用于框选区域的 `NavMeshBoundsVolume`。
2. 在该 Actor 的 `Tags` 数组添加 `AcousticsProbeAppendRegion`。只把这个 Tag 加在本次要追加的区域框上，不要加在全局 RecastNavMesh 或旧的大范围 Volume 上。
3. 如果该区域需要更密探针，可以在同一区域放 `AcousticsProbeVolume`，把 `VolumeType` 设为 `ProbeSpacing`，并把 `MaxProbeSpacing` 调小；或者用 `-Preset Quality` 重新生成候选。`ProbeSpacing` Volume 控制候选密度，`AcousticsProbeAppendRegion` Tag 控制最终只把哪些候选合并进现有 ProbeList。
4. 确保 RecastNavMesh 已经根据新增 Nav 体积构建完成，并且 `AcousticsNavigation` Tag 仍然打在 `RecastNavMesh` 上，不需要打在 `NavMeshBoundsVolume` 上。
5. 运行脚本时同时传 `-AppendToExistingProbeList` 和 `-AppendOnlyInTaggedRegion`：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-CalculateAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/<MapName>_AcousticProxy `
	-Preset Quality `
	-Report Saved\OrionUE\ProjectAcoustics\<map-name>-step4-probes-append-region.json `
	-AppendToExistingProbeList `
	-AppendOnlyInTaggedRegion
```

默认区域 Tag 是 `AcousticsProbeAppendRegion`。如果项目里要用自定义 Tag，可以传：

```powershell
-AppendProbeRegionTag MyProbeAppendRegion
```

区域边界如果需要外扩，可传 `-AppendProbeRegionBoundsPaddingCm <厘米>`。这只影响“候选探针是否算在区域内”的过滤边界，不改变 NavMesh 或几何。

区域追加不会原地增量修改已有 `.ace`。它只更新 Step 4 的 `_config.xml` ProbeList；之后 Step 5 仍需要重新运行 LocalBake 生成新的 `.ace`，再导入 `AcousticsData`。已有 `.ace` 是最终运行时数据，当前 ProjectAcoustics 本地烘焙流程没有可靠的“在 ACE 内追加 probe”接口。

报告中重点看：

- `summary.appendToExistingProbeList`：是否进入追加模式。
- `summary.probeListMerged`：是否已经把合并后的 ProbeList 写回并重新加载成功。
- `summary.existingProbeCount`：追加前已有探针数。
- `summary.generatedProbeCount`：按当前 Nav 全量重新生成出来的候选探针数。
- `summary.appendProbeRegionTag`：区域追加使用的 Actor Tag；为空表示没有启用区域过滤。
- `summary.appendProbeRegionActorCount`：找到几个带该 Tag 且有有效 Bounds 的区域 Actor。
- `summary.appendProbeRegionCandidateCount`：本次候选 ProbeList 中落在区域 Bounds 内的候选数量。
- `summary.appendProbeOutOfRegionCount`：被区域过滤丢弃的候选数量。
- `summary.appendedProbeCount`：真正新增到 ProbeList 的探针数。
- `summary.duplicateProbeCount`：被判定为旧区域重复探针而跳过的数量。
- `summary.probeCount`：最终写回后 Step 5 会使用的总探针数。

追加模式适用于“只扩大 Nav 覆盖范围、旧几何和旧 Nav 基本不变”的场景。区域追加适用于“旧大场景探针基本可用，但某几个室内、门洞、走廊或报错区域太稀疏，需要局部补密”的场景。如果旧场景几何、地形、Proxy 网格或 RecastNavMesh 参数已经大改，应使用 `-Overwrite` 全量重算，否则旧探针可能和新几何不匹配。

默认情况下，Step 4 脚本会启用本地 CPU 烘焙时间校准，并把用户提供的实测点作为默认基准：

- `250` 个 Probe：约 `210` 分钟，也就是 `3.5` 小时。
- `1150` 个 Probe：约 `5760` 分钟，也就是 `4` 天。

本地校准估算使用幂律模型：

```text
minutes = coefficient * pow(probeCount, power)
```

默认两个实测点拟合后，`power` 约为 `2.17`。这表示 Probe 数量翻倍时，时间大约增加 `2^2.17`，约 `4.5` 倍；它更接近本地 CPU 烘焙的非线性成本，不应再按线性 Probe 数量估算。

报告字段含义：

- `summary.projectAcousticsEstimatedProcessingMinutes`：ProjectAcoustics Python bridge 原始估算，来源是插件内部成本估算，不代表本机 CPU 实测。
- `summary.localCpuEstimatedProcessingMinutes`：按本地 CPU 校准点拟合出的估算。
- `summary.estimatedProcessingMinutes`：最终给用户展示的估算；启用本地校准且校准有效时，它等于 `localCpuEstimatedProcessingMinutes`。
- `summary.estimatedProcessingHours` / `summary.estimatedProcessingDays`：同一个最终估算的小时和天数。
- `summary.localCpu`：运行 commandlet 时 Unreal 看到的 CPU 名称、物理核数和逻辑线程数。
- `summary.localCpuCalibration.power`：非线性指数。该值越高，Probe 数增加后的耗时膨胀越严重。

如果用户给出新的本机实测样本，优先替换默认校准参数，而不是手算：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-CalculateAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/<MapName>_AcousticProxy `
	-Preset Fastest `
	-Report Saved\OrionUE\ProjectAcoustics\<map-name>-step4-probes-fastest.json `
	-Overwrite `
	-CalibrationProbeCountA 250 `
	-CalibrationMinutesA 210 `
	-CalibrationProbeCountB 1150 `
	-CalibrationMinutesB 5760
```

如果需要查看插件原始估算，可传 `-DisableLocalCpuBakeTimeCalibration`，但最终给用户做本地 bake 决策时不要只看插件原始估算。

如果需要质量优先：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-CalculateAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/<MapName>_AcousticProxy `
	-Preset Quality `
	-Report Saved\OrionUE\ProjectAcoustics\<map-name>-step4-probes-quality.json `
	-Overwrite
```

生成完成后，脚本会自动运行 `scripts/Test-AcousticProbeHealth.ps1`，并在 Step 4 主报告旁生成 `<report>.probe-health.json`。它会检查 `_config.xml` / `.vox` 是否存在、`NumProbes` 与 `<ProbeList>` 数量是否一致、`valueN` 是否连续、手动 ProbeList 是否仍是整数 voxel grid index、Probe 是否越出 `VoxelData` 分辨率，以及是否命中历史 LocalBake 日志里稳定失败的 probe index。

必须把报告中的 `summary.estimatedProcessingMinutes` / `summary.estimatedProcessingHours` / `summary.estimatedProcessingDays` 告诉用户，并说明它是否来自 `summary.estimationModel=LocalCpuPowerLawCalibration`。如果仍然是 `ProjectAcousticsPython`，说明本地 CPU 校准未启用或校准参数无效，需要重新传入实测点。同时必须读取：

- `summary.probeHealthStatus`
- `summary.probeHealthKnownFailedProbeCount`
- `summary.probeHealthKnownFailedProbeIndices`
- `summary.probeHealthReport`

如果 `probeHealthStatus=Failed`，不要进入 Step 5，先修 `_config.xml` / ProbeList / `.vox`。如果 `probeHealthStatus=Warning` 且 `probeHealthKnownFailedProbeCount > 0`，说明之前的 LocalBake 已经稳定证明这些 probe 无法初始化；优先在 Step 4.1 移动或删除这些 probe 后重新 Apply/Calculate。若只是为了产出一次可用 ACE，可以在 Step 5 用 `-ExcludeProbeIndices` 过滤这些 index，但这会丢掉这些位置附近的声学采样。

注意：这个 Step 4 预检不能 100% 预知全新的 Triton `no air voxel could be found` 失败。Windows 版 `Triton.LocalProcessor.exe` 的公开参数只有完整 LocalProcessor 流程，没有单 probe dry-run 或 probe subset 检查；因此“某个 source cell 两侧找不到 air voxel”的最终判定仍来自 LocalProcessor 初始化该 probe。Step 4 预检能提前发现结构损坏、坐标错误、越界和历史稳定坏点。

```text
Probes 已生成。根据当前 Probe 数量，后续 bake 预估约为 <time>。
这个值使用 <estimationModel>；如果是本地 CPU 校准模型，它来自当前机器的实测 Probe 数和耗时，仍会受 CPU 频率限制、散热降频、线程占用、磁盘和后台任务影响。
Probe health: <probeHealthStatus>；已知稳定失败 probe 数量 <probeHealthKnownFailedProbeCount>。
提交 bake 前建议打开 Bake Acoustics Mode 的 Probes 页面，检查探针是否覆盖所有可听区域、门洞、房间、楼层和关键通道；必要时手动添加/调整 Probe Volume、Pinned Probe 或重新调整 NavMeshBoundsVolume 后再算一次。
```

### Step 4.0：大场景预览和分区探针策略

ProjectAcoustics 没有“无需 bake 就能听到最终声学”的真实预览模式。运行时 `AAcousticsSpace` 只能加载 `.ace` 后查询 Triton 参数；Step 4 的 `.vox` / `_config.xml` 只能预览几何、voxel、Probe 位置和预计成本，不能产生最终 wet、RT60、occlusion 或 portaling 音频结果。

大场景不要一开始就全图高质量 bake。推荐分三层预览：

1. **几何预览**：Step 1-4 后打开 Bake/Debug 视图，看 voxel、Probe、门洞、房间、楼层、RecastNavMesh 是否覆盖。这个阶段不听效果，只排除明显封闭、错位、漏地形和 Probe 空洞。
2. **局部声学预览**：复制一个小范围 AcousticProxy 测试地图，只保留一个营房、走廊、门洞和一小段室外，使用 `Quality` 或更密手动 Probe 快速 bake。该结果用于确认材质、房间混响、门洞 portaling 和 source settings，不代表全图最终覆盖。
3. **全图增量验证**：全图先用稀疏户外 Probe 跑通，再对室内、门洞、楼梯、走廊、地下空间、玩家常驻点用 Probe Brush 或 `Add Probe` 手动追加。追加后使用 Step 5 的部分 `.enc` 复用，避免重算未改变的旧 Probe。

大型“户外 + 室内”地图的密度原则：

- 户外开阔地、远景道路、山坡可以稀疏，重点保证 listener 可达区域内有连续 Probe 覆盖。
- 室内房间、门洞两侧、走廊转角、楼梯上下口、地下入口、厚墙两侧必须加密；每个可进入小房间至少应有房间内部、门内侧、门外侧/走廊侧的 Probe。
- 如果一个位置运行时出现 `All probes discarded during interpolation`，不要只加最近一个 Probe；应沿同一声学连通区域补一小组 Probe，并检查 AcousticProxy 的门洞是否被 bounds/collision 代理封死。
- 自动 `Fastest` / `Quality` 是全局参数，不能自动做到“室内密、室外疏”。当前可控做法是：全局选择偏稀的基线，然后通过手动可编辑 Probe 和 Probe Brush 在室内局部加密。
- 在同一个 `.vox` 不变的前提下，移动、删除、追加 Probe 只改 `_config.xml` 的 `<ProbeList>`；如果几何、地形、门洞、Navigation 或材质重新生成，旧 Probe 的 `.enc` 不再视为安全复用。

### Step 4.1：手动编辑已生成的 Probes

插件侧扩展了 `ProjectAcousticsBakeUI` 的 Probes 面板，用于把 `_config.xml` 中生成的 ProbeList 转换成可编辑 Actor：

1. 在 Probes 页先完成一次 `Calculate`，确认生成 `.vox` 和 `_config.xml`。
2. 点击 `Make Probes Editable`，插件会从当前 `AcousticsSimulationConfiguration::GetProbeList()` 读取探针位置，在当前关卡生成 `AAcousticsPinnedProbe` Actor，并放入 Outliner 的 `ProjectAcoustics/EditableProbes` 文件夹。
3. 像普通 Actor 一样移动这些探针；选中后按 Delete 可以删除探针。
4. 点击 `Add Probe` 可以在当前编辑器视口相机前方新增一个可编辑探针。
5. Probes 页的 Brush 工具按钮应参考 UE `SFoliageEdit::BuildToolBar()`：使用 `FVerticalToolBarBuilder`、`FoliageEditToolbar` 样式、Foliage 的 `FoliageEditMode.SetPaint` / `FoliageEditMode.Erase` / `FoliageEditMode.SetSelect` 图标，以及 `EUserInterfaceActionType::ToggleButton`。不要退回普通 checkbox 或横向普通按钮。当前真实支持 `Select`、`Paint`、`Erase` 三个工具；`Select` 关闭笔刷并允许像普通 Actor 一样选中/拖动探针，`Paint` 添加探针，`Erase` 删除探针。
6. Brush 区域应保留 Foliage 的 Active Tool 文本样式 `FoliageEditMode.ActiveToolName.Text`，并按当前工具显示参数：`Select` 隐藏 Brush Options，`Paint` 显示 `Brush Size` 与 `Paint Density`，`Erase` 只显示 `Brush Size`。`Paint Density` 对外显示为 `0..1`，内部再映射到 ProjectAcoustics 探针采样数量；不要再暴露旧的整数 `Density` spinbox。
7. 视口笔刷显示必须参照 Foliage：使用 `/Engine/EditorLandscapeResources/FoliageBrushSphereMaterial`、`/Engine/EngineMeshes/Sphere` 和 transient `UStaticMeshComponent` 组成发光半球 brush，而不是只用 `PDI` 画平面圆圈。初始化时读取材质参数 `HighlightColor` 和 `OpacityAmount`，半径缩放使用 Foliage 的 `BrushRadius * 0.00625f`。`FAcousticsEdMode::Tick()` 负责在 Probes tab 且 brush active 时更新/注册该组件；切到 `Select`、切走 tab 或析构时必须 unregister，避免残留在视口。
8. Brush 交互应参考 UE `FoliageEdMode`：左键按下开始一个 brush stroke，拖动时连续刷，释放时结束同一个 undo transaction；移动相机、Alt 导航或正在拖 transform widget 时不要刷。
9. 添加模式按 `PI * BrushSize^2 * EffectivePaintDensity / 1000^2` 估算当前笔刷区域目标探针数量，再在笔刷圆盘内随机采样候选点，沿笔刷命中法线方向 trace 到表面，并按 ProjectAcoustics `horizontal_spacing_min` 做最小间距去重；不要每帧固定撒同一组黄金角点，否则拖刷时手感不像 Foliage 且容易堆点。
10. 切到 `Erase` 后，同一个笔刷会删除半径内由 Probe 编辑器管理的可编辑探针；删除模式不会删除用户自己手放且未标记为 `bManagedByProbeEditor` 的旧 `AAcousticsPinnedProbe`。处于 `Paint` 时，按住 `Shift` 可以临时进入快速删除模式，toolbar 仍保持 `Paint` 选中但半球颜色临时变红；`Ctrl + MouseWheel` 调整笔刷半径。
11. 点击 `Apply Probe Edits` 后，插件只收集由 Probe 编辑器管理的、且 `bIncludeInManualProbeList=true` 的 `AAcousticsPinnedProbe`，用 1cm 容差去重，转换为 Triton 坐标，只替换 `_config.xml` 的 `<NumProbes>` 和 `<ProbeList>`，再从文件重新加载 simulation config。不要收集所有 `bIncludeInManualProbeList=true` 的旧探针；用户手放过的非管理探针可能带着旧世界坐标，混入后会把 `_config.xml` 写成几个错误点，表现为 `Apply Probe Edits` 后 `Clear Editable Probe Actors` 的调试探针整体跳到别的位置。
12. 点击 `Clear Editable Probe Actors` 只会删除由这个 Probe 编辑器生成或管理的探针 Actor，不会删除用户自己手放的旧 `AAcousticsPinnedProbe`。

注意：

- Triton 预处理 API 只有 `AddPinnedProbe` 和 `GetProbeList`，没有公开的 `Set/Remove Probe` 接口；因此“移动/删除已生成探针”的持久化入口是 `_config.xml` 的 `<ProbeList>`，不是重新跑自动探针生成。
- `AAcousticsPinnedProbe` 新增了 `bIncludeInManualProbeList`。取消勾选后，这个 Actor 既不会写回手动 ProbeList，也不会在下一次 `Calculate` 中作为 pinned probe 加入 acoustic mesh。
- `Make Probes Editable` / `Add Probe` / Probe Brush 投放探针后，应关闭 `AAcousticsDebugRenderer::ShouldRenderProbes`，避免自动生成的调试探针和可编辑 Actor 同时显示造成“位置偏移”的错觉；`Clear Editable Probe Actors` 后要从当前 `_config.xml` 重新加载并恢复调试渲染。
- 用户再次打开关卡或从其他 BakeUI tab 切回 `Probes` 时，`SAcousticsProbesTab` 应自动尝试从当前 prefix 的 `.vox` / `_config.xml` 重新加载 `AcousticsSharedState::LoadSimulationConfigFromFile()`，并恢复 `AAcousticsDebugRenderer::ShouldRenderProbes=true`。大地图默认 `ProbesDrawDistance` 不能保持 2000cm 这类近距离值；切回 Probes tab 时要把已有 renderer 的探针显示距离提升到大地图默认值，避免用户误以为 Probe Debug 丢失。
- `Make Probes Editable` 生成的可编辑 `AAcousticsPinnedProbe` 必须落在 Persistent Level，并在 Spawn 后再次 `SetActorLocation` 到源 probe 的 Unreal 世界坐标。不要用 `EditorWorld->GetCurrentLevel()` 作为目标关卡；当前关卡如果是 streaming level / Level Instance / 带 Level Transform 的子关卡，会让所有可编辑 probe 整体偏移，点击 `Apply Probe Edits` 后还会把偏移写回 `_config.xml`。
- 如果用户反馈点击 `Make Probes Editable` 后再点 `Clear Editable Probe Actors`，生成探针整体仍然偏移，不要只检查 `SpawnActor` 坐标。必须同时处理 `AAcousticsDebugRenderer` 生命周期：`AcousticsSharedState::SetSimulationConfiguration(nullptr)` 要断开并删除当前世界里所有残留的 `AAcousticsDebugRenderer`，重新加载配置时只保留或创建一个 renderer，并让 `SetConfiguration()` 重新读取 ProbeList。`Clear Editable Probe Actors` 在重载 `_config.xml` 前也要强制清空当前 simulation config 和 debug renderer，避免旧 renderer 的 probe cache 或重复 renderer 继续显示旧坐标。
- 如果坐标链路审计显示 `maxSpawnLocationErrorCm=0`、`maxReloadLocationDeltaCm=0`，但编辑器里肉眼仍像整体偏移，继续排查旧版可编辑 `AAcousticsPinnedProbe` 残留。旧版本可能没有 `bManagedByProbeEditor=true`，只留下 `ProjectAcoustics/EditableProbes` 文件夹、`PA_EditableProbe*` / `PA_ManualProbe*` 名称、`bGeneratedFromSimulationConfiguration` 或 `SourceProbeIndex` 这类痕迹。`Clear Editable Probe Actors` 和 Brush Erase 的“由编辑器管理”判断必须同时识别这些旧痕迹，否则旧 Actor 会叠在新 DebugRenderer 上，让用户误以为 Clear 后探针整体偏移。
- 偏移修复后必须用 commandlet 做可重复审计，不要只靠目测。使用 `-AuditEditableProbes -SeedLegacyEditableProbeActors` 注入旧版残留探针，验证 `seededLegacyProbeActorCount` 等于 `deletedPreMakeProbeActorCount`、`afterClearPinnedProbeActors.managedByEditorCriteria=0`、`spawnedProbeActorCount` 等于 `reloadedProbeCount`，并且 `maxSpawnLocationErrorCm`、`maxReloadLocationDeltaCm`、`centroidInitialToSpawnedDeltaCm`、`centroidInitialToReloadedDeltaCm` 都为 0 或小于 0.1cm。
- 如果用户反馈某个手动坐标在 `Apply Probe Edits` 后变成另一个坐标，先跑 `-AuditManualProbeRoundTrip`。它会把指定 Unreal 坐标临时写进 `_config.xml`，通过 ProjectAcoustics loader 读回，并恢复原配置。报告里 `inputToReloadedDeltaCm <= 0.1` 说明 Triton/Unreal 坐标转换和 XML 写读链路没问题；继续排查 `Apply Probe Edits` 是否收集了非 Probe 编辑器管理的旧 `AAcousticsPinnedProbe`。
- 如果 `-AuditManualProbeRoundTrip` 报告 `reloadedProbeCount=1` 但 `inputToReloadedDeltaCm` 很大，而且 `reloadedProbeLocation` 是某个自动探针位置，说明 `TritonPreprocessor_SimulationConfiguration_CreateFromFile()->GetProbeList()` 没有按 `_config.xml` 的手动 `<ProbeList>` 原值返回。修复点应放在 `AcousticsSimulationConfiguration::GetProbeList`，但不能无条件优先读 XML：自动生成配置里的 `<ProbeList>` 可能处在 Triton 预处理内部坐标链路中，第一次 `Make Probes Editable` 应使用 Triton API 返回的世界坐标，否则会整体偏移。正确做法是 `Apply Probe Edits` 写 `_config.xml` 时在 `<ProbeList>` 前写入 `<!-- OrionManualProbeListOverride=true -->` 标记；`GetProbeList()` 只有看到这个标记时才解析 XML 并校验 `<NumProbes>` 与 `<valueN>` 数量一致，否则继续回退 Triton API。这样自动生成探针初次编辑不偏移，手动编辑后的 `Clear Editable Probe Actors` / DebugRenderer 预览又能看到同一份手动 ProbeList。
- Unreal commandlet 参数解析可能把小数点拆成独立 token，例如 `-ManualProbeX=-15505.643669` 在日志里显示为 `-ManualProbeX=-15505 .643669`。新增或修改数值参数解析时，不要只用普通 `FParse::Value` 后直接 `LexTryParseString`，需要像 `ParsePathParameter` 一样读取 `ValueEnd`，把紧随其后的 `.digits` 拼回去。

示例审计命令：

```powershell
& "<EngineRoot>\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" "<ProjectRoot>\<ProjectName>.uproject" `
	-run=ProjectAcousticsProbeBake `
	-SourceMap=/Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-AuditEditableProbes `
	-SeedLegacyEditableProbeActors `
	-Report=Saved/OrionUE/ProjectAcoustics/militarycamp-editable-probe-audit-current-dll.json `
	-unattended -nop4 -nosplash -NullRHI -NoSound
```

手动坐标写读审计命令：

```powershell
& "<EngineRoot>\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" "<ProjectRoot>\<ProjectName>.uproject" `
	-run=ProjectAcousticsProbeBake `
	-SourceMap=/Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-AuditManualProbeRoundTrip `
	-ManualProbeX=-15505.643669 -ManualProbeY=-4808.601954 -ManualProbeZ=-425.054347 `
	-Report=Saved/OrionUE/ProjectAcoustics/militarycamp-manual-probe-roundtrip-audit.json `
	-unattended -nop4 -nosplash -NullRHI -NoSound
```

`FParse::Value` 读取 `-Report=...json` 时在某些 Unreal commandlet 参数链路里可能把 `.json` 拆成紧随其后的 token；commandlet 侧应有 `ParsePathParameter` 兜底，把紧跟在报告路径后的扩展名拼回去，避免再次生成无扩展名报告。
- Probe Brush 不直接修改 `_config.xml`。它只增删可编辑 Actor，必须点击 `Apply Probe Edits` 才会持久化 ProbeList。
- `Apply Probe Edits` 不会重建 `.vox`。它适合在同一体素化场景内微调 probe 采样点；如果几何、Navigation、NavMeshBoundsVolume 或材质有变化，应重新执行 Step 2 到 Step 4。

如果用户刚刚修改过 ProjectAcoustics Bake UI 的 C++ commandlet，而编译时报 `UnrealEditor-ProjectAcousticsBakeUI.dll` 被 `UnrealEditor.exe` 占用，不要强杀编辑器。提示用户保存并关闭 Editor，重新构建 `ProjectAcousticsBakeUI` 后再运行本步骤。

如果 Step 4 commandlet 在启动时断言 `!IsRunningCommandlet()`，日志栈包含 `UAcousticsPythonBridge::Initialize()`、`GLevelEditorModeTools()` 或 `UnrealEdGlobals.cpp`，不要先按地图、Geometry 或 Navigation 问题处理。原因通常是命令行 commandlet 初始化 ProjectAcoustics Bake UI 时访问了全局 Editor Mode Manager。修复方式是在 `UAcousticsPythonBridge::Initialize()` 中只在 `!IsRunningCommandlet()` 时读取 `GLevelEditorModeTools()`，commandlet 环境下把 `m_AcousticsEditMode` 保持为 `nullptr`，然后继续初始化 ProjectAcoustics 路径配置和 projection。修复后重新构建 `ProjectAcousticsBakeUI`，再运行 `Invoke-CalculateAcousticProbes.ps1` 验证报告里的 `summary.completed`、`.vox` 和 `_config.xml`。

如果日志已经显示 `SUCCESS: NumProbes`，并且 `.vox` / `_config.xml` 已经写出，但退出阶段断言 `!IsRunningCommandlet()`，栈里包含 `SAcousticsProbesTab::~SAcousticsProbesTab()` 和 `GLevelEditorModeTools()`，说明探针计算本体成功，失败点是 Probes 面板析构时清理 Probe Brush 仍然访问了 Editor Mode Manager。修复方式是在 `SAcousticsProbesTab` 构造和析构里都用 `!IsRunningCommandlet()` 保护 `GLevelEditorModeTools()`、`SetProbeBrushHandler` 与 `ClearProbeBrushHandler`。修复后重新构建 `ProjectAcousticsBakeUI` 并重跑 Step 4；验证标准是 commandlet 正常生成 JSON，`summary.completed=true`、`summary.probeCount>0`、`summary.voxFileExists=true`、`summary.configFileExists=true`。

如果 Step 4 脚本还没有进入 ProjectAcoustics 日志、没有生成 JSON 报告，只看到 `UnrealBuildTool -Mode=ValidatePlatforms`、`Unable to find required SDK version 'MainVersion'`、`LinuxArm64` 或 `VisionOS` 之类平台 SDK 报错，先检查实际执行的 `UnrealEditor-Cmd.exe`。脚本默认会依次使用 `UNREAL_EDITOR_CMD`、正在运行的 Editor 路径、`Saved/OrionUE/UnrealEngine/InstallDirectory.txt`，该缓存可能指向另一套引擎。修复方式是显式传 `-EditorCmd "<EngineRoot>\Engine\Binaries\Win64\UnrealEditor-Cmd.exe"`，并确保它和刚刚构建 `ProjectAcousticsBakeUI` 的引擎一致；验证标准仍然是 JSON 报告里的 `summary.completed=true`。

## Step 4 验证

执行 Step 4 后，至少检查报告中的这些字段：

- `summary.completed` 应为 `true`。
- `summary.preset` 应等于用户选择的 `Fastest` 或 `Quality`。
- `summary.usePhysicalMaterials` 应与 Step 3 写入的 `[UsePhysicalMaterials]` 一致。
- `summary.materialMappingsLoaded` 应大于 0，否则 Step 3 材质映射可能没有写入。
- `summary.probeCount` 应大于 0。
- `summary.voxFileExists` 和 `summary.configFileExists` 都应为 `true`。
- `summary.estimatedProcessingMinutes` 用于向用户报告后续 bake 预估时长；本地校准启用且有效时，应同时看到 `summary.estimationModel=LocalCpuPowerLawCalibration`。
- `summary.projectAcousticsEstimatedProcessingMinutes` 用于保留插件原始估算，排查估算偏差时可对比。
- `summary.localCpuCalibration.valid` 应为 `true`；如果为 `false`，检查校准点是否为正数且两个 ProbeCount 不相同。

如果命令行返回非 0，但 JSON 报告已完成，先以报告为准判断；若报告不存在或 `summary.completed=false`，再读日志中的 ProjectAcoustics 错误。

Step 4 验证通过后必须暂停并回复用户，不要自动执行 Step 5。回复中至少包含：

- `ProbeCount`。
- 预估本地 CPU bake 时间。
- Probe Health 状态和报告路径。
- `.vox` 与 `_config.xml` 路径。
- 让用户打开 `BakeMap`，进入 Project Acoustics Bake UI 的 Probes 页面检查探针覆盖，必要时手动移动、删除或添加探针；完成后保存并回复“继续”。

只有当用户在同一轮请求里明确写出“不用看探针，直接本地烘焙”或“直接 Step 5”时，才允许跳过这个暂停点。

## Step 5：LocalBake 烘焙 Probes 生成 ACE

Step 5 使用 ProjectAcoustics 本地烘焙工具 `Triton.LocalProcessor.exe`，把 Step 4 生成的 `.vox` 和 `_config.xml` 烘焙成 `.ace`。所有中间文件必须保存在项目内：

```text
Saved\OrionUE\ProjectAcoustics\LocalBake\<Prefix>_<yyyyMMdd-HHmmss>
```

注意区分两类 AcousticsData：

1. Step 4 生成的 `.vox` 和 `_config.xml` 是制作中间产物，不是运行时资产。当前默认把它们写到 `Saved\OrionUE\ProjectAcoustics\AcousticsData`。旧版本曾写到 `Plugins\Audio\ProjectAcoustics\AcousticsData`，这是历史兼容路径，不应作为新输出位置。
2. Step 5 生成的最终 `.ace` 是运行时真实加载的二进制，仍应复制到 `Content\Acoustics\<Prefix>.ace`，并导入为 `/Game/Acoustics/<Prefix>` 的 `UAcousticsData`。`UAcousticsData` 资产可以放在内容目录任意位置，但源码要求 ACE 文件位于项目 `Content/Acoustics` 下。

当前只迁移 Step 4 的 `.vox/_config.xml` 输出目录，不改变最终 `.ace` 的 `Content\Acoustics` 运行时契约。`AcousticsPythonBridge` / `AcousticsSharedState` 的 `content_dir` 默认值指向 `Saved\OrionUE\ProjectAcoustics\AcousticsData`；Step 5 / Probe health 脚本也先读新目录，再兼容旧插件目录，直到旧文件全部清理。

本 Skill 已提供包装脚本：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-LocalBakeAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-ProbeReport Saved\OrionUE\ProjectAcoustics\militarycamp-step4-probes-fastest-rerun.json `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-step5-localbake.json
```

如果把 LocalBake 放到后台执行，必须立即附着监控脚本，不要只启动 bake 后停止：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Watch-LocalBakeAcousticProbes.ps1 `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-step5-localbake-active.json `
	-MonitorReport Saved\OrionUE\ProjectAcoustics\militarycamp-step5-localbake-monitor.json `
	-PollSeconds 30
```

监控脚本行为：

1. 不启动新的 `Triton.LocalProcessor.exe`，只读取已有 LocalBake 报告中的 `bakeDir`。
2. 每轮统计工作目录中的 `.enc` 数量，并同时读取原始报告里的状态。
3. 用累计 `.enc` 生成速度作为主估算；只有近期窗口至少 2 分钟且新增至少 3 个分片时，才把近期速度按 30% 权重混入，避免分片生成不均匀导致 ETA 大幅跳动。
4. 持续写独立 `monitor.json`，字段包括 `percentComplete`、`estimatedRemainingMinutes`、`recentArtifactsPerMinute`、`processorPid`、`outputAceFile`、`contentAceFile`、`importedAsset`。
5. 如果原启动脚本正常完成，监控脚本观察到 `Completed` 后退出。
6. 如果 `Triton.LocalProcessor.exe` 已退出且 `.ace` 已存在，但原启动脚本没有完成复制/导入，监控脚本会在宽限轮询后复制 `.ace` 到 `Content\Acoustics`，并调用 `import-acoustic-ace.py` 导入 `/Game/Acoustics/<Prefix>`。
7. 如果原报告进入 `AceCopiedImportFailed`，监控脚本会用同一 `.ace` 再尝试一次导入；仍失败时才把错误报告给用户。
8. 如果 stdout 显示 `Data was either missing or from a mismatched bake`，或者 `.enc` 数量小于 `NumProbes`，不能导入任何输出；先判断缺失是否是末尾连续缺失。`-Resume` 只会从最后一个 `.enc` index 继续，不能补非连续缺洞。

脚本行为：

1. 从 `Saved\Config\ProjectAcoustics.cfg` 的 `level_prefix_map` 解析关卡对应 Prefix；例如 `MilitaryCamp_AcousticProxy` 对应 `MilitaryCamp_AcousticProxy_AcousticsData`。这是 ProjectAcoustics Bake UI 的本地制作配置，不是运行时或 cook 必需的项目默认配置；旧版 `Config\ProjectAcoustics.cfg` 仅作为迁移兼容读取。
2. 找到当前 Step 4 生成的 `<Prefix>.vox` 和 `<Prefix>_config.xml`。默认位置是 `Saved\OrionUE\ProjectAcoustics\AcousticsData`。脚本会兼容读取旧的 `Plugins\Audio\ProjectAcoustics\AcousticsData`，但不要再使用更旧的 `Plugins\ProjectAcoustics\AcousticsData`。
3. 读取 `_config.xml` 中的 `<NumProbes>` 与 `<OutputFilePrefix>`；如果用户手动编辑过 Probes，以当前 `_config.xml` 为准，不再相信旧 Step 4 报告里的旧 Probe 数量。
4. 把 `Triton.LocalProcessor.exe`、`ClientTelemetry.dll`、`libfbxsdk.dll`、`Usage.txt`、`.vox`、`_config.xml` 复制到 `Saved\OrionUE\ProjectAcoustics\LocalBake\<Prefix>_<timestamp>`。
5. 如果复制后的 `_config.xml` 带 `<!-- OrionManualProbeListOverride=true -->`，脚本会检查 `<ProbeList>` 的 `i/j/k` 是否已经是 voxel grid index；如果仍是 Triton 米坐标，就按 `VoxelData/Voxelization_Bounding_Box/MinCorner` 和 `Cell_Size` 转成整数 grid index 后再交给 LocalProcessor。
6. 启动 `Triton.LocalProcessor.exe --configfile <Prefix>_config.xml --WorkingDir <BakeDir> --OutputName <Prefix>`。
7. 烘焙过程中每隔 `-PollSeconds` 秒轮询工作目录中的 `.enc` 数量，并写 JSON 报告。已有 `.enc` 时按 `elapsed / completedProbeArtifacts * remainingProbes` 估算剩余时间；还没有 `.enc` 时先使用 Step 4 的 CPU 幂律估算。
8. 完成后找到 `<Prefix>.ace`，复制到 `Content\Acoustics`。
9. 默认调用 Unreal Python 脚本 `scripts/import-acoustic-ace.py`，用 `.ace` 创建或更新 `/Game/Acoustics/<Prefix>` 的 `UAcousticsData` 资产。只想复制 `.ace` 而不导入 uasset 时传 `-SkipUAssetImport`。

`Triton.LocalProcessor.exe` 在某些版本里可能把最终输出写成无扩展名的 `<Prefix>` 文件，而不是 `<Prefix>.ace`。脚本必须先把这个文件在 `BakeDir` 内复制成 `<Prefix>.ace`，再复制到 `Content\Acoustics` 和导入资产；但前提仍然是 `.enc` 数量已经达到 `NumProbes`，否则无扩展名输出也只是半成品。

正式执行前可以先验证输入和目录准备，不启动长时间 CPU bake：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-LocalBakeAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-ProbeReport Saved\OrionUE\ProjectAcoustics\militarycamp-step4-probes-fastest-rerun.json `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-step5-localbake-prepare.json `
	-PrepareOnly
```

如果要限制 CPU 占用，可以传 `-NumThreads`，例如：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-LocalBakeAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-NumThreads 24 `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-step5-localbake.json
```

如果 LocalBake 被中断，保留原工作目录并传 `-BakeDir` 与 `-Resume`：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-LocalBakeAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-BakeDir Saved\OrionUE\ProjectAcoustics\LocalBake\<Prefix>_<timestamp> `
	-Resume `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-step5-localbake-resume.json
```

如果误启动了 LocalBake，或用户要求先回到 Step 4 人工检查探针，立即停止对应工作目录里的 `Triton.LocalProcessor.exe`，但不要删除 `BakeDir` 和已生成的 `.enc`：

```powershell
$Report = "Saved\OrionUE\ProjectAcoustics\<map-name>-step5-localbake.json"
$Summary = (Get-Content -Raw $Report | ConvertFrom-Json).summary
$Processor = Get-Process Triton.LocalProcessor -ErrorAction SilentlyContinue | Where-Object {
	$_.Path -and $Summary.bakeDir -and ($_.Path -like (Join-Path $Summary.bakeDir "*"))
} | Select-Object -First 1
if ($Processor)
{
	$ProcessorId = $Processor.Id
	Stop-Process -Id $ProcessorId -Force
}
```

PowerShell 的 `$PID` 是只读自动变量；停止进程脚本里不要把变量命名为 `$pid` / `$PID`，用 `$ProcessorId` 这类名称。停止后检查报告应显示没有 `contentAceFile`、没有 `importedAsset`，并且工作目录里只有局部 `.enc`，没有导入运行时资产。

如果 LocalProcessor 最终缺失的是非连续 probe index，而且重跑后同一批 index 稳定缺失，可以剔除这些坏 probe 并复用原工作目录中已成功的 `.enc`，让脚本重编号 ProbeList 后只做 Collate 和导入：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-LocalBakeAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-BakeDir Saved\OrionUE\ProjectAcoustics\LocalBake\<Prefix>_filtered `
	-ExcludeProbeIndices "1,53,77,88,165,192,197,209,210,250,258,259,328,377,409,416,429" `
	-ReuseProbeArtifactsFromBakeDir Saved\OrionUE\ProjectAcoustics\LocalBake\<Prefix>_<failed-run-timestamp> `
	-Resume `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-step5-localbake-filtered.json
```

该路径会把旧 `.enc` 按过滤后的 ProbeList 新顺序复制并重命名，因此只适合“坏 probe index 已确认、其余 `.enc` 均存在”的情况。报告里的 `excludedProbeCount`、`excludedProbeIndices`、`reusedProbeArtifacts` 必须和预期一致。

如果只是追加室内 Probe，且 `.vox`、材质和旧 Probe 坐标没有改变，可以部分复用旧 `.enc`，只计算新增加或缺失的 Probe：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-LocalBakeAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/<MapName>_AcousticProxy `
	-BakeDir Saved\OrionUE\ProjectAcoustics\LocalBake\<Prefix>_append `
	-ReuseProbeArtifactsFromBakeDir Saved\OrionUE\ProjectAcoustics\LocalBake\<Prefix>_<previous-successful-run> `
	-AllowPartialProbeArtifactReuse `
	-Resume `
	-Report Saved\OrionUE\ProjectAcoustics\<map-name>-step5-localbake-append.json
```

该模式会复制能匹配旧 index 的 `.enc`，报告 `reusedProbeArtifacts`；对旧目录中不存在的 index 记录 `missingReusedProbeArtifactIndices`，再让 LocalProcessor 用 `--Resume true` 只补算缺失部分。适用边界：

- 适合“旧 Probe 保持原顺序和坐标，只在末尾追加室内 Probe”。
- 可以用于重试少量缺失 Probe，但如果缺失 Probe 稳定失败，应回到 Step 4 移动/删除坏 Probe，或显式 `-ExcludeProbeIndices`。
- 不适合重新生成几何、Nav、材质、voxel cell size 或大量重排 ProbeList 后复用；这些情况下旧 `.enc` 与当前 acoustic mesh 不再是同一问题。
- 最终导入前仍必须满足 `.enc` 数量等于当前 `NumProbes`。部分复用只是节省计算，不允许导入半成品。

注意：

- LocalBake 是本机 CPU 计算，耗时主要跟 Probe 数量、最高频率、场景体素复杂度、线程数、散热降频和后台占用相关；大关卡不要在没有确认的情况下直接启动。
- Step 5 是必须监控到完成的长任务。启动后要让 agent 或外部 shell 继续运行 `Watch-LocalBakeAcousticProbes.ps1`，直到 `monitor.json` 或源报告状态为 `Completed`，并确认 `contentAceFile` 和 `importedAsset` 已写入。
- Step 5 只烘焙当前 `.vox/_config.xml`。如果几何、材质、NavMeshBoundsVolume、RecastNavMesh 或 ProbeList 改了，先重新执行 Step 2-4。
- Step 4 生成的 `.vox` 和 `_config.xml` 是制作中间产物，默认放在 `Saved\OrionUE\ProjectAcoustics\AcousticsData`。如果看到 `Plugins\Audio\ProjectAcoustics\AcousticsData`，说明仍有历史输出；脚本会兼容读取，但后续应迁移到 `Saved` 下，避免污染插件目录。如果看到 `Plugins\ProjectAcoustics\AcousticsData`，说明更旧的默认路径还在生效，应迁移文件并重启 Editor 或重新构建 Bake UI。
- ProjectAcoustics Python 启动脚本必须来自 `Plugins\Audio\ProjectAcoustics\Content\Python`。如果运行 Bake UI 或 commandlet 后出现空目录 `Plugins\ProjectAcoustics\Content\Python`，说明 Python bridge 的 `project_config.plugins_dir` 仍按旧 SDK 安装布局指向项目 `Plugins` 根目录；本项目应把它设为 `Plugins\Audio`，让内部追加 `ProjectAcoustics/Content/Python` 后落到真实插件目录。
- LocalProcessor 读取 `_config.xml` 的 `<ProbeList>` 时要求 `i/j/k` 是 voxel grid index，不是 Triton 米坐标。手动 ProbeList 如果写成负数或小数 Triton 坐标，LocalProcessor 可能在第一个 task 附近直接 access violation 崩溃；Step 5 脚本会在复制出来的 LocalBake 配置上自动转换，但插件侧写入 ProbeList 的 C++ 代码也应保持同一契约。
- 如果 LocalProcessor 末尾提示缺失或 mismatched probe indices，即使日志最后写了 `LocalProcessor finished successfully`，也要按失败处理：保留已有 `.enc`，不要删除 `BakeDir`，把半成品输出改名备份。只有末尾连续缺失时才用 `-Resume`；非连续缺洞要重跑验证，如果同一批 index 稳定缺失，就用 `-ExcludeProbeIndices` 过滤坏 probe 或回到 Step 4 手动删除/移动这些 probe 后重新生成配置。
- `Content/Acoustics/<Prefix>.ace` 是运行时真正加载的二进制文件；`/Game/Acoustics/<Prefix>` 的 `UAcousticsData` 资产只是指向这个 ACE 文件。
- 同名 `UAcousticsData` 已存在时，导入或重烘同名 ACE 通常只需要替换 `Content/Acoustics/<Prefix>.ace`；`.uasset` 只保存 `AceFilePath`，文件时间不变不代表导入失败。验证时比对 LocalBake 输出 ACE 与 Content ACE 的哈希，并确认 `/Game/Acoustics/<Prefix>` 资产存在即可。
- 如果 Unreal Python 导入失败但 `.ace` 已复制到 `Content\Acoustics`，先看 LocalBake 报告里的 `status=AceCopiedImportFailed` 和工作目录内 `ImportAcousticAce.log`。通常可以打开 Editor 后在 Content Browser 手动导入同一个 `.ace`，或重跑脚本并显式传正确 `-EditorCmd`。

## Step 5 验证

执行 Step 5 后，至少检查报告中的这些字段：

- `summary.status` 应为 `Prepared`、`Running`、`Completed`、`Failed` 或 `AceCopiedImportFailed`。完整成功必须是 `Completed`。
- `summary.bakeDir` 必须位于 `Saved\OrionUE\ProjectAcoustics\LocalBake`。
- `summary.probeCount` 必须和当前 `_config.xml` 的 `<NumProbes>` 一致；如果和旧 Step 4 报告不同，以 `_config.xml` 为准。
- `summary.probeListManualOverride` 表示当前配置是否带手动 ProbeList 标记；`summary.probeListConvertedToVoxelGrid` 和 `summary.probeListConvertedCount` 表示脚本是否把 Triton 坐标转换成 LocalProcessor 需要的 grid index。
- `summary.estimatedMinutes` / `summary.estimatedHours` 是启动前估算；`summary.estimatedRemainingMinutes` 是运行中动态剩余时间。
- `summary.completedProbeArtifacts` 运行中应逐步增加；它基于工作目录中的 `.enc` 中间文件数量。
- `summary.reusedProbeArtifacts` / `summary.missingReusedProbeArtifactIndices` 用于确认增量追加是否真正复用旧 `.enc`，以及还需要重新计算哪些 Probe。
- `summary.effectiveResume` 在复用旧 `.enc` 时应为 `true`，否则 LocalProcessor 可能不会按预期跳过已有 probe artifacts。
- `summary.outputAceFile` 完成后应存在于 LocalBake 工作目录。
- `summary.contentAceFile` 完成后应存在于 `Content\Acoustics`。
- `summary.importedAsset` 默认应为 `/Game/Acoustics/<Prefix>`；如果传了 `-SkipUAssetImport`，该字段可以为空。
- `summary.exitCode` 应为 `0`；否则读 `stdoutLog` / `stderrLog`。

本次 `MilitaryCamp_AcousticProxy` 的 Step 5 PrepareOnly 验证结果：

- 报告：`Saved\OrionUE\ProjectAcoustics\militarycamp-step5-localbake-prepare.json`
- 工作目录：`Saved\OrionUE\ProjectAcoustics\LocalBake\MilitaryCamp_AcousticProxy_AcousticsData_20260630-130020`
- 当前 `_config.xml` 的 `NumProbes=471`
- 估算耗时约 `830.1` 分钟，也就是 `13.8` 小时。这个值使用 Step 4 的本机 CPU 幂律校准点计算；旧 Step 4 报告中曾出现 `1022` 个 Probe，但当前配置已被手动 ProbeList 覆盖为 `471` 个 Probe。

## Step 6：应用烘焙声音到真实地图

Step 6 只处理真实游戏地图，不处理 AcousticProxy 烘焙地图。AcousticProxy 地图用于 Step 1-5 的几何、Navigation、Probe 和 LocalBake；运行时要把最终 `UAcousticsData` 绑定回玩家实际进入的关卡。

本步骤要在目标游戏地图中创建或复用两个 Actor：

1. `AcousticsSpace`：运行时真正加载 ACE 并服务 ProjectAcoustics 查询的 Actor。
2. `AcousticsDebugRenderer`：BakeUI 模块提供的编辑器调试 Actor，用于查看 Probes / Voxels；它来自 `ProjectAcousticsBakeUI` 的 `UncookedOnly` 模块，不要把它当 packaged runtime 依赖。

两个 Actor 都放到 World Outliner 的 `Acoustics` 文件夹。`AcousticsSpace.AcousticsData` 必须指定 Step 5 导入出来的 `UAcousticsData`，例如 `/Game/Acoustics/MilitaryCamp_AcousticProxy_AcousticsData`。

优先从 Step 5 报告读取导入资产：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-ApplyAcousticRuntime.ps1 `
	-TargetMap /Game/MC_Environment/Maps/MilitaryCamp `
	-Step5Report Saved\OrionUE\ProjectAcoustics\militarycamp-step5-localbake-active.json `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-step6-apply-runtime-dryrun.json
```

dry-run 正常后，实际写入并保存真实地图：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-ApplyAcousticRuntime.ps1 `
	-TargetMap /Game/MC_Environment/Maps/MilitaryCamp `
	-Step5Report Saved\OrionUE\ProjectAcoustics\militarycamp-step5-localbake-active.json `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-step6-apply-runtime.json `
	-Apply
```

如果不想依赖 Step 5 报告，也可以显式传资产：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-ApplyAcousticRuntime.ps1 `
	-TargetMap /Game/MC_Environment/Maps/MilitaryCamp `
	-AcousticsData /Game/Acoustics/MilitaryCamp_AcousticProxy_AcousticsData `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-step6-apply-runtime.json `
	-Apply
```

脚本默认会拒绝目标名位于 `/Game/Acoustics/AcousticProxyMaps/` 或以 `_AcousticProxy` 结尾的地图，避免把运行时 Actor 放回烘焙代理地图。只有明确知道自己在做调试时才传 `-AllowProxyMap`。

`Invoke-ApplyAcousticRuntime.ps1` 默认会从环境变量、正在运行的 Editor 或 `Saved\OrionUE\UnrealEngine\InstallDirectory.txt` 推断 `UnrealEditor-Cmd.exe`。如果命令在写出 Step 6 报告和日志前就返回失败，只输出 UBT / Editor 启动行，通常是默认引擎路径不可靠或不匹配。此时不要反复重跑默认命令；改为显式传入本轮 Step 4/5 已验证的 `-EditorCmd <EngineRoot>\Engine\Binaries\Win64\UnrealEditor-Cmd.exe`，并在 dry-run 和 apply 中使用同一个引擎路径，避免混用不同 UE 安装。

如果 `-Apply` 保存地图时报 `MoveFile ... Error Code 32`，通常是同一个 `.umap` 正被已打开的 `UnrealEditor.exe` 锁住。不要强制结束 Editor；让用户保存并关闭 Editor 后重跑，或改用 live Editor 会话在当前打开关卡里放置 Actor。

## Step 6 验证

执行 Step 6 后，至少检查报告中的这些字段：

- `summary.completed` 应为 `true`。
- `summary.targetMap` 应是实际游戏地图，不能是 AcousticProxy 地图。
- `summary.acousticsData` 应指向 Step 5 生成的 `/Game/Acoustics/<Prefix>`。
- `summary.acousticsDataExists` 应为 `true`，`summary.acousticsDataClass` 应为 `AcousticsData`。
- `summary.acousticsSpaceActorsSeen` / `summary.acousticsDebugRendererActorsSeen` 表示写入前是否已经存在对应 Actor。
- `summary.acousticsSpaceCreated` 或 `summary.acousticsSpaceActorsSeen > 0` 应表示目标地图里有 `AcousticsSpace`。
- `summary.acousticsDebugRendererCreated` 或 `summary.acousticsDebugRendererActorsSeen > 0` 应表示目标地图里有 `AcousticsDebugRenderer`。
- `summary.acousticsDataAssigned` 或 `summary.previousAcousticsData` 已经等于目标资产，表示 `AcousticsSpace.AcousticsData` 已绑定。
- `summary.acousticsSpaceFolderSet` 和 `summary.acousticsDebugRendererFolderSet` 在 apply 后应为 `true`，表示 Outliner 文件夹已设置为 `Acoustics`。
- `summary.saved` 在 apply 后应为 `true`；如果为 `false`，看 `summary.saveError` 和命令日志。

应用完成后，在 Editor 中打开真实地图，检查 World Outliner 的 `Acoustics` 文件夹。应该能看到 `AcousticsSpace` 和 `AcousticsDebugRenderer`。选中 `AcousticsSpace`，Details 面板中的 `AcousticsData` 应指向 Step 5 导入的资产。运行 PIE 时，ProjectAcoustics 查询和 SourceDataOverride 应通过这个 `AcousticsSpace` 加载 `Content/Acoustics/<Prefix>.ace`。

## Step 7：烘焙后运行时空间音频优化

Step 1-6 只完成“声学数据生产和绑定”。ProjectAcoustics 源码里更有价值的部分在运行时层：`AAcousticsSpace` 加载 ACE 并维护 tile streaming、listener/outdoorness/distance 查询；`ProjectAcousticsNative` 通过 SourceDataOverride 每帧把声学查询结果写进 source 的遮挡、portaling 位置、混响 send 和 MetaSound 参数。优化空间音频时，优先按下面顺序检查。

### 7.1 按声源配置 SourceDataOverride

重要声源不要只依赖全局默认值。ProjectAcoustics 支持两种入口：

1. 在 Sound Attenuation 上添加 `UAcousticsSourceDataOverrideSourceSettings`。
2. 对关键 Actor 使用 `UAcousticsAudioComponent`，直接在组件上设置 `FAcousticsSourceSettings`。

源码优先级是 `UAcousticsAudioComponent` 高于 attenuation asset。也就是说：组件上的 ProjectAcoustics source settings 会覆盖 Attenuation 资产里的设置。适合单独调优的声源包括脚步、枪声、角色语音、门后敌人、室内机器、远处广播、警报器和环境循环声。

可复用资产化做法：

1. 创建 `UAcousticsSourceDataOverrideSourceSettings` 设置资产，命名统一使用 `AcousticsSettings_XXX`，默认放在 `/Game/Acoustics/SourceDataOverride/AcousticsSettings_Default`。
2. 在每个需要 ProjectAcoustics 传播的 `USoundAttenuation` 上打开 `bEnableSourceDataOverride`。
3. 把该设置资产写入 attenuation 的 `SourceDataOverridePluginSettingsArray`，让多个 Attenuation 共享同一套 Portaling / Occlusion / Reverb / Dynamic Opening 参数。

自动化命令：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-ConfigureAcousticSourceDataOverride.ps1 -SettingsAsset /Game/Acoustics/SourceDataOverride/AcousticsSettings_Default -AllAttenuationAssets -ReplaceExisting -Apply
```

保存型 `-Apply` 会写入 `USoundAttenuation` 资产，运行前必须关闭 Unreal Editor。编辑器打开时 Windows 可能锁住部分 `.uasset`，导致有些 attenuation 保存成功、有些报 `Error Code 32` 失败；脚本默认会阻止这种风险。需要只验证会话内属性写入时传 `-NoSave`，只有明确接受部分保存风险时才传 `-AllowRunningEditor`。

如果只想处理某个真实地图引用到的 attenuation，用 `-TargetMap /Game/<Maps>/<MapName>` 替代 `-AllAttenuationAssets`。如果只想处理指定资产，用 `-Attenuation /Game/Audio/AttenuationPresets/ATT_Default`。默认不替换已有 ProjectAcoustics source settings；只有传 `-ReplaceExisting` 时才会把旧的 per-asset 设置替换成共享设置资产，避免覆盖已经单独调过的脚步、武器、语音或 UI 2D 声音。

关键开关：

- `EnablePortaling`：让声音方向沿声学最短路径，从门口、窗洞、走廊转角传来，而不是从墙后直线穿过。
- `EnableOcclusion`：把 ProjectAcoustics 的遮挡量写入 UE source occlusion。
- `EnableReverb`：让 wet loudness、decay、outdoorness 和 angular spread 参与混响。
- `ApplyAcousticsVolumes`：允许 Runtime Volume 叠加设计参数。
- `ApplyDynamicOpenings`：允许门窗等动态开口参与查询；只给需要响应开合状态的声源开启。
- `Resolver` / `PushDirection`：处理房间边界、门洞附近或探针插值歧义。
- `ShowAcousticParameters`：调试单个声源的查询结果。

### 7.2 Portaling 是提升“隔墙方向感”的第一优先级

`EnablePortaling=true` 时，SourceDataOverride 会把 `WaveInstance` 的位置改成 Triton 查询得到的 shortest path source position，并按 dry arrival direction 写 `AbsoluteAzimuth`。这能让门后、墙后、拐角后的声音从正确开口方向传来。

推荐：

- 3D 世界声源、敌人、脚步、武器、语音、机器声默认开启。
- UI、音乐、2D 声音、不想被空间声学改变方向的声音关闭。
- 如果声音在门洞边缘左右跳，先看 probe 密度和开口几何，再考虑 per-source `Resolver`。

自动化打开方式：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-ApplyAcousticPortaling.ps1 -TargetMap /Game/MC_Environment/Maps/MilitaryCamp -Apply
```

该脚本只处理目标地图中实际引用到的 `USoundAttenuation` 和 `AudioComponent` override。它会同时打开 UE 的 `bEnableSourceDataOverride`，补 ProjectAcoustics `UAcousticsSourceDataOverrideSourceSettings`，并设置 `EnablePortaling=true`。原因是 UE AudioMixer 只有在 `WaveInstance->bEnableSourceDataOverride=true` 时才会调用 SourceDataOverride，而 ProjectAcoustics 的 per-source Portaling 需要通过 attenuation source settings 或 `UAcousticsAudioComponent` 传入。需要全项目批量处理时显式加 `-AllAttenuationAssets`，不要默认扫全项目，避免 UI、音乐和 2D 声音被错误改成声学传播声源。

### 7.3 用 Runtime Volume 做区域级艺术调音

`AAcousticsRuntimeVolume` 可以在运行时叠加 `FAcousticsDesignParams`。SourceDataOverride 每帧用 source 位置做零半径 overlap；只有 source 开启 `ApplyAcousticsVolumes` 才会应用。

适合使用 Runtime Volume 的场景：

- 室内营房、地下掩体、走廊、金属集装箱：增加 `WetnessAdjustment` 或 `DecayTimeMultiplier`。
- 空旷操场、露天道路、山坡：提高 `OutdoornessAdjustment`，减少不自然的室内感。
- 帐篷、临时棚、软质空间：降低 `OcclusionMultiplier` 或 `DecayTimeMultiplier`，避免声音过闷。
- 关键战斗区域：对脚步和敌人语音设置更清晰的遮挡/混响比例。

设计参数含义：

- `OcclusionMultiplier`：遮挡强度倍乘。
- `WetnessAdjustment`：湿声响度 dB 偏移。
- `DecayTimeMultiplier`：混响衰减时间倍乘。
- `OutdoornessAdjustment`：室外感偏移。

### 7.4 Dynamic Opening 处理可开关门窗

门、窗、闸门、可破坏洞口不应该靠重新烘焙多个 ACE 解决。`UAcousticsDynamicOpening` 是一个 `UStaticMeshComponent`，BeginPlay 时会把自身平面/凸包注册给 Triton，Tick 时更新开口状态。

用法建议：

- 给门窗 Actor 增加 `UAcousticsDynamicOpening`，让组件覆盖真实开口平面。
- 关闭状态提高 `DryAttenuationDb` / `WetAttenuationDb` 的衰减；打开状态接近 0 dB；半开状态插值。
- `Filtering` 用于控制通过开口的滤波强度。
- 只给需要动态响应的门窗启用，避免大面积复杂可变结构全部走 Dynamic Opening。
- 相关声源必须开启 `ApplyDynamicOpenings`，否则开口信息不会传入查询。

### 7.5 选择合适的 Spatial Reverb 模式和质量

ProjectAcoustics 的 spatial reverb 是 SourceDataOverride 内部链路，不等同于把平台 `ReverbPlugin` 切成 Project Acoustics。当前常用安全组合是 ProjectAcoustics 做 `SourceDataOverride`，其他插件继续负责平台 spatialization/reverb。

可调点：

- `ReverbType=SpatialReverb`：使用方向感更强的 object-based reverb。
- `SpatialReverbQuality=Best`：12 个虚拟扬声器，方向感更好，CPU 更高。
- `SpatialReverbQuality=Good`：3 个水平虚拟扬声器，成本更低。
- `ReverbType=StereoConvolution`：走短/中/长、室内/室外 convolution bus，适合固定风格化混响。
- `ReverbType=None`：只要遮挡和 portaling，不要 ProjectAcoustics 混响。

优化建议：

- 耳机、第一人称、需要精确空间感时优先试 `SpatialReverb + Best`。
- 大量声源或性能紧张时用 `Good`，并只让关键声源启用 `EnableReverb`。
- 如果音频项目已经有强风格化混响，可用 `StereoConvolution` 或关掉部分 source 的 `EnableReverb`，避免双重混响。

### 7.6 用 MetaSound 参数做高级声学驱动

SourceDataOverride 会向实现 ProjectAcoustics 参数接口的 MetaSound 发送实时参数：

- `Dry.ArrivalAzimuth`
- `Dry.ArrivalElevation`
- `Wet.ArrivalAzimuth`
- `Wet.ArrivalElevation`
- `Dry.Loudness`
- `Dry.PathLength`
- `Wet.Loudness`
- `Wet.AngularSpread`
- `Wet.DecayTime`

这些参数可用于：

- 根据 `Dry.PathLength` / `Dry.Loudness` 做更自然的低通、瞬态或远近变化。
- 根据 `Wet.AngularSpread` / `Wet.DecayTime` 混入室内反射层。
- 根据 dry/wet arrival direction 做特殊的战术 UI、声源指示或调试可视化。

注意不要在 MetaSound 里再做一套和 SourceDataOverride 冲突的 occlusion、portaling 或 reverb，除非明确是风格化效果。

### 7.7 使用 Outdoorness 和距离查询驱动环境系统

`AAcousticsSpace` 暴露 Blueprint callable 的 `GetOutdoorness()` 和 `QueryDistance()`。这些不是必须功能，但对大地图很有用。

推荐用途：

- `GetOutdoorness()`：驱动风声、虫鸣、雨声、室内 room tone、低频环境层、后期 EQ。
- `QueryDistance()`：配合 `UpdateDistances=true`，沿指定方向查询空间距离，用于开放/封闭空间判断、调试反射、驱动局部环境状态。

注意：`UpdateDistances` 默认应保持关闭。只有明确需要距离场数据时开启，因为它会增加每帧工作。

### 7.8 调整 AAcousticsSpace streaming

大地图要关注 `AAcousticsSpace` 的 tile streaming：

- `AutoStream=true`：大多数运行时都应开启。
- `TileSize`：太小会导致频繁加载/卸载，太大则内存占用增加。
- `CacheScale`：调大可缓存更多邻近 tile，减少快速移动或转场时声学数据缺页。
- `ForceLoadTile(Location)`：传送、载具高速移动、关卡流送前可预加载目标区域。

如果玩家刚传送或刚进大场景时声音短暂没有声学效果，先检查 tile 是否还没加载，而不是直接怀疑 bake 数据损坏。

### 7.9 调试显示和诊断 CVar

非 Shipping 下可用这些 CVar 和组件开关验证效果：

- `PA.DrawVoxels`
- `PA.DrawProbes`
- `PA.DrawDistances`
- `PA.ShowStats`
- `PA.ShowAllSourceParameters`
- `ShowAcousticParameters`

建议在真实地图 PIE 中检查：

- listener 是否位于 ACE 覆盖区域内。
- 声源是否在合理 probe/voxel 范围内。
- 墙后声源的 dry arrival direction 是否从门洞/开口方向来。
- wet loudness、decay、outdoorness 是否和区域直觉一致。
- tile streaming 是否反复加载卸载。

### 7.10 Resolver 处理探针插值歧义

`AcousticsInterpolationDisambiguationMode` 提供 `Default`、`None`、`Blend`、`Nearest`、`Loudest`、`Quietest`、`Push`。它用于处理 source/listener 刚好在房间边界、门口、薄墙附近时的查询歧义。

推荐：

- 默认先不全局改 Resolver。
- 某个固定声源在门边方向不稳定时，先给这个 source 单独试 `Nearest` 或 `Loudest`。
- 声源需要明确被推向某个区域时用 `Push` 并设置 `PushDirection`。
- `Blend` 类似“强制使用所有可用样本”的兜底，能减少查询失败，但可能把墙两侧、楼上楼下或室内外的声学参数混在一起，导致空间感错误。只能作为诊断或少数不重要声源的容错，不要作为全局默认。
- 如果一个 source 从播放开始就处在查询失败区域，SourceDataOverride 没有 last successful query 可复用，会直接返回；Resolver 只能帮助 Triton 选择候选样本，不能替代缺失 Probe 或修复封闭几何。
- 如果 Resolver 解决不了，回到 Step 1-4 检查几何开口、probe 密度和坏 probe。

## Step 7 验证

运行时优化后至少做这些检查：

1. `Config/DefaultEngine.ini` 当前平台应有 `SourceDataOverridePlugin=Project Acoustics`；不要为了 spatial reverb 随意把平台 spatialization/reverb 全切成 ProjectAcoustics。
2. 真实地图里只有一个有效 `AcousticsSpace` 绑定目标 `UAcousticsData`，且 `AcousticsSpace` 没有非 1 缩放。
3. 关键声源的 Attenuation 或 `UAcousticsAudioComponent` 已配置 `EnablePortaling`、`EnableOcclusion`、`EnableReverb`、`ApplyAcousticsVolumes` 或 `ApplyDynamicOpenings`。
4. Runtime Volume 覆盖区域和 source 位置一致；如果声音不受 Volume 影响，先确认 source 的 `ApplyAcousticsVolumes=true`。
5. Dynamic Opening 覆盖真实门窗开口，且相关 source 的 `ApplyDynamicOpenings=true`。
6. MetaSound 只在实现 ProjectAcoustics 参数接口时接收参数；普通 SoundWave 不会自动得到这些 MetaSound 输入。
7. PIE 日志应显示 ACE 加载成功、SourceDataOverride factory 创建成功；出现 `No acoustic query result found` 时，结合 tile streaming、probe 覆盖和 source/listener 位置排查。

## 本地烘焙处理程序

本 Skill 的 `assets/ProjectAcousticsProcessors/` 下保存 ProjectAcoustics 本地烘焙处理程序副本：

- `Windows/Triton.LocalProcessor.exe`
- `Windows/ClientTelemetry.dll`
- `Windows/libfbxsdk.dll`
- `Windows/RunLocalBake.bat`
- `Windows/Usage.txt`
- `Linux/Triton.LocalProcessor`
- `Linux/Triton.CollateTritonData`
- `Linux/Triton.RunSingleProbe`
- `Linux/Triton.RunTritonTask`

只保存处理程序和说明文件，不保存旧的 `.ace`、`.vox`、`_config.xml` 或时间戳输出目录。真正本地 bake 时使用 `scripts/Invoke-LocalBakeAcousticProbes.ps1`，不要把输出写回 Skill assets；所有中间文件和结果先落到 `Saved\OrionUE\ProjectAcoustics\LocalBake`，完成后只把最终 `.ace` 复制到 `Content\Acoustics`。

## 后续待追加

等待用户继续教授以下流程后再补充：

- packaged build 中 ProjectAcoustics、SteamAudio、ACE staging、UFS 与运行时日志的最终验收流程。
