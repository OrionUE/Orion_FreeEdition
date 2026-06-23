# Unreal Online / Steam 框架指南

## 目录

- 使用边界
- 源码入口
- OrionSteam 插件模块图
- Steam 蓝图接口
- Session 运行链路
- GameFeature 与 Session 组件
- Online UI 落点
- 配置清单
- Target 与模块依赖
- 实现流程
- 发布检查
- 常见错误

## 使用边界

本 Skill 处理 OnlineSubsystem、Steam 平台集成、Session、Lobby、Invite、Friends、Steam Sockets、Steam Web API、在线 UI 和 Steam 发布配置。

不要用本 Skill 替代 Gameplay 复制或 ReplicationGraph。Steam NetDriver 只决定网络驱动和传输层，Actor 是否复制、相关性、dormancy、owner-only 等仍走 ReplicationGraph/GAS/Gameplay 规则。

## 源码入口

处理在线功能前先读取这些相对路径：

| 位置 | 作用 |
| --- | --- |
| `Plugins/OrionSteam/OrionSteam.uplugin` | Steam 插件启用模块、加载阶段、平台白名单和依赖插件。 |
| `Plugins/OrionSteam/Source/OrionOnlineSubsystemSteam` | 自定义 OnlineSubsystem 实现、session、identity、friends、voice、auth、leaderboard、external UI 等接口。 |
| `Plugins/OrionSteam/Source/OrionSteamSDKAPI` | Steam SDK Blueprint Function Library、async action 和 Steam 数据结构。 |
| `Plugins/OrionSteam/Source/OrionSteamSockets` | Steam sockets NetDriver 和 NetConnection。 |
| `Plugins/OrionSteam/Source/OrionSteamWebAPI` | Steam Web API GameInstance subsystem、settings 和服务端 HTTP 接口封装。 |
| `Source/GameCore/**/Session` | 框架 session 抽象、search result wrapper、screening condition 和 Experience host request。 |
| `Source/OrionGame/**/Session` | 游戏层 session component、game session、邀请处理和退出当前世界逻辑。 |
| `Source/GameUI/**/Online` | 好友、邀请、在线列表等通用 UI。 |
| `Content/System/Session/BP_SessionComponent` | 默认 Session 组件蓝图子类；通常由 GameFeature 挂载到 GameState。 |
| `Config/Custom/Steam/DefaultEngine.ini` | Steam 专用 OnlineSubsystem、NetDriver、auth packet handler、CommonSession 默认行为；由 Steam Target 的 `CustomConfig=Steam` 选择。 |

需要确认引擎行为时，对照 UE 源码：

- `OnlineSubsystem`：`FOnlineSubsystemModule`、`IOnlineSubsystem`、`IOnlineSession`、`IOnlineIdentity`、`IOnlineFriends`。
- `OnlineSubsystemSteam`：Steam 官方 subsystem 的 init、AppID、Steam API、session/lobby 行为参考。
- `SteamSockets`：NetDriver、connection class、socket subsystem 和 packet flow。

## OrionSteam 插件模块图

`OrionSteam` 插件通常分成这些模块：

| 模块 | 类型 | 用途 |
| --- | --- | --- |
| `OrionSteamShared` | Runtime | 共享类型、编译宏和 Steam helper。 |
| `OrionOnlineSubsystemSteam` | Runtime | 自定义 OnlineSubsystem，平台 service name 为 `OrionSteam`。 |
| `OrionSteamSDKAPI` | Runtime | 蓝图可调用 Steam SDK wrapper、async action、Steam ID/session/lobby helper。 |
| `OrionSteamWebAPI` | Runtime | Steam Web API subsystem 和 settings。 |
| `OrionSteamSockets` | Runtime | Steam sockets NetDriver。 |

只依赖需要的模块：

- C++ 调 Steam 蓝图库或 Steam SDK wrapper：依赖 `OrionSteamSDKAPI`。
- 需要 subsystem 类型或 session Steam internals：依赖 `OrionOnlineSubsystemSteam`。
- 只配置或使用 NetDriver：通常不需要新增 C++ 依赖，先确认 ini。
- Runtime 模块不要无故依赖 Web API；Web API key 是服务端敏感配置。

## Steam 蓝图接口

常用 Blueprint API 位于 `OrionSteamSDKAPI`：

