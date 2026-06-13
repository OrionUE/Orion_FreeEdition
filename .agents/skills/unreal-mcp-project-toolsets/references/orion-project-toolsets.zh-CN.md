# OrionProjectToolsets 使用指南

## 适用范围

当需要通过项目内 UE MCP 操作 Blueprint 图表或 Experience/GameFeature 数据资产时读取本参考。

本参考不绑定 Codex，其他支持 MCP 的客户端也可以按同样 endpoint 和 JSON-RPC 流程使用。

## Toolset 名称

- `OrionProjectToolsets.OrionBlueprintGraphToolset`
- `OrionProjectToolsets.OrionUMGToolset`
- `OrionProjectToolsets.OrionExperienceToolset`
- `OrionProjectToolsets.OrionObjectPropertyToolset`
- `GameFeaturesToolset.GameFeaturesToolset`
- `EditorToolset.EditorAppToolset`
- `UMGToolSet.UMGToolSet`

调用前先通过 `list_toolsets` 确认目标 toolset 已注册，再通过 `describe_toolset` 读取当前 schema。不要猜参数。

## JSON-RPC 调用入口

当前 MCP 版本可能只在 `tools/list` 暴露三个顶层工具：

- `list_toolsets`
- `describe_toolset`
- `call_tool`

这种情况下，`describe_toolset` 返回的完整函数名只用于识别所属 Toolset 和真实函数名，不一定能直接作为 `tools/call.params.name` 调用。

稳定调用方式：

1. `tools/call` 的顶层 `name` 固定传 `call_tool`。
2. `arguments.toolset_name` 传完整 Toolset 名，例如 `OrionProjectToolsets.OrionExperienceToolset`。
3. `arguments.tool_name` 传不带 Toolset 前缀的函数名，例如 `CreateInputActionAsset`。
4. `arguments.arguments` 传函数 schema 要求的参数对象。

示例：

```json
{
  "jsonrpc": "2.0",
  "id": 10,
  "method": "tools/call",
  "params": {
    "name": "call_tool",
    "arguments": {
      "toolset_name": "OrionProjectToolsets.OrionExperienceToolset",
      "tool_name": "CreateInputActionAsset",
      "arguments": {
        "assetPath": "/Plugin/Player/Input/IA_Demo",
        "valueType": "Boolean",
        "bSave": true
      }
    }
  }
}
```

`describe_toolset` 的参数名是 `toolset_name`。如果误传 `toolset`，当前版本会返回缺少必填参数。

用 PowerShell 封装 MCP JSON-RPC 时，不要把函数参数命名为 `$Args`。`$Args` 是 PowerShell 自动变量，容易让 `call_tool.arguments.arguments` 变成空对象。推荐使用 `$ArgObject`、`$ToolArgs` 这类普通变量名，并在发出请求前打印或断言参数对象。

## BlueprintGraph 工具能力

`OrionBlueprintGraphToolset` 用于通用 Blueprint 图表查看和编辑，主要能力包括：

- `DescribeBlueprint`: 读取 parent class、generated class、编译状态、graph、node、pin、变量、函数和可覆写函数。
- 图表：`CreateGraph`、`DeleteGraph`、`RenameGraph`、`AddFunctionGraph`、`AddFunctionPin`、`AddFunctionOverrideGraph`。
- 节点：`SpawnNodeByClass`、`AddCallFunctionNode`、`AddCustomEventNode`、`AddEventOverrideNode`、`AddVariableNode`、`AddBranchNode`、`AddSequenceNode`、`AddCastNode`、`AddConstructObjectNode`、`AddCreateWidgetNode`、`AddDelegateNode`、`AddRerouteNode`、`AddCommentNode`、`MoveNode`、`RemoveNode`。
- 连线：`ConnectPins`、`DisconnectPin`、`SetPinDefaultValue`。
- 变量：`AddMemberVariable`、`RemoveMemberVariable`、`RenameMemberVariable`、`SetMemberVariableDefault`、`SetMemberVariableMetadata`、`SetMemberVariableFlags`。
- 属性：`SetBlueprintDefaultProperty`、`SetNodeProperty`。
- 保存验证：`CompileBlueprint`、`SaveAsset`、`ValidateBlueprint`。

