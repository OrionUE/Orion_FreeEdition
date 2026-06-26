# 多人网络复制框架参考

本参考用于在框架内编写、审查和排查 UE 多人复制代码。所有路径都是相对工程或引擎根目录的定位线索，不应把本机绝对路径写入代码、Skill 或文档。

## 1. 当前架构结论

- 项目使用自定义 SteamSockets NetDriver 作为 `GameNetDriver` / `BeaconNetDriver`，fallback 是 `OnlineSubsystemUtils.IpNetDriver`。先从 `Config/DefaultEngine.ini` 的 `[/Script/Engine.Engine] NetDriverDefinitions` 和平台 `Engine.ini` 确认真实配置。
- 未发现已配置 `ReplicationDriverClassName` 的 ReplicationGraph 复制驱动。普通属性/RPC/actor relevancy 先按 UE 默认复制链路处理；只有明确启用 RepGraph 或需要大规模 actor placement 时才读取 RepGraph Skill。
- 多个运行时模块通过 `SetupIrisSupport(Target)` 获得 Iris 编译支持。它只决定编译依赖和宏，不等于运行时已启用 Iris 复制；运行时行为仍要查 NetDriver、目标配置和 UE 版本源码。
- 核心框架层提供 GameState、PlayerState、PlayerController、PawnExtension、ExperienceManager、AbilitySystem、GameplayTagStack 等复制基础设施。业务层和 GameFeature 插件应复用这些链路，不默认改核心层。
- GameplayMessageRouter 是本地 GameInstance 范围的 tag 消息总线。跨网络消息必须通过 RPC、replicated actor、FastArray 或现有 GameState/PlayerState 桥接后，在客户端本地重新广播。

## 2. 必读源码地图

项目侧优先查：

- `Config/DefaultEngine.ini`：Steam/Online block、`NetDriverDefinitions`、PacketHandler、NetDriver 超时/带宽。
- `Source/*/*.Build.cs` 和 `Source/*.Target.cs`：`NetCore`、`OnlineSubsystem`、`OnlineSubsystemUtils`、GAS、Iris 支持、Client/Server/Steam target 变体。
- `Plugins/OrionSteam/Source/OrionSteamSockets`：自定义 SteamSockets NetDriver / NetConnection。
- `Source/GameCore/GameModes`：GameState、ExperienceManagerComponent、Experience 复制与加载。
- `Source/GameCore/Player`：PlayerState、PlayerController、PawnData、ViewRotation、ASC 初始化。
- `Source/GameCore/Character`：PawnExtension、PawnControl、PawnData 复制与 pawn 初始化。
- `Source/GameCore/System/GameplayTagStack.*`：FastArray tag stack 标准写法。
- `Source/OrionGame/GameModes`：GameState 上 ASC、ExperienceManager 和 server-to-client message bridge。
- `Source/OrionGame/Player`：PlayerInfo、PlayerAccount、玩家 ID、玩家 gameplay component。
- `Source/OrionGame/AbilitySystem`：AttributeSet、Health/Combat attributes、rep notify。
- `Source/OrionGame/Character` 和 `Source/AnimFramework`：角色移动/动作状态、owner skip、simulated-only、客户端本地先行 + Server RPC。
- `Source/OrionGame/Teams`：TeamInfo、TeamSubsystem、公开/私有队伍数据。
- `Plugins/GameplayMessageRouter`：本地消息系统和消息复制桥接样例。
- `Plugins/Audio/OrionVoiceChat`：高频语音包 Unreliable RPC 与配置状态复制。

引擎侧优先查：

