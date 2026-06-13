# 常用领域入口

这些不是固定 API 清单，而是开始查源码时的入口提示。最终结论仍以当前机器源码为准。

## UI

- UMG：从 `UUserWidget`、Widget Blueprint、`NativeConstruct`、`BindWidget` 查起。
- Slate：从 `SWidget`、`SCompoundWidget`、`SLATE_BEGIN_ARGS`、对应 Editor 模块样例查起。
- MVVM：先查插件或引擎中 ViewModel、FieldNotify、Binding 的真实声明。
- CommonInput/CommonUI 输入模式、输入设备状态、按键图标：优先使用 `../../unreal-commoninput/SKILL.md`。

## Gameplay

- GAS：使用 `../../unreal-gameplayabilities/SKILL.md`，从 AbilitySystemComponent、GameplayAbility、GameplayEffect、AttributeSet、AbilityTasks、Prediction、TargetData、GameplayCue 查起。
- 角色输入移动：从 Pawn/Character/Controller、MovementComponent、EnhancedInput 绑定链查起；使用 `../../unreal-enhancedinput/SKILL.md`，不要默认使用 CommonInput。
- InputCore/legacy input：使用 `../../unreal-inputcore/SKILL.md`，从 `FKey`、`EKeys`、`FKeyDetails`、`FInputKeyManager`、platform key conversion、`UPlayerInput`、`UInputComponent` 和 input component stack 查起。
- EnhancedInput：使用 `../../unreal-enhancedinput/SKILL.md`，从 MappingContext、InputAction、LocalPlayerSubsystem、trigger、modifier、binding 和项目输入封装查起。
- GameplayTags：从 tag 定义、NativeGameplayTags、tag query 和模块依赖查起。
- GameFeatures：使用 `../../unreal-gamefeatures/SKILL.md`，从 GameFeatureData、Feature Action、plugin state machine、project policy、observer、Experience/加载链路查起。

## Editor

- Editor 工具：先确认代码是否在 Editor 模块。
- AssetTools：查 AssetTypeActions、Factory、ContentBrowser 扩展样例。
- Details Panel：查 `IDetailCustomization`、`IPropertyTypeCustomization`。
- Commands：查 `TCommands`、`FUICommandList`、菜单/工具栏扩展样例。

## Online 与平台

- OnlineSubsystem：先查接口版本、异步委托和模块依赖。
- Steam/EOS/平台插件：先查当前插件的封装层，不要直接跳到底层 SDK。

## Multiplayer / Networking

- 普通 Actor/Component 复制、RPC、FastArray、push model、GAS 网络语义、NetDriver 或 MessageRouter 跨端桥接：使用 `../../unreal-network-replication-framework/SKILL.md`，先查 `bReplicates`、`GetLifetimeReplicatedProps`、OnRep、RPC ownership、relevancy、NetCullDistance、NetUpdateFrequency、owner、dormancy 和 active NetDriver。
- ReplicationGraph：使用 `../../unreal-replicationgraph/SKILL.md`，从 active NetDriver、`ReplicationDriverClassName`、`UReplicationGraph` 子类、graph nodes、connection nodes、actor lists、dormancy、owner-only、tear-off、grid spatialization 和 RepGraph debug commands 查起。
- 大量 replicated actors 或多人性能问题：先确认是否是 RepGraph、Iris、默认 NetDriver 复制路径或项目封装层，不要只改单个 Actor。

## 渲染、动画、物理

- 渲染和 RHI：先查线程要求和模块边界。
- Animation：先查 AnimInstance、AnimNode、AnimGraph、Editor/Runtime 分离。
- Physics/Chaos：先查组件、BodyInstance、场景查询和线程限制。