Pin 定位使用 `nodeGuid + pinName + direction + pinIndex`，其中 `direction` 使用 `Input` 或 `Output`。

基础 pin type 示例：

```json
{
  "category": "int",
  "subCategory": "",
  "subCategoryObjectPath": "",
  "bIsArray": false,
  "bIsSet": false,
  "bIsMap": false,
  "valueCategory": "",
  "valueSubCategory": "",
  "valueSubCategoryObjectPath": "",
  "bIsReference": false,
  "bIsConst": false
}
```

## UMG 工具能力

正式 GameUI/CommonUI/Widget Blueprint 工作先读取 `../../unreal-umg/SKILL.md`。官方 `UMGToolSet.UMGToolSet` 负责创建 Widget Blueprint、读取和编辑 WidgetTree、编译；本项目 `OrionBlueprintGraphToolset` 负责 Blueprint 类默认变量、成员变量、编译、保存和验证；`OrionUMGToolset` 只承载已封装的安全 UMG 属性化辅助编辑。

`OrionUMGToolset` 用于补齐官方 `UMGToolSet` 只能编辑 Widget Tree、但缺少项目安全属性设置函数的问题。

已验证函数：

- `AddArtTextTitle`: 给指定 Widget Blueprint 添加多层 TextBlock 艺术字标题，设置文本、字号、颜色、描边、阴影、旋转和 slot 布局，并编译保存。
- `ApplyThemedHUDLayout`: 用属性化参数批量重建主题 HUD 布局，适合给 `UGameHUDLayout` 派生 WBP 生成 Canvas 根、面板、标题和正文文本；重复调用会删除旧命名容器后重建，便于迭代主题。

调用前先用 `UMGToolSet.UMGToolSet.GetWidgets` 读取 Widget Tree。`parentWidgetName` 为空时使用 root widget；如果 root 不是 `UPanelWidget`，需要传入可添加子控件的 panel 名称。

同名 `containerWidgetName` 会先删除旧容器再重建，适合重复调试标题样式。

Widget Blueprint 自动化推荐组合：

1. `UMGToolSet.UMGToolSet.ListWidgetClasses` 确认父类或子控件类。
2. `UMGToolSet.UMGToolSet.CreateWidgetBlueprint` 创建 WBP，父类优先使用 GameUI C++ 基类。
3. `UMGToolSet.UMGToolSet.GetWidgets` 检查继承 widget、BindWidget 占位和当前树。
4. `UMGToolSet.UMGToolSet.AddWidget` / `SetNamedSlotContent` / `ToggleWidgetAsVariable` 编辑树。
5. `OrionBlueprintGraphToolset.SetBlueprintDefaultProperty` 设置 Widget Blueprint CDO 上的父类 `UPROPERTY` 默认值。
6. `UMGToolSet.UMGToolSet.CompileWidgetBlueprint` 或 `OrionBlueprintGraphToolset.CompileBlueprint` 编译。
7. `OrionBlueprintGraphToolset.SaveAsset` 保存。
8. 重新 `GetWidgets` 或 `DescribeBlueprint` 验证持久化。

不要用 `SetBlueprintDefaultProperty` 代替 WidgetTree 子控件实例属性编辑；修改 TextBlock、Slot、Brush、Padding、Anchors 等实例属性前，必须确认当前 MCP 暴露了 ObjectTools 或已有专用项目 Toolset。

## Experience 工具能力

