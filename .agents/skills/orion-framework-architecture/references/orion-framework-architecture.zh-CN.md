# Unreal 框架架构导航

## 目录

- 使用边界
- 根目录职责
- Source 模块职责
- Target 与构建变体
- 核心插件地图
- 代码落点决策
- 资产与配置落点
- 验证清单
- 常见错误

## 使用边界

本 Skill 解决“新代码、新资产、新配置应该放在哪里、依赖谁、用哪个目标验证”的问题。它不是具体 UE API 手册；当任务进入生命周期、反射、委托、网络、UMG、GAS、输入或 OnlineSubsystem 细节时，继续读取对应专项 Skill 和真实源码。

不要把宿主项目名、绝对路径或机器路径写进 Skill、示例代码或新文档。需要说明路径时使用相对路径，例如 `Source/<ModuleName>`、`Plugins/<PluginName>`、`Content/UI`、`Plugins/GameFeatures/<FeatureName>/Content/UI`。

## 根目录职责

| 目录 | 职责 |
| --- | --- |
| `Build` | 平台构建资源、应用图标、Pak 黑名单、文件打开顺序、平台 PipelineCaches。Windows 应用图标默认是 `Build/Windows/Application.ico`；替换各平台应用 Logo 时读取 `../orion-build-platform-icons/SKILL.md`。 |
| `CollectedPSOs` | PSO 收集输出和后续整理入口。正式 PSO 缓存也可能进入 `Build/<Platform>/PipelineCaches`。 |
| `Config` | 引擎、游戏、输入、GameplayTags、Scalability、Crypto、Niagara、平台覆盖、本地化 gather/import/export/compile 配置。 |
| `Content` | 正式资产根。只做顶层 taxonomy 判断，不为泛化任务深扫整个目录。 |
| `Plugins` | 框架插件、第三方插件、GameFeature 插件和可插拔系统。 |
| `Source` | C++ 模块和 Target 定义。先读 `*.Build.cs` 与 `*.Target.cs` 再判断依赖和构建目标。 |
| `.gitattributes` / `.gitignore` | Git LFS、忽略规则和 `Build` 内白名单。不要假设 `Build` 全部被忽略。 |

## Source 模块职责

| 层级 | 默认职责 |
| --- | --- |
| `GameCore` | 可复用运行时核心：角色/玩家/会话/设置/Experience/GameFeature 接口、消息、基础 UI 支撑、框架级 Gameplay 入口。默认 protected base layer，除非用户明确允许，否则不要新增或修改业务代码。 |
| `GameUI` | UI 框架：HUD、Frontend、Menu、Settings、Theme、UI Subsystem、CommonUI/UMG 基类和可复用控件。 |
| `AnimFramework` | 动画、第一人称、武器、相机、动画 Ability 辅助和角色表现框架。 |
| `BBL` | Blueprint Bridge Layer。只做蓝图友好的 facade、子类、桥接类型和暴露入口；不要把主要业务逻辑写在这里。 |
| `<GameModule>` | 宿主游戏特定运行时逻辑：游戏规则、具体角色、输入封装、存档、团队、渲染/平台集成和项目专属 UI glue。 |
| `<EditorModule>` | 编辑器扩展、EditorEngine、资产校验、模板、details customization、命令和编辑器-only 工具。 |

选模块前先回答：该能力是否应该被多个游戏复用？是否只服务当前宿主游戏？是否只在编辑器运行？是否只是为了让 Blueprint 能调用已有 C++？答案决定落点。

## Target 与构建变体

Target 文件在 `Source/*.Target.cs`。不要在 Skill 或脚本里写死具体 Target 名；从当前工程读取：

- `Game`：普通客户端/本地游戏目标。
- `Client`：网络客户端目标。
- `Server`：Dedicated Server 目标，重点检查 server-only 平台限制和 Shipping checks。
- `Editor`：编辑器目标，可以依赖 Editor 模块和 UnrealEd。
- `Steam` 或平台变体：通常通过 `CustomConfig`、`GlobalDefinitions` 或派生 Target 开启平台/渠道宏。

共享 Target 设置可能负责 IncludeOrder、DefaultBuildSettings、Shipping 日志/检查、禁止生成 ini、GameFeature 插件扫描和插件启停。改构建行为前必须读共享函数，不要只改单个 Target。

