# 存档系统框架手册

## 目录

- 核心模型
- 源码定位
- UE SaveGame 基础
- 框架存档类型
- Slot 与目录规则
- 世界存档生命周期
- 自动保存与消息
- 玩家存档与 PlayerAccount
- Experience 与 GameFeature 接入
- 世界设置与 UI
- Session 与前端流程
- 多人游戏规则
- 新增存档数据 recipe
- 验证清单
- 常见错误

## 核心模型

本框架把游戏存档称为 Archive。一个世界存档由一个 `WorldID` 标识，并按当前用户 ID 隔离。核心入口是 `UOrionArchiveManagerSubsystem`，它是 GameInstanceSubsystem，管理当前正在操作的 `UOrionArchiveContext` 和存档列表。

主要对象：

- `UOrionArchiveManagerSubsystem`：全局存档管理器。负责刷新存档列表、新游戏、加载游戏、初始化当前存档、保存指定存档类型、删除当前存档、退出世界、获取当前 LevelMeta/WorldOption，以及按玩家 ID 获取或加载玩家存档。
- `UOrionArchiveContext`：一个世界存档上下文。持有 `WorldID`、LevelMeta handler、WorldOption handler、玩家 handler map。
- `FOrionArchiveHandler`：底层 handler 抽象，统一 `AsyncLoadArchive`、`LoadArchive`、`AsyncSaveArchive`、`DeleteArchive`、`DoesArchiveExist`。
- `UOrionArchiveLevelMeta`：世界元数据 SaveGame，例如世界名、最近更新时间、玩法类型、LevelMetaDefinition PrimaryAssetId。
- `UOrionSettingsWorldOption`：世界/房间选项 SaveGame，例如房间创建参数、联机选项、人数等可扩展字段。
- `UOrionArchivePlayer`：单个玩家在当前世界中的 SaveGame。玩法可以创建派生类保存角色创建、背包摘要、进度、统计等玩家持久化数据。
- `UArchiveEntry` / `UArchiveEntry_Item`：存档列表 UI 使用的轻量条目，封装世界名、更新时间、选择当前操作存档等行为。
- `UGamePhaseAbility_InitializeArchive`：玩法加载后初始化当前存档并确保 WorldOption 存在。
- `UGamePhaseAbility_StartAutoSave`：启动周期性自动保存，当前默认每 30 秒保存 LevelMeta 和 Player。

存档系统不是普通工具函数集合，而是世界玩法流程的一部分。写业务前先判断数据属于世界、玩家、房间设置、本机设置还是临时运行时状态。

## 源码定位

优先读这些相对路径：

- 宿主 Game 模块 `SaveGame`
- 宿主 Game 模块 `SaveGame/Handler`
- 宿主 Game 模块 `SaveGame/Phases`
- 宿主 Game 模块 `Player`
- 宿主 Game 模块 `Settings/Game`
- 宿主 Game 模块 `GameModes`
- 宿主 Game 模块 `Session`
- `Plugins/GameFeatures/<FeatureName>/Source/<FeatureRuntime>/Public/Player`
- `Plugins/GameFeatures/<FeatureName>/Source/<FeatureRuntime>/Private/Player`
- `Plugins/GameFeatures/<FeatureName>/Source/<FeatureRuntime>/Public/Game`
- `Plugins/GameFeatures/<FeatureName>/Source/<FeatureRuntime>/Private/Game`

重点搜索：

- `UOrionArchiveManagerSubsystem`
- `UOrionArchiveContext`
- `FOrionArchiveHandler`
- `EOrionArchiveType`
- `UOrionArchiveLevelMeta`
- `UOrionSettingsWorldOption`
- `UOrionArchivePlayer`
- `UOrionPlayerAccount`
- `PlayerArchiveClass`
- `PlayerAccountClass`
- `UGamePhaseAbility_InitializeArchive`
- `UGamePhaseAbility_StartAutoSave`
- `System.Archive.AutoSave`

对照引擎源码时查：

- `GameFramework/SaveGame.h`
- `Kismet/GameplayStatics.h`
- `GameplayStatics.cpp` 的 SaveGame functions
- `GameFramework/SaveGame.cpp` 中 `ULocalPlayerSaveGame`

