# GameCore 框架运行机制

## 目录

- 使用边界
- 核心规则
- 模块依赖
- 主运行链路
- 类职责地图
- 推荐扩展点
- API 速查
- 验证清单
- 常见错误

## 使用边界

GameCore 是框架底层核心模块，负责 Experience、Pawn 初始化、ASC/Ability、GameFeature Action、Session 抽象、AssetManager、GamePhase、基础 GameMode/GameState/PlayerController/PlayerState/Character 等通用机制。

GameCore 默认不参与业务代码增加。除非用户明确允许，否则不要修改 `Source/GameCore`；`Build.cs`、Target glue、配置 glue 和其他核心层文本文件同样算 GameCore 保护范围。写玩法、模式、UI、输入、存档、团队、平台、Steam、训练模式、关卡玩法时，优先在 OrionGame 派生层或 `Plugins/GameFeatures/<FeatureName>` 插件中实现。

## 核心规则

1. 首先查 OrionGame 中是否已有对应派生类，例如 `AOrionGameMode`、`AOrionGameState`、`AOrionPlayerController`、`AOrionPlayerState`、`AOrionCharacter`、`UOrionExperienceDefinition`、`UOrionExperienceManagerComponent`、`UOrionGameSessionComponent`。
2. 如果是特定玩法模式，优先放到 `Plugins/GameFeatures/<FeatureName>`，并用 Experience、GameFeatureData、GameFeatureAction、GamePhase、AbilitySet、UIExtension 接入。
3. 如果只是为了蓝图暴露，优先在 BBL 里做薄桥接，不要把业务状态写进 BBL。
4. 如果需要框架级扩展，先尝试派生、DataAsset 配置、GameplayTag、GameFeatureAction 或项目层封装；只有用户明确允许才改 GameCore，包括 `Build.cs` 依赖调整。
5. 修改派生层时仍要尊重 GameCore 生命周期：Experience 未 Loaded 前不要启动玩家；PawnData 未到位前不要初始化输入/ASC；GameFeature 反激活必须撤销已加内容。

## 模块依赖

GameCore 是 Runtime 模块。公开依赖为 `Core`、`CoreUObject`、`Engine`；私有依赖覆盖这些系统：

- GameFeatures、ModularGameplay、ModularGameplayActors。
- CommonGame、CommonUser、CommonLoadingScreen、GameplayMessageRuntime；消息收发、tag channel 和委托取舍继续读取 `../orion-gameplay-message-router/SKILL.md`。
- GameplayAbilities、GameplayTasks、GameplayTags。
- InputCore、EnhancedInput、CommonInput、CommonInputSystem。
- GameSettings、EngineSettings、DeveloperSettings。
- UMG、CommonUI、UIExtension。
- CommonGameEffects。
- CoreOnline、NetCore、OnlineSubsystem、OnlineSubsystemUtils、Steam SDK/shared 相关模块。
- Hotfix。

因此新增业务模块通常依赖 OrionGame 或相关插件模块，不要把新依赖倒灌进 GameCore。排查打包或 include 错误时，也不要为了“依赖归位”擅自删除、移动 GameCore 或宿主模块中已经存在的依赖；需要变更时先得到用户明确允许。

## 主运行链路

### 启动与资产

`UCoreAssetManager::StartInitialLoading` 先执行 AssetManager 扫描，再初始化 `UCoreGameplayCueManager`，随后加载默认 `UCoreGameData`。`FCoreBundles::Equipped` 是 Experience 加载使用的核心 bundle 名。同步加载统一走 `UCoreAssetManager::GetAsset`、`GetSubclass` 或 `SynchronousLoadAsset`。

`UCoreAssetManager::Get()` 要求 `DefaultEngine.ini` 的 AssetManagerClassName 指向 `UCoreAssetManager` 派生类；配置错误会 fatal。

### Experience 加载

`ACoreGameMode::OnMatchAssignmentGiven` 接收 `FPrimaryAssetId` 后，把 Experience 设置到 GameState 上的 `UCoreExperienceManagerComponent`。

