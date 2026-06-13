# Teams 框架参考

## 使用范围

当需求出现以下关键词时先使用本 Skill：队伍、Team、阵营、敌友、友军、Neutral/Friendly/Hostile、`FGenericTeamId`、`IGenericTeamAgentInterface`、`IOrionTeamAgentInterface`、`UOrionTeamSubsystem`、TeamInfo、TeamDisplayAsset、TeamCreationComponent、AI Perception affiliation、按队伍出生、友军伤害、团队 UI 展示。

不要把 Teams 当成普通 GameplayTag 分类系统。团队身份要能被 AI、感知、伤害、出生和 UI 共同理解时，优先走 `FGenericTeamId` + TeamInfo/Subsystem 的组合。

## 源码地图

项目 Teams 层：

- `Source/OrionGame/Teams/OrionTeamAgentInterface.*`：项目团队代理接口，扩展引擎 `IGenericTeamAgentInterface`，提供队伍变更委托和 `FGenericTeamId`/`int32` 转换工具。
- `Source/OrionGame/Teams/OrionTeamSubsystem.*`：按世界存在的团队注册表，继承 `UCoreWorldSubsystem`，保存 TeamId 到 Public/Private TeamInfo 与 DisplayAsset 的映射。
- `Source/OrionGame/Teams/OrionTeamInfoBase.*`：复制的团队元数据 Actor 基类，保存 TeamId 和 `FGameplayTagStackContainer TeamTags`。
- `Source/OrionGame/Teams/OrionTeamPublicInfo.*`：公开团队信息，复制 `UOrionTeamDisplayAsset`。
- `Source/OrionGame/Teams/OrionTeamPrivateInfo.*`：私有团队信息扩展点。
- `Source/OrionGame/Teams/OrionTeamDisplayAsset.*`：团队展示数据资产基类；编辑器中修改后通知 TeamSubsystem。
- `Source/OrionGame/Teams/OrionTeamCreationComponent*.h`：挂到 GameState 的团队创建组件基类和指定数量/不限数量抽象分支。
- `Source/BBL/BBL_Teams.h`：蓝图库/蓝图桥接层中的 TeamSubsystem 类型入口。

相关调用点：

- `Source/OrionGame/Character/OrionCharacterSpawner.*`：角色生成点带有 `FGenericTeamId TeamID`，用于按队伍分组生成。
- `Source/OrionGame/Character/OrionCharacterSpawnerManager.*`：维护 SpawnerGroup，并按 TeamId 查找空闲出生点。
- GAS 伤害执行中有队伍伤害判断的预留思路，但当前 TeamSubsystem 没有公开 `CanCauseDamage` 这类 API；实现前必须先补清晰的团队规则。

引擎源码定位：

- `<EngineRoot>/Engine/Source/Runtime/AIModule/Classes/GenericTeamAgentInterface.h`
- `<EngineRoot>/Engine/Source/Runtime/AIModule/Private/AIInterfaces.cpp`
- `<EngineRoot>/Engine/Source/Runtime/AIModule/Classes/AIController.h`
- `<EngineRoot>/Engine/Source/Runtime/AIModule/Private/AIController.cpp`
- `<EngineRoot>/Engine/Source/Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h`
- `<EngineRoot>/Engine/Source/Runtime/AIModule/Private/Perception/AIPerceptionComponent.cpp`

## 引擎团队接口

`FGenericTeamId` 是引擎 AI 模块的团队 ID：

- 底层存储是 `uint8`。
- `FGenericTeamId::NoTeam` 使用保留 ID，通常不要把它当作普通可分配团队。
- `FGenericTeamId::GetTeamIdentifier(Actor)` 会把 Actor cast 到 `IGenericTeamAgentInterface`；失败就返回 `NoTeam`。
- 默认全局态度规则是：团队 ID 不相等为 Hostile，相等为 Friendly。
- `FGenericTeamId::GetAttitude(A, B)` 会先看 A 是否实现团队接口；A 没实现或 B 为空时返回 Neutral。
- `FGenericTeamId::SetAttitudeSolver` 是全局静态规则，会影响所有使用 GenericTeam 的系统，包括 AI Perception；玩法临时规则更适合覆盖具体类的 `GetTeamAttitudeTowards`。

