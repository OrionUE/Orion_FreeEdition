# GameplayAbilities 源码指南

GameplayAbilities，也常称 GAS，是 Unreal Engine 的能力、属性、GameplayEffect、预测、TargetData 和 GameplayCue 系统。不同 UE 版本会有差异，最终以当前机器源码为准。

## 源码入口

优先从这些相对位置和符号开始查：

- `<EngineRoot>/Engine/Plugins/Runtime/GameplayAbilities`
- `GameplayAbilities.uplugin`
- `GameplayAbilities.Build.cs`
- `GameplayAbilitiesEditor.Build.cs`
- `UAbilitySystemComponent`
- `UGameplayAbility`
- `FGameplayAbilitySpec`
- `FGameplayAbilityActorInfo`
- `UAttributeSet`
- `FGameplayAttributeData`
- `UGameplayEffect`
- `FGameplayEffectSpec`
- `FActiveGameplayEffect`
- `UGameplayEffectComponent`
- `FGameplayAbilityTargetDataHandle`
- `FPredictionKey`
- `FScopedPredictionWindow`
- `UAbilityTask`
- `GameplayCueManager`

如果项目或插件封装了 GAS，先查项目封装层，再回到引擎模块确认原生行为。

## 模块分层

常见模块：

- `GameplayAbilities`：运行时模块，包含 ASC、abilities、effects、attributes、tasks、cues、prediction、target data、serializers、tests。
- `GameplayAbilitiesEditor`：编辑器模块，包含 details customization、graph pins/nodes、GameplayCue editor、Sequencer track、audit 和资产创建工具。

调用方模块通常需要依赖 `GameplayAbilities`、`GameplayTags` 和 `GameplayTasks`。Editor 相关类型不要放进 runtime 模块。

## 核心心智模型

- `UAbilitySystemComponent` 拥有 ability specs、active gameplay effects、loose/minimal tags、gameplay cues、replicated target data、prediction key map 和 actor/avatar info。
- `UGameplayAbility` 定义能力生命周期：检查能否激活、激活、提交 cost/cooldown、等待 task/target data/event，然后结束或取消。
- `FGameplayAbilitySpec` 是可复制的授权条目，把 ability class/instance、level、input、source object、activation state 和 handle 绑定起来。
- `UAttributeSet` 拥有属性数据和 pre/post change/execute hook。
- `UGameplayEffect` 生成 `FGameplayEffectSpec`，spec 负责 modifiers、executions、duration、period、stacking、tags、cues、granted abilities 和 GE components。
- `UGameplayEffectComponent` 是较新的模块化 GE 行为路径，例如 tags、ability grants、immunity、additional effects、application requirements 和 removal。
- `FPredictionKey` 和 `FScopedPredictionWindow` 连接客户端预测动作与服务器确认/拒绝。
- `FGameplayAbilityTargetDataHandle` 携带多态 target data，并可通过网络复制。
- GameplayCues 是视觉、音频或展示层事件，不应承载权威 gameplay 决策。

## 框架中的 GAS 封装

本框架在引擎 GAS 上增加了一层可复用封装。写业务代码时先使用宿主 Game 模块中的派生类；只有明确得到授权时才修改核心框架层。

核心类型：

- `UCoreAbilitySystemComponent`：ASC 基类，负责能力输入缓存、激活策略、激活组、TagRelationshipMapping、OnSpawn 激活和全局 Ability/Effect 注册。
- `UCoreGameplayAbility`：GA 基类，默认 `InstancedPerActor`、`LocalPredicted`、`ClientOrServer`，支持 ActivationPolicy、ActivationGroup、附加 Cost、失败消息和 Pawn Avatar 初始化通知。
- `UCoreAbilitySet`：PrimaryDataAsset，用于批量授予 GA、GE、AttributeSet，并保存可回收句柄。
- `UCorePawnData`：定义 PawnClass、AbilitySets、TagRelationshipMapping 和 InputConfig。
- `UCorePawnExtensionComponent`：把 PlayerState 上的 ASC 初始化为当前 Pawn 的 avatar，并设置 TagRelationshipMapping。
- `UCorePawnControlComponent`：从 PawnData 的 InputConfig 绑定输入，并把 InputTag 转发给 ASC。
- `UGamePhaseAbility`：阶段流程也是 GA，运行在 GameState 的 ASC 上，由阶段子系统启动。
- `UCoreGlobalAbilitySubsystem`：把全局 Ability 或 GE 应用到所有已注册 ASC。

