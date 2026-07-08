---
name: orion-rendering-framework
description: "Use when Codex works on Unreal Engine rendering in this framework: RendererSettings, DefaultScalability, platform Engine.ini rendering overrides, DLSS, NIS, Streamline, DLSS Frame Generation, Reflex, ray tracing, RTX, Lumen, Nanite, virtual shadow maps, distance fields, FrontLayerTranslucency, RenderGraph ensures, anti-aliasing, screen percentage, device profiles, video settings registry, PSO precaching, bundled PSO caches, ShaderPipelineCache, CollectedPSOs, PipelineCaches, startup shader compilation UI, or render benchmark flow."
---

# Unreal Rendering Framework

本 Skill 用于处理框架里的渲染运行时、视频设置、DLSS/NIS/Streamline 集成、画质档位和 PSO 缓存流程。

## 工作流

1. 先确认任务层级：运行时代码、玩家视频设置、项目/平台渲染 ini、Scalability、DLSS 插件、PSO 收集/打包，还是启动加载流程。
2. 读取真实源码和配置，不凭记忆生成：`OrionGameRenderManager`、`OrionGameRenderSubsystem`、`UOrionSettingsLocal`、`GameSettingRegistry_Video.cpp`、`UGameDLSSSubsystem`、`UGamePerformanceSettings`、目标 `Config/*.ini`。
3. DLSS、NIS、DLSS-FG、Reflex 相关改动先走 `UGameDLSSSubsystem` 和项目自定义 setting class，不直接在业务代码里散写插件 CVar。
4. 渲染配置分层处理：全局渲染能力放 `DefaultEngine.ini`，平台 RHI/PSO/同步策略放目标平台 `Engine.ini`，画质等级 CVar 放 `DefaultScalability.ini`，玩家可调默认值走 `UOrionSettingsLocal` 或平台 `GameUserSettings.ini`。
5. PSO 问题先区分 runtime PSO Precaching 和 bundled PSO cache。收集、转换、注入 `.spc` 后必须重新 cook/package，并按目标 RHI/ShaderFormat 验证。
6. 启动 shader 编译 UI 和加载屏相关问题要同时查 `UOrionFrontendStateComponent`、`ULoadingScreenManager`、`UOrionLoadingScreenManager` 和引擎 `FShaderPipelineCache`。

## 路由

- 查类声明、include、模块依赖、引擎源码或插件源码时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 修改 `DefaultEngine.ini`、平台 `Engine.ini`、`DefaultScalability.ini`、平台 `Game.ini`、`GameUserSettings.ini`、DLSS settings 或用户可调参数时，配合 `../orion-project-config/SKILL.md`。
- 修改视频设置页、`GameSettingRegistry_Video.cpp`、`UOrionSettingsLocal` 的玩家可调渲染字段、设置保存/应用/取消或设置 UI 行为时，配合 `../orion-game-settings-framework/SKILL.md`。
- 处理贴图太大、包体积大、Texture Streaming Pool 超预算、贴图糊、TextureQuality、TextureLODGroups、`r.Streaming.*`、`r.VT.*`、Virtual Texture 或 Runtime Virtual Texture 优化时，读取 `../unreal-texture-management/SKILL.md`；只查 CVar 表时再配合 `../unreal-render-commands/SKILL.md`。
- 打包后收集、转换、注入 bundled PSO cache，自动遍历地图/画质记录 `.rec.upipelinecache`，或验证 cook 是否带入 `Build/<Platform>/PipelineCaches` 时，读取 `../orion-pso-caching/SKILL.md`，并配合 `../orion-packaging/SKILL.md`。
- 判断渲染代码落在框架层、宿主 Game 模块、Editor 模块还是 GameFeature 插件时，配合 `../orion-framework-architecture/SKILL.md`。
- 渲染入口来自 GameInstance 持有的 runtime manager 或 WorldSubsystem 蓝图桥接时，配合 `../orion-system-framework/SKILL.md` 确认系统层生命周期。
- 创建或移动渲染相关蓝图、材质、UI、视频或 GameFeature 内容资产时，配合 `../orion-asset-management/SKILL.md`。
- 启动加载界面、shader 编译进度 UI、CommonLoadingScreen 或前端流程改动，继续读取 `../orion-loading-screen-framework/SKILL.md`；涉及 Widget 外观时再读取 `../orion-umg/SKILL.md`。

## Reference

读取 `references/rendering-framework.zh-CN.md` 获取运行时类图、配置层地图、DLSS/NIS/Streamline 使用规则、启动 shader 编译流程和验证清单；PSO 全流程操作读取 `../orion-pso-caching/references/pso-full-workflow.zh-CN.md`。

## 硬规则

- 不把宿主项目名、绝对路径、用户名、真实机器路径或实际 PSO 文件名前缀写进 Skill、文档、脚本或示例命令；使用 `<ProjectName>`、`<EngineRoot>`、`<ProjectRoot>`、`<Platform>`、`<ShaderFormatName>` 占位。
- `Source/GameCore` 默认只读；渲染业务逻辑优先写在派生 Game 模块或 GameFeature 插件，除非用户明确允许改 GameCore。
- DLSS Upscale 启用时，抗锯齿方法由项目封装强制为 TSR；不要生成与这个约束冲突的设置 UI 或运行时代码。
- Bundled PSO cache 与平台、RHI、ShaderFormat、构建内容强绑定；不要跨 D3D12/Vulkan/D3D11 或跨 shader format 复用 `.spc`。
