# 角色、PawnData 与角色控制框架手册

## 核心模型

角色系统由 Experience、PawnData、PlayerState、Pawn、PawnExtension、PawnControl、HeroComponent、PlayerController 和出生管理共同组成。GameMode 只负责在 Experience Loaded 后启动玩家，并按 PawnData 选择 PawnClass；具体玩法不要写进 GameMode。

常见职责划分：

- Experience：指定本关卡玩法的 `DefaultPawnData`、ActionSet、GameFeature 和玩家账户类。
- PawnData：定义要生成的 PawnClass、基础 AbilitySets、Ability tag 关系和输入配置。
- PlayerState：持有持久 ASC，Experience Loaded 后复制 PawnData 并授予 PawnData 中的 AbilitySets。
- PawnExtension：把 PlayerState 上的 ASC 绑定到当前 Pawn avatar，并复制 PawnData。
- PawnControl：读取 PawnData 的 InputConfig，绑定 EnhancedInput/InputSystem，并把 InputTag 转发给 ASC。
- HeroComponent：本地玩家 Pawn 的额外初始化扩展点，适合摄像机、本地表现或 Pawn 侧玩家初始化。
- PlayerController：持有玩家信息组件，处理 ASC 输入后处理、设置监听、replay 和控制器级玩法组件。
- SpawningManager/Spawner：管理 PlayerStart 或玩法自定义角色槽位，默认通过 GameFeature 挂到 GameState。

## 源码定位

先读这些相对路径：

- `Source/GameCore/Public/Character`
- `Source/GameCore/Private/Character`
- 宿主 Game 模块 `Character` 文件夹。
- 宿主 Game 模块 `Player` 文件夹中的 PlayerController、HeroComponent、PlayerSpawningManagerComponent、PlayerStart。
- 宿主 Game 模块 `GameModes` 文件夹中的 GameMode、GameState、ExperienceDefinition。
- `Source/GameCore/Public/Player/CorePlayerState.h`
- `Source/GameCore/Private/Player/CorePlayerState.cpp`
- `Plugins/GameFeatures/<FeatureName>/Source/<FeatureRuntime>/Public/Character`
- `Plugins/GameFeatures/<FeatureName>/Source/<FeatureRuntime>/Private/Character`
- `Plugins/GameFeatures/<FeatureName>/Content/Character`
- `Content/GamePlay/Characters`

重点搜索：

- `UCorePawnData`
- `UCorePawnExtensionComponent`
- `UCorePawnControlComponent`
- `ACoreCharacter`
- `AOrionCharacter`
- `UOrionPawnControlComponent`
- `UOrionHeroComponent`
- `AOrionPlayerController`
- `UOrionPlayerSpawningManagerComponent`
- `UOrionCharacterSpawnerManager`
- `AOrionCharacterSpawner`

## 运行链路

典型玩家进入角色流程：

1. GameMode 选择当前 Experience。
2. ExperienceManagerComponent 加载 Experience、ActionSet 和 GameFeature。
3. PlayerState 在 Experience Loaded 后通过 GameMode 获取 PawnData。
4. PlayerState 设置 PawnData，授予 PawnData 的 AbilitySets，并广播 CoreAbilitiesReady。
5. GameMode RestartPlayer 时调用 `GetDefaultPawnClassForController`。
6. GameMode 从 PawnData 的 `PawnClass` 选择要生成的 Pawn。
7. GameMode deferred spawn Pawn，找到 Pawn 上的 `UCorePawnExtensionComponent`，先调用 `SetPawnData`，再 FinishSpawning。
8. PawnExtension 等待 PawnData、Controller 和其他 feature 到位。
9. PawnExtension 初始化 ASC owner/avatar，并把 PawnData 的 TagRelationshipMapping 设置到 ASC。
10. PawnControl 等待 PawnExtension DataInitialized 后初始化输入。
11. PawnControl 从 PawnData 的 InputConfig 添加输入映射，绑定 AbilityInputActions，并调用派生类的 native action binding。
12. PlayerController 每帧 `PostProcessInput` 调用 ASC `ProcessAbilityInput`。
13. 本地角色额外推进 HeroComponent 初始化。

排查角色未初始化时，按这个顺序看：Experience 是否 Loaded、PlayerState 是否有 PawnData、PawnData 是否有 PawnClass、Pawn 是否有 PawnExtension、PawnControl 是否在 Pawn 上、InputConfig 是否非空、ASC 是否完成 avatar 绑定。

## PawnData 配置

`UCorePawnData` 是 Pawn 的不可变配置资产，关键字段：