## UE SaveGame 基础

`USaveGame` 是可序列化 UObject 基类。引擎的普通 SaveGame 流程是：

1. 创建 `USaveGame` 派生对象。
2. 写入要保存的 `UPROPERTY` 数据。
3. 调用 `UGameplayStatics::SaveGameToSlot` 或 `AsyncSaveGameToSlot`。
4. 读取时用 `LoadGameFromSlot` 或 `AsyncLoadGameFromSlot`，再 cast 回具体类型。

引擎行为要点：

- 普通 `SaveGameToSlot` 会保存对象状态中非 `Transient` 的属性；不要以为只有带 `SaveGame` 标记的字段才会写入普通 SaveGame。
- 异步保存会先在游戏线程把 SaveGame 对象序列化成内存，再在工作线程写平台存档，完成回调回到游戏线程。
- 异步加载会先在工作线程读平台存档，再回游戏线程反序列化并创建对象。
- `UserIndex` 在部分平台会被忽略，但仍应稳定传入；本框架当前 handler 统一使用 `0`，并通过 slot 路径中的用户 ID 隔离。
- `ULocalPlayerSaveGame` 适合本机玩家偏好和本地用户设置，有版本、初始化、PreSave/PostSave 等生命周期。本框架的世界/玩家 Archive 使用普通 `USaveGame`，用户设置中的 Shared/Local 设置可另走 `ULocalPlayerSaveGame` 风格。

不要把 UE 原生 SaveGame API 到处散落在 gameplay 组件里。项目已有 ArchiveManager 和 handler 时，除非是在实现 handler 或独立本机设置，否则通过框架入口保存。

## 框架存档类型

`EOrionArchiveType` 当前包括：

- `WorldOption`：世界/房间选项，slot 名为 `WorldOption`。
- `LevelMeta`：世界元数据，slot 名为 `LevelMeta`。
- `Player`：玩家存档，位于 `Players/<PlayerID>`。

保存入口：

```cpp
ArchiveManager->SaveCurrentArchiveByTypes({
	EOrionArchiveType::WorldOption,
	EOrionArchiveType::LevelMeta,
	EOrionArchiveType::Player
});
```

常用归属：

- 世界名、最近更新时间、玩法类型、LevelMetaDefinition PrimaryAssetId：`UOrionArchiveLevelMeta`。
- 房间名以外的世界创建参数、联机参数、人数、规则开关：`UOrionSettingsWorldOption` 或其派生/扩展。
- 玩家角色创建数据、个人进度、玩法私有玩家数据：`UOrionArchivePlayer` 派生类。
- 画质、音频、输入、语言、字幕等本机或账号设置：`UOrionSettingsLocal`、`UOrionSettingsShared` 和 GameSettings registry，不放进世界 archive。
- 运行中可复制状态：Actor/Component/PlayerState/Pawn/ASC replication，不直接依赖本地 SaveGame 同步。

## Slot 与目录规则

实际文件最终由引擎平台 SaveGameSystem 管理。框架 handler 使用相对 slot 名组织目录：

- LevelMeta：`<UserID>/<WorldID>/LevelMeta`
- WorldOption：`<UserID>/<WorldID>/WorldOption`
- Player：`<UserID>/<WorldID>/Players/<PlayerID>`

`UOrionArchiveManagerSubsystem::RefreshArchive` 会遍历项目保存目录下当前用户的 SaveGames 子目录，只把存在 `LevelMeta.sav` 的 `WorldID` 识别为有效世界存档。

规则：

- 不要在业务代码里重复拼 slot 名。
- 不要用玩家昵称、显示名、地图名作为唯一存档 key。
- `WorldID` 由 `FGuid::NewGuid().ToString()` 创建。
- 用户隔离使用 `UOrionUserSubsystem` 的 `FOrionPlayerID::ToString()`；没有用户 ID 时会使用兜底值。
- 玩家隔离使用 `FOrionPlayerID`，不要使用裸字符串 map。

## 世界存档生命周期

创建新游戏：

