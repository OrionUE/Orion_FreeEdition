# GameFeature 玩法插件规范框架

本文件用于创建新的“玩法 GameFeature 插件”。当需求是新增一个玩法、模式、训练关、测试玩法、活动玩法或可独立启停的业务包时，优先按这里的骨架规划，而不是把业务写进 GameMode、核心框架模块或全局常驻模块。

TPP 和 GameTest 两类模板体现了两种常见形态：

- 正式玩法插件：有独立 Runtime 模块、内容目录、Experience、UserFacingDefinition、LevelMeta、玩家账户、玩家 gameplay 组件、生成管理、UI 和会话流程。
- 测试玩法插件：结构保持一致，但可以更小；测试专用插件应禁止进入 Shipping。

## 创建前决策

先确认玩法是否满足以下任意条件：

- 可以随 Experience 激活和反激活。
- 有专属地图、房间、Lobby、加载屏或会话参数。
- 有专属玩家账户、玩家存档、玩家 gameplay 状态或出生规则。
- 有专属 PawnData、AbilitySet、输入、UI、交互、队伍、消息或统计。
- 可以通过 Add Components、Add Abilities、Add Widgets、Add Input Context Mapping、Add Input Binding 或 ActionSet 组合接入。

满足时创建 GameFeature 插件。只有全玩法常驻、不可卸载、且属于框架基础设施的内容才考虑放到宿主 Game 模块或核心框架层；核心框架层默认不为普通玩法修改。

## 插件描述文件

`.uplugin` 使用显式加载模式，让 Experience 决定何时启用：

```json
{
  "FileVersion": 3,
  "Version": 1,
  "VersionName": "1.0",
  "FriendlyName": "<FeatureName>",
  "Description": "<FeatureDescription>",
  "Category": "Game Features",
  "EnabledByDefault": false,
  "CanContainContent": true,
  "Installed": false,
  "ExplicitlyLoaded": true,
  "BuiltInInitialFeatureState": "Registered",
  "Modules": [
    {
      "Name": "<FeatureName>Runtime",
      "Type": "Runtime",
      "LoadingPhase": "Default"
    }
  ],
  "Plugins": [
    { "Name": "GameplayAbilities", "Enabled": true },
    { "Name": "CommonGame", "Enabled": true }
  ]
}
```

测试专用插件额外给 Runtime module 加：

```json
"TargetConfigurationDenyList": [ "Shipping" ]
```

依赖规则：

- `EnabledByDefault=false`，不要让玩法全局常驻。
- `ExplicitlyLoaded=true`，由 Experience 的 `GameFeaturesToEnable` 或更高层流程激活。
- `BuiltInInitialFeatureState=Registered`，让 AssetManager 能识别插件，但不自动 active。
- `Plugins` 只声明模块依赖，不代表玩法已经激活。
- 按实际使用添加插件依赖；不要把 UI、Settings、Steam、Inventory、LoadingScreen 等依赖预先塞进所有玩法。

## 模块骨架

Runtime 模块通常只需要一个最小模块类：

```cpp
class F<FeatureName>RuntimeModule : public IModuleInterface
{
public:
  virtual void StartupModule() override {}
  virtual void ShutdownModule() override {}
};

IMPLEMENT_MODULE(F<FeatureName>RuntimeModule, <FeatureName>Runtime)
```

玩法 GameFeature Runtime 模块通常只被自己的蓝图、资产和模块内部代码使用；如果类、结构、函数或 GameplayTag 声明不需要被其他 C++ 模块链接调用，默认不要添加 `<FeatureName>Runtime_API` 导出宏。只有明确存在跨模块 C++ include/link 需求时，再给对应类型或函数加模块 API 宏。

`Build.cs` 规则：

- Public dependency 保持最小：`Core`、`CoreUObject`、`Engine`。
- Private dependency 按实际功能添加：核心框架模块、宿主 Game 派生模块、`ModularGameplay`、`GameplayAbilities`、`CommonGame`、`CommonLoadingScreen`、`UMG`、`CommonUI`、`GameSettings`、在线/库存/交互等插件模块。
- GameFeature Runtime 代码或间接包含链需要 Steam SDK 蓝图类型、`FOrionSteamId`、Steam 邀请/Session API 时，把 `OrionSteamSDKAPI` 加到该 GameFeature Runtime 模块的 `PrivateDependencyModuleNames`；同时插件列表中也要包含OrionSteam插件；新增玩法依赖不要上提到宿主 Game 模块，但也不要擅自删除或移动宿主模块已有依赖。
- Runtime 模块不要依赖 editor-only 模块；编辑器模板、DataValidation 扩展、资产批处理放 Editor 模块或 `WITH_EDITOR`。

