# Unreal 系统层框架手册

本手册用于在框架系统层写代码、审查代码或回答“这个 System 文件夹怎么用”时快速建立上下文。内容基于当前项目源码和相关 Unreal Engine 源码模式整理，但示例使用占位符，不绑定具体项目名或机器路径。

## 能力地图

- `UCoreAssetManager`：全局资产管理入口，负责启动期加载、常驻资产保活、GameData 缓存、默认 PawnData 和 GameplayCue 预加载。
- `FCoreAssetManagerStartupJob`：启动期加载任务包装，提供权重、进度委托、同步等待和日志。
- `UCoreGameData`：全局不可变 `UPrimaryDataAsset`，通过 AssetManager 读取。
- `UCoreGameInstance`：基于 `UCommonGameInstance` 的游戏实例基类，接入 CommonUser/CommonSession 流程、注册模块化 Gameplay init state，并保留网络加密扩展点。
- `ACoreGameSession`：基于 `AGameSession` 的会话基类，自动登录流程交给 GameMode 专门处理。
- `UCoreWorldSubsystem`：项目世界子系统基类，统一处理是否创建、是否在客户端创建、是否在 dedicated server 创建，以及前置 world subsystem 依赖。
- `FGameplayTagStackContainer`：基于 `FFastArraySerializer` 的 GameplayTag 计数容器，适合复制“某 tag 当前有多少层”这类状态。
- 宿主 Game 模块 `System`：放核心层派生实现，例如 GameInstance 中的运行时 manager、WorldSubsystem 蓝图桥接、系统静态函数库。渲染、音频、在线等具体领域继续路由到专项 Skill。

## AssetManager 与启动加载

`UCoreAssetManager` 是系统层最重要的入口之一。写启动加载、全局数据、默认 PawnData 或 PrimaryAsset 相关代码时，先确认这四处：

1. `Config/DefaultEngine.ini` 的 `[/Script/Engine.Engine]` 中是否设置了正确的 `AssetManagerClassName`。
2. `Config/DefaultGame.ini` 的 `[/Script/Engine.AssetManagerSettings]` 是否扫描了目标 `PrimaryAssetType`，且发布需要的资产使用合适的 `CookRule`。
3. `Config/DefaultGame.ini` 的核心 AssetManager section 是否配置 `CoreGameDataPath` 和 `DefaultPawnData`。
4. 目标资产是否是 PrimaryAsset，或是否只应该作为普通 soft reference 由上层资源持有。

常用模式：

- 启动期全局数据：通过 `GetGameData<T>()` 或 `UCoreGameData::Get()` 获取；不要在业务代码里直接硬编码 GameData 资产路径。
- 全局常驻资产：使用 `GetAsset<T>(SoftPtr, true)` 或 `GetSubclass<T>(SoftClassPtr, true)` 保活；只在确实需要常驻时传 `true`。
- 启动任务：用 startup job 包装同步/异步加载任务，按权重更新 loading progress；dedicated server 通常直接执行任务，不需要 UI 进度。
- 排查加载：可用项目提供的 dump console command 查看 AssetManager 保活资产；需要精确加载日志时用启动参数打开 asset load logging。

避免：

- 在 tick、Widget 构建、频繁输入回调或消息回调里同步加载大资产。
- 绕过 AssetManager 自己 `StaticLoadObject` 某个 GameData 或 PawnData。
- 新增 PrimaryAsset 类型后只改代码，不改 `PrimaryAssetTypesToScan` 和 cook 规则。

## GameData 与默认 PawnData

`UCoreGameData` 是全局配置资产，不应承载运行时可变状态。它适合保存：

- 全局默认类、软引用资产、UI policy、消息配置等跨地图稳定数据。
- 框架启动必须有的默认配置。
- 默认 PawnData 或 Experience 无法提供时的 fallback。

选择规则：

- 每局、每玩家、每关卡会变的状态不要放 GameData，放 GameState、PlayerState、SaveGame、Subsystem 或 Experience。
- 玩法切片专属默认值优先放 GameFeature 自己的 DataAsset 或 Experience 定义。
- 新增 GameData 字段前先确认是否已有 Experience、PawnData、GameFeatureData 或 Settings 类能承载。

