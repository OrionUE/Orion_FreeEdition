---
name: unreal-replicationgraph
description: "Use when Codex works on Unreal Engine ReplicationGraph or multiplayer replication scalability: UReplicationGraph, UReplicationGraphNode, UBasicReplicationGraph, UNetReplicationGraphConnection, actor replication lists, grid spatialization, always-relevant routing, owner-only routing, dormancy, tear-off actors, replication frequency, cull distance, NetDriver ReplicationDriverClassName config, RepGraph console debugging, actor relevancy, network prioritization, large actor counts, listen server, dedicated server, and feature/gameplay systems that need explicit RepGraph placement."
---

# Unreal ReplicationGraph

本 Skill 用于处理 Unreal Engine ReplicationGraph 和多人复制扩展性。先从当前机器的引擎、项目和插件源码确认真实类型、模块依赖、NetDriver 配置、graph subclass、node routing、dormancy 和调试命令，再修改网络复制代码。

如果任务只是普通 `UPROPERTY` 复制、OnRep、RPC ownership、replicated component、FastArray、GAS 网络语义或 MessageRouter 跨端桥接，先读取 `../orion-network-replication-framework/SKILL.md`。本 Skill 专注 NetDriver 级 actor relevancy 和扩展性。

详细说明：

`references/replicationgraph.zh-CN.md`

## 工作流

1. 先确认项目是否启用 ReplicationGraph：查 `.uproject`/`.uplugin`、`*.Build.cs`、`Config`、`NetDriverDefinitions` 和 `ReplicationDriverClassName`。
2. 先定位当前 graph class：查是否有项目 `UReplicationGraph` 子类；没有时把 `UBasicReplicationGraph` 当作最小参考，不当作复杂项目的生产方案。
3. 先分清 actor 类别：always relevant、owner-only、spatialized dynamic、static/dormant、tear-off、team/squad/private data、projectiles、pickups、AI、spectators。
4. 实现时对称处理 add/remove/rename、connection node 创建/销毁、dormancy flush、actor destruction info 和 owner changes。
5. 配置时把 RepGraph 挂到实际使用的 NetDriver section，不要只改示例 `IpNetDriver`。
6. 验证时使用 listen server、dedicated server、多客户端、高 actor 数、spawn/destroy、dormancy、tear-off、owner-only、level/outer change 和 RepGraph debug commands。

## 路由

- 普通 replicated property、RPC、FastArray、push model、GAS 网络语义或 NetDriver 基础复制排查：先配合 `../orion-network-replication-framework/SKILL.md`。
- 查源码位置、模块依赖和符号声明：配合 `../unreal-source-code-navigator/SKILL.md`。
- Replicated actor 属于 GameFeature 插件或随 feature 激活/反激活出现：配合 `../orion-gamefeatures/SKILL.md`。
- TeamInfo、TeamDisplayAsset、团队私有/公开信息、按队伍可见性、队伍 owner-only 数据或 AI 敌友相关 Actor 复制策略：配合 `../orion-teams-framework/SKILL.md`。
- Ability、Attribute、GameplayCue、TargetData 的复制语义：配合 `../unreal-gameplayabilities/SKILL.md`；如果问题是 actor relevancy、cull distance 或 graph placement，再回到本 Skill。
- GameplayMessageRouter 消息跨 server/client、owner-only client 通知、GameState multicast、PlayerState client RPC 或 replicated fast array rebroadcast 时，配合 `../orion-gameplay-message-router/SKILL.md`；消息系统本身不是复制驱动。
- 输入、UI、CommonInput 不直接由 RepGraph 负责；只有它们产生 replicated actors 或 replicated state placement 时才需要本 Skill。
- OnlineSubsystem、Steam、EOS 或平台网络驱动只决定 active NetDriver；RepGraph 配置仍需查对应 NetDriver section。

## 约束

- 不假设固定 UE 小版本；以本机源码为准。
- 不写入项目名、项目绝对路径或引擎绝对路径。
- 不复制引擎源码；只记录定位方法、核心类型和验证要点。
