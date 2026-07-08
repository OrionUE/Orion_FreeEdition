/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "ControlFlowNode.h"
#include "LoadingProcessInterface.h"
#include "Components/GameStateComponent.h"
#include "UObject/SoftObjectPtr.h"

#include "OrionFrontendStateComponent.generated.h"

enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;

class ULoadingScreenManager;
class UCommonUserInfo;
class UCoreExperienceDefinition;
class UCommonActivatableWidget;
class UUI_CompileShadersScreen;
class UOrionFlowAction;
struct FStreamableHandle;

DECLARE_DYNAMIC_DELEGATE(FOnCompileShaders);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCompileShadersPercentChanged, float, Percent);
DECLARE_DYNAMIC_DELEGATE(FOnCompileShadersFinished);
DECLARE_DYNAMIC_DELEGATE(FOnRunBenchmark);

/**
 * 开始菜单界面状态组件
 */
UCLASS(Abstract)
class ORIONGAME_API UOrionFrontendStateComponent : public UGameStateComponent, public ILoadingProcessInterface
{
	GENERATED_BODY()

public:
	UOrionFrontendStateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~UActorComponent interface
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~End of UActorComponent interface

	//~ILoadingProcessInterface interface
	virtual bool ShouldShowLoadingScreen(FString& OutReason) const override;
	//~End of ILoadingProcessInterface

private:
	void OnExperienceLoaded(const UCoreExperienceDefinition* Experience);

	UFUNCTION()
	void OnUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);

	void FlowStep_WaitForUserInitialization(FControlFlowNodeRef SubFlow);
	void FlowStep_TryCompileShaders(FControlFlowNodeRef SubFlow);
	void FlowStep_TryRunBenchmarkAtStartup(FControlFlowNodeRef SubFlow);
	void FlowStep_TryShowLobbyBackgroundLevel(FControlFlowNodeRef SubFlow);
	void FlowStep_WaitForLoadingFinish(FControlFlowNodeRef SubFlow);
	void FlowStep_TryPreloadStartupPopups(FControlFlowNodeRef SubFlow);
	void FlowStep_TryShowPressStartScreen(FControlFlowNodeRef SubFlow);
	void FlowStep_TryJoinRequestedSession(FControlFlowNodeRef SubFlow);
	void FlowStep_TryListenSessionInvite(FControlFlowNodeRef SubFlow);
	void FlowStep_TryShowMainScreen(FControlFlowNodeRef SubFlow);
	void FlowStep_TryEvaluateStartupPopups(FControlFlowNodeRef SubFlow);
	void HandleStartupPopupFlowActionClassesLoaded();
	void BuildStartupPopupFlowActions();
	void PreloadNextStartupPopupFlowAction();
	void ExecuteNextStartupPopupFlowAction();

	void CompleteStartupLoadingScreen();
	bool ShouldRunInitialGameStartupFlowSteps() const;

public:
	UFUNCTION(BlueprintCallable)
	void ContinueFlow();

	UFUNCTION(BlueprintCallable)
	void OnLoadingScreenLogoFinished();

	UFUNCTION(BlueprintCallable)
	void StartCompileShaders();

	UFUNCTION(BlueprintCallable)
	void RunBenchmark();

	UFUNCTION(BlueprintCallable)
	void BindOnCompileShaders(const FOnCompileShaders& Callback);

	UFUNCTION(BlueprintCallable)
	void BindOnCompileShadersPercentChanged(const FOnCompileShadersPercentChanged& Callback);

	UFUNCTION(BlueprintCallable)
	void BindOnCompileShadersFinished(const FOnCompileShadersFinished& Callback);

	UFUNCTION(BlueprintCallable)
	void BindOnRunBenchmark(const FOnRunBenchmark& Callback);

	FORCEINLINE bool GetIsUserInitializationFinished() const { return bUserInitializationFinished; }

protected:
	bool CheckIfCompileShaders();

	UFUNCTION(BlueprintImplementableEvent)
	void ShowLobbyBackgroundLevel();

private:
	UPROPERTY(EditAnywhere, Category="UI")
	TSubclassOf<UCommonActivatableWidget> PressStartScreenClass;

	UPROPERTY(EditAnywhere, Category="UI")
	TSoftClassPtr<UCommonActivatableWidget> MainScreenClass;

	UPROPERTY(EditAnywhere, Category="UI|Startup|Popup")
	TArray<TSoftClassPtr<UOrionFlowAction>> StartupPopupFlowActionClasses;

	TSharedPtr<FControlFlow> FrontendFlow;

	FControlFlowNodePtr InProgressPressStartScreen;

	FControlFlowNodePtr CurrentSubFlow;

	FControlFlowNodePtr StartupPopupPreloadSubFlow;

	FControlFlowNodePtr StartupPopupSubFlow;

	TSharedPtr<FStreamableHandle> StartupPopupFlowActionClassesLoadHandle;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UOrionFlowAction>> ActiveStartupPopupFlowActions;

	FDelegateHandle OnJoinSessionCompleteEventHandle;

	// 用户初始化是否完成
	bool bUserInitializationFinished = false;

	// 加载是否完成
	bool bLoadingScreenFinished = false;

	// 着色器编译是否完成
	bool bCompileShadersFinished = true;

	// 启动 LoadingScreen Logo 是否仍在等待回调
	bool bWaitingForLoadingScreenLogoFinished = false;

	// 启动 LoadingScreen 是否已经排队完成，避免重复注册下一帧隐藏
	bool bStartupLoadingScreenCompletionQueued = false;

	// 本轮前端流程是否来自进程首次启动
	bool bRunInitialGameStartupFlowSteps = false;

	// 启动弹窗 Flow Action 是否已在 LoadingScreen 阶段完成预热
	bool bStartupPopupFlowActionsPreloaded = false;

	int32 TotalShadersPrecompiles;

	int32 ActiveStartupPopupFlowActionPreloadIndex = INDEX_NONE;

	int32 ActiveStartupPopupFlowActionIndex = INDEX_NONE;

	TWeakObjectPtr<ULoadingScreenManager> LoadingScreenManager;

	FOnCompileShaders OnCompileShaders;
	FOnCompileShadersPercentChanged OnCompileShadersPercentChanged;
	FOnCompileShadersFinished OnCompileShadersFinished;
	FOnRunBenchmark OnRunBenchmark;
};
