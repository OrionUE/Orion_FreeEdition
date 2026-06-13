# Unreal 项目配置手册

## 使用边界

本手册用于学习和修改项目配置，而不是直接替代源码确认。每次处理配置都先读当前工程真实文件，再从 section 反查 owning class 和调用点。不要把宿主项目名、绝对路径、用户名、机器路径或真实密钥值写进可发布 Skill。

## 配置层模型

| 配置文件 | 作用 |
| --- | --- |
| `Config/DefaultGame.ini` | `Game` 配置域的项目默认值。常见 owner 是 `UDeveloperSettings`、`UObject config=Game`、`UGameUserSettings` 子类、GameFeature/AssetManager/Packaging 设置。 |
| `Config/<Platform>/<Platform>Game.ini` | 某平台的 `Game` 配置覆盖。适合放 CommonInput platform settings、CommonUI platform traits、平台特定 `UPlatformSettings`。 |
| `Config/<Platform>/<Platform>GameUserSettings.ini` | 某平台的用户设置默认值。当前框架用它给 `UOrionSettingsLocal` 写默认 fullscreen/window mode 等初始值，运行后用户保存值可能写到 Saved/config 或平台用户目录。 |
| `Config/DefaultCrypto.ini` | `Crypto` 配置域。由 CryptoKeys、UnrealPak/UAT 等读取，用于 Pak/IoStore 加密、Pak index/ini 加密和 Pak 签名。 |
| `Config/DefaultEngine.ini` 与平台 `Engine.ini` | 引擎、音频插件、渲染、PSO、平台 CVar 等。只有任务涉及这些系统时再进入。 |
| `Config/DefaultEditor*.ini` | 编辑器扩展和编辑器用户体验配置。编辑器任务继续读取 `unreal-editor-extension-framework`。 |

判断规则：

1. `[/Script/Module.Class]` 先查 `Class` 是否有 `UCLASS(Config=Game)`、`UCLASS(config=Crypto)` 或 `UDeveloperSettings`。
2. `[ClassName_Platform ClassName]` 先查 `ClassName` 是否是 `UPlatformSettings`；平台名后缀决定覆盖平台。
3. 字段必须有 `UPROPERTY(Config)` 或 owner class 自己在源码中手动读 `GConfig`，否则 ini 值不会自动注入。
4. 玩家设置 UI 只说明“可调入口”，不等同于全部写在 `GameUserSettings.ini`；本地设备值多走 `UOrionSettingsLocal`，账号/档案共享值多走 `UOrionSettingsShared` 或 save game。
5. `RendererSettings`、DLSS/Streamline、PSO、`DefaultScalability.ini` 和平台 `Engine.ini` 渲染覆盖继续读取 `unreal-rendering-framework`，不要只按普通 `Game` 配置处理。
6. `OrionOnlineSubsystemSteam`、`OnlineSubsystem`、Steam NetDriver、Steam Web API settings 和 AppID 发布配置继续读取 `unreal-online-steam-framework`，不要把真实 AppID 或 Web API key 写进可发布文档。
7. `MoviePlayerSettings`、`StartupMovies`、`BinkMoviePlayerSettings`、`bSkipMovies`、`UFSMovies`、`NonUFSMovies` 和 movie staging 继续读取 `unreal-movie-media-framework`，不要把视频路径写成本机绝对路径。
8. `CommonLoadingScreenSettings`、加载屏 Widget、进度条参数、加载屏 hold/heartbeat 或 `LoadingScreenControlBusMix` 继续读取 `unreal-loading-screen-framework`。

## `DefaultGame.ini` Section 地图

