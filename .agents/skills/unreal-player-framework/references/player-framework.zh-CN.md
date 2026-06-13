# 玩家框架手册

## 目录

- 核心模型
- 源码定位
- 运行链路
- 玩家 ID
- LocalPlayer 与用户设置
- PlayerController 与 PlayerState
- 玩家信息组件
- 玩家账户与存档
- 玩家玩法组件
- 玩家出生管理
- 好友和玩家资料
- GameFeature 挂载规则
- 自动化挂载 recipe
- 业务落点决策
- 常见验证
- 常见错误

## 核心模型

玩家系统分成四层：

1. 核心 Player 层：`ACorePlayerController`、`ACorePlayerState`、`UCoreLocalPlayer` 和 `UAsyncAction_PlayerStateReady`，负责 PlayerState、ASC、输入处理、PawnData、Replay 和基础生命周期。
2. 宿主 Game Player 层：`AOrionPlayerController`、`AOrionPlayerState`、`UOrionLocalPlayer`、`FOrionPlayerID`、`UOrionPlayerInfoComponent`、`UOrionPlayerManager`、`UOrionPlayerAccount`、`UOrionPlayerGameplayComponent`、`UOrionPlayerSpawningManagerComponent` 等，提供可继承的玩家业务基座。
3. 薄桥接层：如果项目存在 BBL 这类 bridge module，通常只提供 Blueprint/配置可见的薄派生，例如 LocalPlayer、WorldSettings、ExperienceDefinition，不是业务逻辑落点。
4. GameFeature 玩法层：每个玩法可以拥有自己的 PlayerAccount、ArchivePlayer、PlayerGameplayComponent、PlayerSpawningManagerComponent 和玩家数据类型。

写玩家业务时优先用第 2 层或第 4 层。核心层默认只读。

## 源码定位

先查这些相对路径：

- `Source/GameCore/Public/Player`
- `Source/GameCore/Private/Player`
- 宿主 Game 模块 `Player` 文件夹。
- 宿主 Game 模块 `SaveGame` 中与玩家 archive 相关的文件。
- 宿主 Game 模块 `GameModes` 中的 ExperienceDefinition、GameMode、GameState。
- `Plugins/GameFeatures/<FeatureName>/Source/<FeatureRuntime>/Public/Player`
- `Plugins/GameFeatures/<FeatureName>/Source/<FeatureRuntime>/Private/Player`
- `Plugins/GameFeatures/<FeatureName>/Source/<FeatureRuntime>/Public/Game`
- `Plugins/GameFeatures/<FeatureName>/Content/Player`
- `Plugins/GameFeatures/<FeatureName>/Content/Game`

重点搜索：

- `FOrionPlayerID`
- `UOrionUserSubsystem`
- `UOrionPlayerInfoComponent`
- `UOrionPlayerManager`
- `UOrionPlayerAccount`
- `UOrionPlayerGameplayComponent`
- `UOrionPlayerSpawningManagerComponent`
- `PlayerAccountClass`
- `AddComponentActionEntry`
- `UGameFeatureAction_AddComponents`

## 运行链路

典型玩家进入流程：

1. GameMode 选择 Experience。
2. ExperienceManagerComponent 加载 Experience 和 ActionSet，激活 GameFeature。
3. `UOrionPlayerManager` 在服务器 world begin play 时注册 ExperienceLoaded 高优先级回调，读取 Experience 的 `PlayerAccountClass`。
4. PlayerController 自带 `UOrionPlayerInfoComponent`。
5. 本地 PlayerController 的 InfoComponent 从 `UOrionUserSubsystem` 读取 `FOrionPlayerID`。
6. 客户端把 PlayerID RPC 到服务器，Listen/Standalone 直接在服务器初始化。
7. 服务器的 InfoComponent 等 Experience Loaded 低优先级后广播初始化完成，并向 `UOrionPlayerManager` 注册玩家。
8. PlayerManager 用 Experience 指定的 `PlayerAccountClass` 创建 `UOrionPlayerAccount`，调用 `Initialize(PlayerID)`。
9. PlayerAccount 加载或创建该玩家在当前世界存档中的玩家 Archive。
10. 玩法挂载的 `UOrionPlayerGameplayComponent` 等 InfoComponent 初始化后执行 `OnPlayerInitialized`。
11. 玩法组件完成自己的初始化后调用 `SetPlayerInitializationCompleted`，解除该组件提供的 loading screen reason。

