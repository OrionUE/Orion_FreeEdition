# Unreal GameplayMessageRouter 手册

## 目录

- 使用边界
- 核心能力图
- 是否比委托更好
- Channel 与 Payload 设计
- C++ 使用模板
- Blueprint 使用模板
- 消息处理器
- 多人网络边界
- GAS / GameplayCue 联动
- UI 和通知流
- 常见错误
- 验证清单

## 使用边界

GameplayMessageRouter 是一个基于 `UGameplayMessageSubsystem` 的本地消息分发系统。发送方只需要知道 `GameplayTag` channel 和 payload 结构体，监听方按 tag 注册，不需要直接引用发送方。

适合：

- Ability、AttributeSet、GamePhase、GameFeature、UI、通知、统计、击杀提示、任务提示等跨系统事件。
- 发送者和接收者生命周期不同，不应该互相硬引用。
- 玩法插件可开关，监听者可能由 GameFeature 激活后才出现。
- 一个事件可能被多个系统观察，例如伤害、淘汰、自动存档、能力失败、UI toast。
- Blueprint 需要按 GameplayTag 监听消息。

不适合：

- 需要返回值或确认结果的调用。
- 发送者必须知道接收者是否处理成功的流程。
- 同一个组件内部或父子对象之间的强耦合生命周期回调。
- 需要严格监听顺序、优先级或阻断链的流程。
- 高频 per-frame 数据流、物理 tick、动画 pose 级别回调。
- 网络复制本身；本系统不自动跨 server/client。

## 核心能力图

主要类型：

- `UGameplayMessageSubsystem`：`UGameInstanceSubsystem`，每个 GameInstance 一个本地 router。
- `FGameplayMessageListenerHandle`：监听句柄，必须保存并在生命周期结束时注销。
- `EGameplayMessageMatch`：`ExactMatch` 精确匹配，`PartialMatch` 监听子 tag。
- `FGameplayMessageListenerParams<T>`：C++ 高级监听参数，可设置 match type 和 callback。
- `UAsyncAction_ListenForGameplayMessage`：Blueprint async action，专用 K2 node 会根据 `PayloadType` 生成 payload 输出。
- `FGameplayVerbMessage`：通用 Instigator/Verb/Target/Tags/Magnitude 消息。
- `FCoreVerbMessage`：框架核心层通用 verb message；业务侧优先复用或在派生层新增自己的 payload。
- `FGameplayNotificationMessage`：通知流消息，适合 transient log、toast、击杀 feed、拾取提示等。
- `UGameplayMessageProcessor`：服务器侧消息处理组件基类，适合监听一组消息后再派生/聚合出新消息。

运行特征：

- `BroadcastMessage` 是同步调用，当前帧立即遍历监听者。
- 监听回调顺序不保证稳定。
- 分发时会复制监听列表，因此回调中注销自身不会破坏当前广播。
- `PartialMatch` 会从实际 channel 向父 tag 逐级查找监听者。
- payload 类型必须匹配；发送类型可以是监听类型的子结构体，否则会记录 struct type mismatch。
- 消息不缓存，晚注册的监听者不会收到历史消息。
- `GameplayMessageSubsystem.LogMessages 1` 可输出广播日志。

## 是否比委托更好

结论：不是绝对更好。它比委托更适合“解耦、多接收者、按 GameplayTag 路由、模块化玩法”的业务消息；委托更适合“对象之间有明确所有权和生命周期关系”的直接事件。

优先用 GameplayMessageRouter：

- 发送者不应该依赖 UI、统计、任务、音频、成就或某个 GameFeature 监听者。
- 事件语义能用 GameplayTag 命名，并且 payload 是一份事实数据。
- 同一事件可能被多个系统监听，监听者数量会随玩法插件变化。
- 需要 Blueprint 按 tag 监听，而不想把所有委托暴露在发送者对象上。
- 需要 `PartialMatch`，例如监听 `Verb.Elimination` 下所有更具体消息。

