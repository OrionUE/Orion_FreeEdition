# ReplicationGraph 源码指南

ReplicationGraph 是 Unreal Engine 的网络复制扩展性系统，用持久 graph nodes 替代默认每连接遍历所有 Actor 的 relevancy 扫描。它适合高 actor 数、多连接、空间分桶、owner-only、dormancy 和自定义游戏相关性策略。

## 源码入口

优先从这些相对位置和符号开始查：

- `<EngineRoot>/Engine/Plugins/Runtime/ReplicationGraph`
- `ReplicationGraph.uplugin`
- `ReplicationGraph.Build.cs`
- `ReplicationGraph.h`
- `ReplicationGraph.cpp`
- `ReplicationGraphTypes.h`
- `ReplicationGraphTypes.cpp`
- `BasicReplicationGraph.h`
- `BasicReplicationGraph.cpp`
- `ReplicationGraphDebugging.cpp`
- `UReplicationGraph`
- `UReplicationGraphNode`
- `UNetReplicationGraphConnection`
- `UBasicReplicationGraph`
- `FNewReplicatedActorInfo`
- `FRenamedReplicatedActorInfo`
- `FClassReplicationInfo`
- `FGlobalActorReplicationInfo`
- `FConnectionReplicationActorInfo`
- `FGatheredReplicationActorLists`

如果项目或插件封装了 ReplicationGraph，先查项目 graph subclass、NetDriver 配置和 actor routing 规则，再回到引擎插件确认原生行为。

## 模块边界

ReplicationGraph 通常是 runtime plugin/module。调用方模块 include RepGraph 头文件前，必须在对应 `*.Build.cs` 声明 `ReplicationGraph` 依赖。

常见关联模块：

- `Engine`：NetDriver、Actor、World、ActorChannel 等基础复制能力。
- `NetCore`：网络序列化、网络核心类型。
- `EngineSettings`：配置和 runtime settings。
- `PerfCounters` 或调试/统计相关模块：以当前 Build.cs 为准。

不要从普通 gameplay 模块 include editor-only 类型。RepGraph debug actor、console command 和 gameplay debugger 支持需要确认当前版本和 build configuration。

## 核心心智模型

- `UNetDriver` 通过 `ReplicationDriverClassName` 创建 `UReplicationDriver`，RepGraph 的实现是 `UReplicationGraph`。
- `UReplicationGraph` 管理 global graph nodes、per-connection graph nodes、global actor info、per-connection actor info 和 replication loop。
- `UReplicationGraphNode` 子类维护 actor lists，并在每个 connection gather 阶段追加可复制 actor list。
- `UNetReplicationGraphConnection` 持有连接级节点、visible levels、viewer locations、dormant/destruction info 和 connection actor state。
- graph nodes 先 gather actor lists，RepGraph 再做 distance/frequency culling、list merge、prioritization、channel open/update 和可选 fast shared path。
- RepGraph 常规路径不等同于直接依赖 `AActor::IsNetRelevantFor` 或 `AActor::GetNetPriority`；relevancy/priority 由 graph placement、class/global/connection actor info 和 node policy 驱动。

## 初始化和复制流程

典型流程：

1. NetDriver 初始化 ReplicationDriver。
2. graph 初始化 world 和 global actor class settings。
3. graph 创建 global nodes。
4. 新连接加入时创建 connection manager 和 per-connection nodes。
5. replicated actor 进入 graph，项目 graph subclass 将 actor 路由到正确 node。
6. 每帧 `ServerReplicateActors` 针对每个连接 gather actor lists。
7. RepGraph 做 cull、frequency、priority、channel 和 dormancy 处理。
8. actor channel 复制属性、RPC、destruction info 或 tear-off 状态。

## UReplicationGraph

`UReplicationGraph` 是 RepGraph 的 driver 主体。生产项目通常创建它的子类。

重点查：

- `InitForNetDriver`
- `InitializeForWorld`
- `InitializeActorsInWorld`
- `TearDown`
- `AddClientConnection`
- `RemoveClientConnection`
- `AddNetworkActor`
- `RemoveNetworkActor`
- `ForceNetUpdate`
- `FlushNetDormancy`
- `NotifyActorTearOff`
- `NotifyActorFullyDormantForConnection`
- `NotifyActorDormancyChange`
- `NotifyActorRenamed`
- `ProcessRemoteFunction`
- `ServerReplicateActors`
- `PostTickDispatch`

常见 subclass hooks：

- `InitGlobalActorClassSettings`
- `InitGlobalGraphNodes`
- `InitConnectionGraphNodes`
- `RouteAddNetworkActorToNodes`
- `RouteRemoveNetworkActorToNodes`
- `RouteRenameNetworkActorToNodes`

设计规则：

- add/remove/rename routing 必须对称。
- actor class settings 要明确 replication period、cull distance、fast shared path 和 channel settings。
- owner-only actors 要处理 owner connection 尚未存在或 owner 变化。
- level/outer rename、world partition 或 streaming level 变化要确认当前版本是否需要显式 rename routing。
- destruction info 距离裁剪、dormancy flush 和 tear-off 需要单独验证。