玩家退出时，InfoComponent 在服务器 EndPlay unregister player；玩法组件销毁时执行 `OnPlayerLogout`。

## 玩家 ID

`FOrionPlayerID` 是玩家身份键，支持 Blueprint、Hash、NetSerialize，可作为 `TMap` key。

构造规则：

- Editor 下可以用字符串构造测试 ID。
- Steam 启用时用 Steam user id 构造，并可取回 Steam id。
- `ToString()` 是存档 slot、好友 map key、日志和 UI 展示查找的稳定字符串。
- `IsEmpty()` 用于判断是否尚未初始化。

使用规则：

- 不要在业务代码里自己拼接玩家 ID。
- 本地玩家 ID 从 `UOrionUserSubsystem::Get(...).GetPlayerID()` 获取。
- 远端玩家的 ID 从 `UOrionPlayerInfoComponent::GetPlayerID()` 获取。
- 存档、好友列表、玩家头像和玩家账户 map 都应使用 `FOrionPlayerID`。

## LocalPlayer 与用户设置

`UCoreLocalPlayer` 是 CommonLocalPlayer 基类。宿主 `UOrionLocalPlayer` 负责：

- 访问本地设置 `GetLocalSettings()`。
- 访问共享设置 `GetSharedSettings()`。
- 从存档管理器获取当前 LevelMeta 和 WorldOption。
- 异步加载共享用户设置。

PlayerController 设置玩家对象时，会从 LocalPlayer 读取 SharedSettings，并监听设置变化，例如力反馈开关。

如果配置里使用薄桥接 LocalPlayer class，仍然从宿主 LocalPlayer 派生链理解行为，不要把业务写入桥接类。

## PlayerController 与 PlayerState

`ACorePlayerController` 的职责：

- 监听 PlayerState set/clear/replication。
- 在客户端 PlayerState 到达后刷新 ASC actor info 和 OnSpawn ability。
- 每帧 `PostProcessInput` 调用 ASC `ProcessAbilityInput`。
- 处理 force feedback 输入设备过滤。
- 处理 replay/spectating view rotation。
- 提供 `ClientOnPlayerInitialized` 标记本地玩家初始化完成。

`AOrionPlayerController` 的职责：

- 创建默认 `UOrionPlayerInfoComponent`。
- 连接 LocalPlayer settings。
- 处理自动 replay 录制判断。
- 提供 replay spectator controller。

`ACorePlayerState` 的职责：

- 持有持久 ASC。
- 服务器在 Experience Loaded 后设置 PawnData。
- 把 PawnData 的 AbilitySets 授予 ASC。
- 广播 `NAME_CoreAbilityReady` 给 GameFrameworkComponentManager。
- 复制 PawnData 和 spectator/replay view rotation。

`AOrionPlayerState` 的职责：

- 创建宿主 ASC 派生类，设置 mixed replication。

不要把玩家具体玩法状态塞进 PlayerState，除非它是所有玩法都必须存在的持久基础状态。玩法状态优先用 PlayerGameplayComponent 或 Ability/Message。

## 玩家信息组件

`UOrionPlayerInfoComponent` 是 `UControllerComponent`，默认由 `AOrionPlayerController` 创建。

职责：

- 持有当前 PlayerController 对应的 `FOrionPlayerID`。
- 本地控制器 BeginPlay 时读取本地用户 ID。
- 客户端把 ID 通过 `Server_SetPlayerID` 传给服务器。
- 服务器等 Experience Loaded 低优先级后注册玩家账户。
- 提供 `CallOrRegister_OnPlayerInfoInitialized`。

使用规则：

- 玩家业务组件不要在 BeginPlay 直接读取 PlayerID 后立刻假设账户已就绪。
- 需要 PlayerID 或账户相关初始化时，使用 `CallOrRegister_OnPlayerInfoInitialized`。
- 服务器逻辑在 `OnPlayerInitialized` 后再访问 `UOrionPlayerManager` 中注册出的账户相关数据。
- InfoComponent 是 PlayerController 级组件，不是 Pawn 组件。

## 玩家账户与存档

`UOrionPlayerManager` 是服务器 WorldSubsystem，客户端不创建。它在 Experience Loaded 高优先级时读取 `UOrionExperienceDefinition::PlayerAccountClass`，随后按 PlayerID 管理账户对象。