优先用委托、接口或直接调用：

- 接收者是发送者的拥有者、子组件或明确服务对象。
- 调用方需要返回值、同步结果、取消/阻断能力或错误码。
- 事件必须有严格顺序或优先级。
- 事件只在一个类内部或一对一关系里使用。
- 广播频率极高，payload 分发和 tag 查找会成为不必要开销。

优先用 GameplayEvent / GAS：

- 目标是激活 Ability、触发 Ability 内部逻辑或走预测链路。
- 数据本身就是 `FGameplayEventData`，并且必须进入 ASC。

优先用 RPC/replication：

- 目标是跨网络传输到 server、all clients 或 owning client。
- GameplayMessageRouter 可以作为“到达目标端后的本地通知层”，但不是传输层。

## Channel 与 Payload 设计

Channel 是 `FGameplayTag`，应当表达事件语义，不表达具体接收者。

推荐命名：

```text
Verb.Damage.Taken.Message
Verb.Elimination.Message
Verb.Elimination.Headshot.Message
Ability.UserFacingSimpleActivateFail.Message
Gameplay.AddNotification.Message
System.Archive.AutoSave.Message
UI.Frontend.GameMode.Message
```

设计规则：

- tag 后缀建议带 `Message`，让它和状态 tag、输入 tag、GameplayEvent tag 区分。
- 如果需要父级监听，预留层级。例如 `Verb.Elimination.Message` 和 `Verb.Elimination.Headshot.Message`。
- 广播 tag 和 payload 的 `Verb` 字段保持一致。
- 通用 gameplay 事实优先用 `FCoreVerbMessage` 或 `FGameplayVerbMessage`。
- UI 文本、通知、toast 优先用 `FGameplayNotificationMessage` 或专用通知 payload。
- 业务 payload 必须是 `USTRUCT(BlueprintType)`，字段使用 `UPROPERTY`，需要 Blueprint 读取就用 `BlueprintReadWrite` 或 `BlueprintReadOnly`。
- 同一 channel 不要混用多个无继承关系 payload；否则 C++ 和 Blueprint listener 都容易类型不匹配。

Payload 应该只描述事实，不直接持有复杂流程：

- 好：Instigator、Target、Tags、Magnitude、PayloadText、PayloadObject、ContextTags。
- 坏：要求监听方修改发送方内部状态、传递临时栈对象指针、依赖发送方下一帧仍然存在。

## C++ 使用模板

模块依赖：

```csharp
PrivateDependencyModuleNames.AddRange(new string[]
{
	"GameplayMessageRuntime",
	"GameplayTags"
});
```

发送消息：

```cpp
#include "GameFramework/GameplayMessageSubsystem.h"
#include "Messages/CoreVerbMessage.h"

FCoreVerbMessage Message;
Message.Verb = TAG_Verb_Damage_Taken_Message;
Message.Instigator = InstigatorObject;
Message.Target = TargetObject;
Message.Magnitude = DamageAmount;

UGameplayMessageSubsystem::Get(WorldContextObject).BroadcastMessage(Message.Verb, Message);
```

监听消息：

```cpp
#include "GameFramework/GameplayMessageSubsystem.h"

FGameplayMessageListenerHandle DamageMessageHandle;

void UMyComponent::BeginPlay()
{
	Super::BeginPlay();

	DamageMessageHandle = UGameplayMessageSubsystem::Get(this).RegisterListener<FCoreVerbMessage>(
		TAG_Verb_Damage_Taken_Message,
		this,
		&ThisClass::HandleDamageMessage);
}

void UMyComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	DamageMessageHandle.Unregister();

	Super::EndPlay(EndPlayReason);
}

void UMyComponent::HandleDamageMessage(FGameplayTag ActualChannel, const FCoreVerbMessage& Message)
{
}
```

监听子 tag：