## 推荐目录

插件根目录：

```text
Plugins/GameFeatures/<FeatureName>/
  <FeatureName>.uplugin
  Source/<FeatureName>Runtime/Public/
  Source/<FeatureName>Runtime/Private/
  Content/<FeatureName>.uasset
  Content/Experiences/
  Content/Game/
  Content/Player/
  Content/System/
  Content/UI/
```

按玩法需要再增加：

- `Content/System/Playlists`：UserFacingDefinition、地图入口、房间列表、体验菜单数据。
- `Content/Character`：玩法专属角色、Lobby 展示角色、NPC 或可玩角色。
- `Content/Maps`：玩法测试地图或插件自带地图。
- `Content/LevelPrototyping`：灰盒和测试资产，正式发布前确认是否需要 cook。
- `Content/UI/Loading`：玩法加载屏。
- `Content/UI/Experiences`：玩法入口、Lobby HUD、结算页等 Experience 级 UI。

源码目录可按职责拆分：

```text
Public/Game
Public/Player
Public/Character
Public/UI
Private/Game
Private/Player
Private/Character
Private/UI
```

## 必备资产

每个玩法插件至少应有这些资产：

- 根 `GameFeatureData`：`Content/<FeatureName>.uasset`，类型为 `UGameFeatureData`。优先用 `GameFeaturesToolset.GameFeaturesToolset.CreateGameFeatureDataAsset` 创建，默认资产路径为 `/<FeatureName>/<FeatureName>.<FeatureName>`。
- Experience Blueprint：放在 `Content/Experiences`，父类使用宿主 Game 的具体 ExperienceDefinition 派生类。
- PawnData：放在 `Content/Game` 或 `Content/Character`，指向 PawnClass、AbilitySet、InputConfig。
- UserFacingDefinition：放在 `Content/System/Playlists`，定义 MapID、ExperienceID、LoadingScreenWidget、会话参数和 URL ExtraArgs。
- Blueprint 组件：给 C++ gameplay/player/spawner/UI 基类做数据化子类，供 Experience action 挂载。
- 玩家出生点：正式玩法地图放置 `ABBL_PlayerStart`，不要保留原生 `APlayerStart`。
- 玩法可调 Actor / Component / GA：只要后续可能需要美术或策划改默认值，就先创建 Blueprint 子类，再把 Blueprint 类写入地图、AbilitySet、PawnData、Experience action 或组件默认值。C++ 类默认作为稳定基类，不直接作为最终可调资产使用。
- 环境美术和场景业务 Actor：资源点、怪物营地、工作台、信标、场景交互点等应直接持久放在关卡里，让用户能在编辑器中移动、复制和调参；不要在运行时自动生成后才可见。运行时生成只用于玩家伙伴、技能投射物、玩家建造物等确实由玩法行为产生的对象。

复杂玩法还需要：

- LevelMetaDefinition：新游戏、存档元数据、Lobby/Game UserFacingDefinition 关系。
- ActionSet：复用输入、HUD、Session、通用能力、交互组件。
- AbilitySet：玩法能力和 InputTag 绑定。
- InputAction、InputMappingContext、InputConfig：输入闭环。
- LoadingScreen Widget：UserFacingDefinition 或加载屏系统使用。

根 `GameFeatureData` 要配置 PrimaryAssetTypesToScan。常见扫描类型包括：

- ExperienceDefinition 具体类型。
- ExperienceUserFacingDefinition 具体类型。
- LevelMetaDefinition 具体类型。
- `World`，如果插件内包含地图。

扫描目录应覆盖插件内容目录；CookRule 根据资源类型选择，正式玩法关键资产通常需要能被 cook。

## 标准 C++ 类清单

最小正式玩法通常包含：

- `A<FeatureName>GameMode : AOrionGameMode`
  - 当项目默认 GameMode 带有非当前玩法的 PlayerController、DefaultPawn 或蓝图逻辑时，给玩法地图指定这个最小 GameMode。
  - 构造函数保留宿主 ExperienceDefinition 类型，例如设置 `ExperienceDefinitionType`。
  - PlayerControllerClass、ReplaySpectatorPlayerControllerClass、DefaultPawnClass 等只设置当前玩法需要的安全默认值；具体 Pawn 仍优先由 Experience/PawnData 决定。
