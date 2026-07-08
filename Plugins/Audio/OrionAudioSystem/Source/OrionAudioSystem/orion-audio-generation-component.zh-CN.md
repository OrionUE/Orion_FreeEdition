# OrionAudioSystem 音频生成组件使用说明

## 功能入口

- 插件：`Plugins/Audio/OrionAudioSystem`
- 模块：`OrionAudioSystem`
- 抽象基类：`UOrionAudioGenerationComponent`
- 一次性播放组件：`UOrionFireAndForgetAudioGenerationComponent`
- 托管播放组件：`UOrionManagedAudioGenerationComponent`
- 蓝图入口：在任意需要发声的 Actor 蓝图上添加具体子类组件，并可像普通 Scene Component 一样附加到其他组件或 Socket 上

## 可创建的蓝图或数据资产

- Actor 蓝图：添加 `Orion Fire And Forget Audio Generation Component`，用于枪声、脚步声、命中声等高频短音效。
- Actor 蓝图：添加 `Orion Managed Audio Generation Component`，用于需要追踪生成出的 `UAudioComponent`、运行时覆盖衰减或手动销毁的长音频。
- Blueprint 子类：可以从 `UOrionAudioGenerationComponent` 派生，用于复用统一的网络广播和组件位置播放入口；不要直接把抽象基类当功能组件添加。
- Sound 资产：`USoundBase`、SoundCue、SoundWave 或 MetaSound Source，建议放在 `Content/Audio` 或玩法插件的 Content 目录。
- 衰减资产：`USoundAttenuation`，建议放在 `Content/Audio` 下的音频配置目录。

## 关键属性

- `Sound`：组件维护的唯一播放声音。所有播放函数都会使用这个属性。
- `VolumeMultiplier`：播放音量倍率。
- `PitchMultiplier`：播放音高倍率。
- `StartTime`：播放起始时间。
- `ConcurrencySettings`：可选并发规则。
- 组件 Transform：组件自身是 `SceneComponent`，可以设置相对位置、世界位置、旋转，也可以 Attach 到 Mesh、Socket、武器、特效挂点或其他 Scene Component。
- `AttenuationSettings`：普通衰减资产。
- `bReplicatePlayback`：开启后，播放请求会走服务端并广播给相关客户端。
- `bUseReliableServerPlayback`：客户端请求服务端播放时是否使用可靠 RPC。连续枪声、脚步声等高频音效必须保持关闭，避免 Reliable 队列积压导致松开开火后还持续播放。
- `bUseReliableMulticast`：重要但低频的声音可以开启；高频声音建议关闭，避免可靠 RPC 队列堆积。
- `bAutoEnableOwnerReplication`：服务端 BeginPlay 时自动开启所属 Actor 复制，便于组件 RPC 工作。
- `bOverrideAttenuation`：仅 `UOrionManagedAudioGenerationComponent` 提供，是否使用组件内的覆盖衰减参数。
- `AttenuationOverrides`：仅 `UOrionManagedAudioGenerationComponent` 提供，启用覆盖时使用的 `FSoundAttenuationSettings`。
- `bAutoDestroyGeneratedAudio`：仅 `UOrionManagedAudioGenerationComponent` 提供，控制托管 `UAudioComponent` 播放完成或停止后是否自动销毁，默认开启。

## 运行时触发方式

- `PlayAudioAtCurrentWorldLocation()`：在当前组件世界位置使用组件维护的 `Sound` 和衰减生成并播放音频。
- `PlayAudioAtLocation(Location, Rotation)`：在指定世界位置使用组件维护的 `Sound` 和衰减生成并播放音频。
- `SetAudioSound(NewSound)`：运行时切换组件维护的唯一播放声音。
- `SetAudioAttenuationSettings(NewAttenuationSettings)`：运行时切换衰减资产；托管组件会把变化应用到当前仍有效的音频组件。
- `SetAudioAttenuationOverrideEnabled(bEnabled)`：仅托管组件提供，运行时切换是否使用覆盖衰减。
- `SetAudioAttenuationOverrides(NewAttenuationOverrides)`：仅托管组件提供，运行时修改覆盖衰减参数。
- `ApplyAttenuationToActiveAudio()`：仅托管组件提供，手动把当前衰减配置重新应用到仍在播放的托管音频组件。
- `SetAutoDestroyGeneratedAudio(bShouldAutoDestroy)`：仅托管组件提供，运行时切换托管音频组件播放完成或停止后是否自动销毁，并应用到当前组件追踪的音频。
- `StopAndDestroyGeneratedAudio()`：仅托管组件提供，停止并销毁当前组件追踪的所有托管音频组件，适合关闭自动销毁后做手动清理。

