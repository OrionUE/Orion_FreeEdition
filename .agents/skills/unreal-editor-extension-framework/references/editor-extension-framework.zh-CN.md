# Unreal 编辑器扩展框架手册

## 目录

- 使用边界
- 架构分层
- 项目 Editor module
- CommonEditorExtension 插件
- ToolMenus 工具栏扩展
- GameplayCue 编辑器委托
- DataValidation 验证体系
- Editor ini 配置
- 常见开发模式
- 验证清单
- 常见错误

## 使用边界

本手册用于框架内编辑器扩展，不用于普通 runtime gameplay。命中以下需求时使用：

- 自定义编辑器引擎、编辑器首帧设置、PIE 开始/结束逻辑。
- Level Editor 工具栏按钮、下拉菜单、Common Maps、Slate 图标和样式。
- Content Validation、DataValidation、SourceControl、Blueprint、MaterialFunction 或加载警告验证。
- GameplayCue Editor 默认 Notify 类型、GameplayCueInterface 搜索类、Cue Notify 默认保存路径。
- `DefaultEditor.ini`、`DefaultEditorKeyBindings.ini`、`DefaultEditorPerProjectUserSettings.ini` 或 `DefaultEngine.ini` 中编辑器相关配置。

不要把宿主项目名、绝对路径、用户名或本机引擎路径写进 Skill、脚本、配置样例或可发布文档。需要说明位置时使用相对路径，例如 `Source/<EditorModule>`、`Plugins/Common/CommonEditorExtension`、`Config/DefaultEditor.ini`。

## 架构分层

编辑器扩展分两层：

| 层 | 职责 | 典型位置 |
| --- | --- | --- |
| 项目 Editor module | 项目级编辑器引擎、PIE 生命周期、与宿主 runtime 框架的编辑器 glue | `Source/<EditorModule>` |
| CommonEditorExtension | 可复用编辑器插件：工具栏、验证器、GameplayCue 编辑器委托、Editor DeveloperSettings 和 Slate style | `Plugins/Common/CommonEditorExtension` |

规则：

1. 只在编辑器运行的代码放 Editor module 或 Editor plugin module。
2. Runtime 模块不得依赖 `UnrealEd`、`ToolMenus`、`DataValidation`、`GameplayAbilitiesEditor`、`SourceControl`、`Slate` editor-only 功能。
3. 需要跨 runtime/editor 共享的数据结构，应拆到 runtime 模块；实际编辑器操作留在 Editor module。
4. 修改配置前先判断它属于 `DefaultEngine.ini`、`DefaultEditor.ini`、`DefaultEditorKeyBindings.ini` 还是 `DefaultEditorPerProjectUserSettings.ini`。

## 项目 Editor module

项目 Editor target 是 `TargetType.Editor`，通常把宿主 game module 和 editor module 加入 `ExtraModuleNames`。共享 Target 设置可能定义 include order、build settings、插件扫描和指针成员规则；新增构建逻辑前先读取目标 `*.Target.cs`。

Editor module 的 `Build.cs` 只放编辑器依赖。当前框架的项目 Editor module 模式：

- Public dependencies：`Core`、`CoreUObject`、`Engine`。
- Private dependencies：`UnrealEd` 和需要调用的 runtime 框架模块。
- 公共 include path 可暴露 editor module 自身，但不要让 runtime 反向依赖 editor module。
- 可以加 `SHIPPING_DRAW_DEBUG_ERROR=1` 这类跨配置诊断宏，但不要在 editor module 内承载 runtime 业务逻辑。

### 模块生命周期

项目 Editor module 的 `StartupModule` 在非 game 运行时绑定 `FEditorDelegates::BeginPIE` 和 `EndPIE`。引擎源码中 `BeginPIE` 在 PIE 前置检查通过后、创建 PIE world 前广播；`EndPIE` 在 PIE 结束流程广播。

使用规则：

