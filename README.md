# Orion

<p align="center">
  <a href="#简体中文">简体中文</a> |
  <a href="#english">English</a>
</p>

<p align="center">
  <img alt="Version" src="https://img.shields.io/badge/Version-1.0.4-0E1128?style=flat-square">
  <img alt="Unreal Engine" src="https://img.shields.io/badge/Unreal%20Engine-5.8-0E1128?style=flat-square&logo=unrealengine&logoColor=white">
  <img alt="Platform" src="https://img.shields.io/badge/Primary%20Platform-Windows%20%2F%20Steam-1b2838?style=flat-square&logo=steam&logoColor=white">
  <img alt="Localization" src="https://img.shields.io/badge/Localization-14%20Cultures-2E7D32?style=flat-square">
  <img alt="AI Skills" src="https://img.shields.io/badge/AI%20Skills-Project%20Local-6A4CFF?style=flat-square">
</p>

---

> **开发状态 / Development Status**
>
> 当前版本：1.0.4。Orion 目前仍处于初代版本阶段，许多工程细节、工具链体验和内容示例还在持续完善中。当前仓库代表正在开发中的框架基线，接口、文档和工作流可能会随着后续版本继续调整。
>
> Current version: 1.0.4. Orion is currently a first-generation version. Many engineering details, toolchain workflows, and content examples are still being refined. This repository represents an actively developed framework baseline, and APIs, documentation, and workflows may continue to change in future releases.

## 简体中文

Orion 是一个基于 Unreal Engine 5.8 的模块化游戏制作框架。它把可复用的游戏基础系统、UI、输入、GAS、GameFeature、Steam、浏览器、音频生成、语音、存档、渲染和本地化能力组织成清晰的工程层级，并通过项目本地 `.agents/skills` 为 AI 辅助开发提供可复用的工程知识。

目标是让创作者能从“描述玩法”快速进入“可运行原型”，同时保留 C++ 工程的可维护性、扩展性和发布能力。

当前版本：1.0.4

