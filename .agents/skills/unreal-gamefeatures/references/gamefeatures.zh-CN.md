# GameFeatures 源码指南

GameFeatures 是 Unreal Engine 的模块化玩法插件系统，用于把一组内容、配置、组件、能力、输入、UI、GameplayCue 或其他运行时扩展封装到可加载、可激活、可反激活的 feature plugin 中。不同 UE 版本会有差异，最终以当前机器源码为准。

## 源码入口

优先从这些相对位置和符号开始查：

- `<EngineRoot>/Engine/Plugins/Runtime/GameFeatures`
- `GameFeatures.uplugin`
- `GameFeatures.Build.cs`
- `GameFeaturesEditor.Build.cs`
- `UGameFeaturesSubsystem`
- `UGameFeatureData`
- `UGameFeatureAction`
- `UGameFeaturePluginStateMachine`
- `EGameFeaturePluginState`
- `UGameFeaturesProjectPolicies`
- `IGameFeatureStateChangeObserver`
- `UGameFeaturesSubsystemSettings`
- `UE::GameFeatures::FResult`
- `GameFeatureAction_*.h/.cpp`

如果项目或插件封装了 GameFeatures，先查项目封装层，再回到引擎模块确认原生行为。

## 模块分层

常见模块：

- `GameFeatures`：运行时模块，包含 subsystem、状态机、GameFeatureData、Feature Action、project policy、observer、settings、URL 解析、内置 actions、cook/asset manager 集成。
- `GameFeaturesEditor`：编辑器模块，包含插件模板、details customization、metadata customization、非法依赖校验、状态显示 widget、editor settings。

运行时模块不要 include editor 模块头。编辑器模板、metadata、validation 代码应在 Editor 模块或 `WITH_EDITOR` 保护内。

## 核心心智模型

- `UGameFeaturesSubsystem` 是引擎级 subsystem，管理所有 GameFeature plugin 的状态机、policy、observer、built-in plugin 发现和公开状态切换 API。
- GameFeature plugin 用 plugin URL 标识，例如 file protocol 或 install bundle protocol。
- 每个 plugin 有一个状态机，负责 install/download、mount、dependency、register、load、activate、deactivate、unload、release、uninstall 和 error/terminal 状态。
- `UGameFeatureData` 是 feature plugin 的 primary data asset，持有 actions 和 primary asset scan rules。
- `UGameFeatureAction` 是数据驱动扩展点，随 feature 注册、加载、激活、反激活、卸载、注销被调用。
- `UGameFeaturesProjectPolicies` 是项目策略对象，决定 startup 行为、URL 解析、allow/deny、依赖解析、install mode 和 explicit load。
- `IGameFeatureStateChangeObserver` 是代码观察者接口，用于项目级生命周期副作用。数据驱动行为优先放在 actions。

## Experience 集成模型

本框架把 GameFeature 当成可组合玩法包，把 Experience 当成一次游戏体验的流程化入口。业务代码优先判断能否进入这个链路。

如果任务涉及创建 Experience、在关卡 WorldSettings 指定 Experience、编辑 `PlayerAccountClass`、`DefaultPawnData`、PawnData、AbilitySet 或 InputAction/InputTag 闭环，先读取 `../../unreal-gamemode-experience-framework/SKILL.md`。

核心数据关系：

- `CoreExperienceDefinition`：声明一次体验需要启用的 `GameFeaturesToEnable`、默认 `PawnData`、Experience 自身 actions、组合进来的 `CoreExperienceActionSet`。
- `CoreExperienceActionSet`：把一组可复用 actions 和额外 `GameFeaturesToEnable` 组合进 Experience，适合复用 HUD、输入、能力、组件、系统配置。
- `PawnData`：定义玩家 Pawn class、AbilitySet、TagRelationships、InputConfig 等角色初始化数据。
- `CoreExperienceUserFacingDefinition`：面向菜单、Lobby、Dedicated Server 或 Session 的用户可见体验定义，通常把 Map、ExperienceID、加载屏、URL 参数和创建房间请求串起来。
- GameFeature plugin：放在 `Plugins/GameFeatures/<FeatureName>`，内容目录通常继续分 `Experiences`、`Game`、`Player`、`System`、`UI` 等子目录。

从用户提供的 Experience 文档可抽象为：

