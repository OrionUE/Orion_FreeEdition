# Orion

<p align="center">
  <a href="#简体中文">简体中文</a> |
  <a href="#english">English</a>
</p>

<p align="center">
  <img alt="Version" src="https://img.shields.io/badge/Version-1.0.1-0E1128?style=flat-square">
  <img alt="Unreal Engine" src="https://img.shields.io/badge/Unreal%20Engine-5.8-0E1128?style=flat-square&logo=unrealengine&logoColor=white">
  <img alt="Platform" src="https://img.shields.io/badge/Primary%20Platform-Windows%20%2F%20Steam-1b2838?style=flat-square&logo=steam&logoColor=white">
  <img alt="Localization" src="https://img.shields.io/badge/Localization-zh--Hans%20%7C%20en-2E7D32?style=flat-square">
  <img alt="AI Skills" src="https://img.shields.io/badge/AI%20Skills-Project%20Local-6A4CFF?style=flat-square">
</p>

---

> **开发状态 / Development Status**
>
> 当前版本：1.0.1。Orion 目前仍处于初代版本阶段，许多工程细节、工具链体验和内容示例还在持续完善中。当前仓库代表正在开发中的框架基线，接口、文档和工作流可能会随着后续版本继续调整。
>
> Current version: 1.0.1. Orion is currently a first-generation version. Many engineering details, toolchain workflows, and content examples are still being refined. This repository represents an actively developed framework baseline, and APIs, documentation, and workflows may continue to change in future releases.

## 简体中文

Orion 是一个基于 Unreal Engine 5.8 的模块化游戏制作框架。它把可复用的游戏基础系统、UI、输入、GAS、GameFeature、Steam、语音、存档、渲染和本地化能力组织成清晰的工程层级，并通过项目本地 `.agents/skills` 为 AI 辅助开发提供可复用的工程知识。

目标是让创作者能从“描述玩法”快速进入“可运行原型”，同时保留 C++ 工程的可维护性、扩展性和发布能力。

当前版本：1.0.1

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
- **面向发布的系统能力**：包含 Steam OnlineSubsystem、Steam Sockets、Steam Web API、语音聊天、加载屏、存档、设置、本地化、PSO、DLSS/NIS/Streamline 等发布相关能力。
- **C++ 与 Blueprint 协同**：核心逻辑保留在 C++ 层，常用扩展点通过 BBL、GameFeature 和蓝图资产暴露给设计与内容制作流程。

### 更新内容

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
| UI | CommonUI、GameUI、HUD Layout、菜单、设置页、消息/确认框、UIExtension 插槽、开发 HUD |
| 输入 | EnhancedInput、CommonInput、输入标签、手柄/键鼠切换、玩家改键、UI 输入域 |
| 在线与 Steam | `OrionSteam`、OnlineSubsystem、Session、Lobby、好友邀请、Steam Sockets、Steam Web API |
| 音频与语音 | AudioMixer、AudioModulation、ProjectAcoustics、SteamAudio、`OrionVoiceChat`、输入/输出设备切换 |
| 存档 | Archive 管理、世界存档、玩家存档、自动保存、前端存档入口 |
| 队伍 | TeamSubsystem、TeamInfo、队伍显示数据、AI 敌友态度、友军伤害判断 |
| 背包与交互 | GameInventorySystem、InteractionSystem、交互检测、拾取/装备/丢弃、交互 UI |
| 渲染 | Lumen、Nanite、Ray Tracing、DLSS、NIS、Streamline Reflex/DLSSG、平台画质配置 |
| 本地化 | `zh-Hans` 与 `en`，含 Game 与 EngineOverrides 本地化目标 |
| MCP/自动化 | 项目内 MCP 插件与 Toolsets，用于资产、蓝图、UMG、Niagara、PCG、GameplayTags 等自动化 |

### 工程结构

