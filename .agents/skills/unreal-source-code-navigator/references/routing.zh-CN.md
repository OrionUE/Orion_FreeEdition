# Skill 路由

本文件用于把一个宽泛的 UE 开发请求拆成多个可协同的 Skill。入口原则是：先用 `unreal-source-code-navigator` 定位源码和模块，再按领域读取更专门的 Skill 或 reference。

## 自动联动原则

- `description` 决定 Skill 是否会被自动触发；描述里要覆盖用户可能说的中文和英文关键词。
- `SKILL.md` 和 `references/*.zh-CN.md` 负责二级路由；当任务命中某个领域时，读取相邻 Skill 的 `SKILL.md`。
- 一个任务可以同时使用多个 Skill。不要把 CommonInput、EnhancedInput、UMG、角色移动混成一个系统。
- 如果没有专门 Skill，就回到源码导航脚本，从本机源码即时学习。

## 常见请求路由

### 模块 / 插件 / Source Root 定位

使用顺序：

1. `../../unreal-source-index/SKILL.md`：生成或查询 Engine module、Engine plugin、plugin module、`Build.cs`、`.uplugin` 和 source root 索引。
2. `../../orion-framework-architecture/SKILL.md`：当问题是项目根目录、框架模块职责、插件组职责、Target 变体、代码落点或 Build/Config/Content/Plugins/Source 分层时，先用它做架构选型。
3. `../../orion-gamecore-framework/SKILL.md`：当问题触碰 GameCore、OrionGame 继承层、Experience、PawnData、Core ASC、Core Ability、Core GameFeature Action 或“是否能改 GameCore”时，先用它确认只读边界和扩展点。
4. `unreal-source-code-navigator`：打开真实源码，确认声明、依赖、include 和调用样例。
5. 如果命中具体领域，再读取对应专项 Skill。

索引用于缩小搜索范围，不替代源码确认。

### 第三方库插件 / External SDK 接入

使用顺序：

1. `../../unreal-thirdparty-plugin/SKILL.md`：处理 UE 第三方库插件、`ModuleType.External`、`Source/ThirdParty` 声明层、插件根 `ThirdParty` 实体库、include/lib/bin/runtime 目录、`RuntimeDependencies`、DLL/so/dylib staging、许可证、符号和第三方库打包缺失。
2. `../../orion-framework-architecture/SKILL.md`：判断第三方能力应该是独立插件、项目模块、Runtime/Editor/Program 模块，还是只作为已有插件的 External 依赖。
3. `../../orion-code-style/SKILL.md`：修改 `.Build.cs`、`.Target.cs`、`.uplugin`、脚本或 C++ 桥接代码前读取。
4. `unreal-source-code-navigator`：查当前引擎 `ModuleRules`、插件描述符、平台加载和真实模块依赖。
5. `../../orion-packaging/SKILL.md`：第三方运行库需要 cook/stage/package 验证时使用。

重点：`Source/ThirdParty/<SDKName>` 只放 External 模块声明层；第三方头、lib、dll、pak、dat、模型、license 和 runtime 资源默认放插件根 `ThirdParty/<SDKName>`，不要把库实体放进 `Binaries` 当源码源头。

### Visual Studio 工程生成 / 引擎升级工程文件

使用顺序：

1. `../../unreal-vs-project-generation/SKILL.md`：处理 Generate Visual Studio project files 无效果、升级 UE 后 `.sln` 仍指向旧引擎、UnrealVersionSelector 绑定、UBT `-ProjectFiles`、`Log_GPF.txt`、`.uplugin` / `.uproject` JSON 编码错误、stale `Intermediate/ProjectFiles`、UE 5.8 Target 升级提示和生成后编辑器启动阻断。
2. `../../orion-project-config/SKILL.md`：确认 `.uproject` `EngineAssociation`、插件启用项、Target 和项目配置。
3. `../../orion-framework-architecture/SKILL.md`：确认 Target、模块和插件分层是否导致生成工程时读取错误描述文件或规则程序集。
4. `unreal-source-code-navigator`：需要查 UBT、TargetRules、引擎源码或模块依赖时使用。

### 项目清理 / gitignore 生成物清理

使用顺序：

1. `../../orion-project-cleanup/SKILL.md`：按 `.gitignore` dry-run 或执行生成物清理，处理 `.vs`、`.idea`、`Binaries`、`Intermediate`、`Saved`、`DerivedDataCache`、`Build`、`__pycache__`、ignored 编译产物和 IDE 缓存，同时保护 `Docs/`、非生成目录中的用户文档/模型/贴图/媒体，以及非空 `Saved/OrionUE`。
2. `../../orion-framework-architecture/SKILL.md`：当用户不确定 `Build`、`Config`、`Content`、`Plugins`、`Source` 目录职责，或清理范围可能碰到正式资源时使用。
3. `../../orion-packaging/SKILL.md`：如果清理是为了打包、Steam 上传、发布包验证或包体迁移，先确认 package 输出和 staging 目录，不要把正式发布素材误当生成物。
4. `../../orion-asset-management/SKILL.md`：当用户要求删除、移动或整理正式资产时使用；不要用清理脚本处理资产归档。

### 框架模块用法 / 生成 Skill

使用顺序：

1. `../../orion-framework-skill-authoring/SKILL.md`：把框架作者口述的模块用法整理成可发布 Skill，并强制检查通用化、CRLF 和路由接入。
2. `../../orion-framework-architecture/SKILL.md`：先确认该模块属于核心框架、UI、动画、Blueprint bridge、宿主 Game/Editor 模块、核心插件还是 GameFeature 插件。
3. `../../orion-gamecore-framework/SKILL.md`：如果模块以 GameCore 为底层、从 OrionGame 派生或需要说明 GameCore protected base layer 规则，先读取它。
4. `unreal-source-code-navigator`：读取真实项目、插件和引擎源码，确认 API、模块依赖、生命周期和调用样例。
5. 如果模块命中输入、GameFeature、GAS、多人网络复制、ReplicationGraph、MCP 资产创建等领域，再读取对应专项 Skill。

每个新生成的 Skill 都必须写入自身 `## 路由` 小节，并接入本文件或相邻领域 Skill 的路由。

### 系统层 / AssetManager / GameInstance / WorldSubsystem

使用顺序：

1. `../../orion-system-framework/SKILL.md`：处理 `Source/GameCore/System`、宿主 Game 模块 `System` 文件夹、`UCoreAssetManager`、启动加载 jobs、`UCoreGameData`、`UCoreGameInstance`、`ACoreGameSession`、`UCoreWorldSubsystem`、`FGameplayTagStackContainer`、系统蓝图函数库、GameInstance 管理的 runtime manager、`AssetManagerClassName`、`CoreGameDataPath` 和 `DefaultPawnData`。
2. `../../orion-gamecore-framework/SKILL.md`：确认 GameCore protected base layer、Experience/PawnData fallback、Core GameFeature Action、Session 或 GamePhase 是否受核心只读规则约束。
3. `../../orion-project-config/SKILL.md`：修改 `GameInstanceClass`、`AssetManagerClassName`、PrimaryAsset 扫描、GameData/PawnData 路径或平台配置时使用。
4. `unreal-source-code-navigator`：打开真实项目、插件和引擎源码，确认父类生命周期、`UCLASS(Config=...)`、FastArray、模块依赖和调用点。
5. 命中渲染、音频、在线、输入、UI、GAS、GameFeature 或消息系统时，继续读取对应专项 Skill。

重点：系统层是框架基础设施，不是具体玩法逻辑默认落点。不要为了某个玩法直接改核心 `System` 文件夹。

### GameMode / Experience / 关卡玩法配置

使用顺序：

1. `../../orion-gamemode-experience-framework/SKILL.md`：处理 GameMode 不承载业务逻辑、Experience 驱动关卡玩法、`UCoreExperienceDefinition`、宿主 Game 的 ExperienceDefinition 派生类、WorldSettings `DefaultGameplayExperience`、Experience PrimaryAssetId 选择、ExperienceManagerComponent 加载链、`PlayerAccountClass`、`DefaultPawnData`、ActionSet、PawnData、AbilitySet、InputAction/InputTag 闭环、自动创建 Experience 和把 Experience 指定到关卡。
2. `../../orion-gamecore-framework/SKILL.md`：确认 GameCore 只读边界、Core GameMode/GameState/PawnData/ASC/Input 初始化链和宿主 Game 派生扩展点。
3. `../../orion-gamefeatures/SKILL.md`：Experience 启用 GameFeature、组合 ActionSet、添加组件/输入/UI/Ability 或玩法插件内容时使用。
4. `../../unreal-gameplayabilities/SKILL.md` 和 `../../orion-input-framework/SKILL.md`：AbilitySet、GA、InputAction、InputConfig 和 InputTag 关系时使用。
5. `../../orion-mcp-project-toolsets/SKILL.md`：通过 MCP 创建或编辑 Experience、ActionSet、AbilitySet、InputAction、InputConfig 或关卡 WorldSettings 时使用。
6. `../../orion-asset-management/SKILL.md` 和 `../../orion-project-config/SKILL.md`：创建资产、选择目录、命名、修改 AssetManager scan 或 WorldSettings class 时使用。