- 绑定原生对象成员可用 `AddRaw(this, &ThisClass::Func)`，必须在 `ShutdownModule` 用 `RemoveAll(this)` 或保存 `FDelegateHandle` 后移除。
- PIE 开始时可通知框架级 Editor subsystem 或 Experience manager 做编辑器态准备。
- 不要在 `BeginPIE` 中执行可能阻塞或弹窗的重负载资产扫描；这类检查放工具栏按钮或 DataValidation。
- `OnEndPIE` 应清理 PIE 期间注册的临时状态；如果没有状态就保持空实现。

### 自定义 EditorEngine

框架用自定义 `UUnrealEdEngine` 派生类作为编辑器引擎。配置入口在 `DefaultEngine.ini`：

```ini
[/Script/Engine.Engine]
UnrealEdEngine=/Script/<EditorModule>.<EditorEngineClass>
EditorEngine=/Script/<EditorModule>.<EditorEngineClass>
```

常见重写点：

- `Init(IEngineLoop*)`：引擎初始化阶段。适合初始化全局服务，必须先或后调用 `Super` 并清楚依赖是否已可用。
- `Start()`：引擎启动阶段。适合需要 Init 后执行的 editor setup。
- `Tick(float, bool)`：每帧。框架通过一次性 `FirstTickSetup()` 做首帧设置。
- `PreCreatePIEInstances(...)`：PIE instance 创建前，可返回失败阻止 PIE 或调整 online PIE 数量；默认透传 `Super`。

首帧设置适合处理需要 editor UI 和 settings 已经可用的选项。例如框架在首帧调用：

```cpp
GetMutableDefault<UContentBrowserSettings>()->SetDisplayPluginFolders(true);
```

不要把持续轮询放进 EditorEngine tick；首帧任务用布尔 guard，长周期任务用 subsystem、ticker 或明确的工具命令。

## CommonEditorExtension 插件

`CommonEditorExtension` 是 Editor 类型插件，`CanContainContent=true`，包含一个 Editor module。插件启用 `DataValidation` 和 `GameplayAbilities`，因为它实现了验证器和 GameplayCue 编辑器委托。

Editor module 依赖模式：

- Public：`Core`、`CoreUObject`、`Engine`。
- Private：`UnrealEd`、`ToolMenus`、`Slate`、`SlateCore`、`SourceControl`、`DataValidation`、`StudioTelemetry`、`DeveloperToolSettings`、`DeveloperSettings`、`GameplayAbilities`、`GameplayAbilitiesEditor`。

Startup/Shutdown 必须对称：

1. `FGameEditorStyle::Initialize()` 注册 Slate style。
2. 非 game 运行时监听 `FModuleManager::Get().OnModulesChanged()`，以便 `GameplayAbilitiesEditor` 后加载时重新绑定委托。
3. 调用 `BindGameplayAbilitiesEditorDelegates()`。
4. `FSlateApplication::IsInitialized()` 后通过 `UToolMenus::RegisterStartupCallback` 注册菜单。
5. Shutdown 时注销 ToolMenus startup callback、解绑 GameplayAbilitiesEditor delegates、移除模块变化监听、注销 Slate style。

## ToolMenus 工具栏扩展

工具栏扩展使用引擎 `UToolMenus`。引擎注释说明 `RegisterStartupCallback` 会延迟到菜单系统安全可用，并且在 commandlet、game、dedicated server 或 client-only 场景不会触发。

框架扩展点：

- 扩展菜单名：`LevelEditor.LevelEditorToolBar.PlayToolBar`。
- section：`PlayGameExtensions`，插入到 `Play` 后。
- 按钮 `CheckContent`：调用 `UEditorValidator::ValidateCheckedOutContent(true, EDataValidationUsecase::Manual)`。
- 下拉 `CommonMapOptions`：读取 `UCommonEditorDeveloperSettings::CommonEditorMaps` 并打开所选地图。

按钮可见性和可执行条件：

- `HasPlayWorld()` 判断 `GEditor->PlayWorld != nullptr`。
- 资产检查和 Common Maps 在 PIE/SIE 中隐藏或禁用。
- 地图打开走 `GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(MapPath)`。

新增工具栏按钮时：