```cpp
FGameplayMessageListenerParams<FCoreVerbMessage> Params;
Params.MatchType = EGameplayMessageMatch::PartialMatch;
Params.SetMessageReceivedCallback(this, &ThisClass::HandleEliminationMessage);

EliminationMessageHandle = UGameplayMessageSubsystem::Get(this).RegisterListener<FCoreVerbMessage>(
	TAG_Verb_Elimination,
	Params);
```

生命周期规则：

- `UActorComponent` 监听一般在 `BeginPlay` 注册，在 `EndPlay` 注销。
- `UGameInstanceSubsystem` 或 `UWorldSubsystem` 监听在初始化/反初始化对称注册注销。
- 如果使用 `UGameplayMessageProcessor`，把 handles 交给 `AddListenerHandle`，基类会在 `EndPlay` 注销。
- 不要把局部 `FGameplayMessageListenerHandle` 丢掉；句柄丢失后无法主动注销。
- 对 UObject 成员函数注册时模板会弱引用对象，但仍建议显式注销，减少无效监听残留。

## Blueprint 使用模板

监听：

1. 添加 `Listen For Gameplay Messages` 节点。
2. `Channel` 选择 GameplayTag。
3. `PayloadType` 选择发送方使用的 `USTRUCT`。
4. `MatchType` 根据需要选择 `ExactMatch` 或 `PartialMatch`。
5. 在 `OnMessageReceived` 中使用输出的 `ActualChannel` 和 payload。

发送：

1. 获取 Gameplay Message Subsystem。
2. 调用 `Broadcast Message`。
3. `Channel` 填 message tag。
4. `Message` 传入同类型 payload struct。

Blueprint 注意：

- `PayloadType` 未设置时 payload 输出保持 wildcard，连接错误会导致节点编译失败。
- Blueprint async action 会在对象销毁或 delegate 失效后 ready to destroy；长生命周期监听仍应放在稳定对象上，例如 HUD、Widget Controller、Subsystem 或 ActorComponent。
- Widget 监听消息时，注意 Widget 构造/销毁和地图切换；不要让 UI 在移除后继续持有监听。

## 消息处理器

`UGameplayMessageProcessor` 适合做服务器侧聚合器：

- 在 `StartListening` 注册多个消息。
- 在回调中统计、过滤、组合或转换消息。
- 需要时再发出新的 message。
- 在 `StopListening` 做额外清理；基类 `EndPlay` 会注销通过 `AddListenerHandle` 保存的 handles。

典型用途：

- 连杀、连击、助攻、任务进度、成就、战斗日志。
- 监听 damage/elimination，然后发 UI notification。
- 监听多个 GameFeature 消息，生成玩法局内公告。

约束：

- 处理器默认不是每玩家一个；需要玩家过滤时自己检查 Instigator/Target/PlayerState。
- 需要客户端表现时，服务端处理后通过网络桥接到目标客户端，再在客户端本地广播 UI 消息。

## 多人网络边界

GameplayMessageRouter 只在本地 GameInstance 范围内分发：

- Server 上广播，只会通知 server 本地监听者。
- Client 上广播，只会通知该 client 本地监听者。
- Listen Server 也要明确区分 server world 和 client world。
- Dedicated Server 没有本地 UI，不能依赖 server 本地消息直接显示客户端 UI。

跨网络推荐模式：

- 全体客户端通知：server 调用 GameState 的 unreliable 或 reliable multicast，再由每个 client 在实现里 `BroadcastMessage`。
- 单个玩家通知：server 调用 owning PlayerState/PlayerController 的 client RPC，再由目标 client 本地 `BroadcastMessage`。
- 需要可重放/可追踪的短消息流：使用 replicated fast array，把新增项在 client `PostReplicatedAdd` 中 rebroadcast。
- 需要长期状态：不要只发 message，使用 replicated property/state，message 只作为 UI/表现通知。

选择可靠性：