重点：关卡玩法配置优先落在 Experience；不要把具体玩法规则加到 GameMode。

### 玩家框架 / PlayerAccount / PlayerGameplayComponent

使用顺序：

1. `../../orion-player-framework/SKILL.md`：处理 `FOrionPlayerID`、`UOrionUserSubsystem`、`UOrionPlayerInfoComponent`、`UOrionPlayerManager`、`UOrionPlayerAccount`、`UOrionPlayerData`、`UOrionPlayerGameplayComponent`、玩家存档、玩家资料、好友头像/昵称、玩家生成管理器、PlayerController/GameState 组件挂载、Experience `PlayerAccountClass` 和玩法专属玩家组件。
2. `../../orion-gamecore-framework/SKILL.md`：触碰 `ACorePlayerController`、`ACorePlayerState`、ASC、PawnData、PawnExtension、PawnControl 或核心只读边界时使用。
3. `../../orion-gamemode-experience-framework/SKILL.md`：Experience 设置 `PlayerAccountClass`、组合 ActionSet 或把玩家组件纳入关卡玩法时使用。
4. `../../orion-gamefeatures/SKILL.md`：玩家组件通过 GameFeature Add Components 激活/反激活，或玩法插件拥有自己的玩家账户、玩家 GameplayComponent、出生管理器时使用。
5. `../../orion-online-steam-framework/SKILL.md`：玩家 ID 来自 Steam、好友列表、玩家头像、昵称、邀请或在线身份时使用。
6. `../../orion-network-replication-framework/SKILL.md`：PlayerState、PlayerController、PlayerInfoComponent、PlayerGameplayComponent、玩家 ID、owner-only 通知或 Dedicated Server 行为涉及复制/RPC 时使用。
7. `../../orion-mcp-project-toolsets/SKILL.md`：通过 MCP 给 Experience/ActionSet 添加 PlayerController 或 GameState 组件挂载条目时使用。

重点：玩家业务优先用账户类、InfoComponent、PlayerGameplayComponent、SpawningManagerComponent 和 GameFeature 组合，不要把玩法专属玩家状态写进 GameMode 或核心 Player 基类。

### 存档 / Archive / SaveGame

使用顺序：

1. `../../orion-savegame-framework/SKILL.md`：处理 `SaveGame`、`Archive`、`UOrionArchiveManagerSubsystem`、`UOrionArchiveContext`、`UOrionArchiveLevelMeta`、`UOrionSettingsWorldOption`、`UOrionArchivePlayer`、`FOrionArchiveHandler`、`EOrionArchiveType`、存档列表、世界存档、玩家存档、LevelMeta、WorldOption、自动保存、`System.Archive.AutoSave`、PlayerAccount 加载/创建存档、GameFeature 专属 ArchivePlayer 和持久化字段归属。
2. `unreal-source-code-navigator`：打开宿主 Game 模块 `SaveGame`、`Player`、`Settings/Game`、`GameModes`、`Session`，目标 GameFeature 的 `Player` / `Game` 文件夹，以及 UE `USaveGame`、`UGameplayStatics`、`ULocalPlayerSaveGame` 源码。
3. `../../orion-player-framework/SKILL.md`：玩家 ID、PlayerAccount、PlayerManager、PlayerInfoComponent 或玩家账户和存档组合时使用。
4. `../../orion-gamemode-experience-framework/SKILL.md` 和 `../../orion-gamefeatures/SKILL.md`：新游戏、LevelMetaDefinition、Experience `PlayerAccountClass`、玩法启动 InitializeArchive、GameFeature 专属存档接入时使用。
5. `../../orion-game-settings-framework/SKILL.md` 和 `../../orion-umg/SKILL.md`：WorldOption/LevelMeta 设置页、存档列表 UI、创建/加载/删除按钮时使用。
6. `../../orion-network-replication-framework/SKILL.md`：存档数据和 server authority、RPC、replicated state、Dedicated Server 或客户端 UI 请求相关时使用。

重点：世界/玩家 gameplay 存档优先走 ArchiveManager 和 handler 链路；不要在 Pawn、Widget、GameMode 或任意 gameplay component 中私自拼 slot 并调用 `UGameplayStatics::SaveGameToSlot`。

### 角色 / PawnData / PawnControl / 角色生成

使用顺序：

1. `../../orion-character-pawn-framework/SKILL.md`：处理 `Source/GameCore/Character`、宿主 Game 模块 `Character` 文件夹、`UCorePawnData`、`UCorePawnExtensionComponent`、`UCorePawnControlComponent`、`ACoreCharacter`、`AOrionCharacter`、`BP_CharacterBase`、角色蓝图创建、PawnData 的 `PawnClass`/`AbilitySets`/`InputConfig`/`TagRelationshipMapping`、`UOrionHeroComponent`、`AOrionPlayerController`、`UOrionPlayerSpawningManagerComponent`、`AOrionPlayerStart`、`UOrionCharacterSpawnerManager`、`AOrionCharacterSpawner` 和角色出生槽位。
2. `../../orion-gamecore-framework/SKILL.md`：确认 GameCore protected base layer、PawnExtension/PawnControl 初始化、ASC avatar、PlayerState PawnData 和核心只读边界。
3. `../../orion-gamemode-experience-framework/SKILL.md`：Experience `DefaultPawnData`、关卡 WorldSettings、PawnData/AbilitySet/InputTag 闭环。
4. `../../orion-player-framework/SKILL.md`：PlayerController 信息组件、玩家 gameplay component、玩家账户、PlayerController/GameState 组件挂载。
5. `../../orion-input-framework/SKILL.md` 和 `../../unreal-gameplayabilities/SKILL.md`：角色输入、GA 输入、AbilitySet 和 PawnData 能力授予。
6. `../../orion-network-replication-framework/SKILL.md`：角色/Pawn/Controller 的 replicated movement、动作状态、视角状态、PawnData、PawnExtension、Server RPC、owner skip 或 simulated-only 行为时使用。
7. `../../orion-asset-management/SKILL.md` 和 `../../orion-mcp-project-toolsets/SKILL.md`：创建角色蓝图、PawnData、InputConfig、AbilitySet、Experience 或 Spawner/PlayerStart 资产时使用。

重点：正式角色蓝图默认从框架角色蓝图基类派生；GameMode 只通过 Experience/PawnData 选择 PawnClass，不承载具体角色业务。

### Teams / GenericTeam / AI 敌友态度

使用顺序：

1. `../../orion-teams-framework/SKILL.md`：处理 `Source/OrionGame/Teams`、`IGenericTeamAgentInterface`、`FGenericTeamId`、`IOrionTeamAgentInterface`、`UOrionTeamSubsystem`、TeamInfo、TeamDisplayAsset、TeamCreationComponent、AI Perception affiliation、`GetTeamAttitudeTowards`、友军伤害、玩家队伍归属和 CharacterSpawner 队伍出生。
2. `unreal-source-code-navigator`：打开项目 Teams 源码、相关 `Build.cs`、引擎 `AIModule` 的 GenericTeam/Perception 源码和真实调用点，确认当前实现。
3. `../../orion-gamecore-framework/SKILL.md` 和 `../../orion-system-framework/SKILL.md`：Teams 触碰 CoreWorldSubsystem、GameplayTagStack 或核心只读边界时使用。
4. `../../orion-player-framework/SKILL.md`、`../../orion-character-pawn-framework/SKILL.md`、`../../orion-gamefeatures/SKILL.md` 和 `../../unreal-gameplayabilities/SKILL.md`：按队伍分配玩家、角色出生、GameFeature 创建队伍、GA/伤害敌友判断时分别使用。
5. `../../orion-network-replication-framework/SKILL.md`：TeamInfo、TeamTags、TeamDisplayAsset、公开/私有队伍状态、队伍 owner-only 数据或按队伍可见性涉及复制/RPC 时使用。
6. `../../orion-asset-management/SKILL.md`：创建 TeamDisplayAsset、TeamInfo 蓝图、Spawner、队伍 UI 或 GameFeature 内容资产时使用。

重点：实现团队接口后必须覆盖 `GetGenericTeamId`；只声明接口不会让 AI Perception 或通用敌友判断看到正确队伍。