运行链路：

1. Experience 加载后，GameMode 选择 PawnData。
2. PlayerState 设置 PawnData，并把 PawnData 中的 AbilitySets 授予 PlayerState 上的 ASC。
3. PawnExtension 初始化 ASC owner/avatar，设置 TagRelationshipMapping，并触发 OnPawnAvatarSet/OnSpawn 能力。
4. PawnControl 初始化输入映射，InputConfig 的 AbilityInputActions 按 InputTag 绑定到 ASC。
5. PlayerController 在输入后处理阶段调用 ASC 的 `ProcessAbilityInput`。

## 什么时候优先抽象成 GA

优先用 GA 的情况：

- 小玩法可以被描述为“授予后等待触发、激活、提交消耗或冷却、等待输入/事件/TargetData、结束或取消”。
- 行为需要输入绑定、预测、网络权威、TargetData、GameplayEffect、Attribute、GameplayCue 或 AbilityTask。
- 行为属于某个 Pawn/PlayerState/GameState 的可授予能力，并能随 AbilitySet、PawnData、Experience 或 GameFeature 进入/退出。
- 玩法阶段、初始化阶段、自动保存、语音聊天初始化、好友/邀请监听等“可作为能力授予或阶段激活”的逻辑。

不要优先用 GA 的情况：

- 纯数据仓库、长期全局管理器、资产扫描、配置加载、Editor 工具或 UI 排版。
- 需要同步返回值的一对一强耦合调用。
- 高频逐帧底层移动或相机数学，除非 GA 只是打开/关闭某个状态。
- 无法清晰结束、取消或回收的常驻系统；这类逻辑应落到 Subsystem、Component 或 GameFeature Action。

## CoreGameplayAbility 规则

ActivationPolicy：

- `OnInputTriggered`：InputAction 的 Triggered 事件进入 ASC 后，未激活时尝试激活。
- `WhileInputActive`：输入保持时持续尝试激活，适合按住类能力。
- `OnInputStarted`：InputAction 的 Started 事件触发时激活；当前封装主要用于首次激活，不等同于 active ability 内的 WaitInputPress 事件。
- `OnSpawn`：ASC 获得新的 Pawn avatar 或 ability 被授予时尝试自动激活。

ActivationGroup：

- `Independent`：不参与互斥。
- `Exclusive_Replaceable`：可被其他独占能力取消替换。
- `Exclusive_Blocking`：阻止其他独占能力激活。

实现规则：

- 蓝图或 C++ GA 默认继承宿主 Game 模块的 GA 基类；没有宿主封装时才直接继承 Core 基类。
- 成功激活路径必须明确 `CommitAbility`、`EndAbility` 或 `CancelAbility`。
- 有附加消耗时使用 `UCoreAbilityCost`；需要命中后才扣费时使用其 `bOnlyApplyCostOnHit` 语义。
- 失败提示优先使用 FailureTag 到用户可见文本或蒙太奇的映射；跨 UI 通知走 GameplayMessageRouter。
- 不要把长期状态塞进非实例化 Ability；当前 Core 基类默认是 per actor 实例化，可以保存当前激活相关状态，但仍要在结束/取消时清理。

## AbilitySet 到 Experience / GameFeature

AbilitySet 是推荐的能力组合单位。

如果任务要求自动创建玩法 Experience、设置 DefaultPawnData、把 AbilitySet 加入 PawnData、创建 InputAction/InputConfig，或保证 GA/InputTag/InputAction 三者关系一致，先读取 `../../unreal-gamemode-experience-framework/SKILL.md`。

常用链路：

1. 创建或选择 GA、GE、AttributeSet。
2. 把它们加入 `UCoreAbilitySet` 的 GrantedGameplayAbilities、GrantedGameplayEffects、GrantedAttributes。
3. 输入触发的 GA 必须在 AbilitySet 条目上填写 InputTag。
4. 基础角色能力放到 PawnData 的 AbilitySets 中。
5. 玩法插件或可开关玩法用 GameFeature 的 `Add Abilities` action 授予 AbilitySet。
6. Experience 通过 DefaultPawnData、Actions、ActionSets 和 GameFeaturesToEnable 组合最终玩法。