`UCoreExperienceManagerComponent::SetCurrentExperience` 通过 AssetManager 找到 `UCoreExperienceDefinition` CDO，赋给 replicated `CurrentExperience`，然后调用 `StartExperienceLoad`。客户端收到 `OnRep_CurrentExperience` 也会进入同一加载链。

`StartExperienceLoad` 加载当前 Experience 和 ActionSet 的 primary asset bundle，默认包含 `Equipped`，并按 NetMode 加上 client/server bundle。资产加载完成后，`OnExperienceLoadComplete` 收集 Experience 与 ActionSet 中的 GameFeature plugin 名，转成 plugin URL。

GameFeature 激活不是立即执行。Experience 会先等待 `CallOrRegister_OnPlayerInitialized`，之后调用 `LoadAndActivateGameFeaturePlugin`。全部插件完成后进入 `OnExperienceFullLoadCompleted`，依次对 Experience 和 ActionSet 里的 `UGameFeatureAction` 调用 `OnGameFeatureRegistering`、`OnGameFeatureLoading`、`OnGameFeatureActivating`。

最后 LoadState 变为 `Loaded`，并按顺序广播：

1. `OnExperienceLoaded_HighPriority`
2. `OnExperienceLoaded`
3. `OnExperienceLoaded_LowPriority`

需要在 Experience 完成后初始化的系统，应使用 `CallOrRegister_OnExperienceLoaded_*`，不要轮询 LoadState。

### 玩家启动与 PawnData

`ACoreGameMode::HandleStartingNewPlayer_Implementation` 会等 Experience Loaded 后才真正启动玩家。`OnExperienceLoaded` 会遍历已经连接但没有 Pawn 的 PlayerController 并 `RestartPlayer`。

`ACoreGameMode::GetPawnDataForController` 优先从 `ACorePlayerState::PawnData` 读取，其次用当前 Experience 的 `DefaultPawnData`，最后回退到 `UCoreAssetManager::DefaultPawnData`。`GetDefaultPawnClassForController` 从 PawnData 的 `PawnClass` 选择 Pawn 类。

`SpawnDefaultPawnAtTransform` 使用 deferred spawn，先找到 Pawn 上的 `UCorePawnExtensionComponent` 并 `SetPawnData`，再 `FinishSpawning`。因此 Pawn Blueprint 必须具备 PawnExtension。

`ACorePlayerState` 持有持久 ASC 和 replicated `PawnData`。服务器在 Experience Loaded 后通过 GameMode 查 PawnData，调用 `SetPawnData`，并把 PawnData 中的 `AbilitySets` 授予 `UCoreAbilitySystemComponent`。授予完成后发送 `NAME_CoreAbilityReady` extension event。

### Pawn 初始化状态

核心 init state 链是 `CoreGameplayTags::StateChain`：

1. `InitState.Spawned`
2. `InitState.DataAvailable`
3. `InitState.DataInitialized`
4. `InitState.GameplayReady`

`UCorePawnExtensionComponent` 的 FeatureName 是 `PawnExtension`，负责协调 PawnData、Controller 和其他组件。它只在 Pawn 上合法，且一个 Pawn 只能有一个。

`UCorePawnControlComponent` 的 FeatureName 是 `PawnControl`，依赖 PlayerState、Controller、InputComponent、LocalPlayer 和 PawnExtension 的 `DataInitialized`。进入 `DataInitialized` 时，它把 PlayerState 上的 ASC 通过 PawnExtension 绑定为当前 Pawn 的 Avatar，并初始化玩家输入。

`ACoreCharacter` 在 Possess、UnPossess、Controller/PlayerState replication、SetupPlayerInputComponent 和 PawnClientRestart 时推进 PawnExtension/PawnControl 初始化。

### ASC 与 Ability 输入

ASC 存在于 `ACorePlayerState`，Pawn 通过 `UCorePawnExtensionComponent::InitializeAbilitySystem` 成为 Avatar。切换 Pawn 时，旧 Avatar 会被 Uninitialize，取消不带 `Ability.Behavior.SurvivesDeath` 的 Ability，清空输入和 GameplayCue。

