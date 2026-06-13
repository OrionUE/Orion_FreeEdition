# Unreal 资产命名与目录规范

## 目录

- 来源和优先级
- 命名总规则
- 常用资产前缀
- Content 目录规范
- GameFeatures 内容规范
- 蓝图内部规范
- 创建资产前检查
- 常见错误

## 来源和优先级

本规范参考 Allar / Gamemakin UE Style Guide 的资产命名、目录结构和 Blueprint 规范，并加入当前框架发布时要求的 Content 目录分类。

参考来源：

- Allar / Gamemakin UE Style Guide: `https://github.com/Allar/ue5-style-guide`
- UE5/v2 draft branch README: `https://raw.githubusercontent.com/Allar/ue5-style-guide/v2/README.md`

优先级：

1. 本 Skill 中明确写出的框架目录规范。
2. Allar 风格的资产前缀和 Blueprint 编写习惯。
3. 当前项目或目标项目已有的更严格团队规范。

如果 Allar 的通用示例和本 Skill 冲突，以本 Skill 为准。例如 Allar 推荐项目资产放到项目名顶层文件夹；本框架发布规范直接使用 `Content/Acoustics`、`Content/Audio`、`Content/GamePlay` 等固定分类。若宿主项目已经强制使用 `<ProjectName>` 顶层目录，则把这些分类放在该顶层目录内部。

## 命名总规则

资产名必须稳定、可搜索、可批量处理：

- 使用 ASCII 字母、数字和下划线。
- 禁止空格、中文、Unicode、连字符和符号。
- 使用 PascalCase 表达语义，例如 `MainMenu`、`Fireball`、`ArenaLoadout`。
- 正式资产默认使用 `Prefix_BaseAssetName_Variant_Suffix`。
- `BaseAssetName` 是一组相关资产的共同语义名。
- `Variant` 用于皮肤、状态、平台、模式或编号；通用编号从 `01` 开始。
- 不要为了资产类型再建冗余桶目录；类型已经由前缀和 Content Browser 过滤承担。

示例：

```text
BP_InventoryComponent
WBP_MainMenu
ABP_Hero
A_Hero_Run
GA_Fireball
GE_Fireball_Damage
DT_ItemDefinitions
DA_ArenaExperience
```

## 常用资产前缀

### 蓝图

| 资产类型 | 命名 |
| --- | --- |
| 普通 Blueprint | `BP_<BaseAssetName>` |
| ActorComponent Blueprint | `BP_<BaseAssetName>Component` |
| Blueprint Function Library | `BPFL_<BaseAssetName>` |
| Blueprint Interface | `BPI_<BaseAssetName>` |
| Blueprint Macro Library | `BPML_<BaseAssetName>`，非必要不要创建 |
| Widget Blueprint | `WBP_<BaseAssetName>` |
| Animation Blueprint | `ABP_<BaseAssetName>` |
| Tutorial Blueprint | `TBP_<BaseAssetName>` |
| Enum | `E<BaseAssetName>`，不加下划线 |
| Struct | `F<BaseAssetName>` 或 `S<BaseAssetName>`，不加下划线 |

### 动画与过场

| 资产类型 | 命名 |
| --- | --- |
| Animation Sequence | `A_<BaseAssetName>_<Variant>` |
| Animation Montage | `AM_<BaseAssetName>` |
| Animation Composite | `AC_<BaseAssetName>` |
| Blend Space | `BS_<BaseAssetName>` |
| Aim Offset | `AO_<BaseAssetName>` |
| Level Sequence | `LS_<BaseAssetName>` |
| Control Rig | `CR_<BaseAssetName>` |
| Skeleton | `SKEL_<BaseAssetName>` |
| Skeletal Mesh | `SK_<BaseAssetName>` |

### Gameplay Ability System

| 资产类型 | 命名 |
| --- | --- |
| Gameplay Ability | `GA_<BaseAssetName>` |
| Gameplay Effect | `GE_<BaseAssetName>` |
| Gameplay Cue Notify | `GCN_<BaseAssetName>` |
| Attribute Set Blueprint | `BP_<BaseAssetName>AttributeSet` |
| Ability Set / Ability DataAsset | `DA_<BaseAssetName>AbilitySet` |
| Gameplay Tag Table | `DT_<BaseAssetName>GameplayTags` |

### 数据、音频、媒体、UI