注意：

- `UCoreAbilitySet::GiveToAbilitySystem` 只在 ASC owner 有 authority 时授予或回收。
- AbilitySet 会把 InputTag 写入 AbilitySpec 的动态 SourceTags，ASC 依靠这个 Tag 匹配输入。
- GameFeature 的 `Add Abilities` 支持直接授予 Ability、AttributeSet 和 AbilitySet；需要输入 Tag、GE、AttributeSet 打包或统一回收时优先用 AbilitySet。
- Feature 失活时必须能通过保存的 handle 回收能力、效果和属性集。
- Base GA 资产默认放 `Content/GamePlay/AbilitySystem/Abilities`；特定玩法的 GA/GE/AbilitySet 优先放对应 GameFeature 插件的 Content 子目录，并遵守资产命名 Skill。
- GameFeature 或 Demo 玩法的输入 GA 即使逻辑先写在 C++ 基类，也优先创建 GA Blueprint 子类，再把 Blueprint generated class 写入 AbilitySet，便于后续调默认值、图标、音效、消耗、冷却或展示引用。
- 用 MCP 批量替换 AbilitySet 中的输入 GA 时，先清空旧 `GrantedGameplayAbilities`，再逐条写入新的 GA Blueprint class 和 InputTag，避免多次运行工具后出现重复 ability spec。

## Ability 输入接入检查表

输入触发 GA 时必须同时检查三条链：

- InputAction / InputMappingContext：EnhancedInput 资产存在，IMC 被加载并添加到 LocalPlayer subsystem。
- InputConfig：`AbilityInputActions` 中把 InputAction 映射到同一个 InputTag。
- AbilitySet：目标 GA 条目的 InputTag 与 InputConfig 完全一致。

运行时链路：

1. `UInputSystemComponent::BindAbilityActions` 对每个 AbilityInputAction 绑定 Triggered、Started、Completed。
2. `UCorePawnControlComponent` 把这些事件转发为 `AbilityInputTagPressed`、`AbilityInputTagStarted`、`AbilityInputTagReleased`。
3. `UCoreAbilitySystemComponent` 根据 AbilitySpec 动态 SourceTags 找到匹配能力。
4. `ProcessAbilityInput` 根据 ActivationPolicy 激活能力，并把 Pressed/Released 事件转给 active ability。
5. `WaitInputPress` / `WaitInputRelease` 依赖 ASC 的 Generic Replicated Event；不要绕过 Core ASC 的输入处理。

排查顺序：

- 输入完全不触发：查 IMC 是否添加、InputConfig 是否是 PawnData 当前配置、AbilitySet 是否已授予。
- 只有按下触发没有释放：查 InputAction trigger 和 Completed 事件。
- OnInputStarted 不触发 active ability 内等待：确认该能力是否本来应该用 `OnInputTriggered` + WaitInputPress/Release。
- 玩法插件里新增输入：同时检查 GameFeature 输入 Action、InputConfig/IMC、AbilitySet 和 Experience/ActionSet。

## GamePhase 是 GA

阶段流程不要写成散落的全局 bool 或裸委托。框架把阶段作为 `UGamePhaseAbility` 启动：

- `StartPhase` 在 GameState ASC 上 `GiveAbilityAndActivateOnce`。
- `GamePhaseTag` 必须设置，编辑器数据验证会检查。
- 同级或不匹配父链的阶段会取消旧阶段；子阶段可在父阶段内并行。
- `WhenPhaseStartsOrIsActive` 和 `WhenPhaseEnds` 用 GameplayTag 精确或部分匹配监听阶段。
- 阶段结束必须走 `EndAbility` 或取消路径，让子系统回调和 ActivePhaseMap 清理。

适合 GamePhase 的逻辑：

- 游戏初始化阶段。
- 进入前端、匹配、加载、存档初始化、自动保存、回合/波次/战斗阶段。
- 需要被 Experience 或 GameFeature 启动，并用 Tag 让其他系统监听的流程。

## GA 与 GameplayMessageRouter

GA 内部一对一状态可以用 AbilityTask、ASC delegate 或直接调用；跨系统、多接收者、UI 提示和玩法插件解耦优先用 GameplayMessageRouter。

推荐模式：

