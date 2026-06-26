# UI MCP 编辑与 Toolset 扩展

## 已验证工具链

UE 5.8 MCP 使用 deferred loading。初始工具：

- `list_toolsets`
- `describe_toolset`
- `load_toolset`

实际参数：

```json
{
  "name": "load_toolset",
  "arguments": {
    "toolset_name": "UMGToolSet.UMGToolSet"
  }
}
```

注意：当前实测参数名是 `toolset_name`。不要写成 `toolsetName`。

已验证可加载：

- `toolset_registry.toolsets.core.asset.AssetTools`
- `toolset_registry.toolsets.core.object.ObjectTools`
- `toolset_registry.toolsets.core.blueprint.BlueprintTools`
- `UMGToolSet.UMGToolSet`
- `OrionProjectToolsets.OrionUMGToolset`

## 官方工具优先级

1. 资产查找、保存、删除、依赖：`AssetTools`
2. Blueprint parent、graph、node、compile、CDO：`BlueprintTools`
3. UObject / Blueprint CDO 属性：`ObjectTools`
4. WidgetTree 查询和基础编辑：`UMGToolSet`
5. 项目语义 UMG helper：`OrionProjectToolsets.OrionUMGToolset`

不要恢复旧的泛用 `OrionBlueprintGraphToolset` 或 `OrionObjectPropertyToolset`。官方 UE 5.8 已覆盖通用 graph/object/asset 能力。

## 读取资产顺序

对 Widget Blueprint：

1. `BlueprintTools.get_parent`
2. `BlueprintTools.list_graphs`
3. `UMGToolSet.GetWidgets`
4. 需要节点细节时，对单个 graph 调 `BlueprintTools.get_graph_info`
5. 需要默认变量时，先 `BlueprintTools.get_default_object`，再 `ObjectTools.list_properties/get_properties`

对 DataAsset / DataTable：

1. `ObjectTools.get_class`
2. `ObjectTools.list_properties`
3. `ObjectTools.get_properties`
4. DataTable row 内容如果官方工具无法列出，优先在 Editor/MCP 中补窄口径 DataTable 读取工具，不要依赖离线字符串作为最终事实。

对 root layout：

1. `UMGToolSet.GetWidgets` 确认 stack 控件名、类型、变量标志。
2. `BlueprintTools.get_graph_info` 确认 `OnInitialized -> RegisterLayer` 链。
3. `ObjectTools.list_properties` 确认需要设置的反射属性名。

## 批量回读限制

一次性对大量 Widget Blueprint 调 `get_graph_info` 成本很高，可能让 MCP 请求超时。推荐：

- 目录级研究先用 `AssetTools.find_assets` 或文件系统枚举得到清单。
- 第一轮只取 parent、class、WidgetTree summary。
- 第二轮只对代表资产或即将修改的资产做 graph deep read。
- 每批 3 到 5 个 Widget Blueprint；大型 graph 单独读取。
- 失败后记录失败方法和可跑通的新方法到相关 Skill 文档。

## 编辑资产流程

1. 确认目标资产可编辑：`AssetTools.can_edit_asset`。
2. 回读 parent、WidgetTree、Graph、属性 schema。
3. 使用官方工具做最小编辑：
   - WidgetTree：`UMGToolSet.AddWidget/MoveWidget/RenameWidget/SetWidgetAsVariable`
   - Graph：`BlueprintTools.find_node_types/create_node/connect_pins/set_pin_value`
   - 默认属性：`ObjectTools.set_properties`
4. 编译：
   - Widget：`UMGToolSet.CompileWidgetBlueprint`
   - 普通 Blueprint：`BlueprintTools.compile_blueprint`
5. 保存：`AssetTools.save_assets`
6. 重新读取确认变更落盘。

## 现有项目 UMG Toolset

`OrionProjectToolsets.OrionUMGToolset` 当前暴露：

- `AddArtTextTitle`
- `ApplyThemedHUDLayout`
- `RepairWidgetVariableGuidMap`

使用边界：

- 主题化艺术字、HUD 布局和 Widget variable GUID 修复用项目 Toolset。
- 普通 widget 添加、移动、改名、编译用官方 `UMGToolSet`。
- 普通 CDO 属性用官方 `ObjectTools`。

## 何时新增 Toolset

只有这些场景才新增项目 Toolset：

- 官方工具需要手拼复杂 ImportText，且容易破坏项目语义。
- 需要一次性维护多个相关属性、数组或软引用，人工调用容易漏项。
- 需要封装框架概念，例如 layer 注册、VisualData 映射、Tab descriptor、ListView factory rule、CommonInput row handle。

建议新增窄口径函数：

- `DescribeUIBlueprintAsset`
- `ConfigurePrimaryGameLayoutLayers`
- `ConfigureUIPolicy`
- `ConfigureCommonInputData`
- `ConfigureGameUIInputActionDomainTable`
- `ConfigureActivatableWidgetDefaults`
- `ConfigureButtonBaseDefaults`
- `ConfigureTabListDescriptors`
- `ConfigureListViewFactoryRules`
- `ConfigureGameSettingVisualData`
- `ConfigureInteractionKeyBrush`

每个函数必须：

- 放在 Editor-only MCP 插件中。
- 使用 `static UFUNCTION(meta=(AICallable))`。
- 输入路径使用 `/Game/...` package/object path。
- 内部加载、Modify、事务、编译、可选保存。
- 返回结构化成功/失败、修改项和验证摘要。

## 文本 UML / 图表规则

本 Skill 不依赖网络图床、外部白板、截图或外部链接。文档图表统一采用 Markdown 内嵌文本图：

1. 首选 `mermaid` fenced code block，覆盖 flowchart、classDiagram、sequenceDiagram、stateDiagram 等常用架构表达。
2. Mermaid 图必须是 canonical source；任何外部导出图都只能作为附加材料，不能替代文本图源。
3. PlantUML 仅作为备选：当 Mermaid 难以表达复杂 UML 时，可以添加 `plantuml` fenced code block，但要注明渲染依赖，并保留可读文字说明。
4. 图表必须可被 Codex 直接读取和维护；不要只贴图片、截图或外部链接。
5. 修改 UI 架构、Layer、Settings、Online、Interaction 或 Toolset 路由时，同步更新对应 Mermaid 图。

## 验证清单

- `initialize -> notifications/initialized -> tools/list` 成功。
- `load_toolset` 使用 `toolset_name`。
- 修改前有 `GetWidgets/list_graphs/list_properties` 证据。
- 不凭空创建节点；先 `find_node_types`。
- 不猜 pin；先 `get_node_info/get_graph_info`。
- `CompileWidgetBlueprint` 后还要 `AssetTools.save_assets`。
- 保存后重新读取，确认 parent、WidgetTree、Graph 或属性值已改变。
