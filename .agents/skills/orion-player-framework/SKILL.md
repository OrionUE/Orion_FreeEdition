---
name: orion-player-framework
description: "Use when Codex works on the reusable Unreal Engine player framework in this codebase: CorePlayerController, CorePlayerState, CoreLocalPlayer, AsyncAction_PlayerStateReady, host-game Player folder classes, FOrionPlayerID, UOrionUserSubsystem, UOrionPlayerInfoComponent, UOrionPlayerManager, UOrionPlayerAccount, UOrionPlayerData, UOrionPlayerGameplayComponent, player save archives, friend/player profile lookup, player team membership, player spawning manager components, PlayerController/GameState component mounting through GameFeature Add Components, Experience PlayerAccountClass, or feature-specific player account and player gameplay components."
---

# Unreal Player Framework

本 Skill 用于处理玩家 ID、玩家账户、玩家信息组件、玩家玩法状态组件、玩家生成管理、好友资料查询，以及这些玩家逻辑如何通过 Experience 和 GameFeature 接入。

详细说明：

`references/player-framework.zh-CN.md`

## 工作流

1. 先判断需求属于玩家身份、玩家存档、玩家进入/退出、玩法内玩家状态、出生点管理、好友资料、LocalPlayer 设置，还是 PlayerController/PlayerState/Pawn 初始化链。
2. 默认不要修改核心框架层。玩家通用能力先从宿主 Game 的 Player 类继承，玩法专属逻辑放到对应 GameFeature runtime module。
3. 玩家账户类继承 `UOrionPlayerAccount`，在 Experience 的 `PlayerAccountClass` 指定；玩家数据类型继承 `UOrionPlayerData` 或玩家 Archive 类型。
4. 玩家进入/退出和玩法内状态优先继承 `UOrionPlayerGameplayComponent`，通过 GameFeature Add Components 挂到 PlayerController，不要把具体玩法状态写进 GameMode。
5. 玩家出生点和重生规则优先继承 `UOrionPlayerSpawningManagerComponent`，通过 GameFeature Add Components 挂到 GameState。
6. 依赖玩家 ID 或账户数据的逻辑必须等待 `UOrionPlayerInfoComponent::CallOrRegister_OnPlayerInfoInitialized` 或对应 gameplay component 的 `OnPlayerInitialized`。
7. 通过 MCP/编辑器自动化挂组件时，先读取 `../orion-mcp-project-toolsets/SKILL.md` 并用 `describe_toolset` 确认 `AddComponentActionEntry` schema。

## 路由

- 查类声明、调用点、模块依赖和引擎生命周期时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 触碰 `ACorePlayerController`、`ACorePlayerState`、ASC、PawnData、PawnExtension、PawnControl 或核心只读边界时，配合 `../orion-gamecore-framework/SKILL.md`。
- 角色蓝图、PawnData、PawnClass、PawnExtension、PawnControl、HeroComponent、PlayerStart、PlayerSpawningManagerComponent 或 CharacterSpawnerManager 时，配合 `../orion-character-pawn-framework/SKILL.md`。
- PlayerController、PlayerCameraManager、LocalPlayer、view target、`BlueprintUpdateCamera`、`CalcCamera` 或玩家视角/FOV 排查时，配合 `../unreal-camera-fov-diagnostics/SKILL.md`。
- 玩家存档、ArchivePlayer、PlayerAccount 加载/创建存档、世界存档中的玩家数据、自动保存或持久化字段归属时，配合 `../orion-savegame-framework/SKILL.md`。
- 玩家所属队伍、玩家账户决定分队、PlayerController/PlayerState 团队身份、队伍变更广播、按队伍选择出生点或 AI 敌友态度时，配合 `../orion-teams-framework/SKILL.md`。
- Experience 选择玩家账户类、等待 Experience Loaded、把玩家组件组合进玩法时，配合 `../orion-gamemode-experience-framework/SKILL.md`。
- 玩家组件或生成管理器通过 GameFeature 激活/反激活挂载时，配合 `../orion-gamefeatures/SKILL.md`。
- `UOrionPlayerGameplayComponent` 或玩家初始化流程通过 `ILoadingProcessInterface` 保持加载屏时，配合 `../orion-loading-screen-framework/SKILL.md`。
- 玩家能力、输入、PawnData AbilitySet 或 GamePhase 相关状态时，配合 `../unreal-gameplayabilities/SKILL.md` 和 `../orion-input-framework/SKILL.md`。
- PlayerState、PlayerController、PlayerInfoComponent、PlayerGameplayComponent、玩家 ID、玩家账户或出生管理器涉及 replicated state、Server/Client RPC、owner-only 通知或 Dedicated Server 行为时，配合 `../orion-network-replication-framework/SKILL.md`。
- 玩家头像、Steam 名称、好友列表、Session 邀请或在线身份时，配合 `../orion-online-steam-framework/SKILL.md`。
- 玩家 UI、好友条目、状态提示或玩家资料面板时，配合 `../orion-umg/SKILL.md`、`../unreal-commoninput/SKILL.md` 和 `../orion-gameplay-message-router/SKILL.md`。
- 创建或编辑玩家组件、Experience、ActionSet、蓝图或 GameFeature 内容资产时，配合 `../orion-asset-management/SKILL.md` 和 `../orion-mcp-project-toolsets/SKILL.md`。

## 约束

- 不把玩法专属玩家逻辑写入 GameMode 或核心 Player 基类。
- 不绕过 `UOrionPlayerInfoComponent` 自己生成玩家 ID；本地用户 ID 统一来自 `UOrionUserSubsystem`。
- 不手写组件 Spawn/Destroy 来实现玩法挂载；优先使用 GameFeature Add Components，让反激活能自动移除组件。
- Skill、示例和文档不得写入宿主项目名、绝对路径、用户名或本机引擎路径。