- `PawnClass`：GameMode 生成的 Pawn 或 Character 类。
- `AbilitySets`：基础能力集合，PlayerState 在 Experience Loaded 后授予。
- `TagRelationshipMapping`：ASC 初始化 avatar 时设置，用于能力 tag block/cancel/required/blocked 关系。
- `InputConfig`：PawnControl 读取，用于绑定 ability input 和 native input。

创建玩法角色时的最小闭环：

1. 创建角色蓝图。
2. 创建 PawnData。
3. PawnData 的 `PawnClass` 指向角色蓝图 class。
4. PawnData 的 `InputConfig` 指向输入配置资产。
5. PawnData 的 `AbilitySets` 加入基础能力集。
6. PawnData 的 `TagRelationshipMapping` 按需要指向能力 tag 关系资产。
7. Experience 的 `DefaultPawnData` 指向该 PawnData。
8. 关卡 WorldSettings 的 `DefaultGameplayExperience` 指向该 Experience。

## 角色蓝图基类

正式角色蓝图默认从这个蓝图资产派生：

`/Game/GamePlay/Characters/BP_CharacterBase.BP_CharacterBase`

使用规则：

- 新建玩家角色、AI 角色或玩法角色蓝图时，先确认是否应该从该蓝图派生。
- 不要绕过框架直接从空 `ACharacter` 新建正式角色蓝图。
- 如果玩法需要 C++ 类，先从 `AOrionCharacter` 派生 C++ 类，再让蓝图基于该 C++ 类或现有角色蓝图派生；不要改核心 `ACoreCharacter`。
- Pawn Blueprint 必须有且只有一个 PawnExtension；PawnControl 和 HeroComponent 必须挂在 Pawn/Character 上，不能挂到非 Pawn 蓝图。
- `BP_CharacterBase` 通常承载项目基础组件组合；如果角色输入或 ASC 不工作，先检查派生蓝图是否丢失这些组件。

## PawnControl 与输入

`UCorePawnControlComponent` 是输入绑定基类，FeatureName 是 `PawnControl`。它的关键行为：

- 只允许挂在 Pawn 上。
- 等待 PlayerState、Controller、InputComponent、LocalPlayer 和 PawnExtension。
- 初始化输入时清理 EnhancedInput mapping。
- 读取 PawnData 的 InputConfig。
- 添加默认 mapping context。
- 调用 `UInputSystemComponent::AddInputMappings`。
- 绑定 InputConfig 的 `AbilityInputActions`。
- 把 Pressed、Started、Released 转发给 ASC。
- 广播 `BindInputsNow` 给 PlayerController 和 Pawn。

`UOrionPawnControlComponent` 是宿主派生层，默认绑定：

- `InputTag_Move` -> `Input_Move`
- `InputTag_Look_Mouse` -> `Input_LookMouse`
- `InputTag_Look_Stick` -> `Input_LookStick`

写新角色控制：

1. 如果只是加跳跃、交互、冲刺等玩法行为，优先做 GA，用 AbilitySet + InputTag 接入。
2. 如果是所有同类 Pawn 的 native 移动/视角行为，继承宿主 PawnControl 派生类。
3. 如果是某个 GameFeature 玩法专属输入，优先用 GameFeature Add Input Context Mapping 和 Add Input Binding。
4. 不要在 PlayerController 里直接绑定角色移动输入，除非是非常明确的控制器级输入。

## HeroComponent

`UOrionHeroComponent` 是本地玩家 Pawn 初始化扩展点，FeatureName 是 `Hero`。它等待 PlayerState、Controller、InputComponent 和 PawnExtension 到位后，在本地控制器上调用 `InitLocalPlayer`。

适合放在 HeroComponent 或其派生类中的内容：

- 本地玩家 Pawn 的摄像机/视角初始化。
- 本地 Pawn 表现或 UI 桥接。
- 需要等 PawnExtension DataInitialized 的本地初始化。

不适合：

- 服务器权威玩法状态，放 PlayerGameplayComponent、GameStateComponent 或 GA。
- 持久玩家数据，放 PlayerAccount/Archive。
- 通用输入绑定，放 PawnControl/InputConfig。

## PlayerController 关系

`ACorePlayerController` 提供核心控制器生命周期：

- PlayerState 到达后刷新 ASC actor info。
- `PostProcessInput` 调用 ASC `ProcessAbilityInput`。
- 管理 force feedback、replay/spectating view rotation。
- 提供 `ClientOnPlayerInitialized` 和本地 GameState init 检查。

`AOrionPlayerController` 是宿主玩家控制器基类：

- 默认创建 `UOrionPlayerInfoComponent`。
- 监听 LocalPlayer shared settings。
- 控制是否自动录制 replay。

挂载规则：

