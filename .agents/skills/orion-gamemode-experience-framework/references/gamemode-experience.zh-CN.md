# GameMode 与 Experience 框架手册

## 核心原则

本框架的 GameMode 不再承载具体玩法业务。GameMode 的职责是选择本局要使用的 Experience，把 Experience 的 `PrimaryAssetId` 交给 GameState 上的 ExperienceManagerComponent，然后等待 Experience Loaded 后启动玩家。

每个关卡玩法都应通过 WorldSettings 设置默认 Experience。Experience 再组合 PawnData、ActionSet、GameFeature、组件、输入、UI、AbilitySet、GamePhase 或其他数据驱动行为。

业务落点优先级：

1. 只是一组配置组合：改 Experience、ActionSet、PawnData、AbilitySet、InputConfig 或既有 GameFeature Action。
2. 可随玩法启停：放入 `Plugins/GameFeatures/<FeatureName>` 的 runtime module 和 Content。
3. 宿主 Game 通用派生行为：放入宿主 Game 模块派生层。
4. 核心框架层只在用户明确允许时修改。

## 源码定位

先读项目封装层，再回到核心层：

- `Source/GameCore/Public/GameModes/CoreGameMode.h`
- `Source/GameCore/Private/GameModes/CoreGameMode.cpp`
- `Source/GameCore/Public/GameModes/CoreWorldSettings.h`
- `Source/GameCore/Private/GameModes/CoreWorldSettings.cpp`
- `Source/GameCore/Public/GameModes/CoreExperienceDefinition.h`
- `Source/GameCore/Public/GameModes/CoreExperienceActionSet.h`
- `Source/GameCore/Public/GameModes/CoreExperienceManagerComponent.h`
- `Source/GameCore/Private/GameModes/CoreExperienceManagerComponent.cpp`
- `Source/GameCore/Public/Character/CorePawnData.h`
- `Source/GameCore/Public/AbilitySystem/CoreAbilitySet.h`
- 宿主 Game 模块的 `GameModes`、`Player`、`Character`、`Input`、`Settings` 文件夹。
- `Config/DefaultGame.ini` 的 AssetManager primary asset scan。
- `Config/DefaultEngine.ini` 的 `WorldSettingsClassName`。

如果项目有额外薄桥接模块，检查其中是否定义了具体 ExperienceDefinition、ExperienceActionSet、GameMode 和 WorldSettings 派生类。AssetManager 扫描的 PrimaryAssetType 必须和具体 ExperienceDefinition 类一致。

## GameMode 选择 Experience

典型优先级以当前源码为准，常见顺序如下：

1. URL option：`?Experience=<PrimaryAssetName>`。
2. PIE / developer settings override。
3. 命令行参数：`Experience=<PrimaryAssetName>`。
4. 当前关卡 WorldSettings 的 `DefaultGameplayExperience`。
5. Dedicated server 或用户可见体验定义提供的 Experience。
6. 默认兜底 Experience。

GameMode 选出 Experience 后，不直接执行业务逻辑，而是调用核心 GameMode 的 match assignment 路径，把 `FPrimaryAssetId` 传给 ExperienceManagerComponent。

不要把“当前是训练模式/副本模式/竞技模式”的 if/else 写进 GameMode。用不同 Experience、ActionSet、PawnData 或 GameFeature 表达。

## WorldSettings 与关卡绑定

`ACoreWorldSettings` 持有 `DefaultGameplayExperience`，类型是指向 ExperienceDefinition 类的 soft class。关卡保存后，GameMode 会把它转成 `PrimaryAssetId`。

自动绑定关卡时要满足：

- 项目的 `WorldSettingsClassName` 指向核心 WorldSettings 派生类。
- 关卡已保存 WorldSettings 的 `DefaultGameplayExperience`。
- Experience 资产是 Blueprint class 或 native class，且能被 AssetManager 的 `PrimaryAssetTypesToScan` 扫描。
- 扫描目录包含 Experience 所在位置。
- PrimaryAssetType 与宿主具体 ExperienceDefinition 类一致。

如果 `GetDefaultGameplayExperience` 返回 invalid，优先检查 AssetManager scan rules，而不是改 GameMode。

## Experience 数据

`UCoreExperienceDefinition` 主要字段：

- `GameFeaturesToEnable`：Experience 需要激活的 GameFeature plugin 名称。
- `DefaultPawnData`：默认玩家 PawnData。
- `Actions`：Experience 内联执行的 GameFeatureAction。
- `ActionSets`：组合进来的可复用 ActionSet。

宿主 Game 派生 ExperienceDefinition 通常会增加：

- `PlayerAccountClass`：玩家账户/玩家数据对象类型。若校验要求非空，创建 Experience 后必须设置。