1. AssetManager 扫描和加载 Experience。
2. Experience 指向 `PawnData`、ActionSets、Actions。
3. `PawnData` 再指向 PawnClass、AbilitySet、TagRelationships、InputConfig。
4. ActionSet 组合输入、组件、HUD、系统等 actions，并声明要启用的 GameFeature。
5. Actions 负责添加 abilities、components、widgets、input binding 等运行时扩展。

## Experience 运行链路

典型运行顺序：

1. 宿主 GameMode 根据 URL option、PIE/developer override、命令行、WorldSettings、Dedicated Server 或默认值选出 Experience 的 PrimaryAssetId。
2. GameMode 把 ExperienceId 交给 GameState 上的 ExperienceManagerComponent。
3. ExperienceManagerComponent 设置当前 Experience，复制给客户端，并进入加载状态。
4. AssetManager 加载 Experience 和所有 ActionSet 的 primary asset bundle；根据 net mode 加载 client/server bundle。
5. ExperienceManagerComponent 从 Experience 和 ActionSet 收集 `GameFeaturesToEnable`，通过 `UGameFeaturesSubsystem::GetPluginURLByName` 解析插件 URL。
6. ExperienceManagerComponent 等玩家初始化完成后，调用 `LoadAndActivateGameFeaturePlugin` 激活这些插件。
7. 所有插件激活完成后，ExperienceManagerComponent 执行 Experience 和 ActionSet 内联 actions 的 `OnGameFeatureRegistering`、`OnGameFeatureLoading`、`OnGameFeatureActivating`。
8. 加载状态变为 Loaded，按 HighPriority、Normal、LowPriority 顺序广播 ExperienceLoaded 委托。
9. GameMode 在 Experience Loaded 后才启动已经登录但尚未生成 Pawn 的玩家。

注意两类 actions 的区别：

- `UGameFeatureData` 里的 actions 由引擎 GameFeature 状态机在插件注册/加载/激活期间执行。
- `CoreExperienceDefinition` 和 `CoreExperienceActionSet` 里的 actions 由 ExperienceManagerComponent 在体验加载完成阶段额外执行，用于体验级组合。

不要在调用加载接口后立即读取 PawnData、输入、HUD 或能力结果。C++ 使用 ExperienceManagerComponent 的 `CallOrRegister_OnExperienceLoaded*`；蓝图可使用等待 Experience Ready 的 async action；已经加载时也应至少延后一帧处理依赖初始化。

## 业务代码落点决策

优先顺序：

1. 能随玩法、模式、地图、房间、训练关、活动内容启停的逻辑，优先放在 `Plugins/GameFeatures/<FeatureName>`。
2. 只是组合已有能力、输入、UI、组件、Cue、系统配置，优先改 Experience、ActionSet、PawnData 或已有 Feature Action 的数据。
3. 需要给 GameState、PlayerController、Pawn、HUD 等对象挂组件，优先用 Add Components 或现有项目 Feature Action 注入组件。
4. 需要新增一种可反激活的生命周期行为，创建新的 `UGameFeatureAction` 子类，并保存所有 handles 以便反向清理。
5. 需要全局观察所有 GameFeature 状态变化，才放进 ProjectPolicy 注册的 observer。
6. 只有真正跨所有玩法、常驻、不可随 feature 卸载、且属于宿主 Game 模块职责的逻辑，才放到宿主 Game 模块派生类。
7. 核心框架模块是 protected base layer，除非用户明确允许，不为普通业务修改核心模块。

常见适合 GameFeature 的业务：

- 一种独立游戏模式或玩法规则。
- 玩法专属玩家账户、玩家存档、PlayerGameplayComponent、PlayerSpawningManagerComponent。
- 玩法专属角色、PawnData、AbilitySet、InputConfig。
- 玩法专属 HUD、加载屏、菜单页、提示、通知。
- 玩法专属 GameState/PlayerController/Pawn/HUD 组件。
- 玩法专属 Session、房间、地图列表或 LevelMeta。
- 玩法专属消息 channel、统计、击杀/积分/目标系统。
- 可随 Experience 切换的音频、渲染、UI 或系统配置。

常见不适合直接放 GameFeature 的内容：

- 所有玩法都必须存在的基础框架抽象。
- 需要引擎启动早期永久可用的系统。
- 无法在反激活/World teardown 时清理的全局状态。
- 非玩法的编辑器工具，应放 Editor 模块或 Editor plugin。