## UReplicationGraphNode

`UReplicationGraphNode` 是 graph 节点基类。节点负责 actor list 维护和对 connection gather 的输出。

常见接口方向：

- `NotifyAddNetworkActor`
- `NotifyRemoveNetworkActor`
- `NotifyActorRenamed`
- `NotifyResetAllNetworkActors`
- `GatherActorListsForConnection`
- `PrepareForReplication`
- `TearDown`
- child node 创建/移除/清理。
- debug logging、stats、actor reference verification。

常见节点族：

- actor list：简单持久列表。
- frequency buckets：把 actor 分散到不同帧复制。
- grid spatialization：按 2D spatial grid 收集可见 cell。
- dynamic spatial frequency：动态 actor 的距离/频率路径。
- dormancy node：共享或 connection-local dormant actor 管理。
- always relevant：全局 always relevant。
- always relevant for connection：连接级 owner/controller/view target 类 Actor。
- tear-off for connection：连接级 tear-off 处理。

自定义节点适合表达项目相关性，例如队伍、观战、区域、兴趣管理、任务/副本、弹体或临时战斗对象。

## UNetReplicationGraphConnection

`UNetReplicationGraphConnection` 管理单个连接的 graph 状态。

重点查：

- connection 初始化。
- per-connection node 添加/移除。
- gather locations 更新。
- viewer location 更新。
- visible levels 构建。
- dormant actor 和 destruction info 复制。
- actor channel add/remove/cleanup notifications。

如果某个 actor 只对特定玩家可见，优先确认它是否应该进入 per-connection node，而不是 global always-relevant node。

## ReplicationGraphTypes 数据模型

常见类型职责：

- `FActorRepList`、`FActorRepListRefView`、`FGatheredReplicationActorLists`：持久 actor list 和 gather 时的轻量 view。
- `FNewReplicatedActorInfo`、`FRenamedReplicatedActorInfo`：add/remove/rename routing payload。
- `FStreamingLevelActorListCollection`、`FLevelBasedActorList`：streaming level aware actor list。
- `FClassReplicationInfo`：class 级复制周期、距离裁剪、fast path 和 channel 设置。
- `FGlobalActorReplicationInfo`：actor 全局复制状态。
- `FGlobalActorReplicationInfoMap`：actor 到全局信息、class 到 class info 的映射。
- `FConnectionReplicationActorInfo`：actor 对某个 connection 的复制状态。
- `FPerConnectionActorInfoMap`：connection-local actor info map。
- `FConnectionGatherActorListParameters`：节点 gather 时的参数。
- `FPrioritizedRepList`：gather/cull/merge 后的优先级列表。
- debug info 和 CSV/stat 类型：用于日志、HUD 和 profiling。

## UBasicReplicationGraph

`UBasicReplicationGraph` 是最小示例 graph，不是复杂项目的完整方案。

它通常展示：

- 从 CDO 或 class default 派生 class replication settings。
- 创建 grid spatialization node。
- 创建 global always-relevant node。
- 为每个 connection 创建 always-relevant-for-connection node。
- 按 `bAlwaysRelevant`、`bOnlyRelevantToOwner` 和 spatialized actor 分类路由。
- 对没有 owner connection 的 owner-only actor 做延迟处理。

限制：

- 只覆盖基础 cull distance、always relevant 和 owner-only。
- 默认假设部分 actor net settings 不会在 runtime 任意变化。
- 不能直接表达复杂 FPS/MMO/开放世界项目里的 team relevancy、spectator relevancy、projectile relevance、AI perception、private state、streaming domain 或玩法 feature 生命周期。

生产代码通常应创建项目 graph subclass，并把 routing rules 设计成可审计的 gameplay categories。

## NetDriver 配置

启用 RepGraph 时要把 graph class 配到实际使用的 NetDriver section：

```ini
[/Script/<OwningNetDriverModule>.<NetDriverClass>]
ReplicationDriverClassName="/Script/<ModuleName>.<ReplicationGraphClass>"
```

注意：

- 不要只复制示例 `IpNetDriver` 配置；项目可能使用 Steam、EOS、自定义 NetDriver、BeaconNetDriver、DemoNetDriver 或平台特定 driver。
- 如果有 layered config，确认 editor、standalone、listen server、dedicated server 和 packaged build 实际加载的是哪组 INI。
- graph class 所在模块必须能在 NetDriver 创建时加载。
- 修改 config 后要验证 listen server 和 dedicated server，而不是只跑单机 PIE。

## Actor Routing 设计

常见生产分类：

- PlayerState、GameState、match state：通常 global always relevant 或专门全局节点。
- PlayerController、owned inventory、private ability state：通常 per-connection/owner-only。
- Pawn、Character、AI、pickup、interactable：通常 spatial grid 或 spatial + dormancy。
- Projectile、temporary combat actor：可能需要专门 transient/frequency node。
- Door、loot、static interactable：通常 grid + dormancy。
- Team/squad/private tactical state：通常自定义 per-team/per-connection node。
- Spectator-only data：按 spectator connection routing。