| Section | Owner / 系统 | 可配置内容 | 注意点 |
| --- | --- | --- | --- |
| `[/Script/EngineSettings.GeneralProjectSettings]` | `UGeneralProjectSettings` | `ProjectID`、`ProjectName`、`CopyrightNotice` 等项目元信息 | 代码文件头需要版权文本时，从这里读取 `CopyrightNotice`；文档化时不要写入具体宿主项目名。 |
| `[/Script/Engine.AssetManagerSettings]` | `UAssetManagerSettings` | `PrimaryAssetTypesToScan`、Cook rule、AssetRegistry metadata、只 cook 生产资产等 | 决定 Map、CoreGameData、GameFeatureData、Experience、ActionSet 等 PrimaryAsset 的扫描和 cook 规则。新增可 cook 数据资产先确认这里。 |
| `[/Script/GameUI.GameUIManagerSubsystem]` | UI manager + CommonGame policy | 默认 UI policy、开发 HUD 类、开发 HUD ZOrder、打包版是否显示开发 HUD/屏幕消息 | UI policy / HUD 资产路径修改前先走 UMG 和资产管理 Skill。 |
| `[/Script/GameUI.UIThemeSubsystem]` | `UUIThemeSubsystem` | 默认 UI theme data asset | 主题资产仍按 UI 资产规则命名和放置。 |
| `[/Script/GameUI.GameUIMessagingSubsystem]` | `UGameUIMessagingSubsystem` | confirmation dialog、error dialog class | 影响 CommonGame dialog 流程。 |
| `[/Script/GameplayAbilities.AbilitySystemGlobals]` | GameplayAbilities developer settings | AbilitySystemGlobals 子类、Global GameplayCueManager 类 | 影响 GAS 全局单例和 GameplayCue 管理器。改动前读取 GAS Skill。 |
| `[/Script/OrionGame.OrionAssetManager]` | `UOrionAssetManager` / `UCoreAssetManager` | `CoreGameDataPath`、`DefaultPawnData` | 默认 GameData 和 PawnData fallback；Experience 没指定 PawnData 时会用默认值。 |
| `[/Script/CommonLoadingScreen.CommonLoadingScreenSettings]` | `UCommonLoadingScreenSettings` | loading widget、ZOrder、编辑器 ticking、hold/heartbeat/progress bar 等 | 当前配置只用核心字段，但类支持更多 loading screen 行为。 |
| `[/Script/UnrealEd.ProjectPackagingSettings]` | `UProjectPackagingSettings` | build configuration、target、Pak/IoStore、chunk、压缩、prereq、crash reporter、culture、cook、movies、ini denylist、always cook/stage | 打包任务继续读 packaging Skill；Crypto 密钥字段必须保留在 denylist 中。 |
| `[/Script/MoviePlayer.MoviePlayerSettings]` | `UMoviePlayerSettings` | `bWaitForMoviesToComplete`、`bMoviesAreSkippable`、`StartupMovies` | `StartupMovies` 相对 `Content/Movies`；Bink startup movie 通常不写 `.bk2` 扩展名。 |
| `[/Script/BinkMediaPlayer.BinkMoviePlayerSettings]` | `UBinkMoviePlayerSettings` | Bink buffering、sound track、画面输出区域、像素格式等 | section 名以当前引擎生成结果为准；具体 `.bk2` 和 Bink 行为继续读 movie Skill。 |
| `[/Script/CommonInput.CommonInputSettings]` | `UCommonInputSettings` | CommonInputData、ActionDomainTable、后台输入、EnhancedInput support、thrashing/auto detect 等 | 具体 controller data 在平台 `Game.ini`。 |
| `[/Script/GameCore.CoreAudioSettings]` | `UCoreAudioSettings` | ControlBusMix、volume ControlBus、HDR/LDR Submix effect chain | 音频任务继续读 audio Skill。 |
| `[/Script/GameFeatures.GameFeaturesSubsystemSettings]` | `UGameFeaturesSubsystemSettings` | `GameFeaturesManagerClassName` / project policy | 当前框架通过 Core GameFeatures policy 管理 GameFeature 行为。 |

## `DefaultEngine.ini` Steam 配置

