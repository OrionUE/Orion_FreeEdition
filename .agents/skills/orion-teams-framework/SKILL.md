---
name: orion-teams-framework
description: "Use when Codex works on Unreal Engine team logic in this framework: Teams folders, IGenericTeamAgentInterface, FGenericTeamId, IOrionTeamAgentInterface, UOrionTeamSubsystem, AOrionTeamInfoBase, AOrionTeamPublicInfo, AOrionTeamPrivateInfo, UOrionTeamDisplayAsset, UOrionTeamCreationComponent, team tags, team display metadata, AI Perception affiliation, GetTeamAttitudeTowards, friendly-fire or damage attitude checks, character spawner team assignment, player team membership, or GameFeature/Experience-driven team setup."
---

# Unreal Teams Framework

本 Skill 用于处理队伍身份、团队元数据、AI 敌友态度、出生点队伍分配，以及玩法通过 GameFeature/Experience 接入团队规则。

详细说明：

`references/teams-framework.zh-CN.md`

## 工作流

1. 先判断需求属于团队身份、AI 敌友态度、团队展示数据、团队创建、玩家队伍分配、角色出生点分组、友军伤害，还是 UI/消息展示。
2. 需要让 Actor/Controller/Pawn 被引擎 AI 系统识别为某队时，实现 `IOrionTeamAgentInterface` 或 `IGenericTeamAgentInterface`，并覆盖 `GetGenericTeamId`；只写接口继承不够。
3. 需要队伍名、颜色、图标、tag 计数等共享元数据时，使用 TeamInfo/TeamSubsystem 体系；不要把这些数据散落到 PlayerState 或 GameMode。
4. 需要随玩法启停创建队伍或挂载队伍组件时，优先通过 GameFeature Add Components 把派生的 TeamCreationComponent 挂到 GameState，再由 Experience 组合。
5. 需要角色按队伍出生时，配合角色/玩家 Skill 检查 CharacterSpawner、PlayerSpawningManagerComponent、PlayerController 和玩家账户的数据流。
6. 需要伤害、锁定、感知、敌我判断时，优先用 `FGenericTeamId` / `GetTeamAttitudeTowards`；GAS 伤害执行中不要调用当前框架没有公开实现的队伍伤害 API。
7. 修改或创建 TeamDisplayAsset、TeamInfo 蓝图、GameFeature 资产前，读取资产管理 Skill，确认命名、目录和保存方式。
8. 实现后至少验证：服务器授权设置队伍、客户端复制 TeamInfo、AI Perception 敌友过滤、玩家登录/重生队伍选择、GameFeature 反激活清理。

## 路由

- 查 Teams 源码、引擎 `GenericTeamAgentInterface`、AI Perception、模块依赖和调用点时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 判断 GameCore 只读边界、TeamSubsystem 的 `UCoreWorldSubsystem` 基类、GameplayTagStack 或核心系统扩展点时，配合 `../orion-gamecore-framework/SKILL.md` 和 `../orion-system-framework/SKILL.md`。
- 队伍创建、玩法队伍数量、TeamCreationComponent 挂到 GameState、Experience/ActionSet 启用队伍规则时，配合 `../orion-gamefeatures/SKILL.md` 和 `../orion-gamemode-experience-framework/SKILL.md`。
- 玩家所属队伍、玩家账户决定队伍、PlayerController/GameState 组件挂载、玩家进入/退出重新分队时，配合 `../orion-player-framework/SKILL.md`。
- 角色出生点按队伍分组、CharacterSpawner、PlayerStart、PawnData、角色蓝图和出生管理时，配合 `../orion-character-pawn-framework/SKILL.md`。
- 伤害、锁定、Buff/Debuff、友军伤害、目标过滤或 GA 里读取队伍态度时，配合 `../unreal-gameplayabilities/SKILL.md`。
- 队伍变更、击杀、占点、UI 提示或玩法统计需要跨系统通知时，配合 `../orion-gameplay-message-router/SKILL.md`。
- TeamInfo、TeamTags、TeamDisplayAsset、公开/私有队伍状态、队伍 owner-only 数据或按队伍可见性涉及网络复制/RPC 时，配合 `../orion-network-replication-framework/SKILL.md`。
- 创建 TeamDisplayAsset、TeamInfo 蓝图、队伍 UI、GameFeature 内容或 Spawner 资产时，配合 `../orion-asset-management/SKILL.md` 和 `../orion-mcp-project-toolsets/SKILL.md`。
- 队伍 Actor/组件大量复制、队伍可见性、owner-only 信息或 RepGraph placement 时，继续配合 `../unreal-replicationgraph/SKILL.md`。

## 约束

- 不把具体玩法队伍规则写进 GameMode；GameMode 只负责 Experience 选择和流程协调。
- 不默认修改核心框架层；队伍业务优先落到宿主 Game 派生类或 GameFeature 插件。
- 不把 `FGenericTeamId` 当普通 `int32` 无限使用；引擎团队 ID 底层是 `uint8`，`NoTeam` 是保留值。
- 不使用全局 `FGenericTeamId::SetAttitudeSolver` 做玩法临时规则，除非这是稳定的项目级敌友规则。
- Skill、示例和文档不得写入宿主项目名、绝对路径、用户名或本机引擎路径。