设计 checklist：

- 每类 actor 的目标连接是谁。
- 是否需要距离裁剪。
- 是否可 dormant。
- 是否会 tear-off。
- 是否会改变 owner、level、outer、team 或 gameplay group。
- 是否由 GameFeature 动态添加或移除。
- 是否需要专门 debug output。

## Dormancy、Tear-Off 和 Destruction

RepGraph adoption 常见问题集中在生命周期边界：

- dormant actor 不再复制后，flush dormancy 是否能重新进入正确列表。
- actor destruction info 是否受距离裁剪影响。
- tear-off 是否能发送到每个需要的 connection。
- owner-only actor owner 改变后是否从旧 connection node 移除并加入新 connection node。
- streaming level 或 actor outer 变化后，cached level list 是否更新。
- dynamic spatial actor 移动后是否进入新 cell。

这些行为不能只靠编译验证，必须用多人运行场景验证。

## 调试命令

不同 UE 版本命令会有差异。先在当前源码中搜索：

```bash
rg -n "Net\\.RepGraph|FAutoConsoleCommand|FAutoConsoleVariable" <EngineRoot>/Engine/Plugins/Runtime/ReplicationGraph/Source
```

常见命令族：

- print graph。
- draw graph。
- print all actor info。
- prioritized list print/draw。
- actor list stats/details。
- spatial cell info。
- cull distance print/set。
- replication period frame override。
- actor discovery budget。
- verification。
- pause RepGraph replication。
- skip distance cull。
- dynamic actor rename handling。
- dynamic spatial debug/pause/frequency tuning。

调试命令可能区分 server/client，上下文错误时需要通过 debug actor 或 server command path 执行。Shipping build 可能禁用部分 debug 能力。

## 与 GameFeatures 的关系

GameFeature 可能动态引入 replicated actors、组件、ability、cue 或 world content。与 RepGraph 交叉时：

- feature 激活创建或注册的 replicated actor class 需要明确 graph placement。
- feature 反激活要清理 spawned actors、component handles 和 graph routing 状态。
- feature 加载前 graph class 可能已经初始化；动态 class settings 和 routing 要能处理后加入的类型。
- 多人端要验证 server/client flags、existing world 和 future world。

如果任务主要是 feature lifecycle，读取 `../../unreal-gamefeatures/SKILL.md`；如果问题是 actor relevancy、node placement、cull/dormancy，使用本 Skill。

## 与 GameplayAbilities 的关系

GAS 有自己的 ability spec、attribute、target data、GameplayCue、prediction 和 ASC replication 规则。RepGraph 不替代这些规则，但会影响承载它们的 Actor 是否对某个 connection 相关。

路由规则：

- ability activation、prediction、target data、attribute replication：读取 `../../unreal-gameplayabilities/SKILL.md`。
- ASC owner/avatar actor 是否进入正确 graph node、ability-related actor 是否 owner-only 或 team-only：读取本 Skill。
- GameplayCue actor 或 replicated gameplay actor 数量大、距离裁剪异常、owner-only 可见性错误：同时查 GAS 和 RepGraph。

## 与 GameplayMessageRouter 的关系

GameplayMessageRouter 本身不是复制驱动。server-to-client、server-to-all-clients、owner-only client 通知或 replicated fast array rebroadcast 先读取 `../../unreal-gameplay-message-router/SKILL.md`；只有消息承载在 replicated actor、owner relevancy、dormancy、cull distance 或 graph node placement 上出问题时，才回到本 Skill 深查 RepGraph。

## 修改前检查清单

- 当前项目是否已经启用 RepGraph。
- active NetDriver 是哪个。
- graph class 所在模块是否依赖 `ReplicationGraph`。
- 是否已有项目 graph subclass。
- actor 分类是否完整。
- add/remove/rename 是否对称。
- owner-only actor 是否处理 owner connection 缺失和 owner change。
- dormancy、tear-off、destruction info 是否覆盖。
- cull distance 使用平方距离还是线性距离。
- runtime/editor 模块边界是否正确。
- debug command 是否在当前版本存在。

## 验证

- 构建相关目标模块。
- 修改反射声明时触发 UHT。
- 运行 listen server PIE，至少两个客户端。
- 运行 dedicated server 路径，如果项目支持。
- 测试 actor spawn、destroy、tear-off、dormancy flush、owner changes、level/outer changes。
- 测试高 actor 数、多连接、移动 actor、静态 actor 和 dormant actor。
- 使用 RepGraph print/list/cell/prioritized/cull-distance 命令确认 graph placement。
- 验证 active NetDriver section 下的 `ReplicationDriverClassName` 生效。
- 验证 standalone、PIE、packaged 或目标平台 config 是否一致。