`UOrionPlayerAccount` 是每个玩家的账户对象，职责是读取和保存一个玩家在当前世界中的数据。默认流程：

1. `Initialize(PlayerID)` 缓存 PlayerID。
2. 获取 GameInstance 上的 ArchiveManager。
3. `LoadPlayerArchive()` 调用当前世界存档的 `GetOrLoadPlayerArchive`。
4. `OnGetPlayerArchive(nullptr)` 表示该玩家尚无存档，默认创建新玩家再加载。
5. 子类可缓存具体 ArchivePlayer 类型，读取玩法专属玩家数据。

创建玩法专属账户：

1. 创建 `<Feature>ArchivePlayer : UOrionArchivePlayer`。
2. 创建 `<Feature>PlayerAccount : UOrionPlayerAccount`。
3. 在账户构造函数中设置 `PlayerArchiveClass = <Feature>ArchivePlayer::StaticClass()`。
4. 覆盖 `OnGetPlayerArchive`，调用或有意替代 `Super` 后，把 `OutPlayerArchive` cast 为具体 archive。
5. 在 Experience 的 `PlayerAccountClass` 指向该账户类。

注意：

- `PlayerAccountClass` 为空会导致 Experience 数据校验失败，并且 PlayerManager 注册时会 check。
- PlayerAccount 是 UObject，不是 ActorComponent，不通过 Add Components 挂载。
- PlayerAccount 只在服务器侧 PlayerManager 中管理。
- 玩家退出后当前代码只从 map 移除账户；如果账户持有需要保存/解绑的外部句柄，玩法子类需要设计清理时机。

## 玩家玩法组件

`UOrionPlayerGameplayComponent` 是 PlayerController 上的玩法状态组件，实现 `ILoadingProcessInterface`。

职责：

- BeginPlay 缓存 `ACorePlayerController`。
- 轮询查找同 Controller 上的 `UOrionPlayerInfoComponent`。
- InfoComponent 初始化后调用 `OnPlayerInitialized` 和蓝图事件。
- 组件销毁时调用 `OnPlayerLogout` 和蓝图事件。
- 在 `bPlayerInitializationCompleted` 为 false 时让 loading screen 继续显示。

写玩法组件：

1. 继承 `UOrionPlayerGameplayComponent`。
2. `UCLASS(meta=(BlueprintSpawnableComponent))`，如果需要蓝图子类或资产挂载。
3. 覆盖 `OnPlayerInitialized`，先或后调用 `Super`，按依赖决定。
4. 只在 `GetOwner()->HasAuthority()` 中执行服务器权威状态。
5. 需要客户端 UI 或本地输入时检查 `PlayerController->IsLocalController()`。
6. 完成初始化后调用 `SetPlayerInitializationCompleted()`。
7. 在 `OnPlayerLogout` 撤销委托、消息监听、临时状态和外部 handle。

典型用途：

- 玩法内玩家加入/退出。
- 玩法私有玩家状态。
- 通知 GameState 上的玩法管理组件。
- 注册玩家专属消息监听。
- 初始化玩家 UI 或玩家任务状态。

不适合：

- 持久账户数据，放 PlayerAccount/Archive。
- Pawn 输入或移动，放 PawnData/PawnControl/Ability。
- 所有玩法共享的基础能力，放宿主 PlayerController/PlayerState 或核心已存在扩展点。

## 玩家出生管理

`UOrionPlayerSpawningManagerComponent` 是 GameStateComponent。GameMode 的出生相关函数会查 GameState 上该组件并转发：

- `ChoosePlayerStart`
- `ControllerCanRestart`
- `FinishRestartPlayer`

写玩法出生管理：

1. 继承 `UOrionPlayerSpawningManagerComponent`。
2. 覆盖 `OnChoosePlayerStart` 自定义选择逻辑。
3. 覆盖 `OnFinishRestartPlayer` 做出生完成后的玩法通知。
4. 需要蓝图表现时实现 `K2_OnFinishRestartPlayer`。
5. 通过 GameFeature Add Components 挂到 GameState。

组件会缓存世界中已存在和后续 spawn 的 `AOrionPlayerStart`，并对被选择的 start 调用 `TryClaim`。如果玩法需要团队出生点、房间槽位或排队出生，优先扩展这个组件，而不是改 GameMode。

