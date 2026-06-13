// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Subsystems/GameInstanceSubsystem.h"
#include "Tickable.h"
#include "UObject/WeakInterfacePtr.h"

#include "LoadingScreenManager.generated.h"

template <typename InterfaceType> class TScriptInterface;

class FSubsystemCollectionBase;
class IInputProcessor;
class ILoadingProcessInterface;
class ILoadingPercentInterface;
class SWidget;
class UObject;
class UWorld;
struct FFrame;
struct FWorldContext;

DECLARE_DELEGATE(FOnCompilingShadersFinished);
DECLARE_DELEGATE(FOnLoadingScreenFinished);

/**
 * Handles showing/hiding the loading screen
 */
UCLASS(Abstract)
class COMMONLOADINGSCREEN_API ULoadingScreenManager : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:
	//~USubsystem interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	//~End of USubsystem interface

	//~FTickableObjectBase interface
	virtual void Tick(float DeltaTime) override;
	virtual ETickableTickType GetTickableTickType() const override;
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;
	virtual UWorld* GetTickableGameObjectWorld() const override;
	//~End of FTickableObjectBase interface

	UFUNCTION(BlueprintCallable, Category=LoadingScreen)
	FString GetDebugReasonForShowingOrHidingLoadingScreen() const
	{
		return DebugReasonForShowingOrHidingLoadingScreen;
	}

	/** Returns True when the loading screen is currently being shown */
	bool GetLoadingScreenDisplayStatus() const
	{
		return bCurrentlyShowingLoadingScreen;
	}

	/** Called when the loading screen visibility changes  */
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnLoadingScreenVisibilityChangedDelegate, bool);
	FORCEINLINE FOnLoadingScreenVisibilityChangedDelegate& OnLoadingScreenVisibilityChangedDelegate() { return LoadingScreenVisibilityChanged; }

	void RegisterLoadingProcessor(TScriptInterface<ILoadingProcessInterface> Interface);
	void UnregisterLoadingProcessor(TScriptInterface<ILoadingProcessInterface> Interface);

public:
	/** 开始编译着色器 */
	void StartCompileShaders();
	
private:
	void HandlePreLoadMap(const FWorldContext& WorldContext, const FString& MapName);
	void HandlePostLoadMap(UWorld* World);

	/** Determines if we should show or hide the loading screen. Called every frame. */
	void UpdateLoadingScreen();
	
	/** Returns true if we want to be showing the loading screen (if we need to or are artificially forcing it on for other reasons). */
	bool ShouldShowLoadingScreen();

	/** Returns true if we are in the initial loading flow before this screen should be used */
	bool IsShowingInitialLoadingScreen() const;

	/** Shows the loading screen. Sets up the loading screen widget on the viewport */
	void ShowLoadingScreen();

	/** Hides the loading screen. The loading screen widget will be destroyed */
	void HideLoadingScreen();

	/** Removes the widget from the viewport */
	void RemoveWidgetFromViewport();

	/** Prevents input from being used in-game while the loading screen is visible */
	void StartBlockingInput();

	/** Resumes in-game input, if blocking */
	void StopBlockingInput();

	void ChangePerformanceSettings(bool bEnabingLoadingScreen);

protected:
	/** Returns true if we need to be showing the loading screen. */
	virtual bool CheckForAnyNeedToShowLoadingScreen();

	virtual void SetIsStartUpLoadingScreen() { }

protected:
	/** 计算状态加载进度 */
	float ComputeStageProgress(const UGameInstance* GameInstance, const FWorldContext* Context, const UWorld* World, bool& bOutNeedLoading, FString& OutLoadingMessage) const;

	/** 计算关卡加载进度 */
	float ComputeLevelPackageProgress(const UGameInstance* GameInstance, const UWorld* World, bool& bOutNeedLoading) const;

	float QueryAsyncPercentage(const FName& PackageName) const;

public:
	UFUNCTION(BlueprintCallable, Category=LoadingScreen)
	FORCEINLINE void SetIsLoadingWidgetCompleted(bool bCompleted) { bLoadingWidgetCompleted = bCompleted; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool GetIsStartUpLoadingScreen() const { return bStartUpLoadingScreen; }

	FORCEINLINE void SetIsStartUpLoadingScreen(bool bStartUp) { bStartUpLoadingScreen = bStartUp; }

private:
	/** Delegate broadcast when the loading screen visibility changes */
	FOnLoadingScreenVisibilityChangedDelegate LoadingScreenVisibilityChanged;

	/** A reference to the loading screen widget we are displaying (if any) */
	TSharedPtr<SWidget> LoadingScreenWidget;

	TWeakInterfacePtr<ILoadingPercentInterface> LoadingPercentInterface;

	/** Input processor to eat all input while the loading screen is shown */
	TSharedPtr<IInputProcessor> InputPreProcessor;

	/** External loading processors, components maybe actors that delay the loading. */
	TArray<TWeakInterfacePtr<ILoadingProcessInterface>> ExternalLoadingProcessors;

	/** The reason why the loading screen is up (or not) */
	FString DebugReasonForShowingOrHidingLoadingScreen;

	/** The time when we started showing the loading screen */
	double TimeLoadingScreenShown = 0.0;

	/** The time the loading screen most recently wanted to be dismissed (might still be up due to a min display duration requirement) **/
	double TimeLoadingScreenLastDismissed = -1.0;

	/** The time until the next log for why the loading screen is still up */
	double TimeUntilNextLogHeartbeatSeconds = 0.0;

	/** True when we are between PreLoadMap and PostLoadMap */
	bool bCurrentlyInLoadMap = false;

	/** True when the loading screen is currently being shown */
	bool bCurrentlyShowingLoadingScreen = false;

protected:
	/** 是否通知了加载界面已完成 */
	bool bNotifyLoadingFinished = false;

	/** 是否是开始游戏时的加载画面 */
	bool bStartUpLoadingScreen = true;

	/** 加载界面是否播放完成 */
	bool bLoadingWidgetCompleted = false;

	/** 是否正在编译着色器 */
	bool bCompilingShaders = false;

	/** 当前显示的进度（0.0 ~ 1.0） */
	float DisplayPercent = 0.f;

	/** 上一次状态加载进度 */
	float LastStageProgress = 0.f;

	/** 上一次关卡加载进度 */
	float LastLevelPackageProgress = 0.f;

public:
	FOnCompilingShadersFinished OnCompilingShadersFinished;
	FOnLoadingScreenFinished OnLoadingScreenFinished;
};
