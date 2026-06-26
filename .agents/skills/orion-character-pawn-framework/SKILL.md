---
name: orion-character-pawn-framework
description: "Use when Codex works on Unreal Engine characters, pawns, PawnData, PawnExtension, PawnControl, HeroComponent, AOrionCharacter, BP_CharacterBase, character Blueprint creation, player controller component mounting, player spawning, CharacterSpawnerManager, team-based CharacterSpawner placement, PlayerSpawningManagerComponent, DefaultPawnData, PawnClass, AbilitySets, InputConfig, TagRelationshipMapping, or Experience-driven pawn/character setup."
---

# Unreal Character Pawn Framework

本 Skill 用于处理角色、PawnData、Pawn 控制、角色蓝图基类、玩家控制器组件挂载和出生管理。详细说明：

`references/character-pawn-framework.zh-CN.md`

## 工作流

1. 先判断需求属于角色蓝图、PawnData、移动/视角输入、AbilitySet、PlayerController 组件、PlayerStart/Spawner，还是 Experience 的 DefaultPawnData。
2. 默认不要修改核心框架层；角色业务优先从宿主 Game 的 `AOrionCharacter`、`UOrionPawnControlComponent`、`UOrionPawnData` 派生，玩法专属角色逻辑放入对应 GameFeature runtime module。
3. 创建正式角色蓝图时，以 `/Game/GamePlay/Characters/BP_CharacterBase.BP_CharacterBase` 为蓝图父类；不要直接从 native Character 空建一个新蓝图。
4. 角色能被 GameMode 正确生成，必须让 PawnData 的 `PawnClass` 指向角色蓝图，Experience 的 `DefaultPawnData` 指向该 PawnData。
5. PawnData 同时配置 `AbilitySets`、`InputConfig` 和 `TagRelationshipMapping`；GA 输入必须让 AbilitySet 的 InputTag 与 InputConfig 的 AbilityInputActions 一致。
6. 玩家控制器级组件通过 Experience/ActionSet 的 GameFeature Add Components 挂到 PlayerController；出生管理组件挂到 GameState；不要把玩法出生规则写进 GameMode。
7. 通过 MCP/编辑器自动化创建或编辑角色资产前，读取 `../orion-mcp-project-toolsets/SKILL.md`，并用 `describe_toolset` 确认当前函数 schema。

## 路由

- 查源码、类声明、调用点、模块依赖和引擎生命周期时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 判断 GameCore 只读边界、PawnExtension、PawnControl、CorePlayerState、ASC 或 Experience 加载链时，配合 `../orion-gamecore-framework/SKILL.md`。
- 排查角色相机、第一人称视角、FOV、viewmodel、CameraComponent、`CalcCamera` 或 UE 升级后视角变化时，配合 `../unreal-camera-fov-diagnostics/SKILL.md`。
- Experience 设置 `DefaultPawnData`、创建 PawnData、关卡指定 Experience、AbilitySet/InputAction/InputTag 闭环时，配合 `../orion-gamemode-experience-framework/SKILL.md`。
- 玩家身份、PlayerController 信息组件、玩家 gameplay component、玩家账户或 PlayerController/GameState 组件挂载时，配合 `../orion-player-framework/SKILL.md`。
- 角色、Pawn、Controller 或 CharacterSpawner 需要队伍身份、按队伍出生、AI 敌友态度、`FGenericTeamId` 或 `IOrionTeamAgentInterface` 时，配合 `../orion-teams-framework/SKILL.md`。
- 输入、移动、视角、InputConfig、InputAction、IMC、InputTag 或改键时，配合 `../orion-input-framework/SKILL.md` 和 `../unreal-enhancedinput/SKILL.md`。
- GA、AbilitySet、Ability 输入、GamePhase 或 PawnData 授予能力时，配合 `../unreal-gameplayabilities/SKILL.md`。
- Pawn/角色初始化、lobby pawn、过渡关卡或角色组件通过 `ILoadingProcessInterface` 保持加载屏时，配合 `../orion-loading-screen-framework/SKILL.md`。
- 角色/Pawn/Controller 的 replicated movement、动作状态、视角状态、PawnData、PawnExtension、Server RPC、owner skip 或 simulated-only 行为时，配合 `../orion-network-replication-framework/SKILL.md`。
- 角色、PawnData、AbilitySet、InputConfig、IMC、PlayerStart、Spawner 或 GameFeature 内容资产创建命名时，配合 `../orion-asset-management/SKILL.md`。
- 使用 MCP 创建 PawnData、角色蓝图、设置 PawnData 字段、挂组件或绑定关卡 Experience 时，配合 `../orion-mcp-project-toolsets/SKILL.md`。

## 约束

- 不把具体玩法规则写进 GameMode 或核心 Character/Pawn 基类。
- 不直接编辑二进制 `.uasset`；通过 Unreal Editor、MCP Toolset、Editor Utility 或官方资产 API 创建和保存。
- 不手写 PlayerController/Pawn 组件生命周期来替代 GameFeature Add Components。
- Skill、示例和文档不得写入宿主项目名、绝对路径、用户名或本机引擎路径。