```text
.
├── .agents/skills/          # 项目本地 AI Skills
├── Build/                   # 平台构建资源、图标、PipelineCaches
├── CollectedPSOs/           # PSO 收集输出
├── Config/                  # 默认配置、平台配置、本地化配置、打包配置
├── Content/                 # 项目正式资产
├── Plugins/                 # 框架插件、MCP Toolsets、GameFeature、Steam、Audio、DLSS 等
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
| `AnimFramework` | Runtime target dependency | Target 与配置中仍引用的动画/Ability 框架层；发布前请确认该模块随分发包一起提供。 |

#### 主要插件组

| 插件组 | 说明 |
| --- | --- |
| `Plugins/Common/*` | CommonGame、CommonUser、CommonInputSystem、CommonLoadingScreen、ModularGameplayActors 等基础框架插件。 |
| `Plugins/GameFeatures/*` | GameFeature 插件，当前包含 `OrionGameTemplate`。 |
| `Plugins/OrionSteam` | Steam SDK、OnlineSubsystem、Sockets、Web API 与 shared types。 |
| `Plugins/Audio/OrionVoiceChat` | 跨平台语音聊天封装，依赖 AudioCapture。 |
| `Plugins/GameInventorySystem` | 背包、交互和物品系统。 |
| `Plugins/GameplayMessageRouter` | 基于 GameplayTag channel 的运行时消息总线。 |
| `Plugins/GameSettings` | 游戏设置注册表、设置项和 UI 支撑。 |
| `Plugins/UIExtension` | 插槽式 UI 扩展系统。 |
| `Plugins/MCP/*` | 项目 MCP 服务与 Toolsets，用于编辑器自动化和 AI 工具调用。 |
| `Plugins/DLSS/*` | DLSS、NIS、Streamline、Reflex、Frame Generation 等图形增强插件。 |

### AI Skill 系统

项目内置 `.agents/skills`，用于让 AI 在修改工程前自动读取项目规则、模块边界和验证方式。核心规则写在 `AGENTS.md`：修改代码前必须遵守项目 Skill，生成的 Windows 文本文件必须使用 CRLF。

#### Skill 分类

| 分类 | 代表 Skill | 用途 |
| --- | --- | --- |
| 工程总览 | `unreal-framework-architecture`、`unreal-source-code-navigator`、`unreal-source-index` | 判断模块边界、插件归属、Target、Build.cs 依赖和源码导航。 |
| 代码规范 | `orion-code-style` | Orion C++/Build.cs/Target.cs 风格、版权头、Tab 缩进、CRLF、检查脚本。 |
| 资产与编辑器 | `unreal-asset-management`、`unreal-editor-extension-framework`、`unreal-mcp-workflow`、`unreal-mcp-project-toolsets` | 资产命名、蓝图/UMG/关卡/Toolset 自动化、编辑器扩展。 |
| 玩法框架 | `unreal-gamecore-framework`、`unreal-gamemode-experience-framework`、`unreal-gamefeatures`、`unreal-gameplayabilities` | GameCore、Experience、GameFeature、GAS、GamePhase、AbilitySet。 |
| UI 与输入 | `unreal-umg`、`unreal-commoninput`、`unreal-input-framework`、`unreal-enhancedinput`、`unreal-inputcore` | CommonUI/UMG、输入标签、EnhancedInput、手柄/键鼠、UI 输入。 |
| 网络与在线 | `unreal-network-replication-framework`、`unreal-replicationgraph`、`unreal-online-steam-framework` | 复制、RPC、RepGraph、Steam、Session、好友邀请、Steam Sockets。 |
| 系统能力 | `unreal-system-framework`、`unreal-savegame-framework`、`unreal-teams-framework`、`unreal-inventory-interaction-framework` | AssetManager、存档、队伍、背包、交互、世界/玩家系统。 |
| 内容与发布 | `unreal-audio-framework`、`unreal-rendering-framework`、`unreal-localization-framework`、`unreal-movie-media-framework`、`unreal-packaging` | 音频、语音、渲染、本地化、视频、Windows/Steam 打包。 |

#### 使用方式

1. 在 Codex/AI 助手中打开项目根目录。
2. 描述目标，例如“新增一个 GameFeature 玩法”“修复 Steam 邀请”“创建一个 UMG 设置页”。
3. AI 会根据 `AGENTS.md` 和 `.agents/skills` 自动选择相关 Skill。
4. 如果任务中沉淀出新的稳定流程，应继续写入 `.agents/skills`，避免知识只留在聊天里。

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
3. 首次打开前建议先构建 `OrionEditor`。

```powershell
<UE_5.8>\Engine\Build\BatchFiles\Build.bat OrionEditor Win64 Development -Project="%CD%\Orion.uproject" -WaitMutex
```

### 常用构建目标

| Target | 用途 |
| --- | --- |
| `OrionEditor` | 编辑器目标，日常开发、蓝图资产、MCP/Toolset、编辑器扩展验证。 |
| `OrionGame` | 普通 Win64 游戏目标。 |
| `OrionClient` | 网络客户端目标。 |
| `OrionServer` | Dedicated Server 目标。 |
| `OrionGameSteam` | Steam 游戏目标，使用 `CustomConfig=Steam` 并定义 `WITH_STEAM=1`。 |
| `OrionServerSteam` | Steam Dedicated Server 目标，使用 Steam 自定义配置。 |

示例：

```powershell
<UE_5.8>\Engine\Build\BatchFiles\Build.bat OrionGame Win64 Development -Project="%CD%\Orion.uproject" -WaitMutex
<UE_5.8>\Engine\Build\BatchFiles\Build.bat OrionGameSteam Win64 Development -Project="%CD%\Orion.uproject" -WaitMutex
```

### 本地化与语言

README 顶部提供 `简体中文 | English` 锚点切换。

工程本地化配置包含：

- Game native culture：`zh-Hans`
- EngineOverrides native culture：`en`
- Cook/Stage cultures：`en`、`zh-Hans`
- 本地化配置目录：`Config/Localization`
- 本地化资源目录：`Content/Localization`

游戏内语言切换由项目设置、UI 设置页和本地化资源共同决定；新增语言时请使用 `unreal-localization-framework` Skill，避免只改打包配置而漏掉 Gather/Import/Compile 流程。

### 发布与打包

`Config/DefaultGame.ini` 中的打包配置当前使用：

- Build target：`OrionGame`
- IoStore：启用
- Pak：启用
- Chunk：启用
- 压缩：Oodle Kraken
- CulturesToStage：`en`、`zh-Hans`
- Always Cook：`/NNEDenoiser`
- Always Stage as UFS：`Acoustics`

Steam 发布路径请使用 Steam Target，并验证 `Config/Custom/Steam` 或相关 Steam 配置被实际读取。历史上 Steam OnlineSubsystem 的关键点是：服务名、真实模块名和默认 OnlineSubsystem 加载顺序必须一致；排查时优先查看日志中是否出现 `Created online subsystem instance for: OrionSteam`。

### 开发文档

- 官网：[https://orionue.com](https://orionue.com)

### 联系方式

- 官网：[https://orionue.com](https://orionue.com)
- GitHub Issues：项目发布到 GitHub 后，建议使用 Issues 跟踪 bug、功能请求和文档问题。
- 商务、合作或支持：请通过官网公开渠道联系。

### 版权与许可

Copyright (c) 2026 Orion. All Rights Reserved.

---

## English

Orion is a modular game-development framework built on Unreal Engine 5.8. It organizes reusable gameplay foundations, UI, input, GAS, GameFeature workflows, Steam integration, voice chat, save systems, rendering, packaging, and localization into clear engineering layers. It also ships project-local `.agents/skills` so AI-assisted development can follow the actual project architecture instead of relying on generic Unreal advice.

The goal is to move from a gameplay idea to a runnable prototype quickly, while keeping the maintainability, extensibility, and release discipline of a C++ Unreal project.

Current version: 1.0.1

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
- **Release-oriented systems**: Steam OnlineSubsystem, Steam Sockets, Steam Web API, voice chat, loading screens, archives, settings, localization, PSO workflows, DLSS/NIS/Streamline, and platform packaging are already represented in the project.
- **C++ and Blueprint collaboration**: Core behavior stays in C++, while BBL, GameFeature assets, and Blueprint-friendly APIs expose extension points to designers and content workflows.

### What's New

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
| UI | CommonUI, GameUI, HUD Layout, menus, settings screens, dialogs, UIExtension slots, development HUD |
| Input | EnhancedInput, CommonInput, input tags, gamepad/mouse-keyboard switching, key remapping, UI input domains |
| Online and Steam | `OrionSteam`, OnlineSubsystem, sessions, lobbies, friend invites, Steam Sockets, Steam Web API |
| Audio and voice | AudioMixer, AudioModulation, ProjectAcoustics, SteamAudio, `OrionVoiceChat`, input/output device switching |
| Save/archive | Archive manager, world saves, player saves, autosave, frontend archive entries |
| Teams | TeamSubsystem, TeamInfo, team display assets, AI attitude, friendly-fire checks |
| Inventory and interaction | GameInventorySystem, InteractionSystem, interaction traces, pickup/equip/drop, interaction UI |
| Rendering | Lumen, Nanite, Ray Tracing, DLSS, NIS, Streamline Reflex/DLSSG, platform scalability settings |
| Localization | `zh-Hans` and `en`, with Game and EngineOverrides localization targets |
| MCP/automation | Project MCP plugins and Toolsets for assets, Blueprints, UMG, Niagara, PCG, GameplayTags, and editor automation |

### Project Structure

```text
.
├── .agents/skills/          # Project-local AI Skills
├── Build/                   # Platform build resources, icon, PipelineCaches
├── CollectedPSOs/           # PSO collection outputs
├── Config/                  # Default config, platform config, localization config, packaging config
├── Content/                 # Production assets
├── Plugins/                 # Framework plugins, MCP Toolsets, GameFeature, Steam, Audio, DLSS
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
| `AnimFramework` | Runtime target dependency | Animation/Ability framework referenced by targets and config. Make sure this module is included in the distribution package before release. |

#### Major Plugin Groups

| Plugin group | Description |
| --- | --- |
| `Plugins/Common/*` | CommonGame, CommonUser, CommonInputSystem, CommonLoadingScreen, ModularGameplayActors, and other framework plugins. |
| `Plugins/GameFeatures/*` | GameFeature plugins. The current project includes `OrionGameTemplate`. |
| `Plugins/OrionSteam` | Steam SDK, OnlineSubsystem, Sockets, Web API, and shared Steam types. |
| `Plugins/Audio/OrionVoiceChat` | Cross-platform voice chat wrapper using AudioCapture. |
| `Plugins/GameInventorySystem` | Inventory, interaction, and item systems. |
| `Plugins/GameplayMessageRouter` | Runtime GameplayTag-channel message bus. |
| `Plugins/GameSettings` | Game settings registry, setting values, and settings UI support. |
| `Plugins/UIExtension` | Slot-based UI extension system. |
| `Plugins/MCP/*` | Project MCP services and Toolsets for editor automation and AI tool calls. |
| `Plugins/DLSS/*` | DLSS, NIS, Streamline, Reflex, and Frame Generation integrations. |

### AI Skill System

Orion includes project-local `.agents/skills` that guide AI agents before they modify code, assets, config, or packaging. The root `AGENTS.md` defines the high-level behavior: code edits must follow project Skills, and generated Windows text files must use CRLF line endings.

#### Skill Categories

| Category | Representative Skills | Purpose |
| --- | --- | --- |
| Project orientation | `unreal-framework-architecture`, `unreal-source-code-navigator`, `unreal-source-index` | Module boundaries, plugin ownership, targets, Build.cs dependencies, source navigation. |
| Code style | `orion-code-style` | Orion C++/Build.cs/Target.cs style, copyright headers, Tab indentation, CRLF, validation script. |
| Assets and editor | `unreal-asset-management`, `unreal-editor-extension-framework`, `unreal-mcp-workflow`, `unreal-mcp-project-toolsets` | Asset naming, Blueprint/UMG/level/Toolset automation, editor extensions. |
| Gameplay framework | `unreal-gamecore-framework`, `unreal-gamemode-experience-framework`, `unreal-gamefeatures`, `unreal-gameplayabilities` | GameCore, Experience, GameFeature, GAS, GamePhase, AbilitySet. |
| UI and input | `unreal-umg`, `unreal-commoninput`, `unreal-input-framework`, `unreal-enhancedinput`, `unreal-inputcore` | CommonUI/UMG, input tags, EnhancedInput, gamepad/mouse-keyboard support, UI input. |
| Networking and online | `unreal-network-replication-framework`, `unreal-replicationgraph`, `unreal-online-steam-framework` | Replication, RPCs, RepGraph, Steam, sessions, friend invites, Steam Sockets. |
| Systems | `unreal-system-framework`, `unreal-savegame-framework`, `unreal-teams-framework`, `unreal-inventory-interaction-framework` | AssetManager, archives, teams, inventory, interaction, world/player systems. |
| Content and release | `unreal-audio-framework`, `unreal-rendering-framework`, `unreal-localization-framework`, `unreal-movie-media-framework`, `unreal-packaging` | Audio, voice, rendering, localization, movies, Windows/Steam packaging. |

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
3. Build `OrionEditor` before the first editor launch.

```powershell
<UE_5.8>\Engine\Build\BatchFiles\Build.bat OrionEditor Win64 Development -Project="%CD%\Orion.uproject" -WaitMutex
```

### Build Targets

| Target | Purpose |
| --- | --- |
| `OrionEditor` | Editor target for daily development, Blueprint assets, MCP/Toolsets, and editor extensions. |
| `OrionGame` | Standard Win64 game target. |
| `OrionClient` | Network client target. |
| `OrionServer` | Dedicated server target. |
| `OrionGameSteam` | Steam game target using `CustomConfig=Steam` and `WITH_STEAM=1`. |
| `OrionServerSteam` | Steam dedicated server target using the Steam custom configuration. |

Examples:

```powershell
<UE_5.8>\Engine\Build\BatchFiles\Build.bat OrionGame Win64 Development -Project="%CD%\Orion.uproject" -WaitMutex
<UE_5.8>\Engine\Build\BatchFiles\Build.bat OrionGameSteam Win64 Development -Project="%CD%\Orion.uproject" -WaitMutex
```

### Localization and Languages

This README provides an anchor-based language switch at the top.

The project localization setup includes:

- Game native culture: `zh-Hans`
- EngineOverrides native culture: `en`
- Cook/stage cultures: `en`, `zh-Hans`
- Localization config path: `Config/Localization`
- Localization resource path: `Content/Localization`

In-game language switching depends on project settings, UI settings, and compiled localization resources. Use the `unreal-localization-framework` Skill when adding or changing languages so Gather/Import/Compile and packaging stay consistent.

### Release and Packaging

Current packaging settings in `Config/DefaultGame.ini` include:

- Build target: `OrionGame`
- IoStore: enabled
- Pak: enabled
- Chunks: enabled
- Compression: Oodle Kraken
- CulturesToStage: `en`, `zh-Hans`
- Always Cook: `/NNEDenoiser`
- Always Stage as UFS: `Acoustics`

For Steam releases, use the Steam targets and verify that `Config/Custom/Steam` or the relevant Steam config layer is actually loaded. For Steam OnlineSubsystem issues, the key log line to verify is `Created online subsystem instance for: OrionSteam`.

### Documentation

- Website: [https://orionue.com](https://orionue.com)

### Contact

- Website: [https://orionue.com](https://orionue.com)
- GitHub Issues: recommended for bugs, feature requests, and documentation issues once the repository is published.
- Business, partnership, and support: use the public contact channels on the website.

### Copyright and License

Copyright (c) 2026 Orion. All Rights Reserved.