1. 在 `RegisterGameEditorMenus()` 里扩展已有 section 或新增 section。
2. 用 `FUIAction` 明确 Execute、CanExecute、IsVisible。
3. 需要图标时先在 `FGameEditorStyle` 注册 style key，再用 `FSlateIcon(FGameEditorStyle::GetStyleSetName(), "<StyleKey>")`。
4. Shutdown 只注销 startup callback；不要在运行时重复注册同名 entry。

## Slate style

`FGameEditorStyle` 持有一个 `FSlateStyleSet` 单例：

- `Initialize()` 创建并注册 style。
- `Shutdown()` 注销 style，检查唯一引用后 reset。
- style set name 当前为 `GameEditorStyle`。
- 插件图标位于插件 Content 的 `Editor/Slate` 子目录，例如 `Content/Editor/Slate/Icons/CheckContent.svg`。

如果插件目录结构变化，优先用插件管理器或相对插件 Content root 获取路径；不要把本机绝对路径写进 style。

## Common Maps 设置

`UCommonEditorDeveloperSettings` 继承 `UDeveloperSettingsBackedByCVars`：

```cpp
UCLASS(Config=EditorPerProjectUserSettings, MinimalAPI)
class UCommonEditorDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
    GENERATED_BODY()

public:
    UPROPERTY(config, EditAnywhere, BlueprintReadOnly, Category=Maps, meta=(AllowedClasses="/Script/Engine.World"))
    TArray<FSoftObjectPath> CommonEditorMaps;
};
```

配置写在 `DefaultEditorPerProjectUserSettings.ini`：

```ini
[/Script/CommonEditor.CommonEditorDeveloperSettings]
+CommonEditorMaps=/Game/System/Frontend/Maps/L_Frontend.L_Frontend
```

新增常用地图通常只改 ini，不需要改 C++。路径必须是有效 World 资产软路径；如果是 GameFeature 插件地图，使用插件 mount point 的 asset path。

## GameplayCue 编辑器委托

`CommonEditor` 绑定 `IGameplayAbilitiesEditorModule` 的三个 delegate：

- `GetGameplayCueNotifyClassesDelegate()`：创建 Cue Notify 时提供默认类。
- `GetGameplayCueInterfaceClassesDelegate()`：搜索实现 `UGameplayCueInterface` 的 Actor 类。
- `GetGameplayCueNotifyPathDelegate()`：根据 GameplayCue tag 计算新 Notify 的默认保存路径。

当前默认 Notify 类：

- `UGameplayCueNotify_Burst`
- `AGameplayCueNotify_BurstLatent`
- `AGameplayCueNotify_Looping`

默认保存路径规则：

1. 优先读取 `UAbilitySystemGlobals::GetGameplayCueNotifyPaths()` 第一项。
2. 去掉 tag 前缀 `GameplayCue.`。
3. 生成 `GCN_<TagRemainder>` 资产名。

注意：

- `GameplayAbilitiesEditor` 可能后加载，所以模块监听 `OnModulesChanged`，当模块加载时再次绑定。
- Shutdown 时如果模块可用，必须 `Unbind()`。
- GameFeature 独有 GameplayCue 路径通常还要结合 GameFeature 的 GameplayCue path action 和资产管理 Skill，不要只依赖默认第一路径。

## DataValidation 验证体系

框架验证器继承公共 `UEditorValidator` 基类，该基类继承引擎 `UEditorValidatorBase`。引擎 DataValidation subsystem 会在编辑器启动和原生模块加载时枚举 `UEditorValidatorBase` 的 C++ 派生类并自动 `NewObject` 注册；因此新增 C++ 验证器通常不需要手动 `AddValidator`。

### 公共基类能力

`UEditorValidator` 提供：

- `ValidateCheckedOutContent(bool bInteractive, EDataValidationUsecase)`：验证 source control 中 checked out、added、deleted 的内容。
- `ValidatePackages(...)`：加载包、收集加载 warning/error、调用 `UEditorValidatorSubsystem::ValidateAssetsWithSettings`。
- `ValidateProjectSettings()`：检查项目设置，例如禁止把 Python `bDeveloperMode` 写入项目默认设置。
- `IsInUncookedFolder(PackageName)`：跳过打包排除目录。
- `ShouldAllowFullValidation()`：commandlet 或交互式全量验证时允许慢检查。
- `GetChangedAssetsForCode(...)`：头文件变更时通过 `FSourceCodeNavigation` 和 AssetRegistry 找到受影响的非 data-only Blueprint。

