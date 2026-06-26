# Unreal 资产命名与目录规范

## 目录

- 来源和优先级
- 命名总规则
- 常用资产前缀
- 材质物理材质批处理
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
| Physical Material | 优先沿用宿主项目现有前缀；常见为 `PhysM_<BaseAssetName>` |
| Niagara System | `NS_<BaseAssetName>` |
| Niagara Emitter | `NE_<BaseAssetName>` |
| Particle System | `PS_<BaseAssetName>` |

## 材质物理材质批处理

批量给 `Material` 或 `Material Instance` 设置 Physical Material 时，必须同时处理“属性值、实例覆盖开关、保存、运行时查询链路”四件事。

### Python 编辑规则

- 先确认 `EditorAssetLibrary.load_asset()` 返回的是 `PhysicalMaterial`；加载失败时立即报错，不要继续把 `None` 写进材质。
- `Material` 的属性名是 `phys_material`，写入后保存资产。
- `MaterialInstanceConstant` 除了写 `phys_material`，还必须把 `override_phys_material` 设为 `True`；否则运行时 `GetPhysicalMaterial()` 会继续返回 Parent 的 Physical Material。
- `MaterialInstanceConstant` 写完后调用 `unreal.MaterialEditingLibrary.update_material_instance(asset)` 让编辑器刷新、标记 dirty 并更新实例；不要在 Python 里直接调用 `asset.post_edit_change()`，该方法在部分 UE 版本的 Python 对象上没有暴露，会导致只处理第一个资产后中断。
- `Material` 写完 `phys_material` 后保存资产即可；如果材质编辑器已打开，可调用 `unreal.MaterialEditingLibrary.refresh_material_editor(asset)` 刷新编辑器窗口。
- 最后调用 `EditorAssetLibrary.save_loaded_asset()` 保存；只改内存不保存，重启编辑器后会丢。
- 如果批处理的是父材质，已有子材质实例只会在未开启实例覆盖时继承父材质；已开启覆盖的实例需要单独改。
- 如果场景组件、Static Mesh BodySetup、Skeletal Mesh BodyInstance 或组件上设置了 Physical Material Override，它们优先级高于材质资产，材质上改了也不会成为命中结果。
- 如果用 trace 或 hit result 验证，必须设置 `FCollisionQueryParams.bReturnPhysicalMaterial = true` 或蓝图 trace 的 Return Phys Mat 选项；否则 `HitResult.PhysMaterial` 会是空，看起来像没有生效。

### 推荐 Python 模板

```python
import unreal

PHYS_MAT_PATH = "/Game/PhysMats/PhysM_Metal.PhysM_Metal"

phys_mat = unreal.EditorAssetLibrary.load_asset(PHYS_MAT_PATH)
if not isinstance(phys_mat, unreal.PhysicalMaterial):
	raise RuntimeError(f"Physical Material 加载失败或类型不对: {PHYS_MAT_PATH}")

selected_assets = list(unreal.EditorUtilityLibrary.get_selected_assets())
changed_assets = []
skipped_assets = []

for asset in selected_assets:
	if isinstance(asset, unreal.MaterialInstanceConstant):
		asset.set_editor_property("override_phys_material", True)
		asset.set_editor_property("phys_material", phys_mat)
		unreal.MaterialEditingLibrary.update_material_instance(asset)
	elif isinstance(asset, unreal.Material):
		asset.set_editor_property("phys_material", phys_mat)
		unreal.MaterialEditingLibrary.refresh_material_editor(asset)
	else:
		skipped_assets.append(asset.get_path_name())
		continue

	if unreal.EditorAssetLibrary.save_loaded_asset(asset):
		changed_assets.append(asset.get_path_name())

unreal.log(f"已更新 Physical Material 的材质资产数量: {len(changed_assets)}")
for asset_path in changed_assets:
	unreal.log(asset_path)

if skipped_assets:
	unreal.log_warning(f"已跳过非材质资源数量: {len(skipped_assets)}")
```

### 结果验证

用 Python 读取资产属性只能证明资产已写入：

```python
for asset in unreal.EditorUtilityLibrary.get_selected_assets():
    if isinstance(asset, unreal.MaterialInstanceConstant):
        unreal.log(f"{asset.get_path_name()} override={asset.get_editor_property('override_phys_material')} phys={asset.get_editor_property('phys_material')}")
    elif isinstance(asset, unreal.Material):
        unreal.log(f"{asset.get_path_name()} phys={asset.get_editor_property('phys_material')}")
```

运行时命中验证还要确认碰撞查询开启返回物理材质，并排除组件/BodySetup/BodyInstance override。必要时重新进 PIE、重新注册组件或重开关卡，让物理 shape 使用新材质。

## Content 目录规范

目录名使用 PascalCase，不能包含空格、中文或符号。以下目录是正式内容的默认根：

