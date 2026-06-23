---
name: unreal-vs-project-generation
description: "Use when Unreal Engine Visual Studio project file generation fails or appears ineffective after engine upgrade, EngineAssociation changes, Generate Visual Studio project files, UnrealVersionSelector, UnrealBuildTool -ProjectFiles, .sln/.slnx stale engine paths, .uproject/.uplugin JSON encoding errors, UBT Log_GPF.txt diagnostics, UE 5.8 target upgrade prompts, or editor launch is blocked after generated project files."
---

# Unreal VS Project Generation

用于排查 Unreal Engine 生成 Visual Studio 工程文件失败、右键 Generate Visual Studio project files 无效果、升级引擎后 `.sln` 仍指向旧引擎、或 UBT 生成工程被 `.uproject` / `.uplugin` 描述文件阻断的问题。

## 工作流

1. 先读取 `.uproject` 的 `EngineAssociation`，再查本机 UnrealVersionSelector / 注册表 / Launcher 安装记录，确认它能解析到真实 `<ENGINE_ROOT>`。
2. 不相信现有 `.sln`：搜索 `.sln`、`.slnx`、`Intermediate/ProjectFiles/*.props` 和 `.vcxproj` 中的旧 `<ENGINE_ROOT>`，确认生成结果是否真的更新。
3. 右键生成无反馈时，直接运行当前引擎的 UBT：`<ENGINE_ROOT>/Engine/Binaries/DotNET/UnrealBuildTool/UnrealBuildTool.exe -ProjectFiles -Project=<PROJECT_ROOT>/<Project>.uproject -Game -Engine -Progress`。
4. 读取 `%LOCALAPPDATA%/UnrealBuildTool/Log_GPF.txt`，以第一处 UBT error / exception 为准排查，不要只看资源管理器菜单是否弹窗。
5. 如果报 `.uplugin` / `.uproject` `JsonReaderException`、`invalid start of a value` 或 `0xFF`，优先检查描述文件是否是 UTF-16 BOM；转换为 UTF-8 no BOM + CRLF 后重新生成。
6. 如果 UBT 报 Target 修改 shared build products 的属性，检查对应 `.Target.cs` 是否需要移除差异设置、设置 `BuildEnvironment = TargetBuildEnvironment.Unique;`，或显式 `bOverrideBuildEnvironment = true`。
7. 生成成功后搜索 `.sln`、`.slnx`、`Intermediate/ProjectFiles`，确认它们已经指向目标 `<ENGINE_ROOT>`；不要只凭命令 ExitCode 判断。
8. 升级 UE 后继续跑目标 Editor 编译和编辑器启动；如果出现 `Target Upgrade Required`、旧插件 `EngineVersion` 弹窗或 V7 严格宏错误，读取 reference 里的 UE 5.8 阻断清单处理。

## 路由

- 读取或修改 `.uproject`、`.uplugin`、Target、Build.cs 或 EngineAssociation 时，配合 `../unreal-project-config/SKILL.md` 和 `../unreal-framework-architecture/SKILL.md`。
- 需要查 TargetRules、UBT、引擎版本差异或项目源码依赖时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 需要转换 `.uplugin` / `.uproject` 编码、CRLF 或机械重写文本时，先读取 `../orion-code-style/SKILL.md`，再配合 `../crlf-mechanical-formatting/SKILL.md`。
- 如果排查过程产出新的可复用失败模式，配合系统 `skill-creator` 和 `../orion-framework-skill-authoring/SKILL.md` 更新本 Skill 或相邻路由。

## Reference

读取 `references/unreal-vs-project-generation.zh-CN.md` 获取 UBT 命令模板、BOM 扫描/转换命令、验证清单和常见失败处理。