| 资产类型 | 命名 |
| --- | --- |
| Data Asset | `DA_<BaseAssetName>`，或按具体类前缀 |
| Data Table | `DT_<BaseAssetName>` |
| Curve Table | `Curve_<BaseAssetName>_Table` |
| Sound Wave | `A_<BaseAssetName>` |
| Sound Cue | `A_<BaseAssetName>_Cue` |
| Sound Attenuation | `ATT_<BaseAssetName>` |
| Reverb Effect | `Reverb_<BaseAssetName>` |
| Dialogue Voice | `DV_<BaseAssetName>` |
| Dialogue Wave | `DW_<BaseAssetName>` |
| Media Player | `MP_<BaseAssetName>` |
| File Media Source | `FMS_<BaseAssetName>` |
| Media Texture | `MT_<BaseAssetName>` |
| Bink Media Player | `BMP_<BaseAssetName>` |
| Bink Media Texture | `BMT_<BaseAssetName>` |
| Font | `Font_<BaseAssetName>` |
| Slate Brush | `Brush_<BaseAssetName>` |
| Slate Widget Style | `Style_<BaseAssetName>` |

### 材质、贴图、特效

| 资产类型 | 命名 |
| --- | --- |
| Material | `M_<BaseAssetName>` |
| Material Instance | `MI_<BaseAssetName>` |
| Material Function | `MF_<BaseAssetName>` |
| Material Parameter Collection | `MPC_<BaseAssetName>` |
| Texture | `T_<BaseAssetName>_<Suffix>` |
| Diffuse / BaseColor | `T_<BaseAssetName>_D` |
| Normal | `T_<BaseAssetName>_N` |
| Roughness | `T_<BaseAssetName>_R` |
| Ambient Occlusion | `T_<BaseAssetName>_O` |
| Packed Texture | `T_<BaseAssetName>_<PackedSuffix>`，如 `_ERO` |
| Niagara System | `NS_<BaseAssetName>` |
| Niagara Emitter | `NE_<BaseAssetName>` |
| Particle System | `PS_<BaseAssetName>` |

## Content 目录规范

目录名使用 PascalCase，不能包含空格、中文或符号。以下目录是正式内容的默认根：

| 内容类型 | 目录 |
| --- | --- |
| ProjectAcoustic / ProjectAcoustics 空间音频内容 | `Content/Acoustics` |
| 音频相关 Blueprint、Sound、Cue、Attenuation、Mix 等资产 | `Content/Audio` |
| Animation Sequence、Level Sequence、过场和动画镜头资产 | `Content/Cinematics` |
| 主要 Gameplay 蓝图和玩法数据 | `Content/GamePlay` |
| 基础 Gameplay Ability | `Content/GamePlay/AbilitySystem/Abilities` |
| 视频源文件和 Movie 资产，例如 `.mp4`、`.bk2`、`.mov` | `Content/Movies`；发布、启动视频和加载屏视频优先使用由 Bink 转换工具生成的 `.bk2`，具体播放和打包规则继续读取 `unreal-movie-media-framework` |
| 编辑器启动和游戏启动 Splash 图片 | `Content/Splash`；固定文件名为 `Splash.png`、`Splash.bmp`、`EdSplash.png`、`EdSplash.bmp` |
| 系统性、全局配置、框架运行时资产 | `Content/System` |
| UI、UMG、CommonUI、Widget Blueprint、UI Style、Font、Brush | `Content/UI` |

本地化资源不放在 `Content` 下，统一放在项目根的 `Localization` 目录。

不要创建：

- `Content/Assets`
- `Content/AssetTypes`
- 只按类型分桶的 `Content/Meshes`、`Content/Textures`、`Content/Materials`
- 带空格、中文、符号或临时语义的正式目录

如果资产属于一个大型功能集合，可以在上述根目录下再按功能拆分。例如：

```text
Content/GamePlay/Inventory
Content/GamePlay/Weapons
Content/UI/HUD
Content/UI/Menus
Content/Audio/Weapons
Content/Cinematics/Intro
```

## Splash 启动图片

`Content/Splash` 只用于项目启动阶段的 Splash 图片，不用于普通 UMG、CommonUI、加载屏 Widget 或 UI 图标。

固定文件：

- `Splash.png`：游戏启动 Splash。
- `Splash.bmp`：游戏启动 Splash 的 BMP 版本。
- `EdSplash.png`：编辑器启动 Splash。
- `EdSplash.bmp`：编辑器启动 Splash 的 BMP 版本。

规则：

- 用户提供 `.jpg`、`.jpeg`、`.webp`、`.tga`、`.psd` 或其他格式时，先转换为 `.png` 和 `.bmp`。
- 最终提交到 `Content/Splash` 的源图片使用固定文件名，不使用 `T_` 前缀，也不创建带版本号的变体文件名。
- 编辑器启动图和游戏启动图可以使用同一设计，也可以分别导出；但 `.png` 和 `.bmp` 必须成对存在。
- 若导入编辑器后生成 `.uasset`，保存后验证 `.uasset` 与对应 `.png` / `.bmp` 已落盘。
- 运行期加载屏视频、Bink、Media Texture 或 CommonLoadingScreen Widget 不属于 `Content/Splash`；分别走 `Content/Movies`、`Content/UI` 或加载屏 Skill。

