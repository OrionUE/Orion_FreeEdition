# Unreal 加载屏框架手册

本手册用于让 Codex 在实现或排查加载屏时快速接上框架已有能力。内容基于当前工程源码和 Unreal Engine 5.x 的 PreLoadScreen、MoviePlayer、World loading delegate 模式整理，示例使用占位符，不绑定宿主项目名或机器路径。

## 架构分层

### 启动期 PreLoadScreen

`Plugins/Common/CommonLoadingScreen` 有两个模块：

- `CommonStartupLoadingScreen`：`LoadingPhase=PreLoadingScreen`，在引擎初始化阶段注册 `FCommonPreLoadScreen`。
- `CommonLoadingScreen`：运行期模块，提供 `ULoadingScreenManager`、接口、settings 和过渡关卡 helper。

启动期链路：

1. `FCommonStartupLoadingScreenModule::StartupModule` 在非 dedicated server 下创建 `FCommonPreLoadScreen`。
2. 非 Editor 且可渲染时，把它注册到 `FPreLoadScreenManager`。
3. `FCommonPreLoadScreen` 返回 `EPreLoadScreenTypes::EngineLoadingScreen`。
4. `SCommonPreLoadingScreenWidget` 当前只是 Slate 黑底，覆盖引擎初始化阶段。
5. 引擎 `LaunchEngineLoop` 会优先播放已注册的 `EngineLoadingScreen`，没有注册时才回退到旧 MoviePlayer loading movie 流程。

限制：

- 早期 PreLoadScreen 不能依赖 UObject、蓝图、UMG 或完整游戏世界。
- 它不是运行期地图切换加载屏；运行期要走 `ULoadingScreenManager`。
- 不要把项目主 loading UI 做在 `CommonStartupLoadingScreen`，除非明确只需要引擎启动黑屏或纯 Slate 资源。

### 运行期 LoadingScreenManager

`ULoadingScreenManager` 是 `UGameInstanceSubsystem` + `FTickableGameObject`，只在客户端创建，Dedicated Server 不创建。它负责：

- 监听 `FCoreUObjectDelegates::PreLoadMapWithContext` 和 `PostLoadMapWithWorld`。
- 每 tick 判断是否有系统要求显示加载屏。
- 从 `UCommonLoadingScreenSettings.LoadingScreenWidget` 加载 UMG widget class。
- 用 `UGameViewportClient::AddViewportWidgetContent` 以高 ZOrder 添加 Slate widget。
- 显示期间阻断输入、提高关卡 streaming 优先级、调整 `FShaderPipelineCache` batch mode、暂停 hitch heartbeat。
- 广播 `OnLoadingScreenVisibilityChangedDelegate`，供音频等系统响应。
- 通过 `ILoadingPercentInterface::OnLoadingPercentChanged` 给 Widget 推送百分比。

项目侧的派生关系：

- `ULoadingScreenManager`：通用插件基类，抽象。
- `UOrionLoadingScreenManager`：宿主 Game 层派生，处理启动前端流程和 shader batch mode。
- `UGameLoadingScreenManager`：蓝图桥接层中的可实例化加载屏 manager。

运行期不要手动创建另一个全局 viewport 加载屏。这样会绕过输入阻断、音频 LoadingScreen mix、PSO batch 切换、进度接口和可见性委托。

### GameUI 加载屏类

`Source/GameUI/LoadingScreen` 提供：

- `UUI_LoadingScreenHost`：默认 loading screen host，继承 `UUserWidget` 并实现 `ILoadingPercentInterface`。构建时会把百分比重置为 `0`，非 Editor 下额外注册输入拦截 preprocessor。
- `ULoadingScreenSubsystem`：`UGameInstanceSubsystem`，保存当前加载屏内部内容 widget class，并广播 `OnLoadingScreenWidgetChanged`。
- `UUI_CompileShadersScreen`：shader 编译 UI 的 C++ 基类。

推荐用法：

- 全局加载屏外壳用 `DefaultGame.ini` 的 `LoadingScreenWidget` 配置。
- 不同模式需要换内容时，让外壳 widget 监听 `ULoadingScreenSubsystem`，切换内部 content widget，而不是改 manager 的主 widget class。
- 进度条、logo 动画、视频播放完成后，必须在合适时机通知 manager `SetIsLoadingWidgetCompleted(true)`。

## 显示判定顺序

`ULoadingScreenManager::CheckForAnyNeedToShowLoadingScreen` 由两部分组成：逻辑阶段进度和关卡包进度。

逻辑阶段由 `ComputeStageProgress` 判断：

