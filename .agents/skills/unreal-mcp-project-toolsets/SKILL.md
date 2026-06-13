---
name: unreal-mcp-project-toolsets
description: Use when working with the project-local UE MCP toolsets, especially OrionProjectToolsets Blueprint graph inspection/editing, K2 node creation, Blueprint compile/save, UMG property/style helpers, Experience or ActionSet creation/editing, AbilitySet/InputAction/InputConfig/IMC workflow automation, GameFeatureData creation and PrimaryAssetTypesToScan editing, generic Blueprint asset creation or reparenting, level creation, actor spawning/deletion, WorldSettings Experience or GameMode assignment, PIE multiplayer validation, and MCP validation.
---

# Unreal MCP Project Toolsets

本 Skill 记录项目内 `OrionProjectToolsets`、`GameFeaturesToolset` 和 `EditorToolset` MCP Toolset 的使用和验证流程。正文可以使用中文；toolset 名、函数名、JSON-RPC 字段必须保持英文精确拼写。

先读取详细中文说明：

`references/orion-project-toolsets.zh-CN.md`

## Routing

- 默认先读取 `references/orion-project-toolsets.zh-CN.md`。
- Widget Blueprint 创建、UMG 树编辑或 HUD 样式相关工作，继续读取 `../unreal-umg/SKILL.md`。
- Experience、ActionSet、PawnData、AbilitySet、InputAction、InputConfig 或 WorldSettings Experience 相关工作，继续读取 `../unreal-gamemode-experience-framework/SKILL.md`。
- 角色 Pawn Blueprint、PawnData 或角色初始化相关工作，继续读取 `../unreal-character-pawn-framework/SKILL.md`。
- GameFeature 插件状态、激活、Action 挂载或插件结构相关工作，继续读取 `../unreal-gamefeatures/SKILL.md`。

核心规则：

- 先使用 `.agents/skills/unreal-mcp-workflow/SKILL.md` 建立 MCP session，再调用本 Skill 中的 toolset。
- Blueprint 图表编辑使用 `OrionProjectToolsets.OrionBlueprintGraphToolset`。
- UMG 属性化辅助编辑使用 `OrionProjectToolsets.OrionUMGToolset`。
- 创建、修改或保存 GameUI/CommonUI/Widget Blueprint 时，先读取 `../unreal-umg/SKILL.md`；Widget Blueprint 创建由 `UMGToolSet.UMGToolSet` 负责，类默认变量和保存验证由 `OrionBlueprintGraphToolset` 补齐。
- Experience/GameFeature 创建和编辑使用 `OrionProjectToolsets.OrionExperienceToolset`；根 `GameFeatureData` 创建和 PrimaryAssetTypesToScan 编辑使用 `GameFeaturesToolset.GameFeaturesToolset`。
- 通用 Blueprint 资产创建、重设父类、Input Mapping Context 创建和按键映射优先使用 `OrionProjectToolsets.OrionExperienceToolset`。
- 地图创建、当前地图另存、关卡中摆 Actor、删除临时 Actor、WorldSettings Experience/GameMode 反射设置和 PIE 启停使用 `EditorToolset.EditorAppToolset`。
- 角色蓝图、PawnData、PawnData 字段、DefaultPawnData、PlayerStart/Spawner 相关配置 recipe 先读取 `../unreal-character-pawn-framework/SKILL.md`。
- PlayerController/GameState 玩家组件挂载 recipe 先读取 `../unreal-player-framework/SKILL.md`，再用 Experience Toolset 的 `AddComponentActionEntry`。
- TeamDisplayAsset、TeamInfo、TeamCreationComponent、队伍 Spawner、按队伍出生或 Experience 中队伍组件挂载 recipe 先读取 `../unreal-teams-framework/SKILL.md`。
- Experience 蓝图资产要按 GeneratedClass CDO 处理：工具函数内部编辑 CDO，保存时保存 Blueprint 资产。
- 真实资产验证优先使用“新增临时内容 -> 编译/保存 -> 删除临时内容 -> 再编译/保存 -> 重新读取确认无残留”的可逆流程。
- 不要在 Skill 或项目文档中写死本机引擎路径、项目路径或 target 名；需要构建时从当前 `.uproject`、`Source/*.Target.cs` 或 `UE_ENGINE_ROOT` 推断。