Steam OnlineSubsystem 配置属于 Engine 配置域，重点 section 包括：

- `[OrionOnlineSubsystemSteam]`：`bEnabled`、`SteamDevAppId`、`SteamAppId`、端口、VAC、P2P relay、relaunch、server query port、server product 信息。
- `[OnlineSubsystem]`：`DefaultPlatformService=OrionSteam`、`NativePlatformService=OrionSteam`、`AdditionalModulesToLoad`、`ModuleRedirects`。
- `[/Script/Engine.Engine]`：Steam sockets `NetDriverDefinitions` 和 fallback driver。
- `[PacketHandlerComponents]`：Steam auth packet handler。
- `[/Script/CommonUser.CommonSessionSubsystem]`：CommonSession 默认 lobby/beacon 行为。
- `[/Script/OrionSteamWebAPI.OrionSteamWebAPISettings]` 或同类 settings：Steam Web API key、AppID、dev/sandbox 标志。

发布前必须提醒用户替换开发/正式 AppID，确认 Dedicated Server 信息，并保护 Web API key。具体字段语义、Session/Invite 行为和验证流程由 `unreal-online-steam-framework` 负责。

## 平台 `Game.ini`

桌面平台通常使用：

- `[CommonInputPlatformSettings_<Platform> CommonInputPlatformSettings]`
  - `DefaultInputType=MouseAndKeyboard`
  - 支持 mouse/keyboard 和 gamepad，不支持 touch。
  - `DefaultGamepadName` 指向默认手柄类型。
  - `+ControllerData` 注册键鼠、Xbox、PlayStation 等 controller data asset。
- `[/Script/CommonUI.CommonUISettings]`
  - `PlatformTraits` 声明平台能力，例如 windowed mode、退出应用、音频输入/输出设备切换、后台音频、键鼠、单用户、亮度调整、回放支持。

移动平台通常使用：

- `DefaultInputType=Touch`，支持 touch 和 gamepad，不支持 mouse/keyboard。
- `Platform.Trait.Input.PrimarlyTouchScreen`、`Platform.Trait.SingleOnlineUser` 等 traits。
- `[OrionPlatformSpecificRenderingSettings_<Platform> OrionPlatformSpecificRenderingSettings]`
  - `FramePacingMode=MobileStyle`
  - 可关闭颗粒化画质设置和自动画质 benchmark。

这些 traits 会被 CommonUI/CommonUser 和设置注册表读取，用来决定设置项是否显示或可编辑。例如桌面平台才展示窗口模式、音频设备切换、键鼠设置、亮度和回放入口；移动平台按 touch/mobile frame pacing 走另一套限制。

## 平台 `GameUserSettings.ini`

`<Platform>GameUserSettings.ini` 是平台默认用户设置层。当前桌面平台配置了：

- `[/Script/OrionGame.OrionSettingsLocal]`
  - `FullscreenMode`
  - `LastConfirmedFullscreenMode`
  - `PreferredFullscreenMode`

它们是初始默认值，不是运行后唯一真相。运行时玩家设置会通过 `UGameUserSettings`、`UOrionSettingsLocal`、本地 Saved config 或 save game 保存。

## 玩家可调参数清单

玩家设置入口主要来自 `Source/<GameModule>/Settings/User/GameSettingRegistry_*.cpp`，底层值来自 `UOrionSettingsLocal`、`UOrionSettingsShared`、`UGameUserSettings` 和相关子系统。

### 视频 / 图形 / 性能

- 窗口模式、分辨率、垂直同步、整体帧率限制。
- 亮度 / gamma。
- 字幕开关、字幕文字大小、颜色、描边、背景透明度。
- 移动帧率限制、设备档质量后缀、自动画质 benchmark。
- 画质预设、分辨率比例。
- Global Illumination、阴影、抗锯齿、视距、纹理、特效、反射、后处理。
- 抗锯齿方法。
- RTX 开关。
- DLSS Upscale、DLSS 模式、DLSS Frame Generation 和 FG 模式。
- 电池、菜单、后台和常规帧率限制。