PlayerController / Pawn possession 清理时不要假设 `PlayerState` 一定有效。`OnUnPossess` 里访问 ASC 前应先检查当前 `PlayerState`，并且只在 ASC 当前 avatar actor 正好是将要 unpossess 的 Pawn 时才清空 avatar，避免重生、切 Pawn 或网络时序下清掉新的 avatar。

`UCorePawnControlComponent::InitializePlayerInput` 会：

- 清空 EnhancedInput LocalPlayer mapping。
- 添加组件自身 `DefaultInputMappings`。
- 读取 PawnData 的 `InputConfig`。
- 调用 `UInputSystemComponent::AddInputMappings` 和 `BindAbilityActions`。
- 发送 `NAME_BindInputsNow` 给 PlayerController 和 Pawn。

Ability 输入流：

1. Input action 绑定到 GameplayTag。
2. PawnControl 调用 `ASC->AbilityInputTagPressed/Started/Released`。
3. ASC 根据 ability spec 的 dynamic source tag 收集 pressed/started/held/released handles。
4. `ACorePlayerController::PostProcessInput` 每帧调用 `ASC->ProcessAbilityInput`。
5. ASC 根据 `ECoreAbilityActivationPolicy` 激活 Ability 或向已激活 Ability 发送 input pressed/released replicated event。

`UCoreGameplayAbility` 默认 `InstancedPerActor`、`LocalPredicted`、`ClientOrServer`，默认激活策略是 `OnInputTriggered`，默认 activation group 是 `Independent`。

### Activation Group

`ECoreAbilityActivationGroup` 包含：

- `Independent`：不互斥。
- `Exclusive_Replaceable`：可被新的 exclusive 替换。
- `Exclusive_Blocking`：阻止其他 exclusive。

`UCoreAbilitySystemComponent` 维护每组计数。Exclusive 能力激活时会取消 replaceable 组；如果 blocking 组有能力，其他 exclusive 不能激活。Ability 运行中可以通过 `ChangeActivationGroup` 切组，但 replaceable 能力必须可取消。

### GameFeature Action

GameCore 的 GameFeature Action 都基于激活/反激活对称原则：

- 激活时注册 extension handler 或输入/资源映射。
- 运行时用 `UGameFrameworkComponentManager` 监听目标 Actor 的 extension event。
- 反激活时用保存的 handle、ASC handle、UI extension handle 或 mapping 记录撤销。

`UGameFeatureAction_AddAbilities` 监听配置的 ActorClass。收到 `ExtensionAdded` 或 `ACorePlayerState::NAME_CoreAbilityReady` 后，只在 authority 上给 ASC 添加 Ability、AttributeSet 或 `UCoreAbilitySet`。反激活时移除 AttributeSet、标记 Ability 移除，并调用 `FCoreAbilitySet_GrantedHandles::TakeFromAbilitySystem`。

`UGameFeatureAction_AddInputBinding` 监听 `APawn`，在 `ExtensionAdded`、`UCorePawnControlComponent::NAME_BindInputsNow` 或 `ACoreCharacter::NAME_CoreCharacterInit` 后，将额外 `UInputSystemConfig` 交给 PawnControl 绑定。

`UGameFeatureAction_AddInputContextMapping` 在注册阶段把 MappingContext 注册到 EnhancedInput user settings，在激活阶段监听 `APlayerController` 并向本地 EnhancedInput subsystem 添加 MappingContext。

`UGameFeatureAction_AddWidgets` 监听 `ACoreHUD`，对本地 LocalPlayer push HUD layout，并通过 `UUIExtensionSubsystem` 注册 slot widget。反激活时 deactivate layout 并 unregister extension handle。

`UGameFeatureAction_AddGameplayCuePath` 配合 Core GameFeatures policy 的 observer，在插件注册/注销时更新 GameplayCue path。

### GamePhase

`UGamePhaseSubsystemBase` 是 `UCoreWorldSubsystem`，通过 ASC 启动 `UGamePhaseAbility`。`StartPhase` 激活指定 phase ability；`UGamePhaseAbility::ActivateAbility` 会通知 subsystem `OnStartPhase`，结束时通知 `OnEndPhase`。监听支持 exact 和 partial tag match。