## GameFeatures 内容规范

特定游戏玩法必须放在 `Plugins/GameFeatures/<FeatureName>` 的独立 GameFeature 插件中。每个玩法插件的 `Content` 目录使用固定子目录：

```text
Plugins/GameFeatures/<FeatureName>/
└── Content/
    ├── Experiences/
    ├── Game/
    ├── Player/
    ├── System/
    └── UI/
```

目录职责：

- `Experiences`：Experience Definition、GameFeatureData、玩法装配 DataAsset、入口配置。
- `Game`：该玩法独有的规则、模式、Actor、Ability、Effect、Cue、DataTable、道具等运行时玩法内容。
- `Player`：Pawn、Character、Controller、Camera、Input、Loadout、玩家表现相关内容。
- `System`：该玩法内部系统、Subsystem、Manager、全局配置和非 UI 框架资产。
- `UI`：该玩法独有 Widget Blueprint、CommonUI、HUD、菜单、提示、图标和 UI 样式。

GameFeatures 内部也必须遵守资产前缀、PascalCase 目录、无空格、无 Unicode、保存验证和不覆盖现有资产规则。

## 蓝图内部规范

创建 Blueprint 资产后还要遵守内部命名和图规范：

- Blueprint 必须能编译，不能有 warning 或 error。
- 变量名使用 PascalCase；布尔变量使用 `b` 前缀，如 `bIsActive`。
- 变量名用名词或名词短语，不要把原子类型写进变量名，例如不要写 `ScoreFloat`。
- 数组变量使用复数名或明确集合名，例如 `InventoryItems`。
- 可编辑变量必须有 Tooltip；数值型公开调参尽量设置合理范围。
- 函数和事件使用动词开头，例如 `ActivateShield`、`UpdateAmmo`。
- 查询 bool 的纯函数使用问题式命名，例如 `IsDead`、`HasWeapon`、`CanReload`。
- 事件处理和 Dispatcher 使用 `On` 前缀，例如 `OnHealthChanged`。
- RPC 使用 `Server`、`Client`、`Multicast` 前缀。
- Public 函数必须填写 Description。
- 图表不能有明显 spaghetti、死节点、悬空节点；复杂函数拆小，单函数节点数控制在可读范围内。

## 创建资产前检查

创建资产前回答这些问题：

1. 这是正式内容还是临时测试内容？
2. 这是全局 Content 资产，还是某个 GameFeature 的私有内容？
3. 资产类型对应的前缀是什么？
4. `BaseAssetName` 是否短、清晰、能表达功能语义？
5. 是否需要 `Variant` 或后缀？
6. 目标目录是否属于本 Skill 的固定目录之一？
7. 是否会覆盖现有资产？如果会，先停止并说明。
8. 通过 MCP 创建时，是否能保存并验证落盘？

## 常见错误

### Widget Blueprint 放错目录

现象：`WBP_Inventory` 被创建到 `Content/GamePlay`。

修复：UI Widget 放到 `Content/UI`；如果它只属于某个 GameFeature，则放到 `Plugins/GameFeatures/<FeatureName>/Content/UI`。

### 基础 GA 分散

现象：基础 Gameplay Ability 被放到多个无关目录。

修复：框架基础 GA 放 `Content/GamePlay/AbilitySystem/Abilities`；玩法特定 GA 放对应 GameFeature 的 `Content/Game` 或更具体子目录。

### 视频文件放进 UI 或 Cinematics

现象：`.mp4`、`.bk2`、`.mov` 放在 UI 或 Cinematics 目录。

修复：视频源文件统一放 `Content/Movies`；Level Sequence、镜头和过场编排资产放 `Content/Cinematics`。

### Bink 或 Media 资产路径混用

现象：Bink Media Player、Media Player、File Media Source 或 Media Texture 创建在随机 UI/Gameplay 目录，视频文件又在别处。

修复：视频文件统一放 `Content/Movies`；视频播放相关资产按用途放 `Content/Movies`、`Content/UI` 或对应 GameFeature 内容目录，并继续读取 `unreal-movie-media-framework` 判断 `.bk2`、路径和打包规则。

### 本地化资源放进 Content

现象：本地化配置、PO/manifest/archive 放进 `Content/UI` 或 `Content/System`。

修复：语言本地化统一放项目根 `Localization`。

### Splash 图片放进 UI 或使用错误格式

现象：启动 Splash 图片放到 `Content/UI`，或只提交 `.jpg`、`.webp` 等源图。

修复：启动 Splash 固定放 `Content/Splash`，并转换保存为 `Splash.png` / `Splash.bmp` 或 `EdSplash.png` / `EdSplash.bmp`。
