---
name: unreal-savegame-framework
description: "Use when Codex works on this reusable Unreal Engine save/archive framework: SaveGame, Archive, UOrionArchiveManagerSubsystem, UOrionArchiveContext, UOrionArchiveLevelMeta, UOrionSettingsWorldOption, UOrionArchivePlayer, FOrionArchiveHandler, EOrionArchiveType, ArchiveEntry save slot UI, InitializeArchive/StartAutoSave GamePhase abilities, System.Archive.AutoSave messages, world saves, player saves, room/world options, LevelMeta, PlayerAccount archive loading, GameFeature-specific ArchivePlayer classes, or gameplay data that must persist across sessions."
---

# Unreal SaveGame Framework

本 Skill 用于处理框架内存档系统、世界/房间元数据、玩家持久化数据、自动保存阶段，以及它们和 Experience、GameFeature、PlayerAccount、GameSettings、Session、GameplayMessageRouter 的组合。

详细说明：

`references/savegame-framework.zh-CN.md`

## 工作流

1. 先判断持久化数据的归属：世界元数据走 `UOrionArchiveLevelMeta`；房间/世界创建参数走 `UOrionSettingsWorldOption`；玩家长期数据走 `UOrionArchivePlayer` 派生类；纯本机用户偏好走 `UOrionSettingsLocal` / `UOrionSettingsShared`，不要混入世界存档。
2. 先读取真实源码：宿主 Game 模块 `SaveGame`、`Player`、`Settings/Game`、`GameModes`，以及目标 GameFeature 的 `Player` / `Game` 代码；不要凭记忆写存档逻辑。
3. 普通业务代码不要直接散落调用 `UGameplayStatics::SaveGameToSlot`。优先通过 `UOrionArchiveManagerSubsystem`、`UOrionArchiveContext` 和现有 `FOrionArchiveHandler` 链路保存。
4. 新增玩法玩家存档时，创建 `<Feature>ArchivePlayer : UOrionArchivePlayer` 和 `<Feature>PlayerAccount : UOrionPlayerAccount`，在账户构造函数中设置 `PlayerArchiveClass`，并在 Experience 的 `PlayerAccountClass` 指向该账户。
5. 新增世界/房间设置时，优先扩展 `UOrionSettingsWorldOption` 或 `UOrionArchiveLevelMeta` 的访问函数，再用 `UOrionGameWorldSettingRegistry` 绑定 UI 和 `SaveCurrentArchiveByTypes`。
6. 玩法进入后由 GameFeature/Experience 的 GameState 组件启动 `UGamePhaseAbility_InitializeArchive`；不要在 GameMode 里写具体存档业务。
7. 多人游戏默认以服务器为权威保存 gameplay 数据。客户端 UI 通过复制状态、RPC、消息或设置 registry 触发，不直接写服务器玩家账户。
8. 实现后验证新游戏、加载已有存档、缺失玩家存档自动创建、自动保存、退出/加入 Session、PIE 与打包路径、多人端权限和版本兼容。

## 路由

- 查类声明、函数调用、模块依赖、引擎 `USaveGame` / `UGameplayStatics` / `ULocalPlayerSaveGame` 源码时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 判断存档相关代码应该落在核心层、宿主 Game 模块、GameFeature 插件、UI 模块还是配置资产时，配合 `../unreal-framework-architecture/SKILL.md`。
- 存档逻辑触碰 GameCore 只读边界、Experience/PawnData/Core GameFeature Action 或核心系统层时，配合 `../unreal-gamecore-framework/SKILL.md`。
- 玩家存档、玩家账户、`FOrionPlayerID`、`UOrionPlayerInfoComponent`、`UOrionPlayerManager` 或 `PlayerAccountClass` 时，配合 `../unreal-player-framework/SKILL.md`。
- 新建/编辑 Experience、关卡默认 Experience、LevelMetaDefinition、ActionSet、GamePhase 初始化或玩法流程时，配合 `../unreal-gamemode-experience-framework/SKILL.md`。
- 存档业务属于某个玩法切片、要随玩法启停、或要创建玩法专属 ArchivePlayer/PlayerAccount 时，配合 `../unreal-gamefeatures/SKILL.md`。
- 世界/房间设置、设置界面、WorldOption registry、设置保存/应用/取消时，配合 `../unreal-game-settings-framework/SKILL.md` 和 `../unreal-umg/SKILL.md`。
- 自动保存通知、存档完成 toast、跨系统保存事件或 `System.Archive.AutoSave` 监听时，配合 `../unreal-gameplay-message-router/SKILL.md`。
- 存档数据和 replicated state、Server/Client RPC、Dedicated Server、owner-only UI、跨端保存请求相关时，配合 `../unreal-network-replication-framework/SKILL.md`。
- 存档 UI、存档列表、ArchiveEntry、创建/加载/删除按钮、CommonUI 导航时，配合 `../unreal-umg/SKILL.md` 和 `../unreal-commoninput/SKILL.md`。
- 创建或整理存档相关蓝图、Experience、LevelMetaDefinition、GameFeature 内容资产时，配合 `../unreal-asset-management/SKILL.md` 和 `../unreal-mcp-project-toolsets/SKILL.md`。

## 约束

- 不把宿主项目名、绝对路径、用户名、机器路径或真实发布资产路径写进 Skill、示例或文档；只使用模块名、类名、相对路径和占位符。
- `Source/GameCore` 默认只读；存档业务扩展优先写在宿主 Game 模块或 GameFeature runtime module。
- 不在 Pawn、Widget、GameMode 或任意组件里私自创建并保存并行 slot，除非明确是在做完全独立的本机设置或工具临时文件。
- 不把多人权威 gameplay 数据保存在客户端本地设置里；本机偏好和世界/玩家存档必须分开。