玩法流程阶段应在 OrionGame 派生 subsystem 或 GameFeature 中实现，不要把具体 phase 写进 GameCore。

### Session

`UCoreExperienceUserFacingDefinition` 描述对用户可见的玩法入口：MapID、ExperienceID、ExtraArgs、默认标记、LoadingScreenWidget。`CreateHostingRequest` 会创建 `UCommonSession_HostSessionRequest`，并把 `ExtraArgs["Experience"]` 设置为 Experience primary asset name。

`UCoreSessionComponent` 是 GameStateComponent，提供 Blueprint 事件入口：CreateSession、JoinSession、QuickStart，以及可 C++/Blueprint 覆盖的 JoinInvitedSession、QuitSession。GameCore 默认实现 JoinInvitedSession/QuitSession 为空，具体行为应在 OrionGame 派生组件或 GameFeature 中实现。

## 类职责地图

| 类型 | 职责 |
| --- | --- |
| `UCoreAssetManager` | 默认 GameData、DefaultPawnData、GameplayCue 初始化、同步/异步资产加载、启动任务进度。 |
| `UCoreGameData` | 全局 game data primary asset。 |
| `UCoreGameInstance` | CommonGameInstance 派生，处理 requested session、用户初始化、网络加密 token/ack、client travel hook。 |
| `ACoreGameMode` | Experience assignment、等待 Experience loaded 后启动玩家、PawnData/PawnClass 选择、Dedicated Server online host。 |
| `ACoreGameState` | 持有 `UCoreExperienceManagerComponent` 和 GameState ASC，复制 ServerFPS 和 replay RecorderPlayerState。 |
| `UCoreExperienceManagerComponent` | Experience 加载状态机、GameFeature plugin 激活、Experience Action 执行、加载屏 reason、loaded delegate。 |
| `UCoreExperienceDefinition` | Experience 数据：GameFeaturesToEnable、DefaultPawnData、Actions、ActionSets。 |
| `UCoreExperienceActionSet` | 可复用的一组 GameFeature plugin 和 action。 |
| `UCoreExperienceUserFacingDefinition` | UI/会话入口，创建 HostSessionRequest。 |
| `ACorePlayerState` | 持久 ASC、PawnData、AbilitySet 授权、ReplicatedViewRotation。 |
| `ACorePlayerController` | PlayerState 变化、Ability input tick、force feedback、隐藏 view target pawn、客户端初始化状态。 |
| `ACoreCharacter` | Pawn ASC 查询、PawnControl 初始化推进、GameplayTag 初始化、销毁前 ASC 清理。 |
| `UCorePawnExtensionComponent` | PawnData replication、Pawn init state 协调、ASC avatar bind/unbind。 |
| `UCorePawnControlComponent` | PawnControl init state、EnhancedInput mapping、InputConfig 绑定、InputTag 转 ASC 输入。 |
| `UCorePawnData` | PawnClass、AbilitySets、TagRelationshipMapping、InputConfig。 |
| `UCoreAbilitySystemComponent` | ActivationGroup、输入队列、spawn activation、tag relationship、target data 查询。 |
| `UCoreGameplayAbility` | 默认 ability 策略、activation policy/group、失败消息、额外 cost、tag requirement 扩展。 |
| `UCoreAbilitySet` | 批量授予 Ability、GameplayEffect、AttributeSet，并记录可撤销 handle。 |
| `UCoreAbilityTagRelationshipMapping` | 按 AbilityTag 扩展 block/cancel/required/blocked tag。 |
| `UCoreGlobalAbilitySubsystem` | 给当前和未来注册 ASC 全局添加/移除 Ability 或 Effect。 |
| `FGameplayTagStackContainer` | FastArray replicated tag stack。 |
| `FCoreVerbMessage` | GameplayMessageRouter 的通用 verb message；新增消息 payload、监听和网络桥接规则继续读取 `../orion-gameplay-message-router/SKILL.md`。 |
| `UCoreAudioSettings` | ControlBusMix、ControlBus 和 HDR/LDR submix effect chain 设置。 |
| `UGameSettingInput` | EnhancedInput mappable key profile 的用户改键设置项。 |
| `UCoreWorldSubsystem` | 只在 game world 创建的 WorldSubsystem 基类。 |
| `UGamePhaseSubsystemBase` | 通过 GameplayAbility 驱动游戏阶段。 |
| `ACoreHUD` | GameFeature UI action 的 HUD extension target。 |

