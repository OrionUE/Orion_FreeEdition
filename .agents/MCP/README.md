# Unreal MCP 本地连接说明

本项目 Unreal Editor 启动后会在本机启动 MCP：

- `http://127.0.0.1:18765/mcp`

通用客户端配置模板见：

- `.agents/MCP/unreal-mcp-http.json`

Codex 项目配置见：

- `.codex/config.toml`

Cursor、Antigravity、DeepSeek、Claude 等客户端如果支持 HTTP MCP server，就使用同一个 URL。不同客户端的配置文件位置不同；如果客户端支持项目级配置，可以把 `.agents/MCP/unreal-mcp-http.json` 的内容复制或引用到对应位置。如果只支持用户级配置，就把同一个 URL 写入用户级 MCP 配置。

详细调用流程见：

- `.agents/skills/unreal-mcp-workflow/SKILL.md`
- `.agents/skills/unreal-mcp-workflow/references/unreal-mcp-workflow.zh-CN.md`