## GameInstance 与 Session

`UCoreGameInstance` 继承 CommonGame 的用户与会话流程。父级 `UCommonGameInstance` 在 `Init()` 中绑定 CommonUser 和 CommonSession 的事件，包括用户初始化、权限变化、外部会话请求和销毁会话请求。核心层在此基础上：

- 提供 primary player controller 的强类型获取。
- 在 `Init()` 中注册 GameFrameworkComponentManager 的 init state 链。
- 暴露 `CanJoinRequestedSession()`，用于控制是否可以立刻加入外部请求的会话。
- 预留 `ReceivedNetworkEncryptionToken()` 和 `ReceivedNetworkEncryptionAck()`，用于未来接入网络流量加密。
- 在 `Shutdown()` 中清理会话相关委托。

宿主 GameInstance 常见扩展：

- 登录成功后，让本地玩家加载本机/共享设置。
- 创建非 UObject 的全局 runtime manager，并通过 getter 提供给 world subsystem。
- 不要在 GameInstance 中堆叠大量玩法状态；玩法状态优先放 Experience、GameState、PlayerState、GameFeature 组件或 WorldSubsystem。

Session 相关：

- `ACoreGameSession::ProcessAutoLogin()` 返回 true，是为了把 dedicated server 自动登录交给 GameMode 流程。
- Steam、Lobby、好友邀请、CommonSession 搜索/加入/销毁等具体逻辑继续使用在线专项 Skill。
- 蓝图或 UI 不要直接拼 travel URL 当作加入会话默认路径，应走框架的 Session component / CommonSession 链路。

## WorldSubsystem 基类

派生 `UCoreWorldSubsystem` 的场景：

- 一个 World 一份的管理器，例如玩家管理、队伍管理、游戏阶段、渲染世界桥接。
- 需要 `OnWorldBeginPlay()`、`Initialize()`、`Deinitialize()` 生命周期。
- 需要按 client / server / dedicated server 控制创建。
- 需要等待另一个 world subsystem 先存在。

构造函数中常见设置：

```cpp
bShouldCreateOnClient = false;
bShouldCreateOnDedicatedServer = false;
PrerequisiteWorldSubsystemList.Add(<SubsystemClass>::StaticClass());
```

注意：

- `ShouldCreateSubsystem()` 阶段还不等于世界已经开始游戏；不要在里面访问需要 BeginPlay 才稳定的 actor。
- 如果只允许最终叶子类创建，可以像项目的 game phase subsystem 一样检查派生类数量，避免抽象中间层实例化。
- 访问 `GetWorld()->GetGameState()`、Experience component 或 GameInstance manager 时，通常放在 `OnWorldBeginPlay()` 或 Experience loaded 回调后。

## GameplayTagStack

`FGameplayTagStackContainer` 适合表示“这个 actor/team/player 当前拥有某个 tag 的层数”。它不是 GameplayMessageRouter，也不是 Ability tag count 的替代品；它是一个轻量 replicated state container。

使用规则：

- owner actor/component 必须把该 container 作为可复制属性，并实现 `GetLifetimeReplicatedProps()`。
- 修改层数时通过 `AddStack()` 和 `RemoveStack()`，不要直接改内部数组或 map。
- 新增或修改 item 后调用 `MarkItemDirty()`，删除 item 后调用 `MarkArrayDirty()`；当前容器已经封装这些操作。
- 查询用 `GetStackCount()` 和 `ContainsTag()`，不要遍历内部数组。
- 传入无效 tag 会输出脚本警告；调用方应先确保 tag 已注册且语义正确。

适用场景：

- 队伍、玩家或单位的状态计数。
- 多来源叠加的状态开关，例如多个系统都要求显示某状态。
- 需要复制给客户端、但不需要 GameplayEffect 完整语义的 tag 状态。

不适用场景：

- 需要触发跨模块事件：用 GameplayMessageRouter。
- 需要 Ability prediction、GE stacking、attribute modifier：用 GAS。
- 只是一对一内部回调：用委托、接口或直接调用。