玩家账户类、玩家信息组件、玩家 GameplayComponent 和 GameFeature 玩家组件挂载规则读取 `../../orion-player-framework/SKILL.md`。

角色蓝图基类、PawnData 字段、PawnControl、HeroComponent、PlayerStart/Spawner 和角色生成规则读取 `../../orion-character-pawn-framework/SKILL.md`。

ExperienceActionSet 常用来复用 HUD、输入、组件、Ability、系统配置或 GameFeature 依赖。不要把所有 action 都复制进每个 Experience。

## Experience 加载链路

1. GameMode 调用 match assignment，把 ExperienceId 交给 GameState。
2. ExperienceManagerComponent 通过 AssetManager 加载 Experience CDO。
3. 加载 Experience 与 ActionSet 的 primary asset bundle。
4. 收集 Experience 和 ActionSet 的 `GameFeaturesToEnable`。
5. 等待玩家初始化完成。
6. 加载并激活 GameFeature plugins。
7. 执行 Experience 与 ActionSet 的 Actions。
8. LoadState 变为 Loaded。
9. 按 HighPriority、Normal、LowPriority 广播 ExperienceLoaded。

需要依赖 Experience 数据的系统使用 `CallOrRegister_OnExperienceLoaded*`。需要依赖本地玩家或输入准备好的逻辑，还要等待 Pawn/PawnControl 初始化或 `BindInputsNow`。

## PawnData 与玩家启动

GameMode 的 PawnData 选择通常是：

1. PlayerState 已有 PawnData。
2. 当前 Experience 的 `DefaultPawnData`。
3. AssetManager 中的默认 PawnData。

PlayerState 在 Experience Loaded 后设置 PawnData，并把 PawnData 中的 AbilitySets 授予 PlayerState 上的 ASC。Pawn spawned 时，PawnExtension 会把同一个 PawnData 设置到 Pawn，并将 ASC 的 avatar 切到当前 Pawn。

PawnData 的关键字段：

- `PawnClass`：生成的 Pawn 或 Character。
- `AbilitySets`：基础能力集合。
- `TagRelationshipMapping`：Ability tag 关系。
- `InputConfig`：输入配置。

## AbilitySet 与输入 Tag

输入触发 GA 必须同时满足三条链：

- GameplayTag 已存在，通常使用 `InputTag.Ability.<Name>`。
- InputConfig 的 `AbilityInputActions` 把 `IA_<Name>` 映射到同一个 InputTag。
- AbilitySet 的 GA 条目把目标 GA 映射到同一个 InputTag。

运行时链路：

1. PawnControl 从 PawnData 读取 InputConfig。
2. InputSystemComponent 绑定 AbilityInputActions。
3. 输入事件转成 ASC 的 `AbilityInputTagPressed/Started/Released`。
4. ASC 根据 AbilitySpec dynamic source tags 找到匹配 GA。
5. `ProcessAbilityInput` 按 GA ActivationPolicy 激活或转发输入事件。

如果新增玩法可以被授予、激活、等待输入或事件、结束或取消，优先做成 GA，再通过 AbilitySet/PawnData/Experience/GameFeature 接入。

## 自动创建 Experience

通过项目 MCP Toolset 自动化时，调用前必须先获取当前 tool schema。不要猜参数，也不要写死本机路径。

典型步骤：

1. 创建 Experience Blueprint。
   - 资产路径选择项目通用 Experience 目录或目标 GameFeature 插件 `Content/Experiences`。
   - ParentClassPath 必须是宿主具体 ExperienceDefinition 类，且与 AssetManager PrimaryAssetType 匹配。
2. 设置 `PlayerAccountClass`。
3. 设置 `DefaultPawnData`。
4. 添加 `GameFeaturesToEnable`。
5. 添加 ActionSet。
6. 按需要添加 Experience 内联 Actions。
7. 保存 Experience。
8. 设置目标关卡 WorldSettings 的 `DefaultGameplayExperience`，保存地图。
9. 重新读取/描述 Experience，确认字段正确。
10. PIE 或命令行进入关卡验证 Experience Loaded。

当前项目 Experience Toolset 应覆盖：

- `CreateExperienceBlueprintAsset`
- `CreateExperienceActionSetAsset`
- `SetExperienceProperty`
- `SetExperienceDefaultPawnData`
- `SetExperiencePlayerAccountClass`
- `SetWorldDefaultGameplayExperience`
- `CreatePawnBlueprintAsset`
- `CreatePawnDataAsset`
- `SetPawnDataPawnClass`
- `SetPawnDataInputConfig`
- `SetPawnDataTagRelationshipMapping`
- `SetPawnDataProperty`
- `AddGameFeatureDependency`
- `AddActionSetToExperience`
- `AddAction` / `RemoveAction` / `MoveAction` / `SetActionProperty`
- `AddComponentActionEntry`
- `AddAbilitiesActionEntry`
- `AddInputBindingActionEntry`
- `AddInputMappingActionEntry`
- `AddWidgetLayoutEntry`
- `AddWidgetEntry`
- `SaveExperienceAsset`

