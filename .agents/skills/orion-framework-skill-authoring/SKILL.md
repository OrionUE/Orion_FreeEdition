---
name: orion-framework-skill-authoring
description: Use when a user describes how an Orion or Unreal Engine game framework module, plugin, subsystem, UI layer, gameplay feature, or tool should be used and Codex must inspect local project plus engine source, extract portable implementation guidance, and create or update repo-local Skills under .agents/skills without project names, absolute paths, or machine-specific assumptions. Also use when consolidating repo-local Skills, choosing whether to merge a narrow Skill into an existing Skill, or enforcing Skill naming rules such as unreal-* for Unreal source/API guidance and orion-* for Orion framework guidance.
---

# Orion Framework Skill Authoring

本 Skill 用于把框架作者口述的模块用法、真实项目源码、插件源码和 Unreal Engine 源码，沉淀成面向其他开发者和 AI 工具的通用 Skill。

## Core Workflow

1. 先听用户说明模块用法：确认模块目标、典型调用方式、希望 AI 生成的代码类型、面向 C++ 还是 Blueprint、哪些内容属于可发布框架能力。
2. 再读源码：检查 `.uproject`、`.uplugin`、`Source/**`、`Plugins/**`、`Config/**`、相关 `*.Build.cs`、调用点和父类实现；需要写代码或解释 Unreal API 时同时使用 `unreal-source-code-navigator`。
3. 对照引擎源码：确认生命周期、反射宏、模块依赖、委托、Subsystem、UMG、GAS、EnhancedInput、OnlineSubsystem 等版本相关事实，不凭记忆写 Skill。
4. 抽取通用能力：记录入口类、核心函数、扩展点、依赖模块、必须配置、资产约定、验证命令、常见失败和修复路径。
5. 先判断是否应该合并：如果新知识属于现有 Skill 的同一 UE 子系统、同一 Orion 框架域、同一验证流程或同一资产/配置入口，优先并入现有 Skill 的 `references/*.zh-CN.md` 和路由，不要创建零散小 Skill。
6. 生成或更新目标 Skill：放在 `.agents/skills/<portable-skill-name>/`，`SKILL.md` 保持简短，必须包含 `## 路由` 小节，详细中文说明放到 `references/<portable-skill-name>.zh-CN.md`，只有确定性重复操作才加入 `scripts/`。
7. 做可发布清理：Skill 文件不得包含游戏/项目名称、绝对路径、用户名、本机引擎路径、私有仓库路径；公开框架模块名、插件名和 API 名可以保留。
8. 接通现有路由：把新 Skill 加入总路由或相关上游 Skill 的二级路由，并在相邻领域 Skill 中补充交叉路由。
9. 验证：运行 skill-creator 的 `quick_validate.py`，再运行本 Skill 的 `scripts/check-skill-portability.ps1` 扫描路径泄漏、禁用词和路由小节；新增文本文件保持 CRLF。

## 硬边界

- 安装版 Unreal Engine 代码永远只读。可以查 `<EngineRoot>` 下源码来确认 API 和生命周期，但不要编辑、插桩、打补丁、格式化、改只读属性或在安装版引擎目录生成文件。
- 需要引擎级诊断时，先停下来要求用户明确提供源码版引擎工作区许可；默认只能把修复、诊断和脚本放在项目、插件、配置或资产层。

## 路由

- 创建、更新或验证 Skill 元数据、目录结构、`agents/openai.yaml` 时，配合系统 `skill-creator`。
- 生成 UE 框架模块 Skill 前，先用 `../unreal-source-code-navigator/SKILL.md` 查真实项目、插件和引擎源码。
- 生成的 Skill 涉及具体 UE 领域时，必须接入 `../unreal-source-code-navigator/references/routing.zh-CN.md`，并与相邻领域 Skill 互相指向。
- 生成的 Skill 涉及 MCP 创建资产、保存资产或编辑器自动化时，配合 `../unreal-mcp-workflow/SKILL.md`。

## References

读取 `references/orion-framework-skill-authoring.zh-CN.md` 获取完整中文工作手册，包含信息采集清单、源码检索顺序、Skill 粒度判断、命名规则、可发布清理规则和质量门禁。

## Portability Check

在生成具体模块 Skill 后运行：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-framework-skill-authoring\scripts\check-skill-portability.ps1 -Path .agents\skills\<portable-skill-name> -BannedLiteral "<GAME_OR_PROJECT_NAME>" -CheckCRLF -RequireRouting
```

## 可发布命名和占位符规则

- UE 引擎源码、UE 原生 API、UE 插件行为、跨项目通用 Unreal 子系统和版本差异 Skill，命名为 `unreal-<domain>`。
- Orion 框架、Orion 项目约定、Orion 模块使用方式、Orion 代码规范和可发布框架能力 Skill，命名为 `orion-<domain>`。
- 非 UE 源码也非 Orion 框架的通用工具 Skill 可以使用无前缀的领域名，但不要用 `ue5-` 这类小版本前缀承载长期能力；版本差异写入 description 或 reference。
- 能合并进现有 Skill 的窄问题优先合并；只有当触发词、工作流、验证命令或资源文件明显独立时才新建 Skill。

- 公开品牌名、框架名、插件名可保留，例如用户明确允许的 `Orion`、`OrionSteam`。
- 私有项目名、未公开游戏名、本机项目名、用户名、本机引擎安装路径、项目绝对路径、日志路径、Benchmark 地图名、本机 GPU 型号必须替换成占位符。
- 固定占位符：`<ProjectName>`、`<ProjectRoot>`、`<EngineRoot>`、`<UserLocalAppData>`、`<BenchmarkMap>`、`<GPU>`、`<ModuleName>`、`<Platform>`。
- 写 Skill、README、CSV、脚本、示例命令、事故记录和实验备注时都必须执行这条规则；不要只清理 `SKILL.md`。
- 验证时至少搜索：私有项目名、盘符路径、用户主目录、用户名、引擎安装目录、具体地图名和本机 GPU 型号。