1. `CommonLoadingScreen.AlwaysShow` 强制显示。
2. `WorldContext` 不存在。
3. `World` 不存在。
4. `GameState` 还未复制或创建。
5. 正在 `LoadMap`。
6. `TravelURL` 非空。
7. `PendingNetGame` 存在，正在连接服务器。
8. `World` 尚未 `BeginPlay`。
9. 正在 seamless travel。
10. `GameState` 或其组件实现 `ILoadingProcessInterface` 并要求显示。
11. 通过 `RegisterLoadingProcessor` 注册的外部 processor 要求显示。
12. 本地 `PlayerController` 或其组件要求显示。
13. 本地 Pawn 或其组件要求显示。
14. 非分屏下缺少本地 PlayerController，或分屏玩家缺少 PlayerController。

典型项目侧阻塞点：

- `UCoreExperienceManagerComponent::ShouldShowLoadingScreen`：Experience 未到 `Loaded` 前显示。
- `UOrionFrontendStateComponent::ShouldShowLoadingScreen`：前端用户初始化流程未完成前显示，并把当前 ControlFlow step 作为 reason。
- `UOrionPlayerGameplayComponent::ShouldShowLoadingScreen`：玩家 gameplay 初始化未完成前显示。
- 玩法角色或 lobby pawn 可实现接口，等自身初始化完成后放行。

硬要求：

- `ShouldShowLoadingScreen` 返回 true 时必须设置非空 `OutReason`。
- reason 会进入 `LogLoadingScreen`，也是排查加载屏卡住的第一证据。

## 隐藏流程

`ShouldShowLoadingScreen()` 变为 false 后，manager 先执行 `OnLoadingScreenFinished`，但不会立刻移除 Widget。真正隐藏还需要：

```cpp
LoadingScreenManager->SetIsLoadingWidgetCompleted(true);
```

这允许 UI 先播放 logo fade out、转场动画或视频尾段。常见错误是业务加载已经结束，但 Widget 没有设置 completed，导致加载屏永远盖住游戏。

额外 hold：

- `CommonLoadingScreen.HoldLoadingScreenAdditionalSecs` 会在逻辑加载完成后额外保留加载屏，给 texture streaming 留时间。
- hold 期间 manager 会重新允许 world rendering，便于贴图流送。
- Editor 默认不启用 hold，除非 settings 中允许。

## 进度算法

进度来自两个部分：

- `StageProgress`：逻辑阶段进度。
- `LevelPackageProgress`：当前 `LevelScriptActor` 实现 `ILevelLoadingProcessInterface` 时返回的关卡包进度。

`UCommonLoadingScreenSettings` 中的相关字段：

- `StageWeight`
- `LevelPackageWeight`
- `bMonotonicIncrease`
- `MinVisiblePercent`
- `TimerInterval`
- `InterpSpeed`

manager 用权重计算最终进度，再按单调递增、最小可见进度和插值速度处理，最后调用：

```cpp
ILoadingPercentInterface::Execute_OnLoadingPercentChanged(LoadingWidget, DisplayPercent);
```

Widget 要实现 `OnLoadingPercentChanged(float)`，把 `0..1` 转为进度条、文字或动画参数。不要让 Widget 自己猜阶段；阶段和 reason 应由 manager 统一提供。

## 常用接入模板

### 给一个组件添加加载阻塞

适用：玩家资料、Pawn 外观、局内初始化、异步资源、玩法组件激活前需要挡住画面。

```cpp
class UMyGameplayComponent : public UActorComponent, public ILoadingProcessInterface
{
public:
	virtual bool ShouldShowLoadingScreen(FString& OutReason) const override
	{
		if (!bReady)
		{
			OutReason = TEXT("Initializing gameplay component");
			return true;
		}

		return false;
	}

private:
	bool bReady = false;
};
```

放置规则：

- 如果组件挂在 GameState、PlayerController、Pawn 上，manager 会自动扫描。
- 如果对象不在自动扫描列表里，用 `RegisterLoadingProcessor` 或 `ULoadingProcessTask`。
- 玩法专属逻辑优先放 GameFeature 组件或宿主 Game 派生组件，不改 GameCore。

### 用 LoadingProcessTask 包住短期异步流程

适用：一段临时异步操作需要显示加载屏，但不想新增类实现接口。

```cpp
UPROPERTY()
TObjectPtr<ULoadingProcessTask> ActiveLoadingTask;

void UMyObject::StartAsyncWork()
{
	ActiveLoadingTask = ULoadingProcessTask::CreateLoadingScreenProcessTask(this, TEXT("Waiting for async work"));
}

void UMyObject::FinishAsyncWork()
{
	if (ActiveLoadingTask)
	{
		ActiveLoadingTask->Unregister();
		ActiveLoadingTask = nullptr;
	}
}
```