`AOrionPlayerStart` 默认提供占位检测和 `TryClaim` 扩展点；具体 claim 策略当前需要玩法层实现。

## 好友和玩家资料

好友系统围绕 `FOrionPlayerID`：

- `UOrionFriendItemBase` 保存好友 PlayerID 和列表索引。
- Steam 版本 `UOrionFriendItemSteam` 从 Steam API 获取头像、昵称和在线状态。
- `UOrionFriendManagerSubsystemBase` 是 GameInstanceSubsystem，Dedicated Server 不创建。
- `UOrionFriendManagerSteam` 刷新 Steam 好友列表，缓存 `FOrionPlayerID -> FriendItem`。
- `UOrionFriendUtilities` 提供蓝图函数获取玩家昵称和头像。

使用规则：

- UI 获取玩家昵称或头像时优先走 `UOrionFriendUtilities`。
- 需要强制刷新好友数据时使用 subsystem 的 refresh 参数或刷新入口。
- 不要在 UI 里直接调用 Steam API，除非是专门的 Steam 平台实现类。
- 不是好友的玩家头像/名称，Subsystem 会尝试直接通过 Steam ID 查询。

## GameFeature 挂载规则

使用 `UGameFeatureAction_AddComponents` 或 Experience/ActionSet 内联 Add Components action。

常用挂载：

- 玩家玩法组件：`ActorClass = AOrionPlayerController` 或项目当前 PlayerController 派生类，`ComponentClass = <Feature>PlayerGameplayComponent`。
- 玩家出生管理器：`ActorClass = AOrionGameState` 或项目当前 GameState 派生类，`ComponentClass = <Feature>PlayerSpawningManagerComponent`。

client/server flags：

- 玩家玩法组件需要服务器注册、客户端 UI 或 loading gate 时，通常 client/server 都启用。
- 纯服务器规则组件可只启用 server。
- 纯本地 UI 组件可只启用 client，但仍要确认依赖的 InfoComponent 是否在该端初始化。
- GameState 出生管理通常至少 server 启用，因为 GameMode 只在服务器选择出生点。

关键点：

- 被挂载 Actor 必须能被 ModularGameplay component manager 识别。
- Add Components action 会处理现有 world、后续 GameInstance、激活和反激活。
- 反激活时释放 request handle 会移除组件；组件自己的 `OnComponentDestroyed` 应完成业务清理。

## 自动化挂载 recipe

通过 MCP Experience Toolset 时，先 `describe_toolset` 确认 schema，再用 `AddComponentActionEntry`。

挂 PlayerGameplayComponent：

```text
AssetPath: Experience 或 ActionSet 资产路径
ActorClassPath: /Script/<HostGameModule>.<HostPlayerControllerClass>
ComponentClassPath: /Script/<FeatureRuntimeModule>.<FeaturePlayerGameplayComponent>
bClientComponent: true
bServerComponent: true
ActionIndex: -1
bSave: true
```

挂 PlayerSpawningManagerComponent：

```text
AssetPath: Experience 或 ActionSet 资产路径
ActorClassPath: /Script/<HostGameModule>.<HostGameStateClass>
ComponentClassPath: /Script/<FeatureRuntimeModule>.<FeaturePlayerSpawningManagerComponent>
bClientComponent: false
bServerComponent: true
ActionIndex: -1
bSave: true
```

设置 PlayerAccountClass：

```text
SetExperiencePlayerAccountClass(
  ExperiencePath,
  /Script/<FeatureRuntimeModule>.<FeaturePlayerAccount>,
  bSave=true
)
```

如果使用 Blueprint 子类作为组件或 Experience，传 Blueprint generated class 路径，并通过当前 tool schema 确认路径格式。不要写本机磁盘路径。

## 业务落点决策

玩家账户、存档、角色创建数据：

- 账户对象：`UOrionPlayerAccount` 派生。
- 保存数据：`UOrionArchivePlayer` 派生。
- 运行时可组合玩家数据对象：`UOrionPlayerData` 派生。
- 通过 Experience `PlayerAccountClass` 接入。

玩法内玩家状态：

- `UOrionPlayerGameplayComponent` 派生。
- 通过 GameFeature Add Components 挂 PlayerController。
- 跨系统通知优先用 GameplayMessageRouter。

出生和重生：

- `UOrionPlayerSpawningManagerComponent` 派生。
- 通过 GameFeature Add Components 挂 GameState。
- 不改 GameMode。