`IGenericTeamAgentInterface` 的默认实现是保守的：

- `SetGenericTeamId` 默认不做事。
- `GetGenericTeamId` 默认返回 `NoTeam`。
- `GetTeamAttitudeTowards` 默认对未实现团队接口的 Other 返回 Neutral，对实现接口的 Other 走全局 solver。

因此，C++ 类只声明继承接口是不够的。要被 AI Perception、伤害过滤或目标选择正确识别，必须显式覆盖 `GetGenericTeamId`，需要运行时变队时还要覆盖 `SetGenericTeamId`。

`AAIController` 已实现 `IGenericTeamAgentInterface`，内部持有 `TeamID`；设置团队 ID 后可参与感知敌友过滤。`UAIPerceptionComponent` 和 `FAISenseAffiliationFilter` 会用团队态度判断是否感知 Enemies、Neutrals、Friendlies。

## 项目团队代理接口

`IOrionTeamAgentInterface` 继承 `IGenericTeamAgentInterface`，并增加团队变更广播：

- `UINTERFACE(meta=(CannotImplementInterfaceInBlueprint))`：Blueprint 不能直接实现该接口；需要 C++ 基类实现后给蓝图配置字段。
- `FOnOrionTeamIndexChangedDelegate`：广播对象、旧 TeamId、新 TeamId。
- `GetOnTeamIndexChangedDelegate()`：默认返回 `nullptr`；需要广播时派生类必须返回自己的持久委托成员。
- `GetTeamChangedDelegateChecked()`：要求派生类提供委托，否则会触发 check。
- `ConditionalBroadcastTeamChanged(...)`：只有旧队伍和新队伍不同才记录日志并广播。

转换工具：

- `OrionTeams::GenericTeamIdToInteger(FGenericTeamId)`：`NoTeam` 转为 `INDEX_NONE`，其他值转为 `int32`。
- `OrionTeams::IntegerToGenericTeamId(int32)`：`INDEX_NONE` 转为 `NoTeam`，其他值 cast 到 `uint8`。

注意：不要把大于 254 的 `int32` 直接转成 `FGenericTeamId`。如果团队数量可能超过 `uint8`，需要重新设计上层 ID 与引擎 AI TeamId 的映射。

## TeamInfo 与 TeamSubsystem

`AOrionTeamInfoBase` 是复制的团队元数据 Actor：

- 构造中启用复制、AlwaysRelevant，关闭 movement replication。
- `TeamTags` 正常复制，可用于团队 tag 计数状态。
- `TeamId` 初始只复制，默认 `INDEX_NONE`，只允许服务器在首次设置时写入。
- `BeginPlay`、`OnRep_TeamId` 都会尝试注册到 TeamSubsystem。
- `EndPlay` 会在已有 TeamId 时从 TeamSubsystem 注销。

`AOrionTeamPublicInfo`：

- 复制 `TeamDisplayAsset`，同样是初始只复制。
- `SetTeamDisplayAsset` 只允许服务器首次设置。
- `OnRep_TeamDisplayAsset` 会触发注册流程，让客户端也能拿到公开展示数据。

`AOrionTeamPrivateInfo` 当前是私有信息扩展点。适合放只给本队或服务器逻辑使用的数据，但具体复制策略要在派生类中明确设计。

`UOrionTeamSubsystem`：

- `RegisterTeamInfo` 要求 TeamInfo 有有效 TeamId，然后写入 `TeamMap`。
- `FOrionTeamTrackingInfo` 区分 PublicInfo 和 PrivateInfo。
- PublicInfo 变更 DisplayAsset 时会广播 `OnTeamDisplayAssetChanged`。
- `NotifyTeamDisplayAssetModified` 会遍历当前所有 team tracking 并广播当前 DisplayAsset；当前实现是广义刷新，不按传入 ModifiedAsset 精确过滤。
- 当前公开 API 主要是注册/注销/编辑器刷新；如果要查询团队展示数据、订阅特定队伍、判断能否伤害，需要先扩展清楚的 public API。

## TeamCreationComponent