- `U<FeatureName>Gameplay_Game : UGameStateComponent`
  - 在 `BeginPlay` 找到 ExperienceManagerComponent。
  - 使用 `CallOrRegister_OnExperienceLoaded_LowPriority` 等待 Experience Loaded。
  - 需要存档初始化时，在回调中启动对应 GamePhaseAbility。
- `U<FeatureName>PlayerGameplay_Game : UOrionPlayerGameplayComponent`
  - 覆写 `OnPlayerInitialized`、`OnPlayerLogout`。
  - 放玩家进入、退出、玩法内玩家状态初始化。
  - PIE teardown 中对象可能已进入 unreachable；如果玩法没有蓝图退出逻辑，`OnPlayerLogout` 不要无条件触发父类 Blueprint event。
- `U<FeatureName>PlayerAccount : UOrionPlayerAccount`
  - 构造函数设置 `PlayerArchiveClass`。
  - 覆写 `Initialize`、`OnGetPlayerArchive`。
  - 创建或读取玩法专属 `ArchivePlayer`。
- `U<FeatureName>ArchivePlayer : UOrionArchivePlayer`
  - 保存玩法专属玩家持久化字段。

按需要增加：

- `U<FeatureName>ExperienceLevelMetaDefinition : UOrionExperienceLevelMetaDefinition`
  - 设置玩法模式类型。
  - 保存 Lobby/Game 的 UserFacingDefinition PrimaryAssetId。
  - 覆写 `CreateNewGame`，先调用 `Super` 写入存档元数据，再按玩法需要创建 Lobby session。
- `U<FeatureName>PlayerSpawningManagerComponent : UOrionPlayerSpawningManagerComponent`
  - 覆写 `OnChoosePlayerStart`、`OnFinishRestartPlayer`。
  - 实现按队伍、出生点池、随机点、玩家槽位或复活规则选点。
- `U<FeatureName>CharacterSpawnerManager : UOrionCharacterSpawnerManager`
  - 作为蓝图可挂载组件，管理展示角色、Lobby 角色或出生槽位。
- `A<FeatureName>CharacterSpawner : AOrionCharacterSpawner`
  - 作为玩法专属 spawner 类型，便于蓝图和地图筛选。
- `A<FeatureName>LobbyCharacter : AOrionCharacter, ILoadingProcessInterface`
  - Lobby 展示角色需要等待外观、存档或异步装配时，用 `ShouldShowLoadingScreen` 阻塞加载屏。
- `UUI_<FeatureName>LobbyHUD : UUI_ActivatableWidget`
  - 处理开始游戏、加载 UserFacingDefinition、CommonSession seamless travel 等 UI 操作。
- `UUI_<FeatureName>GameWorldSettingScreen : UGameSettingScreen`
  - 玩法内世界设置页，使用游戏世界设置 Registry 应用并保存。
- `U<FeatureName>PlayerData* : UOrionPlayerData`
  - 角色创建、职业、外观或玩法专属玩家数据的运行时对象。

命名以框架当前代码规范为准；创建资产前必须同时读取资产命名 Skill。

## Experience 组合模板

### 正式游戏 Experience

常见字段：

- `PlayerAccountClass`：玩法专属 PlayerAccount。
- `DefaultPawnData`：玩法默认 PawnData。
- `GameFeaturesToEnable`：依赖的其他玩法插件名称。
- `ActionSets`：共享输入、标准 HUD、Session、通用能力等。
- `Actions`：玩法内联 actions。

常见 `Actions`：

- Add Components
  - GameState 添加 `<FeatureName>Gameplay_Game`。
  - PlayerController 添加 SessionComponent 或玩法所需 Controller 组件。
  - PlayerState 添加 `<FeatureName>PlayerGameplay_Game`。
  - 需要交互提示时，给 PlayerController 或 HUD 挂 Indicator/Interaction 相关组件。
  - 需要音乐、角色初始化、目标系统时，添加对应玩法组件。
- Add Abilities
  - 给 PlayerState/ASC 授予 `AbilitySet_Session`、角色默认 AbilitySet 或玩法 AbilitySet。
  - 优先授予 AbilitySet，不要散落添加单个 GA。