- Ability 激活失败：由失败 Tag 生成用户可见消息，广播到 UI 或表现层。
- AttributeSet 结算伤害/治疗：在权威执行后广播标准 payload，不让 UI 直接依赖 AttributeSet。
- GameplayCue 参数需要驱动 UI 或日志：先确认 Cue 只做表现，再把需要跨系统的结果作为消息广播。
- GameFeature 之间通信：用 GameplayTag channel 和结构化 payload，避免互相 include 具体类。

## AbilitySystemComponent

`UAbilitySystemComponent` 是 GAS 的主入口。重点查：

- `InitAbilityActorInfo`。
- `GiveAbility`、`GiveAbilityAndActivateOnce`、`ClearAbility`、`ClearAllAbilities`。
- `TryActivateAbility`、`TryActivateAbilityByClass`、gameplay event activation。
- `ApplyGameplayEffectSpecToSelf`、`ApplyGameplayEffectSpecToTarget`。
- active gameplay effect query/remove。
- loose tags、minimal replication tags、tag event。
- GameplayCue execute/add/remove。
- TargetData RPC、delegate、consume。
- scoped prediction key 和 client activation success/failure。

工作规则：

- pawn/avatar 变化后要重新初始化 actor info。
- 授权 ability 时保存 `FGameplayAbilitySpecHandle`，移除时用 handle 更安全。
- 不要从任意客户端直接执行权威授予、移除或 GE 应用。
- 选择 replication mode 时考虑 player pawn、AI、debug 和网络成本。

## GameplayAbility

典型生命周期：

1. `CanActivateAbility`。
2. ASC 找到 spec 并尝试激活。
3. `PreActivate`。
4. `ActivateAbility` 或 Blueprint activation event。
5. `CommitAbility`，通常包含 cost 和 cooldown。
6. 启动 AbilityTasks、TargetData、montage、event wait 或 side effects。
7. `EndAbility` 或 `CancelAbility`。

设计规则：

- 成功激活路径必须清楚地 commit 或明确说明为什么不 commit。
- 每条 async/task 路径都必须能结束或取消 ability。
- `InstancingPolicy` 决定能不能存 per-activation 状态。
- `NetExecutionPolicy` 决定代码在哪一端运行。
- `ReplicationPolicy` 通常不应随意打开，ability state replication 成本较高。

## Ability Spec 与 Actor Info

重点类型：

- `FGameplayAbilitySpecDef`。
- `FGameplayAbilityActivationInfo`。
- `FGameplayAbilitySpec`。
- `FGameplayAbilitySpecContainer`。
- `FGameplayAbilityActorInfo`。
- `FGameplayEventData`。

注意点：

- 同一个 ability class 可以有多个 spec，不要只按 class 粗暴移除。
- actor info 里的 owner/avatar/controller/movement/mesh/ASC 可能是弱引用，要处理失效。
- gameplay event activation 要检查 event tag、target data、optional object 和 context。

## AttributeSet

`UAttributeSet` 负责属性存储和属性变化 hook。常见类型和宏：

- `FGameplayAttributeData`。
- `FGameplayAttribute`。
- `GAMEPLAYATTRIBUTE_REPNOTIFY`。
- `GAMEPLAYATTRIBUTE_PROPERTY_GETTER`。
- `GAMEPLAYATTRIBUTE_VALUE_GETTER`。
- `GAMEPLAYATTRIBUTE_VALUE_SETTER`。
- `GAMEPLAYATTRIBUTE_VALUE_INITTER`。
- `ATTRIBUTE_ACCESSORS`。

常见 hook：

- `PreGameplayEffectExecute`：执行前可拒绝或调整。
- `PostGameplayEffectExecute`：处理伤害、治疗等执行结果。
- `PreAttributeChange`：当前值变化前 clamping。
- `PostAttributeChange`：当前值变化后观察。
- `PreAttributeBaseChange`：base value 变化前 clamping。
- `PostAttributeBaseChange`：base value 变化后观察。
- `OnAttributeAggregatorCreated`：自定义 aggregator metadata。

复制规则：

- replicated attribute 的 `OnRep` 应使用 `GAMEPLAYATTRIBUTE_REPNOTIFY`。
- base value 和 current value clamping 不要放错 hook。
- gameplay 反应通常放在 `PostGameplayEffectExecute`，不要只靠 `OnRep` 做权威逻辑。