### 蓝图迁移 / CompileAllBlueprints / 运行启动崩溃

使用顺序：

1. `../../unreal-blueprint-migration-repair/SKILL.md`：处理从其他 UE 工程迁移后蓝图大量损坏、Widget Blueprint 编译失败、`CompileAllBlueprints` 崩溃、缺失 macro graph、orphaned pin、missing function/variable/struct/cast、wildcard pin、stale UMG widget variable GUID、CoreRedirect、GameMode 默认类丢失和蓝图编译清零后运行启动仍崩溃的问题。
2. `../../orion-mcp-workflow/SKILL.md` 和 `../../orion-mcp-project-toolsets/SKILL.md`：通过 MCP 描述蓝图、删除坏节点、修复 Widget 变量 GUID map、设置蓝图 CDO 默认值和保存资产。
3. `../../orion-umg/SKILL.md`：当错误资产是 Widget Blueprint、CommonUI、加载屏、前端菜单或 UI 图节点时使用。
4. `../../orion-gamemode-experience-framework/SKILL.md` 和 `../../orion-gamecore-framework/SKILL.md`：当运行启动崩溃落在 GameMode、GameState、ExperienceManagerComponent、WorldSettings 或 Experience 选择链路时使用。
5. 如果调用栈落在音频、在线、输入、GAS、复制或渲染代码，转入对应领域 Skill；不要把非蓝图运行时崩溃归入蓝图资产修复。

重点：不要通过修改引擎源码掩盖迁移坏资产。先让全量蓝图编译达到 `0 errors`，再用默认运行地图和主要玩法地图验证启动无崩溃。

### 资产创建 / 蓝图命名 / Content 目录

### 资产创建 / 蓝图命名 / Content 目录

使用顺序：

1. `../../orion-asset-management/SKILL.md`：确认资产前缀、BaseAssetName、Variant、Suffix、Content 目录、GameFeatures 插件内容子目录、覆盖策略和保存验证。
2. 如果通过 MCP 创建或保存资产，读取 `../../orion-mcp-workflow/SKILL.md`。
3. 如果是 UMG、Niagara、GameFeatures、GAS、输入等领域资产，再读取对应专项 Skill。

所有正式 Blueprint、Widget Blueprint、Animation Blueprint、Gameplay Ability、音频、视频、本地化、Splash 启动图、UI、System 和 GameFeature 内容创建前都先走本路由。

### Build 平台应用图标 / App Icon / Launcher Icon

使用顺序：

1. `../../orion-build-platform-icons/SKILL.md`：处理源 Logo 转换、`Build/Windows/Application.ico`、`Build/Mac/Application.icns`、`Build/Linux/Application.png`、Android `res/drawable*/icon.png`、`icon_bg.png`、launcher icon 和平台应用 Logo 替换。
2. `../../orion-framework-architecture/SKILL.md`：如果问题是 `Build` 目录职责、是否应提交构建资源、或和 `Config` / `Content` / `Source` 分层有关，先确认架构边界。
3. `../../orion-packaging/SKILL.md`：如果问题发生在打包、staging、发布包验证或平台包内图标未更新，继续使用打包验证流程。

重点：`Build/<Platform>` 应用图标不是普通 `Content/UI` 图标，也不是 `Content/Splash` 启动图。不要把 `Application.ico`、`Application.icns` 或 Android launcher icon 放进 Content。

### 本地化 / Localization / FText / GatherText

使用顺序：

1. `../../orion-localization-framework/SKILL.md`：处理 `Content/Localization`、`Config/Localization`、Localization Dashboard、`FText`、`LOCTEXT`、`NSLOCTEXT`、`INVTEXT`、`FText::FromString`、`FText::Format`、`FTextLocalizationManager`、`FInternationalization`、`GatherText`、manifest/archive/PO/locres/locmeta、`EngineOverrides`、新增语言、语言设置、`CulturesToStage` 和打包后的本地化缺失。
2. `unreal-source-code-navigator`：打开 UE `TextLocalizationManager`、`LocalizationResourceTextSource`、`GatherTextCommandlet`、`GenerateTextLocalizationResourceCommandlet`、目标模块 UI/Settings 源码和调用点，确认当前引擎版本行为。
3. `../../orion-project-config/SKILL.md`：修改 `DefaultEditor.ini` localization target、`Config/Localization/*.ini`、`DefaultGame.ini` packaging culture 或 `DefaultEngine.ini` `[Internationalization]` 路径时使用。
4. `../../orion-asset-management/SKILL.md`：创建或整理 `Content/Localization` 目标、UMG/DataTable/GameFeature 可翻译资产时使用。
5. `../../orion-umg/SKILL.md`：UI 文案、CommonUI 按钮文本、RichText、TextBlock、Widget Blueprint 文本或本地化预览时使用。
6. `../../orion-packaging/SKILL.md`：打包后语言不可选、`.locres` 未 staged、culture cook、chunk 或 localization target staging 问题时使用。

重点：玩家可见的作者预设文本默认必须是可收集 `FText`；`FText::FromString` 只用于用户输入、好友名、存档名、设备名等运行时数据。

### Movie / Bink / Media Framework / Content Movies

使用顺序：

1. `../../orion-movie-media-framework/SKILL.md`：处理 `Content/Movies`、`.bk2`、`.mp4`、`.mov`、Bink 转换、启动视频、加载屏视频、MoviePlayer、BinkMedia、Media Framework、Media Texture、`bSkipMovies`、`UFSMovies`、`NonUFSMovies` 和 packaged movie staging。
2. `../../orion-asset-management/SKILL.md`：创建、命名、移动或导入视频源文件、Bink/Media 资产时确认目录和前缀。
3. `../../orion-project-config/SKILL.md`：修改 `MoviePlayerSettings`、`StartupMovies`、`BinkMoviePlayerSettings` 或 `ProjectPackagingSettings` 时确认配置层。
4. `../../orion-packaging/SKILL.md`：排查打包后视频缺失、UFS/NonUFS staging、Pak/IoStore 或 dedicated server 行为。
5. `../../orion-umg/SKILL.md`、`../../orion-audio-framework/SKILL.md`：视频进入 UI 或有媒体音频/字幕联动时继续读取。

重点：用户添加自己的视频时，最终 runtime 文件默认放 `Content/Movies`；发布、启动视频和加载屏视频优先推荐 `.bk2`，`.bk2` 由当前引擎附带的 Bink 转换工具生成。

### Loading Screen / CommonLoadingScreen / PreLoadScreen

使用顺序：

1. `../../orion-loading-screen-framework/SKILL.md`：处理 `CommonLoadingScreen`、`CommonStartupLoadingScreen`、`PreLoadScreen`、`ULoadingScreenManager`、`UOrionLoadingScreenManager`、`UGameLoadingScreenManager`、`ILoadingProcessInterface`、`ULoadingProcessTask`、`ILoadingPercentInterface`、过渡关卡加载进度、loading screen widget、加载屏卡住、shader 编译加载 UI、加载屏音频 mix 和 `CommonLoadingScreenSettings`。
2. `unreal-source-code-navigator`：打开插件源码、GameUI/Frontend 源码、GameCore Experience/Player/Pawn 调用点和 UE `PreLoadScreen` / `MoviePlayer` / world load delegate 源码确认生命周期。
3. `../../orion-umg/SKILL.md`：修改加载屏 Widget Blueprint、CommonUI 内容、进度条、动画结束回调和 UI 树时使用。
4. `../../orion-project-config/SKILL.md`：修改 `DefaultGame.ini` 的 CommonLoadingScreen settings、加载屏 Widget 路径、ZOrder、hold/heartbeat/progress 参数或 loading screen control bus mix 时使用。
5. `../../orion-rendering-framework/SKILL.md`：加载屏任务涉及 PSO、ShaderPipelineCache、启动 shader 编译百分比或前端 benchmark flow 时使用。
6. `../../orion-movie-media-framework/SKILL.md` 和 `../../orion-audio-framework/SKILL.md`：加载屏使用 Bink/Media 视频或需要处理媒体音频/LoadingScreen ControlBusMix 时使用。

重点：不要绕过 `ULoadingScreenManager` 手动 `AddToViewport` 做全局加载屏；否则会丢失输入阻断、可见性委托、shader batch mode、world rendering 控制和音频 mix 联动。

### GameplayMessageRouter / Tag 消息系统 / 委托替代判断

使用顺序：

