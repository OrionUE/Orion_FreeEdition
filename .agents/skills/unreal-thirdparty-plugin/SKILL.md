---
name: unreal-thirdparty-plugin
description: "Use when creating, reviewing, or modifying Unreal Engine plugins that wrap third-party SDKs or native libraries: ModuleType.External, Source/ThirdParty External module declarations, plugin-root ThirdParty artifacts, Build.cs include/lib/runtime dependency setup, RuntimeDependencies staging, DLL/so/dylib loading, symbols, licenses, platform folders, Fab/binary distribution, or packaging failures caused by missing third-party files."
---

# Unreal Third-Party Plugin

本 Skill 用于制作和审查 UE 第三方库插件，重点是把 SDK 实体、External 模块声明、Runtime/Editor 桥接模块和打包 staging 边界拆清楚。

## 工作流

1. 先读取目标 `.uplugin`、相关 `*.Build.cs`、`*.Target.cs` 和当前插件目录树，确认 Runtime、Editor、Program、External 模块归属。
2. 第三方 SDK 实体默认放在插件根 `ThirdParty/<SDKName>/`；`Source/ThirdParty/<SDKName>/` 只放 `ModuleType.External` 的 `<SDKName>.Build.cs` 声明层，不放头文件、lib、dll、pak、dat 或完整 SDK 包。
3. Runtime/Editor 模块只依赖 External 模块，不直接硬编码第三方库散落路径；公共头暴露第三方类型前必须重新判断 Public/Private 依赖边界。
4. 在 External `Build.cs` 中按平台分支添加 include、静态库或导入库、delay-load DLL、运行时 loose files、framework、UPL/APL 或 receipt 属性。
5. 运行库加载路径和 `RuntimeDependencies` 目标路径必须一致：代码从插件相对路径加载，就把文件 stage 到插件相对路径；需要和 exe 同目录加载，才显式 stage 到 `$(TargetOutputDir)`。
6. 第三方库需要随源码库保存版本、架构、CRT/ABI、许可证、NOTICE、符号和导入 manifest；不要把临时构建中间件、下载缓存或未批准许可证产物提交。
7. 修改后至少验证目标 Editor/Game/Client/Server/Program 构建变体；涉及打包时检查 staged 包内第三方运行库实际存在。

## 路由

- 写或改 UE 插件代码前，先配合 `../orion-framework-architecture/SKILL.md` 做模块和插件边界分析。
- 修改 `.h`、`.cpp`、`.Build.cs`、`.Target.cs`、脚本、`.uplugin` 或 `.uproject` 时，配合 `../orion-code-style/SKILL.md`。
- 查 UE 模块、Build.cs 属性、插件描述符、RuntimeDependencies 或平台加载细节时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 需要验证 cook、stage、Pak/IoStore、Steam 包或 staged loose files 时，配合 `../orion-packaging/SKILL.md`。
- 把一次第三方库接入经验沉淀成项目 Skill 时，配合 `../orion-framework-skill-authoring/SKILL.md` 和系统 `skill-creator`。

## Reference

读取 `references/unreal-thirdparty-plugin.zh-CN.md` 获取目录结构、External `Build.cs` 模板、平台分支、staging 规则、发布合规和排错清单。