验证流程关键点：

1. AssetRegistry 仍在扫描时，交互式模式弹窗提示，非交互模式记录日志并退出。
2. source control 开启时，同步 opened files 状态，只验证 checked out、added、deleted 的资产；删除资产会追加 referencer 验证。
3. `.h` 变更会尝试找到同头文件内 native class 的派生 Blueprint，受 `EditorValidator.MaxAssetsChangedByAHeader` 限制。
4. 交互式验证会先完成 shader compile，再开启 full validation。
5. Package 数量超过上限时跳过既有包验证并输出 warning。
6. 加载 warning 会被提升为 error 记录，便于 CI 或提交前流程阻断。

### 已有验证器

| 验证器 | 作用 |
| --- | --- |
| `UEditorValidator_Load` | 捕获资产加载 warning/error。非 commandlet 启用；full validation 时对已在内存中的非地图包复制到 `/Temp` 再加载，避免当前内存状态掩盖加载问题。 |
| `UEditorValidator_Blueprints` | 验证 Blueprint。full validation 时对非 data-only Blueprint 额外加载直接 hard referencer 中的非 data-only Blueprint，发现因依赖变化导致的编译/加载问题。 |
| `UEditorValidator_MaterialFunctions` | 验证 Material Function。full validation 时加载引用它的 `UMaterial`，发现材质编译/加载问题。 |
| `UEditorValidator_SourceControl` | 对 source-controlled 资产检查依赖是否也已加入 source control，忽略 `/Script/` 依赖和 unknown 状态。 |

UE 5.8 中 `GetObjectsWithPackage` 使用 flags 版本。维护 `UEditorValidator_Load` 这类包内对象枚举逻辑时，优先使用当前引擎签名，例如 `EGetObjectsFlags::None` 和 `IncludeNestedObjects`；不要复制旧版本 bool 参数写法。

### 新增验证器模式

新增验证器优先继承 `UEditorValidator`：

```cpp
UCLASS()
class UEditorValidator_MyRule : public UEditorValidator
{
    GENERATED_BODY()

protected:
    using Super::CanValidateAsset_Implementation;

    virtual bool CanValidateAsset_Implementation(
        const FAssetData& InAssetData,
        UObject* InObject,
        FDataValidationContext& InContext) const override;

    virtual EDataValidationResult ValidateLoadedAsset_Implementation(
        const FAssetData& InAssetData,
        UObject* InAsset,
        FDataValidationContext& Context) override;
};
```

实现规则：

- `CanValidateAsset_Implementation` 先检查 `Super::CanValidateAsset_Implementation(InObject)`，除非该验证器有意验证 uncooked/excluded 内容。
- 只在 `ShouldAllowFullValidation()` 为 true 时做 referencer 遍历、额外加载、shader compile 等慢操作。
- 使用 `AssetFails`、`AssetWarning`、`AssetPasses` 设置结果；没有失败时显式 `AssetPasses`。
- 不要在验证器里保存持久编辑器状态；验证器实例由 subsystem 管理。
- 如果某条规则需要临时忽略已知加载 warning，使用 `FCommonEditorValidationMessageGatherer::AddIgnorePatterns` 并确保移除。

## Editor ini 配置

### DefaultEngine.ini

编辑器引擎类绑定在 `[/Script/Engine.Engine]`，属于运行时 Engine 配置，但影响 Editor 启动：

```ini
[/Script/Engine.Engine]
UnrealEdEngine=/Script/<EditorModule>.<EditorEngineClass>
EditorEngine=/Script/<EditorModule>.<EditorEngineClass>
```

修改后必须重启编辑器验证。类路径错误会导致编辑器无法按预期使用自定义 EditorEngine。

### DefaultEditor.ini