`OrionExperienceToolset` 用于创建与编辑 `UCoreExperienceDefinition`、`UCoreExperienceActionSet`、Pawn/Character Blueprint、通用 Blueprint、PawnData、AbilitySet、InputSystemConfig、InputAction、InputMappingContext，并把 Experience 指定到关卡 WorldSettings。

支持原生 DataAsset，也支持继承自这些类型的 Blueprint 资产。Blueprint 资产的关键点：

1. 传入 Blueprint asset path，例如 `/TPP/Experiences/BP_TPPGame_Experience.BP_TPPGame_Experience`。
2. 工具内部加载 Blueprint。
3. 编辑 `GeneratedClass->GetDefaultObject()` 上的 `GameFeaturesToEnable`、`ActionSets` 和 `Actions`。
4. 保存时保存 Blueprint 资产，而不是尝试保存 transient CDO。

主要能力：

- 创建资产：`CreateExperienceBlueprintAsset`、`CreateExperienceActionSetAsset`、`CreatePawnBlueprintAsset`、`CreateBlueprintAsset`、`ReparentBlueprintAsset`、`CreatePawnDataAsset`、`CreateAbilitySetAsset`、`CreateInputSystemConfigAsset`、`CreateInputActionAsset`、`CreateInputMappingContextAsset`。
- `DescribeExperienceAsset`: 读取依赖、ActionSet、Actions 和 action 关键字段摘要。
- `SetExperienceProperty`: 通过反射设置 Experience 或 ActionSet 上的字段，适合补充工具未单独封装的变量。
- `SetExperienceDefaultPawnData`: 设置 Experience 的 `DefaultPawnData`。
- `SetExperiencePlayerAccountClass`: 设置宿主 Experience 派生类上的 `PlayerAccountClass`。
- `SetWorldDefaultGameplayExperience`: 加载地图并设置 WorldSettings 的 `DefaultGameplayExperience`。
- `SetPawnDataProperty`: 通过反射设置 PawnData 字段。
- `SetPawnDataPawnClass`: 设置 PawnData 的 `PawnClass`，可传 native class、generated class 或 Blueprint asset path。
- `SetPawnDataInputConfig`: 设置 PawnData 的 `InputConfig`。
- `SetPawnDataTagRelationshipMapping`: 设置 PawnData 的 `TagRelationshipMapping`。
- `AddGameFeatureDependency`、`RemoveGameFeatureDependency`。
- `AddActionSetToExperience`、`RemoveActionSetFromExperience`。
- `AddAbilitySetToPawnData`: 把 AbilitySet 加入 PawnData。
- `AddGameplayAbilityToAbilitySet`: 把 GA class、AbilityLevel 和 InputTag 加入 AbilitySet。
- `ClearGameplayAbilitiesFromAbilitySet`: 清空 `UCoreAbilitySet.GrantedGameplayAbilities`，保留 GE 和 AttributeSet，用于替换一组输入能力时避免重复授予。
- `AddAbilityInputActionToInputConfig`: 把 InputAction 与 InputTag 加入 `AbilityInputActions`。
- `AddNativeInputActionToInputConfig`: 把 InputAction 与 InputTag 加入 `NativeInputActions`。
- `AddKeyMappingToInputMappingContext`: 把 InputAction 与按键名写入 `UInputMappingContext::MapKey`。
- `AddAction`、`RemoveAction`、`MoveAction`、`SetActionProperty`。
- `AddComponentActionEntry`: 写入 `UGameFeatureAction_AddComponents.ComponentList`。
- `AddAbilitiesActionEntry`: 写入 `UGameFeatureAction_AddAbilities.AbilitiesList`。
- `AddInputBindingActionEntry`: 写入 `UGameFeatureAction_AddInputBinding.InputConfigs`。
- `AddInputMappingActionEntry`: 写入 `UGameFeatureAction_AddInputContextMapping.InputMappings`。
- `AddWidgetLayoutEntry`、`AddWidgetEntry`: 通过反射写入 `UGameFeatureAction_AddWidgets` 的布局和 widget 数组。
- `SaveExperienceAsset`。