- Add Widgets
  - 添加玩法 HUD layout、slot widget、通知 UI。
- Add Input Context Mapping
  - 给 LocalPlayer 添加玩法 IMC，并按需要注册到 user settings。
- Add Input Binding
  - 给 PawnControl 添加玩法 InputConfig。
  - 正式游戏界面的 HUD Widget Blueprint 以 `UGameHUDLayout` 为主基类。
  - HUD Widget 的 Input Config 指定为 `Game and Menu`。
  - HUD Widget 的 Escape Menu Class 指定为 `/Game/UI/Menu/GameMenu/W_GameMenu.W_GameMenu`。

### Lobby Experience

Lobby 常见配置：

- `PlayerAccountClass` 指向同一玩法账户类。
- `DefaultPawnData` 指向 Lobby 角色或展示 PawnData。
- Add Components 添加 Lobby gameplay、Lobby player gameplay、CharacterSpawnerManager、SessionComponent。
- Add Widgets 添加 Lobby HUD layout。
- Add Input Context Mapping / Add Input Binding 接入 Online/Lobby 输入。
- Add Abilities 授予 online/session 或 Lobby 需要的能力。

有 Lobby -> Game 流程时：

1. LevelMetaDefinition 持有 Lobby 和 Game 两个 UserFacingDefinition。
2. `CreateNewGame` 先创建新存档元数据。
3. Lobby UserFacingDefinition 创建 Lobby session。
4. Lobby HUD 开始游戏时加载 Game UserFacingDefinition。
5. 用 CommonSession seamless travel 进入 Game Experience。

### 测试玩法 Experience

测试玩法保持正式结构，但只保留最小动作：

- GameState gameplay 组件。
- PlayerState player gameplay 组件。
- SessionComponent。
- 标准 HUD ActionSet。
- 基础 AbilitySet。
- 最小 PawnData。

测试插件应在 `.uplugin` 里排除 Shipping，避免灰盒、测试地图或调试组件进入发布包。

## LevelMeta 与 UserFacingDefinition

UserFacingDefinition 是“从菜单、Lobby、Dedicated Server 或会话系统进入体验”的入口数据：

- `MapID`：目标地图。
- `ExperienceID`：目标 Experience。
- `ExtraArgs`：URL 参数；基础实现会写入 `Experience=<ExperienceName>`。
- `LoadingScreenWidget`：进入该体验使用的加载屏。
- 玩法派生类可扩展 MaxPlayerCount、Replay、SessionName 等会话参数。

LevelMetaDefinition 是“新游戏/新世界”的元数据入口：

- 写入当前存档的 LevelMetaDefinition PrimaryAssetId。
- 写入玩法模式类型。
- 复杂玩法可保存 Lobby/Game UserFacingDefinition，或创建初始 Lobby session。

有存档、世界选项、房间设置或 Lobby 的玩法，不要只建 Experience；应同时建 UserFacingDefinition 和 LevelMetaDefinition。

## 输入和 Ability 闭环

玩法输入必须同时闭合四条链：

- GameplayTag：存在 `InputTag.Ability.<Name>` 或项目约定 tag。
- InputAction/IMC：IMC 映射到 IA，并由 Add Input Context Mapping 加入输入栈。
- InputConfig：IA 映射到同一个 InputTag，并由 PawnData 或 Add Input Binding 加入 PawnControl。
- AbilitySet：GA 条目使用同一个 InputTag，并被 PawnData 或 Add Abilities 授予 ASC。

如果输入要出现在玩家改键设置中，Add Input Context Mapping 的条目需要注册到 user settings。

## 生命周期规则

- `LoadAndActivateGameFeaturePlugin` 是异步流程，等待 completion delegate 或 ExperienceLoaded，不要调用后立即读结果。
- Experience actions 在 ExperienceManagerComponent 完整加载后执行；Feature 根 `GameFeatureData` actions 由引擎 GameFeature 状态机执行。
- `UGameFeatureAction` 的注册、加载、激活、反激活、卸载、注销必须对称。
- World scoped action 必须处理已存在 world 和之后创建的 GameInstance。
- Add Components 必须正确设置 client/server flags。
- Add Abilities 只在 authority 授予；客户端 UI 和输入不要假设本地已经授予。
- Add Widgets、Input Mapping、Input Binding、GameplayCue path 都要保存 handle，并在反激活时移除。
- 玩法组件需要等 Experience Loaded、PlayerInitialized、PawnControl ready 或角色初始化事件，不要在构造函数或过早 BeginPlay 里读取未就绪数据。

