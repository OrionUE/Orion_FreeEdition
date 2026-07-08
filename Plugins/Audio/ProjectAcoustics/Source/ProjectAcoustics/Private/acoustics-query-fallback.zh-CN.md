# ProjectAcoustics 查询失败最近 Probe 回退

## 功能入口

运行时声学查询入口在 `FProjectAcousticsModule::GetAcousticParameters`。正常流程仍然优先使用声音源或默认配置指定的 `InterpolationConfig`，只有当这次查询失败时，才会尝试最近 Probe 回退。

## 控制台开关

- `PA.FallbackToNearestProbe 0`：关闭失败后使用 `Nearest` resolver 重试，默认关闭。
- `PA.FallbackToNearestProbe 1`：临时开启最近 Probe 重试，仅用于小范围诊断，不建议在大场景正式运行时开启。

## 运行时触发方式

当 `QueryAcoustics` 返回失败，并且当前 resolver 不是 `Nearest`，且 `PA.FallbackToNearestProbe=1` 时，系统会使用 `InterpolationConfig::DisambiguationMode::Nearest` 再查询一次。如果最近 Probe 查询成功，本次声音参数会返回成功，并使用最近 Probe 的 `TritonAcousticParameters` 和 `TritonDynamicOpeningInfo`。

大场景里不要默认开启这个功能。最近 Probe 只按距离选样本，不知道真实楼层、房间、门洞和声学连通性；跨楼层或跨房间命中时，会把错误的 occlusion、portaling、wet/reverb 参数写入声音源，可能表现为混响跳变、声音忽大忽小或播放中途像消失。

查询运行在 ProjectAcoustics 自己的单线程 `FQueuedThreadPool` 中。该线程池必须显式使用较大的线程栈；UE queued thread 默认栈过小时，Triton 解压探针数据可能在 `Triton::AzfpCodec::AzfpBlock::Decompress()` 中触发 `EXCEPTION_STACK_OVERFLOW`。当前实现使用 4MB 栈并命名线程池为 `ProjectAcousticsQueryThreadPool`。

## 验证步骤

1. 打开已经导入 `AcousticsData` 的实际游戏地图。
2. 开启 `AcousticsDebugRenderer`，观察之前出现 `Source interpolation failed` 或 `Receiver loudness contrast unresolved` 的区域。
3. 保持 `PA.FallbackToNearestProbe 0`，播放同一声音源，确认失败路径会走 SourceDataOverride 的 last successful query 或跳过本帧更新。
4. 仅在小范围定位问题时执行 `PA.FallbackToNearestProbe 1`，再次播放同一声音源，观察是否只是局部 probe coverage 问题。

## 常见扩展点

- 如果最近 Probe 回退会造成跨楼层串音或声音消失，保持 `PA.FallbackToNearestProbe 0`，继续优化探针密度、Nav 区域、Source 高度或源对象的 `SourceDataOverride`。
- 如果只想对某类声音启用更激进的回退策略，可以在 `SourceDataOverride` 层增加 per-source fallback policy，再传入 ProjectAcoustics runtime。
