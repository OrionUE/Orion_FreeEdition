# OrionProjectToolsets 使用指南

## 当前定位

UE 5.8 官方 MCP 已提供大量通用工具，本项目 `OrionProjectToolsets` 不再是“补齐没有通用 MCP”的主力插件，而是项目语义补充插件。

默认优先级：

1. 官方 `toolset_registry.toolsets.core.asset.AssetTools`
2. 官方 `toolset_registry.toolsets.core.object.ObjectTools`
3. 官方 `toolset_registry.toolsets.core.blueprint.BlueprintTools`
4. 官方 `UMGToolSet.UMGToolSet`
5. 项目 `OrionProjectToolsets.OrionExperienceToolset` / `OrionProjectToolsets.OrionLocalizationToolset` / `OrionProjectToolsets.OrionMetaSoundToolset` / `OrionProjectToolsets.OrionUMGToolset`

## 5.8 调用方式

当前 MCP 默认 deferred loading。调用顺序：

```text
initialize
notifications/initialized
tools/list
tools/call name=call_tool arguments={ tool_name=list_toolsets }
tools/call name=call_tool arguments={ tool_name=describe_toolset, arguments={ toolset_name=... } }
tools/call name=call_tool arguments={ toolset_name=..., tool_name=..., arguments={...} }
```

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
			"tool_name": "DescribeExperienceAsset",
			"arguments": {
				"AssetPath": "/TPP/Experiences/BP_TPPGame_Experience.BP_TPPGame_Experience"
			}
		}
	}
}
```

不要使用旧版完整工具名直接调用：

```json
{
	"name": "OrionProjectToolsets.OrionExperienceToolset.DescribeExperienceAsset",
	"arguments": {
		"AssetPath": "/TPP/Experiences/BP_TPPGame_Experience.BP_TPPGame_Experience"
	}
}
```

当前实测初始 `tools/list` 包含 `call_tool`、`list_toolsets`、`describe_toolset`，但不包含 `load_toolset`。每次使用前仍以 live `tools/list` 和 `describe_toolset` 为准。

## 官方 5.8 已替代的能力

### 通用资产

使用 `toolset_registry.toolsets.core.asset.AssetTools`：

- `find_assets`
- `load_asset`
- `save_assets`
- `exists`
- `delete`
- `move`
- `duplicate`
- `get_dependencies`
- `get_referencers`
- `read_file`
- `write_file`

注意：`find_assets` 返回 package path，例如 `/Game/UI/Menu/W_FrontEnd`；传给 Blueprint/UObject 参数时通常转为 `/Game/UI/Menu/W_FrontEnd.W_FrontEnd`。

### 通用对象属性

使用 `toolset_registry.toolsets.core.object.ObjectTools`：

- `search_subclasses`
- `get_class`
- `list_properties`
- `get_properties`
- `set_properties`

`ObjectTools` 对 Blueprint 会取 GeneratedClass CDO，因此可替代很多只读/简单属性写入的项目自定义工具。

### 通用蓝图图表

使用 `toolset_registry.toolsets.core.blueprint.BlueprintTools`：

- 创建 Blueprint：`create`
- 编译：`compile_blueprint`
- 父类：`get_parent`、`set_parent`
- 图表：`list_graphs`、`get_graph`、`add_function_graph`、`remove_function_graph`
- 节点：`find_node_types`、`create_node`、`delete_node`、`get_node_info`、`get_graph_info`
- pin：`connect_pins`、`break_pins`、`set_pin_value`、`get_pin_value`
- 变量：`list_variables`、`add_variable`、`add_object_variable`、`add_struct_variable`、`remove_variable`
- 函数参数：`add_function_param`、`remove_function_param`

实测可读：

- `/Game/UI/Menu/W_FrontEnd.W_FrontEnd`
- `/TPP/Experiences/BP_TPPGame_Experience.BP_TPPGame_Experience`
- `/Game/GamePlay/Characters/BP_CharacterBase.BP_CharacterBase`

实测可写：

- 创建临时 `/Game/MCPValidation/BP_MCP58_NodeWriteProbe`
- 在 `EventGraph` 中用 `find_node_types` 找到 `Development|PrintString`
- 用 `create_node` 写入节点
- 编译、保存、删除临时资产和目录

因此，旧的 `OrionBlueprintGraphToolset` 不再保留；通用蓝图图表编辑必须使用官方 `BlueprintTools`。

## OrionProjectToolsets 仍然必要的能力

### OrionExperienceToolset

保留原因：官方工具能设置属性，但不理解本项目 Experience/PawnData/Input/AbilitySet/GameFeature Action 的业务结构。项目工具封装了：

- `CreateExperienceBlueprintAsset`
- `CreateExperienceActionSetAsset`
- `CreatePawnBlueprintAsset`
- `CreatePawnDataAsset`
- `CreateAbilitySetAsset`
- `CreateInputSystemConfigAsset`
- `CreateInputActionAsset`
- `CreateInputMappingContextAsset`
- `SetExperienceDefaultPawnData`
- `SetExperiencePlayerAccountClass`
- `AddGameFeatureDependency`
- `AddActionSetToExperience`
- `AddGameplayAbilityToAbilitySet`
- `ClearGameplayAbilitiesFromAbilitySet`
- `AddAbilityInputActionToInputConfig`
- `AddNativeInputActionToInputConfig`
- `AddKeyMappingToInputMappingContext`
- `AddComponentActionEntry`
- `AddAbilitiesActionEntry`
- `AddInputBindingActionEntry`
- `AddInputMappingActionEntry`
- `AddWidgetLayoutEntry`
- `AddWidgetEntry`
- `SetWorldDefaultGameplayExperience`

这些函数处理 GeneratedClass CDO、soft object path、数组结构和项目框架字段，直接用 `ObjectTools.set_properties` 手拼 JSON 风险更高。

### OrionLocalizationToolset

保留原因：官方工具能读写文件和点击 Slate，但不理解 Localization Dashboard 的 target/culture/config/commandlet 语义。项目工具封装了：

- `OpenLocalizationDashboard`
- `ListLocalizationTargets`
- `RunLocalizationOperation`

`RunLocalizationOperation` 支持 `GatherText`、`ImportText`、`ExportText`、`ImportDialogueScript`、`ExportDialogueScript`、`ImportDialogue`、`GenerateReports`、`CompileText`、`PreviewTranslations` 和 `GenerateConfigFiles`。详细源码依据和调用规则见 `../../orion-localization-framework/references/localization-source-and-mcp.zh-CN.md`。

### OrionUMGToolset

保留原因：官方 `UMGToolSet` 能操作 WidgetTree，但复杂主题样式、艺术字和项目 HUD 布局仍需要项目安全 helper。

已知用途：

- `AddArtTextTitle`
- `ApplyThemedHUDLayout`

### OrionMetaSoundToolset

保留原因：MetaSound 图不是 K2 Blueprint 图，官方 `BlueprintTools` 不能安全创建或连接 MetaSound 节点；当前 `ProgrammaticToolset` 也不能直接导入 `unreal` 调用 `UMetaSoundBuilderSubsystem`。项目工具封装了 Editor-only MetaSound Builder API：

- `DescribeAsset`
- `CreateSourceAsset`
- `CreatePatchAsset`
- `AddInterface`
- `AddGraphInput`
- `AddGraphOutput`
- `AddNodeByClassName`
- `SetNodeInputDefault`
- `ConnectNodes`
- `ConnectGraphInputToNode`
- `ConnectNodeToGraphOutput`
- `RemoveNode`

使用前继续读取 `../unreal-metasound/SKILL.md`。如果 live `list_toolsets` 中没有 `OrionProjectToolsets.OrionMetaSoundToolset`，说明当前 Editor 进程没有加载新插件代码；需要编译项目 MCP 插件并重启 Editor。

### 已删除的通用 Toolset

瘦身后的插件不再注册：

- `OrionProjectToolsets.OrionBlueprintGraphToolset`
- `OrionProjectToolsets.OrionObjectPropertyToolset`

替代规则：

- Graph/Node/Pin/Variable/Compile/Save：用官方 `BlueprintTools` + `AssetTools`。
- UObject/Blueprint CDO 属性读取和设置：用官方 `ObjectTools`。
- 旧迁移修复或坏节点清理需求：先评估官方 `BlueprintTools` 能否完成；确实需要项目语义时再新增小型专用函数，不恢复整套通用 Graph Toolset。

## 是否删除插件

当前结论：不要删除或迁出 UE 插件源码 `Plugins/MCP/OrionProjectToolsets`，但保持瘦身状态。`.agents/MCP` 只保存外部客户端连接模板，不是 Unreal 插件发现目录。

理由：

- 官方 5.8 已替代通用 Blueprint/Object/Asset 能力，因此旧的通用 Graph/Object Toolset 已删除。
- 官方 5.8 没有替代项目 Experience、PawnData、AbilitySet、InputConfig、GameFeature Action 的语义封装。
- 官方 5.8 没有提供 Localization Dashboard target/culture/config/commandlet 的 MCP 语义封装。
- 官方 5.8 没有提供 MetaSound Builder 的 MCP 语义工具，不能用 BlueprintTools 代替。
- 删除整个插件会破坏现有 Experience/GameFeature/Localization/UMG 自动化 Skill 和验证流程。
- 后续新增项目 MCP 函数必须保持“小型、语义化、官方工具无法安全表达”的边界。

## 使用建议

### 创建普通 Actor Blueprint 并写节点

优先官方：

1. `load_toolset toolset_registry.toolsets.core.asset.AssetTools`
2. `load_toolset toolset_registry.toolsets.core.blueprint.BlueprintTools`
3. `BlueprintTools.create`
4. `BlueprintTools.list_graphs`
5. `BlueprintTools.find_node_types`
6. `BlueprintTools.create_node`
7. `BlueprintTools.connect_pins`
8. `BlueprintTools.compile_blueprint`
9. `AssetTools.save_assets`

### 创建 Experience 输入能力链

优先项目：

1. `GameplayTagsToolset.GameplayTagsToolset` 确认或创建 InputTag。
2. `OrionProjectToolsets.OrionExperienceToolset.CreateInputActionAsset`
3. `CreateInputSystemConfigAsset`
4. `AddAbilityInputActionToInputConfig`
5. `CreateAbilitySetAsset`
6. `ClearGameplayAbilitiesFromAbilitySet`
7. `AddGameplayAbilityToAbilitySet`
8. `AddAbilitySetToPawnData`
9. `CreateInputMappingContextAsset`
10. `AddKeyMappingToInputMappingContext`
11. `AddInputMappingActionEntry`
12. 官方 `AssetTools.save_assets` 或项目保存函数保存。

### 修改 WidgetTree

优先官方：

1. `UMGToolSet.UMGToolSet.GetWidgets`
2. `UMGToolSet.UMGToolSet.AddWidget`
3. `UMGToolSet.UMGToolSet.BindToEventProperty`
4. `UMGToolSet.UMGToolSet.CompileWidgetBlueprint`
5. `AssetTools.save_assets`

项目主题/艺术字再用 `OrionProjectToolsets.OrionUMGToolset`。

### 创建 MetaSound Source 并添加 ProjectAcoustics 接口

优先项目：

1. `call_tool` 调 `OrionProjectToolsets.OrionMetaSoundToolset.CreateSourceAsset`。
2. 参数示例：`PackagePath=/Game/Audio/MetaSounds/MCP`，`AssetName=MS_Test`，`OutputFormat=Mono`，`bAddProjectAcousticsInterface=true`。
3. `call_tool` 调 `DescribeAsset` 验证 `Interfaces` 中包含 `ProjectAcoustics`。
4. 需要节点时用 `AddNodeByClassName`，传 `Namespace`、`Name`、`Variant`。
5. 需要连线时用 `ConnectGraphInputToNode`、`ConnectNodes` 或 `ConnectNodeToGraphOutput`。

## 常见问题

### package path 不能直接传给 BlueprintTools

现象：

```text
Parameter error: None is not valid value for property 'blueprint'.
```

原因：`find_assets` 返回 `/Game/Path/Asset`，而 `BlueprintTools` 需要 `/Game/Path/Asset.Asset`。

修复：追加 object name，或先用 `AssetTools.load_asset`。

### create 参数名不是 name/parent_class

官方 `BlueprintTools.create` schema 是：

```text
folder_path
asset_name
asset_type
```

`asset_type` 实际会写入 `BlueprintFactory.parent_class`，例如 `/Script/Engine.Actor`。不要传旧工具里的 `name` 或 `parent_class`。

### list_toolsets 不是 JSON

`list_toolsets` 返回 Markdown/text。用正则提取 toolset 名即可；不要直接 `ConvertFrom-Json`。

### load_toolset 是多段 SSE

`tools/call` 响应可能是多条 `data:`。PowerShell 中要逐条解析，取最后一个 JSON 对象；不要把所有 `data:` 拼接后一次 `ConvertFrom-Json`。