ASC、能力、输入：

- PlayerState 上 ASC 和 PawnData AbilitySet 是基础能力授予链。
- 小玩法动作优先做 GA，通过 AbilitySet/PawnData/Experience/GameFeature 接入。
- 输入不要直接绑在 PlayerGameplayComponent，除非是明确的 UI/控制器级特殊输入；常规 gameplay input 走 PawnData/InputConfig/AbilitySet。

好友、头像、玩家名：

- UI 和蓝图使用 `UOrionFriendUtilities`。
- 平台差异放 FriendManager 子类。
- 不把 Steam 逻辑写进通用 UI。

## 常见验证

编译验证：

- 修改宿主 Game Player 类，构建宿主 Editor target。
- 修改 GameFeature runtime player 类，构建对应 Editor target，并确认 runtime 模块依赖宿主 Game、GameCore、ModularGameplay 等需要模块。

Experience 验证：

- Experience data validation 通过，`PlayerAccountClass` 非空。
- Add Components action 中 ActorClass 和 ComponentClass 都能加载。
- 组件挂载所在 Experience/ActionSet 会随目标玩法加载。

运行验证：

- 服务器进入关卡后 `UOrionPlayerManager` 拿到 PlayerAccountClass。
- 本地 PlayerController 的 InfoComponent 生成非空 PlayerID。
- 服务器 InfoComponent 收到并注册 PlayerID。
- PlayerAccount 创建并加载或创建 ArchivePlayer。
- PlayerGameplayComponent 收到 `OnPlayerInitialized`。
- Loading screen 不再被该组件阻塞。
- 退出玩法或反激活 GameFeature 时组件销毁并执行 `OnPlayerLogout`。
- 自定义出生管理器被 GameMode 转发调用。

多人验证：

- Standalone、Listen Server、Dedicated Server、Client 都检查。
- Dedicated Server 不依赖本地好友 subsystem 或 UI。
- Client-only 组件不要执行服务器权威逻辑。
- Server-only 出生组件不要依赖本地 UI 或 LocalPlayer。

## 常见错误

### PlayerAccountClass 为空

现象：Experience 校验失败，或玩家注册时 check。

修复：创建/编辑 Experience 时设置具体 PlayerAccount class。每个玩法如果有自己的玩家存档，就给该玩法自己的账户类。

### PlayerGameplayComponent 永远卡 loading

现象：加载屏一直显示 `Initializing player`。

原因：组件没有调用 `SetPlayerInitializationCompleted()`，或没有等到 InfoComponent。

修复：在 `OnPlayerInitialized` 完成必要初始化后调用 `SetPlayerInitializationCompleted()`；确认组件挂到 PlayerController 且同 Controller 有 InfoComponent。

### 组件挂到错误 Actor

现象：Add Components action 存在，但运行时组件不出现。

修复：

- PlayerGameplayComponent 挂 PlayerController。
- PlayerSpawningManagerComponent 挂 GameState。
- Pawn 相关组件挂 Pawn/Character。
- 检查 client/server flags 和 ActorClass 是否是当前实际派生类或其基类。

### 在 GameMode 写玩家玩法逻辑

现象：GameMode 中出现玩家加入、队伍、出生规则、玩家状态、账户或 UI 逻辑。

修复：玩家加入/退出用 PlayerGameplayComponent，出生规则用 PlayerSpawningManagerComponent，账户用 PlayerAccount，玩法组合用 Experience/ActionSet/GameFeature。

### 直接使用 Steam ID 字符串

现象：存档、好友、UI、账户 map 使用裸字符串或平台 ID。

修复：统一转换为 `FOrionPlayerID`，只有平台实现内部才接触 Steam ID。

### 客户端访问服务器账户对象

现象：客户端 UI 试图直接读取 PlayerManager 中的 PlayerAccount。

修复：PlayerManager 不在客户端创建。客户端展示用 replicated state、GameplayMessageRouter、RPC、PlayerState/Pawn/Widget model 或 Friend utilities。

### 反激活后玩家组件残留

现象：退出玩法后玩家状态、监听或 UI 仍然存在。

修复：通过 GameFeature Add Components 挂载，让 request handle 负责移除组件；在组件 `OnPlayerLogout` 或 `OnComponentDestroyed` 解除自己注册的委托、消息监听和 UI handle。