| 类型 | 典型能力 |
| --- | --- |
| `UOrionSteamSessionLibrary` | 发送 Steam session 邀请，例如 `SendGameSessionInviteToFriend(LocalUserNum, FriendId)`。 |
| `UOrionSteamUserLibrary` | 本地 Steam ID、字符串转 Steam ID、用户基础信息。 |
| `UOrionSteamFriendsLibrary` | 好友数量、按 index 取好友、昵称、在线状态、小/中/大头像。 |
| `UOrionSteamUtilities` | 监听/停止 session invite accepted/received、构造 session setting/search setting、读取好友列表、relay ping、语音 helper、踢人、判断玩家是否在 session、Steam ID make/break/equal/valid。 |
| `SteamMatchmakingAsyncActions` | 创建/搜索/加入/销毁/更新 lobby 和 session，例如 `CreateOrionSteamSession`、`FindOrionSteamSessions`、`JoinOrionSteamSession`。 |

使用约束：

1. Blueprint 节点的 LocalUserNum 通常从 0 开始，但多人本地用户或平台 user flow 要查调用点。
2. Steam ID 字符串不要当作普通显示名；UI 显示用 Friends library 取 PersonaName 和头像。
3. 异步创建/搜索/加入 session 要绑定 completion delegate 或 async action output，不要在同帧假设已完成。
4. 邀请回调最终应进入框架 Session 组件或 CommonSession 流程，而不是 UI 直接 travel。

## Session 运行链路

核心抽象：

- `UCoreSessionComponent` 是 GameState component，定义 Blueprint 扩展点：`CreateSession`、`JoinSession`、`JoinInvitedSession`、`QuickStart`、`QuitSession`。
- `UOrionGameSessionComponent` 继承 `UCoreSessionComponent`。当前游戏层默认实现会在加入邀请或退出 session 前调用世界退出/清理逻辑。
- `Content/System/Session/BP_SessionComponent` 是默认蓝图子类，用于把 session 创建、搜索、筛选、加入等具体流程开放给蓝图和 GameFeature。
- `FCoreSessionResult` 包装底层 search result；启用 Steam 时可承载 Steam session result。
- `USessionSearchResultSteam` 把 Steam search result 暴露成 `UCommonSession_SearchResult`，供 CommonSession/UI 读取 server name、description、ping、open connections、玩家数和自定义 setting。
- `USessionScreeningCondition` 和 `UScreeningConditionComposite` 用于搜索结果过滤，Composite 可按 AND/OR 组合。

常见流程：

1. Experience 或玩法入口选择一个 user-facing experience definition。
2. Definition 构造 `UCommonSession_HostSessionRequest`，填充 map、mode、extra args、lobby/presence/online mode、max players。
3. `UCommonSessionSubsystem` 创建、Host、Join、CleanUp 或 SeamlessTravel。
4. Steam subsystem 根据 session settings 走 lobby、internet 或 LAN 路径。
5. 邀请进入监听 Ability 或系统事件后，包装成 `USessionSearchResultSteam`，再交给 `UCoreSessionComponent::JoinInvitedSession`。
6. `UOrionGameSessionComponent` 负责先退出当前世界，后续蓝图或 CommonSession 流程继续加入目标 session。

CommonSession 使用 PartyBeacon 预留连接时，`EPartyReservationResult::ReservationDuplicate` 应按 `ReservationAccepted` 一样视为加入成功，并继续 `NotifyJoinSessionComplete` / travel 流程。它通常表示客户端已经有相同 reservation，不应被 UI 当成普通 join 失败。

实现 Session 时优先改这些层：

- 玩法差异：GameFeature 插件中的 Experience、GameMode glue、Feature Action 或 BP Session 组件子类。
- UI 展示：`GameUI/Online` 或 GameFeature `Content/UI`。
- 搜索条件：`USessionScreeningCondition` 派生类或蓝图条件资产。
- 基础框架抽象：只有用户明确允许时才改 `Source/GameCore`。

## GameFeature 与 Session 组件

Session 组件是 GameState component，默认蓝图子类位于 `Content/System/Session/BP_SessionComponent`。框架期望通过 GameFeature 挂载，使不同玩法可以独立启用在线流程。

创建新玩法时：

1. 在 `Plugins/GameFeatures/<FeatureName>` 中放玩法代码和资产。
2. 玩法内容目录使用 `Content/Experiences`、`Content/Game`、`Content/Player`、`Content/System`、`Content/UI`。
3. 如果玩法需要独立的 session 创建/筛选/加入逻辑，创建 feature 内的 BP session component 子类，并由 GameFeature 挂载到 GameState。
4. 如果只复用默认逻辑，引用全局 `Content/System/Session/BP_SessionComponent`。
5. 反激活时确认组件、委托、UI extension、输入和 session invite listener 成对清理。

## Online UI 落点