## 核心插件地图

| 插件或插件组 | 典型用途 |
| --- | --- |
| `CommonGame` / `CommonUser` / `CommonLoadingScreen` / `CommonInputSystem` | CommonGame 风格基础框架、用户、加载屏、输入设备和 UI 输入集成。 |
| `ModularGameplayActors` | 模块化 Actor/GameState/Controller/Component 扩展。 |
| `GameplayMessageRouter` | 基于 GameplayTag channel 的运行时消息总线、verb message、异步监听和 Blueprint 节点；具体收发、委托对比和网络桥接规则继续读取 `../orion-gameplay-message-router/SKILL.md`。 |
| `GameInventorySystem` / `InteractionSystem` | 交互目标、交互查询、交互 AbilityTask 和附近交互授权。 |
| `GameSettings` | 设置注册表、设置值、条件、数据源和设置 UI 支撑。 |
| `GameReplaysSystem` | 回放子系统和 replay 入口。 |
| `GameSubtitles` | 字幕显示、媒体字幕和 SubtitleDisplaySubsystem。 |
| `UIExtension` | UI extension point、动态注册和插槽式 UI 扩展。 |
| `OrionSteam` 相关模块 | Steam SDK、OnlineSubsystem、Sockets、WebAPI、shared types。按真实 `.uplugin` 和 `Build.cs` 确认模块名；实现或排查时继续读取 `../orion-online-steam-framework/SKILL.md`。 |
| `OrionVoiceChat` | 语音聊天运行时封装。 |
| `ProjectAcoustics` / `SteamAudio` | 空间音频、烘焙、spatializer 和音频插件集成。 |
| `DLSS` / `NIS` / `Streamline` | NVIDIA 图形增强、Reflex、DLSSG、Blueprint 支撑和 RHI/shader 模块。 |

第三方或平台插件如果同时有 Runtime、Editor、SDK、WebAPI、Sockets 子模块，新增依赖时只依赖所需层，不要把 Editor 或 WebAPI 依赖误加到普通 Runtime 模块。

音频、语音聊天、空间音频、MetaSound、AudioMixer、AudioModulation、`CoreAudioSettings`、`DefaultEngine.ini` 音频平台插件或 `Content/Audio` 资产继续读取 `../orion-audio-framework/SKILL.md`；本架构文档只判断插件组和模块落点。

## 代码落点决策

1. 可复用框架能力：优先确认是否已有 GameCore 抽象；不要默认修改 GameCore。需要框架级变更时先读取 `../orion-gamecore-framework/SKILL.md` 并等待用户明确允许。
2. 游戏特定规则、存档、团队、具体 pawn/player 行为：优先 `<GameModule>`，通常从 OrionGame 对应派生层继续继承。
3. UI 基类、UI 子系统、通用控件、设置界面基础能力：优先 `GameUI`；具体 Widget 资产仍走 `Content/UI` 或 GameFeature `Content/UI`。
4. 动画、武器表现、第一人称表现、动画驱动 Ability 支撑：优先 `AnimFramework`。
5. 只是为了让 Blueprint 继承或调用已有 C++：放 `BBL`，并保持薄桥接。
6. 只在编辑器中使用：放 `<EditorModule>` 或插件 Editor 模块，并用 `WITH_EDITOR` 保护跨边界代码。
7. 某个独立玩法模式或 DLC 式玩法：放 `Plugins/GameFeatures/<FeatureName>`，代码和资产都走 GameFeature 生命周期。
8. 跨系统通信：先考虑 `GameplayMessageRouter` 或已有框架消息类型，不要直接做硬引用链；如果消息需要跨 server/client，继续读取 `../orion-gameplay-message-router/SKILL.md` 和复制相关 Skill。
9. 玩家设置：优先接入 `GameSettings` 和 UI 设置框架。
10. UI 插槽/插件化 UI：优先 `UIExtension`，不要在宿主 HUD 中写死所有 Widget。

## 资产与配置落点

资产命名和目录以 `../orion-asset-management/SKILL.md` 为准。架构层面只做入口判断：