1. 前端或 LevelMetaDefinition 调用 `UOrionArchiveManagerSubsystem::NewGame(LevelMetaDefinition)`。
2. ArchiveManager 创建 `UOrionArchiveContext::NewArchive`。
3. ArchiveContext 生成新的 `WorldID`。
4. 创建 `UOrionArchiveLevelMeta` 和 `UOrionSettingsWorldOption` handler。
5. 如果传入 LevelMetaDefinition，则写入 `LevelMetaDefinitionAssetId` 和 `GameModeType`。

加载已有游戏：

1. UI 通过 `GetArchiveEntries` 获取已排序存档条目。
2. 用户选择条目后，`UArchiveEntry_Item::OperationArchiveChanged` 会把该 ArchiveContext 设置为 `CurrentOperationArchive`。
3. 调用 `LoadGame` 时，当前 context 会加载 WorldOption。
4. 进入 gameplay world 后，InitializeArchive phase 会把当前 context 加入 ArchiveItems，并确保 WorldOption 已保存。

刷新存档列表：

1. `RefreshArchive` 遍历当前用户保存目录。
2. 已缓存 context 复用，未缓存 world id 创建 `GetArchive`。
3. `GetArchive` 异步加载 LevelMeta，成功后标记该条目可用；失败则销毁 context。

删除当前存档：

- 当前实现会调用 LevelMeta handler 删除 LevelMeta。
- 其他文件是否删除或保留备份，需要以最新源码为准；扩展删除逻辑前必须明确是否要删除 WorldOption 和 Players 子目录。

退出世界：

- `QuitWorld` 清空 `CurrentOperationArchive`。
- Session 退出或加入邀请前会调用，避免旧世界存档继续被误操作。

## 自动保存与消息

玩法开始后，GameFeature 的 GameState 组件通常在 Experience Loaded 后启动 `UGamePhaseAbility_InitializeArchive`。

InitializeArchive 做的事情：

1. 获取 GameInstance 上的 ArchiveManager。
2. 读取 `CurrentOperationArchive`。
3. Editor 下如果为空，会创建一个空新游戏，方便 PIE 调试。
4. 调用 `ArchiveManager->InitArchive()`。
5. 如果 WorldOption 不存在，先保存 `WorldOption`。
6. 启动 `UGamePhaseAbility_StartAutoSave`。

StartAutoSave 做的事情：

1. 缓存 ArchiveManager。
2. 调用 `ClearUnusedArchives`，只保留当前操作存档。
3. 设置定时器，默认每 30 秒触发。
4. 每次触发保存 `LevelMeta` 和 `Player`。
5. 广播 GameplayMessageRouter 消息 `System.Archive.AutoSave`，payload 是 `FCoreVerbMessage`，Instigator 是 ArchiveManager。

接入提示：

- UI 想展示“正在自动保存”时，监听 `System.Archive.AutoSave`，不要在 AutoSave ability 里直接操作 UI。
- 需要改自动保存间隔或保存类型时，优先扩展 GamePhaseAbility 或配置化，不要在多个 gameplay component 各自开 timer。
- 需要手动保存时仍通过 `SaveCurrentArchiveByTypes`，并明确保存类型。

## 玩家存档与 PlayerAccount

玩家持久化数据通过 `UOrionPlayerAccount` 接入。

服务器流程：

1. `UOrionPlayerManager` 是 WorldSubsystem，客户端不创建。
2. World begin play 时注册 Experience Loaded 高优先级回调。
3. Experience 加载完成后读取 `UOrionExperienceDefinition::PlayerAccountClass`。
4. `UOrionPlayerInfoComponent` 在服务器收到玩家 ID 后调用 PlayerManager 注册玩家。
5. PlayerManager 用 `PlayerAccountClass` 创建账户对象。
6. `UOrionPlayerAccount::Initialize(PlayerID)` 获取 ArchiveManager 并调用 `LoadPlayerArchive`。
7. 当前 ArchiveContext 按 `FOrionPlayerID` 查找玩家 handler；没有则异步加载 `Players/<PlayerID>`。
8. 如果玩家存档不存在，基类 `OnGetPlayerArchive(nullptr)` 会创建新玩家存档并重新加载。

创建玩法专属玩家存档：