通用 Blueprint 资产创建规则：

1. `CreateBlueprintAsset` 的 `parentClassOrBlueprintPath` 可传 native class path、generated class path 或 Blueprint asset path。
2. 创建 Actor、ActorComponent、UserWidget、DataAsset 子类前，先确认父类可蓝图化。
3. `ReparentBlueprintAsset` 可把已存在 Blueprint 改到新的父类；改父类后必须重新 `DescribeBlueprint` 确认 parent class 和 compile status。
4. 对已有实例或默认值有依赖的蓝图，重设父类前先记录原父类、SCS 节点和关键默认值，避免父类不兼容导致组件丢失。

Experience 玩法创建流程：

1. 用 `CreateExperienceBlueprintAsset` 创建 Experience Blueprint，parent class 必须是宿主具体 ExperienceDefinition 类型。
2. 用 `SetExperiencePlayerAccountClass`、`SetExperienceDefaultPawnData` 和 `AddGameFeatureDependency` 补齐基础字段。
3. 用 `CreateExperienceActionSetAsset` 或现有 ActionSet 组合输入、UI、组件、能力等 actions。
4. 用 `AddActionSetToExperience` 或 `AddAction` 系列函数挂入 Experience。
5. 用 `SetWorldDefaultGameplayExperience` 把目标关卡 WorldSettings 指向 Experience class，并保存地图。
6. 重新 `DescribeExperienceAsset`，确认字段、ActionSet 和 Actions 持久化。

角色与 PawnData 创建流程：

1. 先读取 `../../unreal-character-pawn-framework/SKILL.md` 和 `../../unreal-asset-management/SKILL.md`，确认角色基类、目录和命名。
2. 用 `CreatePawnBlueprintAsset` 创建角色蓝图；正式角色默认以框架角色蓝图基类作为 parent。
3. 用 `CreatePawnDataAsset` 创建 PawnData。
4. 用 `SetPawnDataPawnClass` 指向角色蓝图。
5. 用 `SetPawnDataInputConfig` 设置输入配置。
6. 用 `SetPawnDataTagRelationshipMapping` 设置能力 tag 关系，若该玩法需要。
7. 用 `AddAbilitySetToPawnData` 添加基础能力集。
8. 用 `SetExperienceDefaultPawnData` 把 PawnData 接到 Experience。
9. 保存并重新读取资产，确认 PawnData、Experience 和关卡 WorldSettings 都持久化。

Ability 输入闭环创建流程：

1. 先用 GameplayTags Toolset 创建或确认目标 `InputTag.Ability.*`。Experience Toolset 只使用已存在 tag，不负责静默创建 tag。
2. 用 `CreateInputActionAsset` 创建 `IA_*`，`ValueType` 使用 `Boolean`、`Axis1D`、`Axis2D` 或 `Axis3D`。
3. 用 `CreateInputSystemConfigAsset` 创建或选择 InputConfig。
4. 用 `AddAbilityInputActionToInputConfig` 把 `IA_*` 和 InputTag 加入 `AbilityInputActions`。
5. 用 `CreateAbilitySetAsset` 创建或选择 AbilitySet。
6. 如果 GA 是玩法 C++ 基类，先用 `CreateBlueprintAsset` 创建 GA Blueprint 子类，再把 Blueprint generated class 写入 AbilitySet；除非该能力明确不需要任何蓝图默认值扩展点。
7. 替换一组输入能力时先用 `ClearGameplayAbilitiesFromAbilitySet` 清空旧 `GrantedGameplayAbilities`，再用 `AddGameplayAbilityToAbilitySet` 写入 GA Blueprint class、等级和同一个 InputTag，避免反复运行工具造成重复条目。
8. 用 `AddAbilitySetToPawnData` 或 `AddAbilitiesActionEntry` 让 PawnData/Experience/GameFeature 授予该 AbilitySet。
9. 用 `CreateInputMappingContextAsset` 创建或选择 IMC。
10. 用 `AddKeyMappingToInputMappingContext` 写入 `KeyName -> InputAction`，例如 `LeftMouseButton -> IA_Attack`、`E -> IA_Collect`。
11. 用 `AddInputMappingActionEntry` 把 IMC 加入 GameFeature/Experience 的 Add Input Context Mapping action，并按需要注册到 user settings。
12. 保存并重新读取 IMC、InputConfig、AbilitySet、ActionSet，确认四条链都持久化。