## GameFeature 插件配置

Experience 驱动的玩法插件通常应保持显式加载：

- `.uplugin` 允许包含内容。
- 默认不要全局启用玩法内容。
- 使用 `ExplicitlyLoaded`。
- built-in 初始状态通常保持 Registered，由 Experience 的 `GameFeaturesToEnable` 决定何时激活。
- 插件依赖可写在 `.uplugin` 的 `Plugins` 数组中，但不要把“依赖声明”等同于“玩法已激活”。

创建或整理内容目录时，使用 `../../unreal-asset-management/SKILL.md`。常见子目录：

- `Content/Experiences`
- `Content/Game`
- `Content/Player`
- `Content/System`
- `Content/UI`

## TargetRules 中的 GameFeature 插件选择

宿主 target 可以在 `*.Target.cs` 中通过 `ConfigureGameFeaturePlugins(Target)` 扫描 GameFeature plugin descriptor，并按当前 target 决定启用或禁用插件。维护这段逻辑时注意：

- plugin descriptor JSON cache 如果是 static dictionary，读写必须加锁。UBT 可能并发构建或并发解析 target rules，不加锁会造成重复 Add、读取脏数据或偶发构建失败。
- `EnablePlugins` / `DisablePlugins` 属于 target-specific 插件启用策略，安装版引擎的普通 shared build environment 不支持随意切换；相关 Steam / 专用 target 约束继续读取 online/packaging Skill。
- 这段 target 逻辑只负责“本 target 是否编进某 feature plugin”，不等于 Experience 运行时会激活该 feature。运行时激活仍由 `GameFeaturesToEnable`、project policy 和 GameFeatures subsystem 决定。
- 新增 per-target 规则后要验证 Editor、Game、Client、Server 至少相关目标能解析 TargetRules，并确认 `.uplugin` 默认状态仍符合显式加载策略。

## 核心框架自定义 Feature Actions

项目已有的自定义 Feature Action 是优先复用对象。新增业务前先确认能否用这些 actions 组合出来。

### WorldActionBase

`GameFeatureAction_WorldActionBase` 是 world-scoped 自定义 action 的基础模式：

- 激活时保存 `FGameFeatureStateChangeContext` 对应的 GameInstance start handle。
- 立即遍历现有 WorldContext，并用 context 判断是否应该应用。
- 后续 GameInstance 启动时继续应用到新 world。
- 反激活时移除 start handle。
- 子类实现 `AddToWorld`。

写新 action 时不要只处理当前 world。必须同时处理“激活前已存在的 world”和“激活后才创建的 world”。

### Add Input Context Mapping

`GameFeatureAction_AddInputContextMapping` 用于把 EnhancedInput 的 `InputMappingContext` 随 feature 接入和移除。

注册阶段：

- 绑定所有 GameInstance 的本地玩家添加/移除事件。
- 遍历已有 local players。
- 找到 `UEnhancedInputLocalPlayerSubsystem`。
- 在 user settings 可用后，把设置了 `bRegisterWithSettings` 的 IMC 注册到 `UEnhancedInputUserSettings`，让玩家改键系统能看到这些映射。

激活阶段：

- 通过 component manager 监听 PlayerController extension 事件。
- 对 local player 调用 EnhancedInput subsystem 添加 IMC，并使用配置的 priority。

反激活/注销阶段：

- 移除 IMC。
- 从 user settings 注销 IMC。
- 移除 GameInstance/local player 相关绑定。

不要把“注册到 user settings”和“添加到当前输入栈”混为一谈。前者服务改键和可见性，后者影响当前输入生效。

### Add Input Binding

`GameFeatureAction_AddInputBinding` 用于把项目输入配置随 feature 注入 Pawn。

运行逻辑：

- 通过 component manager 监听 Pawn extension 事件。
- 当 Pawn extension added、PawnControl ready bind inputs 或角色初始化事件发生时，尝试添加输入配置。
- 找到 Pawn 的 PawnControlComponent。
- 对每个 `InputSystemConfig` 调用 `AddAdditionalInputConfig`。
- PawnControl/InputSystem 后续根据 InputConfig 绑定 InputAction、InputTag、Ability 输入等。
- 反激活时调用 `RemoveAdditionalInputConfig`。

