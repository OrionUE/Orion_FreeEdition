# 前端初始启动 Flow 使用说明

## 功能入口

`UOrionFrontendStateComponent` 在 `BeginPlay()` 中读取 `ULoadingScreenManager::GetIsStartUpLoadingScreen()`，并把结果保存为本轮前端 Flow 的首次启动快照。`OnExperienceLoaded()` 创建的 `FrontendFlow` 会继续按原顺序执行，但启动专用步骤会先检查这个快照。

## 只在打开游戏后初始执行的步骤

- `FlowStep_TryJoinRequestedSession`：只在本轮前端 Flow 属于进程首次启动时尝试加入 `UCommonGameInstance` 里缓存的 requested session。
- `FlowStep_TryPreloadStartupPopups`：只在本轮前端 Flow 属于进程首次启动时，提前异步加载并预热 `StartupPopupFlowActionClasses` 对应的弹窗资源。
- `FlowStep_TryEvaluateStartupPopups`：只在本轮前端 Flow 属于进程首次启动时异步加载并执行 `StartupPopupFlowActionClasses`。

返回主菜单时，启动 LoadingScreen 已经被 `CompleteStartupLoadingScreen()` 标记为结束，新创建的前端状态组件会捕获到非 startup 状态，上面两个步骤会直接 `ContinueFlow()`。

## 蓝图和数据配置

前端状态组件 Blueprint 仍然配置：

- `PressStartScreenClass`：启动按键页面。
- `MainScreenClass`：主菜单页面。
- `StartupPopupFlowActionClasses`：启动后弹窗、公告、奖励等 `UOrionFlowAction` 派生类列表。

`StartupPopupFlowActionClasses` 不需要为了返回主菜单场景额外清空；运行时会根据首次启动快照决定是否执行。

## 运行时触发

1. 打开游戏，启动 LoadingScreen 仍处于 startup 状态。
2. `UOrionFrontendStateComponent::BeginPlay()` 捕获首次启动快照。
3. `FlowStep_TryPreloadStartupPopups` 在 LoadingScreen 仍可见时预热启动弹窗的 Action、Definition、PopupScreen 和内容 Widget。
4. 前端流程显示按键页、处理 requested session，再推入主菜单页。
5. `CompleteStartupLoadingScreen()` 清掉 startup 状态。
6. 主菜单页已经入栈后，`FlowStep_TryEvaluateStartupPopups` 正式展示启动弹窗。
7. 玩家从游戏返回主菜单时，新的前端 Flow 捕获到非 startup 状态，跳过 requested session 和启动弹窗检查。

## 验证步骤

1. 首次打开游戏，确认 requested session 加入逻辑仍可触发。
2. 首次进入主菜单，确认 `StartupPopupFlowActionClasses` 配置的启动弹窗仍会执行，且首个弹窗不再在显示瞬间加载 `PopupScreenClass` 或内容 Widget。
3. 进入游戏后返回主菜单，确认不再重新尝试 requested session，也不再重复弹出启动弹窗。
4. 如果需要排查时序，临时观察 `Try Preload Startup Popups` 是否发生在 `CompleteStartupLoadingScreen()` 之前。

## 常见扩展点

- 新增初始启动专用步骤时，复用 `ShouldRunInitialGameStartupFlowSteps()`，不要在后置步骤直接读取 LoadingScreen 的 startup 标记。
- 如果某个步骤需要每次进入前端都执行，不要使用首次启动快照。
- 如果要扩展不同上下文的弹窗检测，优先新增 `UOrionFlowAction` 派生类或新的 Flow Action 配置，不要把业务逻辑写进启动页 Widget。
- 如果新增的 Flow Action 首次执行会加载 UI 资源，覆盖 `UOrionFlowAction::PreloadAction()`，让启动 Flow 可以在 LoadingScreen 阶段提前完成资源加载。
