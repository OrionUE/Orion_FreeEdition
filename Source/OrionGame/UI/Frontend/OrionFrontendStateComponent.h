/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "ControlFlowNode.h"
#include "LoadingProcessInterface.h"
#include "Components/GameStateComponent.h"

#include "OrionFrontendStateComponent.generated.h"

enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;

class ULoadingScreenManager;
class UCommonUserInfo;
class UCoreExperienceDefinition;
class UCommonActivatableWidget;
class UUI_CompileShadersScreen;

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
	void FlowStep_TryShowPressStartScreen(FControlFlowNodeRef SubFlow);
	void FlowStep_TryJoinRequestedSession(FControlFlowNodeRef SubFlow);
	void FlowStep_TryListenSessionInvite(FControlFlowNodeRef SubFlow);
	void FlowStep_TryShowMainScreen(FControlFlowNodeRef SubFlow);

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

	TSharedPtr<FControlFlow> FrontendFlow;

	FControlFlowNodePtr InProgressPressStartScreen;

	FControlFlowNodePtr CurrentSubFlow;

	FDelegateHandle OnJoinSessionCompleteEventHandle;

	// 用户初始化是否完成
	bool bUserInitializationFinished = false;

	// 加载是否完成
	bool bLoadingScreenFinished = false;

	// 着色器编译是否完成
	bool bCompileShadersFinished = true;

	// 启动 LoadingScreen Logo 是否仍在等待回调
	bool bWaitingForLoadingScreenLogoFinished = false;

	int32 TotalShadersPrecompiles;

	TWeakObjectPtr<ULoadingScreenManager> LoadingScreenManager;

	FOnCompileShaders OnCompileShaders;
	FOnCompileShadersPercentChanged OnCompileShadersPercentChanged;
	FOnCompileShadersFinished OnCompileShadersFinished;
	FOnRunBenchmark OnRunBenchmark;
};