此文件用于编辑器项目设置。当前框架重点：

- `[/Script/Localization.LocalizationSettings]`：配置 Game 和 EngineOverrides 本地化 target。
- Gather 路径包含 `Source`、`Config`、`Plugins`、`Content`、`Plugins/GameFeatures/*` 和少量 Engine runtime module。
- `NativeCultureIndex` 和 `SupportedCulturesStatistics` 控制本地化原生语言与支持语言统计。
- `[CookSettings] +IncrementalClassScriptPackageAllowList=Allow,<ProjectRoot>` 控制增量 class script package cook 允许项。
- `[/Script/UnrealEd.EditorPerformanceProjectSettings]` 设置 realtime/non-realtime screen percentage 模式。

修改本地化配置时：

1. 使用 `+` 添加、`-` 移除数组项，避免重复堆叠。
2. GameFeature 内容要加入 gather/cook 可见范围。
3. EngineOverrides 只放确实需要覆盖的 Engine 模块文本，不要扩大到全引擎。

### DefaultEditorKeyBindings.ini

用于默认键位绑定。当前模式：

```ini
[UserDefinedChords]
UserDefinedChords=~OpenBracket~~Quote~BindingContext~Quote~:~Quote~PlayWorld~Quote~,...
```

键位条目是 UE 序列化过的 chord 数据。新增键位时优先从编辑器导出或复制同格式，不要手写未验证的 command name。当前框架把 PlayWorld 的 `StopPlaySession` 绑定到 `Shift+Escape`。

### DefaultEditorPerProjectUserSettings.ini

这是每项目用户默认设置，适合给团队提供初始编辑器偏好，但不应保存个人机器状态。

当前框架使用：

- `[/Script/UnrealEd.ContentBrowserSettings]`：`DisplayPluginFolders=True`、`DisplayFavorites=True`。
- `[ContentBrowser] FavoritePaths=...`：内容浏览器收藏路径。
- `[ContentBrowserTab*.FavoritesArea]` 和 `[ContentBrowserDrawer.FavoritesArea]`：默认展开收藏区。
- `[/Script/ModelContextProtocolEngine.ModelContextProtocolSettings]`：`ServerUrlPath=/mcp`、`ServerPortNumber=18765`、`bAutoStartServer=True`、`bEnableToolSearch=True`。
- `[/Script/CommonEditor.CommonEditorDeveloperSettings]`：`+CommonEditorMaps=...`。

新增配置时：

1. 只放团队通用编辑器默认值。
2. 不写本机路径、窗口坐标、最近文件、账号、token。
3. MCP 端口和 url path 改动后，要同步 MCP workflow Skill 或相关工具说明。
4. Common Maps 使用 soft object path，确保插件内容 mount point 已启用。

## 常见开发模式

### 添加编辑器工具栏按钮

1. 确认功能只在编辑器可用，代码放 `CommonEditor` 或目标 Editor module。
2. 在 Build.cs 添加最小 Private dependencies，例如 `ToolMenus`、`Slate`、`SlateCore`、`UnrealEd`。
3. 在菜单注册函数里 `ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar")`。
4. 用 `FToolMenuEntry::InitToolBarButton` 或 `InitComboButton`。
5. PIE 中不安全的命令使用 `HasNoPlayWorld` 控制 CanExecute 和 IsVisible。
6. 若需要图标，先注册 style key。
7. 构建 Editor target，启动编辑器确认按钮显示、隐藏和点击行为。

### 添加 Common Map

只需要在 `DefaultEditorPerProjectUserSettings.ini` 增加：

```ini
[/Script/CommonEditor.CommonEditorDeveloperSettings]
+CommonEditorMaps=/Game/<Folder>/<Map>.<Map>
```

验证：启动编辑器，Common Maps 下拉可见，点击能打开地图。PIE 中下拉应隐藏或禁用。

### 添加 Content Validation 规则

1. 在 Editor plugin module 中新增 `UEditorValidator_*` 派生类。
2. 只覆盖目标资产类型。
3. 快检查直接执行，慢检查放 `ShouldAllowFullValidation()` 内。
4. 使用 `AssetFails` 返回可读错误。
5. 运行工具栏 `Check Content` 或 DataValidation commandlet 验证。