## GameplayEffect

`UGameplayEffect` 描述 effect 资产，运行时会生成 `FGameplayEffectSpec`。

重点概念：

- Instant effect 立即执行。
- Duration 和 Infinite effect 会成为 active gameplay effect。
- Periodic effect 会按周期执行，也可能在应用时执行。
- Spec 保存 level、context、captured tags/attributes、set-by-caller、modifiers、dynamic tags。
- Active GE 保存 duration、start time、period、stack count、inhibition、prediction state。
- 新行为优先查 `UGameplayEffectComponent`，不要依赖已 deprecated 的 monolithic 字段。

常见 GE Components：

- Abilities grant。
- Additional effects。
- Asset tags。
- Block ability tags。
- Chance to apply。
- Custom can apply requirement。
- Immunity。
- Remove other effects。
- Target tag requirements。
- Target owned tags。

## Effect Context

`FGameplayEffectContext` 通常携带 instigator、effect causer、source object、ability、actors、hit result、world origin 等信息。

自定义 context checklist：

1. 重写 `UAbilitySystemGlobals::AllocGameplayEffectContext`。
2. 实现 `Duplicate`。
3. 实现 `GetScriptStruct`。
4. 实现 `NetSerialize`。
5. 设置 `TStructOpsTypeTraits` 的 net serializer。
6. 确认 cue parameters 和 GE spec 能拿到自定义字段。

## TargetData

TargetData 用于在 ability 中传递目标信息，尤其是预测客户端向服务器提交目标。

重点类型：

- `FGameplayAbilityTargetData`。
- `FGameplayAbilityTargetDataHandle`。
- `FGameplayAbilityTargetingLocationInfo`。
- Actor array target data。
- Single target hit data。
- Location info target data。

自定义 target data checklist：

1. 继承 `FGameplayAbilityTargetData`。
2. 使用 `USTRUCT`。
3. 重写 `GetScriptStruct`。
4. 实现 `NetSerialize`。
5. 设置 `TStructOpsTypeTraits`。
6. 用 heap allocation 加入 `FGameplayAbilityTargetDataHandle`。
7. 使用 ASC target-data RPC、delegate、consume 成对处理。

## Prediction

预测相关重点：

- `FPredictionKey` 是客户端预测 ID。
- 客户端创建的 prediction key 会发给服务器。
- 服务器回客户端时，prediction key 通常只对发起预测的客户端有效。
- `FScopedPredictionWindow` 用于给预测 side effects 建立 scope。
- rejection/catch-up delegate 用于确认或回滚。

风险：

- 没有 prediction window 就发送新的预测 target data。
- 在预测 side effect 后没有正确处理 server reject。
- 把 prediction key 当成所有客户端都可见的数据。
- 在非预测策略 ability 中写入客户端先行状态。

## AbilityTasks

AbilityTasks 是 ability 内的 latent/async 节点。常见类别：

- 等待 ability state、其他 ability、commit。
- 等待 input press/release、confirm/cancel。
- 等待 gameplay event、tag、tag query、tag count。
- 等待 GE applied/removed/stack change/immunity。
- 等待 attribute change 或 threshold。
- target data 和 targeting actor。
- montage、animation、root motion。
- delay、repeat。
- actor spawn。
- network sync point。

实现规则：

- Task 应由 active ability 拥有。
- `OnDestroy` 中解除 delegate 和清理外部注册。
- 预测任务需要检查 `FScopedPredictionWindow`。
- Blueprint task factory 通常使用 `BlueprintInternalUseOnly`。

## GameplayCues

GameplayCues 用于非权威展示。重点查：

- `GameplayCueManager`。
- static notify。
- actor notify。
- burst 和 looping cue。
- cue set。
- cue translator。
- anim notify cue。

规则：

- 不在 cue notify 中做权威 gameplay 决策。
- Cue 参数来自 context/spec，要确认 instigator、causer、location、normal、magnitude 和 tags 是否正确。
- Looping cue actor 的 spawn/remove 生命周期要验证。

## Editor

`GameplayAbilitiesEditor` 常见职责：

- GameplayAbility Blueprint asset creation。
- Attribute details 和 graph pin。
- GameplayEffect details customization。
- GameplayCue editor。
- latent ability task K2 节点。
- GameplayCue event node。
- GameplayAbility audit。
- Sequencer GameplayCue track。