视频设置、渲染 CVar、DLSS、RTX、Scalability 和 PSO 的具体运行时接线由 `unreal-rendering-framework` 负责；本手册只负责配置层归属和 `Game`/`GameUserSettings` 默认值。

### 音频

- Overall、Music、Sound Effects、Dialogue、Voice Chat 音量。
- 音频输出设备、音频输入设备。
- 后台音频。
- Headphone / HRTF 模式。
- HDR Audio 模式。
- 输入设备采样率、输入通道数是本地配置字段；是否暴露给 UI 需要看设置注册表。

### 输入 / 手柄 / 键鼠

- Controller hardware / controller platform。
- 手柄震动。
- 手柄和鼠标的水平/垂直反转。
- 手柄 Look sensitivity、ADS sensitivity。
- 手柄 move/look stick dead zone。
- 鼠标 X/Y 灵敏度、瞄准灵敏度倍率。
- 键鼠重绑定集合来自 EnhancedInput/CommonInputSystem 的 mappable config，不要手写贴图路径或按键显示。

### 游戏 / 语言 / 回放

- 语言由 Language 设置项驱动，和 `Localization` 目标、打包 cultures 配合。
- 自动录制回放由本地设置字段支持，设置入口是否显示受 platform trait 影响。

## `DefaultCrypto.ini`

`DefaultCrypto.ini` 的 owner 是 `UCryptoKeysSettings`，类是 `config=Crypto`。它负责把项目的加密和签名策略交给 CryptoKeys、UnrealPak/UAT 和打包流程。

核心字段：

- `EncryptionKey`：principal AES key。必须视为秘密；不要输出实际值。
- `SecondaryEncryptionKeys`：可选次级 AES key。使用它们时，运行时也必须能向 pak platform file 提供对应 key。
- `bEncryptPakIniFiles`：加密 pak 内 ini 文件。IO 成本较低，主要保护可被文本挖掘的配置。
- `bEncryptPakIndex`：加密 pak index。没有 key 时难以用 UnrealPak 查看或篡改 pak 内容索引。
- `bEncryptUAssetFiles`：加密 package header 和字符串等 `.uasset` 头部数据，安全性和 IO 成本介于 index/ini 与全资产加密之间。
- `bEncryptAllAssetFiles`：加密所有资产文件。更强但会增加运行时 IO 成本，并让补丁差异变差。
- `SigningPublicExponent`、`SigningModulus`、`SigningPrivateExponent`：Pak signing 的 RSA key material。都必须视为秘密；不要输出实际值。
- `bEnablePakSigning`：开启 Pak 签名，防止 pak 数据被篡改。

启用判断：

- `IsEncryptionEnabled()` 需要 `EncryptionKey` 非空，并且至少一个加密 flag 为 true。
- `IsSigningEnabled()` 需要 `bEnablePakSigning=true`，且 RSA public exponent、modulus、private exponent 都存在。
- 当加密或签名开启时，CryptoKeys build mutator 会要求构建流程进入需要 build 的路径。
- UnrealPak/UAT 会从 `Crypto` 配置域加载 key chain，并按 `DefaultCrypto.ini` 和目标平台读取加密/签名设置。

安全规则：

1. 不要把真实 AES/RSA 值复制到 Skill、issue、PR、日志、聊天回复或示例。
2. 扫描/校验时只检查字段是否存在和 flag 状态，不打印值。
3. `ProjectPackagingSettings.IniKeyDenylist` 必须包含 `EncryptionKey`、`SigningPublicExponent`、`SigningModulus`、`SigningPrivateExponent`、`aes.key`、`rsa.*` 等敏感键。
4. 修改加密粒度前评估运行时 IO、patch delta、平台要求和发布管线影响。