1. 创建 `<Feature>ArchivePlayer : UOrionArchivePlayer`。
2. 在 ArchivePlayer 中添加需要保存的 `UPROPERTY` 字段。
3. 创建 `<Feature>PlayerAccount : UOrionPlayerAccount`。
4. 在账户构造函数中设置 `PlayerArchiveClass = <Feature>ArchivePlayer::StaticClass()`。
5. 覆盖 `OnGetPlayerArchive`，按业务决定是否调用 `Super`。
6. 成功拿到存档后 cast 并缓存具体 `PlayerArchive`。
7. 在 Experience 的 `PlayerAccountClass` 设置该账户类。

示例形状：

```cpp
UCLASS()
class UFeatureArchivePlayer : public UOrionArchivePlayer
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 CharacterLevel = 1;

	UPROPERTY()
	FName SelectedLoadoutId;
};

UFeaturePlayerAccount::UFeaturePlayerAccount()
{
	PlayerArchiveClass = UFeatureArchivePlayer::StaticClass();
}

void UFeaturePlayerAccount::OnGetPlayerArchive(UOrionArchivePlayer* OutPlayerArchive)
{
	Super::OnGetPlayerArchive(OutPlayerArchive);
	PlayerArchive = Cast<UFeatureArchivePlayer>(OutPlayerArchive);
}
```

如果首次进入需要跳转创建角色流程，可以像现有示例一样在 `OutPlayerArchive == nullptr` 时自定义处理。但要小心：如果不调用 `Super`，就必须自己创建或安排创建逻辑，否则 `PlayerArchive` 会一直为空。

## Experience 与 GameFeature 接入

存档系统和玩法流程的标准组合：

- 前端或关卡入口选择 LevelMetaDefinition。
- LevelMetaDefinition 调用 `ArchiveManager->NewGame(this)`。
- LevelMeta 保存玩法类型和 LevelMetaDefinition PrimaryAssetId。
- 进入玩法地图后 Experience 加载。
- GameFeature 的 GameState 组件监听 Experience Loaded。
- 组件启动 `UGamePhaseAbility_InitializeArchive`。
- PlayerManager 从 Experience 读取 `PlayerAccountClass`。
- 玩家 InfoComponent 注册玩家后，PlayerAccount 加载/创建玩家 Archive。
- 自动保存阶段保存 LevelMeta 和 Player。

不要把“进入玩法后初始化存档、创建玩家账户、自动保存”的业务塞进 GameMode。GameMode 只选择 Experience，具体玩法由 Experience、ActionSet、GameFeature 组件和 GamePhase 组合。

当一个玩法拥有自己的持久化数据时：

- 代码放在该 GameFeature runtime module。
- ArchivePlayer 和 PlayerAccount 放 `Player` 目录。
- 玩法 GameState component 放 `Game` 目录，负责启动 InitializeArchive 或其他玩法 phase。
- Experience 指向该 PlayerAccountClass。
- 如需 UI 创建新游戏或加载游戏，UI 通过 LevelMetaDefinition/ArchiveManager 调用，不直接 new SaveGame。

## 世界设置与 UI

世界/房间设置使用 `UOrionGameWorldSettingRegistry`：

- `GetCurrentLevelMeta` 绑定到 `UOrionLocalPlayer::GetCurrentLevelMeta`。
- `GetCurrentWorldOptionSettings` 绑定到 `UOrionLocalPlayer::GetCurrentWorldOptionSettings`。
- `SaveChanges` 调用 `ArchiveManager->SaveCurrentArchiveByTypes({WorldOption, LevelMeta})`。
- Registry 初始化完成前会检查当前 WorldOption 是否可用。

新增世界设置项：

1. 判断字段属于 LevelMeta 还是 WorldOption。
2. 在对应 SaveGame 类上提供 getter/setter。
3. 在 `UOrionGameWorldSettingRegistry` 中创建 `UGameSettingValueEditable_*`、`UGameSettingValueDiscreteDynamic_*` 或合适 setting。
4. 用 `FGameSettingDataSourceDynamic` 绑定到 LocalPlayer -> SaveGame -> getter/setter。
5. `SaveChanges` 覆盖中保存对应 `EOrionArchiveType`。
6. UI Widget 只负责展示 GameSettings 屏幕，不直接写 SaveGame。