## Object Property Toolset 能力

`OrionObjectPropertyToolset` 用于在 MCP 中读取普通 UObject、DataAsset、Blueprint CDO 或 Widget Blueprint 的反射属性，补齐专用 Experience/Blueprint 描述工具覆盖不到的资产验证场景。

已验证函数：

- `DescribeLoadedAssetProperties`: 加载资产并列出属性名、类型和值摘要。`bInspectBlueprintCDO=true` 时会读取 Blueprint GeneratedClass 的 CDO，而不是 Blueprint asset 自身。
- `GetObjectPropertyValue`: 读取单个属性的导出文本值，适合验证 AbilitySet、InputConfig、IMC、Widget CDO 默认值是否写入。

使用建议：

1. DataAsset 或普通 UObject 直接传对象路径，例如 `/Plugin/Path/DA_Item.DA_Item`。
2. Blueprint 默认值验证传 Blueprint asset path，并设置 `bInspectBlueprintCDO=true`。
3. 读取数组、结构体或 soft object 属性时以 UE 导出文本为准；必要时再补专用 Toolset 做结构化解析。
4. 资产写入后用本工具做只读复核，避免只依赖保存日志判断成功。

## GameFeature Toolset 能力

`GameFeaturesToolset.GameFeaturesToolset` 用于查询、加载、激活 GameFeature 插件，以及创建根 `UGameFeatureData`。

已验证函数：

- `CreateGameFeatureDataAsset`: 按插件名创建或返回根 GameFeatureData，默认路径为 `/<PluginName>/<PluginName>.<PluginName>`，例如 `/OrionGameTemplate/OrionGameTemplate.OrionGameTemplate`。
- `AddPrimaryAssetTypeToGameFeatureDataAsset`: 向根 GameFeatureData 写入 `PrimaryAssetTypesToScan`，支持指定 PrimaryAssetType、BaseClass、目录、是否扫描蓝图类和 CookRule。

根 GameFeatureData 创建流程：

1. 先确认 `.uplugin` 存在、`CanContainContent=true`、插件内容根已挂载。
2. 调用 `CreateGameFeatureDataAsset`，`pluginName` 传插件名，不要手写 `/Content` 路径。
3. 返回已有资产时也视为成功。
4. 用 `AddPrimaryAssetTypeToGameFeatureDataAsset` 补 Experience、ActionSet、UserFacingDefinition、LevelMeta、Map 等扫描条目；目录传插件虚拟路径，例如 `/FeatureName/Experiences`。
5. 创建并保存根 GameFeatureData 后再激活插件，避免 `GameFeaturePlugin.StateMachine.Registering.Plugin_Missing_GameFeatureData`。

## Editor Toolset 能力

`EditorToolset.EditorAppToolset` 用于编辑器级别的关卡和世界操作。

已验证函数：