- `Engine/Source/Runtime/Engine/Public/Net/UnrealNetwork.h`：`DOREPLIFETIME`、`FDoRepLifetimeParams`、条件、RepNotify、push model 参数。
- `Engine/Source/Runtime/Engine/Classes/GameFramework/Actor.h` / `Private/Actor.cpp`：`bReplicates`、`ForceNetUpdate`、dormancy、`PreReplication`、`SetReplicates`。
- `Engine/Source/Runtime/Engine/Classes/Components/ActorComponent.h` / `Private/Components/ActorComponent.cpp`：replicated component、`ReadyForReplication`、`SetIsReplicatedByDefault`。
- `Engine/Source/Runtime/Engine/Private/NetDriver.cpp`：RPC ownership、NetMulticast relevance、Iris/ReplicationDriver 接入。
- `Engine/Source/Runtime/Engine/Private/RepLayout.cpp`：`GetLifetimeReplicatedProps` 注册、未注册 replicated property 的检查。
- `Engine/Source/Runtime/Net/Core/Classes/Net/Serialization/FastArraySerializer.h`：FastArray delta replication。
- `Engine/Source/Runtime/Net/Core/Public/Net/Core/PushModel/PushModel.h`：push model dirty 标记。
- `Engine/Source/Runtime/GameplayAbilities`：ASC、AttributeSet、TargetData、prediction、GameplayCue 网络行为。

## 3. 复制模型选择

优先按下面顺序判断：

1. 服务端权威持久状态：`UPROPERTY(Replicated)`、`ReplicatedUsing`、FastArray 或 ASC/AttributeSet。
2. 客户端输入意图：`UFUNCTION(Server, Reliable/Unreliable)`，要求调用对象有 owning connection。
3. 单个玩家通知：`UFUNCTION(Client, Reliable/Unreliable)`，通常放在 PlayerController、PlayerState 或 owned actor/component。
4. 临时全员表现：`UFUNCTION(NetMulticast, Unreliable)`；可靠 multicast 要谨慎，且 actor relevance 会影响发送范围。
5. 动态列表/计数：FastArray，不要复制整数组并手动比对。
6. 高频瞬时数据：优先压缩后 Unreliable RPC 或已有专用系统，不要用 Reliable RPC 或普通 replicated property 堆积。
7. Ability/伤害/属性/预测：优先 GAS，不要手写并行状态机。
8. 跨系统本地通知：GameplayMessageRouter；跨网络时先桥接，再在目标端广播。

## 4. 项目内可复用模式

### Experience 复制

`UCoreExperienceManagerComponent` 是 replicated GameStateComponent。服务端设置 `CurrentExperience` 后启动加载；客户端通过 `OnRep_CurrentExperience` 启动相同加载流程。新玩法逻辑不要只依赖 `BeginPlay`，应等待 Experience loaded / feature 激活完成。

### PlayerState 与 PawnData

PlayerState 负责长生命周期玩家数据、ASC 和 PawnData。PawnData 由服务端设置并复制，客户端通过 OnRep/初始化状态继续驱动 PawnExtension。ASC 挂在 PlayerState 时需要较高 NetUpdateFrequency，并在 PlayerController `OnRep_PlayerState`、Pawn 初始化和 possessed 时刷新 actor info。

### PawnExtension 组件

PawnExtension 是 replicated component，复制 PawnData 并负责 ASC avatar 初始化。组件默认复制应在构造函数中设置；PawnData 等关键字段由服务端设置，客户端只响应复制和 init state。

### 角色动作状态

角色移动/动作状态常见模式是：本地 autonomous proxy 先更新表现，再调用 Server RPC；服务端更新权威状态；属性复制给非 owner 或 simulated proxy，常用 `COND_SkipOwner`、`COND_SimulatedOnly` 和 `REPNOTIFY_OnChanged`。这样可以减少 owner 回环抖动。

### AttributeSet

Attribute 使用 `FGameplayAttributeData` + `ReplicatedUsing`，`GetLifetimeReplicatedProps` 使用 `DOREPLIFETIME_CONDITION_NOTIFY(..., REPNOTIFY_Always)`，OnRep 里调用 `GAMEPLAYATTRIBUTE_REPNOTIFY`。客户端侧 OnRep 的 instigator 可能不可用，UI/消息必须允许空 instigator。

### FastArray

