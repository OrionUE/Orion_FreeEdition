---
name: orion-mcp-workflow
description: "Use when working with Unreal Engine 5.8 official MCP in this project: connect to http://127.0.0.1:18765/mcp, handle JSON-RPC/SSE sessions, load ToolsetRegistry toolsets, call AICallable tools, use official AssetTools/ObjectTools/BlueprintTools/UMGToolSet/SlateInspector toolsets, validate Blueprint node editing, and distinguish UE 5.8 MCP from old 5.6 backport or call_tool workflows."
---

# Unreal MCP Workflow

本 Skill 是当前 UE 5.8 官方 MCP 的主入口。它替换旧的 5.6/backport 调用习惯；正文可用中文，MCP 字段、toolset 名和函数名必须保持英文精确拼写。

先读取详细说明：

`references/orion-mcp-workflow.zh-CN.md`

## 核心规则

- 涉及截图、Slate 点击、Viewport 视觉确认时使用可见 Unreal Editor 窗口；只做日志/PIE 启停验证时可以隐藏启动，但结束后必须关闭验证进程。
- Endpoint 是 `http://127.0.0.1:18765/mcp`，请求头带 `Mcp-Protocol-Version: 2025-11-25`。
- 项目内 MCP 客户端连接模板放在 `.agents/MCP/unreal-mcp-http.json`；Codex 项目配置放在 `.codex/config.toml`。
- 从 `initialize` 响应头读取 `Mcp-Session-Id`；PowerShell 中必须取第一个元素并转成字符串，不要把 header 数组原样发回去。
- 当前 5.8 MCP 有两种入口形态，先以实时 `tools/list` 为准：有 `load_toolset` 时先加载 toolset 再直接调用完整工具名；有 `call_tool` 时通过顶层聚合入口传 `toolset_name`、`tool_name`、`arguments`。
- `list_toolsets` 返回 Markdown/text 列表，不是 JSON；`describe_toolset` 返回的 text 内容是 JSON schema 字符串。
- `tools/call` 返回 SSE/event-stream；PowerShell 解析时逐条解析 `data:` 行，取最后一个带 `result` 的 JSON 对象。
- `AssetTools.find_assets` 返回 package path，例如 `/Game/UI/Menu/W_FrontEnd`；传给 `BlueprintTools` 时要转成 object path，例如 `/Game/UI/Menu/W_FrontEnd.W_FrontEnd`。
- 官方 5.8 已有通用 `AssetTools`、`ObjectTools`、`BlueprintTools`。通用蓝图图表、属性和资产保存优先用官方工具。
- `OrionProjectToolsets` 只作为项目特定补充：Experience、PawnData、AbilitySet、InputConfig、GameFeature Action、安全 UMG 样式 helper 和本地化 Dashboard/commandlet 自动化。
- 如果 MCP 返回 HTTP 502、服务不可用或缺少创建/保存资产的安全工具面，但任务可以通过编辑器命令行 Python 完成，读取 `../orion-python-blueprint-assets/SKILL.md` 并使用 `UnrealEditor-Cmd -run=pythonscript` 兜底。

## 路由

- 创建、移动、删除、保存资产前，读取 `../orion-asset-management/SKILL.md`。
- UMG/Widget Blueprint 工作，读取 `../orion-umg/SKILL.md`；通用 WidgetTree 用 `UMGToolSet.UMGToolSet`，复杂项目样式 helper 再读取 `../orion-mcp-project-toolsets/SKILL.md`。
- Experience、ActionSet、PawnData、AbilitySet、输入链路或 GameFeature Action 自动化，读取 `../orion-mcp-project-toolsets/SKILL.md` 和对应领域 Skill。
- 需要新增 C++ Toolset 时，先读取 `../orion-code-style/SKILL.md`、`../unreal-source-code-navigator/SKILL.md`，并按 UE 5.8 `UToolsetDefinition + static UFUNCTION(meta=(AICallable))` 模式实现。

## 已验证事实

- 当前项目 `EngineAssociation` 为 `5.8`，安装版引擎暴露官方 MCP/ToolsetRegistry/Toolsets。
- 当前 Editor 可通过 `127.0.0.1:18765/mcp` 完成 `initialize`、`tools/list`、`list_toolsets`、`describe_toolset`、`load_toolset` 和直接工具调用。
- 已验证官方 `BlueprintTools` 可读取 Widget Blueprint、Experience Blueprint、Actor Blueprint；可创建临时 Actor Blueprint、发现 `Development|PrintString`、写入节点、编译、保存并删除临时资产。
- 这不等于可以无约束写“任何不存在的节点”。实际流程是：取得图表 object path -> `find_node_types` 搜索当前 graph 可创建的 `type_id` -> `create_node` 创建合法节点 -> 连接 pin -> 编译保存。
