---
name: unreal-gamecore-framework
description: "Use before writing, modifying, reviewing, or generating Unreal gameplay framework code that touches GameCore-derived systems: GameCore, OrionGame inheritance, Experience loading, CoreExperienceManagerComponent, CoreGameMode, CoreGameState, CorePlayerState, CorePlayerController, CoreCharacter, CorePawnData, PawnExtension, PawnControl, CoreAbilitySystemComponent, CoreGameplayAbility, CoreAbilitySet, GameFeatureAction_AddAbilities, GameFeatureAction_AddWidgets, GameFeature input actions, CoreAssetManager, CoreSessionComponent, GamePhaseSubsystem, CoreVerbMessage, GameplayMessageRouter, TeamSubsystem, TeamInfo, GenericTeamAgent team attitude, and the rule that GameCore is a protected base layer not edited unless explicitly allowed."
---

# Unreal GameCore Framework

本 Skill 用于在实现玩法代码前判断如何安全使用 GameCore 底层框架。GameCore 是核心基座，默认只读；业务逻辑优先写在 OrionGame 派生层或 `Plugins/GameFeatures/<FeatureName>`。

## 工作流

1. 先确认任务是否触碰 GameCore 体系：Experience、PawnData、ASC、Ability、GameFeature Action、PlayerState、Pawn init state、Session、AssetManager、GamePhase 或 Core 前缀类型。
2. 默认不要修改 `Source/GameCore`，包括其中的 `Build.cs`、配置 glue 和其他核心层文本文件。除非用户明确允许改 GameCore，否则从 OrionGame 对应类型继承或在 GameFeature 插件中扩展。
3. 写代码前读取 `references/gamecore-framework.zh-CN.md`，确认运行链路、推荐继承点、事件时机和反激活规则。
4. 如果需要查函数签名、字段、调用点或实现细节，配合 `../unreal-source-code-navigator/SKILL.md` 读取当前源码。
5. 如果任务涉及具体 GAS、GameFeatures、EnhancedInput、CommonUI、UMG、多人网络复制、ReplicationGraph 或资产创建，再路由到对应专项 Skill。
6. 实现后用 OrionGame、目标 GameFeature runtime module 或目标 Target 验证；不要用改 GameCore 作为默认修复手段。

## 路由

- 模块落点、Target、插件职责或“代码放哪”先配合 `../unreal-framework-architecture/SKILL.md`。
- `UCoreAssetManager`、启动加载 jobs、`UCoreGameData`、`UCoreGameInstance`、`ACoreGameSession`、`UCoreWorldSubsystem`、`FGameplayTagStackContainer` 或宿主 Game 模块 System 扩展细节，配合 `../unreal-system-framework/SKILL.md`。
- 查 GameCore 类、函数、变量、父类、Build.cs 依赖和调用点时，配合 `../unreal-source-code-navigator/SKILL.md`。
- GameState、PlayerState、PlayerController、PawnData、PawnExtension、ASC、GameplayTagStack、Experience 或 GameFeature Action 涉及属性复制、RPC、FastArray、push model、NetDriver 或 Dedicated Server 行为时，配合 `../unreal-network-replication-framework/SKILL.md`。
- Teams、`UOrionTeamSubsystem`、TeamInfo、TeamDisplayAsset、`IOrionTeamAgentInterface`、`FGenericTeamId`、AI 敌友态度或友军伤害规则，配合 `../unreal-teams-framework/SKILL.md`。
- 玩家 ID、玩家账户、玩家信息组件、PlayerController/GameState 玩家组件挂载、玩家存档、玩家进入/退出、出生管理器或玩家资料查询，配合 `../unreal-player-framework/SKILL.md`；存档架构、ArchiveManager、LevelMeta/WorldOption、自动保存或 ArchivePlayer 字段归属继续读取 `../unreal-savegame-framework/SKILL.md`。
- 角色蓝图、PawnData、PawnExtension、PawnControl、HeroComponent、`AOrionCharacter`、`BP_CharacterBase`、PlayerStart 或 CharacterSpawner 相关链路，配合 `../unreal-character-pawn-framework/SKILL.md`。
- GameMode 选择 Experience、WorldSettings 指定默认 Experience、创建关卡玩法 Experience、设置 `PlayerAccountClass`、`DefaultPawnData`、ActionSet、PawnData、AbilitySet、InputAction/InputTag 闭环时，配合 `../unreal-gamemode-experience-framework/SKILL.md`。
- GameplayAbility、GA 小玩法、ASC、AbilitySet、AttributeSet、GameplayEffect、GameplayCue、Ability 输入绑定或 GamePhaseAbility 细节，配合 `../unreal-gameplayabilities/SKILL.md`。
- `FCoreVerbMessage`、Ability failure message、GameState/PlayerState 消息桥接、GameplayMessageRouter 或基于 GameplayTag 的业务消息，配合 `../unreal-gameplay-message-router/SKILL.md`。
- GameFeature plugin、Experience、GameFeatureAction 生命周期和模块化玩法，配合 `../unreal-gamefeatures/SKILL.md`。
- InputConfig、InputTag、MappingContext、PawnControl、Ability 输入绑定、GameFeature 输入注入或玩家改键，配合 `../unreal-input-framework/SKILL.md`，再按需要读取 `../unreal-enhancedinput/SKILL.md`、`../unreal-commoninput/SKILL.md` 和 `../unreal-inputcore/SKILL.md`。
- Widget、HUD layout、UIExtension 和 CommonUI 资产，配合 `../unreal-umg/SKILL.md` 和 `../unreal-asset-management/SKILL.md`。
- Experience、GameState/PlayerController/Pawn 组件、前端 flow 或异步业务通过 `ILoadingProcessInterface` 阻塞加载屏时，配合 `../unreal-loading-screen-framework/SKILL.md`。
- `UCoreSessionComponent`、`UOrionGameSessionComponent`、CommonSession、Steam Session、邀请、Lobby 或 `BP_SessionComponent` 挂载，配合 `../unreal-online-steam-framework/SKILL.md`。
- `UCoreAudioSettings`、音频用户设置、ControlBusMix、AudioMixer/AudioModulation、语音聊天或空间音频链路，配合 `../unreal-audio-framework/SKILL.md`。
- GameSettings 插件、`UGameSettingInput`、设置注册表、玩家设置页、`UOrionSettingsLocal` / `UOrionSettingsShared` 或设置保存/应用/取消流程，配合 `../unreal-game-settings-framework/SKILL.md`。
- `DefaultGame.ini` 中的 `CoreGameDataPath`、`DefaultPawnData`、`CoreAudioSettings`、`GameFeaturesManagerClassName` 或平台/用户设置默认值，配合 `../unreal-project-config/SKILL.md`。

## Reference

读取 `references/gamecore-framework.zh-CN.md` 获取 GameCore 运行机制、主要类职责、扩展点、禁止改动规则和常见错误。

## 硬规则

- GameCore 默认是 protected base layer：不要新增业务逻辑、不要直接改核心流程、不要把玩法特例写进 GameCore。
- GameCore 的 `Build.cs` 也属于 protected base layer；不要为了解决打包、依赖或 include 问题擅自增删、移动核心层已有依赖。
- 需要改 GameCore 时，先向用户说明为什么 OrionGame 派生、GameFeature Action、配置、DataAsset 或 Blueprint 不能解决，并等待明确允许。
- 业务逻辑默认优先级：`Plugins/GameFeatures/<FeatureName>` > OrionGame 派生类 > GameUI/AnimFramework/BBL 相应层 > GameCore。