1. `../../orion-gameplay-message-router/SKILL.md`：处理 `GameplayMessageRouter`、`GameplayMessageRuntime`、`UGameplayMessageSubsystem`、`BroadcastMessage`、`RegisterListener`、`FGameplayMessageListenerHandle`、`EGameplayMessageMatch`、`FCoreVerbMessage`、`FGameplayVerbMessage`、`FGameplayNotificationMessage`、Blueprint `Listen For Gameplay Messages`、基于 GameplayTag 的消息收发，以及“是否比委托更好”的判断。
2. `unreal-source-code-navigator`：打开插件源码、目标模块 `Build.cs`、tag 定义、payload 结构体和实际调用点，确认当前工程 API。
3. `../../orion-gamecore-framework/SKILL.md`：消息触碰 GameCore、Core Ability failure、Core verb message、GameState/PlayerState 消息桥接或核心只读边界时使用。
4. `../../unreal-gameplayabilities/SKILL.md`：消息来自 Ability、AttributeSet、GameplayEffect、GameplayCue、GameplayEvent、prediction 或 target data 时使用。
5. `../../orion-gamefeatures/SKILL.md`：GameFeature 插件之间、feature 激活/反激活或玩法切片需要解耦通信时使用。
6. `../../orion-network-replication-framework/SKILL.md`：消息需要跨 server/client、owner-only、multicast、Client RPC、replicated fast array 或 replicated actor bridge 时使用；GameplayMessageRouter 不是网络复制系统。
7. `../../unreal-replicationgraph/SKILL.md`：只有消息桥接 actor 需要 RepGraph relevancy 或 graph placement 时使用。
8. `../../orion-umg/SKILL.md`：UI toast、击杀提示、错误提示、通知 feed 或 Widget 监听 message 时使用。

重点：跨系统、多接收者、模块化玩法和 UI 通知优先考虑 GameplayMessageRouter；一对一强耦合、需要返回值、严格顺序或高频回调仍优先委托、接口或直接调用。

### 背包 / 物品交互 / IndicatorSystem

使用顺序：

1. `../../orion-inventory-interaction-framework/SKILL.md`：处理 `GameInventorySystem`、`InteractionSystem`、`JInventorySystem`、`IInteractableTarget`、`AInteractionItem`、`FInteractionOption`、`FInteractionQuery`、`UAbilityTask_GrantNearbyInteraction`、`UAbilityTask_WaitForInteractableTargets`、`GameplayAbility_Interact`、`GA_InventoryAbility`、`UJInventoryComponent`、`AItemActor`、`UItemInstance`、`UIndicatorManagerComponent`、`UIndicatorDescriptor`、`UUI_InteractionWithKeyBrush`、`InputTag.Ability.Interact`、`Event.Inventory.*`、`TraceChannel_Interaction`、`InteractiveItem`、物品拾取、开箱、搜索、装备、掉落、交互提示 UI 和多人交互。
2. `unreal-source-code-navigator`：打开交互插件、库存插件、目标 GameFeature、GameUI IndicatorSystem、玩家交互 GA、库存组件、物品 Actor、目标 Ability 和相关 `Build.cs`。
3. `../../unreal-gameplayabilities/SKILL.md`：交互 Ability、GameplayEvent、AbilitySet、InputTag、prediction 或 target ability 触发时使用。
4. `../../orion-input-framework/SKILL.md`：交互输入、`IA_Interact`、InputConfig、IMC、改键或 CommonInput glyph 关系时使用。
5. `../../orion-umg/SKILL.md` 和 `../../unreal-commoninput/SKILL.md`：交互提示 Widget、按键图标、CommonUI/UMG 布局或 UIExtension 接入时使用。
6. `../../orion-gamefeatures/SKILL.md` 和 `../../orion-gamemode-experience-framework/SKILL.md`：交互能力、IndicatorManager、输入和 UI 由 Experience/GameFeature 组合时使用。
7. `../../orion-network-replication-framework/SKILL.md`：拾取、掉落、装备、开箱、容器搜索、ItemInstance/Container replicated subobject、服务器权威校验或 Dedicated Server 行为时使用。
8. `../../orion-asset-management/SKILL.md`：创建交互物品、GA、WBP、InputAction、AbilitySet、PawnData、Experience 或 GameFeature 内容资产时使用。

重点：交互 UI 和客户端 Trace 只负责发现/表现；多人库存修改必须走服务器权威库存组件或服务器 Ability 路径。

### 编辑器扩展 / Editor module / CommonEditorExtension

使用顺序：

1. `../../orion-editor-extension-framework/SKILL.md`：处理 Editor module、自定义 `UUnrealEdEngine`、PIE 委托、CommonEditorExtension、ToolMenus、Common Maps、DataValidation、GameplayCue 编辑器委托和 `DefaultEditor*.ini`。
2. `unreal-source-code-navigator`：打开真实项目、插件和引擎源码，确认父类生命周期、委托广播时机、include 和 `Build.cs` 依赖。
3. `../../orion-framework-architecture/SKILL.md`：判断代码应该落在项目 Editor module、Editor plugin module、Runtime module 还是配置文件。
4. 如果编辑器工具会创建、保存、移动或验证资产，再读取 `../../orion-asset-management/SKILL.md` 和 `../../orion-mcp-project-toolsets/SKILL.md`。
5. 如果扩展 GameplayCue、Ability 资产或 GameFeature 内容，继续读取 `../../unreal-gameplayabilities/SKILL.md` 和 `../../orion-gamefeatures/SKILL.md`。

重点检查 Editor-only 依赖是否泄漏到 Runtime 模块，ToolMenus/Slate style/委托注册和注销是否对称，editor ini 是否写入了个人机器状态。

### 音频 / 语音聊天 / 空间音频

使用顺序：

1. `../../orion-audio-framework/SKILL.md`：处理 `Content/Audio`、`Content/Acoustics`、SoundClass、Concurrency、Submix、AudioModulation、AudioMixer、MetaSound、CoreAudioSettings、OrionVoiceChat、ProjectAcoustics、SteamAudio、空间音频、混响、遮挡和输入/输出设备。
2. `../../orion-steam-audio/SKILL.md`：处理 SteamAudio / Steam Audio 插件源码、HRTF、Spatialization、Reverb、Occlusion、ProbeVolume、动态几何、烘焙、Radeon Rays、TrueAudio Next、OpenCL 或 `SteamAudio.GPUAudioAcceleration`。
3. `../../orion-project-acoustics/SKILL.md`：处理 ProjectAcoustics 插件源码、SourceDataOverride、虚拟扬声器、`AcousticsAudioPluginListener`、`OnListenerUpdated`、audio thread/Actor 生命周期或 `AActor::SetActorLocation` 崩溃。
4. `unreal-source-code-navigator`：打开真实项目插件、GameCore/OrionGame 音频源码和 UE `AudioExtensions`、`AudioMixer`、`AudioModulation`、`Metasound` 源码，确认接口和生命周期。
5. `../../orion-asset-management/SKILL.md`：创建、移动或命名音频、MetaSound、ProjectAcoustics、SteamAudio、Submix、ControlBus 等资产。
6. `../../orion-gamecore-framework/SKILL.md`：触碰 `UCoreAudioSettings`、GameCore 音频配置或核心只读边界时使用。
7. `../../orion-game-settings-framework/SKILL.md`：音量、音频设备、后台音频、HRTF、HDR/LDR 音频设置页或保存/应用逻辑时使用。
8. 如果语音聊天由 Ability、输入或 GameFeature 激活，继续读取 `../../unreal-gameplayabilities/SKILL.md`、`../../unreal-enhancedinput/SKILL.md`、`../../orion-gamefeatures/SKILL.md`。

重点先确认平台音频插件组合，不要把 SteamAudio Spatialization、SteamAudio Reverb/Occlusion、ProjectAcoustics SourceDataOverride/Reverb 混为一谈。

### 渲染 / DLSS / PSO / Scalability

使用顺序：

1. `../../unreal-render-commands/SKILL.md`：查 UE 5.8 渲染 CVar/Console Command 全量表、功能分类表、前缀表、`RendererSettings`、`DefaultScalability`、平台命令、启动前生效和运行时可改标记。
2. `../../orion-rendering-framework/SKILL.md`：处理 `OrionGameRenderManager`、`OrionGameRenderSubsystem`、`GameSettingRegistry_Video.cpp`、`UGameDLSSSubsystem`、`UOrionSettingsLocal`、DLSS/NIS/Streamline、RTX、Lumen、Nanite、VSM、`DefaultEngine.ini`、平台 `Engine.ini`、`DefaultScalability.ini`、PSO Precaching 和启动 shader 编译流程。
3. `../../orion-pso-caching/SKILL.md`：处理 bundled PSO 全流程、`CollectedPSOs`、`PipelineCaches`、`-logPSO`、`-clearPSODriverCache`、`.rec.upipelinecache`、`.shk`、`.spc`、所有地图/画质自动漫游收集、转换和重新打包验证。
4. `unreal-source-code-navigator`：打开真实项目、DLSS 插件和 UE `ShaderPipelineCache`、`PipelineStateCache`、`PSOPrecache`、`RendererSettings` 源码，确认接口、CVar 和生命周期。
5. `../../orion-project-config/SKILL.md`：修改或解释渲染 ini、平台配置、DLSS settings、Scalability、用户可调默认值时使用。
6. `../../orion-packaging/SKILL.md`：PSO `.spc` 注入 `Build/<Platform>/PipelineCaches`、重新 cook/package 或验证打包日志时使用。
7. `../../orion-framework-architecture/SKILL.md`：判断渲染代码应落在 Game 模块、Editor 模块、GameFeature 插件还是配置层时使用。
8. `../../orion-game-settings-framework/SKILL.md`：视频设置页、`GameSettingRegistry_Video.cpp`、`UOrionSettingsLocal` 玩家可调渲染字段或设置保存/应用/取消时使用。

