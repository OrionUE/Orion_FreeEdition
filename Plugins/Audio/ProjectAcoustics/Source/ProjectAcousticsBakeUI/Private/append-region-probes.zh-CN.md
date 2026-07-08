# ProjectAcoustics 区域追加探针使用说明

## 功能入口

区域追加探针属于 ProjectAcoustics BakeUI 的 Step 4 命令行能力，入口脚本是：

```powershell
.agents\skills\orion-project-acoustics\scripts\Invoke-CalculateAcousticProbes.ps1
```

核心参数是 `-AppendToExistingProbeList` 和 `-AppendOnlyInTaggedRegion`。该功能读取当前地图已有 `.vox` / `_config.xml` ProbeList，重新生成候选探针，然后只把指定区域内的新候选探针合并回同一个 `_config.xml`。

## 场景配置

1. 打开 AcousticProxy 地图或当前要计算探针的地图。
2. 在需要补密的区域放置或选中 `NavMeshBoundsVolume`。
3. 在该 Actor 的 `Tags` 数组添加 `AcousticsProbeAppendRegion`。
4. 确保 `AcousticsNavigation` Tag 仍然打在 `RecastNavMesh` 上，不需要打在 `NavMeshBoundsVolume` 上。
5. 如果要提高该区域密度，可以在同一区域放置 `AcousticsProbeVolume`，将 `VolumeType` 设置为 `ProbeSpacing`，并降低 `MaxProbeSpacing`。

## 运行命令

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-project-acoustics\scripts\Invoke-CalculateAcousticProbes.ps1 `
	-SourceMap /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy `
	-Preset Quality `
	-Report Saved\OrionUE\ProjectAcoustics\militarycamp-step4-probes-append-region.json `
	-AppendToExistingProbeList `
	-AppendOnlyInTaggedRegion
```

如果使用自定义区域 Tag：

```powershell
-AppendProbeRegionTag MyProbeAppendRegion
```

如果希望过滤边界比 Volume Bounds 略大：

```powershell
-AppendProbeRegionBoundsPaddingCm 100
```

## 验证步骤

查看报告里的这些字段：

- `appendProbeRegionTag`：本次使用的区域 Tag。
- `appendProbeRegionActorCount`：找到的有效区域 Actor 数量。
- `generatedProbeCount`：本次按当前 Nav 生成的候选探针数。
- `appendProbeRegionCandidateCount`：落在区域 Bounds 内的候选探针数。
- `appendProbeOutOfRegionCount`：被区域过滤排除的候选探针数。
- `appendedProbeCount`：实际追加进 ProbeList 的探针数。
- `duplicateProbeCount`：因为距离旧探针太近而跳过的探针数。
- `probeCount`：最终写回 `_config.xml` 的总探针数。

如果 `appendProbeRegionActorCount` 为 `0`，说明没有 Actor 带 `AcousticsProbeAppendRegion` Tag，或该 Actor 没有有效 Bounds。如果 `appendProbeRegionCandidateCount` 为 `0`，通常是 RecastNavMesh 没有覆盖这个区域、Nav 没有重新构建，或区域 Bounds 没有包住候选探针高度。

## 常见扩展点

- 去重距离：用 `-AppendProbeDuplicateToleranceCm` 调整，默认 `50cm`。
- 区域边界：用 `-AppendProbeRegionBoundsPaddingCm` 外扩 Bounds。
- 区域密度：优先用 `AcousticsProbeVolume` 的 `ProbeSpacing` 或 `-Preset Quality`。
- 全量重算：如果地形、几何、Proxy 网格或 Nav 参数大改，不要区域追加，改用 `-Overwrite`。

区域追加只更新 Step 4 的 ProbeList。已有 `.ace` 不能原地追加探针；Step 5 仍需要重新 LocalBake 并重新导入新的 `AcousticsData`。