世界名当前属于 LevelMeta，因为存档列表和 Session 名都需要读取它。

## Session 与前端流程

Session 组件在退出 Session 或加入邀请前调用 `ArchiveManager->QuitWorld()`，避免旧的 `CurrentOperationArchive` 留在 GameInstance 中。

创建新游戏的典型前端流程：

1. 前端 UI 找到目标 `UOrionExperienceLevelMetaDefinition`。
2. 调用 `CreateNewGame` 或直接 `ArchiveManager->NewGame(LevelMetaDefinition)`。
3. LevelMeta 保存 Definition ID 和玩法类型。
4. 玩法特定 LevelMetaDefinition 可继续创建 Session 或加载 Lobby UserFacingDefinition。
5. 进入实际 gameplay 时，使用当前 LevelMeta 的 Definition ID 找回玩法资产并旅行。

创建 HostSessionRequest 时，用户可见的 SessionName 会尝试读取当前 LevelMeta 的世界名。

## 多人游戏规则

默认规则：

- gameplay 相关存档由服务器权威写入。
- `UOrionPlayerManager` 客户端不创建，玩家账户在服务器 world subsystem 中管理。
- 客户端本机设置和世界/玩家存档是两套系统。
- 客户端 UI 如果要改世界设置，应走设置 UI、RPC 或服务器认可的流程，不能直接改服务器账户对象。
- `FOrionPlayerID` 支持复制，远端玩家 ID 通过 `UOrionPlayerInfoComponent` 获得。
- Dedicated Server 不应依赖好友 subsystem、LocalPlayer UI 或本机 SaveGame 偏好。

保存什么：

- 服务器权威状态：等级、解锁、角色创建结果、世界规则、服务器认可的进度。
- 客户端偏好：画质、音频、输入、语言、字幕、UI 偏好。
- 临时 replicated state：当前生命值、临时 buff、正在播放动画、瞬时任务状态；这些通常不直接落 SaveGame，除非明确要离线恢复。

## 新增存档数据 recipe

### 添加玩家角色创建数据

1. 在玩法 GameFeature 创建 `UFeatureArchivePlayer : UOrionArchivePlayer`。
2. 添加 `UPROPERTY()` 的角色创建结构体字段。
3. 创建 `UFeaturePlayerAccount : UOrionPlayerAccount`。
4. 构造函数设置 `PlayerArchiveClass`。
5. `OnGetPlayerArchive` 中缓存 cast 后的 archive。
6. 创建角色 UI 完成后把数据写入服务器账户持有的 archive。
7. 手动保存或等待自动保存 `EOrionArchiveType::Player`。
8. Experience 的 `PlayerAccountClass` 指向 `UFeaturePlayerAccount`。

### 添加世界房间规则

1. 判断字段是否是用户可编辑房间选项。
2. 扩展 `UOrionSettingsWorldOption` getter/setter。
3. 在 `UOrionGameWorldSettingRegistry` 新增 setting。
4. UI 使用现有 GameSettings 屏幕。
5. `SaveChanges` 保存 `WorldOption`。
6. 创建 Session 或进入 gameplay 前从 WorldOption 读取并应用。

### 添加存档列表显示字段

1. 如果字段用于列表快速展示，优先放 LevelMeta。
2. 在 `UOrionArchiveLevelMeta` 加 getter/setter。
3. `UArchiveEntry_Item` 提供读取函数。
4. 存档列表 UI 调用 ArchiveEntry，不直接持有 ArchiveContext。
5. 保存时包含 `EOrionArchiveType::LevelMeta`。

### 添加手动保存按钮

1. UI 按钮只发起命令或调用受控入口。
2. 获取 GameInstance 的 ArchiveManager。
3. 根据按钮语义调用 `SaveCurrentArchiveByTypes`。
4. 保存完成提示优先用 GameplayMessageRouter 或 handler 回调扩展，不在底层 handler 里直接访问 UI。

### 新增 Archive 类型

只有当现有 `WorldOption`、`LevelMeta`、`Player` 无法表达时才新增类型。需要同时处理：