`UOrionTeamCreationComponent` 是抽象 `UGameStateComponent`，并且是 TeamInfo 私有 setter 的 friend。团队创建逻辑应由它或它的派生类负责：

- 在服务器上创建 PublicInfo/PrivateInfo。
- 设置每个 TeamInfo 的 TeamId。
- 设置 PublicInfo 的 TeamDisplayAsset。
- 让 TeamInfo 自己复制和注册。
- 在组件移除或玩法结束时明确清理 spawned team info，避免 TeamSubsystem 保留已销毁对象。

`UOrionTeamCreationComponent_SpecifiedAmount` 和 `UOrionTeamCreationComponent_UnlimitedAmount` 当前只是抽象分类壳。不要假设它们已经自动创建队伍；具体玩法需要派生实现。

推荐接入方式：

1. 在玩法插件 runtime module 中派生 TeamCreationComponent。
2. 通过 GameFeature Add Components 把它挂到 GameState。
3. 在 Experience/ActionSet 中启用该 GameFeature 或对应 Action。
4. 由派生组件读取玩法配置创建队伍，而不是把队伍数量写进 GameMode。

## Team Agent 实现模板

适合 Actor、Controller、Pawn、Spawner 或 gameplay component owner 需要参与队伍态度判断时使用。示例只展示模式，类名和字段名按实际模块命名。

```cpp
UCLASS()
class AMyTeamAwareActor : public AActor, public IOrionTeamAgentInterface
{
	GENERATED_BODY()

public:
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override
	{
		const FGenericTeamId OldTeamID = TeamID;
		if (OldTeamID == NewTeamID)
		{
			return;
		}

		TeamID = NewTeamID;

		TScriptInterface<IOrionTeamAgentInterface> TeamAgent;
		TeamAgent.SetObject(this);
		TeamAgent.SetInterface(this);
		IOrionTeamAgentInterface::ConditionalBroadcastTeamChanged(TeamAgent, OldTeamID, NewTeamID);
	}

	virtual FGenericTeamId GetGenericTeamId() const override
	{
		return TeamID;
	}

	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override
	{
		return IGenericTeamAgentInterface::GetTeamAttitudeTowards(Other);
	}

protected:
	virtual FOnOrionTeamIndexChangedDelegate* GetOnTeamIndexChangedDelegate() override
	{
		return &OnTeamChanged;
	}

private:
	UPROPERTY(EditAnywhere, Category="Teams")
	FGenericTeamId TeamID = FGenericTeamId::NoTeam;

	UPROPERTY(BlueprintAssignable, Category="Teams")
	FOnOrionTeamIndexChangedDelegate OnTeamChanged;
};
```

实现要点：

- `TeamID` 如果需要客户端可见，明确复制并在 `OnRep` 中广播；如果只用于服务器 AI/伤害，说明 authority 边界。
- 如果类是 `AController` 或 `AAIController` 派生，先检查父类是否已有 `SetGenericTeamId` 和 `TeamID`，避免重复存储。
- 对 Pawn/Character，考虑团队身份来自 Controller、PlayerState 还是 PawnData。不要让三个地方各自维护不同 TeamId。
- 如果团队由玩家账户或 Matchmaking 决定，队伍赋值应等待玩家信息初始化或登录流程完成。

## 角色生成与队伍

角色生成点目前有 `FGenericTeamId TeamID` 并被 SpawnerManager 按队伍分组：

- Spawner 进入世界后注册到 CharacterSpawnerManager。
- Manager 根据 Spawner 的 TeamID 维护分组。
- 玩家登录时示例流程会按某个 TeamId 查找空闲 Spawner，再把 Controller 设为 owner 并生成角色。

注意点：

- Spawner 虽然声明了团队接口，但需要以真实源码为准检查是否覆盖 `GetGenericTeamId`。如果没有覆盖，引擎 `FGenericTeamId::GetTeamIdentifier` 对它会得到 `NoTeam`，但 SpawnerManager 直接读字段仍能完成内部分组。
- 玩法要做红蓝队、队列分队、随机队伍、队伍满员、观战队伍时，优先派生 PlayerSpawningManager/CharacterSpawnerManager 或玩家 GameplayComponent，而不是改 GameMode。
- 出生点所属队伍属于关卡/玩法配置，通常由地图实例字段、GameFeature 内容资产或玩法专属 Spawner 类配置。

