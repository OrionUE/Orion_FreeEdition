---
name: unreal-source-code-navigator
description: "Use when Codex must write, modify, review, or explain Unreal Engine C++/plugin/editor/gameplay code and needs to learn actual local APIs before acting: source indexes, class hierarchy, module/plugin ownership, Build.cs, uplugin descriptors, dependencies, includes, UHT reflection, properties, functions, delegates, call sites, validation commands, system layer, AssetManager, CoreGameData, GameInstance, WorldSubsystem, GameplayTags, input, InputCore, CommonUI, CommonInput, EnhancedInput, GameFeatures, Experience, network replication, RPC, NetDriver, ReplicationGraph, GAS, UMG, Slate, Localization, GameplayMessageRouter, OnlineSubsystem, Editor tools, and cross-platform source navigation."
---

# Unreal Source Code Navigator

本 Skill 用于在编写或分析 Unreal Engine 代码前，从当前机器的真实项目、插件和引擎源码里学习 API。不要凭记忆调用函数；先定位声明、模块、依赖和调用样例，再写代码。

## 工作流

1. 先识别上下文：定位 `<ProjectRoot>`、`<EngineRoot>`、`<PluginRoot>`、`.uproject`、`.uplugin`、`*.Build.cs` 和 `*.Target.cs`。
2. 先查源码再写代码：确认类声明、父类、生命周期函数、`UFUNCTION`、`UPROPERTY`、委托声明、接口和调用样例。
3. 先确认模块再添加 include：用 `*.Build.cs` 判断 Public/Private 依赖，避免把 include 问题误当成 API 问题。
4. 遇到版本差异时，以本机源码为准；不要把通用 UE 知识当成当前版本事实。
5. 实现后验证：优先使用目标模块构建、UHT 输出、Editor-Cmd 或日志确认。

## 脚本

脚本均为只读工具，核心逻辑使用 Python 3.10+，可在 Windows、macOS、Linux 运行。

```bash
python scripts/find_unreal_context.py --root <ProjectRoot>
python scripts/search_unreal_symbol.py UActorComponent --root <ProjectRoot> --engine-root <EngineRoot>
python scripts/inspect_unreal_class.py UActorComponent --root <ProjectRoot> --engine-root <EngineRoot>
python scripts/inspect_unreal_module.py Engine --root <ProjectRoot> --engine-root <EngineRoot>
python scripts/inspect_unreal_delegate.py FOnClicked --root <ProjectRoot> --engine-root <EngineRoot>
python scripts/build_command_hint.py --root <ProjectRoot> --target <TargetName> --config Development
```

可选包装脚本：

```powershell
scripts\run.ps1 context --root <ProjectRoot>
scripts\run.ps1 search UActorComponent --root <ProjectRoot>
```

```bash
scripts/run.sh context --root <ProjectRoot>
scripts/run.sh search UActorComponent --root <ProjectRoot>
```

## 路由

- 需要判断某个 UE 请求应联动哪些专项 Skill 时，先读 `references/routing.zh-CN.md`。
- 已经明确是模块、include、UHT、基类、委托、构建验证或常用领域源码问题时，按下面的 reference 入口读取对应文件。

## 何时读取 references

- 任务涉及多个 UE 领域、需要判断调用哪些 Skill：先读 `references/routing.zh-CN.md`。
- 模块、插件、`Build.cs`、`.uplugin` 和 source root 粗定位：先用 `../unreal-source-index/SKILL.md`。
- 源码搜索、调用点和类定位：读 `references/source-navigation.zh-CN.md`。
- include 或 `*.Build.cs` 依赖不确定：读 `references/module-dependency.zh-CN.md`。
- 反射、Blueprint 暴露、RPC、Replication、UHT 错误：读 `references/reflection-system.zh-CN.md`。
- 基类选择或生命周期函数不确定：读 `references/engine-class-patterns.zh-CN.md`。
- 委托声明、绑定、解绑或动态委托问题：读 `references/delegate-and-event-patterns.zh-CN.md`。
- UMG、Slate、GAS、InputCore、EnhancedInput、ReplicationGraph、GameplayTags、Editor、AssetTools、OnlineSubsystem 等常用领域：读 `references/common-domains.zh-CN.md`。
- 构建、UHT、Editor-Cmd、日志验证：读 `references/validation-workflow.zh-CN.md`。

## 约束

- 安装版 Unreal Engine 代码永远只读。可以读取 `<EngineRoot>` 下的源码、头文件、配置和日志来确认 API，但不要编辑、打补丁、加临时诊断、格式化、修改只读属性或生成任何引擎目录内文件。
- 如果必须做引擎级断点或插桩，先停止并要求用户提供明确的源码版引擎工作区许可；默认改法必须落在项目、插件、配置或资产层。
- 不把项目名、项目绝对路径或引擎绝对路径写入 Skill 内容。
- 不复制 Unreal Engine 源码、头文件摘录或完整 API 文档。
- 不按 UE 模块逐个创建 Skill；按“通用源码导航 + 常用领域手册 + 脚本即时学习”工作。
- 脚本输出可以包含用户本机路径，因为那是运行时事实；Skill 文件本身不得硬编码这些路径。