输入相关业务通常需要同时检查：

- IMC 是否通过 Add Input Context Mapping 加入输入栈。
- InputConfig 是否通过 Add Input Binding 加入 PawnControl。
- Ability 输入是否由 InputTag、AbilitySet 和 ASC 初始化链路接上。
- 改键设置是否能看到要暴露给玩家的 IMC。

### Add Abilities

`GameFeatureAction_AddAbilities` 用于给指定 Actor class 授予 GAS 内容：

- 通过 component manager 监听目标 Actor class。
- 只在 authority 上授予能力和属性。
- 可授予单个 GameplayAbility、AttributeSet、AbilitySet。
- 找到或请求 AbilitySystemComponent。
- 保存 AbilitySpecHandle、AttributeSet 实例和 AbilitySet granted handles。
- 反激活时移除 AttributeSet、标记移除 Ability，并从 ASC 收回 AbilitySet。

优先用 AbilitySet 表达成组能力，避免在 feature action 里写散落的授予逻辑。

### Add Widgets

`GameFeatureAction_AddWidgets` 用于把 UI 随 feature 接入 HUD：

- 监听 HUD actor extension。
- 将 layout widget push 到 CommonUI layer。
- 通过 UIExtensionSubsystem 注册 slot widget。
- 保存 layout 弱引用和 UIExtension handle。
- 反激活时 deactivate layout，并 unregister extension handle。

不要直接在 UI 蓝图里硬编码所有玩法 HUD。玩法专属 HUD、slot widget、加载屏和通知优先通过 feature action 或 UIExtension 接入。

### Add Gameplay Cue Path

`GameFeatureAction_AddGameplayCuePath` 的数据由 ProjectPolicy 注册的 observer 消费：

- registering 时 observer 读取 action 的目录配置，把插件内 GameplayCue path 加入 GameplayCueManager。
- unregistering 时移除路径并重建 runtime cue library。

这类全局系统行为适合 observer，因为它要集中协调全局 GameplayCueManager；但每个 feature 的目录仍通过 action 数据声明。

### Splitscreen Config

`GameFeatureAction_SplitscreenConfig` 使用投票方式禁用/恢复分屏：

- 激活时对当前 viewport 增加 disable vote。
- 反激活时只移除本 action 的 vote。
- 只有最后一个 vote 移除时才恢复分屏。

共享全局开关时优先使用投票或引用计数，不要让单个 feature 直接覆盖其他 feature 的状态。

## 典型激活流程

1. 调用方通过 feature 名称或 plugin URL 找到目标插件。
2. `UGameFeaturesSubsystem` 根据 policy 检查是否允许加载，并解析依赖。
3. 子系统创建或复用对应 `UGameFeaturePluginStateMachine`。
4. 状态机移动到目标状态，过程中执行 mount、register、load、activate 等步骤。
5. 加载 `UGameFeatureData`。
6. 注册阶段会把 `UGameFeatureData` 声明的 primary asset scan rules 接入 AssetManager。
7. 状态变化先通知 observers，再调用每个 `UGameFeatureAction` 的 register/load/activate lifecycle。
8. 通过 completion delegate 返回 `FResult`。

不要在调用 `LoadAndActivateGameFeaturePlugin` 之后立即假设 feature 已经 active。必须等待 completion delegate 或查询最终状态。

## UGameFeaturesSubsystem

重点职责：

- 访问 singleton。
- 加载/卸载 GameFeatureData。
- 添加/移除 observers。
- 构建和解析 plugin URL。
- 查询 plugin 当前状态。
- 注册、加载、激活、反激活、卸载、释放、卸载安装包、终止 plugin。
- 取消状态切换。
- 通过名称解析 built-in GameFeature plugin URL。
- 访问 project policy。
- 处理 built-in GameFeature startup。
- cook 和 inactive plugin asset filtering。

常见风险：

- 用 feature 名称激活前没有处理 URL 解析失败。
- 不检查 completion delegate 的失败结果。
- 在异步状态切换中重复请求目标状态。
- 不理解依赖 feature 可能先于目标 feature 激活或反激活。

## State Machine

状态机是 GameFeatures 最容易出问题的部分。它负责一次 feature plugin 从未知状态到 active，再反向卸载的完整过程。

常见状态分组：