| 内容类型 | 目录 |
| --- | --- |
| ProjectAcoustic / ProjectAcoustics 空间音频内容 | `Content/Acoustics` |
| 音频相关 Blueprint、Sound、Cue、Attenuation、Mix 等资产 | `Content/Audio` |
| Animation Sequence、Level Sequence、过场和动画镜头资产 | `Content/Cinematics` |
| 主要 Gameplay 蓝图和玩法数据 | `Content/GamePlay` |
| 基础 Gameplay Ability | `Content/GamePlay/AbilitySystem/Abilities` |
| 视频源文件和 Movie 资产，例如 `.mp4`、`.bk2`、`.mov` | `Content/Movies`；发布、启动视频和加载屏视频优先使用由 Bink 转换工具生成的 `.bk2`，具体播放和打包规则继续读取 `orion-movie-media-framework` |
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

## 跨 Content 和插件的美术资产迁移

把项目 `Content` 下的美术包和内容插件里的同名美术包统一到一个公共内容插件时，必须走编辑器资产系统，不要对 `.uasset` / `.umap` 做文本或二进制替换。Unreal 资产引用可能同时存在 hard reference、soft object path、map external actor、redirector 和 asset registry metadata，手工替换路径很容易损坏包。

推荐流程：

1. 先创建目标内容插件，`.uplugin` 必须设置 `CanContainContent=true`，并确认项目或上层聚合插件会启用它；目标挂载点应能在编辑器里显示为 `/<PluginName>`。
2. 用 AssetRegistry 扫描旧根，例如 `/Game/<ArtPack>` 和 `/<OldPlugin>/<ArtPack>`，按相对 package path 建表，先 dry-run 输出资产数量、重复路径和目标路径。
3. 发现两个旧根有相同相对 package path 时，必须选择 source of truth。通常优先保留版本较新、已在插件中的副本；另一个副本不能直接覆盖目标，需要先移到临时目录，再 consolidate 到保留资产。
4. 对唯一资产使用 `AssetTools.rename_assets` 移到 `/<CommonPlugin>/<ArtPack>/...`，让旧路径生成 redirector。
5. 对重复资产使用“保留副本 move 到目标、淘汰副本 move 到临时目录、再 `consolidate_assets` 到目标”的顺序，避免两个旧路径抢同一个目标 package。
6. 迁移完成后对旧根和临时根收集 `ObjectRedirector`，调用 `fixup_referencers`，再保存 dirty packages。这样引用会被重存到新路径，而不是长期依赖 redirector。
7. 最后用 AssetRegistry 或引用查询确认旧根下只剩空目录或无 redirector；再删除旧资产目录。不要在 fixup 之前直接从文件系统删除旧 `.uasset`。
8. Windows 命令行调用 `-ExecutePythonScript` 时，传给 Unreal 的 Python 脚本路径和参数里的报告路径使用 forward slash。反斜杠路径里的 `\U` 等序列可能被 Python 当作转义，导致脚本文件路径被解析损坏。
9. UE 5.8 Python 的 `AssetData` 不要依赖旧 `object_path` 属性；批处理脚本应从 `package_name` 和 `asset_name` 生成 `/<Package>.<Asset>`，或使用当前引擎提供的 soft object path API。
10. 地图迁移时不要把同目录的 `*_BuiltData` 作为独立 move action 处理。移动 `.umap` 可能会把对应 `MapBuildDataRegistry` 一起搬到目标目录；脚本若随后继续按旧路径加载 `*_BuiltData` 会失败。dry-run 可以记录 skipped paired built data，执行时让地图移动带走它。
11. UE 5.8 Python 里不要假设 `AssetTools` 提供 `consolidate_assets`。当前版本可用入口通常是 `EditorAssetSubsystem.consolidate_assets`，也可回退到 `EditorAssetLibrary.consolidate_assets`；脚本应检测实际方法后调用，并检查返回值。
12. UE 5.8 的 `IAssetTools::FixupReferencers` 仍在 C++ 接口里，但不是可从 Python 调用的 `UFUNCTION`。Python 迁移脚本不应强依赖 `asset_tools.fixup_referencers`；纯项目 `Content` 内迁移可以在移动和 consolidate 后调用 `ResavePackages -FixupRedirectors -ProjectOnly` 做引擎级 redirector 修复，涉及内容插件时按下方插件包范围规则处理。
13. 迁移中断后，如果重复资产已经被 move 到公共插件的 `_MigrationTemp`，再次执行时必须先扫描临时目录并生成 consolidate action。不能因为旧 `Content` 或旧插件根只剩 redirector 就直接删除临时目录，否则会丢掉尚未合并的重复资产和引用修复机会。外部 redirector fixup 成功前，也不要删除 `_MigrationTemp`；清理步骤应先确认临时根下已经没有任何资产。
14. PowerShell 包装器转换传给 Unreal 的报告输出路径时，不要对尚未存在的目标 JSON 使用 `Resolve-Path`。输入脚本路径可以要求存在；输出报告路径应允许缺失，用绝对路径归一化后替换为 forward slash。
15. 内容插件迁移时不要对 `ResavePackages -FixupRedirectors` 使用 `-ProjectOnly`。`-ProjectOnly` 会跳过插件 referencer，导致 commandlet 报 “unsaved packages reference it” 但实际 `0/0 packages were resaved`。应使用定向 `-PackageFolder=<OldProjectContentFolder>+<CommonPluginContentFolder>+<TempPluginContentFolder>+<OldPluginContentFolder> -SearchAllAssets`，把旧 redirector、公共插件目标资产、临时 redirector 和旧插件地图一起纳入包列表。
16. 如果 redirector 被 commandlet 过早删除，但目标插件资产仍含旧 package 引用，可以按旧 package 到新 package 的映射临时把新目标资产 duplicate 回旧路径，再立即 consolidate 到新目标；之后再运行插件包范围的 `FixupRedirectors`。这比二进制替换安全，因为它仍通过 Unreal 包加载、引用替换和保存链路处理 hard reference、soft path 和 asset registry。
17. 用二进制字符串扫描 `.uasset` / `.umap` 查旧路径时，要排除导入源文件路径，例如 `<UserImportFolder>/Game/<ArtPack>/...` 或 `<ImportDrive>/<ArtPack>/...`。扫描规则应只把前一个字符不是盘符、字母、数字、下划线或冒号的 `/Game/<ArtPack>/...`、`/<OldPlugin>/<ArtPack>/...` 当成 UE package 路径；否则会把 `AssetImportData.RelativeFilename` 误判成资产引用。