- ProjectAcoustics 内容：`Content/Acoustics`。
- 音频 Blueprint、Sound、Cue、Attenuation、Mix：`Content/Audio`。
- Animation Sequence、Level Sequence、过场资产：`Content/Cinematics`。
- 主要 Gameplay 蓝图和玩法数据：`Content/GamePlay`。
- 基础 Gameplay Ability：`Content/GamePlay/AbilitySystem/Abilities`。
- 本地化：项目根 `Localization`，不要放进 `Content`。
- 视频源文件和 movie 资产：`Content/Movies`；`.bk2`、Bink、启动/加载屏视频、Media Framework 和 movie staging 继续读取 `../orion-movie-media-framework/SKILL.md`。
- 系统性、全局配置、框架运行时资产：`Content/System`。
- UI、UMG、CommonUI、Font、Brush、Style：`Content/UI`。
- 特定玩法：`Plugins/GameFeatures/<FeatureName>/Content/Experiences|Game|Player|System|UI`。

配置文件先查 `Config/Default*.ini` 和平台目录，例如 `Config/Windows`、`Config/Linux`、`Config/Android`。修改配置时确认是否应该是默认配置、平台覆盖、用户设置，还是插件自带 config。

`DefaultGame.ini`、平台 `Game.ini`、平台 `GameUserSettings.ini`、`DefaultCrypto.ini`、`ProjectPackagingSettings`、AssetManager、CommonInput/CommonUI platform traits 和“用户可以配置哪些参数”继续读取 `../orion-project-config/SKILL.md`。本架构 Skill 只判断配置属于哪一层，不展开每个字段的语义。

`MoviePlayerSettings`、`StartupMovies`、Bink `.bk2` 配置、`bSkipMovies`、`UFSMovies`、`NonUFSMovies` 和 `Content/Movies` 打包 staging 继续读取 `../orion-movie-media-framework/SKILL.md`。本架构 Skill 不展开视频格式转换或平台 Media 插件差异。

编辑器扩展、EditorEngine、ToolMenus、DataValidation、GameplayCue 编辑器委托或 `DefaultEditor*.ini` 配置，继续读取 `../orion-editor-extension-framework/SKILL.md`；架构 Skill 只负责判断落点和模块边界。

## 验证清单

实现或生成代码前：

1. 已读 `.uproject` 或 `.uplugin`，确认插件启用状态。
2. 已读目标模块 `*.Build.cs`，确认依赖层级。
3. 已读相关 `*.Target.cs`，确认构建变体和共享设置。
4. 已用源码导航确认父类、生命周期和调用点。
5. 已按资产管理 Skill 校验新资产路径和命名。

实现后：

1. C++ 改动至少用对应 Editor/Game target 做一次构建提示或实际构建。
2. Server、Client、Steam、Editor-only 行为涉及变体时，分别确认宏、Target、插件和模块依赖。
3. Blueprint/UMG/MCP 资产创建后必须保存并验证 `.uasset` 落盘。
4. GameFeature 改动验证加载、激活、反激活、卸载和 cook/打包可见性。
5. 配置改动验证目标平台实际读取的 config 层级。

## 常见错误

### 把业务逻辑写进 BBL

现象：Blueprint bridge 类越来越厚，开始持有核心状态或复杂流程。

修复：把业务逻辑移到 `<GameModule>`、GameFeature 插件或相应领域模块；只有用户明确允许框架级改动时，才考虑修改 `GameCore`。BBL 只暴露继承点、函数入口或 Blueprint-friendly 类型。

### Editor 依赖进入 Runtime

现象：Runtime 模块依赖 `UnrealEd`、Editor-only 类或编辑器插件，导致 Game/Server 构建失败。

修复：移动到 `<EditorModule>` 或插件 Editor 模块；共享类型放 Runtime，编辑器操作放 Editor，并使用 `WITH_EDITOR` 保护必要声明。

### GameFeature 内容散落到全局 Content

现象：某个玩法的 UI、Ability、Experience 或 Actor 放进全局 `Content/GamePlay`，导致玩法难以拆分。

修复：玩法特定内容放 `Plugins/GameFeatures/<FeatureName>/Content` 固定子目录；只有框架基础资产留在全局 Content。

### 只看源码目录不看 Target

现象：在 Editor 里可编译，但 Client/Server/Steam 变体失败。

修复：先读共享 Target 设置和派生 Target；涉及平台、OnlineSubsystem、Steam、Server-only 或 Shipping 行为时，用对应目标验证。