- 可用性和安装：unknown、uninstalled、checking、downloading、installed。
- mount 和 dependency：mounting、waiting dependencies、activating dependencies。
- asset 注册和加载：registering、registered、loading、loaded。
- gameplay 激活：activating、active、deactivating。
- teardown：unloading、unregistering、unmounting、releasing、uninstalling、terminal。
- failure：error states。

使用时把状态机内部当作实现细节。扩展点优先是 subsystem API、project policy、observer 和 action lifecycle。

## Plugin URL

常见 protocol：

- `file:`：本地 `.uplugin` 文件。
- `installbundle:`：install bundle 支持的插件 URL，需要有效 bundle 元数据。

工作规则：

- plugin URL 必须能定位到 `.uplugin`。
- 使用 feature 名称时，先通过 subsystem 或 project policy 解析 URL。
- install bundle URL 的 options 必须有效；解析失败要当作真实错误处理。
- 不要手写路径字符串后直接假设跨平台可用。

## UGameFeatureData

`UGameFeatureData` 是 feature plugin 的根数据资产。重点关注：

- actions 数组。
- primary asset types to scan。
- plugin config 初始化。
- asset registry tags。
- bundle data。
- editor validation。

设计规则：

- 一个 feature 的运行时扩展尽量通过 actions 表达。
- asset manager scan rules 会影响 cook 和资源发现，改动后必须验证 cook/asset manager 行为。
- action 顺序可能影响激活结果；新增 action 前先查同项目已有约定。

## UGameFeatureAction

Feature Action 是最常用扩展点。典型 lifecycle：

- registering：注册静态或全局元数据。
- unregistering：反注册。
- loading：准备已加载资产或非 world 状态。
- unloading：反向清理 loading 工作。
- activating with context：对适用 world context 生效。
- activated：激活后通知。
- deactivating with context：反向清理 active 行为；异步清理可暂停反激活。
- AddAdditionalAssetBundleData：向 owning GameFeatureData 贡献 bundle data。

设计规则：

- activation 和 deactivation 必须对称。
- 注册了什么，就要保存 handle 并在反向 lifecycle 移除。
- world-scoped 行为必须使用 context 过滤 world。
- 异步 teardown 必须使用 deactivation context 的 pause/completion 机制或当前版本等价能力。
- 不依赖析构函数清理 gameplay-visible 注册。

## Built-in Actions

常见内置 action 类型：

- Add Components：给匹配 Actor class 添加组件，通常通过 ModularGameplay component manager。
- Add Cheats：注册 cheat manager extension。
- DataRegistry：注册 DataRegistry 资产。
- DataRegistry Source：添加或移除 DataRegistry source。
- World Partition / content bundle：添加世界分区或内容 bundle。
- Chunk override：影响 cook/chunk 分配。
- Editor actor factory：编辑器向 actor factory 扩展。

`Add Components` 是实现自定义 world-scoped gameplay action 的重要参考：它处理现有 world、未来 game instance、client/server flags、request handles 和 deactivation。

## 当前 MCP GameFeatures 能力边界

当前项目 MCP 暴露的 `GameFeaturesToolset.GameFeaturesToolset` 只覆盖 GameFeature 插件状态类操作：

- `ListDiscoveredGameFeaturePlugins`
- `ListEnabledGameFeaturePlugins`
- `IsGameFeaturePlugin`
- `RequestActivateGameFeature`
- `RequestDeactivateGameFeature`
- `IsGameFeatureActive`
- `GetGameFeatureState`

Experience、ActionSet、PawnData、AbilitySet、InputAction、InputConfig 和关卡 WorldSettings 的资产创建/编辑，使用项目 Experience Toolset；具体函数和可逆验证流程读取 `../../unreal-mcp-project-toolsets/SKILL.md`。

## Project Policy

`UGameFeaturesProjectPolicies` 让项目控制全局策略。常见职责：

- 初始化和关闭 GameFeature manager。
- 决定 built-in feature startup。
- 解析 plugin descriptor/name 到 URL。
- allow/deny 插件。
- 解析 feature dependencies。
- 选择 install/streaming modes。
- explicit load hook。
- cooking 决策。
- preload asset list 和 bundle state。

使用 policy 处理项目级生命周期副作用，例如全局 cue path、analytics、hotfix、内容准备状态。单个 feature 的数据驱动行为优先用 action。