如果这些函数不可用，先确认 Toolset 插件是否编译和注册，再补 Toolset，不要绕过编辑器资产 API 手写二进制资产。

## 自动创建 Ability 输入闭环

典型步骤：

1. 用 GameplayTags Toolset 创建或确认 `InputTag.Ability.<Name>`。
2. 创建 `IA_<Name>`，设置 ValueType。
3. 创建或选择 `InputData_<FeatureOrPawn>`。
4. 把 IA 和 InputTag 加入 InputConfig 的 `AbilityInputActions`。
5. 创建或选择 `AbilitySet_<FeatureOrPawn>`。
6. 把 GA、AbilityLevel、同一个 InputTag 加入 AbilitySet。
7. 把 AbilitySet 加到 PawnData，或通过 Experience/GameFeature 的 Add Abilities action 授予。
8. 创建或选择 IMC，并把按键映射到 IA。
9. 通过 PawnControl 默认映射或 GameFeature Add Input Context Mapping 添加 IMC。
10. 通过 GameFeature Add Input Binding 添加额外 InputConfig。

当前项目 Experience Toolset 应覆盖：

- `CreateInputActionAsset`
- `CreateInputSystemConfigAsset`
- `AddAbilityInputActionToInputConfig`
- `AddNativeInputActionToInputConfig`
- `CreateAbilitySetAsset`
- `AddGameplayAbilityToAbilitySet`
- `AddAbilitySetToPawnData`

GameplayTag 的持久化使用独立 GameplayTags Toolset；Experience Toolset 在赋值时只接受已存在 tag，避免悄悄创建错误 tag。

## 常见验证

配置验证：

- `DefaultEngine.ini` 的 `WorldSettingsClassName` 指向正确 WorldSettings 派生类。
- `DefaultGame.ini` AssetManager scan 包含具体 ExperienceDefinition PrimaryAssetType 和 Experience 所在目录。
- GameFeature 插件的 Experience 目录也被对应 scan rules 覆盖，或通过 GameFeatureData primary asset rules 可被 cook。

资产验证：

- Experience data validation 通过。
- `PlayerAccountClass` 非空。
- `DefaultPawnData` 非空且 PawnData 的 PawnClass 有 PawnExtension/PawnControl。
- AbilitySet 中 GA 的 InputTag 与 InputConfig 的 AbilityInputActions 一致。
- IMC 已加入输入栈，若要改键，已注册到 user settings。

运行验证：

- 进入关卡后 ExperienceManagerComponent 到 Loaded。
- GameFeature plugins 激活成功。
- Experience/ActionSet actions 执行。
- PlayerState 获得 PawnData 和 AbilitySets。
- PawnExtension/PawnControl 到 GameplayReady。
- 输入触发目标 GA。

## 常见错误

### 在 GameMode 写玩法逻辑

症状：GameMode 中出现某个具体玩法的 if/else、组件创建、UI 创建或 Ability 授予。

修复：拆到 Experience、ActionSet、GameFeature Action、PawnData、AbilitySet 或宿主 Game 派生组件。

### WorldSettings 里选了 Experience 但运行时无效

优先检查：

- 关卡是否保存。
- WorldSettings 类是否正确。
- `DefaultGameplayExperience` 指向的是 Experience class，不是普通 object。
- AssetManager 是否能把该路径解析为 PrimaryAssetId。
- PrimaryAssetType 是否匹配当前 GameMode 使用的 ExperienceDefinitionType。

### Ability 输入不触发

按顺序检查：

1. GameplayTag 是否存在。
2. InputAction 是否在 IMC 中映射。
3. IMC 是否添加到 LocalPlayer subsystem。
4. InputConfig 是否是当前 PawnData 或 GameFeature Add Input Binding 注入的配置。
5. InputConfig 的 AbilityInputActions 是否使用同一 InputTag。
6. AbilitySet 是否授予到 ASC。
7. AbilitySet 的 GA 条目是否使用同一 InputTag。
8. GA ActivationPolicy 是否符合输入事件。

### Toolset 创建资产后运行时找不到

优先检查：

- 资产是否保存。
- 资产路径是否在 AssetManager scan 目录。
- Experience Blueprint 的 parent class 是否是具体 ExperienceDefinition 类型。
- ActionSet 如果是 native data asset，PrimaryAssetType 是否配置为非 Blueprint class。
- GameFeature 插件内容是否会被 cook/stage。