## 蓝图职责

玩法蓝图优先做数据化配置：

- Experience 组合 actions、ActionSets、PawnData、PlayerAccountClass。
- PawnData 指向 PawnClass、AbilitySets、InputConfig。
- Blueprint 组件设置默认资源、软引用、展示资产和可调参数。
- Widget Blueprint 负责美术树和绑定到 C++ 基类暴露的事件/属性。
- GameplayAbility 也优先创建 GA Blueprint 子类后再写入 AbilitySet；即使当前逻辑全在 C++，也保留蓝图默认值扩展点。
- 资源类 Actor 需要区分木材、矿石等类型时，创建 `BP_WoodResourceNode`、`BP_OreResourceNode` 这类语义蓝图子类，并在 CDO 上设置资源类型、数量、外观和刷新时间，不要只放一个通用 native 类实例。
- 地图中使用的敌人、资源、工作台和其他环境对象必须是蓝图类实例；不要依赖 GameState 组件 BeginPlay 自动补场景内容。

不要把核心流程控制、网络 authority、存档创建、Ability 授予、Feature 反激活清理写成大型蓝图图表。已有 C++ 基类时，蓝图做子类和默认值。

## 新玩法创建清单

1. 确认玩法名、是否正式发布、是否需要 Lobby、是否需要存档/玩家账户。
2. 创建 `Plugins/GameFeatures/<FeatureName>` 插件和 Runtime 模块。
3. 写 `.uplugin`：内容插件、显式加载、初始 Registered；测试插件排除 Shipping。
4. 写最小 Runtime module 和 `Build.cs`。
5. 创建根 `GameFeatureData`，配置 PrimaryAssetTypesToScan；优先用 MCP 的 `CreateGameFeatureDataAsset`，不要手写 `.uasset`。
6. 创建 C++ 类：GameplayComponent、PlayerGameplayComponent、PlayerAccount、ArchivePlayer；按需创建 LevelMeta、Spawner、LobbyCharacter、UI 基类。
7. 创建蓝图子类和数据资产：Experience、PawnData、UserFacingDefinition、LevelMetaDefinition、ActionSet、AbilitySet、InputConfig、IMC、WBP、GA Blueprint、玩法 Actor Blueprint、组件 Blueprint。
8. 在 Experience 设置 `PlayerAccountClass`、`DefaultPawnData`、ActionSets 和 Actions。
9. 在 Add Components 中挂 GameState、PlayerController、PlayerState、HUD 或 Pawn 组件，并设置 client/server flags。
10. 在 Add Abilities、Add Widgets、Add Input Context Mapping、Add Input Binding 中接入能力、UI 和输入。
11. 关卡 WorldSettings 指定 Experience，或通过 UserFacingDefinition/Session flow 进入。
12. 如果项目默认 GameMode 会带入非当前玩法的控制器、默认 Pawn 或蓝图逻辑，给插件地图设置玩法专属 GameMode。
13. 关卡内删除原生 `APlayerStart`，放置 `ABBL_PlayerStart`，让项目出生管理组件能缓存和选择出生点。
14. 关卡内持久摆放资源点、敌人、工作台、信标等环境/场景业务 Actor，并使用具体蓝图子类；不要让这些内容靠运行时自动生成。
15. 更新 `Config/DefaultEditorPerProjectUserSettings.ini`：在 `[ContentBrowser]` 中添加 `FavoritePaths=/<FeatureName>`，在 `[/Script/CommonEditor.CommonEditorDeveloperSettings]` 中添加常用地图，便于编辑器快速导航。
16. 保存全部资产，运行 DataValidation、PIE 和多人端验证。

## 验证清单

静态检查：