## Observer

`IGameFeatureStateChangeObserver` 适合全局观察状态变化。常见用途：

- 生命周期日志或分析。
- 全局 gameplay cue path。
- 内容 readiness。
- 项目级热修或全局系统通知。

不要把 observer 当作每个 feature 的主要 gameplay 执行点。能写成数据驱动 action 的逻辑，优先写 action。

## Editor 与 Validation

GameFeatures editor 模块常见职责：

- GameFeature plugin template。
- GameFeatureData details customization。
- plugin metadata customization。
- 非法 plugin dependency validation。
- 状态显示 widget。
- world partition content conversion。
- Asset Manager 设置提示。

常见依赖规则：

- 非 GameFeature plugin 不应依赖 GameFeature plugin。
- GameFeature plugin 的路径、metadata 和依赖需要 editor validation。
- runtime 模块不能依赖 `GameFeaturesEditor`。

## 与 EnhancedInput / CommonInput / UI 的关系

GameFeatures 常用于按 feature 激活/反激活输入、UI、能力和组件：

- 玩家账户、玩家进入/退出状态、玩家 GameplayComponent、玩家出生管理器：配合 `../../unreal-player-framework/SKILL.md`。
- 输入 mapping context 或 input config：配合 `../../unreal-enhancedinput/SKILL.md`。
- CommonUI/UMG widget、input mode、back/click、按键提示：配合 `../../unreal-commoninput/SKILL.md`。
- Gameplay Ability、Attribute、GameplayCue：配合 `../../unreal-gameplayabilities/SKILL.md`。
- Feature 内部或多个 feature 之间的 gameplay/UI/通知解耦通信：配合 `../../unreal-gameplay-message-router/SKILL.md`。
- 组件注入：查 `UGameFeatureAction_AddComponents` 和项目已有 action。

如果 feature 动态引入 replicated actors、网络组件、大量 spawned objects、team/squad/private state 或需要自定义 actor relevancy，读取 `../../unreal-replicationgraph/SKILL.md`，确认这些对象在 feature 激活和反激活期间有明确 graph placement、owner-only/dormancy 规则和多人验证路径。

关键规则：

- feature 激活时添加的 input mapping、widget、ability、component、cue path，都必须在反激活时移除。
- feature 激活时添加的 replicated actor class 或网络组件，也必须能在反激活、world teardown 和连接变化时清理或重新路由。
- Feature Action 要能处理现有 world 和未来 world。
- 多人游戏要验证 client/server flags 和 net mode。

## 修改前检查清单

- 目标是 feature plugin 生命周期、单个 action、project policy、observer，还是 editor tooling。
- 业务是否可以由 Experience、ActionSet、PawnData 或已有 Feature Action 数据组合完成。
- 玩法是否应该放入 `Plugins/GameFeatures/<FeatureName>`，而不是宿主 Game 模块或核心框架模块。
- 是否已有项目封装层或现成 action。
- 是否需要等待 ExperienceLoaded、PlayerInitialized 或 async ExperienceReady。
- 是否需要等待 completion delegate。
- 激活和反激活是否完全对称。
- 是否保存了所有 delegate/component/input/widget/ability/cue handles。
- 是否处理现有 world 和未来 world。
- 是否处理 client/server、listen server、dedicated server、standalone。
- 是否影响 asset manager scan rules、bundle data、cook 或 chunks。
- runtime/editor 模块边界是否正确。
- dependencies 是否会提前激活或反激活。

## 验证

- 构建相关目标模块。
- 修改反射声明时触发 UHT。
- 通过项目正常路径激活 feature，而不是只调用孤立函数。
- 通过实际 Experience 进入玩法，确认 `GameFeaturesToEnable`、ActionSet、PawnData 和 Experience actions 都执行。
- 检查 completion delegate 和 `FResult`。
- 检查 ExperienceLoaded 高/普通/低优先级委托顺序是否符合调用方依赖。
- 验证激活/反激活对称性：delegates、component handles、input mappings、widgets、abilities、cue paths、asset registrations。
- 验证 standalone、listen server、dedicated server、client 行为。
- 验证 world transition：现有 world 和未来 world 都正确。
- 验证 runtime 模块没有 include editor-only 头。
- 验证 cook/Asset Manager 行为。
- 验证 GameFeature dependencies 的顺序和副作用。