- `CreateLevelAsset`: 创建空白 Level；目标已存在时返回现有 object path。
- `SaveCurrentLevelAs`: 把当前编辑器 World 另存为指定 Level package。
- `SpawnActorInLevel`: 在当前编辑器 World 里生成 Actor，可传 native class、generated class 或 Blueprint asset path。
- `SpawnActorInLevelAtTransform`: 使用 primitive location/rotation/scale 参数在当前编辑器 World 里生成 Actor，用于规避部分 MCP JSON 到 `FTransform` 转换失败的问题。
- `CountActorsInLevelByClass`: 统计当前编辑器 World 中某类 Actor 数量，支持 exact 或包含子类，用于验证地图里是否已经持久摆放目标 Actor。
- `DeleteActorsInLevelByClass`: 从当前编辑器 World 删除指定类或其子类的 Actor，适合可逆验证清理。
- `ReplaceActorsInLevelByClass`: 把当前编辑器 World 中的某类 Actor 替换成另一类 Actor，保留 Transform 和 editor label。
- `SetWorldSettingsExperience`: 反射设置当前 WorldSettings 的 `DefaultGameplayExperience` 并保存。
- `SetWorldSettingsGameMode`: 反射设置当前 WorldSettings 的 `DefaultGameMode` 并保存。
- `StartPIE`: 支持 `NetMode`、`NumberOfClients`、`bRunUnderOneProcess` 等多人 PIE 选项。

推荐组合：

1. `CreateLevelAsset` 创建新地图。
2. 打开或确认当前编辑器 World 是目标地图。
3. 资源点、怪物营地、工作台、信标等环境美术或场景业务 Actor 应作为蓝图类实例持久摆放在地图里；优先用 `SpawnActorInLevelAtTransform` 创建初始布局，再让设计师在编辑器里移动和调参。
4. 只做工具验证的临时物体，验证后用 `DeleteActorsInLevelByClass` 删除并再次保存；正式 Demo 场景内容不要依赖 BeginPlay 自动生成。
5. 用 `CountActorsInLevelByClass` 复核地图中资源、敌人、工作台、PlayerStart 等数量，并记录 exact/native class 检查结果。
6. `SetWorldSettingsExperience` 指向 Experience Blueprint class。
7. 如果项目全局 GameMode 带有与当前玩法无关的默认 PlayerController、Pawn 或 Blueprint 逻辑，用 `SetWorldSettingsGameMode` 指向玩法插件内的最小 GameMode。该 GameMode 应保留宿主 ExperienceDefinition 类型，但使用当前玩法可控的 PlayerController/PawnData 链路。
8. 新 GameFeature 地图必须放置项目标准出生点：用 `ReplaceActorsInLevelByClass` 把原生 `/Script/Engine.PlayerStart` 精确替换成 `/Script/BBL.BBL_PlayerStart`，保留 Transform 和 label。
9. 保存后重新读取 WorldSettings 或用 Experience Toolset 的地图绑定函数交叉验证。

PlayerStart 替换注意：

1. `DeleteActorsInLevelByClass` 当前按 `IsChildOf` 删除，会删除目标类及其子类。
2. 只有确认地图里还没有 `ABBL_PlayerStart` 时，才用它删除 `/Script/Engine.PlayerStart`。
3. 地图已放好 `ABBL_PlayerStart` 后，不要再用 `/Script/Engine.PlayerStart` 作为删除参数；否则会把 `ABBL_PlayerStart` 一起删掉。
4. 替换原生 PlayerStart 时优先用 `ReplaceActorsInLevelByClass`，并保持 `bExactSourceClassOnly=true`。

多人 PIE 验证建议：

1. 先跑单人 `StartPIE`，确认地图、GameMode、Experience、PawnData、HUD 和输入链路可加载。
2. 再用 `StartPIE` 指定 `NetMode=ListenServer`、`NumberOfClients=2`、`bRunUnderOneProcess=true` 做基础复制冒烟验证。
3. `StartPIE` 返回后立刻用 `IsPIERunning` 交叉确认；停止时调用 `StopPIE`，再确认 `IsPIERunning=false`。
4. 如果 `StopPIE` 阶段崩溃，优先读堆栈中第一个项目类。PIE teardown 中对象可能已被标记 unreachable，玩家 logout 组件如果没有 Blueprint 退出逻辑，不要无条件触发 `K2_OnPlayerLogout` 这类 Blueprint event。