验证：

- dry-run 报告里没有 destination conflict 或 temporary conflict。
- 编辑器重启后旧路径引用不再出现在目标地图、蓝图、材质、DataAsset 的 referencer 中。
- `Content` 和旧插件根下不再有需要保留的 `ObjectRedirector`。
- 目标公共插件能单独启用并在 Content Browser 中显示迁移后的资产。

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

修复：视频文件统一放 `Content/Movies`；视频播放相关资产按用途放 `Content/Movies`、`Content/UI` 或对应 GameFeature 内容目录，并继续读取 `orion-movie-media-framework` 判断 `.bk2`、路径和打包规则。

### 本地化资源放进 Content

现象：本地化配置、PO/manifest/archive 放进 `Content/UI` 或 `Content/System`。

修复：语言本地化统一放项目根 `Localization`。

### Splash 图片放进 UI 或使用错误格式

现象：启动 Splash 图片放到 `Content/UI`，或只提交 `.jpg`、`.webp` 等源图。

修复：启动 Splash 固定放 `Content/Splash`，并转换保存为 `Splash.png` / `Splash.bmp` 或 `EdSplash.png` / `EdSplash.bmp`。

### 材质实例批量设置物理材质后运行时仍无效

现象：Python 脚本给选中的 `MaterialInstanceConstant` 调用了 `set_editor_property("phys_material", PhysMat)`，Details 面板或运行时命中仍表现为旧 Physical Material。

原因：材质实例通过 `override_phys_material` 决定是否使用自身 `phys_material`；该开关未启用时会继续继承 Parent。运行时 trace 还必须开启返回物理材质，组件或 BodySetup 的 override 也可能覆盖材质结果。

修复：批处理材质实例时同时设置 `override_phys_material=True` 和 `phys_material`，调用 `unreal.MaterialEditingLibrary.update_material_instance(asset)` 并保存资产；验证 hit result 时开启 Return Phys Mat，并检查组件/BodySetup/BodyInstance 是否存在更高优先级 override。

### Python 调用 post_edit_change 后只替换第一个材质

现象：选中多个 `MaterialInstanceConstant` 后运行脚本，只能保存第一个；日志报 `AttributeError: 'MaterialInstanceConstant' object has no attribute 'post_edit_change'`。

原因：`post_edit_change()` 是 C++ 编辑器通知函数，但并不保证作为 Python 方法暴露在所有 UObject 包装类型上。第一个资产的属性已经被写入内存，随后调用缺失方法抛异常，循环提前停止，后续选中资产不会处理。

修复：不要直接调用 `asset.post_edit_change()`。材质实例改完后调用 `unreal.MaterialEditingLibrary.update_material_instance(asset)`；普通 `Material` 用 `set_editor_property("phys_material", PhysMat)` 后保存，必要时调用 `refresh_material_editor()` 刷新已打开编辑器。循环内每个资产独立保存，并记录 skipped 列表，避免非材质资源让批处理静默失败。