### 添加 PIE 生命周期逻辑

选择入口：

- 只是通知 runtime framework PIE 开始/结束：`FEditorDelegates::BeginPIE` / `EndPIE`。
- 需要在 PIE instance 创建前阻止、调整或检查：`UUnrealEdEngine::PreCreatePIEInstances`。
- 需要编辑器启动后设置 UI/default settings：自定义 EditorEngine 首帧 setup。

所有入口都要可重复、可撤销，并避免影响 commandlet/game/server。

## 验证清单

写代码前：

1. 已确认目标 module/plugin 是 Editor 类型。
2. 已读取目标 `Build.cs`，Editor-only 依赖不会泄漏到 Runtime。
3. 已确认是否需要 `DefaultEngine.ini` EditorEngine 绑定、`DefaultEditor.ini` 项目设置、`DefaultEditorKeyBindings.ini` 键位或 `DefaultEditorPerProjectUserSettings.ini` 默认偏好。
4. 已查引擎源码确认生命周期：`FEditorDelegates`、`UUnrealEdEngine`、`UToolMenus`、`UEditorValidatorSubsystem` 或 `IGameplayAbilitiesEditorModule`。

实现后：

1. 构建 `<PROJECT_EDITOR_TARGET>`。
2. 启动编辑器验证菜单、按钮、Common Maps 或 EditorEngine 设置。
3. PIE 前后验证委托不会重复触发或残留。
4. DataValidation 跑最小资产集，并确认 MessageLog/OutputLog 中错误可读。
5. 修改 MCP editor settings 后，验证 server endpoint 和 tools list。
6. 修改 editor ini 后，确认配置没有个人路径、账号、token 或一次性 UI 状态。

## 常见错误

### Runtime 模块依赖 Editor API

现象：Editor 中可编译，Game/Client/Server 构建失败，常见报错指向 `UnrealEd`、`ToolMenus`、`EditorValidatorBase`、`GameplayAbilitiesEditor`。

修复：把实现移动到 Editor module 或 Editor plugin module。Runtime 只保留数据类型或接口。

### ToolMenus 重复注册或退出崩溃

现象：热重载或重启后按钮重复，退出时报 style/menu 相关崩溃。

修复：使用 `RegisterStartupCallback` 返回的 `FDelegateHandle`，Shutdown 时注销；Slate style 初始化和注销保持对称。

### 验证器太慢或验证保存中资产导致副作用

现象：保存资产时卡顿、验证中触发大量加载或 shader compile。

修复：默认验证只做轻量检查；referencer 遍历、额外加载、shader compile 等放 `ShouldAllowFullValidation()` 内，只在 commandlet 或交互式 Check Content 中执行。

### Common Maps 不显示

检查顺序：

1. `DefaultEditorPerProjectUserSettings.ini` section 是否为 `[/Script/CommonEditor.CommonEditorDeveloperSettings]`。
2. `CommonEditorMaps` 是否至少有一个有效 soft object path。
3. 当前是否在 PIE/SIE；有 PlayWorld 时按钮会隐藏。
4. 插件内容 mount point 是否启用，地图路径是否真实存在。

### GameplayCue Notify 创建路径不对

原因通常是 `UAbilitySystemGlobals::GameplayCueNotifyPaths` 第一项不是期望目录，或 GameFeature Cue path 尚未注册。

修复：先检查 GameplayAbilities 配置和 GameFeature `AddGameplayCuePath`，再调整编辑器委托路径策略。不要在 GameplayCue Editor 里硬编码某个玩法插件路径。

### EditorEngine 配置未生效

检查顺序：

1. `DefaultEngine.ini` 是否同时配置 `UnrealEdEngine` 和 `EditorEngine`。
2. class path 是否使用 `/Script/<EditorModule>.<EditorEngineClass>`。
3. Editor target 是否包含 editor module。
4. 编辑器是否重启；EditorEngine class 绑定不是热更新配置。
