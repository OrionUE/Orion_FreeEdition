---
name: unreal-loading-screen-framework
description: "Use when Codex works on Unreal Engine CommonLoadingScreen in this framework: startup PreLoadScreen, runtime loading screen, ULoadingScreenManager, UOrionLoadingScreenManager, LoadingProcessInterface, LoadingProcessTask, LoadingPercentInterface, transition level loading progress, loading widget, shader compile loading UI, loading screen audio mix, CommonLoadingScreenSettings, or loading screen stuck/debug flows."
---

# Unreal Loading Screen Framework

本 Skill 用于接入、修改和排查框架里的 CommonLoadingScreen 加载屏系统。它覆盖启动期 PreLoadScreen、运行期 GameInstanceSubsystem 加载屏、Experience/Player/Pawn 初始化阻塞、关卡包进度、shader 预编译 UI、加载屏 Widget 和加载屏音频混音。

## 工作流

1. 先判断任务属于启动期黑屏 PreLoadScreen、运行期 UMG 加载屏、异步业务阻塞、Experience/Player/Pawn 初始化、关卡过渡进度、shader 编译界面、加载屏视频，还是配置排错。
2. 读取 `Plugins/Common/CommonLoadingScreen` 的真实源码，确认接口签名、生命周期和 CVar；不要按普通 `AddToViewport` 加载屏来实现。
3. 项目侧继续读取 `Source/<GameModule>/UI/LoadingScreen`、`Source/<GameModule>/UI/Frontend`、`Source/GameUI/LoadingScreen`、`Source/GameCore/GameModes` 和相关 `Build.cs`。
4. 修改显示外观时优先替换 `DefaultGame.ini` 的 `CommonLoadingScreenSettings.LoadingScreenWidget` 指向的 host widget，或让 host widget 通过 `LoadingScreenSubsystem` 切换内部内容。
5. 增加“某阶段没完成就继续显示加载屏”时，优先实现 `ILoadingProcessInterface` 或使用 `ULoadingProcessTask`；不要用散落的全局 bool 或手动 viewport widget。
6. 增加关卡包加载进度时，实现 `ILevelLoadingProcessInterface` 或复用 `ATransitionLevelScriptActor` 模式，并确保加载完成后设置 level shown 状态。
7. 实现后至少验证 PIE、Standalone 或开发包中的显示/隐藏、输入阻断、音频混音、进度回调和日志 reason；Dedicated Server 不应创建客户端加载屏。

## 路由

- 加载屏 Widget Blueprint、CommonUI/UMG 布局、进度条、动画结束回调、内部内容切换，配合 `../unreal-umg/SKILL.md`。
- 修改 `[/Script/CommonLoadingScreen.CommonLoadingScreenSettings]`、加载屏 Widget 路径、ZOrder、hold/heartbeat/progress 参数、`CoreAudioSettings.LoadingScreenControlBusMix`，配合 `../unreal-project-config/SKILL.md`。
- 加载屏视频、Bink、Media Texture、`Content/Movies` 或 MoviePlayer 启动视频，配合 `../unreal-movie-media-framework/SKILL.md`。
- 启动 shader 预编译、PSO、`FShaderPipelineCache`、`FlowStep_TryCompileShaders` 或渲染 benchmark 前端流程，配合 `../unreal-rendering-framework/SKILL.md`。
- Experience 加载、GameFeature 激活、ActionSet、Player/Pawn 初始化阻塞加载屏时，配合 `../unreal-gamemode-experience-framework/SKILL.md`、`../unreal-gamefeatures/SKILL.md`、`../unreal-player-framework/SKILL.md` 或 `../unreal-character-pawn-framework/SKILL.md`。
- 加载屏显示/隐藏驱动音频 ControlBusMix、背景音遮罩或 MediaSound，配合 `../unreal-audio-framework/SKILL.md`。
- 查真实类、函数、模块依赖、UE PreLoadScreen/MoviePlayer/World load delegates 源码时，配合 `../unreal-source-code-navigator/SKILL.md`。

## Reference

读取 `references/loading-screen-framework.zh-CN.md` 获取架构分层、显示判定顺序、进度算法、常用接入模板、配置契约、调试 CVar 和验证清单。

## 硬规则

- 不把宿主项目名、绝对路径、用户名或机器路径写进 Skill、示例、配置片段或生成文档。
- 不绕过 `ULoadingScreenManager` 直接 `AddToViewport` 制作全局加载屏；否则会丢失输入阻断、音频混音、shader batch mode、world rendering 控制和 visibility delegate。
- `ShouldShowLoadingScreen` 返回 true 时必须给非空 reason，便于日志排查卡住的阶段。
- 加载需求结束后，运行期加载屏仍要等 Widget/流程调用 `SetIsLoadingWidgetCompleted(true)` 才会真正隐藏。
- `Source/GameCore` 默认只读；新增业务加载条件优先写在宿主 Game 派生类、Player/Pawn/GameState 组件或 GameFeature 插件中。