官网：[https://orionue.com](https://orionue.com)

### 目录

- [项目特点](#项目特点)
- [更新内容](#更新内容)
- [功能概览](#功能概览)
- [工程结构](#工程结构)
- [AI Skill 系统](#ai-skill-系统)
- [快速开始](#快速开始)
- [常用构建目标](#常用构建目标)
- [本地化与语言](#本地化与语言)
- [发布与打包](#发布与打包)
- [开发文档](#开发文档)
- [联系方式](#联系方式)
- [版权与许可](#版权与许可)

### 项目特点

- **UE 5.8 模块化框架**：以 `GameCore`、`GameUI`、`BBL`、`OrionGame`、`OrionEditor` 分层组织运行时、UI、蓝图桥接、宿主游戏逻辑和编辑器扩展。
- **Experience + GameFeature 工作流**：支持通过 Experience、ActionSet、GameFeature 插件拆分玩法、输入、Ability、UI 和数据。
- **AI 友好的工程知识库**：项目内置 `.agents/skills`，把架构、代码风格、资产、打包、MCP、GAS、UMG、Steam 等规则固化为可复用 Skill。
- **面向发布的系统能力**：包含 Steam OnlineSubsystem、Steam Sockets、Steam Web API、OrionBrowser、OrionAudioSystem、语音聊天、加载屏、存档、设置、本地化、PSO、DLSS/NIS/Streamline 等发布相关能力。
- **C++ 与 Blueprint 协同**：核心逻辑保留在 C++ 层，常用扩展点通过 BBL、GameFeature 和蓝图资产暴露给设计与内容制作流程。

### 更新内容

#### 1.0.4

- **OrionAudioSystem 插件落地**：新增 `Plugins/Runtime/OrionAudioSystem`，启用 `OrionAudioGenerationComponent`、fire-and-forget 与 managed 音频生成组件，支持蓝图音频播放、世界位置播放、多人广播和运行时衰减更新。
- **OrionBrowser 与 GameUI 弹窗体系**：新增 Win64 CEF 浏览器插件 `OrionBrowser`、`OrionBrowserHelper` 程序目标和 `UGameUIWebBrowser`；GameUI 扩展为数据驱动的通用弹窗队列，支持文本、图片、奖励、自定义 Widget、HTML/URL 内容、预加载和前端 Flow Action。
- **本地化流水线扩展到 14 个 Culture**：`Config/Localization`、`DefaultGame.ini` 与语言设置同步扩展到 `en`、`zh-Hans`、`fr`、`it`、`de`、`es`、`ar`、`ja`、`ko`、`pl`、`pt-BR`、`es-419`、`ru`、`zh-Hant`；新增 archive 同步、覆盖、填充、AI 翻译脚本和 `OrionLocalizationToolset`。
- **ProjectAcoustics 本地烘焙闭环**：补齐 AcousticProxy、材质指定、Probe 计算、LocalBake、ACE 导入、运行时绑定、portaling/runtime 调优脚本和 bake commandlet；新增本地 Triton 处理程序、probe health 检查和完整中文流程文档。
- **MetaSound、纹理和蓝图资产自动化**：`OrionProjectToolsets` 新增 `OrionMetaSoundToolset`，并加入 `unreal-metasound`、`unreal-texture-management`、`orion-python-blueprint-assets` 等 Skill，覆盖 MetaSound 图编辑、纹理体积优化和 MCP 不可用时的 Python 资产兜底。
- **工程与发布稳定性增强**：补充 Installed Build、VS/Rider 工程生成、第三方插件导入、Splash 导入、SteamAudio 检查、浏览器 CEF staging、`.gitattributes`/`.gitignore` 二进制追踪和 packaging culture resolution 脚本。

#### 1.0.3

- **PSO 收集与稳定缓存工作流落地**：新增 `UOrionPSOCaptureSubsystem`，可通过 packaged game 参数启用第三视角巡航相机自动收集 PSO；新增 `OrionPSOFilter` Commandlet 和 `orion-pso-caching` Skill，覆盖 `.shk`、`.rec.upipelinecache`、`.spc`、direct stable `.stable.upipelinecache`、全量/增量/指定地图收集、转换、注入和打包验证。
- **PSO 打包配置补强**：`WindowsEngine.ini` 更新 PSO CVar，使用 `r.PSOPrecache.ProxyCreationStrategy=1`，并通过 `r.ShaderPipelineCacheTools.IncludeComputePSODuringCook=0` 支撑 direct stable fallback；`DefaultGame.ini` 重新启用 shared material native libraries，并把 `PipelineCaches` 作为 UFS 目录随包发布。
- **ProjectAcoustics 打包混响修复**：调整 SteamAudio 反射/场景设置，新增 `orion-project-acoustics` Skill，修复 ProjectAcoustics listener、SourceDataOverride、空间混响虚拟扬声器和 UE 5.8 audio thread 生命周期相关问题；同时把 `/SteamAudio/Materials` 纳入 Always Cook，避免打包版混响材质缺失。
- **音频设置扩展**：用户音频设置新增 Steam Audio GPU Acceleration 开关，并在运行时检测 OpenCL runtime；ProjectAcoustics、SteamAudio、HDR Audio 和用户设置的组合更清晰。
- **项目 Skill 命名收敛**：大量项目本地 Skill 从通用 `unreal-*` 迁移为 `orion-*`，新增 `orion-asset-management`、`orion-packaging`、`orion-project-cleanup`、`orion-release-publishing`、`orion-engine-upgrade-regression-todos` 等项目专用入口。
- **MCP 与发布文档补充**：新增 `.agents/MCP/README.md` 和 HTTP MCP 配置模板，补充本地 Unreal MCP 连接说明；新增发布与 PSO 相关脚本说明，让打包、收集、转换、验证可按项目流程复用。

#### 1.0.2

- **UE 5.8 代码与配置稳定化**：整理 UE 5.8 迁移后的 Target、插件、配置和运行时兼容问题；Steam Target 的 `CustomConfig=Steam` 与 `WITH_STEAM=1` 逻辑集中到共享 Target 设置中。
- **输入与 UI 体验增强**：启用 `XInputDevice`、`GameInputWindows`、`PlayerInputDebugger`，默认玩家输入切换到 `InputSystemPlayerInput`；按钮、Action Widget 和 Tab List 会根据当前输入方式隐藏不可解析的键鼠图标，并补充延迟标记/Flash Indicator 支撑。
- **设置系统扩展**：新增 HDR 校准、显示器选择、动态分辨率、窗口/分辨率、帧率、Gamepad、Game、Video 和 DLC 管理相关设置入口，让用户设置页覆盖更多运行时选项。
- **加载屏与前端流程修正**：`CommonLoadingScreen` 提前到 `PreEarlyLoadingScreen`，支持 split viewport/player loading widgets；启动流程改为在 Press Start 或 Main Screen 真正入栈后再完成启动加载屏，避免超时后强行继续。
- **平台配置与项目 Skill 整理**：新增 `DefaultDeviceProfiles.ini`，完善 Windows dynamic resolution、High DPI、PSO 和移动端 Device Profile；项目 Skill 迁移为 `orion-framework-skill-authoring`、`unreal-render-commands`，并新增蓝图迁移修复、相机 FOV 诊断等入口。

#### 1.0.1

- **引擎基线升级至 Unreal Engine 5.8**：`Orion.uproject` 的 `EngineAssociation` 已更新为 `5.8`，Target 规则切换到 UE 5.8 对应的 `BuildSettingsVersion.V7`，并补充构建环境覆盖以适配升级后的编译要求。
- **Steam 专用配置拆分**：新增 `Config/Custom/Steam/DefaultEngine.ini`，Steam 打包与运行配置改为通过 `customconfig=Steam` 读取独立的 OnlineSubsystem、SteamCoreSockets、NetDriver 和连接参数。
- **渲染配置迁移与审计**：围绕 UE 5.8 RendererSettings / CVar 规则重整 `Config/DefaultEngine.ini` 与 `Config/DefaultScalability.ini`，补充 UE 5.8 渲染命令 Skill、实验表和项目候选配置记录。
- **AI / MCP 工具链升级**：启用 `OrionProjectToolsets`，新增 VS 工程生成、项目清理、UI 蓝图框架、UE 5.8 渲染命令等项目本地 Skill，并整理 MCP / Toolset 兼容层。
- **插件与发布链路更新**：更新 DLSS、NIS、Streamline、OrionSteam、ProjectAcoustics 等插件或配置，清理旧 Toolset 依赖，并让打包 Skill 明确使用 Steam CustomConfig 工作流。

### 功能概览

| 领域 | 能力 |
| --- | --- |
| 游戏框架 | GameMode、GameState、PlayerController、PlayerState、PawnData、Experience、GamePhase、GameFeature 生命周期 |
| Ability 系统 | GameplayAbilities、AbilitySet、GameplayCue、GameplayEffect、Ability 输入激活与网络语义 |
| UI | CommonUI、GameUI、HUD Layout、菜单、设置页、消息/确认框、数据驱动弹窗队列、HTML/URL 弹窗、`UGameUIWebBrowser`、UIExtension 插槽、开发 HUD、Action 图标可见性、Tab/List 输入提示 |
| 输入 | EnhancedInput、CommonInput、`InputSystemPlayerInput`、输入标签、GameInput/XInput/WinDualShock、手柄/键鼠切换、玩家改键、延迟标记 |
| 设置 | Video/Game/Gamepad/DLC 设置注册表、HDR 校准、显示器选择、动态分辨率、窗口/分辨率、帧率与用户配置 |
| 在线与 Steam | `OrionSteam`、`OrionOnlineSubsystemSteam`、OnlineSubsystem、Session、Lobby、好友邀请、`OrionSteamSockets`、Steam Web API |
| 音频与语音 | AudioMixer、AudioModulation、`OrionAudioSystem` 音频生成组件、ProjectAcoustics 空间混响与本地烘焙、SteamAudio、Steam Audio GPU Acceleration、MetaSound 工具链、`OrionVoiceChat`、输入/输出设备切换 |
| 存档 | Archive 管理、世界存档、玩家存档、自动保存、前端存档入口 |
| 队伍 | TeamSubsystem、TeamInfo、队伍显示数据、AI 敌友态度、友军伤害判断 |
| 背包与交互 | GameInventorySystem、InteractionSystem、交互检测、拾取/装备/丢弃、交互 UI |
| 渲染 | Lumen、Nanite、Ray Tracing、DLSS、NIS、Streamline Reflex/DLSSG、Device Profiles、动态分辨率、PSO 采集、stable PipelineCaches、平台画质配置 |
| 发布与打包 | Windows/Steam 打包、Steam CustomConfig、CEF/OrionBrowser staging、PSO 收集与注入、ProjectAcoustics/SteamAudio 资源 staging、culture resolution、打包版 smoke test |
| 本地化 | 14 个 staged cultures，含 Game 与 EngineOverrides 本地化目标、archive/PO/locres 流水线、AI 翻译辅助和游戏内语言设置 |
| MCP/自动化 | 项目内 MCP、HTTP MCP 配置、AIAssistant 与 Toolsets，用于资产、蓝图迁移修复、UMG、Niagara、PCG、GameplayTags、渲染命令、PSO、本地化、MetaSound、纹理管理和编辑器自动化 |

### 工程结构

```text
.
├── .agents/skills/          # 项目本地 AI Skills
├── Build/                   # 平台构建资源、图标、PipelineCaches
├── CollectedPSOs/           # PSO 录制与转换输入输出
├── Config/                  # 默认配置、平台配置、本地化配置、打包配置
├── Content/                 # 项目正式资产
├── Plugins/                 # 框架插件、MCP Toolsets、GameFeature、Steam、Audio、Browser、DLSS 等
├── Source/                  # C++ 模块与 Target
└── Orion.uproject           # UE 5.8 工程入口
```

#### Source 模块

| 模块 | 类型 | 说明 |
| --- | --- | --- |
| `GameCore` | Runtime | 可复用运行时核心，包括 AssetManager、GameInstance、Experience、GAS 基类、Session、Player、CoreGameData 等。 |
| `GameUI` | Runtime | UI 框架层，包括 CommonUI 基类、HUD Layout、设置界面、主题、消息弹窗、加载屏 UI、Indicator 等。 |
| `BBL` | Runtime | Blueprint Bridge Layer，用于提供蓝图友好的 facade、派生类和桥接入口。 |
| `OrionGame` | Runtime | 宿主游戏逻辑，包括角色、玩家、队伍、存档、设置、在线、输入、前端流程和渲染集成。 |
| `OrionEditor` | Editor | 编辑器扩展、PIE 钩子、项目编辑器工具和编辑器配置入口。 |

#### 主要插件组

| 插件组 | 说明 |
| --- | --- |
| `Plugins/Common/*` | CommonGame、CommonUser、CommonInputSystem、CommonLoadingScreen、ModularGameplayActors 等基础框架插件。 |
| `Plugins/GameFeatures/*` | GameFeature 插件，当前包含 `OrionGameTemplate`。 |
| `Plugins/OrionSteam` | Steam SDK、OnlineSubsystem、Sockets、Web API 与 shared types。 |
| `Plugins/Runtime/OrionAudioSystem` | 项目本地音频生成组件、蓝图播放入口、多人 one-shot 音频和运行时衰减更新。 |
| `Plugins/OrionBrowser` | 项目本地 CEF 浏览器内核、Win64 helper 子进程、Slate/UMG 浏览器 Widget 和 HTML/视频展示能力。 |
| `Plugins/Audio/OrionVoiceChat` | 跨平台语音聊天封装，依赖 AudioCapture。 |
| `Plugins/Audio/ProjectAcoustics` | ProjectAcoustics 空间音频、AcousticProxy、Probe、LocalBake、ACE 数据和运行时声学查询。 |
| `Plugins/Audio/SteamAudio` | Steam Audio 空间化、HRTF、遮挡、混响、probe 和 GPU 加速相关能力。 |
| `Plugins/GameInventorySystem` | 背包、交互和物品系统。 |
| `Plugins/GameplayMessageRouter` | 基于 GameplayTag channel 的运行时消息总线。 |
| `Plugins/GameSettings` | 游戏设置注册表、设置项和 UI 支撑。 |
| `Plugins/UIExtension` | 插槽式 UI 扩展系统。 |
| `Plugins/MCP/*` | 项目 MCP 服务与 Toolsets，用于编辑器自动化和 AI 工具调用。 |
| `Plugins/DLSS/*` | DLSS、NIS、Streamline、Reflex、Frame Generation 等图形增强插件。 |
| 引擎/平台插件 | `XInputDevice`、`GameInputWindows`、`PlayerInputDebugger`、`PlatformDLC`、`AIAssistant` 等 UE 5.8 运行与工具链插件。 |

### AI Skill 系统

项目内置 `.agents/skills`，用于让 AI 在修改工程前自动读取项目规则、模块边界和验证方式。核心规则写在 `AGENTS.md`：修改代码前必须遵守项目 Skill，生成的 Windows 文本文件必须使用 CRLF。

#### Skill 分类

| 分类 | 代表 Skill | 用途 |
| --- | --- | --- |
| 工程总览 | `orion-framework-architecture`、`unreal-source-code-navigator`、`unreal-source-index`、`orion-framework-skill-authoring`、`orion-engine-upgrade-regression-todos` | 判断模块边界、插件归属、Target、Build.cs 依赖、源码导航、项目 Skill 编写规则和 UE 升级回归事项。 |
| 代码规范 | `orion-code-style` | Orion C++/Build.cs/Target.cs 风格、版权头、Tab 缩进、CRLF、检查脚本。 |
| 资产与编辑器 | `orion-asset-management`、`orion-editor-extension-framework`、`orion-mcp-workflow`、`orion-mcp-project-toolsets`、`orion-python-blueprint-assets`、`unreal-blueprint-migration-repair`、`unreal-texture-management` | 资产命名、蓝图迁移修复、UMG/关卡/Toolset 自动化、编辑器扩展、纹理管理、Python 资产兜底和 MCP 连接。 |
| 玩法框架 | `orion-gamecore-framework`、`orion-gamemode-experience-framework`、`orion-gamefeatures`、`unreal-gameplayabilities` | GameCore、Experience、GameFeature、GAS、GamePhase、AbilitySet。 |
| UI 与输入 | `orion-gameui`、`orion-umg`、`orion-ui-blueprint-framework`、`orion-browser-framework`、`unreal-commoninput`、`orion-input-framework`、`unreal-enhancedinput`、`unreal-inputcore` | CommonUI/UMG、弹窗队列、HTML/CEF 嵌入、输入标签、EnhancedInput、手柄/键鼠、UI 输入。 |
| 网络与在线 | `orion-network-replication-framework`、`unreal-replicationgraph`、`orion-online-steam-framework` | 复制、RPC、RepGraph、Steam、Session、好友邀请、Steam Sockets。 |
| 系统能力 | `orion-system-framework`、`orion-savegame-framework`、`orion-teams-framework`、`orion-inventory-interaction-framework` | AssetManager、存档、队伍、背包、交互、世界/玩家系统。 |
| 内容与发布 | `orion-audio-framework`、`orion-audio-system`、`orion-steam-audio`、`orion-project-acoustics`、`unreal-metasound`、`orion-rendering-framework`、`unreal-render-commands`、`orion-pso-caching`、`orion-localization-framework`、`orion-movie-media-framework`、`orion-packaging`、`orion-release-publishing`、`unreal-installed-build`、`unreal-thirdparty-plugin` | 音频、语音、ProjectAcoustics、SteamAudio、MetaSound、渲染命令、PSO、Device Profile、本地化、视频、Windows/Steam 打包、Installed Build 和发布。 |

#### 使用方式

1. 在 Codex/AI 助手中打开项目根目录，即指定该工程目录为项目。
2. 描述目标，例如“新增一个 GameFeature 玩法”“修复 Steam 邀请”“创建一个 UMG 设置页”。
3. AI 会根据 `AGENTS.md` 和 `.agents/skills` 自动选择相关 Skill。

### 快速开始

#### 环境要求

- Unreal Engine 5.8。
- Windows + Visual Studio 2022，安装 C++ 桌面开发与 Unreal 相关组件。
- Git LFS，用于 `.uasset`、`.umap`、二进制库和大型资产。
- Steam 相关功能需要 Steam 客户端、Steamworks AppId/配置和对应 Target。

#### 获取工程

```powershell
git lfs install
git clone <your-repository-url> Orion
cd Orion
git lfs pull
```

如果你是从压缩包或内部同步目录获取工程，确认以下内容完整：

- `Orion.uproject`
- `Source/`
- `Plugins/`
- `Config/`
- `Content/`
- Git LFS 管理的大型二进制资产

#### 打开编辑器

1. 右键 `Orion.uproject`，选择使用 Unreal Engine 5.8 生成项目文件。
2. 打开 `Orion.sln` 或直接打开 `Orion.uproject`。

### 常用构建目标

| Target | 用途 |
| --- | --- |
| `OrionEditor` | 编辑器目标，日常开发、蓝图资产、MCP/Toolset、编辑器扩展验证。 |
| `OrionGame` | 普通 Win64 游戏目标。 |
| `OrionClient` | 网络客户端目标。 |
| `OrionServer` | Dedicated Server 目标。 |
| `OrionGameSteam` | Steam 游戏目标，使用 `CustomConfig=Steam` 并定义 `WITH_STEAM=1`。 |
| `OrionServerSteam` | Steam Dedicated Server 目标，使用 Steam 自定义配置。 |

### 本地化与语言

README 顶部提供 `简体中文 | English` 锚点切换。

工程本地化配置包含：

- Game native culture：`zh-Hans`
- EngineOverrides native culture：`en`
- Cook/Stage cultures：`en`、`zh-Hans`、`fr`、`it`、`de`、`es`、`ar`、`ja`、`ko`、`pl`、`pt-BR`、`es-419`、`ru`、`zh-Hant`
- 本地化配置目录：`Config/Localization`
- 本地化资源目录：`Content/Localization`

游戏内语言切换由项目设置、UI 设置页和本地化资源共同决定；新增语言时请使用 `orion-localization-framework` Skill，必要时通过 `OrionLocalizationToolset` 或 archive 同步/覆盖/填充脚本执行 Gather/Export/Import/Compile/Reports 流程，避免只改打包配置而漏掉本地化资源。

### 发布与打包

`Config/DefaultGame.ini` 中的打包配置当前使用：

- Build target：`OrionGame`
- IoStore：启用
- Pak：启用
- Chunk：启用
- 压缩：Oodle Kraken
- CulturesToStage：`en`、`zh-Hans`、`fr`、`it`、`de`、`es`、`ar`、`ja`、`ko`、`pl`、`pt-BR`、`es-419`、`ru`、`zh-Hant`
- Always Cook：`/NNEDenoiser`
- Always Stage as UFS：`Acoustics`

Steam 发布路径请使用 Steam Target，并验证 `Config/Custom/Steam` 或相关 Steam 配置被实际读取。当前 Steam 配置以 `DefaultPlatformService=OrionSteam`、`NativePlatformService=OrionSteam`、`AdditionalModulesToLoad=OrionOnlineSubsystemSteam`、`OrionSteamSocketsNetDriver` 和 `OrionOnlineSteamAuthComponentModuleInterface` 为核心；浏览器内容还需要确认 CEF runtime 与 `OrionBrowserHelper.exe` 被正确 staged；排查时优先查看日志中是否出现 `Created online subsystem instance for: OrionSteam`。

使用安装版引擎打包 Steam Windows 版本时，若 packaged bootstrap 没有携带 `-CustomConfig=Steam`，可使用 `.agents/skills/orion-packaging/scripts/patch-windows-bootstrap-customconfig.ps1` 修补启动参数。验证不要只停在 UAT 成功，还应运行 packaged executable smoke test，确认 Steam CustomConfig、地图加载、加载屏和运行时初始化都进入预期路径。

需要收集 PSO 时使用 `orion-pso-caching` Skill：先打包并复制 `.shk`，再用 packaged game 的 `-OrionPSOCapture` 自动巡航记录 `.rec.upipelinecache`，转换为 `.spc` 或 direct stable `.stable.upipelinecache`，最后确认 `Build/<Platform>/PipelineCaches` 或 `Content/PipelineCaches/<Platform>` 的结果进入包内。

需要按本地化目标生成 Project Launcher profile 时，可使用 `.agents/skills/orion-packaging/scripts/resolve-packaging-cultures.ps1` 解析当前 culture 配置；ProjectAcoustics 本地烘焙结果、SteamAudio 资源、CEF runtime 和 `.ace` 声学数据都应在打包 smoke test 中验证 staged 文件与运行时日志。

### 开发文档

- 官网文档：[https://orionue.com/docs](https://orionue.com/docs)

### 联系方式

- 官网：[https://orionue.com](https://orionue.com)
- GitHub Issues：项目发布到 GitHub 后，建议使用 Issues 跟踪 bug、功能请求和文档问题。
- 商务、合作或支持：请通过官网公开渠道联系。

### 版权与许可

Copyright (c) 2026 Orion. All Rights Reserved.

---

## English

Orion is a modular game-development framework built on Unreal Engine 5.8. It organizes reusable gameplay foundations, UI, input, GAS, GameFeature workflows, Steam integration, browser runtime, audio generation, voice chat, save systems, rendering, packaging, and localization into clear engineering layers. It also ships project-local `.agents/skills` so AI-assisted development can follow the actual project architecture instead of relying on generic Unreal advice.

The goal is to move from a gameplay idea to a runnable prototype quickly, while keeping the maintainability, extensibility, and release discipline of a C++ Unreal project.

Current version: 1.0.4

Website: [https://orionue.com](https://orionue.com)

### Table of Contents

- [Highlights](#highlights)
- [What's New](#whats-new)
- [Feature Overview](#feature-overview)
- [Project Structure](#project-structure)
- [AI Skill System](#ai-skill-system)
- [Getting Started](#getting-started)
- [Build Targets](#build-targets)
- [Localization and Languages](#localization-and-languages)
- [Release and Packaging](#release-and-packaging)
- [Documentation](#documentation)
- [Contact](#contact)
- [Copyright and License](#copyright-and-license)

### Highlights

- **UE 5.8 modular framework**: Runtime, UI, Blueprint bridge, host-game code, and editor tooling are separated through `GameCore`, `GameUI`, `BBL`, `OrionGame`, and `OrionEditor`.
- **Experience + GameFeature workflow**: Gameplay can be split by Experience, ActionSet, GameFeature plugins, input mappings, abilities, UI, and data.
- **AI-ready engineering knowledge base**: Project-local `.agents/skills` capture architecture, code style, assets, packaging, MCP, GAS, UMG, Steam, and validation rules.
- **Release-oriented systems**: Steam OnlineSubsystem, Steam Sockets, Steam Web API, OrionBrowser, OrionAudioSystem, voice chat, loading screens, archives, settings, localization, PSO workflows, DLSS/NIS/Streamline, and platform packaging are already represented in the project.
- **C++ and Blueprint collaboration**: Core behavior stays in C++, while BBL, GameFeature assets, and Blueprint-friendly APIs expose extension points to designers and content workflows.

### What's New

#### 1.0.4

- **OrionAudioSystem plugin**: adds `Plugins/Runtime/OrionAudioSystem`, with `OrionAudioGenerationComponent`, fire-and-forget, and managed audio generation components for Blueprint playback, world-positioned audio, multiplayer broadcast playback, and runtime attenuation updates.
- **OrionBrowser and GameUI popups**: adds the Win64 CEF-based `OrionBrowser` plugin, the `OrionBrowserHelper` program target, and `UGameUIWebBrowser`; GameUI now includes a data-driven popup queue for text, images, rewards, custom widgets, HTML/URL content, preloading, and frontend Flow Actions.
- **Localization expanded to 14 cultures**: `Config/Localization`, `DefaultGame.ini`, and the language setting now cover `en`, `zh-Hans`, `fr`, `it`, `de`, `es`, `ar`, `ja`, `ko`, `pl`, `pt-BR`, `es-419`, `ru`, and `zh-Hant`; archive sync, override, fill, AI translation scripts, and `OrionLocalizationToolset` were added.
- **ProjectAcoustics local-bake workflow**: adds AcousticProxy preparation, material assignment, probe calculation, LocalBake, ACE import, runtime binding, portaling/runtime tuning scripts, and bake commandlets, plus local Triton processors, probe-health checks, and detailed Chinese workflow docs.
- **MetaSound, texture, and Blueprint asset automation**: `OrionProjectToolsets` now includes `OrionMetaSoundToolset`, with new Skills such as `unreal-metasound`, `unreal-texture-management`, and `orion-python-blueprint-assets` for MetaSound graph editing, texture-size optimization, and Python asset fallbacks when MCP is unavailable.
- **Engineering and release stability**: adds Installed Build, VS/Rider project generation, third-party plugin import, splash import, SteamAudio checks, browser CEF staging, `.gitattributes`/`.gitignore` binary tracking, and packaging culture-resolution scripts.

#### 1.0.3

- **PSO collection and stable-cache workflow**: `UOrionPSOCaptureSubsystem` now drives packaged-game PSO collection with an automated third-person roaming camera; the new `OrionPSOFilter` commandlet and `orion-pso-caching` Skill cover `.shk`, `.rec.upipelinecache`, `.spc`, direct stable `.stable.upipelinecache`, full/incremental/map-specific collection, conversion, injection, and packaging validation.
- **PSO packaging configuration**: Windows PSO CVars now use `r.PSOPrecache.ProxyCreationStrategy=1`, and `r.ShaderPipelineCacheTools.IncludeComputePSODuringCook=0` supports the direct stable fallback; packaging settings re-enable shared material native libraries and stage `PipelineCaches` as UFS content.
- **ProjectAcoustics packaged reverb fixes**: SteamAudio reflection/scene settings were adjusted, the new `orion-project-acoustics` Skill captures listener, SourceDataOverride, spatial reverb, virtual speaker, and UE 5.8 audio-thread lifecycle rules, and `/SteamAudio/Materials` is now always cooked so packaged reverb assets are present.
- **Audio settings extension**: user audio settings now expose Steam Audio GPU Acceleration with OpenCL runtime detection, clarifying how ProjectAcoustics, SteamAudio, HDR Audio, and local user settings work together.
- **Project Skill naming consolidation**: many project-local Skills moved from generic `unreal-*` names to Orion-specific `orion-*` names, with new entries such as `orion-asset-management`, `orion-packaging`, `orion-project-cleanup`, `orion-release-publishing`, and `orion-engine-upgrade-regression-todos`.
- **MCP and release documentation**: `.agents/MCP/README.md` and an HTTP MCP config template now document local Unreal MCP access; the release and PSO scripts make packaging, collection, conversion, and validation reusable through project-local workflows.

#### 1.0.2

- **UE 5.8 code and configuration stabilization**: consolidates the post-upgrade target, plugin, config, and runtime compatibility work; Steam targets now inherit shared `CustomConfig=Steam` and `WITH_STEAM=1` handling from the common target settings path.
- **Input and UI polish**: `XInputDevice`, `GameInputWindows`, and `PlayerInputDebugger` are enabled, and the default player input class now uses `InputSystemPlayerInput`; buttons, action widgets, and tab lists hide unresolved mouse/keyboard icons based on the active input method, with latency marker / flash indicator support added.
- **Expanded settings surface**: the user settings flow now covers HDR calibration, display selection, dynamic resolution, window/resolution, frame pacing, gamepad, game, video, and DLC management entries.
- **Loading screen and frontend flow fixes**: `CommonLoadingScreen` now loads at `PreEarlyLoadingScreen`, supports split viewport/player loading widgets, and completes startup loading only after the Press Start or Main Screen widget is actually pushed.
- **Platform config and Skill cleanup**: `DefaultDeviceProfiles.ini` was added, Windows dynamic resolution / High DPI / PSO settings were refined, and project Skills were reorganized around `orion-framework-skill-authoring` and `unreal-render-commands` with new Blueprint migration repair and camera FOV diagnostics entries.

#### 1.0.1

- **Engine baseline upgraded to Unreal Engine 5.8**: `Orion.uproject` now uses `EngineAssociation` `5.8`, targets use the UE 5.8-facing `BuildSettingsVersion.V7`, and build-environment overrides were added for the upgraded compilation path.
- **Steam-specific configuration split**: `Config/Custom/Steam/DefaultEngine.ini` now carries the Steam OnlineSubsystem, SteamCoreSockets, NetDriver, and connection settings loaded through `customconfig=Steam`.
- **Rendering configuration migration and audit**: `Config/DefaultEngine.ini` and `Config/DefaultScalability.ini` were reorganized around UE 5.8 RendererSettings / CVar rules, with a UE 5.8 render-command Skill, experiment tables, and project candidate configuration records added.
- **AI / MCP toolchain upgrade**: `OrionProjectToolsets` is enabled, project-local Skills were added for Visual Studio project generation, project cleanup, UI Blueprint framework work, and UE 5.8 render commands, and the MCP / Toolset compatibility layer was cleaned up.
- **Plugin and release workflow updates**: DLSS, NIS, Streamline, OrionSteam, ProjectAcoustics, and related plugin/configuration files were updated, older Toolset dependencies were removed, and the packaging Skill now documents the Steam CustomConfig workflow.

### Feature Overview

| Area | Capabilities |
| --- | --- |
| Gameplay framework | GameMode, GameState, PlayerController, PlayerState, PawnData, Experience, GamePhase, GameFeature lifecycle |
| Ability system | GameplayAbilities, AbilitySet, GameplayCue, GameplayEffect, ability input activation, network behavior |
| UI | CommonUI, GameUI, HUD Layout, menus, settings screens, dialogs, data-driven popup queues, HTML/URL popups, `UGameUIWebBrowser`, UIExtension slots, development HUD, action icon visibility, tab/list input prompts |
| Input | EnhancedInput, CommonInput, `InputSystemPlayerInput`, input tags, GameInput/XInput/WinDualShock, gamepad/mouse-keyboard switching, key remapping, latency markers |
| Settings | Video/Game/Gamepad/DLC registries, HDR calibration, display selection, dynamic resolution, window/resolution, frame pacing, user configuration |
| Online and Steam | `OrionSteam`, `OrionOnlineSubsystemSteam`, OnlineSubsystem, sessions, lobbies, friend invites, `OrionSteamSockets`, Steam Web API |
| Audio and voice | AudioMixer, AudioModulation, `OrionAudioSystem` audio generation components, ProjectAcoustics spatial reverb and local baking, SteamAudio, Steam Audio GPU Acceleration, MetaSound tooling, `OrionVoiceChat`, input/output device switching |
| Save/archive | Archive manager, world saves, player saves, autosave, frontend archive entries |
| Teams | TeamSubsystem, TeamInfo, team display assets, AI attitude, friendly-fire checks |
| Inventory and interaction | GameInventorySystem, InteractionSystem, interaction traces, pickup/equip/drop, interaction UI |
| Rendering | Lumen, Nanite, Ray Tracing, DLSS, NIS, Streamline Reflex/DLSSG, Device Profiles, dynamic resolution, PSO collection, stable PipelineCaches, platform scalability settings |
| Release and packaging | Windows/Steam packaging, Steam CustomConfig, CEF/OrionBrowser staging, PSO collection/injection, ProjectAcoustics/SteamAudio resource staging, culture resolution, packaged smoke tests |
| Localization | 14 staged cultures, with Game and EngineOverrides localization targets, archive/PO/locres workflows, AI translation assistance, and in-game language settings |
| MCP/automation | Project MCP, HTTP MCP config, AIAssistant, and Toolsets for assets, Blueprint migration repair, UMG, Niagara, PCG, GameplayTags, render commands, PSO, localization, MetaSound, texture management, and editor automation |

### Project Structure

```text
.
├── .agents/skills/          # Project-local AI Skills
├── Build/                   # Platform build resources, icon, PipelineCaches
├── CollectedPSOs/           # PSO recordings and conversion inputs/outputs
├── Config/                  # Default config, platform config, localization config, packaging config
├── Content/                 # Production assets
├── Plugins/                 # Framework plugins, MCP Toolsets, GameFeature, Steam, Audio, Browser, DLSS
├── Source/                  # C++ modules and targets
└── Orion.uproject           # Unreal Engine 5.8 project entry
```

#### Source Modules

| Module | Type | Description |
| --- | --- | --- |
| `GameCore` | Runtime | Reusable runtime foundation: AssetManager, GameInstance, Experience, GAS base classes, Session, Player, CoreGameData, and related systems. |
| `GameUI` | Runtime | UI framework: CommonUI base classes, HUD layouts, settings screens, themes, dialogs, loading-screen UI, indicators, and reusable widgets. |
| `BBL` | Runtime | Blueprint Bridge Layer for Blueprint-friendly facades, subclasses, and entry points. |
| `OrionGame` | Runtime | Host-game logic: characters, player systems, teams, archives, settings, online features, input, frontend flow, and rendering integration. |
| `OrionEditor` | Editor | Editor extensions, PIE hooks, project editor tools, and editor configuration entry points. |

#### Major Plugin Groups

| Plugin group | Description |
| --- | --- |
| `Plugins/Common/*` | CommonGame, CommonUser, CommonInputSystem, CommonLoadingScreen, ModularGameplayActors, and other framework plugins. |
| `Plugins/GameFeatures/*` | GameFeature plugins. The current project includes `OrionGameTemplate`. |
| `Plugins/OrionSteam` | Steam SDK, OnlineSubsystem, Sockets, Web API, and shared Steam types. |
| `Plugins/Runtime/OrionAudioSystem` | Project-local audio generation components, Blueprint playback entry points, multiplayer one-shot audio, and runtime attenuation updates. |
| `Plugins/OrionBrowser` | Project-local CEF browser runtime, Win64 helper subprocess, Slate/UMG browser widgets, and HTML/video presentation. |
| `Plugins/Audio/OrionVoiceChat` | Cross-platform voice chat wrapper using AudioCapture. |
| `Plugins/Audio/ProjectAcoustics` | ProjectAcoustics spatial audio, AcousticProxy generation, probes, LocalBake, ACE data, and runtime acoustic queries. |
| `Plugins/Audio/SteamAudio` | Steam Audio spatialization, HRTF, occlusion, reverb, probes, and GPU acceleration. |
| `Plugins/GameInventorySystem` | Inventory, interaction, and item systems. |
| `Plugins/GameplayMessageRouter` | Runtime GameplayTag-channel message bus. |
| `Plugins/GameSettings` | Game settings registry, setting values, and settings UI support. |
| `Plugins/UIExtension` | Slot-based UI extension system. |
| `Plugins/MCP/*` | Project MCP services and Toolsets for editor automation and AI tool calls. |
| `Plugins/DLSS/*` | DLSS, NIS, Streamline, Reflex, and Frame Generation integrations. |
| Engine/platform plugins | UE 5.8 runtime and tooling plugins such as `XInputDevice`, `GameInputWindows`, `PlayerInputDebugger`, `PlatformDLC`, and `AIAssistant`. |

### AI Skill System

Orion includes project-local `.agents/skills` that guide AI agents before they modify code, assets, config, or packaging. The root `AGENTS.md` defines the high-level behavior: code edits must follow project Skills, and generated Windows text files must use CRLF line endings.

#### Skill Categories

| Category | Representative Skills | Purpose |
| --- | --- | --- |
| Project orientation | `orion-framework-architecture`, `unreal-source-code-navigator`, `unreal-source-index`, `orion-framework-skill-authoring`, `orion-engine-upgrade-regression-todos` | Module boundaries, plugin ownership, targets, Build.cs dependencies, source navigation, project Skill authoring rules, and UE upgrade regression tracking. |
| Code style | `orion-code-style` | Orion C++/Build.cs/Target.cs style, copyright headers, Tab indentation, CRLF, validation script. |
| Assets and editor | `orion-asset-management`, `orion-editor-extension-framework`, `orion-mcp-workflow`, `orion-mcp-project-toolsets`, `orion-python-blueprint-assets`, `unreal-blueprint-migration-repair`, `unreal-texture-management` | Asset naming, Blueprint migration repair, UMG/level/Toolset automation, editor extensions, texture management, Python asset fallbacks, and MCP access. |
| Gameplay framework | `orion-gamecore-framework`, `orion-gamemode-experience-framework`, `orion-gamefeatures`, `unreal-gameplayabilities` | GameCore, Experience, GameFeature, GAS, GamePhase, AbilitySet. |
| UI and input | `orion-gameui`, `orion-umg`, `orion-ui-blueprint-framework`, `orion-browser-framework`, `unreal-commoninput`, `orion-input-framework`, `unreal-enhancedinput`, `unreal-inputcore` | CommonUI/UMG, popup queues, HTML/CEF embedding, input tags, EnhancedInput, gamepad/mouse-keyboard support, UI input. |
| Networking and online | `orion-network-replication-framework`, `unreal-replicationgraph`, `orion-online-steam-framework` | Replication, RPCs, RepGraph, Steam, sessions, friend invites, Steam Sockets. |
| Systems | `orion-system-framework`, `orion-savegame-framework`, `orion-teams-framework`, `orion-inventory-interaction-framework` | AssetManager, archives, teams, inventory, interaction, world/player systems. |
| Content and release | `orion-audio-framework`, `orion-audio-system`, `orion-steam-audio`, `orion-project-acoustics`, `unreal-metasound`, `orion-rendering-framework`, `unreal-render-commands`, `orion-pso-caching`, `orion-localization-framework`, `orion-movie-media-framework`, `orion-packaging`, `orion-release-publishing`, `unreal-installed-build`, `unreal-thirdparty-plugin` | Audio, voice, ProjectAcoustics, SteamAudio, MetaSound, render commands, PSO, Device Profiles, localization, movies, Windows/Steam packaging, Installed Builds, and release publishing. |

#### How to Use Skills

1. Open the project root in Codex or your AI-assisted development environment.
2. Describe the task, such as "add a GameFeature", "fix Steam invites", or "create a UMG settings screen".
3. The agent should route through `AGENTS.md` and `.agents/skills` before editing the project.
4. When a workflow becomes stable, capture it as a new project-local Skill so it can be reused instead of staying only in chat history.

### Getting Started

#### Requirements

- Unreal Engine 5.8.
- Windows with Visual Studio 2022 and C++/Unreal development components.
- Git LFS for `.uasset`, `.umap`, binary libraries, and large assets.
- Steam features require the Steam client, Steamworks AppId/configuration, and the Steam-specific targets.

#### Clone

```powershell
git lfs install
git clone <your-repository-url> Orion
cd Orion
git lfs pull
```

If you receive the project through an archive or internal sync, make sure these folders/files are present:

- `Orion.uproject`
- `Source/`
- `Plugins/`
- `Config/`
- `Content/`
- Git LFS-managed binary assets

#### Open the Editor

1. Right-click `Orion.uproject` and generate project files with Unreal Engine 5.8.
2. Open `Orion.sln` or open `Orion.uproject` directly.

### Build Targets

| Target | Purpose |
| --- | --- |
| `OrionEditor` | Editor target for daily development, Blueprint assets, MCP/Toolsets, and editor extensions. |
| `OrionGame` | Standard Win64 game target. |
| `OrionClient` | Network client target. |
| `OrionServer` | Dedicated server target. |
| `OrionGameSteam` | Steam game target using `CustomConfig=Steam` and `WITH_STEAM=1`. |
| `OrionServerSteam` | Steam dedicated server target using the Steam custom configuration. |

### Localization and Languages

This README provides an anchor-based language switch at the top.

The project localization setup includes:

- Game native culture: `zh-Hans`
- EngineOverrides native culture: `en`
- Cook/stage cultures: `en`, `zh-Hans`, `fr`, `it`, `de`, `es`, `ar`, `ja`, `ko`, `pl`, `pt-BR`, `es-419`, `ru`, `zh-Hant`
- Localization config path: `Config/Localization`
- Localization resource path: `Content/Localization`

In-game language switching depends on project settings, UI settings, and compiled localization resources. Use the `orion-localization-framework` Skill, and when needed `OrionLocalizationToolset` or the archive sync/override/fill scripts, so Gather/Export/Import/Compile/Reports and packaging stay consistent.

### Release and Packaging

Current packaging settings in `Config/DefaultGame.ini` include:

- Build target: `OrionGame`
- IoStore: enabled
- Pak: enabled
- Chunks: enabled
- Compression: Oodle Kraken
- CulturesToStage: `en`, `zh-Hans`, `fr`, `it`, `de`, `es`, `ar`, `ja`, `ko`, `pl`, `pt-BR`, `es-419`, `ru`, `zh-Hant`
- Always Cook: `/NNEDenoiser`
- Always Stage as UFS: `Acoustics`

For Steam releases, use the Steam targets and verify that `Config/Custom/Steam` or the relevant Steam config layer is actually loaded. The current Steam path is centered on `DefaultPlatformService=OrionSteam`, `NativePlatformService=OrionSteam`, `AdditionalModulesToLoad=OrionOnlineSubsystemSteam`, `OrionSteamSocketsNetDriver`, and `OrionOnlineSteamAuthComponentModuleInterface`. Browser content also requires the CEF runtime and `OrionBrowserHelper.exe` to be staged correctly. For Steam OnlineSubsystem issues, the key log line to verify is `Created online subsystem instance for: OrionSteam`.

When packaging the Steam Windows build with an installed engine, use `.agents/skills/orion-packaging/scripts/patch-windows-bootstrap-customconfig.ps1` if the packaged bootstrap executable does not pass `-CustomConfig=Steam`. Validation should not stop at UAT success; run a packaged executable smoke test and confirm that Steam CustomConfig, map loading, loading screens, and runtime initialization all follow the expected path.

For PSO collection, use the `orion-pso-caching` Skill: package and copy `.shk` files, launch the packaged game with `-OrionPSOCapture` to roam maps and record `.rec.upipelinecache`, convert to `.spc` or direct stable `.stable.upipelinecache`, then verify that `Build/<Platform>/PipelineCaches` or `Content/PipelineCaches/<Platform>` output is staged into the package.

When generating Project Launcher profiles from the localization targets, use `.agents/skills/orion-packaging/scripts/resolve-packaging-cultures.ps1` to resolve the active culture configuration. ProjectAcoustics local-bake results, SteamAudio resources, the CEF runtime, and `.ace` acoustic data should all be checked in packaged smoke tests through staged files and runtime logs.

### Documentation

- Website Docs: [https://orionue.com/docs](https://orionue.com/docs)

### Contact

- Website: [https://orionue.com](https://orionue.com)
- GitHub Issues: recommended for bugs, feature requests, and documentation issues once the repository is published.
- Business, partnership, and support: use the public contact channels on the website.

### Copyright and License

Copyright (c) 2026 Orion. All Rights Reserved.