- `EOrionArchiveType` 新枚举。
- 新 SaveGame 类。
- 新 handler 类和 slot 名。
- `UOrionArchiveContext` 的 handler 成员、创建、加载、保存、删除。
- ArchiveManager 对外 API。
- UI/设置/自动保存是否包含该类型。
- 旧存档兼容和缺失文件创建逻辑。

## 验证清单

源码验证：

- 新字段都是 `UPROPERTY`，不需要保存的字段标记 `Transient`。
- SaveGame 类不直接持有无法序列化或不稳定的运行时对象引用。
- PlayerAccountClass 在 Experience 中非空。
- ArchivePlayerClass 在账户构造中设置。
- GameFeature runtime module 依赖包含宿主 Game 模块和需要的 framework 模块。
- UI 不直接拼 slot 或直接保存玩家 archive。

运行验证：

- 新游戏能生成 WorldID，LevelMeta 和 WorldOption 可访问。
- 存档列表能刷新出新世界，更新时间排序正确。
- 加载已有存档后 WorldOption 可读取。
- 首次进入的玩家没有 Player archive 时能创建并重新加载。
- 自动保存触发后重启能读取新数据。
- 手动保存只保存预期类型。
- 删除存档后的列表刷新行为符合需求。
- Session 退出或加入邀请后旧 CurrentOperationArchive 不再被误用。

多人验证：

- Standalone、Listen Server、Dedicated Server + Client 分别验证。
- 服务器创建玩家账户，客户端不会直接访问 PlayerManager。
- Client RPC/Server RPC 边界清楚。
- 玩家退出后不会继续保存无效账户数据；如果玩法账户持有外部 handle，退出时释放。

版本验证：

- 给 archive 加 `Version` 或显式数据版本字段。
- 读取旧存档时处理默认值和迁移。
- 不重命名已发布字段，除非有迁移策略。
- 修改 SaveGame 类路径前考虑旧存档 header 中的类路径加载。

## 常见错误

### 在 gameplay component 里直接 SaveGameToSlot

问题：绕过 ArchiveManager 会产生并行 slot、不同生命周期、无法被存档列表识别。

修复：把数据放进 LevelMeta、WorldOption 或 ArchivePlayer，通过 `SaveCurrentArchiveByTypes` 保存。

### 把玩家持久化数据放进 PlayerState

问题：PlayerState 是网络运行时状态，不等于磁盘持久化。

修复：需要跨 session 的玩家数据放 `UOrionArchivePlayer` 派生类；需要同步给客户端的当前状态再复制到 PlayerState、Pawn 或组件。

### PlayerAccountClass 为空

问题：Experience 校验失败或玩家注册时 check。

修复：每个玩法 Experience 指定合适的 `UOrionPlayerAccount` 派生类。

### 首次玩家存档为空后没有创建

问题：覆盖 `OnGetPlayerArchive` 时没有调用 `Super`，也没有自己创建玩家。

修复：调用 `Super::OnGetPlayerArchive`，或在 `OutPlayerArchive == nullptr` 时显式 `CreateNewPlayer` 并安排后续加载/流程。

### 异步回调里捕获引用

问题：异步 SaveGame 委托会跨线程复制并回游戏线程执行，lambda 捕获引用可能悬空。

修复：委托 payload 用值捕获或弱对象捕获；不要捕获栈上委托引用。审查 handler 成功分支是否会继续执行失败回调，必要时加 `return` 或 `else`。

### 把世界选项存进本机用户设置

问题：房间规则需要和世界存档、Session、玩法流程一致，本机设置不会跟随世界。

修复：世界/房间规则放 WorldOption，用户设备偏好放 Local/Shared settings。

### 用昵称作为存档 key

问题：昵称可变且不唯一。

修复：用户隔离和玩家存档 key 使用 `FOrionPlayerID`。

### 自动保存 UI 强耦合到底层 ability

问题：底层自动保存阶段不应依赖 UI 模块。

修复：监听 `System.Archive.AutoSave` 消息，在 UI 层展示提示。

### 删除存档只删了一部分

问题：只删除 LevelMeta 后，旧 WorldOption/Players 可能残留；但如果需求是备份，这可能是故意行为。

修复：实现删除前先定义产品语义：彻底删除、软删除还是保留备份。然后统一更新 LevelMeta、WorldOption、Players 和存档列表刷新行为。
