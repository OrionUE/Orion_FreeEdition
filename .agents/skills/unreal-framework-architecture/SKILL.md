---
name: unreal-framework-architecture
description: "Use when Codex needs to orient a reusable Unreal Engine game framework project before coding: root folders, Build/Config/Content/Plugins/Source responsibilities, module ownership, target selection, Build.cs dependency placement, framework modules such as GameCore, GameUI, AnimFramework, BBL, project game/editor modules, GameFeature plugins, core runtime plugins, GameplayMessageRouter, tag-based gameplay messages, asset-folder routing, packaging resources, Build platform app icons, PSO caches, and validation entrypoints."
---

# Unreal Framework Architecture

本 Skill 用于在写 UE C++、Blueprint、插件、GameFeature、UI、配置或构建相关改动前，先判断代码、资产和配置应该落到哪个框架层级。

## 工作流

1. 先读取 `.uproject`、`Source/*.Target.cs`、相关 `*.Build.cs` 和目标插件 `.uplugin`，确认当前项目实际启用的模块、插件、目标和依赖。
2. 如果用户只说“加一个功能”或“写一段 UE 代码”，先读取 `references/unreal-framework-architecture.zh-CN.md` 的模块选型规则。
3. 先选层级再写代码：可复用运行时放框架核心层，游戏特定逻辑放宿主 Game 模块，编辑器工具放 Editor 模块，蓝图桥接放 BBL，玩法切片放 GameFeature 插件。
4. 涉及资产创建、命名或目录时，先路由到资产管理 Skill；不要直接凭目录名创建资产。
5. 涉及具体 UE API、生命周期、反射、委托、网络或引擎版本差异时，先用源码导航 Skill 查真实源码。
6. 实现前确认模块依赖应该加到 Public 还是 Private；实现后按目标类型选择 Editor/Game/Client/Server/Steam 变体进行验证。

## 路由

- 触碰 GameCore、OrionGame 继承层、Experience、PawnData、Core ASC/Ability 或“GameCore 能不能改”时，先配合 `../unreal-gamecore-framework/SKILL.md`。
- 触碰系统层文件夹、AssetManager、GameData、GameInstance、GameSession、WorldSubsystem、GameplayTagStack 或系统蓝图函数库时，配合 `../unreal-system-framework/SKILL.md`。
- 查源码、类层级、include、`Build.cs` 或 `Target.cs` 细节时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 创建、移动、命名、导入或验证 Blueprint / UI / Audio / Cinematics / Movies / GameFeature 内容时，配合 `../unreal-asset-management/SKILL.md`。
- 替换或生成 `Build/Windows/Application.ico`、`Build/Mac/Application.icns`、`Build/Linux/Application.png`、Android launcher icon 或各平台应用 Logo 时，配合 `../unreal-build-platform-icons/SKILL.md`。
- `Content/Movies`、`.bk2`、BinkMedia、启动视频、加载屏视频、Media Framework、MoviePlayer 或 movie staging，配合 `../unreal-movie-media-framework/SKILL.md`。
- `Content/Localization`、`Config/Localization`、`FText`、Localization Dashboard、GatherText、语言设置、`.locres` 或本地化打包 staging，配合 `../unreal-localization-framework/SKILL.md`。
- 模块化玩法、Experience、GameFeatureData、Feature Action 或 `Plugins/GameFeatures` 内容，配合 `../unreal-gamefeatures/SKILL.md`。
- GameplayAbility、ASC、GameplayEffect、AttributeSet、GameplayCue 或 AbilitySet，配合 `../unreal-gameplayabilities/SKILL.md`。
- Teams、`IGenericTeamAgentInterface`、`FGenericTeamId`、TeamSubsystem、TeamInfo、TeamDisplayAsset、AI 敌友态度、按队伍出生或友军伤害规则，配合 `../unreal-teams-framework/SKILL.md`。
- SaveGame、ArchiveManager、世界/玩家存档、LevelMeta、WorldOption、自动保存或存档 UI，配合 `../unreal-savegame-framework/SKILL.md`。
- GameplayMessageRouter、`UGameplayMessageSubsystem`、基于 GameplayTag 的业务消息、跨系统通知或“是否用消息代替委托”，配合 `../unreal-gameplay-message-router/SKILL.md`。
- 背包交互、世界物品拾取/掉落/装备、`GameInventorySystem`、`InteractionSystem`、`JInventorySystem`、交互提示 UI、`IndicatorSystem`、`InputTag.Ability.Interact` 或多人物品交互，配合 `../unreal-inventory-interaction-framework/SKILL.md`。
- 编辑器扩展、EditorEngine、PIE 委托、ToolMenus、DataValidation、CommonEditorExtension 或 `DefaultEditor*.ini` 配置，配合 `../unreal-editor-extension-framework/SKILL.md`。
- 音频插件、`Content/Audio`、`Content/Acoustics`、语音聊天、空间音频、AudioMixer、AudioModulation、MetaSound、`CoreAudioSettings` 或音频平台配置，配合 `../unreal-audio-framework/SKILL.md`。
- 渲染运行时、视频设置、DLSS/NIS/Streamline、RTX、Lumen、Nanite、VSM、Scalability、平台渲染配置、PSO Precaching 或 bundled PSO cache，配合 `../unreal-rendering-framework/SKILL.md`。
- 多人网络复制、RPC、replicated actor/component、NetDriver、FastArray、push model、Iris、GAS 网络语义、owner-only 或 MessageRouter 跨端桥接，配合 `../unreal-network-replication-framework/SKILL.md`；需要 RepGraph placement 再配合 `../unreal-replicationgraph/SKILL.md`。
- OnlineSubsystem、Steam、`OrionSteam`、Session、Lobby、好友邀请、Steam Sockets、Steam Web API、`GameUI/Online` 或 Steam Target/发布配置，配合 `../unreal-online-steam-framework/SKILL.md`。
- `DefaultGame.ini`、平台 `Game.ini`、`GameUserSettings.ini`、`DefaultCrypto.ini`、Packaging、AssetManager、CommonUI/CommonInput platform traits 或“用户可以配置哪些参数”，配合 `../unreal-project-config/SKILL.md`。
- GameSettings 插件、设置注册表、玩家设置页、`UOrionSettingsLocal` / `UOrionSettingsShared`、设置保存/应用/取消、音频/视频/输入/语言等用户可调选项，配合 `../unreal-game-settings-framework/SKILL.md`。
- `CommonInputSystem`、输入配置、InputTag、PawnData InputConfig、GameFeature 输入接入、玩家改键、手柄/键鼠设置或 Steam 手柄排查，配合 `../unreal-input-framework/SKILL.md`。
- UMG、CommonUI、Widget Blueprint、HUD、UI 输入和 UI 资产，配合 `../unreal-umg/SKILL.md`、`../unreal-commoninput/SKILL.md`。
- EnhancedInput、CommonInput、InputCore、网络复制、ReplicationGraph、Niagara、Packaging、MCP 自动化分别路由到对应专项 Skill；本 Skill 只负责先判断它们属于哪个框架层。

## Reference

读取 `references/unreal-framework-architecture.zh-CN.md` 获取完整模块职责、插件地图、目标文件规则、资产/配置落点和验证清单。

## 约束

- 不把游戏名、项目绝对路径、引擎绝对路径、用户名或机器路径写进实现或 Skill。
- 可以保留公开框架模块名、插件名、类名、配置键和相对路径模板。
- 不深扫大型 `Content`，除非任务明确需要某个资产；资产规则由 `unreal-asset-management` 负责。