## 推荐扩展点

### 新增角色或 Pawn

优先派生 OrionGame 中已有 Character/Pawn。Pawn Blueprint 必须具备：

- `UCorePawnExtensionComponent` 或派生组件。
- `UCorePawnControlComponent` 或派生组件。
- 使用 `UInputSystemComponent` 或其派生作为 InputComponent，才能绑定 Ability input。
- 对应 `UCorePawnData` 派生 DataAsset，配置 PawnClass、AbilitySets、TagRelationshipMapping、InputConfig。

不要直接改 `UCorePawnExtensionComponent` 或 `UCorePawnControlComponent` 来处理某个角色特例。

### 新增 Gameplay Ability

优先派生 OrionGame 的 Ability 基类；若没有更具体基类，再派生 `UCoreGameplayAbility`。配置：

- `ActivationPolicy`：OnInputTriggered、OnInputStarted、WhileInputActive 或 OnSpawn。
- `ActivationGroup`：Independent / Exclusive_Replaceable / Exclusive_Blocking。
- Input 通过 AbilitySet 或 GameFeature Action 绑定到 InputTag，不要在 Ability 中硬编码按键。
- 需要额外 cost 时派生 `UCoreAbilityCost`，或在 OrionGame 层提供 cost 类型。

### 新增玩法模式

优先创建或更新 GameFeature 插件：

- Experience / ActionSet 配置 GameFeature plugin、DefaultPawnData、Actions。
- 玩法独有 Ability、Attribute、UI、Input、GamePhase 放插件内部。
- 运行时逻辑监听 `CallOrRegister_OnExperienceLoaded_*`。
- 需要阶段流转时使用 OrionGame 派生的 GamePhase subsystem 或 phase ability。

### 新增 UI

跨玩法 HUD layout 或 slot widget 使用 `UGameFeatureAction_AddWidgets`，由 GameFeature 激活时注册到 `ACoreHUD`。Widget 资产路径和命名遵守资产管理 Skill。不要把玩法 UI 写死在 GameCore HUD。

### 新增 Session 行为

不要改 `UCoreSessionComponent`。在 `UOrionGameSessionComponent` 或 GameFeature 中覆盖 JoinInvitedSession/QuitSession，CreateSession/JoinSession/QuickStart 可走 Blueprint 或项目层实现。

## API 速查

### Experience

- `UCoreExperienceManagerComponent::SetCurrentExperience(FPrimaryAssetId)`
- `CallOrRegister_OnExperienceLoaded_HighPriority`
- `CallOrRegister_OnExperienceLoaded`
- `CallOrRegister_OnExperienceLoaded_LowPriority`
- `GetCurrentExperienceChecked`
- `IsExperienceLoaded`
- `ShouldShowLoadingScreen`

### Pawn / Player

- `ACoreGameMode::GetPawnDataForController`
- `ACoreGameMode::RequestPlayerRestartNextFrame`
- `ACorePlayerState::SetPawnData`
- `UCorePawnExtensionComponent::SetPawnData`
- `UCorePawnExtensionComponent::InitializeAbilitySystem`
- `UCorePawnExtensionComponent::UninitializeAbilitySystem`
- `UCorePawnExtensionComponent::OnAbilitySystemInitialized_RegisterAndCall`
- `UCorePawnControlComponent::InitializePlayerInput`
- `UCorePawnControlComponent::AddAdditionalInputConfig`

### Ability

- `UCoreAbilitySystemComponent::AbilityInputTagPressed`
- `AbilityInputTagStarted`
- `AbilityInputTagReleased`
- `ProcessAbilityInput`
- `ClearAbilityInput`
- `CancelInputActivatedAbilities`
- `SetTagRelationshipMapping`
- `GetAdditionalActivationTagRequirements`
- `UCoreAbilitySet::GiveToAbilitySystem`
- `FCoreAbilitySet_GrantedHandles::TakeFromAbilitySystem`
- `UCoreGameplayAbility::TryActivateAbilityOnSpawn`
- `UCoreGameplayAbility::ChangeActivationGroup`