重点区分运行时 PSO Precaching 和打包注入的 bundled PSO cache；用户说“打包并收集着色器”时不要只读渲染 Skill，必须进入 `orion-pso-caching` 的全流程。DLSS Upscale 启用时，抗锯齿方法由项目封装固定为 TSR。

### 在线 / Steam / Session / 好友邀请

使用顺序：

1. `../../orion-online-steam-framework/SKILL.md`：处理 `OrionSteam`、`OrionOnlineSubsystemSteam`、Steam SDK Blueprint API、Steam Sockets、Steam Web API、`UCoreSessionComponent`、`UOrionGameSessionComponent`、`BP_SessionComponent`、CommonSession、好友列表、邀请、Lobby、Session 创建/搜索/加入/销毁、`GameUI/Online` 和 Steam 发布配置。
2. `unreal-source-code-navigator`：打开真实项目、插件和 UE `OnlineSubsystem`、`OnlineSubsystemSteam`、`SteamSockets` 源码，确认模块注册、异步委托、session interface、NetDriver 和 AppID 读取行为。
3. `../../orion-gamecore-framework/SKILL.md`：触碰 GameCore Session 抽象、Experience host request、GameState component 或核心只读边界时使用。
4. `../../orion-gamefeatures/SKILL.md`：Session 组件由 GameFeature 挂载、玩法独立在线房间、玩法专属 Lobby UI 或 feature-scoped Session 规则时使用。
5. `../../orion-project-config/SKILL.md`：修改或解释 `Config/Custom/Steam/DefaultEngine.ini` Steam block、`SteamDevAppId`、`SteamAppId`、NetDriver、packet handler、Web API settings 或平台覆盖时使用。
6. `../../orion-network-replication-framework/SKILL.md`：SteamSockets NetDriver、PacketHandler、RPC/属性复制、listen/dedicated server 网络行为或 packaged multiplayer 验证时使用。
7. `../../orion-umg/SKILL.md`、`../../unreal-commoninput/SKILL.md`、`../../orion-asset-management/SKILL.md`：创建或修改在线 UI、好友条目、邀请按钮、Widget Blueprint 和 UI 资产路径时使用。
8. `../../orion-packaging/SKILL.md`：Steam Shipping/Development 包、Dedicated Server、Steam DLL staging、AppID 发布检查或 Steam target 验证时使用。

重点不要把 UI 直接 travel 当作加入 session 的默认做法；邀请和加入应进入框架 Session component/CommonSession 流程。

### 项目配置 / 平台配置 / Crypto

使用顺序：

1. `../../orion-project-config/SKILL.md`：处理 `Config/DefaultGame.ini`、平台 `Config/<Platform>/<Platform>Game.ini`、`<Platform>GameUserSettings.ini`、`Config/DefaultCrypto.ini`、`ProjectPackagingSettings`、`CryptoKeysSettings`、AssetManager、CommonInput/CommonUI platform traits、`UOrionSettingsLocal`、设置注册表和“用户可以配置哪些参数”。
2. `unreal-source-code-navigator`：从 ini section 反查 `UCLASS(Config=...)`、`UPROPERTY(Config)`、`UPlatformSettings`、`UDeveloperSettings`、`UGameUserSettings` 子类和实际读取点。
3. `../../orion-packaging/SKILL.md`：当配置影响 cook、Pak、IoStore、chunk、压缩、文化、本地化 staging、ini denylist、UFS staging、Crypto 打包验证时使用。
4. `../../orion-game-settings-framework/SKILL.md`：玩家可调设置、`GameUserSettingsClassName`、Local/Shared settings、registry 或设置 UI 保存逻辑时使用。
5. 命中 CommonInput/CommonUI、GameCore、音频、UI 或 GameFeature 字段时，继续读取对应专项 Skill。

重点不要输出 `DefaultCrypto.ini` 中的真实 AES/RSA 值；只描述字段含义、是否启用和打包影响。

### 项目输入框架 / CommonInputSystem / 改键设置

使用顺序：

1. `../../orion-input-framework/SKILL.md`：处理 `CommonInputSystem`、`UInputSystemConfig`、`UInputSystemComponent`、`InputTag`、PawnData InputConfig、`CorePawnControlComponent` / `OrionPawnControlComponent`、GameFeature 输入 Action、键鼠/手柄设置页、玩家改键、手柄图标、输入资产路径和 Steam 手柄排查。
2. `unreal-source-code-navigator`：读取真实项目、插件和引擎源码，确认类声明、模块依赖、配置字段和调用点。
3. `../../orion-gamecore-framework/SKILL.md`：确认 GameCore protected base layer、PawnData、PawnControl、ASC、AbilitySet 和 Experience 链路。
4. `../../unreal-enhancedinput/SKILL.md`、`../../unreal-commoninput/SKILL.md`、`../../unreal-inputcore/SKILL.md`：分别处理 EnhancedInput、CommonInput 和底层 `FKey` 细节。
5. `../../orion-gamefeatures/SKILL.md` 和 `../../unreal-gameplayabilities/SKILL.md`：处理 feature 激活/反激活与 Ability 输入。
6. `../../orion-game-settings-framework/SKILL.md`：玩家改键设置页、`UGameSettingInput`、Gamepad/MouseAndKeyboard setting registry、Apply/Cancel 和保存逻辑时使用。
7. `../../orion-project-config/SKILL.md` 和 `../../orion-asset-management/SKILL.md`：处理 ini 配置、平台 controller data、IA/IMC/InputData 资产命名与路径。

重点不要只改 `InputConfig` 就认为输入完整接入；IMC 必须加载、添加并在需要改键时注册到 user settings。

### 角色输入移动

使用顺序：

1. `unreal-source-code-navigator`：定位项目模块、基类、MovementComponent、Pawn/Character/Controller 代码。
2. `../../orion-input-framework/SKILL.md`：如果项目使用 `CommonInputSystem`、`InputTag`、PawnData InputConfig、PawnControl 或 GameFeature 输入接入，先确认框架链路。
3. `../../unreal-inputcore/SKILL.md`：仅在涉及 `FKey` 分类、legacy input stack、`UPlayerInput` 或 `UInputComponent` 底层兼容时读取。
4. `../../unreal-enhancedinput/SKILL.md`：处理 `UInputAction`、`UInputMappingContext`、trigger、modifier、binding。
5. `engine-class-patterns.zh-CN.md`：确认 `ACharacter`、`APawn`、`APlayerController`、`UCharacterMovementComponent` 生命周期和职责。

不要默认使用 `unreal-commoninput`。CommonInput 不是角色移动输入的主系统。

### GameUI / UMG / CommonUI / UIExtension

使用顺序：

1. `../../orion-gameui/SKILL.md`：处理 GameUI 运行时框架、`Source/GameUI`、CommonUI 层栈、GameUI Subsystem、`UUI_ActivatableWidget`、`UGameHUDLayout`、UIExtension、GameFeature Add Widgets、主题、通用弹窗队列、奖励/公告/广告/HTML 弹窗和 OrionBrowser HTML/CSS 嵌入。
2. `../../orion-umg/SKILL.md`：处理 UMG、Widget Blueprint、WidgetTree、BindWidget、UI C++ 基类、按钮、列表、标签页、主题、弹窗页面外观和 Widget Blueprint 自动化。
3. `unreal-source-code-navigator`：定位 UMG、CommonUI、CommonGame、UIExtension、模块依赖和 Widget 基类源码。
4. 修改编辑器启动图、游戏启动图、Splash、EdSplash 或 `Content/Splash` 图片时，读取 `../../orion-asset-management/SKILL.md`；如果用户提供源图并要求裁剪、转换、覆盖或删除旧 `.uasset`，读取 `../../splash-image-conversion/SKILL.md` 生成 `Splash` / `EdSplash` 的 PNG/BMP 四件套。
5. `../../unreal-commoninput/SKILL.md`：处理输入模式、输入设备状态、click/back action、按键图标、Action Domain。
6. `../../unreal-enhancedinput/SKILL.md`：只有 UI click/back action 绑定到 EnhancedInput action，或 UI 与 gameplay action 共用输入资产时使用。
7. `../../orion-mcp-project-toolsets/SKILL.md`：通过 MCP 创建 WBP、修改蓝图默认变量、保存、验证，或把 UI 写入 Experience / ActionSet 时使用。

