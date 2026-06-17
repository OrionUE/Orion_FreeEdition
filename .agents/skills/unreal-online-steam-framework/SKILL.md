---
name: unreal-online-steam-framework
description: Use when Codex works on Unreal Engine online, Steam, OnlineSubsystem, sessions, lobbies, invites, friends, Steam SDK Blueprint APIs, Steam sockets, Steam Web API, UOrionGameSessionComponent, BP_SessionComponent, Content/System/Session, GameUI Online screens, CommonSessionSubsystem, SteamDevAppId, SteamAppId, Config/Custom/Steam/DefaultEngine.ini Steam blocks, or Steam-specific Client/Server/Game target behavior in this reusable framework.
---

# Unreal Online Steam Framework

本 Skill 用于处理框架内 OnlineSubsystem、Steam 插件、Session 组件、Steam 蓝图接口、在线 UI、Steam 配置和发布检查。

## 工作流

1. 先读取真实源码和配置：`Plugins/OrionSteam`、`Source/GameCore/**/Session`、`Source/OrionGame/**/Session`、`Source/GameUI/**/Online`、相关 `*.Build.cs`、`*.Target.cs`、`Config/Custom/Steam/DefaultEngine.ini` 的 Steam block；只有公共 Engine 配置才回到根 `Config/DefaultEngine.ini`。
2. 再对照 UE OnlineSubsystem 源码：确认 `FOnlineSubsystemModule`、`IOnlineSession`、Steam subsystem、Steam sockets、async delegate 和 config 读取行为。
3. Session 逻辑默认不要改 `Source/GameCore`；优先从 `UOrionGameSessionComponent` 派生、修改蓝图子类、或在 `Plugins/GameFeatures/<FeatureName>` 中通过 GameFeature 挂载/调用。
4. Steam/Online UI 写在 `GameUI` 的 Online 分层；玩法特定在线 UI 放对应 GameFeature 插件的 `Content/UI`，但通用好友、邀请、会话列表控件优先复用 GameUI。
5. 配置变更必须区分开发、Shipping、客户端、Dedicated Server 和平台覆盖；发布前提醒用户替换 `SteamDevAppId`、`SteamAppId`、服务端产品信息和 Web API key。
6. 完成后验证模块依赖、Steam target 宏、NetDriver 定义、session 创建/搜索/加入/销毁、邀请回调、UI 入口和打包配置。

## 路由

- 查类、函数、模块依赖、调用点或 UE OnlineSubsystem 源码时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 判断代码落在 GameCore、OrionGame、GameUI、BBL、OrionSteam 插件还是 GameFeature 插件时，配合 `../unreal-framework-architecture/SKILL.md`。
- 触碰 `UCoreSessionComponent`、`UOrionGameSessionComponent`、Experience、GameState 组件或 GameCore 只读边界时，配合 `../unreal-gamecore-framework/SKILL.md`。
- 触碰 `FOrionPlayerID`、玩家 Steam ID、玩家头像/昵称、好友条目、玩家账户或玩家信息组件时，配合 `../unreal-player-framework/SKILL.md`。
- GameFeature 挂载 Session 组件、创建玩法专属 session UI 或按玩法隔离在线行为时，配合 `../unreal-gamefeatures/SKILL.md`。
- `Config/Custom/Steam/DefaultEngine.ini` Steam block、`SteamDevAppId`、`SteamAppId`、NetDriver、Web API settings、平台 config 或发布配置，配合 `../unreal-project-config/SKILL.md`。
- SteamSockets NetDriver、PacketHandler、RPC/属性复制、listen/dedicated server 网络行为或 packaged multiplayer 验证，配合 `../unreal-network-replication-framework/SKILL.md`。
- 好友列表、邀请按钮、在线面板、CommonUI/UMG Widget 或 `GameUI/Online` 修改，配合 `../unreal-umg/SKILL.md` 和 `../unreal-commoninput/SKILL.md`。
- 修改 `Content/UI/Online` 的 Friends、Invite、Session Browser Widget Blueprint 或相关 GameUI Online 基类时，同时读取 `../unreal-ui-blueprint-framework/SKILL.md`。
- 创建 `BP_SessionComponent` 子类、在线 UI 资产或 GameFeature 内容资产时，配合 `../unreal-asset-management/SKILL.md`。
- Steam 打包、Shipping 目标、Dedicated Server、Steam DLL staging、NetDriver 或 AppID 发布检查，配合 `../unreal-packaging/SKILL.md`。

## Reference

读取 `references/online-steam-framework.zh-CN.md` 获取 Steam 插件模块图、Blueprint API、Session 运行链路、配置清单、代码落点、发布检查和常见错误。

## 硬规则

- 不把宿主项目名、绝对路径、用户名、本机引擎路径、真实 Steam AppID、Web API key 或服务器密钥写进 Skill、文档、日志或示例。
- 可以保留公开框架模块名、插件名、类名、函数名、配置 section、字段名和相对路径模板。
- `Source/GameCore` 默认只读；除非用户明确允许，否则不要改 GameCore 的 Session 基类或核心流程。
