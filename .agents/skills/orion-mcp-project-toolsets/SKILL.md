---
name: orion-mcp-project-toolsets
description: "Use when UE 5.8 official MCP is connected and Codex needs the slimmed project-specific OrionProjectToolsets beyond official AssetTools/ObjectTools/BlueprintTools: Experience and ActionSet editing, PawnData, AbilitySet, InputAction/InputConfig/IMC automation, GameFeature Action entries, themed UMG helpers, MetaSound asset/node automation, Localization Dashboard and localization commandlet automation, and deciding whether project MCP helpers should be kept or replaced."
---

# Unreal MCP Project Toolsets

本 Skill 只记录项目特定 MCP Toolset。通用蓝图图表、对象属性、资产保存/删除优先使用 UE 5.8 官方 `BlueprintTools`、`ObjectTools`、`AssetTools`；瘦身后的项目插件不再暴露旧的通用 Graph/Object Toolset。

先读取详细说明：

`references/orion-project-toolsets.zh-CN.md`

## 核心规则

- 先使用 `../orion-mcp-workflow/SKILL.md` 建立 UE 5.8 MCP session。
- 当前 live MCP 暴露顶层 `call_tool` 聚合入口；用 `tools/call` 调 `call_tool`，传 `toolset_name`、`tool_name`、`arguments`。不要假设存在 `load_toolset`。
- 通用 Blueprint 创建、读图、写节点、连 pin、编译、保存：优先官方 `toolset_registry.toolsets.core.blueprint.BlueprintTools` + `toolset_registry.toolsets.core.asset.AssetTools`。
- 通用 Blueprint CDO/UObject 属性读写：优先官方 `toolset_registry.toolsets.core.object.ObjectTools`。
- `OrionProjectToolsets` 保留给项目语义：Experience、ActionSet、PawnData、AbilitySet、InputConfig、GameFeature Action、主题 UMG helper、MetaSound Builder 自动化和本地化 Dashboard/commandlet 自动化。
- 每次调用前用 `describe_toolset` 确认 schema；旧文档里的参数名可能已经不适用。

## 项目 Toolset

- `OrionProjectToolsets.OrionExperienceToolset`
- `OrionProjectToolsets.OrionLocalizationToolset`
- `OrionProjectToolsets.OrionMetaSoundToolset`
- `OrionProjectToolsets.OrionUMGToolset`

## 何时使用

- Experience/ActionSet/PawnData/AbilitySet/InputConfig/InputAction/IMC 的结构化创建和连接。
- 向 Experience 或 ActionSet 写入 `UGameFeatureAction_AddComponents`、Add Abilities、Add Input Binding、Add Input Context Mapping、Add Widgets。
- 需要项目框架 helper 规范化 soft object path、GeneratedClass CDO、AbilitySet 输入 tag 或 GameFeature Action 数组。
- 官方 UMG/Blueprint/ObjectTools 能力太原子，直接拼属性字符串风险高时，使用项目安全封装。
- 创建、描述或编辑 MetaSound Source/Patch、MetaSound 图输入输出、接口、节点和连接时，使用 `OrionMetaSoundToolset`；不要用 `BlueprintTools` 操作 MetaSound 图。
- 需要通过 MCP 打开 Localization Dashboard、列本地化 target，或运行 Gather/Export/Import/Dialogue/Reports/Compile/Preview 本地化操作。

## 何时不用

- 只是查找资产、保存资产、删除临时资产：用官方 `AssetTools`。
- 只是读取或设置普通 UObject/Blueprint CDO 属性：用官方 `ObjectTools`。
- 只是创建普通 Actor Blueprint、添加合法 K2 节点、连接 pin、编译：用官方 `BlueprintTools`。
- 只是读取 WidgetTree 或添加普通 widget：先用官方 `UMGToolSet.UMGToolSet`。
- 只是普通 SoundWave/SoundCue 资产管理：用官方 `AssetTools` 和音频框架 Skill。

## 插件结论

当前不能删除或迁出 UE 插件源码 `Plugins/MCP/OrionProjectToolsets`：官方 5.8 已替代通用 Graph/Object/Asset 能力，但尚未替代项目框架语义封装、MetaSound Builder 语义操作和本地化流水线语义操作。`.agents/MCP` 只保存外部客户端连接模板，不是 Unreal 插件发现目录。插件已瘦身为只注册 `OrionExperienceToolset`、`OrionLocalizationToolset`、`OrionMetaSoundToolset` 和 `OrionUMGToolset`；不要把旧通用 Graph/Object Toolset 加回去。

## 路由

- Experience/GameFeature 相关工作，继续读取 `../orion-gamemode-experience-framework/SKILL.md` 和 `../orion-gamefeatures/SKILL.md`。
- 角色/PawnData 相关工作，继续读取 `../orion-character-pawn-framework/SKILL.md`。
- 输入链路相关工作，继续读取 `../orion-input-framework/SKILL.md`。
- UMG 相关工作，继续读取 `../orion-umg/SKILL.md`。
- MetaSound Source/Patch、MetaSound 节点、ProjectAcoustics MetaSound 参数接口或 MCP MetaSound 自动化，继续读取 `../unreal-metasound/SKILL.md`。
- 本地化 target、Localization Dashboard、GatherText 或 `.locres` 自动化，继续读取 `../orion-localization-framework/SKILL.md`。
- 需要研究、创建或修改当前 `Content/UI` 蓝图框架资产，或判断是否为 UI 框架补小型项目语义 Toolset 时，读取 `../orion-ui-blueprint-framework/SKILL.md`，尤其是 `references/ui-mcp-editing.zh-CN.md`。
- 创建或删除资产前，继续读取 `../orion-asset-management/SKILL.md`。