玩家组件挂载流程：

1. 玩家账户类不通过 Add Components 挂载；用 `SetExperiencePlayerAccountClass` 写入 Experience 的 `PlayerAccountClass`。
2. 玩家玩法状态组件继承项目玩家 GameplayComponent 基类时，用 `AddComponentActionEntry` 写入 Experience 或 ActionSet 的 Add Components action。
3. 玩家玩法状态组件的 `ActorClassPath` 使用当前 PlayerController 派生类或其稳定基类，`ComponentClassPath` 使用玩法 runtime module 中的组件类。
4. 玩家出生管理组件继承项目玩家 SpawningManager 基类时，用 `AddComponentActionEntry` 挂到当前 GameState 派生类或其稳定基类。
5. 出生管理组件通常只需要 server 端启用；玩家玩法状态组件是否 client/server 都启用，由是否需要客户端 UI/loading gate 和服务器权威逻辑决定。
6. 详细挂载 recipe 读取 `../../unreal-player-framework/SKILL.md`。

## 可逆真实资产验证

用户要求直接验证真实资产时，优先采用可逆流程，不留下测试变量、测试函数或测试 action。

Blueprint 最小验证：

1. `DescribeBlueprint` 目标 Blueprint，记录当前变量和函数。
2. `AddMemberVariable` 添加唯一临时变量，例如 `MCP_Validation_TempCounter_YYYYMMDD`。
3. `AddFunctionGraph` 添加唯一临时函数。
4. 在临时函数内创建一个简单节点，例如 `AddBranchNode`。
5. `CompileBlueprint`。
6. `SaveAsset`。
7. `DeleteGraph` 删除临时函数。
8. `RemoveMemberVariable` 删除临时变量。
9. 再次 `CompileBlueprint` 和 `SaveAsset`。
10. 再次 `DescribeBlueprint`，确认临时变量和临时函数不存在。

Experience 最小验证：

1. `DescribeExperienceAsset`，记录 `actions` 数量。
2. `AddAction` 添加临时 `UGameFeatureAction_AddComponents`。
3. 重新 `DescribeExperienceAsset`，取最后一个 action index。
4. 对该临时 action 调用 `AddComponentActionEntry`，使用项目中已存在的 Actor class 和 Component class。
5. 保存并重新读取，确认 action summary 中出现新增 entry。
6. `RemoveAction` 删除临时 action。
7. 保存并重新读取，确认 action 数量恢复。

注意：即使最终逻辑内容无残留，保存真实资产仍可能改变二进制包的时间戳或序列化结果。最终回复必须说明哪些真实资产被保存过。

## 常见问题

