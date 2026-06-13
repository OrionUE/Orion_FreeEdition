---
name: unreal-network-replication-framework
description: "Use when Codex works on Unreal Engine multiplayer networking in this reusable framework: replicated actors/components/subobjects, UPROPERTY replication, OnRep, RPCs, authority/ownership, NetDriver, SteamSockets, Iris support, push model, FastArray, dormancy, relevancy, NetMulticast, Client/Server RPC, GAS network prediction, Attribute replication, target data NetSerialize, GameplayMessageRouter cross-network bridges, voice/data packet replication, dedicated/listen server behavior, or debugging multiplayer replication bugs."
---

# Unreal Network Replication Framework

本 Skill 用于处理框架内多人网络复制、RPC、复制组件、FastArray、GAS 网络语义、NetDriver 配置和跨端消息桥接。它不是 ReplicationGraph 专项 Skill；RepGraph 只在需要 NetDriver 级相关性/大规模 actor placement 时继续路由。

## 工作流

1. 先确认任务类型：连接/Session、NetDriver、actor/component 属性复制、RPC、GAS、GameplayMessageRouter 跨端、角色移动状态、玩家/队伍状态、语音聊天、Dedicated Server、listen server 或复制性能。
2. 先读取 `references/network-replication-framework.zh-CN.md`，再查真实源码。不要凭记忆写 `DOREPLIFETIME`、RPC ownership、OnRep 或 FastArray 代码。
3. 先确认 active NetDriver 和配置 section：读取 `.uproject`、目标 `*.Target.cs`、相关 `*.Build.cs`、`Config/DefaultEngine.ini`、平台 `Engine.ini` 和 Online/Steam 插件配置。
4. 业务状态默认由服务端权威修改；客户端输入意图用 `Server` RPC，持久状态用 replicated property / FastArray，owner-only 通知用 `Client` RPC，临时全局表现才考虑 `NetMulticast`。
5. 组件复制必须在构造期设置默认复制；动态子对象先查当前 UE 版本的 `ReadyForReplication`、replicated subobject 和 Iris 支持行为。
6. GAS 逻辑优先使用 ASC、Ability、AttributeSet、prediction、GameplayEffect、TargetData NetSerialize；不要绕过 GAS 自己复制裸状态。
7. GameplayMessageRouter 是本地消息分发器；跨 server/client 必须通过 GameState multicast、PlayerState client RPC、replicated FastArray 或复制 actor 桥接后，在目标端本地广播。
8. 完成后至少做多人验证：listen server、dedicated server、2 个以上客户端、加入/退出、重生、feature 激活/反激活、延迟/丢包、owner-only、非 owner 观察、replay 或 spectator 相关路径。

## 路由

- 查源码、模块依赖、反射/RPC 宏、`GetLifetimeReplicatedProps`、UHT 报错或 UE 版本差异时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 判断网络代码应落在核心框架、宿主 Game 模块、GameFeature 插件、Online/Steam 插件、GameUI 还是配置层时，配合 `../unreal-framework-architecture/SKILL.md`。
- 触碰 GameCore 只读边界、Experience loading、GameState/PlayerState/PawnData/ASC/PawnExtension/GameplayTagStack 等核心复制链路时，配合 `../unreal-gamecore-framework/SKILL.md`。
- Feature 激活/反激活时添加 replicated actor、组件、能力、输入或玩家/队伍系统时，配合 `../unreal-gamefeatures/SKILL.md`；需要 graph placement 再配合 `../unreal-replicationgraph/SKILL.md`。
- 需要 `ReplicationDriverClassName`、`UReplicationGraph`、actor relevancy、grid spatialization、always relevant、owner-only graph node、dormancy 分桶或大规模复制优化时，配合 `../unreal-replicationgraph/SKILL.md`。
- OnlineSubsystem、Steam、Session、Lobby、邀请、SteamSockets NetDriver、Steam target 或发布配置，配合 `../unreal-online-steam-framework/SKILL.md`。
- GameplayAbility、ASC、AttributeSet、GameplayEffect、GameplayCue、prediction、TargetData 或 AbilitySet 输入复制，配合 `../unreal-gameplayabilities/SKILL.md`。
- 世界物品拾取、丢弃、装备、开箱、容器搜索、`AItemActor`、`UItemInstance`、`UJInventoryComponent`、交互 Ability、交互提示与服务器权威库存修改相关复制，配合 `../unreal-inventory-interaction-framework/SKILL.md`。
- GameplayMessageRouter 消息需要跨端、owner-only、server-to-all 或 replicated state bridge 时，配合 `../unreal-gameplay-message-router/SKILL.md`。
- 玩家 ID、玩家账户、PlayerInfoComponent、PlayerGameplayComponent、PlayerState/PlayerController 状态复制，配合 `../unreal-player-framework/SKILL.md`。
- 角色/PawnData/PawnControl/移动状态/视角/CharacterSpawner/PlayerStart 网络行为，配合 `../unreal-character-pawn-framework/SKILL.md`。
- 队伍、TeamInfo、公开/私有队伍数据、友军伤害、AI 敌友态度或按队伍可见性，配合 `../unreal-teams-framework/SKILL.md`。
- 语音聊天、麦克风数据、空间语音或音频相关 replicated config/RPC，配合 `../unreal-audio-framework/SKILL.md`。
- Dedicated Server、Steam 包、平台 NetDriver 配置、packaged multiplayer 验证或 network cook 问题，配合 `../unreal-packaging/SKILL.md` 和 `../unreal-project-config/SKILL.md`。

## Reference

读取 `references/network-replication-framework.zh-CN.md` 获取项目复制架构、源码定位清单、实现模板、RPC 决策表、FastArray/PushModel/GAS/MessageRouter 网络桥接规则、调试命令和常见错误。

## 硬规则

- 不把宿主项目名、绝对路径、用户名、本机引擎路径、真实 Steam AppID、服务器密钥或线上地址写入 Skill、示例代码或生成文档。
- 不默认修改核心框架层；除非用户明确允许，否则业务复制逻辑优先落在宿主 Game 派生层或 GameFeature 插件。
- 不把 `UPROPERTY(Replicated)` 当作完整复制实现；必须检查 `GetLifetimeReplicatedProps`、条件、RepNotify、push model dirty 标记和 authority 入口。
- 不把 GameplayMessageRouter 当作网络复制系统；它只能在本地广播，跨端要显式网络桥接。