`FGameplayTagStackContainer` 是标准样例：item 继承 `FFastArraySerializerItem`，容器继承 `FFastArraySerializer`，实现 `NetDeltaSerialize`，traits 声明 `WithNetDeltaSerializer=true`。添加/修改 item 调用 `MarkItemDirty`，删除调用 `MarkArrayDirty`。

### 消息桥接

GameState 可用 multicast 把 `FCoreVerbMessage` / `FGameplayVerbMessage` 发送到客户端，再在客户端调用 `UGameplayMessageSubsystem::BroadcastMessage`。PlayerState 或 owned component 可用 Client RPC 做 owner-only 通知。消息本身不应被当作可自动跨端的复制对象。

### 语音聊天

语音配置、频道、玩家名、音量和 mic 状态可以用 replicated property 或 Reliable Server RPC；高频语音包使用 Unreliable Server RPC，再由服务端按范围/频道/权限决定 multicast 或 targeted client RPC。不要把语音包放进可靠队列。

## 5. 实现模板

### Replicated actor

```cpp
AMyReplicatedActor::AMyReplicatedActor()
{
	bReplicates = true;
	SetReplicateMovement(true);
}

void AMyReplicatedActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, ReplicatedState);
	DOREPLIFETIME_CONDITION(ThisClass, OwnerOnlyState, COND_OwnerOnly);
}

void AMyReplicatedActor::SetReplicatedState(const FMyState& NewState)
{
	if (!HasAuthority())
	{
		return;
	}

	ReplicatedState = NewState;
	OnRep_ReplicatedState();
	ForceNetUpdate();
}
```

### Replicated component

```cpp
UMyReplicatedComponent::UMyReplicatedComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
}

void UMyReplicatedComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, ReplicatedValue);
}
```

### Push model

```cpp
void AMyActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	FDoRepLifetimeParams Params;
	Params.bIsPushBased = true;
	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, PushState, Params);
}

void AMyActor::SetPushState(const FMyState& NewState)
{
	if (!HasAuthority())
	{
		return;
	}

	PushState = NewState;
	MARK_PROPERTY_DIRTY_FROM_NAME(ThisClass, PushState, this);
}
```

### FastArray container

```cpp
USTRUCT(BlueprintType)
struct FMyRepItem : public FFastArraySerializerItem
{
	GENERATED_BODY()

	UPROPERTY()
	FGameplayTag Tag;

	UPROPERTY()
	int32 Count = 0;
};

USTRUCT(BlueprintType)
struct FMyRepArray : public FFastArraySerializer
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FMyRepItem> Items;

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FMyRepItem, FMyRepArray>(Items, DeltaParms, *this);
	}
};

template<>
struct TStructOpsTypeTraits<FMyRepArray> : public TStructOpsTypeTraitsBase2<FMyRepArray>
{
	enum { WithNetDeltaSerializer = true };
};
```

## 6. RPC 决策表

| 目标 | 推荐方式 | 注意点 |
| --- | --- | --- |
| 客户端请求服务端执行权威动作 | `Server` RPC | 调用对象必须由该客户端拥有；服务端验证参数 |
| 服务端通知单个玩家 | `Client` RPC | 放在 PlayerController/PlayerState/owned actor 更稳定 |
| 服务端通知所有相关客户端播放临时表现 | `NetMulticast, Unreliable` | actor 不相关的连接可能收不到 |
| 服务端同步持久状态 | replicated property / FastArray | 不用 multicast 当状态同步 |
| 高频 transient 数据 | `Unreliable` RPC 或专用通道 | 避免 Reliable 队列阻塞 |
| Ability 输入、目标、预测 | GAS prediction / target data | 自定义 TargetData 必须实现 `NetSerialize` |
| UI/系统本地通知 | GameplayMessageRouter | 跨端先做网络桥接 |

## 7. ReplicationGraph 与普通复制边界

普通复制关注“某个 actor/component 的哪些字段和 RPC 如何跨端”。ReplicationGraph 关注“哪些 actor 对哪些连接相关、什么时候被考虑复制、如何分桶和裁剪”。只有以下情况优先进入 RepGraph Skill：