- PlayerController 级玩法状态用 `UOrionPlayerGameplayComponent` 派生类，通过 GameFeature Add Components 挂到 PlayerController。
- 不要把 Pawn 输入、移动或 ASC avatar 绑定逻辑写到 PlayerController 组件里；这属于 PawnData/PawnControl/PawnExtension。
- 如果组件依赖玩家 ID 或账户，等待 PlayerInfoComponent 初始化。

## 出生管理与角色生成器

有两条不同的生成链：

### PlayerStart 链

`UOrionPlayerSpawningManagerComponent` 是 GameStateComponent，GameMode 的 `ChoosePlayerStart`、`ControllerCanRestart`、`FinishRestartPlayer` 会转发给它。

适用场景：

- 常规玩家出生点选择。
- 复活规则。
- 根据团队、队伍、房间或地图状态选择 PlayerStart。

接入方式：

1. 继承 `UOrionPlayerSpawningManagerComponent`。
2. 覆盖 `OnChoosePlayerStart`、`OnFinishRestartPlayer` 或蓝图事件。
3. 通过 GameFeature Add Components 挂到 GameState。
4. 地图中放置项目标准 `ABBL_PlayerStart`。它继承自 `AOrionPlayerStart`，不要用原生 `APlayerStart`。

### CharacterSpawner 链

`UOrionCharacterSpawnerManager` 是 GameStateComponent，管理场景中的 `AOrionCharacterSpawner`。Spawner 按 TeamID 和 SpawnerIndex 分组排序，`PlayerLogin` 会找到空闲 spawner 并调用 spawner 生成角色。

适用场景：

- 大厅槽位。
- 固定角色展示位。
- 非 GameMode 默认 RestartPlayer 的玩法生成流程。

接入方式：

1. 继承 `UOrionCharacterSpawnerManager`。
2. 继承或复用 `AOrionCharacterSpawner`。
3. 通过 GameFeature Add Components 把 manager 挂到 GameState。
4. 地图中放置 spawner actor，配置 TeamID、SpawnerIndex 和 InCharacterClass。
5. 在玩家玩法组件或 GameState 玩法组件中，在合适时机调用 manager 的玩家登录逻辑。

注意：CharacterSpawner 当前是玩法层扩展点，不替代常规 GameMode/PawnData 生成链。是否使用它取决于玩法是否需要地图固定槽位或展示位。

## GameFeature 挂载

组件挂载建议：

- PlayerController 玩法状态：挂 `UOrionPlayerGameplayComponent` 派生类。
- GameState 出生管理：挂 `UOrionPlayerSpawningManagerComponent` 或 `UOrionCharacterSpawnerManager` 派生类。
- Pawn 侧能力/输入：优先在角色蓝图组件、PawnData、AbilitySet、InputConfig 中配置；不要运行时随意 AddComponent。
- UI/输入/能力：通过 ActionSet 组合 Add Widgets、Add Input Mapping、Add Input Binding、Add Abilities。

GameFeature 反激活必须能撤销组件、输入、UI 和能力。手写 Spawn/Destroy 很容易漏清理，优先使用 GameFeature Action。

## MCP 自动化

调用 MCP 前先读取当前 toolset schema。不要猜参数。

当前项目 `OrionProjectToolsets.OrionExperienceToolset` 应覆盖角色/Pawn 相关操作：

- `CreatePawnBlueprintAsset`：创建 Pawn/Character 蓝图，可传入 `/Game/GamePlay/Characters/BP_CharacterBase.BP_CharacterBase` 作为父蓝图。
- `CreatePawnDataAsset`：创建 PawnData DataAsset。
- `SetPawnDataPawnClass`：设置 PawnData 的 `PawnClass`。
- `SetPawnDataInputConfig`：设置 PawnData 的 `InputConfig`。
- `SetPawnDataTagRelationshipMapping`：设置 PawnData 的 `TagRelationshipMapping`。
- `SetPawnDataProperty`：反射式设置 PawnData 其他字段。
- `AddAbilitySetToPawnData`：把 AbilitySet 加入 PawnData。
- `SetExperienceDefaultPawnData`：设置 Experience 的 `DefaultPawnData`。
- `SetWorldDefaultGameplayExperience`：设置关卡 WorldSettings 的 Experience。
- `AddComponentActionEntry`：给 Experience 或 ActionSet 添加 PlayerController/GameState 组件挂载。

示例顺序：

```json
{
  "toolset": "OrionProjectToolsets.OrionExperienceToolset",
  "function": "CreatePawnBlueprintAsset",
  "arguments": {
    "AssetPath": "/Game/GamePlay/Characters/Playable/BP_MyCharacter",
    "ParentClassOrBlueprintPath": "/Game/GamePlay/Characters/BP_CharacterBase.BP_CharacterBase",
    "bSave": true
  }
}
```

