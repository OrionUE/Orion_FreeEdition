---
name: unreal-mcp-workflow
description: "Use when working with Unreal Engine 5.8 official MCP in this project: connect to http://127.0.0.1:18765/mcp, handle JSON-RPC/SSE sessions, load ToolsetRegistry toolsets, call AICallable tools, use official AssetTools/ObjectTools/BlueprintTools/UMGToolSet/SlateInspector toolsets, validate Blueprint node editing, and distinguish UE 5.8 MCP from old 5.6 backport or call_tool workflows."
---

# Unreal MCP Workflow

本 Skill 是当前 UE 5.8 官方 MCP 的主入口。它替换旧的 5.6/backport 调用习惯；正文可用中文，MCP 字段、toolset 名和函数名必须保持英文精确拼写。

先读取详细说明：

`references/unreal-mcp-workflow.zh-CN.md`

## 核心规则

- 使用可见 Unreal Editor 窗口验证 MCP，不要隐藏窗口启动。
- Endpoint 是 `http://127.0.0.1:18765/mcp`，请求头带 `Mcp-Protocol-Version: 2025-11-25`。
- 当前 5.8 默认是 deferred 模式：初始 `tools/list` 只有 `list_toolsets`、`describe_toolset`、`load_toolset`。
- 调用具体工具前必须先 `load_toolset`，然后直接调用完整工具名，例如 `ToolsetRegistry.EditorAppToolset.GetContentBrowserPath`。
- 不要使用旧文档里的顶层 `call_tool` 聚合入口；当前实测没有这个顶层工具。
- `list_toolsets` 返回 Markdown/text 列表，不是 JSON；`describe_toolset` 返回的 text 内容是 JSON schema 字符串。
- `tools/call` 返回 SSE/event-stream；PowerShell 解析时逐条解析 `data:` 行，取最后一个带 `result` 的 JSON 对象。
- `AssetTools.find_assets` 返回 package path，例如 `/Game/UI/Menu/W_FrontEnd`；传给 `BlueprintTools` 时要转成 object path，例如 `/Game/UI/Menu/W_FrontEnd.W_FrontEnd`。
- 官方 5.8 已有通用 `AssetTools`、`ObjectTools`、`BlueprintTools`。通用蓝图图表、属性和资产保存优先用官方工具。
- `OrionProjectToolsets` 只作为项目特定补充：Experience、PawnData、AbilitySet、InputConfig、GameFeature Action 和安全 UMG 样式 helper。

## 路由

- 创建、移动、删除、保存资产前，读取 `../unreal-asset-management/SKILL.md`。
- UMG/Widget Blueprint 工作，读取 `../unreal-umg/SKILL.md`；通用 WidgetTree 用 `UMGToolSet.UMGToolSet`，复杂项目样式 helper 再读取 `../unreal-mcp-project-toolsets/SKILL.md`。
- Experience、ActionSet、PawnData、AbilitySet、输入链路或 GameFeature Action 自动化，读取 `../unreal-mcp-project-toolsets/SKILL.md` 和对应领域 Skill。
- 需要新增 C++ Toolset 时，先读取 `../orion-code-style/SKILL.md`、`../unreal-source-code-navigator/SKILL.md`，并按 UE 5.8 `UToolsetDefinition + static UFUNCTION(meta=(AICallable))` 模式实现。

## 已验证事实

- 当前项目 `EngineAssociation` 为 `5.8`，安装版引擎暴露官方 MCP/ToolsetRegistry/Toolsets。
- 当前 Editor 可通过 `127.0.0.1:18765/mcp` 完成 `initialize`、`tools/list`、`list_toolsets`、`describe_toolset`、`load_toolset` 和直接工具调用。
- 已验证官方 `BlueprintTools` 可读取 Widget Blueprint、Experience Blueprint、Actor Blueprint；可创建临时 Actor Blueprint、发现 `Development|PrintString`、写入节点、编译、保存并删除临时资产。
- 这不等于可以无约束写“任何不存在的节点”。实际流程是：取得图表 object path -> `find_node_types` 搜索当前 graph 可创建的 `type_id` -> `create_node` 创建合法节点 -> 连接 pin -> 编译保存。