Editor 类型不能从 runtime 模块直接 include。

## 与 EnhancedInput / GameFeatures / CommonInput 的关系

- 输入触发 ability：读取 `../../unreal-enhancedinput/SKILL.md`，确认 action、mapping context、trigger event 和 ability input binding。
- GameFeature 激活授予 ability、添加 Attribute、GameplayCue path 或 ability set：读取 `../../unreal-gamefeatures/SKILL.md`，确认激活/反激活对称。
- Ability 激活失败、AttributeSet 伤害、GameplayCue 参数转通知、UI 错误提示或战斗消息广播：读取 `../../unreal-gameplay-message-router/SKILL.md`，确认 message channel、payload 类型和网络边界。
- UI 显示技能按键、手柄图标或 CommonUI action：读取 `../../unreal-commoninput/SKILL.md`。

## 与 ReplicationGraph 的关系

GAS 自己负责 ability spec、attribute、effect、target data、GameplayCue 和 prediction 的复制语义；ReplicationGraph 负责承载这些状态的 Actor 是否对某个 connection relevant，以及在高 actor 数下如何被 gather、cull 和 prioritized。

路由规则：

- ASC、Ability、Attribute、TargetData、Prediction 或 GameplayCue 本身的复制语义：继续使用本 Skill。
- Ability 生成或控制的 replicated actors、GameplayCue actors、target actors、projectiles、owner-only/private state 是否进入正确 graph node：读取 `../../unreal-replicationgraph/SKILL.md`。
- 大量 ability 相关 actor 导致 channel、priority、distance cull、dormancy 或 relevancy 问题：同时查本 Skill 和 ReplicationGraph。

## 修改前检查清单

- ASC 是否已初始化 owner/avatar info。
- ability grant/remove 是否保存并使用 spec handle。
- 小玩法是否更适合做 GA，而不是散落到 Subsystem、ActorComponent 或 UI。
- 业务 GA 是否继承宿主 Game 模块封装；没有授权不要修改核心框架层。
- AbilitySet 是否包含需要同时授予的 GA、GE、AttributeSet。
- 输入触发 GA 的 InputTag 是否在 InputConfig 和 AbilitySet 中一致。
- AbilitySet 中需要后续可调的 GA 是否使用 Blueprint generated class，而不是直接写 native GA class。
- Experience、PawnData、GameFeature Action 是否真的会授予目标 AbilitySet。
- GameFeature 反激活时是否能回收 AbilitySet 句柄。
- GamePhaseAbility 是否设置 GamePhaseTag，并能正常 End/Cancel。
- `InstancingPolicy` 是否允许存储当前状态。
- `NetExecutionPolicy` 是否符合 authority/prediction 需求。
- 是否所有 activation path 都能 commit/end/cancel。
- TargetData 是否正确复制和 consume。
- Attribute replication 是否使用 rep notify 宏。
- GE stacking/duration/period/tags/cues 是否符合预期。
- 自定义 GE component、target data、effect context 是否有 net serialization。
- GameplayCue 是否只做展示层行为。
- Ability 相关 Actor 的 relevancy/cull/dormancy 是否由 ReplicationGraph 或默认 NetDriver 路径处理。
- runtime/editor 模块边界是否正确。

## 验证

- 构建相关目标模块。
- 修改反射声明时触发 UHT。
- 测试 server、listen server、autonomous client、simulated proxy。
- 验证 ASC owner/avatar info 在 possession、respawn 后正确。
- 验证 ability grant/remove handle 没有 stale specs。
- 验证 AbilitySet 在 PawnData/Experience/GameFeature 链路中被授予和回收。
- 验证 InputAction、InputConfig AbilityInputActions、AbilitySet InputTag 三者一致。
- 验证 ActivationPolicy 的 Triggered、Started、Held、OnSpawn 行为。
- 验证 GamePhase 启动、同级取消、子阶段并行、结束回调和 Tag 监听。
- 验证 `CanActivateAbility`、`CommitAbility`、cost/cooldown、`EndAbility`。
- 验证 prediction accept/reject。
- 验证 target data server/client consume。
- 验证 attribute replication 和 clamping。
- 验证 GE stacking、duration、period、tags、cue。
- 验证 GameplayCue 只在预期客户端表现。