通用在线 UI 写在 `Source/GameUI/**/Online` 或 `Content/UI`：

- 好友列表、好友条目、邀请按钮、在线状态、头像加载、通用 session 浏览器。
- 好友数据通常通过项目 FriendManager subsystem 读取，再调用 Steam friends wrapper 获取头像、昵称和 persona state。
- 邀请好友按钮应调用 `UOrionSteamSessionLibrary::SendGameSessionInviteToFriend` 或更高层 wrapper。

玩法专属在线 UI 写在：

- `Plugins/GameFeatures/<FeatureName>/Content/UI`：玩法房间、模式专属 lobby、匹配参数面板。
- 需要通用控件时复用 GameUI，不要复制一份 Steam 好友逻辑。

UMG/CommonUI 修改继续读取 `../unreal-umg/SKILL.md`、`../unreal-commoninput/SKILL.md` 和资产命名规则。

## 配置清单

Steam 配置集中在 `Config/Custom/Steam/DefaultEngine.ini` 的 Steam block。根 `Config/DefaultEngine.ini` 只放公共 Engine 配置；不要为了 Steam 包把 Steam 专用 block 写回根配置。发布、调试或平台切换时重点看：

```ini
[OrionOnlineSubsystemSteam]
bEnabled=True
SteamDevAppId=<DevelopmentSteamAppId>
SteamAppId=<ShippingSteamAppId>
Port=7777
GameServerQueryPort=27015
bVACEnabled=True
bUseSteamNetworking=True
bAllowP2PPacketRelay=True
bRelaunchInSteam=False
bDisableSteamRelaunchInShipping=False
P2PConnectionTimeout=90

[OnlineSubsystem]
DefaultPlatformService=OrionSteam
NativePlatformService=OrionSteam
+AdditionalModulesToLoad=OrionOnlineSubsystemSteam
+ModuleRedirects=(OrionSteam=OrionOnlineSubsystemSteam)

[/Script/Engine.Engine]
!NetDriverDefinitions=ClearArray
+NetDriverDefinitions=(DefName="GameNetDriver",DriverClassName="/Script/OrionSteamSockets.OrionSteamSocketsNetDriver",DriverClassNameFallback="/Script/OnlineSubsystemUtils.IpNetDriver")

[PacketHandlerComponents]
+Components=OrionOnlineSubsystemSteam.OrionOnlineSteamAuthComponentModuleInterface
```

字段含义：

- `SteamDevAppId`：非 Shipping 或开发运行使用的 AppID。发布前确认不要误用测试 AppID。
- `SteamAppId`：Shipping 使用的正式 AppID。发布前必须替换为目标 Steamworks AppID。
- `DefaultPlatformService` / `NativePlatformService`：应指向 `OrionSteam`，让 OnlineSubsystem 走自定义 service。
- `AdditionalModulesToLoad`：确保自定义 Steam subsystem 模块被加载。
- `ModuleRedirects`：用于旧 subsystem 名到新模块名的兼容路由。
- `NetDriverDefinitions`：Steam socket NetDriver；fallback 是 IP driver。
- `PacketHandlerComponents`：Steam auth packet handler。
- `bUseLobbiesIfAvailable` / CommonSession 默认值：影响 lobby/presence/session 路径，必须和创建 session 的 settings 对齐。

`OrionSteamWebAPI` settings 通常在 Engine config 域。`Key` 是 Steamworks Web API publisher key，视为秘密；不要提交真实 key 到公开 Skill、示例、日志或回复。`AppID`、`DevSteamID`、sandbox/dev mode 要按环境区分。

## Target 与模块依赖

Steam 目标常见特征：

- 派生 Game/Client/Server target。
- 设置 Steam 专用 `CustomConfig`。
- 添加 `WITH_STEAM=1` 或等价全局定义。
- 如果 Steam target 里使用 `EnablePlugins` / `DisablePlugins` 做 target-specific 插件启用，必须按 unique build environment 编译；安装版引擎的普通 shared Visual Studio `Development Game` 入口不能编译这种 target。
- Dedicated Server target 要确认 Steam game server init、query port、server product name、server description 和 auth 行为。

模块依赖常见规则：