注意：

- 保存强引用，避免任务对象被 GC。
- 完成或取消时只 unregister 一次。
- reason 写清楚业务阶段，便于日志定位。

### 过渡关卡显示包加载进度

`ATransitionLevelScriptActor` 提供参考实现：

1. 在关卡 Level Blueprint / LevelScriptActor 派生类上实现 `ILevelLoadingProcessInterface`。
2. 通过 soft object 指向目标 `UWorld`。
3. `BeginLoadLevel` 发起异步加载。
4. `GetLoadingProgress` 返回 `FStreamableHandle::GetProgress()`，无法计算时返回负数。
5. 包加载完后调用 `ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr`。
6. `OnLevelShown` 后把 `bLevelShown` 置为 true，否则 manager 会认为关卡还没显示完。

GameMode 在 `InitGame` 中发现当前 LevelScriptActor 实现 `ILevelLoadingProcessInterface` 时会让玩家先作为 spectator，避免玩家在过渡加载未完成时提前出生。

### 启动 shader 编译 UI

启动流程在前端组件里：

1. `UOrionLoadingScreenManager::SetIsStartUpLoadingScreen` 启动期把 `FShaderPipelineCache` batch mode 设为 `Background`，防止加载屏视频或 UI 卡顿。
2. `UOrionFrontendStateComponent::FlowStep_TryCompileShaders` 检查 `FShaderPipelineCache::NumPrecompilesRemaining()`。
3. 需要编译时触发 `OnCompileShaders`，通常由 UI 打开 `UUI_CompileShadersScreen`。
4. UI 或蓝图调用 `StartCompileShaders`。
5. manager 切到 `Fast` 并 `ResumeBatching`。
6. manager tick 中 `NumPrecompilesRemaining()==0` 后触发 `OnCompilingShadersFinished`。
7. 前端组件 ticker 计算百分比，回调 `OnCompileShadersPercentChanged`，完成后继续 ControlFlow。

不要在 Widget 里直接管理 `FShaderPipelineCache` batch mode；使用前端组件和 manager 的封装，避免和 PSO/loading screen 性能策略冲突。

### 响应加载屏显示隐藏

使用：

```cpp
LoadingScreenManager->OnLoadingScreenVisibilityChangedDelegate().AddUObject(this, &ThisClass::OnLoadingScreenStatusChanged);
```

当前音频子系统用这个 delegate 激活/反激活 `LoadingScreenControlBusMix`，以遮罩或降低背景音。新增系统副作用也应挂这个 delegate，并在 `Deinitialize` 或对象销毁时 `RemoveAll` / 移除句柄。

## 配置契约

`Config/DefaultGame.ini`：

```ini
[/Script/CommonLoadingScreen.CommonLoadingScreenSettings]
LoadingScreenWidget=/Game/UI/Foundation/LoadingScreen/<WBP_LoadingScreenHost>.<WBP_LoadingScreenHost>_C
ForceTickLoadingScreenEvenInEditor=False
LoadingScreenZOrder=10000
```

可配置字段还包括：

- `HoldLoadingScreenAdditionalSecs`
- `LoadingScreenHeartbeatHangDuration`
- `LogLoadingScreenHeartbeatInterval`
- `ForceTickLoadingScreenEvenInEditor`
- `bMonotonicIncrease`
- `TimerInterval`
- `MinVisiblePercent`
- `InterpSpeed`
- `StageWeight`
- `LevelPackageWeight`

加载屏音频：

```ini
[/Script/GameCore.CoreAudioSettings]
LoadingScreenControlBusMix=/Game/Audio/Modulation/ControlBusMixes/<CBM_LoadingScreenMix>.<CBM_LoadingScreenMix>
```

模块依赖：

- 需要实现 `ILoadingProcessInterface`、`ULoadingProcessTask` 或访问 manager 的模块，在 `*.Build.cs` 添加 `CommonLoadingScreen`。
- UMG Widget 侧还需要已有 UI 模块依赖，例如 `UMG`、`Slate` 或 CommonUI，按目标模块现有规则处理。

资产目录：

- 通用 loading screen Widget 默认放 `Content/UI`。
- 玩法专属 loading UI 放对应 GameFeature 插件 `Content/UI`。
- 加载屏视频源和 `.bk2` runtime 文件放 `Content/Movies`，并继续读取 movie Skill。

## 调试和排错

常用 CVar / 参数：

- `CommonLoadingScreen.AlwaysShow=1`：强制显示。
- `CommonLoadingScreen.LogLoadingScreenReasonEveryFrame=1`：每帧输出显示/隐藏原因。
- `CommonLoadingScreen.HoldLoadingScreenAdditionalSecs=<Seconds>`：调整加载完成后的额外保留时间。
- `-NoLoadingScreen`：非 Shipping 构建禁用运行期加载屏，用于判断是否是加载屏挡住交互。