- 击杀 feed、临时 toast、战斗浮字可用 unreliable。
- 任务完成、奖励、关键错误、不可丢失提示用 reliable 或 replicated state。
- 频繁 combat spam 不要全部 reliable。

## GAS / GameplayCue 联动

常见模式：

- AttributeSet 计算伤害后发 `FGameplayVerbMessage`，让 UI、统计、击杀处理器观察。
- Ability 激活失败时发专用 failure payload，UI 监听后显示提示或播放失败 montage。
- 死亡流程先向 ASC 发送 `FGameplayEventData` 激活 death ability，再发 message 给其他观察系统。
- GameplayCue 参数需要转成 message 时，使用 helper 在 `FGameplayCueParameters` 和 `FGameplayVerbMessage` 间转换。

区分：

- `HandleGameplayEvent` 是 Ability 系统内部事件入口。
- `GameplayCue` 是表现和 cue 生命周期入口。
- `GameplayMessageRouter` 是跨系统通知入口。

不要用 message 替代 Ability prediction、TargetData RPC 或 Attribute replication。

## UI 和通知流

UI 监听 message 的推荐路径：

1. gameplay 代码广播事实消息，例如 damage、elimination、failure、save complete。
2. UI/HUD/notification subsystem 监听对应 channel。
3. UI 层把 payload 转成本地化文本、图标、颜色、toast 或 feed item。
4. 如果 UI 属于 GameFeature，监听注册随 feature/UI 生命周期创建和销毁。

不要让 gameplay 代码直接创建 Widget 或硬引用具体 UI 类。GameplayMessageRouter 的价值就是把 gameplay 事实和 UI 表现拆开。

## 常见错误

### 误以为 BroadcastMessage 会复制到客户端

现象：Server 调用了 `BroadcastMessage`，客户端 UI 没反应。

原因：message router 是本地分发器，不是 RPC 或 replicated property。

修复：用 GameState multicast、PlayerState/PlayerController client RPC 或 replicated fast array 把消息送到客户端，再在客户端本地广播。

### 同一 Channel 混用不同 Payload

现象：日志出现 struct type mismatch，Blueprint payload 取不到数据。

原因：发送者和监听者没有约定同一 payload 类型。

修复：为不同 payload 拆不同 channel，或定义共同父结构体并按继承关系使用。

### 忘记保存 Listener Handle

现象：对象销毁后仍有无效监听，或无法注销监听。

原因：注册返回的 `FGameplayMessageListenerHandle` 没有作为成员保存。

修复：把 handle 存为成员，在 `EndPlay`、`Deinitialize` 或 `SetReadyToDestroy` 注销。

### 用 PartialMatch 监听太宽

现象：一个 UI 或处理器收到大量不相关消息。

原因：监听了过高层级 tag，例如 `Verb` 或 `Gameplay`。

修复：监听更具体的父 tag，并在回调中按 `ActualChannel` 过滤。

### 用消息替代有返回值的调用

现象：发送方需要知道结果，只能加临时状态或等待另一个消息回传。

原因：把 request/response 流程错建成广播消息。

修复：改用接口、服务对象、委托回调、async action 或明确的 RPC/request API。

## 验证清单

- 目标模块已依赖 `GameplayMessageRuntime` 和 `GameplayTags`。
- 新 channel 已定义为稳定 GameplayTag，并和已有命名空间一致。
- payload 是 `USTRUCT`，字段有必要的 `UPROPERTY`，Blueprint 需要时已暴露。
- 广播 channel 与 payload 的 `Verb` 字段一致。
- C++ listener 保存并注销 `FGameplayMessageListenerHandle`。
- Blueprint listener 设置了正确 `PayloadType`。
- `ExactMatch` / `PartialMatch` 选择正确。
- 多人场景已明确 server/client 所在端，并使用 RPC/replication 桥接。
- 使用 `GameplayMessageSubsystem.LogMessages 1` 能看到预期 channel 和 payload。
