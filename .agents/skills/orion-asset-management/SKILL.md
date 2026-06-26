---
name: orion-asset-management
description: Use before creating, renaming, moving, importing, converting, validating, batch-editing, saving, or organizing Unreal Engine assets and Blueprint assets, including Materials, Material Instances, Physical Materials, Python phys_material edits, Blueprint classes, Blueprint Components, Blueprint Function Libraries, Blueprint Interfaces, Widget Blueprints, Animation Blueprints, Gameplay Ability assets, audio assets, cinematics, localization, movie files, Bink/Media assets, Splash startup images under Content/Splash, ProjectAcoustic or ProjectAcoustics content, system assets, UI assets, and GameFeatures plugin Content folders. Enforces Allar-style asset prefixes, Blueprint naming rules, folder naming rules, project Content taxonomy, save verification, and GameFeatures content layout.
---

# Unreal Asset Management

本 Skill 用于所有 Unreal 资产创建前的命名、目录、覆盖和保存决策，尤其是 Blueprint / Widget Blueprint / Animation Blueprint / Gameplay Ability / UI / Audio / Movies / GameFeatures 内容。

## 工作流

1. 创建或重命名任何正式资产前，先读取 `references/orion-asset-management.zh-CN.md`。
2. 先判定资产类型和用途，再选择前缀、BaseAssetName、Variant、Suffix。
3. 资产名默认使用 `Prefix_BaseAssetName_Variant_Suffix`；Blueprint、Widget Blueprint、Animation Blueprint 等必须使用对应前缀。
4. 目录必须使用本 Skill 的 Content taxonomy；不要新建 `Assets`、`AssetTypes`、`Meshes`、`Textures`、`Materials` 这类冗余桶目录。
5. GameFeatures 玩法内容必须放到对应 feature plugin 的 `Content` 下，并使用 `Experiences`、`Game`、`Player`、`System`、`UI` 子目录。
6. 修改启动 Splash 时使用 `Content/Splash` 固定目录和固定文件名；用户提供非 `.png` / `.bmp` 图片时先转换为 `.png` 和 `.bmp`。
7. 通过 MCP 或编辑器创建资产时，创建后必须保存并验证 `.uasset` 或源文件落盘；Widget Blueprint 编译不等于保存。
8. 临时实验内容放 `Developers` 或明确的测试目录；正式内容不得放测试目录。

## 路由

- 通过 MCP 创建、编译或保存资产时，先配合 `../orion-mcp-workflow/SKILL.md`，再使用本 Skill 选定资产路径和名称。
- 替换 Unreal 项目根 `Build/<Platform>` 应用图标、launcher icon、`Application.ico`、`Application.icns`、Linux `Application.png` 或 Android `res/drawable` Logo 时，配合 `../orion-build-platform-icons/SKILL.md`；这些文件不是普通 `Content` 资产。
- 创建 UMG / CommonUI / Widget Blueprint 时，配合 `../orion-umg/SKILL.md`；路径仍以本 Skill 的 `Content/UI` 规则为准。
- 修改编辑器启动或游戏启动 Splash 图片时，配合 `../orion-umg/SKILL.md`；Splash 固定属于 `Content/Splash`，不是普通 `Content/UI` Widget 资产。
- 用户提供图片并要求裁剪、转换、覆盖 `Content/Splash` 或删除旧 Splash `.uasset` 时，配合 `../splash-image-conversion/SKILL.md` 自动生成 `Splash` / `EdSplash` 的 PNG/BMP 四件套。
- 创建 Niagara System、Emitter、特效 Blueprint wrapper 时，配合 `../unreal-niagara/SKILL.md`；若是正式资产，不要放测试目录。
- 创建 GameFeature 插件内容时，配合 `../orion-gamefeatures/SKILL.md`，并使用本 Skill 的 GameFeatures 子目录规范。
- 创建玩家账户、玩家 GameplayComponent、玩家生成管理器、玩家资料 UI 或 GameFeature `Content/Player` 资产时，配合 `../orion-player-framework/SKILL.md`。
- 创建角色蓝图、PawnData、PawnControl 蓝图、PlayerStart、CharacterSpawner、角色输入/能力相关配置资产时，配合 `../orion-character-pawn-framework/SKILL.md`。
- 创建 TeamDisplayAsset、TeamInfo 蓝图、TeamCreationComponent 蓝图、队伍 UI、按队伍出生的 Spawner 或玩法队伍配置资产时，配合 `../orion-teams-framework/SKILL.md`。
- 创建 Gameplay Ability、Effect、Attribute、Cue 等能力系统资产时，配合 `../unreal-gameplayabilities/SKILL.md`；基础 GA 默认放 `Content/GamePlay/AbilitySystem/Abilities`。
- 创建可交互物品、拾取/开箱/搜索/装备 GA、交互提示 WBP、`IA_Interact`、交互 AbilitySet、可交互容器或 GameFeature 交互内容时，配合 `../orion-inventory-interaction-framework/SKILL.md`。
- 创建 SoundClass、SoundConcurrency、SoundSubmix、ControlBus、ControlBusMix、MetaSound、ProjectAcoustics、SteamAudio 或语音聊天相关音频资产时，配合 `../orion-audio-framework/SKILL.md`；路径仍以本 Skill 的 `Content/Audio`、`Content/Acoustics` 和 GameFeature 内容目录规则为准。
- 创建、导入、转换或整理视频源文件、`.bk2`、`.mp4`、`.mov`、Bink Media Player、Bink Media Texture、Media Player、File Media Source 或 Media Texture 时，配合 `../orion-movie-media-framework/SKILL.md`；视频源文件和最终 runtime movie 文件默认属于 `Content/Movies`。
- 创建或整理 `Content/Localization` target、翻译 PO、manifest/archive/locres 资源，或创建会被本地化收集的 UMG/DataTable/GameFeature 文本资产时，配合 `../orion-localization-framework/SKILL.md`。
- 创建输入、IA/IMC/InputData、UI 按键提示或 CommonUI 资产时，按需要配合 `../orion-input-framework/SKILL.md`、`../unreal-enhancedinput/SKILL.md`、`../unreal-commoninput/SKILL.md` 和 `../unreal-inputcore/SKILL.md`。
- 创建 Session 组件蓝图、在线 UI、好友/邀请 Widget、Steam/Lobby 相关系统资产或 GameFeature 在线内容时，配合 `../orion-online-steam-framework/SKILL.md`；全局 Session 资产默认属于 `Content/System/Session`，通用在线 UI 属于 `Content/UI`，玩法专属在线 UI 属于对应 GameFeature `Content/UI`。
- 不确定资产类、模块依赖、父类或引擎版本行为时，配合 `../unreal-source-code-navigator/SKILL.md` 查真实源码。

## 快速校验

可用脚本检查计划创建的资产路径：

```powershell
python .agents\skills\orion-asset-management\scripts\check_asset_style.py /Game/UI/WBP_MainMenu
python .agents\skills\orion-asset-management\scripts\check_asset_style.py Content/GamePlay/AbilitySystem/Abilities/GA_Fireball
python .agents\skills\orion-asset-management\scripts\check_asset_style.py Plugins/GameFeatures/Arena/Content/Experiences/DA_ArenaExperience
```