- 项目模块的 `PublicDependencyModuleNames` 默认只允许 `"Core"`、`"CoreUObject"`、`"Engine"`。Steam、CommonSession、OnlineSubsystem、UI、GAS、GameFeature 等其他依赖一律放 `PrivateDependencyModuleNames`，除非用户本次明确授权改变 Public API 边界。
- 如果 Steam wrapper 的 Public 头暴露 Steam 类型或需要 Steam include，也不要为了依赖位置规则删除 `FSteamSessionResult`、Blueprint API、wrapper overload 或业务逻辑；依赖仍放 `PrivateDependencyModuleNames`，然后以编译验证为准。
- `GameCore` 只保留框架抽象和必要 Online/CommonSession 类型；默认不要新增业务逻辑。
- `OrionGame` 放游戏层 session component、邀请 ability、退出当前世界、FriendManager 等 glue。
- `GameUI` 放在线 UI；若直接用 Steam wrapper，需要在对应模块的 `PrivateDependencyModuleNames` 中声明 `OrionSteamSDKAPI` 或在线 subsystem 模块。
- `BBL` 只做蓝图桥接；不要把 session 搜索/加入业务写厚。
- GameFeature runtime module 可以依赖需要的框架模块和 Steam SDK wrapper，但不要依赖 Editor 模块。

## 实现流程

### 添加一个 Steam 好友邀请按钮

1. 在 `GameUI/Online` 或玩法 `Content/UI` 里定位目标 Widget。
2. 列表项持有框架 PlayerID 或 Steam ID wrapper，不持有显示名当唯一标识。
3. 点击时调用上层 FriendManager 或 `UOrionSteamSessionLibrary::SendGameSessionInviteToFriend`。
4. UI 只负责发起邀请和显示结果；invite accepted/received 的监听和 join flow 交给系统/Session 组件。

### 添加一个 Session 搜索筛选条件

1. 如果是通用条件，创建 `USessionScreeningCondition` 派生类或蓝图条件。
2. 如果是玩法专属条件，放 GameFeature 插件内容或 runtime module。
3. 从 `UCommonSession_SearchResult` 读字段，Steam 专属字段通过 `USessionSearchResultSteam` 的 getter 或 setting 查询。
4. 不在 UI 里硬编码 session setting key；集中到筛选条件或配置数据。

### 添加一个玩法专属在线房间

1. 在对应 GameFeature 插件建立 `Content/UI` 和 `Content/Experiences` 资产。
2. Experience 或 user-facing definition 构造 host request。
3. 如果需要自定义组件，派生或蓝图继承 `UOrionGameSessionComponent`，由 GameFeature 挂载到 GameState。
4. UI 调用 Session component 或 CommonSession，不直接拼 travel URL。
5. 验证 host、find、join、destroy、invite、return-to-menu。

### 修改 Steam 发布配置

1. 读取 `Config/Custom/Steam/DefaultEngine.ini` 的 Steam block 和平台覆盖 `Config/<Platform>/<Platform>Engine.ini`。
2. 确认 `SteamDevAppId`、`SteamAppId`、query port、VAC、P2P relay、relaunch 和 server 信息。
3. 确认 Steam target 是否定义 `CustomConfig = "Steam"` 和 `WITH_STEAM`，Shipping 是否使用正确 AppID。
4. 确认 Steam 打包命令或 Profile 会让 UAT/Stage 看到 `CustomConfig=Steam`，并验证包内 UFS manifest 包含 `Config/Custom/Steam/DefaultEngine.ini`。
5. 确认 Steam DLL staging、NetDriver、packet handler 和 Web API key 不泄漏。
6. 做 Development Steam build 和 Shipping Steam build 分别验证。

## 发布检查

发布前必须提醒用户确认：

- `SteamDevAppId` 仍可用于开发测试，但 `SteamAppId` 必须换成正式 AppID。
- Dedicated Server 的 product name、game description、version、query port 与 Steamworks 后台一致。
- `bRelaunchInSteam` 和 `bDisableSteamRelaunchInShipping` 的组合符合发行策略。
- `OrionSteamWebAPISettings::Key` 不在公开仓库、Skill、日志或客户端可读 config 中暴露。
- Shipping 包内 `steam_appid.txt` 行为符合插件代码：非 Shipping 或特定配置可能会写该文件，正式发布要确认 Steam 启动路径。
- OnlineSubsystem service 是 `OrionSteam`，不是引擎默认 `Steam`，除非有明确迁移计划。
- Steam sockets NetDriver 和 fallback driver 均存在，Dedicated Server 与 Client 使用相同协议预期。
- Session create/find/join/destroy、invite accepted/received、friend avatar/name、return to menu 至少在两客户端或一客户端一 dedicated server 流程验证。

## 常见错误

### 忘记替换 Steam AppID

现象：开发环境能启动，发布到 Steam 后 overlay、session、invite 或 server browser 行为不对。

修复：发布前检查 `Config/Custom/Steam/DefaultEngine.ini` 中的 `SteamDevAppId` 与 `SteamAppId`；Shipping 使用正式 AppID，开发使用测试 AppID。

