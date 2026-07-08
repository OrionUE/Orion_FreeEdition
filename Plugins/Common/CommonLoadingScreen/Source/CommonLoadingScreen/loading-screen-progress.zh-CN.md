# CommonLoadingScreen 进度显示使用说明

## 功能入口

运行期加载屏由 `ULoadingScreenManager` 管理。它会在 `PreLoadMapWithContext`、`PostLoadMapWithWorld` 和每帧 tick 中判断是否需要显示加载屏，并向实现 `ILoadingPercentInterface` 的加载屏 Widget 广播 `0.0 ~ 1.0` 的进度。

## 可创建的蓝图或数据资产

- 加载屏外壳 Widget：继承 `UUserWidget`，并实现 `ILoadingPercentInterface`；项目默认 C++ 父类可以继续使用 `UUI_LoadingScreenHost`。
- 过渡关卡脚本：需要真实包加载进度时，关卡 `LevelScriptActor` 可继承或参考 `ATransitionLevelScriptActor`，实现 `ILevelLoadingProcessInterface`。

## 关键属性配置

配置入口在 `Config/DefaultGame.ini` 的 `[/Script/CommonLoadingScreen.CommonLoadingScreenSettings]`：

- `LoadingScreenWidget`：加载屏 Widget 蓝图类。
- `StageWeight`：兼容旧配置和诊断用；逻辑阶段只是状态检查点，不应当作真实可视百分比。
- `LevelPackageWeight`：是否使用关卡包进度的开关；大于 `0` 且 `ILevelLoadingProcessInterface` 返回可靠进度时，进度条使用真实关卡包百分比。
- `bUseIndeterminateProgress`：没有可靠包加载百分比时启用忙碌式视觉进度。
- `IndeterminateProgressStartPercent` / `IndeterminateProgressTargetPercent` / `IndeterminateProgressSecondsToTarget`：控制忙碌式视觉进度的起点、上限和推进速度。
- `CompletionInterpSpeed` / `CompletionHoldSeconds` / `CompletionVisibleThreshold`：控制加载结束后推进到 100% 并短暂停留，避免同步加载完成后进度条直接消失。

## 运行时触发方式

`ULoadingScreenManager` 会自动扫描 `GameState`、`GameState` 组件、本地 `PlayerController`、`Pawn` 和它们的组件上实现的 `ILoadingProcessInterface`。短期异步流程可以使用 `ULoadingProcessTask` 注册临时加载原因。

加载屏 Widget 创建后，manager 会自动注册所有实现 `ILoadingPercentInterface` 的实例；分屏模式下每个本地玩家的实例都会收到进度回调。

## 同步加载限制

当前运行期加载屏是 UMG/Slate viewport widget，不能在同步 `LoadMap` 阻塞游戏线程时真正独立刷新。这个版本的进度条策略是：阻塞开始前尽快显示初始进度；没有可靠进度时只使用忙碌式视觉进度；阻塞结束后在加载屏保留期间平滑推进到完成。需要真正阻塞期持续动画时，应另行设计 MoviePlayer/纯 Slate 加载屏，而不是把 UMG Widget 放到另一个线程。

## 验证步骤

1. 确认 `LoadingScreenWidget` 指向的 Widget 实现了 `ILoadingPercentInterface`。
2. 在 PIE 或 Standalone 中打开 `CommonLoadingScreen.LogLoadingScreenReasonEveryFrame=1`，确认加载 reason 正常输出。
3. 触发地图切换或前端启动流程，确认进度条能收到 `OnLoadingPercentChanged`。
4. 同步加载完成后，确认进度条会推进到 100% 并短暂停留后再隐藏。
5. 如果启用了分屏，确认每个本地玩家 viewport 的加载屏都能隐藏，不残留遮罩。

## 常见扩展点

- 用 `ILevelLoadingProcessInterface` 接入真实异步关卡包进度。
- 用 `ULoadingProcessTask` 包装临时异步操作。
- 在加载屏 Widget 蓝图中把 `OnLoadingPercentChanged` 转换为 ProgressBar、文字百分比或材质参数。
- 调整 `IndeterminateProgressTargetPercent` 给同步加载预留更多或更少的完成段空间。