### 角色移动 + 通用 UI 同时出现

拆成两条链：

- Gameplay 输入链：Pawn/Character/Controller + EnhancedInput + MovementComponent。
- UI 输入链：UMG/CommonUI + CommonInput + input mode/action domain/key brush。

最后再检查两条链的交界：打开 UI 时是否改变 input mode、鼠标捕获、游戏输入阻断、back/click action。

### 按键提示 / 手柄图标

优先使用 `../../unreal-commoninput/SKILL.md`，查 `UCommonInputSubsystem`、controller data、platform settings 和 key brush lookup。不要硬编码贴图路径。

如果问题是 `FKey` 是否为 gamepad/mouse/touch、key display name、menu category、paired axis 或平台 key 转换，先读取 `../../unreal-inputcore/SKILL.md`，再回到 CommonInput 查 brush 和 controller data。

### 低层按键 / InputCore / Legacy Input

使用顺序：

1. `unreal-source-code-navigator`：定位 `InputCore`、`Engine` 输入基础类、调用方模块和源码样例。
2. `../../unreal-inputcore/SKILL.md`：处理 `FKey`、`EKeys`、`FKeyDetails`、`FInputKeyManager`、platform key conversion、`UPlayerInput`、`UInputComponent`、legacy action/axis mappings 和 input component stack。
3. 如果底层 key 被映射到 action，读取 `../../unreal-enhancedinput/SKILL.md`。
4. 如果底层 key 用于 UI glyph 或输入设备提示，读取 `../../unreal-commoninput/SKILL.md`。

### 纯 Gameplay Ability / GAS

使用顺序：

1. `unreal-source-code-navigator`：定位模块、ASC、Ability、Effect、Attribute、Cue、项目封装层。
2. `../../orion-gamecore-framework/SKILL.md`：如果使用 `UCoreAbilitySystemComponent`、`UCoreGameplayAbility`、`UCoreAbilitySet`、PawnData 或 Core input flow，先确认 GameCore 使用规则和扩展点。
3. `../../unreal-gameplayabilities/SKILL.md`：处理 ASC、GameplayAbility、GameplayEffect、AttributeSet、AbilityTasks、Prediction、TargetData、GameplayCue、AbilitySet、GA 输入 Tag、ActivationPolicy、ActivationGroup、GamePhaseAbility，以及“小玩法是否应抽象成 GA”。
4. 如果 ability 由输入触发，读取 `../../orion-input-framework/SKILL.md`，再按需要读取 `../../unreal-enhancedinput/SKILL.md`。
5. 如果 ability、AbilitySet、Attribute 或 GamePhase 由 Experience/GameFeature 授予或移除，读取 `../../orion-gamefeatures/SKILL.md`。
6. 如果 ability、ASC、AttributeSet、TargetData、GameplayCue、prediction 或 owner-only 属性涉及多人复制/RPC，读取 `../../orion-network-replication-framework/SKILL.md`。

### GameFeature / 模块化玩法插件

使用顺序：

1. `unreal-source-code-navigator`：定位 GameFeature plugin、模块、`.uplugin`、GameFeatureData 和项目封装层。
2. `../../orion-gamefeatures/SKILL.md`：先判断业务能否进入 GameFeature/Experience；处理 plugin state machine、Feature Action lifecycle、Experience loading flow、ActionSet、GameFeaturesToEnable、project policy、observer、activation/deactivation。
3. 如果是“新增一个玩法插件、按 TPP/GameTest 模板做玩法、规划玩法插件骨架”，读取 `../../orion-gamefeatures/references/gamefeature-plugin-framework.zh-CN.md`。
4. `../../orion-gamecore-framework/SKILL.md`：如果 feature 通过 Core Experience、Core GameFeatureAction、PawnData、AbilitySet、InputConfig、HUD/UIExtension 或 GamePhase 接入，确认 GameCore 运行链路和 protected base layer 规则。
5. 如果要创建、整理或迁移 GameFeature 内容目录、Experience、Game、Player、System、UI 资产，读取 `../../orion-asset-management/SKILL.md`。
6. 如果 feature action 添加输入 mapping、input config 或改键可见性，读取 `../../orion-input-framework/SKILL.md`。
7. 如果 feature action 添加 ability、Attribute、GameplayCue 或 GAS 资源，读取 `../../unreal-gameplayabilities/SKILL.md`。
8. 如果 feature action 添加 UI、CommonUI 输入模式或按键提示，读取 `../../unreal-commoninput/SKILL.md`。
9. 如果 feature 动态引入 replicated actor class、复制组件、RPC、owner-only 状态或 Dedicated Server 行为，读取 `../../orion-network-replication-framework/SKILL.md`；大量网络对象或相关性 placement 再读取 `../../unreal-replicationgraph/SKILL.md`。

重点检查业务是否应放玩法插件，Experience 是否等待完成，激活和反激活是否对称，以及现有 world、未来 world、client/server 行为。

### 多人网络复制 / RPC / NetDriver / ReplicationGraph

使用顺序：

1. `../../orion-network-replication-framework/SKILL.md`：处理 replicated actor/component/subobject、`UPROPERTY` 复制、OnRep、Server/Client/NetMulticast RPC、authority/ownership、NetDriver、SteamSockets、Iris 支持、push model、FastArray、GAS 网络语义、MessageRouter 跨端桥接、listen/dedicated server 验证和复制 bug 排查。
2. `unreal-source-code-navigator`：定位 active NetDriver、`GetLifetimeReplicatedProps`、RPC 调用对象、模块依赖、UE 复制源码、Iris/PushModel/FastArray/NetDriver 实现。
3. `../../unreal-replicationgraph/SKILL.md`：仅在配置了 `ReplicationDriverClassName`，或需要 `UReplicationGraph`、graph nodes、connection nodes、grid spatialization、always relevant、owner-only graph routing、dormancy、tear-off、frequency/cull distance 或大规模 actor placement 时使用。
4. 如果 replicated actor 或组件由 GameFeature 激活/反激活，读取 `../../orion-gamefeatures/SKILL.md`。
5. 如果复制问题来自 Ability、Attribute、TargetData、GameplayCue 或 prediction，读取 `../../unreal-gameplayabilities/SKILL.md`。
6. 如果网络连接、Session、SteamSockets 或 Dedicated Server target 相关，读取 `../../orion-online-steam-framework/SKILL.md`。

不要把 ReplicationGraph 当作普通 `bReplicates` 开关。普通属性/RPC/组件复制先走网络复制 Skill；RepGraph 是 NetDriver 级复制架构变更，必须做多人运行验证。

## 决策规则