## 伤害、目标选择和 GA

需要敌友判断的系统优先使用同一套团队态度规则：

- GA 目标过滤：读取 instigator/source actor 的 `GetTeamAttitudeTowards(TargetActor)`。
- GameplayEffectExecution 伤害：在服务器执行时检查团队态度，再决定是否允许伤害或改变伤害倍率。
- AI 目标选择：让 AIController/Pawn 正确实现 TeamId，并让感知组件的 affiliation flags 与玩法规则一致。
- UI 锁定/准星提示：只做展示时可读取态度，但最终伤害与命中仍由服务器确认。

当前框架 TeamSubsystem 没有公开 `CanCauseDamage` API。不要在新代码里调用不存在的函数；如果需要统一友军伤害策略，应先添加明确的接口，例如：

- `CanCauseDamage(SourceActor, TargetActor)`：返回是否允许。
- `GetTeamAttitude(SourceActor, TargetActor)`：统一态度查询。
- `GetTeamDisplayAsset(TeamId)`：UI 查询展示数据。
- `OnTeamDisplayAssetChanged(TeamId)`：按队伍订阅展示变化。

添加这类 API 时优先在宿主 Game 派生层或 feature-specific subsystem 中实现；只有用户明确允许，才修改核心框架层。

## TeamTags 使用

`TeamTags` 是 `FGameplayTagStackContainer`：

- 适合记录团队级状态计数，例如团队 Buff、占点状态、临时规则开关。
- 不适合替代 TeamId；TeamId 是 AI/感知/敌友判断的基础身份。
- 增减 tag stack 时遵守 FastArray 复制规则，以现有 GameplayTagStack 实现为准。
- Tag 命名和注册仍按项目 GameplayTag 规则处理。

## UI 与消息

团队变化通常会影响 UI、播报和统计：

- 强耦合、同对象生命周期内的队伍变更监听可用 `FOnOrionTeamIndexChangedDelegate`。
- 跨系统、多接收者、UI toast、击杀消息、占点事件、比分更新优先考虑 GameplayMessageRouter。
- UI 展示团队名/颜色/图标时优先读取 TeamDisplayAsset，不要把颜色硬编码在 Widget。
- TeamDisplayAsset 编辑器刷新当前是广义广播，UI 或工具监听时要能承受重复刷新。

## 常见错误

- 只在类声明中继承 `IOrionTeamAgentInterface`，但不覆盖 `GetGenericTeamId`，导致 AI 和通用态度判断看到的是 `NoTeam`。
- 把 TeamId 当 `int32` 无限编号，最后 cast 到 `uint8` 发生截断。
- 在 GameMode 写具体分队、出生、友军伤害业务，导致玩法不能由 Experience/GameFeature 独立启停。
- 在客户端直接修改 TeamInfo；TeamId 和 DisplayAsset 的首次设置必须由服务器负责。
- 把团队展示信息写进 UMG 或 PlayerState 字段，而不是通过 TeamDisplayAsset/TeamSubsystem 共享。
- 使用全局态度 solver 做某个玩法的临时规则，影响所有 AI Perception 和其他队伍查询。
- 在 GAS 伤害代码里调用当前不存在的 TeamSubsystem API。

## 验证清单

- 编译目标模块，确认 `AIModule`、`GameplayTags`、`ModularGameplay` 等依赖位置正确。
- 用服务器/客户端各一次验证 TeamInfo 复制：客户端能看到 TeamId、TeamDisplayAsset、TeamTags。
- 用 AI Perception 验证 Enemy/Neutral/Friendly flags 是否符合预期。
- 验证玩家登录、退出、重生时分队稳定，不会把玩家放进错误出生点。
- 验证 GameFeature 激活后能创建队伍，反激活或关卡切换后能清理。
- 验证队伍变更委托只在 TeamId 真的变化时广播。
- 验证 UI 不硬编码团队展示资产，且能处理 TeamDisplayAsset 编辑器刷新。