## 系统蓝图静态函数库

系统层蓝图函数库应该保持很薄：

- 构建类型、编辑器环境等纯查询。
- 把用户可见 ID 转成 `FPrimaryAssetId` 等小型转换。
- 将外部系统事件桥接到 GameplayEvent、GameplayMessageRouter 或 Session component。

不要在蓝图静态函数库里：

- 创建长生命周期 UObject manager。
- 直接做复杂联机流程、异步加载链或多阶段状态机。
- 隐式同步加载大资产。

## 配置合同

系统层最常见配置位：

```ini
[/Script/EngineSettings.GameMapsSettings]
GameInstanceClass=/Game/System/<BP_GameInstance>.<BP_GameInstance>_C

[/Script/Engine.Engine]
AssetManagerClassName=/Script/<HostGameModule>.<AssetManagerClass>

[/Script/Engine.AssetManagerSettings]
+PrimaryAssetTypesToScan=(PrimaryAssetType="<TypeName>",AssetBaseClass="/Script/<Module>.<Class>",...)

[/Script/<HostGameModule>.<AssetManagerClass>]
CoreGameDataPath=/Game/<Path>/<GameDataAsset>.<GameDataAsset>
DefaultPawnData=/Game/<Path>/<PawnDataAsset>.<PawnDataAsset>
```

改配置时同时确认：

- section owning class 是否 `UCLASS(Config=Game)` 或引擎配置类。
- 资产路径是否使用 Unreal content path，不是文件系统绝对路径。
- 平台覆盖是否需要写入 `Config/<Platform>/<Platform>Game.ini` 或 `<Platform>Engine.ini`。
- 打包后是否需要 cook / stage 对应 PrimaryAsset 或内容目录。

## 扩展落点

- 新增全局默认数据：优先扩展宿主 GameData / Experience / Settings，而不是修改核心 GameData；确实属于框架底座再申请改核心层。
- 新增世界级运行时管理器：优先派生 `UCoreWorldSubsystem`，把创建条件写清楚。
- 新增非 UObject manager：可由宿主 GameInstance 持有，但要处理生命周期、析构和 subsystem 访问时机。
- 新增系统蓝图入口：放宿主 Game 模块的 BlueprintFunctionLibrary，保持薄桥接。
- 新增玩法业务：默认放 GameFeature 插件，必要时通过 Experience、component、message 或 Ability 接入系统层。
- 新增渲染、音频、在线、输入、UI 专门逻辑：先路由到对应专项 Skill，再决定是否需要系统层桥接。

## 常见错误

- 为了一个具体玩法改 `Source/GameCore/System`。
- 忘记配置 `AssetManagerClassName`，导致 `UCoreAssetManager::Get()` fatal。
- 新增 PrimaryAsset 类型但没有添加扫描规则或 cook 规则，编辑器可用、打包丢失。
- 在 GameInstance 里保存关卡内状态，切图后状态混乱。
- WorldSubsystem 在 client/dedicated server 创建策略不明确，导致服务端没有管理器或客户端误跑权威逻辑。
- FastArray 容器直接改数组，不调用 dirty 标记，客户端不同步。
- 蓝图静态函数库承担太多业务流程，后续无法反激活、无法测试、无法复用。

## 验证清单

- 源码：确认目标类父类、生命周期、UHT 宏、模块依赖和 include 都来自当前源码。
- 配置：确认 `GameInstanceClass`、`AssetManagerClassName`、PrimaryAsset 扫描、GameData/PawnData 路径都指向可 cook 的资产。
- 构建：至少编译宿主 Game 模块或目标 GameFeature runtime module。
- 运行：验证 PIE 和 packaged/dev build 中 AssetManager 启动加载没有 fatal，GameInstance/WorldSubsystem 创建时机正确。
- 网络：如果使用 `FGameplayTagStackContainer`，做一次 listen server 或 dedicated server 客户端同步验证。
- 路由：渲染、音频、在线、输入、UI、GameFeature、GAS 细节已经交给对应专项 Skill，没有在系统 Skill 中重复实现领域规则。
