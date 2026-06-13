---
name: unreal-system-framework
description: "Use when Codex works on the reusable Unreal Engine system layer in this framework: Source/GameCore/System, host Game module System folders, UCoreAssetManager, startup loading jobs, loading screen GameInstanceSubsystems, UCoreGameData, DefaultPawnData, CoreGameInstance, CoreGameSession, CoreWorldSubsystem, GameplayTagStack, FastArray tag counters, TeamSubsystem-style world subsystems, system Blueprint function libraries, GameInstance-managed runtime managers, AssetManagerClassName, CoreGameDataPath, DefaultPawnData, and deciding whether system code belongs in the protected core layer, host game layer, or a GameFeature plugin."
---

# Unreal System Framework

本 Skill 用于处理框架系统层代码。系统层负责启动加载、全局 DataAsset、GameInstance/Session 生命周期、WorldSubsystem 创建策略、可复制 tag 计数容器，以及少量蓝图可调用的系统桥接。

## 工作流

1. 先读取 `Source/GameCore/System`、`Source/<HostGameModule>/System`、相关 `*.Build.cs`、`.uproject` 和 `Config/DefaultEngine.ini` / `Config/DefaultGame.ini`。
2. 默认不要修改 `Source/GameCore`。系统能力优先从宿主 Game 模块派生或在 GameFeature 插件中接入；只有用户明确允许时才改核心层。
3. 涉及资产加载、启动任务、全局默认数据或 PrimaryAsset 时，先确认 AssetManager 配置、PrimaryAssetTypesToScan、`CoreGameDataPath` 和 `DefaultPawnData`。
4. 涉及 GameInstance、CommonUser、CommonSession、联机邀请或登录后的本地设置加载时，顺着 `UCommonGameInstance -> UCoreGameInstance -> <GameInstance>` 链路读实现。
5. 涉及按世界存在的管理器时，优先考虑派生 `UCoreWorldSubsystem`，并明确 client / dedicated server / prerequisite subsystem 创建策略。
6. 涉及 replicated tag-count 状态时，使用 `FGameplayTagStackContainer` 模式，遵守 `FFastArraySerializer` 的 dirty 标记和顶层 `UPROPERTY` 数组规则。
7. 实现前用源码导航 Skill 查真实类声明、父类生命周期、模块依赖和调用点；实现后按目标模块或 Target 编译验证。

## 路由

- 查类、函数、变量、父类、include、`Build.cs`、引擎源码或插件源码时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 判断系统代码应该放在核心层、宿主 Game 模块、Editor 模块还是 GameFeature 插件时，配合 `../unreal-framework-architecture/SKILL.md`。
- 触碰 GameCore 保护边界、Experience、PawnData、Core Ability、GameFeature Action 或核心只读规则时，配合 `../unreal-gamecore-framework/SKILL.md`。
- 修改 `AssetManagerClassName`、`GameInstanceClass`、`CoreGameDataPath`、`DefaultPawnData`、PrimaryAssetTypesToScan 或平台配置时，配合 `../unreal-project-config/SKILL.md`。
- 系统层实现涉及 TeamSubsystem、TeamInfo、TeamDisplayAsset、GameplayTagStack 团队状态、队伍创建组件或 AI 敌友态度时，配合 `../unreal-teams-framework/SKILL.md`。
- 系统层实现涉及 replicated state、`FGameplayTagStackContainer`、FastArray、NetDriver、RPC 或 Dedicated Server 行为时，配合 `../unreal-network-replication-framework/SKILL.md`。
- 系统层实现涉及渲染 manager/subsystem、DLSS、RTX、PSO 或视频设置时，配合 `../unreal-rendering-framework/SKILL.md`。
- 系统层启动加载、GameInstanceSubsystem 加载屏、`ILoadingProcessInterface`、`ULoadingProcessTask` 或加载屏卡住排查，配合 `../unreal-loading-screen-framework/SKILL.md`。
- 系统层实现涉及 GameInstance 级存档管理、ArchiveManager、世界/玩家存档、自动保存 phase、存档消息或 Session 退出清理时，配合 `../unreal-savegame-framework/SKILL.md`。
- 系统层实现涉及 Session、CommonSession、OnlineSubsystem、Steam、好友邀请或 Lobby 时，配合 `../unreal-online-steam-framework/SKILL.md`。
- 系统事件需要跨模块、多接收者或 UI 通知时，优先评估 `../unreal-gameplay-message-router/SKILL.md`；需要 Ability 事件时再配合 `../unreal-gameplayabilities/SKILL.md`。
- 系统层由 GameFeature 激活、挂载组件或注册玩法能力时，配合 `../unreal-gamefeatures/SKILL.md`。
- 创建、移动或命名 System 蓝图、GameData、Experience 或 UI 资产时，配合 `../unreal-asset-management/SKILL.md`。

## Reference

读取 `references/system-framework.zh-CN.md` 获取系统层类职责、配置合同、常见扩展点、错误模式和验证清单。

## 硬规则

- 不把宿主项目名、绝对路径、用户名、机器路径或真实发布资产路径写进 Skill、示例或文档；使用 `<ProjectRoot>`、`<EngineRoot>`、`<HostGameModule>`、`<GameInstanceClass>` 等占位。
- `Source/GameCore` 默认只读；不要把游戏玩法、关卡特例、UI 细节或平台发布特例写进核心系统层。
- 不在 tick、高频回调或 UI 热路径里随意同步加载资产；启动期和全局常驻资产才使用 AssetManager 的同步保活工具。
- 蓝图静态函数库只做薄桥接；复杂业务流程应放入 subsystem、component、GameFeature、GameplayMessageRouter 或 GameplayAbility 链路。