- 配置了 `ReplicationDriverClassName` 或要新增项目 `UReplicationGraph` 子类。
- 大量 actor 复制导致 `ServerReplicateActors` 压力，需要 spatialization / frequency bucket。
- actor 需要 always relevant、owner-only、team-only、spectator-only、dormancy node 或 tear-off placement。
- GameFeature 动态引入的 actor class 需要注册/注销 graph routing。

如果只是新增一个 replicated property、Server RPC、AttributeSet OnRep 或 owner-only Client RPC，不需要先改 RepGraph。

## 8. 调试与验证

常用验证顺序：

1. 源码搜索：

```powershell
rg -n "GetLifetimeReplicatedProps|DOREPLIFETIME|ReplicatedUsing|UFUNCTION\\(.*Server|UFUNCTION\\(.*Client|NetMulticast|FastArray|NetSerialize|MARK_PROPERTY_DIRTY" Source Plugins Config
rg -n "NetDriverDefinitions|ReplicationDriverClassName|SteamSockets|Iris|bUseIris" Config Source Plugins
```

2. 多人 PIE：listen server + 2 clients，验证 owner、非 owner、server 窗口行为。
3. Dedicated Server：用服务器 target + 客户端 target 验证 PlayerState、Pawn、Experience、GameFeature 激活和 Session 加入。
4. 网络扰动：使用 UE 网络模拟/控制台命令给延迟和丢包，观察 prediction、OnRep、RPC 顺序和可靠队列。
5. 日志：按需打开 `LogNet`、`LogNetTraffic`、`LogNetDormancy`、`LogNetPackageMap`、`LogNetFastTArray`、`LogIris` 和相关插件日志。
6. 运行期指标：`stat net`、Network Profiler、replication graph debug command（仅启用 RepGraph 时）。

## 9. 常见错误

- 只写 `UPROPERTY(Replicated)`，没有在 `GetLifetimeReplicatedProps` 注册；UE 会把未注册字段视为 `COND_Never` 或触发检查。
- push model 属性修改后没有 `MARK_PROPERTY_DIRTY`；嵌套 struct/container 变化要标记顶层 replicated property。
- 客户端直接修改 replicated state；下一次服务端复制会覆盖，且其他客户端不会看到。
- Server RPC 放在非 owner actor 上调用，NetDriver 会因为没有 owning connection 拒绝。
- 用 multicast 同步持久状态；新加入客户端、非相关客户端或 late join 会丢状态。
- 认为 `NetMulticast` 一定发给所有客户端；actor relevance 和 channel 状态会影响接收。
- 在组件初始化后才调用 `SetIsReplicated`；构造期应使用 `SetIsReplicatedByDefault`。
- OnRep 只会在接收复制的一端自动触发；服务端本地改值需要手动调用共享 side effect 或抽函数复用。
- FastArray 修改 item 后忘记 `MarkItemDirty`，删除后忘记 `MarkArrayDirty`。
- 自定义 `NetSerialize` 没有配置 `TStructOpsTypeTraits` 的 `WithNetSerializer=true`。
- 把 `SetupIrisSupport(Target)` 当作已启用运行时 Iris；它只是编译支持。
- 把 GameplayMessageRouter 当网络层使用，导致只在本机收到消息。
- 高频数据用 Reliable RPC，导致队列阻塞和延迟堆积。

## 10. 发布前检查

- Steam/Online 配置中的 AppID、产品名、端口、packet handler、NetDriver、Dedicated Server target 已按发布环境替换；不要把真实密钥写入文档。
- Dedicated Server 和 Client 使用同一 gameplay 协议、GameplayTag、AbilitySet、GameFeature 和资产版本。
- GameFeature 反激活会移除授予能力、组件、监听器和网络对象。
- 新 replicated actor 支持 late join、重连、spectator、replay 或明确说明不支持。
- 复制逻辑通过 listen server、dedicated server、packaged client 至少各跑一遍关键路径。