## 多人游戏要求

- 服务端调用播放函数时，组件会通过 NetMulticast 让相关客户端在本地生成声音。
- 客户端调用播放函数时，组件会先调用 Server RPC，再由服务端广播。
- 客户端发起 Server RPC 时，组件所属 Actor 必须有 owning connection；通常应挂在玩家 Pawn、PlayerController 拥有的 Actor 或其他被该玩家拥有的 replicated Actor 上。
- NetMulticast 仍受 Actor 相关性影响；如果某个客户端与该 Actor 不相关，可能不会收到声音事件。
- Dedicated Server 不会本地生成音频，客户端收到广播后才播放。
- 托管组件每次播放请求会携带 `bAutoDestroyGeneratedAudio` 的快照，确保服务端广播后各客户端生成出的本地音频使用同一套自动销毁策略。
- 连续开枪这类高频瞬时音效应保持 `bUseReliableServerPlayback=false` 和 `bUseReliableMulticast=false`。可靠 RPC 会保证送达并排队，网络或帧率压力下可能导致停止开火后仍继续播放排队中的枪声。

## 配置文件入口

当前插件不需要新增 `.ini` 配置。项目音频插件组合仍以 `Config/DefaultEngine.ini` 的平台音频设置为准，普通声音会走项目现有 SteamAudio / ProjectAcoustics 配置链路。

## 验证步骤

1. 在一个 replicated Actor 蓝图上添加 `Orion Fire And Forget Audio Generation Component` 或 `Orion Managed Audio Generation Component`。
2. 将组件 Attach 到目标组件或 Socket，例如角色 Mesh 的武器挂点、脚步挂点或道具组件。
3. 设置 `Sound` 和 `AttenuationSettings`。枪声使用 `Orion Fire And Forget Audio Generation Component`，并配置合适的 `ConcurrencySettings` 限制同类枪声叠加数量。
4. 运行时移动组件相对位置或世界位置，并在服务端或有 owning connection 的客户端调用 `PlayAudioAtCurrentWorldLocation`。
5. 使用 listen server + 2 clients 验证两个客户端都能在该组件世界位置听到声音。
6. 连续开枪验证：保持 `bUseReliableServerPlayback=false` 和 `bUseReliableMulticast=false`，松开开火后不应再继续播放排队枪声。
7. 使用 `Orion Managed Audio Generation Component` 并关闭 `bAutoDestroyGeneratedAudio` 后播放一次短音效，确认播放结束后托管音频组件不会按完成事件自动销毁；再调用 `StopAndDestroyGeneratedAudio` 做手动清理。
8. 运行时调用 `SetAudioAttenuationOverrides`，确认已经生成且仍在播放的托管音频组件衰减发生变化。
9. 在 dedicated server 验证服务器日志无本地音频播放错误，客户端仍能听到广播声音。

## 常见扩展点

- 增加新的播放后端：从 `UOrionAudioGenerationComponent` 派生具体子类，重写本地播放实现，不要在基类里继续加枚举分支。
- 增加音频参数：通用参数放基类；只对某个播放后端有效的参数放到对应子类。
- 增加过滤策略：在服务端 `ServerPlayAudioAtLocation` 中按队伍、频道、距离或权限决定是否广播。
- 增加全局广播桥：如果声音必须绕过 Actor 相关性，可改为通过 GameState 或专用 replicated audio actor 做广播入口。
- 接入 GameplayCue：战斗表现可以让 GameplayCue 调用组件，而不是让武器、技能或角色直接硬编码播放逻辑。
