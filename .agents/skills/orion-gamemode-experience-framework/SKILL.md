---
name: orion-gamemode-experience-framework
description: "Use when Codex works on Unreal Engine GameMode and Experience-driven gameplay in this framework: GameMode should not hold gameplay business logic, UCoreExperienceDefinition, host-game ExperienceDefinition subclasses, WorldSettings DefaultGameplayExperience, Experience PrimaryAssetId selection, ExperienceManagerComponent load flow, PlayerAccountClass, DefaultPawnData, ActionSets, GameFeaturesToEnable, PawnData, AbilitySet, InputAction/InputTag relationships, creating Experience assets, assigning Experience to maps, or configuring level gameplay through Experience."
---

# Unreal GameMode Experience Framework

本 Skill 用于处理 GameMode、WorldSettings、Experience、PawnData、ActionSet、AbilitySet 和输入 Tag 的流程化玩法配置。

详细说明：

`references/gamemode-experience.zh-CN.md`

## 工作流

1. 先确认需求是不是“某个关卡/玩法/模式的业务逻辑”。如果是，不要往 GameMode 增加业务逻辑，优先通过 Experience、ActionSet、PawnData、GameFeature、AbilitySet 和输入配置组合。
2. 读取源码确认宿主 GameMode 如何选择 Experience：URL/PIE/命令行/WorldSettings/服务器默认/兜底值的优先级必须以当前项目源码为准。
3. 新建关卡玩法时，先创建 Experience 资产，设置 `PlayerAccountClass`、`DefaultPawnData`、`GameFeaturesToEnable`、`Actions`、`ActionSets`，再把关卡 WorldSettings 的 `DefaultGameplayExperience` 指向该 Experience。
4. 新增 GA 输入时，必须让 `GameplayTag`、`InputAction`、`InputConfig.AbilityInputActions`、`AbilitySet` 的 GA `InputTag` 完全一致。
5. 使用 MCP/编辑器自动化前先读取 `../orion-mcp-project-toolsets/SKILL.md`，调用前用 `list_toolsets` 和 `describe_toolset` 获取真实 schema；没有工具时才补 Toolset。
6. 修改或创建资产前先读取 `../orion-asset-management/SKILL.md`，遵守蓝图命名和 Content/GameFeature 内容目录规则。
7. 实现后验证 AssetManager 能扫描 Experience、关卡 WorldSettings 已保存、Experience 可加载、PawnData 授予 AbilitySet、输入能触发目标 GA。

## 路由

- 查源码、类声明、加载顺序、模块依赖和调用点时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 判断 GameCore 只读边界、宿主 Game 派生层、PawnData、ASC、GameFeature Action 或核心初始化链时，配合 `../orion-gamecore-framework/SKILL.md`。
- 创建角色蓝图、配置 PawnData 的 `PawnClass`/`InputConfig`/`AbilitySets`/`TagRelationshipMapping`、使用 `BP_CharacterBase` 或角色出生管理时，配合 `../orion-character-pawn-framework/SKILL.md`。
- Experience 的 `PlayerAccountClass`、玩家账户、玩家信息组件、玩家进入/退出、PlayerGameplayComponent 或 PlayerSpawningManagerComponent 挂载时，配合 `../orion-player-framework/SKILL.md`；如果涉及玩家/世界存档、LevelMetaDefinition、新游戏/加载游戏或自动保存，继续读取 `../orion-savegame-framework/SKILL.md`。
- Experience 启用 GameFeature、添加 ActionSet、组件、输入、UI 或能力时，配合 `../orion-gamefeatures/SKILL.md`。
- Experience 加载状态、过渡关卡、前端 flow 或 Experience/ActionSet 异步工作需要保持加载屏时，配合 `../orion-loading-screen-framework/SKILL.md`。
- Experience 需要配置队伍数量、TeamCreationComponent、TeamDisplayAsset、按队伍出生、玩家分队或 AI 敌友态度时，配合 `../orion-teams-framework/SKILL.md`。
- AbilitySet、GA、GamePhaseAbility、ASC 输入或 Ability 输入 Tag 时，配合 `../unreal-gameplayabilities/SKILL.md`。
- InputAction、InputConfig、InputTag、IMC 或改键可见性时，配合 `../orion-input-framework/SKILL.md` 和 `../unreal-enhancedinput/SKILL.md`。
- 创建或整理 Experience、ActionSet、PawnData、AbilitySet、InputAction、InputConfig、IMC、GA、UI 或 GameFeature 内容资产时，配合 `../orion-asset-management/SKILL.md`。
- 修改 AssetManager PrimaryAsset 扫描、WorldSettings class、平台配置或 packaging/cook 行为时，配合 `../orion-project-config/SKILL.md` 和 `../orion-packaging/SKILL.md`。
- 通过 MCP 创建或编辑 Experience、ActionSet、AbilitySet、InputAction、InputConfig 或关卡默认 Experience 时，配合 `../orion-mcp-project-toolsets/SKILL.md`。

## 约束

- 不把关卡玩法业务写进 GameMode；GameMode 只负责选择 Experience、等待 Experience Loaded、启动玩家和选择 PawnData。
- 不默认修改核心框架模块；普通玩法落到宿主 Game 派生层或 GameFeature 插件。
- Skill、示例和文档不得写入宿主项目名、绝对路径、用户名或本机引擎路径。
