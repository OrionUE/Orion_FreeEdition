---
name: orion-gamefeatures
description: "Use when Codex works on Unreal Engine GameFeatures, Experience-driven gameplay, modular gameplay feature plugins, or creating a new gameplay GameFeature plugin: UGameFeaturesSubsystem, UGameFeatureData, UGameFeatureAction, GameFeature plugin state machines, CoreExperienceDefinition, CoreExperienceActionSet, Experience loading flow, GameFeaturesToEnable, gameplay plugin templates, feature-scoped business code placement, project policies, state change observers, plugin URL protocols, built-in GameFeature actions, modular components, feature-delivered input mappings, input configs, widgets, abilities, gameplay cues, editor templates, validation, cooking, or asset-manager integration."
---

# Unreal GameFeatures

本 Skill 用于处理 Unreal Engine GameFeatures、Experience 流程化玩法和模块化玩法插件生命周期。先从当前机器的引擎、项目和插件源码确认真实类型、模块依赖、状态机、Feature Action、Experience 数据和项目封装层，再修改 GameFeature 相关代码。

业务逻辑默认先判断能否放进 GameFeature/Experience：能随玩法启停、能由 Experience 组合、能通过组件/输入/UI/GAS/消息解耦接入的内容，优先落到玩法插件和数据资产，而不是核心框架模块。

详细说明：

`references/gamefeatures.zh-CN.md`

新玩法插件规范框架：

`references/gamefeature-plugin-framework.zh-CN.md`

## 工作流

1. 先定位层级：Subsystem、plugin URL、state machine、GameFeatureData、Feature Action、project policy、observer、Experience、ActionSet、PawnData、editor tooling、cook/asset manager。
2. 先做业务落点判断：玩法切片、模式差异、地图/房间体验、feature 专属 UI/输入/能力/组件/系统，优先考虑 GameFeature plugin、Experience 或 ActionSet。
3. 新增一种玩法、模式、训练关、测试玩法或可独立启停的玩法包时，先读取 `references/gamefeature-plugin-framework.zh-CN.md`，按标准插件骨架、目录、C++ 类、Experience 和资产清单创建。
4. 涉及插件加载/激活时，优先查 `UGameFeaturesSubsystem` 和 completion delegate，不要假设调用后立即完成。
5. 涉及 Experience 加载时，优先查 ExperienceManagerComponent：资产包加载、玩家初始化、`GameFeaturesToEnable`、插件激活、Experience/ActionSet actions、loaded delegates。
6. 涉及数据驱动扩展时，优先查 `UGameFeatureData` 和 `UGameFeatureAction` lifecycle。
7. 涉及全局项目行为时，优先查 `UGameFeaturesProjectPolicies` 和 `IGameFeatureStateChangeObserver`。
8. 涉及能力、UI、输入、组件、GameplayCue 等随 feature 激活/反激活的行为时，优先检查是否已有项目 Feature Action 或 Experience 层封装。
9. 实现前确认模块边界；实现后验证加载、激活、反激活、卸载、cook 和多人端行为。

## 路由

- 查源码位置、模块依赖和符号声明时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 创建新玩法 GameFeature 插件、复用 TPP/GameTest 模板、规划插件源码/Content 目录、Experience、LevelMeta/UserFacingDefinition、PlayerAccount、PlayerGameplayComponent、Spawner 和 UI 类时，先读 `references/gamefeature-plugin-framework.zh-CN.md`。
- GameMode 选择 Experience、关卡 WorldSettings 指定 Experience、Experience 资产创建、`PlayerAccountClass`、`DefaultPawnData`、ActionSet、PawnData、AbilitySet 和 InputTag 闭环时，配合 `../orion-gamemode-experience-framework/SKILL.md`。
- Feature 拥有自己的玩家账户、玩家存档、ArchivePlayer、PlayerGameplayComponent、PlayerSpawningManagerComponent，或需要把玩家组件挂到 PlayerController/GameState 时，配合 `../orion-player-framework/SKILL.md` 和 `../orion-savegame-framework/SKILL.md`。
- Feature 拥有自己的角色蓝图、PawnData、PawnControl、HeroComponent、PlayerStart、CharacterSpawner 或 CharacterSpawnerManager 时，配合 `../orion-character-pawn-framework/SKILL.md`。
- Feature 需要创建队伍、挂载 TeamCreationComponent、分配玩家队伍、按队伍出生、配置 TeamDisplayAsset 或处理 AI 敌友态度时，配合 `../orion-teams-framework/SKILL.md`。
- Feature 通过 Core Experience、Core GameFeatureAction、PawnData、AbilitySet、InputConfig、HUD/UIExtension 或 GamePhase 接入时，配合 `../orion-gamecore-framework/SKILL.md`，并避免直接修改 GameCore。
- Feature 激活时添加输入 mapping context、input config、InputTag 绑定或用户改键可见性，配合 `../orion-input-framework/SKILL.md` 和 `../unreal-enhancedinput/SKILL.md`。
- Feature 激活时添加 GameUI/CommonUI/UMG widget、HUD layout、UIExtension slot widget 或 GameFeature `Add Widgets` action，配合 `../orion-umg/SKILL.md`。
- Feature 提供可交互物品、拾取/开箱/搜索玩法、交互提示 UI、`UIndicatorManagerComponent`、交互输入、交互 AbilitySet 或多人库存交互时，配合 `../orion-inventory-interaction-framework/SKILL.md`。
- Feature 激活/Experience 加载期间需要通过 `ILoadingProcessInterface`、`ULoadingProcessTask` 或加载屏 widget 阻塞流程时，配合 `../orion-loading-screen-framework/SKILL.md`。
- Feature 激活时涉及 input mode、按键提示、back/click 行为或 Action Domain，配合 `../unreal-commoninput/SKILL.md`。
- Feature Action 添加 Ability、AbilitySet、Attribute、GameplayCue、GamePhaseAbility 或 Ability System 相关行为时，配合 `../unreal-gameplayabilities/SKILL.md`。
- Feature 内 gameplay、UI、任务、统计、击杀提示或系统之间需要解耦通信，或要用 GameplayTag channel 收发消息时，配合 `../orion-gameplay-message-router/SKILL.md`。
- Feature 激活时添加 replicated actors、复制组件、RPC、owner-only 状态、Dedicated Server 行为或 MessageRouter 网络桥接时，配合 `../orion-network-replication-framework/SKILL.md`；需要 RepGraph placement 再配合 `../unreal-replicationgraph/SKILL.md`。
- Feature 挂载 Session 组件、使用 `BP_SessionComponent`、创建玩法房间/Lobby、接入 Steam 邀请或处理 CommonSession flow 时，配合 `../orion-online-steam-framework/SKILL.md`。
- 创建或整理 GameFeature 插件内容目录、Experience、Game、Player、System、UI 资产时，配合 `../orion-asset-management/SKILL.md`。
- 修改 AssetManager 扫描、GameFeatureData primary asset 规则、`GameFeaturesSubsystemSettings`、平台/打包相关 ini 时，配合 `../orion-project-config/SKILL.md`。
- Editor template、metadata customization、validation 等编辑器功能必须保持在 Editor 模块或 `WITH_EDITOR` 保护内。

## 约束

- 不假设固定 UE 小版本；以本机源码为准。
- 不写入项目名、项目绝对路径或引擎绝对路径。
- 不复制引擎源码；只记录定位方法、核心类型和验证要点。