### GameFeature

- `UGameFeatureAction_WorldActionBase::AddToWorld`
- `UGameFeatureAction_AddAbilities`
- `UGameFeatureAction_AddInputBinding`
- `UGameFeatureAction_AddInputContextMapping`
- `UGameFeatureAction_AddWidgets`
- `UGameFeatureAction_AddGameplayCuePath`
- `UGameFeatureAction_SplitscreenConfig`

## 验证清单

写代码前：

1. 已确认不需要改 GameCore，或已得到用户明确允许。
2. 已找到 OrionGame 派生层或目标 GameFeature 插件。
3. 已确认是否需要 Experience Loaded、Player Initialized、Pawn DataInitialized 或 `NAME_BindInputsNow` 时机。
4. 已确认资产路径、AbilitySet、InputConfig、MappingContext、Widget、Experience 是否由 DataAsset/GameFeature 配置驱动。
5. 已查 Build.cs，确认新增依赖加在业务模块或插件 runtime module，而不是倒灌进 GameCore；没有擅自删除或移动 GameCore/宿主模块中已经存在的依赖。

验证时：

- Experience：检查 loaded delegate 是否按优先级触发，加载屏是否退出。
- Pawn：检查 PawnData 是否在 server 设置并复制，PawnExtension/PawnControl 是否到 GameplayReady。
- Ability：检查 ASC owner 是 PlayerState，avatar 是当前 Pawn，InputTag 是否进入 ASC 并在 PostProcessInput 激活。
- GameFeature：激活和反激活都跑一遍，确认 Ability/Input/UI 都撤销。
- Session：Create/Join/Quit 在 OrionGame 派生层验证，不以 GameCore 空默认实现为完成。

## 常见错误

### 直接改 GameCore 修业务需求

现象：为了某个玩法、UI 或输入特例修改 Core 类。

修复：改为 OrionGame 派生类、GameFeature Action、DataAsset、GameplayTag 或配置。只有用户明确允许时才改 GameCore。

### 擅自调整 GameCore 或宿主模块 Build.cs

现象：为了解决某个插件、GameFeature、Steam SDK 或打包依赖问题，直接增删 GameCore `Build.cs`，或把宿主模块中已有依赖删除、移动到玩法插件。

修复：保持用户已有依赖不动。需要某个 GameFeature Runtime 使用额外模块时，只在该 GameFeature Runtime `Build.cs` 增加自己的依赖；若确实要改 GameCore 或宿主模块 Build.cs，先说明原因并等待用户明确允许。

### Experience 未加载就访问 PawnData

现象：GameMode/Component 在 Experience Loaded 前取 PawnData 为空。

修复：用 `CallOrRegister_OnExperienceLoaded_*` 注册回调；需要玩家也完成初始化时，再等 `CallOrRegister_OnPlayerInitialized` 或相关 init state。

### Pawn 没有 PawnExtension / PawnControl

现象：ASC 不绑定、输入不生效、init state 卡住。

修复：Pawn 或 Character 派生蓝图必须包含对应组件；本地玩家还必须有正确 InputComponent 和 LocalPlayer。

### Ability 输入绑定了按键但没有触发 Ability

检查顺序：

1. PawnData 是否配置 `InputConfig`。
2. InputConfig 是否把 action 绑定到 Ability InputTag。
3. Ability 是否通过 AbilitySet/GameFeature 授予，并带相同 dynamic source tag。
4. PawnControl 是否执行 `InitializePlayerInput` 并发送 `NAME_BindInputsNow`。
5. ASC 是否存在 `Gameplay.AbilityInputBlocked`。

### GameFeature 反激活残留

现象：退出玩法后 Ability、MappingContext、Widget 仍存在。

修复：所有动态添加都必须记录 handle 或 active actor 数据，反激活时撤销。参考 AddAbilities、AddInputContextMapping、AddWidgets 的 ActiveData 模式。