- Experience Blueprint 读取失败并提示不是 `UCoreExperienceDefinition` 或 `UCoreExperienceActionSet`：通常是工具只看了 Blueprint asset object，没有解析 GeneratedClass CDO。修复方式是在工具内部支持 Blueprint asset、Class object 和 CDO 三种入口。
- MCP 端口监听但 HTTP 请求卡住：优先检查是否有编辑器模态窗口，或是否用隐藏窗口启动了编辑器。
- 编译成功不等于保存成功：Blueprint 和 Experience 修改后都要单独调用保存函数，并重新读取确认。
- `SaveExperienceAsset` 只适用于 `UCoreExperienceDefinition`、`UCoreExperienceActionSet` 或继承自这些类型的 Blueprint。保存 InputAction、InputConfig、AbilitySet、InputMappingContext 或普通 Blueprint 时，使用 `OrionBlueprintGraphToolset.SaveAsset`；如果误用 `SaveExperienceAsset`，会返回“not a UCoreExperienceDefinition, UCoreExperienceActionSet, or Blueprint generated from one”。
- 需要创建大量 UObject 属性时，不要猜属性名；先使用 `describe_toolset` 或反射读取 schema，再写入。
- 需要验证普通 DataAsset、Blueprint CDO 或任意 UObject 属性时，优先使用 `OrionObjectPropertyToolset.DescribeLoadedAssetProperties` 或 `GetObjectPropertyValue`，不要只靠专用描述工具或日志推断。
- 写 `TSoftObjectPtr` 时必须使用对象路径，例如 `/Plugin/Path/Asset.Asset`。只传 `/Plugin/Path/Asset` 会被 UE 序列化成 `Package`，加载时可能出现 `Serialized Class /Script/CoreUObject.Package ... Reference will be nulled`，导致 AbilitySet/InputConfig 等引用被清空。项目 Toolset 中对象引用 helper 应统一规范化 package path。
- `EditorToolset.StartPIE` 在项目全局 Blueprint 编译失败时可能不返回，后续 MCP 请求也会超时。先读 `Saved/Logs/<Project>.log`，搜索 `Blueprint failed to compile`、`LogBlueprint: Error`、`PlayLevel`，确认是否是非目标插件或旧资产阻断。若资产已经保存，优先关闭可见 Editor 或重启 Editor 后继续 MCP 验证，不要把该超时误判为目标 GameFeature 编译失败。
- 地图直接沿用项目默认 GameMode 时，可能会把非当前玩法的 PlayerController 或默认 Pawn 蓝图也带进 PIE。若日志出现旧玩法 Actor 的 `Accessed None`，先确认 `WorldSettings.DefaultGameMode`，再为当前 GameFeature 设置专属最小 GameMode。
- 新建 GameFeature 地图后默认可能带原生 `APlayerStart`。项目出生链只缓存 `AOrionPlayerStart` 派生点，标准做法是放置 `/Script/BBL.BBL_PlayerStart`；不要让原生 `APlayerStart` 留在正式 Demo 地图里。
- `SpawnActorInLevel` 的 `FTransform` 参数在部分 MCP JSON-RPC 调用中可能出现 “could not convert incoming function input params Json to a UStruct”。遇到该错误时改用 `SpawnActorInLevelAtTransform` 的 primitive 参数版本。
- 可见 Editor 用于 MCP 验证时会加载插件 DLL；随后重编同一插件可能在链接阶段报 `LNK1104` 无法打开 `UnrealEditor-<Module>.dll`。确认资产已保存后关闭 Editor，再重新运行同一构建命令。
- PowerShell 包装 MCP 时，`Mcp-Session-Id` header 可能是 `System.String[]`。保存 session id 时只取第一个 header 字符串，避免后续请求带入数组文本。
- 打包 Cook 阶段报 `Plugin '<ToolsetName>' failed to load because module '<ModuleName>' could not be loaded`：Cook 使用 Editor commandlet，会加载 `Type=Editor` 的模块。MCP Toolsets 只服务可见编辑器和自动化工具调用，普通工具模块和测试模块都应使用 `Type=EditorNoCommandlet`，避免打包 Cook 尝试加载这些编辑器工具 DLL。

## 构建与验证

构建命令不要写死本机路径：

```powershell
$EngineRoot = $env:UE_ENGINE_ROOT
if (-not $EngineRoot) { throw "Set UE_ENGINE_ROOT to the Unreal Engine root." }
$Project = (Get-ChildItem -Path (Get-Location) -Filter *.uproject | Select-Object -First 1).FullName
$EditorTarget = "<PROJECT_EDITOR_TARGET>"
& (Join-Path $EngineRoot "Engine\Build\BatchFiles\Build.bat") $EditorTarget Win64 Development -Project="$Project" -WaitMutex -NoHotReloadFromIDE
```

Game target 验证用于确认 Editor-only 插件没有进入 Game 构建。target 名从 `Source/*.Target.cs` 读取，不要写死到 Skill。

空白和行尾验证：

```powershell
git diff --check
```