- 用户说“Application.ico、Application.icns、Build/Linux/Application.png、Android launcher icon、平台 Logo、应用图标、package icon、Build 下各平台图标替换”：优先 `../../orion-build-platform-icons/SKILL.md`。
- 用户说“项目架构、文件夹职责、模块职责、代码放哪、插件职责、Target、Build 目录、Config 目录、PSO、Source/Plugins 分层”：优先 `../../orion-framework-architecture/SKILL.md`。
- 用户说“第三方库插件、ThirdParty 插件、External 模块、ModuleType.External、Source/ThirdParty、插件根 ThirdParty、RuntimeDependencies、DLL staging、SDK 接入、第三方 lib/dll/so/dylib 打包缺失”：优先 `../../unreal-thirdparty-plugin/SKILL.md`。
- 用户说“清理项目、项目清理、clean project、gitignore 清理、清理忽略文件、删除生成物、清掉 Binaries、清掉 Intermediate、清掉 Saved、清掉 DerivedDataCache、清理 IDE 缓存、清理 __pycache__”：优先 `../../orion-project-cleanup/SKILL.md`。
- 用户说“System 文件夹、系统层、CoreAssetManager、AssetManagerClassName、CoreGameData、GameDataPath、DefaultPawnData、GameInstance、GameSession、WorldSubsystem、GameplayTagStack、FastArray tag stack、系统蓝图函数库”：优先 `../../orion-system-framework/SKILL.md`。
- 用户说“GameCore、CoreExperience、CoreGameMode、CorePlayerState、CorePawnData、PawnExtension、PawnControl、CoreAbilitySystemComponent、CoreGameplayAbility、CoreAbilitySet、不要改核心模块、从 OrionGame 继承、业务写 GameFeatures”：优先 `../../orion-gamecore-framework/SKILL.md`。
- 用户说“GameMode、WorldSettings、DefaultGameplayExperience、关卡指定 Experience、创建 Experience、ExperienceDefinition、Experience PrimaryAssetId、PlayerAccountClass、DefaultPawnData、ActionSet、PawnData、AbilitySet 输入闭环、InputAction 和 InputTag 指定关系、玩法配置不写进 Mode”：优先 `../../orion-gamemode-experience-framework/SKILL.md`。
- 用户说“玩家、Player、PlayerID、FOrionPlayerID、玩家账户、PlayerAccount、UOrionPlayerAccount、UOrionPlayerInfoComponent、UOrionPlayerGameplayComponent、玩家信息组件、玩家游戏状态组件、玩家进入退出、玩家存档、玩家头像、好友昵称、玩家生成、PlayerSpawningManager、玩法专属玩家组件、GameFeature 挂载玩家组件”：优先 `../../orion-player-framework/SKILL.md`。
- 用户说“存档、SaveGame、Archive、ArchiveManager、UOrionArchiveManagerSubsystem、UOrionArchiveContext、UOrionArchiveLevelMeta、UOrionSettingsWorldOption、UOrionArchivePlayer、ArchivePlayer、FOrionArchiveHandler、EOrionArchiveType、LevelMeta、WorldOption、玩家存档、世界存档、房间设置保存、存档列表、自动保存、System.Archive.AutoSave、创建新游戏、加载游戏、删除存档、持久化数据”：优先 `../../orion-savegame-framework/SKILL.md`。
- 用户说“角色、Character、Pawn、PawnData、PawnClass、BP_CharacterBase、AOrionCharacter、CoreCharacter、PawnExtension、PawnControl、HeroComponent、角色移动、角色蓝图基类、玩家生成器、CharacterSpawnerManager、CharacterSpawner、PlayerStart、PlayerSpawningManager、角色出生槽位”：优先 `../../orion-character-pawn-framework/SKILL.md`。
- 用户说“Teams、Team、队伍、阵营、敌友、友军、Friendly、Hostile、Neutral、GenericTeamAgent、IGenericTeamAgentInterface、FGenericTeamId、IOrionTeamAgentInterface、TeamSubsystem、TeamInfo、TeamDisplayAsset、TeamCreationComponent、AI Perception affiliation、GetTeamAttitudeTowards、按队伍出生、队伍出生点、友军伤害”：优先 `../../orion-teams-framework/SKILL.md`。
- 用户说“OrionEditor、CommonEditorExtension、编辑器扩展、Editor module、EditorEngine、PIE 委托、ToolMenus、Check Content、Common Maps、DataValidation、DefaultEditor.ini、DefaultEditorKeyBindings.ini、DefaultEditorPerProjectUserSettings.ini”：优先 `../../orion-editor-extension-framework/SKILL.md`。
- 用户说“ProjectAcoustics、Project Acoustics、ProjectAcousticsNative、AcousticsAudioPluginListener、SourceDataOverride、虚拟扬声器、virtual speaker、OnListenerUpdated、AActor::SetActorLocation 音频崩溃”：优先 `../../orion-project-acoustics/SKILL.md`，并配合 `../../orion-audio-framework/SKILL.md`。
- 用户说“SteamAudio、Steam Audio、phonon、HRTF、Steam Audio Spatialization、Steam Audio Reverb、Steam Audio Occlusion、SteamAudioSourceComponent、SteamAudioListenerComponent、SteamAudioGeometryComponent、SteamAudioDynamicObjectComponent、SteamAudioProbeVolume、baked reflections、pathing、Radeon Rays、TrueAudio Next、OpenCL、SteamAudio.GPUAudioAcceleration”：优先 `../../orion-steam-audio/SKILL.md`，并配合 `../../orion-audio-framework/SKILL.md`。
- 用户说“MetaSound、MetaSounds、metasound、MetaSound Source、MetaSound Patch、MetaSound 节点、MetaSound Builder、UMetaSoundBuilderSubsystem、UMetaSoundEditorSubsystem、FMetasoundFrontendClassName、ProjectAcoustics MetaSound 参数、MCP 创建 MetaSound”：优先 `../../unreal-metasound/SKILL.md`，并配合 `../../orion-audio-framework/SKILL.md` 和 `../../orion-mcp-workflow/SKILL.md`。
- 用户说“音频、Audio、SoundClass、SoundConcurrency、Submix、ControlBus、ControlBusMix、AudioMixer、AudioModulation、MetaSound、ProjectAcoustics、SteamAudio、OrionVoiceChat、语音聊天、麦克风、音频输入、音频输出、空间音频、混响、遮挡、CoreAudioSettings、GameSettingRegistry_Audio、HDR Audio、LDR Audio”：优先 `../../orion-audio-framework/SKILL.md`。
- 用户说“渲染命令、render command、CVar、控制台变量、RendererSettings 可配置命令、DefaultScalability 命令、某个 r./sg./rhi./d3d12./vulkan. 前缀、命令是否运行时可改、命令支持平台”：优先 `../../unreal-render-commands/SKILL.md`。
- 用户说“渲染、RendererSettings、DefaultScalability、WindowsEngine.ini、DLSS、NIS、Streamline、DLSS Frame Generation、Reflex、RTX、RayTracing、Lumen、Nanite、Virtual Shadow Map、VSM、TSR、AntiAliasing、ScreenPercentage、GameSettingRegistry_Video、OrionGameRenderManager、OrionGameRenderSubsystem、启动编译着色器、FlowStep_TryCompileShaders”：优先 `../../orion-rendering-framework/SKILL.md`；如果问题是命令/参数/表格查询，再读取 `../../unreal-render-commands/SKILL.md`；如果问题是加载屏生命周期、编译进度 UI 或 CommonLoadingScreen 卡住，再读取 `../../orion-loading-screen-framework/SKILL.md`。
- 用户说“贴图、纹理、Texture2D、TextureCube、UDIM、Virtual Texture、Runtime Virtual Texture、Streaming Virtual Texture、Texture Streaming Pool、贴图太大、纹理太大、打包体积大、包体积大、贴图卡顿、贴图糊、LODGroup、MaxTextureSize、LODBias、TextureLODGroups、TextureQuality、r.Streaming.PoolSize、r.Streaming.MipBias、r.VT、Size Map、Asset Audit、Reference Viewer”：优先 `../../unreal-texture-management/SKILL.md`；涉及资产移动/命名时配合 `../../orion-asset-management/SKILL.md`，涉及渲染配置时配合 `../../orion-rendering-framework/SKILL.md`。
- 用户说“PSO、ShaderPipelineCache、PSOPrecache、CollectedPSOs、PipelineCaches、-logPSO、-clearPSODriverCache、.rec.upipelinecache、.shk、.spc、打包并收集着色器、收集着色器、收集PSO、PSO打包”：优先 `../../orion-pso-caching/SKILL.md`，并按需要配合 `../../orion-packaging/SKILL.md` 与 `../../orion-rendering-framework/SKILL.md`。
- 用户说“OnlineSubsystem、Steam、OrionSteam、OrionOnlineSubsystemSteam、Steam SDK、SteamAppId、SteamDevAppId、Session、Lobby、Invite、好友邀请、Friends、Steam Sockets、Steam Web API、UOrionGameSessionComponent、BP_SessionComponent、CommonSession、GameUI/Online、Steam Dedicated Server”：优先 `../../orion-online-steam-framework/SKILL.md`。
- 用户说“DefaultGame.ini、WindowsGame.ini、LinuxGame.ini、MacGame.ini、AndroidGame.ini、IOSGame.ini、GameUserSettings.ini、DefaultCrypto.ini、CryptoKeys、ProjectPackagingSettings、AssetManagerSettings、CommonLoadingScreenSettings、CommonInput platform settings、CommonUI PlatformTraits、用户可以配置哪些参数、平台配置、打包配置、ini denylist、CoreGameDataPath、DefaultPawnData”：优先 `../../orion-project-config/SKILL.md`。
- 用户说“GameSettings、设置插件、设置系统、设置页、用户设置、玩家设置、选项菜单、UGameSetting、UGameSettingRegistry、UGameSettingScreen、UGameSettingVisualData、UOrionGameSettingRegistry、UOrionGameWorldSettingRegistry、UOrionSettingsLocal、UOrionSettingsShared、GameSettingRegistry_*.cpp、GameUserSettingsClassName、设置保存、设置应用、取消设置、设置 dirty、音频/视频/输入/语言设置怎么添加”：优先 `../../orion-game-settings-framework/SKILL.md`；具体音频、渲染、输入、本地化底层行为再配合对应领域 Skill。
- 用户说“加载屏、LoadingScreen、CommonLoadingScreen、CommonStartupLoadingScreen、PreLoadScreen、ULoadingScreenManager、LoadingProcessInterface、LoadingProcessTask、LoadingPercentInterface、加载屏卡住、加载进度、加载界面不消失、SetIsLoadingWidgetCompleted、启动加载屏、shader 编译加载 UI、LoadingScreenControlBusMix”：优先 `../../orion-loading-screen-framework/SKILL.md`。
- 用户说“Movie、Movies、Content/Movies、Content\\Movies、Bink、BinkMedia、bk2、mp4、mov、启动视频、加载屏视频、StartupMovies、MoviePlayer、FLoadingScreenAttributes、UMediaPlayer、UFileMediaSource、MediaTexture、MediaSoundComponent、bSkipMovies、UFSMovies、NonUFSMovies、MovieDenyList、视频打包缺失”：优先 `../../orion-movie-media-framework/SKILL.md`；加载屏视频的显示/隐藏生命周期同时读取 `../../orion-loading-screen-framework/SKILL.md`。
- 用户说“本地化、Localization、Content/Localization、Config/Localization、FText、LOCTEXT、NSLOCTEXT、INVTEXT、FText::FromString、FText::Format、GatherText、Localization Dashboard、manifest、archive、PO、locres、locmeta、EngineOverrides、CulturesToStage、LocalizationPaths、语言设置、新增语言、切换语言、打包后翻译缺失”：优先 `../../orion-localization-framework/SKILL.md`。
- 用户说“GameplayMessageRouter、GameplayMessageRuntime、UGameplayMessageSubsystem、BroadcastMessage、RegisterListener、Listen For Gameplay Messages、FGameplayMessageListenerHandle、FCoreVerbMessage、FGameplayVerbMessage、FGameplayNotificationMessage、GameplayTag 消息、tag 接收消息、消息系统、委托替代、是否比委托好、Ability failure message、damage message、elimination message、UI toast message、GameFeature 解耦通信”：优先 `../../orion-gameplay-message-router/SKILL.md`。
- 用户说“背包交互、物品交互、拾取物品、丢弃物品、装备物品、开箱、搜索物品、InteractionSystem、GameInventorySystem、JInventorySystem、IInteractableTarget、AInteractionItem、FInteractionOption、GameplayAbility_Interact、GA_InventoryAbility、IndicatorSystem、UIndicatorManagerComponent、UIndicatorDescriptor、UUI_InteractionWithKeyBrush、InputTag.Ability.Interact、Event.Inventory、TraceChannel_Interaction、InteractiveItem、多人拾取、多人交互 UI”：优先 `../../orion-inventory-interaction-framework/SKILL.md`。
- 用户说“多人、网络复制、Replication、Replicated、OnRep、GetLifetimeReplicatedProps、DOREPLIFETIME、RPC、Server RPC、Client RPC、NetMulticast、NetDriver、SteamSockets、FastArray、PushModel、Iris、owner-only、COND_SkipOwner、COND_OwnerOnly、Dormancy、ForceNetUpdate、Dedicated Server、Listen Server、网络同步、客户端服务端同步、消息跨端”：优先 `../../orion-network-replication-framework/SKILL.md`。
- 用户说“输入系统、CommonInputSystem、UInputSystemConfig、UInputSystemComponent、InputTag、PawnData InputConfig、CorePawnControlComponent、OrionPawnControlComponent、GameFeatureAction_AddInputContextMapping、GameFeatureAction_AddInputBinding、GameSettingRegistry_MouseAndKeyboard、GameSettingRegistry_Gamepad、按键设置、玩家改键、手柄设置、Steam 手柄、IA/IMC/InputData 怎么接入”：优先 `../../orion-input-framework/SKILL.md`。
- 用户说“输入移动、角色移动、移动绑定”：优先 EnhancedInput 和角色基类，不优先 CommonInput。
- 用户说“源码索引、source index、模块在哪、插件在哪、Build.cs、uplugin、source root、module ownership、plugin ownership”：优先 `../../unreal-source-index/SKILL.md`。
- 用户说“Generate Visual Studio project files、生成 VS 工程、生成 Visual Studio 文件、右键生成没用、升级 UE 后 sln 没更新、EngineAssociation、UnrealVersionSelector、Log_GPF、ProjectFiles、sln 指向旧引擎、Target Upgrade Required、升级后编译编辑器、打开编辑器被插件兼容弹窗挡住”：优先 `../../unreal-vs-project-generation/SKILL.md`。
- 用户说“FKey、EKeys、InputCore、KeyDetails、FInputKeyManager、UPlayerInput、UInputComponent、legacy input、axis mapping、key category、platform key”：优先 `../../unreal-inputcore/SKILL.md`。
- 用户说“InputAction、MappingContext、Trigger、Modifier、BindAction、改键、重映射”：优先 `../../unreal-enhancedinput/SKILL.md`。
- 用户说“UI框架、GameUI、Source/GameUI、CommonUI、UUI_ActivatableWidget、UGameHUDLayout、UIExtension、HUD layout、UI layer、UI.Layer、Add Widgets、弹窗系统、Popup、奖励弹窗、公告弹窗、HTML UI、OrionBrowser、浏览器控件”：优先 `../../orion-gameui/SKILL.md`；具体 Widget Blueprint / WidgetTree / BindWidget / WBP 编辑再配合 `../../orion-umg/SKILL.md`。
- 用户说“UMG、Widget Blueprint、WBP、Widget Tree、按钮、列表、标签页、弹窗外观、Splash、EdSplash、启动图、编辑器启动图、游戏启动图、Content/Splash”：优先 `../../orion-umg/SKILL.md`；设置页逻辑配合 `../../orion-game-settings-framework/SKILL.md`，加载屏 Widget 外观配合 `../../orion-loading-screen-framework/SKILL.md`，Splash 图片路径和格式配合 `../../orion-asset-management/SKILL.md`，源图裁剪/转换/自动覆盖配合 `../../splash-image-conversion/SKILL.md`。
- 用户说“Content/UI 蓝图框架、Art/HUD/Interaction/Menu/Online/Settings、BP_UIPolicy、W_OverallUILayout、BP_CommonInputData、DA_GameUIInputActionDomainTable、DT_UniversalActions、GameUI UI 蓝图怎么模仿、怎么编辑 UI 蓝图、生成 UI 蓝图 Skill”：优先 `../../orion-ui-blueprint-framework/SKILL.md`，再按具体子系统配合 UMG、CommonInput、GameSettings、Online、Interaction、LoadingScreen 和 MCP Toolset Skill。
- 用户说“通用UI输入、CommonUI 输入模式、返回键、点击、按键提示、手柄图标”：优先 `../../unreal-commoninput/SKILL.md`，并在需要创建/修改 Widget Blueprint 时回到 `../../orion-umg/SKILL.md`。
- 用户说“GameFeature、GameFeatureAction、模块化玩法、Experience、CoreExperience、ActionSet、GameFeaturesToEnable、玩法插件、业务代码优先 GameFeature、插件激活、激活反激活、feature plugin”：优先 `../../orion-gamefeatures/SKILL.md`。
- 用户说“创建蓝图、资产命名、Content 目录、资源放哪、WBP/BP/GA/ABP 前缀、GameFeature 内容目录”：优先 `../../orion-asset-management/SKILL.md`。
- 用户说“GAS、GA、GameplayAbility、AbilitySystemComponent、GameplayEffect、AttributeSet、GameplayCue、TargetData、Prediction、AbilitySet、CoreAbilitySet、Ability 输入、InputTag 绑定、ActivationPolicy、ActivationGroup、GamePhaseAbility、小玩法抽象成 GA”：优先 `../../unreal-gameplayabilities/SKILL.md`。
- 用户说“ReplicationGraph、RepGraph、UReplicationGraph、ReplicationDriverClassName、NetDriver 复制驱动、Actor relevancy、tear-off、grid spatialization、cull distance、大量 actor 复制优化、graph node、connection node”：优先 `../../unreal-replicationgraph/SKILL.md`。
- 用户说“UI 打开后角色不能动、鼠标捕获、UI/game 输入切换”：同时使用 CommonInput 和 EnhancedInput。
- 用户说“写 UE 代码但没说具体领域”：先用源码导航 Skill，查到涉及领域后再路由。
- 用户说“这个模块怎么用、根据我的说明生成 Skill、把框架能力沉淀成 Skill、发布给别人用”：优先 `../../orion-framework-skill-authoring/SKILL.md`，然后按源码证据接入相关领域路由。
