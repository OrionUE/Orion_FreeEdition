---
name: orion-project-config
description: "Use when Codex works on Unreal Engine project configuration in this framework: Config/DefaultGame.ini, platform Game.ini, platform GameUserSettings.ini, Config/DefaultCrypto.ini, Config/Localization, DefaultEditor.ini localization targets, DefaultEditorPerProjectUserSettings.ini ContentBrowser FavoritePaths/FavoriteItems, ProjectPackagingSettings, MoviePlayerSettings, BinkMoviePlayerSettings, StartupMovies, CommonLoadingScreenSettings, CryptoKeysSettings, AssetManagerSettings, GeneralProjectSettings, CommonInput/CommonUI platform traits, UOrionSettingsLocal, game settings registries, CoreAudioSettings, GameFeaturesSubsystemSettings, packaging cook/chunk/compression/culture/localization/movie staging/ini denylist, or deciding what project/player parameters are configurable."
---

# Unreal Project Config

本 Skill 用于处理项目级配置、平台覆盖、用户设置默认值、打包配置和 CryptoKeys。它适合回答“用户可以配置哪些参数”、修改 ini、为新系统增加 `Config` 字段，或排查平台配置为什么没有生效。

## 工作流

1. 先读取当前工程的真实 ini 文件，不要从记忆推断：`Config/DefaultGame.ini`、目标平台 `Config/<Platform>/<Platform>Game.ini`、`Config/<Platform>/<Platform>GameUserSettings.ini`、`Config/DefaultCrypto.ini`。
2. 判断配置层：项目默认、平台 Game 覆盖、平台用户设置默认、Crypto 配置域、Packaging 配置，还是相邻的 Engine/Editor 配置。
3. 从 section 反查 owning class：`[/Script/Module.Class]` 对应 `UCLASS(Config=...)`，`[ClassName_Platform ClassName]` 通常对应 `UPlatformSettings`。
4. 查源码确认 `UPROPERTY(Config)`、默认值、运行时读取点和编辑器/打包读取点；必要时继续使用 `../unreal-source-code-navigator/SKILL.md`。
5. 玩家可调设置要同时读 `UOrionSettingsLocal`、`UOrionSettingsShared` 和 `Source/<GameModule>/Settings/User/GameSettingRegistry_*.cpp`，区分本机用户设置和共享用户设置。
6. 处理 `DefaultCrypto.ini` 时只描述字段、启用状态和打包影响，绝不输出、复制、提交、写入文档或日志化任何实际密钥值。
7. 修改前先决定应写入默认配置、平台覆盖、用户设置默认、Packaging，还是 runtime save；修改后验证目标平台实际读取的配置层。

## 路由

- 配置属于框架模块职责、Target、根目录分层或代码落点时，配合 `../orion-framework-architecture/SKILL.md`。
- 查配置字段声明、源码读取点、引擎版本差异或 `UCLASS(Config=...)` 细节时，配合 `../unreal-source-code-navigator/SKILL.md`。
- `.uproject` `EngineAssociation`、Generate Visual Studio project files、UnrealVersionSelector、UBT `-ProjectFiles`、`.sln` stale engine path 或 `.uplugin` / `.uproject` JSON 编码导致工程文件生成失败时，配合 `../unreal-vs-project-generation/SKILL.md`。
- `ProjectPackagingSettings`、Cook、Pak、IoStore、chunk、压缩、文化、ini denylist、UFS staging 或 Crypto 打包验证，配合 `../orion-packaging/SKILL.md`。
- `Config/Localization/*.ini`、Localization Dashboard target、`[Internationalization] LocalizationPaths`、`CulturesToStage`、新增语言、`.locres` staging 或语言设置配置，配合 `../orion-localization-framework/SKILL.md`。
- `MoviePlayerSettings`、`StartupMovies`、`BinkMoviePlayerSettings`、`bSkipMovies`、`UFSMovies`、`NonUFSMovies`、`MovieDenyList` 或视频文件 staging，配合 `../orion-movie-media-framework/SKILL.md`；打包验证再进入 `../orion-packaging/SKILL.md`。
- `RendererSettings`、平台 `Engine.ini` 渲染覆盖、`DefaultScalability.ini`、DLSS/Streamline settings、PSO Precaching、bundled PSO、视频设置页或 `UOrionSettingsLocal` 渲染字段，配合 `../orion-rendering-framework/SKILL.md`。
- `GameUserSettingsClassName`、EnhancedInput `UserSettingsClass`、平台 `GameUserSettings.ini` 默认值、`UOrionSettingsLocal` / `UOrionSettingsShared` 字段、`GameSettingRegistry_*.cpp` 或设置页保存/应用逻辑，配合 `../orion-game-settings-framework/SKILL.md`。
- `Config/Custom/Steam/DefaultEngine.ini` 中的 Steam OnlineSubsystem、`SteamDevAppId`、`SteamAppId`、Steam NetDriver、PacketHandler、Steam Web API settings、Steam target 或发布配置，配合 `../orion-online-steam-framework/SKILL.md`。
- `NetDriverDefinitions`、`IpNetDriver`、SteamSockets NetDriver、PacketHandler、ReplicationDriverClassName、listen/dedicated server 配置或网络复制相关平台覆盖，配合 `../orion-network-replication-framework/SKILL.md`；启用 RepGraph 再配合 `../unreal-replicationgraph/SKILL.md`。
- `CoreAssetManager`、`CoreGameDataPath`、`DefaultPawnData`、Experience 或 GameFeatures policy，配合 `../orion-gamecore-framework/SKILL.md`。
- `AssetManagerClassName`、`GameInstanceClass`、PrimaryAsset 启动加载、GameData/PawnData fallback 或 System 层配置合同，配合 `../orion-system-framework/SKILL.md`。
- `CoreAudioSettings`、音频 ControlBus/Submix、平台音频插件或音频设置项，配合 `../orion-audio-framework/SKILL.md`。
- `CommonLoadingScreenSettings`、加载屏 Widget、加载屏 ZOrder、hold/heartbeat/progress 参数或 `LoadingScreenControlBusMix`，配合 `../orion-loading-screen-framework/SKILL.md`。
- CommonInput、CommonUI platform traits、controller data、输入设备默认值、EnhancedInput user settings class、`DefaultInput.ini` 输入类或设置页平台 gating，配合 `../orion-input-framework/SKILL.md` 和 `../unreal-commoninput/SKILL.md`。
- UMG/UI policy、loading screen、dialog、theme 和 UI 资产路径，配合 `../orion-umg/SKILL.md` 与 `../orion-asset-management/SKILL.md`。

## Reference

读取 `references/project-config.zh-CN.md` 获取 `DefaultGame.ini` section 地图、平台 `Game.ini/GameUserSettings.ini` 作用、玩家可调参数清单、`DefaultCrypto.ini` 语义和新增配置的实现模板。

## 硬规则

- 不把宿主项目名、绝对路径、用户名、机器路径、真实 AES/RSA 密钥值写进 Skill、文档、提交信息或回复。
- 可以保留公开框架模块名、类名、插件名、配置 section、字段名和相对路径模板。
- `Source/GameCore` 默认只读；配置需要扩展核心行为时，优先从派生层、GameFeature、DataAsset 或现有 `Config` 字段接入，除非用户明确允许改 GameCore。
- 修改 Crypto 或 Packaging 前确认发布/补丁/平台影响；全资产加密会影响运行时 IO 和补丁差异，签名会要求打包流程具备完整 RSA 配置。