排查加载屏卡住：

1. 打开 `LogLoadingScreen`，记录当前 reason。
2. 如果 reason 是 Experience，查 ExperienceManager 的 LoadState、GameFeature load、ActionSet 执行是否完成。
3. 如果 reason 是 Frontend Flow，查当前 ControlFlow step 是否调用 `ContinueFlow`。
4. 如果 reason 是 player/pawn initializing，查对应组件是否设置初始化完成。
5. 如果逻辑 reason 已经消失但画面不隐藏，查 Widget 是否调用 `SetIsLoadingWidgetCompleted(true)`。
6. 如果进度不动，查 `StageWeight`、`LevelPackageWeight`、LevelScriptActor 的接口返回和 `OnLoadingPercentChanged` 是否绑定。
7. 如果打包中不显示或资源丢失，查 LoadingScreenWidget 资产是否 cook、视频是否 stage、GameFeature 内容是否被启用。

### 前端地图启动后卡在 LoadingScreen

现象：

- PIE 或 Standalone 启动前端地图后，画面停在 LoadingScreen 或 Message Log 抢焦点，编辑器看起来无法操作。
- `StartPIE` 或日志里出现 `Accessed None trying to read property CallFunc_GetComponentByClass_ReturnValue`，常见触发点是加载 Lobby 背景的 Blueprint 在前端状态组件挂到 GameState 之前调用流程继续。
- 日志出现 `Invalid Primary Asset Id GameLobbyBackground:<Name>` 时，优先怀疑 `PrimaryAssetTypesToScan` 的 `SpecificAssets` 路径和真实资产路径不一致。
- C++ 前端流程日志停在 `Wait For User Initialization`、`Try Show Lobby Background Level` 或类似 ControlFlow step，说明蓝图、动画、媒体播放或 PrimaryAsset 回调没有继续流程。

排查顺序：

1. 用 `CommonLoadingScreen.LogLoadingScreenReasonEveryFrame=1` 先确认卡住 reason；不要只看 UI。
2. 查 `Config/DefaultGame.ini` 中 `GameLobbyBackground` 的 `PrimaryAssetTypesToScan`，确认 `SpecificAssets` 精确指向真实 `UPrimaryDataAsset` 包路径，迁移后常见问题是多一层或少一层目录。
3. 查加载 Lobby 背景的 Blueprint：`Get Game State -> Get Component by Class -> ContinueFlow` 必须有 `IsValid` 保护；组件为空时不要调用 `ContinueFlow`。
4. 查启动 LoadingScreen Widget 的动画或视频结束事件，结束路径必须调用 `OnLoadingScreenLogoFinished()`，并最终让 manager `SetIsLoadingWidgetCompleted(true)`。
5. C++ 前端状态组件可以保留短超时兜底：只在当前 `FControlFlowNode` 仍是等待中的同一步时继续流程，避免迟到的 Blueprint 回调推进后续步骤。

验证：

- 重启编辑器让 AssetManager 重新读取配置后再 PIE；只热重载配置不足以验证 PrimaryAsset 修复。
- `StartPIE` 返回 `{"returnValue":null}`，不是 Blueprint Runtime Error 文本。
- 最新日志中不再出现 `Accessed None`、`Invalid Primary Asset Id GameLobbyBackground` 或兜底 Warning。
- `StopPIE` 后 `IsPIERunning=false`，证明编辑器主循环没有被加载屏或 Message Log 阻塞。

## 验证清单

- `LoadingScreenWidget` 指向可 cook 的 `UUserWidget` 派生蓝图。
- Widget 实现或父类实现 `ILoadingPercentInterface`，进度 `0..1` 显示正确。
- Widget 动画/视频结束后调用 `SetIsLoadingWidgetCompleted(true)`。
- `ShouldShowLoadingScreen` 的每个 true 分支都有非空 reason。
- 临时 `ULoadingProcessTask` 有强引用，并在完成、取消、失败路径 unregister。
- `ILevelLoadingProcessInterface` 的 `IsLevelShown` 最终会返回 true。
- 显示期间输入被阻断，隐藏后输入恢复。
- `OnLoadingScreenVisibilityChangedDelegate` 的订阅在销毁时移除。
- LoadingScreen ControlBusMix 在显示/隐藏时正确激活/反激活。
- Dedicated Server 不创建或依赖加载屏 UI。
- Standalone 或 packaged dev build 验证一次；Editor PIE 不代表 PreLoadScreen 和 PSO 行为完全一致。