### 使用错误 OnlineSubsystem 名称

现象：`IOnlineSubsystem::Get()` 返回 null 或走了引擎默认 Steam subsystem，配置里的 module redirect 没生效。

修复：确认 `DefaultPlatformService=OrionSteam`、`NativePlatformService=OrionSteam`、`AdditionalModulesToLoad=OrionOnlineSubsystemSteam`，并读插件模块注册代码。

### GameFeature 使用 Steam 类型但未声明依赖

现象：打包或编译某个 GameFeature Runtime 模块时，间接包含到 Steam ID、Steam 邀请或 Session 相关头后报 `fatal error C1083`，提示找不到 `OrionSteamSDKAPI` 头文件。

原因：该玩法插件的 C++ 模块实际使用了 Steam SDK API 类型或包含链，但插件自己的 `Build.cs` 没有声明 `OrionSteamSDKAPI`。新增玩法依赖时不要把单个玩法需要的依赖上提到宿主 Game 模块；但这不代表可以删除或移动宿主模块中已经存在的 Steam 依赖，除非用户明确要求。

修复：在对应 `Plugins/GameFeatures/<FeatureName>/Source/<FeatureRuntime>/<FeatureRuntime>.Build.cs` 的 `PrivateDependencyModuleNames` 中添加 `OrionSteamSDKAPI`。GameFeature 玩法内使用 Steam API 时默认使用 Private dependency。

验证：重新编译或打包该 GameFeature，相关模块不再报缺少 `OrionSteamSDKAPI` 头文件。

### Steam Target 中启用插件但用安装版引擎编译

现象：Steam Game/Server target 在 `*.Target.cs` 中调用 `EnablePlugins.Add(...)` 或 `DisablePlugins.Add(...)`，从安装版引擎的 Visual Studio `Development Game` 入口编译时报：

```text
Explicitly enabling and disabling plugins for a target is only supported when using a unique build environment
```

给 UBT 追加 `-UniqueBuildEnvironment` 后，如果仍使用安装版引擎，会继续报：

```text
Targets with a unique build environment cannot be built with an installed engine.
```

原因：安装版引擎的普通 Game target 默认走 shared build environment，不能通过 target receipt 动态启用/禁用插件；而 `EnablePlugins` / `DisablePlugins` 需要 unique build environment。`bOverrideBuildEnvironment = true` 可以覆盖部分 target property 校验，但不能让安装版引擎支持 unique target build。

修复：

- 若必须保留 target-specific `EnablePlugins` / `DisablePlugins` 写法，用同版本源码版引擎编译，并给 UBT 传 `-UniqueBuildEnvironment`。
- 若必须使用安装版引擎直接从 Visual Studio 编译，把插件启用放回 `.uproject` 或平台/配置描述里，不要在非 Editor Game/Server target 中动态启用插件。
- 打包验证时，如果 BuildCookRun 需要构建这种 Steam target，也要确保底层 UBT 使用同版本源码版引擎并带 `-UniqueBuildEnvironment`；只追加 `-AdditionalBuildOptions="-UniqueBuildEnvironment"` 到安装版引擎不足以解决。

验证：日志不再出现上述两个 Target rules 错误，并进入 UHT、C++ 编译或链接阶段；最终以 UBT `Result: Succeeded` 或 UAT `BUILD SUCCESSFUL` 为准。

### UI 直接 travel

现象：加入邀请或房间时当前世界未清理，loading/front-end state 卡住或 session 残留。

修复：UI 调用 Session component/CommonSession，让 `UOrionGameSessionComponent` 和系统 flow 先退出当前世界，再加入目标 session。

### 把 ReservationDuplicate 当成加入失败

现象：客户端已经有 party reservation 时，PartyBeacon 返回 `ReservationDuplicate`，UI 或流程却按失败处理，导致不会 travel 到目标 session。

修复：在 CommonSession / beacon completion 中把 `ReservationDuplicate` 和 `ReservationAccepted` 一样视为成功，再触发 join complete。只有真正拒绝、超时或满员等结果才走失败提示。

### 把 Web API key 放到公开配置

现象：客户端包或公开仓库包含 Steam publisher key。

修复：把 Web API key 视为服务端秘密；公开 Skill 和示例只写字段名，不写真实值。

### GameCore 被写入玩法特例

现象：某个玩法的 session 筛选、UI 或模式规则进入 `Source/GameCore`，导致框架不可复用。

修复：把玩法特例移到 GameFeature、OrionGame 派生层、蓝图子类或数据资产。GameCore 默认只读。