```json
{
  "toolset": "OrionProjectToolsets.OrionExperienceToolset",
  "function": "CreatePawnDataAsset",
  "arguments": {
    "AssetPath": "/Game/GamePlay/Characters/Playable/PawnData_MyCharacter",
    "AssetClassPath": "",
    "bSave": true
  }
}
```

```json
{
  "toolset": "OrionProjectToolsets.OrionExperienceToolset",
  "function": "SetPawnDataPawnClass",
  "arguments": {
    "PawnDataPath": "/Game/GamePlay/Characters/Playable/PawnData_MyCharacter.PawnData_MyCharacter",
    "PawnClassOrBlueprintPath": "/Game/GamePlay/Characters/Playable/BP_MyCharacter.BP_MyCharacter",
    "bSave": true
  }
}
```

真实调用时按 `describe_toolset` 返回的参数名为准。上面的路径是 UE object path 示例，不是本机路径。

## 验证清单

资产验证：

- 角色蓝图父类是 `BP_CharacterBase` 或合法的框架角色派生类。
- PawnData 的 `PawnClass` 指向最终角色蓝图 class。
- PawnData 的 `InputConfig` 非空。
- PawnData 的 `AbilitySets` 包含基础能力集。
- AbilitySet 中 GA 的 InputTag 与 InputConfig AbilityInputActions 完全一致。
- Experience 的 `DefaultPawnData` 指向该 PawnData。
- 关卡 WorldSettings 的 `DefaultGameplayExperience` 指向目标 Experience。
- 常规 PlayerStart 链的地图出生点使用 `ABBL_PlayerStart`，没有原生 `APlayerStart`。
- 如果使用 CharacterSpawner，GameState 上已通过 GameFeature 挂载对应 manager，地图 spawner 的 TeamID/Index 不重复。

运行验证：

- ExperienceManagerComponent 到 Loaded。
- PlayerState 拥有 PawnData 并授予 AbilitySets。
- Spawned Pawn 上有 PawnExtension，且 PawnExtension 到 DataInitialized。
- PawnControl 到 GameplayReady。
- 本地 Pawn 的 HeroComponent 到 DataInitialized 或 GameplayReady。
- 输入映射进入 EnhancedInput stack。
- 目标 GA 能被输入触发。
- PlayerController 玩法组件等待 PlayerInfo 初始化后再使用玩家 ID。

## 常见错误

### 角色蓝图不是基于框架基类

症状：PawnData 指向的 Pawn 能生成，但 ASC、输入、Hero 初始化或 PawnExtension 不工作。

修复：让正式角色蓝图从框架角色蓝图基类或 `AOrionCharacter` 派生，确认 PawnExtension、PawnControl、HeroComponent 组件存在。

### 只创建角色蓝图，没有配置 PawnData

症状：GameMode 仍生成旧角色或空 Pawn。

修复：设置 PawnData `PawnClass`，再把 Experience `DefaultPawnData` 指向该 PawnData。

### 输入完全不触发

排查顺序：

1. PawnData 是否有 InputConfig。
2. InputConfig 是否包含 AbilityInputActions 或 NativeInputActions。
3. InputTag 是否已注册。
4. AbilitySet 中 GA 是否使用同一个 InputTag。
5. IMC 是否被 PawnControl 默认映射或 GameFeature action 加入。
6. Pawn 的 InputComponent 是否是 `UInputSystemComponent` 或其派生类。

### 玩家组件过早访问玩家账户

症状：玩家 ID 为空、账户为空、服务端玩家数据偶发不可用。

修复：PlayerController 级组件继承玩家 gameplay component，等待 PlayerInfoComponent 初始化回调，再访问玩家账户和存档。

### 把出生规则写进 GameMode

症状：不同玩法的出生逻辑混在 GameMode 中，Experience 无法复用，GameFeature 反激活也无法撤销。

修复：常规 PlayerStart 规则继承 PlayerSpawningManagerComponent；固定槽位/展示位使用 CharacterSpawnerManager；通过 GameFeature Add Components 挂到 GameState。

### 地图仍使用原生 APlayerStart

症状：PIE 能进入地图，但项目出生管理组件只缓存 `AOrionPlayerStart` 派生点，导致自定义出生规则没有可选出生点，或者 WorldSettings 校验提示普通 PlayerStart。

修复：删除地图里的原生 `APlayerStart`，放置 `ABBL_PlayerStart`。通过 MCP 自动化时，先确认当前地图已打开，再用 Editor Toolset 删除原生 PlayerStart 并生成 `/Script/BBL.BBL_PlayerStart`。