## 新增配置的实现模板

新增项目默认配置：

1. 选择 owner class，通常是 `UDeveloperSettings`、`UObject` 或 subsystem settings。
2. 使用 `UCLASS(Config=Game, defaultconfig)` 或匹配现有类的 config 域。
3. 字段使用 `UPROPERTY(Config, EditAnywhere, ...)`，并给出合理 C++ 默认值。
4. 在 `DefaultGame.ini` 添加 `[/Script/Module.Class]` section 和字段。
5. 运行时通过 `GetDefault<UClass>()`、subsystem 初始化或已有 manager 读取；不要在热路径反复同步加载 soft object。
6. 如果字段属于玩家可调设置，继续接入 `GameSettingRegistry_*` 并决定值保存在 `UOrionSettingsLocal` 还是 `UOrionSettingsShared`。

新增平台配置：

1. 若是平台能力，优先用 CommonUI `PlatformTraits` 或 CommonInput platform settings。
2. 若是自定义平台参数，使用 `UPlatformSettings` 并写入 `[ClassName_<Platform> ClassName]`。
3. 对显示/音频/输入设置项，用 platform trait 做 UI gating，不要在设置 UI 中硬编码平台名。

新增用户设置默认值：

1. 本机设备相关值放 `UOrionSettingsLocal`，例如分辨率、音频设备、DLSS、帧率限制。
2. 跨设备/账号偏好放 `UOrionSettingsShared` 或对应 save game。
3. 平台默认值写 `<Platform>GameUserSettings.ini` 只用于初始默认，不要假设会覆盖玩家保存值。
4. 任何会出现在设置页的字段，还要读取 `unreal-game-settings-framework`，补齐 registry、Apply/Cancel、VisualData 和保存验证。

## 验证清单

- 已确认配置文件所在层级和目标平台。
- 已反查 owner class、`UPROPERTY(Config)` 和读取点。
- 已确认新增 asset path 符合资产管理 Skill。
- 已确认平台 trait 与设置 UI 显隐逻辑一致。
- 修改 packaging 或 crypto 后，至少用目标打包 profile/UAT 日志验证配置被读取。
- Crypto 验证只看“是否读取/启用”，不输出 key value。

## 常见问题

### Runtime 插件脚本包在蓝图加载时缺失

现象：Editor 启动或 PIE 前日志出现 `VerifyImport: Failed to find script package for import object 'Package /Script/<PluginModule>'`，随后 Blueprint 报结构、枚举、函数或 Subsystem 节点缺失，但插件本身已在 `.uproject` 启用并且模块能编译。

原因：依赖该模块反射类型的资产被编辑器资产校验、缩略图生成、蓝图编译或 PIE 预加载提前加载，而插件 Runtime 模块的 `.uplugin` `LoadingPhase` 过晚，例如 `PostDefault`，导致 `/Script/<PluginModule>` 还未注册。若一个早加载蓝图间接依赖多个 Runtime 插件脚本包，只提前其中一个模块仍可能继续报下一个 `/Script/<DependencyModule>` 缺失。

修复：先确认模块确实是 Runtime、UHT 已生成对应 `.generated.h/.gen.cpp`、二进制模块存在；若这些都成立，把该模块和直接依赖链中需要被资产早期解析的 Runtime 模块 `LoadingPhase` 提前到 `Default` 或 `PreDefault` 等合适阶段。资产校验、GameFeature 扫描或编辑器启动期就会解析的脚本包，优先用 `PreDefault`；普通运行时才需要的模块保持原阶段，避免无意义提前加载。不要先重刷或重建无关蓝图资产。

验证：重新编译 Editor，重启可见 Editor，日志中不再出现该 `/Script/<PluginModule>` 缺失；再运行目标 PIE 或蓝图编译验证。若缺失模块名变化，说明前一个模块已加载，继续按依赖链处理新的脚本包，不要把它误判为同一个修复无效。