- `.uplugin` 不是默认启用，且 `ExplicitlyLoaded=true`。
- Runtime module 不依赖 editor-only 模块。
- Runtime 代码中没有无意义的 `<FeatureName>Runtime_API` 导出宏；只有跨模块 C++ 链接需要的类型才导出。
- 根 GameFeatureData 能扫描 Experience、UserFacingDefinition、LevelMetaDefinition 和地图。
- Experience 的 `PlayerAccountClass`、`DefaultPawnData` 非空。
- 玩家角色蓝图继承 `/Game/GamePlay/Characters/BP_CharacterBase.BP_CharacterBase` 或合法的框架角色派生蓝图。
- UserFacingDefinition 的 `MapID`、`ExperienceID`、LoadingScreenWidget 正确。
- AbilitySet 和 InputConfig 使用同一个 InputTag。
- AbilitySet 授予的是 GA Blueprint generated class，不是直接授予 native GA class，除非该能力明确不需要蓝图扩展点。
- Add Components 的 client/server flags 符合实际运行端。
- 地图内玩家出生点是 `ABBL_PlayerStart`，没有原生 `APlayerStart`。
- 地图内资源、敌人、工作台等环境对象已持久摆放，且是具体蓝图子类；GameState 组件没有自动生成环境内容的 BeginPlay 兜底。
- 游戏 HUD Widget 继承 `UGameHUDLayout`，Input Config 为 `Game and Menu`，Escape Menu Class 为 `/Game/UI/Menu/GameMenu/W_GameMenu.W_GameMenu`。

运行检查：

- 通过实际入口进入关卡，而不是只打开地图。
- 地图或入口使用的 GameMode 不会带入其他玩法的 PlayerController、Pawn 或旧蓝图初始化逻辑。
- ExperienceManagerComponent 进入 Loaded。
- `GameFeaturesToEnable` 的插件激活成功。
- Experience 和 ActionSet actions 都执行。
- 玩家账户创建/读取存档成功。
- PlayerGameplayComponent 收到玩家初始化和退出事件。
- PawnData、AbilitySet、InputConfig、IMC、HUD layout 都生效。
- 反激活、退出地图、无缝旅行或返回主菜单后，没有残留输入、Widget、Ability、组件或全局注册。
- Listen Server、Dedicated Server、客户端都验证一次涉及网络的玩法。

命令和工具示例只写占位符，不写本机绝对路径：

```powershell
<UnrealEditor-Cmd> <Project>.uproject -run=DataValidation -ProjectOnly
<UnrealEditor-Cmd> <Project>.uproject -run=ResavePackages -ProjectOnly -Package=<PackagePath>
```

资产创建、蓝图默认值编辑和 WorldSettings 绑定优先用项目 MCP Toolset；如果工具缺失，先补 Toolset，不要手写 `.uasset` 二进制。

## 常见错误

- 把玩法插件设成 `EnabledByDefault=true`，导致所有玩法常驻。
- 忘记 `ExplicitlyLoaded` 或初始状态不对，Experience 无法稳定控制激活时机。
- 根 GameFeatureData 没有扫描插件内 Experience，打包后找不到玩法资产。
- Experience 没有设置 `PlayerAccountClass` 或 `DefaultPawnData`。
- 有 Lobby/Game 两阶段流程却只建一个 UserFacingDefinition。
- 在 GameMode 写具体玩法规则，绕开 Experience。
- 直接沿用项目默认 GameMode，导致旧玩法的 PlayerController、DefaultPawn 或蓝图组件在新玩法 PIE 中运行。
- 地图里放了原生 `APlayerStart`，导致 `UOrionPlayerSpawningManagerComponent` 只缓存 `AOrionPlayerStart` 派生点时找不到有效出生点。
- 新建正式角色蓝图时直接继承 native Character，而不是继承 `/Game/GamePlay/Characters/BP_CharacterBase.BP_CharacterBase`。
- HUD Widget 没有继承 `UGameHUDLayout`，或没有设置 `Game and Menu` Input Config 与项目标准 Escape Menu。
- 新建 GameFeature 后忘记把插件路径加入 Content Browser favorite，或忘记把地图加入 CommonEditor 常用地图。
- 资源点、敌人、工作台等场景内容在 BeginPlay 中自动生成，导致编辑器里看不到、无法手动摆放和调参。
- AbilitySet 直接写 native GA class，后续需要改默认值时又被迫回改 C++ 或替换资产。
- 在 FeatureAction 激活时注册了 delegate/input/widget/ability，反激活时没有移除。
- 输入只建了 IA/IMC，没有把 InputConfig、InputTag、AbilitySet 串起来。
- Add Components 没有区分 client/server，Dedicated Server 上加载了 UI，或客户端缺少必要组件。
- 测试插件没有排除 Shipping。
