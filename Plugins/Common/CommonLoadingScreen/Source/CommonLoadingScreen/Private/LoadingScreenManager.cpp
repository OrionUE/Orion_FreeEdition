// Copyright Epic Games, Inc. All Rights Reserved.

#include "LoadingScreenManager.h"

#include "HAL/ThreadHeartBeat.h"

#include "Engine/GameInstance.h"
#include "Engine/GameViewportClient.h"
#include "Engine/Engine.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/WorldSettings.h"
#include "Misc/CommandLine.h"
#include "Misc/ConfigCacheIni.h"

#include "LoadingProcessInterface.h"

#include "Framework/Application/IInputProcessor.h"
#include "Framework/Application/SlateApplication.h"
#include "Framework/Application/SlateUser.h"

#include "PreLoadScreen.h"
#include "PreLoadScreenManager.h"

#include "ShaderPipelineCache.h"
#include "CommonLoadingScreenSettings.h"

//@TODO: Used as the placeholder widget in error cases, should probably create a wrapper that at least centers it/etc...
#include "Widgets/Images/SThrobber.h"
#include "Blueprint/UserWidget.h"
#include "Engine/LevelScriptActor.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LoadingScreenManager)

DECLARE_LOG_CATEGORY_EXTERN(LogLoadingScreen, Log, All);
DEFINE_LOG_CATEGORY(LogLoadingScreen);

//@TODO: Why can GetLocalPlayers() have nullptr entries?  Can it really?
//@TODO: Test with PIE mode set to simulate and decide how much (if any) loading screen action should occur
//@TODO: Allow other things implementing ILoadingProcessInterface besides GameState/PlayerController (and owned components) to register as interested parties
//@TODO: ChangeMusicSettings (either here or using the LoadingScreenVisibilityChanged delegate)
//@TODO: Studio analytics (FireEvent_PIEFinishedLoading / tracking PIE startup time for regressions, either here or using the LoadingScreenVisibilityChanged delegate)

// Profiling category for loading screens
CSV_DEFINE_CATEGORY(LoadingScreen, true);

//////////////////////////////////////////////////////////////////////

bool ILoadingProcessInterface::ShouldShowLoadingScreen(const UObject* TestObject, FString& OutReason)
{
	if (TestObject != nullptr)
	{
		if (const ILoadingProcessInterface* LoadObserver = Cast<ILoadingProcessInterface>(TestObject))
		{
			FString ObserverReason;
			if (LoadObserver->ShouldShowLoadingScreen(/*out*/ ObserverReason))
			{
				if (ensureMsgf(!ObserverReason.IsEmpty(), TEXT("%s failed to set a reason why it wants to show the loading screen"), *GetPathNameSafe(TestObject)))
				{
					OutReason = ObserverReason;
				}
				return true;
			}
		}
	}

	return false;
}

//////////////////////////////////////////////////////////////////////

namespace LoadingScreenCVars
{
	// CVars
	static float HoldLoadingScreenAdditionalSecs = 2.0f;
	static FAutoConsoleVariableRef CVarHoldLoadingScreenUpAtLeastThisLongInSecs(
		TEXT("CommonLoadingScreen.HoldLoadingScreenAdditionalSecs"),
		HoldLoadingScreenAdditionalSecs,
		TEXT("How long to hold the loading screen up after other loading finishes (in seconds) to try to give texture streaming a chance to avoid blurriness"),
		ECVF_Default | ECVF_Preview);

	static bool LogLoadingScreenReasonEveryFrame = false;
	static FAutoConsoleVariableRef CVarLogLoadingScreenReasonEveryFrame(
		TEXT("CommonLoadingScreen.LogLoadingScreenReasonEveryFrame"),
		LogLoadingScreenReasonEveryFrame,
		TEXT("When true, the reason the loading screen is shown or hidden will be printed to the log every frame."),
		ECVF_Default);

	static bool ForceLoadingScreenVisible = false;
	static FAutoConsoleVariableRef CVarForceLoadingScreenVisible(
		TEXT("CommonLoadingScreen.AlwaysShow"),
		ForceLoadingScreenVisible,
		TEXT("Force the loading screen to show."),
		ECVF_Default);
}

//////////////////////////////////////////////////////////////////////
// FLoadingScreenInputPreProcessor

// Input processor to throw in when loading screen is shown
// This will capture any inputs, so active menus under the loading screen will not interact
class FLoadingScreenInputPreProcessor : public IInputProcessor
{
public:
	FLoadingScreenInputPreProcessor() { }
	virtual ~FLoadingScreenInputPreProcessor() { }

	bool CanEatInput() const
	{
		return !GIsEditor;
	}

	//~IInputProcess interface
	virtual void Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor) override { }

	virtual bool HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override { return CanEatInput(); }
	virtual bool HandleKeyUpEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override { return CanEatInput(); }
	virtual bool HandleAnalogInputEvent(FSlateApplication& SlateApp, const FAnalogInputEvent& InAnalogInputEvent) override { return CanEatInput(); }
	virtual bool HandleMouseMoveEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override { return CanEatInput(); }
	virtual bool HandleMouseButtonDownEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override { return CanEatInput(); }
	virtual bool HandleMouseButtonUpEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override { return CanEatInput(); }
	virtual bool HandleMouseButtonDoubleClickEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override { return CanEatInput(); }
	virtual bool HandleMouseWheelOrGestureEvent(FSlateApplication& SlateApp, const FPointerEvent& InWheelEvent, const FPointerEvent* InGestureEvent) override { return CanEatInput(); }
	virtual bool HandleMotionDetectedEvent(FSlateApplication& SlateApp, const FMotionEvent& MotionEvent) override { return CanEatInput(); }
	//~End of IInputProcess interface
};

//////////////////////////////////////////////////////////////////////
// ULoadingScreenManager

void ULoadingScreenManager::Initialize(FSubsystemCollectionBase& Collection)
{
	FCoreUObjectDelegates::PreLoadMapWithContext.AddUObject(this, &ThisClass::HandlePreLoadMap);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &ThisClass::HandlePostLoadMap);

	const UGameInstance* LocalGameInstance = GetGameInstance();
	check(LocalGameInstance);

	SetIsStartUpLoadingScreen();

	FModuleManager::Get().UnloadModule("StreamingPauseRendering");
}

void ULoadingScreenManager::Deinitialize()
{
	StopBlockingInput();

	RemoveWidgetFromViewport();

	FCoreUObjectDelegates::PreLoadMap.RemoveAll(this);
	FCoreUObjectDelegates::PostLoadMapWithWorld.RemoveAll(this);

	SetTickableTickType(ETickableTickType::Never);
}

bool ULoadingScreenManager::ShouldCreateSubsystem(UObject* Outer) const
{
	// Only clients have loading screens
	const UGameInstance* GameInstance = CastChecked<UGameInstance>(Outer);
	const bool bIsServerWorld = GameInstance->IsDedicatedServerInstance();	
	return !bIsServerWorld;
}

void ULoadingScreenManager::Tick(float DeltaTime)
{
	UpdateLoadingScreen(DeltaTime);

	if (bCompilingShaders && FShaderPipelineCache::NumPrecompilesRemaining() == 0)
	{
		if (OnCompilingShadersFinished.IsBound())
			OnCompilingShadersFinished.Execute();

		bCompilingShaders = false;
	}

	TimeUntilNextLogHeartbeatSeconds = FMath::Max(TimeUntilNextLogHeartbeatSeconds - DeltaTime, 0.0);
}

ETickableTickType ULoadingScreenManager::GetTickableTickType() const
{
	if (IsTemplate())
	{
		return ETickableTickType::Never;
	}
	return ETickableTickType::Conditional;
}

bool ULoadingScreenManager::IsTickable() const
{
	// Don't tick if we don't have a game viewport client, this catches cases that ShouldCreateSubsystem does not
	UGameInstance* GameInstance = GetGameInstance();
	return (GameInstance && GameInstance->GetGameViewportClient());
}

TStatId ULoadingScreenManager::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(ULoadingScreenManager, STATGROUP_Tickables);
}

UWorld* ULoadingScreenManager::GetTickableGameObjectWorld() const
{
	return GetGameInstance()->GetWorld();
}

void ULoadingScreenManager::RegisterLoadingProcessor(TScriptInterface<ILoadingProcessInterface> Interface)
{
	ExternalLoadingProcessors.Add(Interface.GetObject());
}

void ULoadingScreenManager::UnregisterLoadingProcessor(TScriptInterface<ILoadingProcessInterface> Interface)
{
	ExternalLoadingProcessors.Remove(Interface.GetObject());
}

void ULoadingScreenManager::StartCompileShaders()
{
	FShaderPipelineCache::SetBatchMode(FShaderPipelineCache::BatchMode::Fast);
	FShaderPipelineCache::ResumeBatching();

	bCompilingShaders = true;
}

void ULoadingScreenManager::HandlePreLoadMap(const FWorldContext& WorldContext, const FString& MapName)
{
	if (WorldContext.OwningGameInstance == GetGameInstance())
	{
		bCurrentlyInLoadMap = true;

		// Update the loading screen immediately if the engine is initialized
		if (GEngine->IsInitialized())
		{
			UpdateLoadingScreen();
		}
	}
}

void ULoadingScreenManager::HandlePostLoadMap(UWorld* World)
{
	if ((World != nullptr) && (World->GetGameInstance() == GetGameInstance()))
	{
		bCurrentlyInLoadMap = false;
	}
}

void ULoadingScreenManager::UpdateLoadingScreen(float DeltaTime)
{
	bool bLogLoadingScreenStatus = LoadingScreenCVars::LogLoadingScreenReasonEveryFrame;

	if (ShouldShowLoadingScreen(DeltaTime))
	{
		const UCommonLoadingScreenSettings* Settings = GetDefault<UCommonLoadingScreenSettings>();
		
		// If we don't make it to the specified checkpoint in the given time will trigger the hang detector, so we can better determine where progress stalled.
 		FThreadHeartBeat::Get().MonitorCheckpointStart(GetFName(), Settings->LoadingScreenHeartbeatHangDuration);

		bNotifyLoadingFinished = false;
		ShowLoadingScreen();

 		if ((Settings->LogLoadingScreenHeartbeatInterval > 0.0f) && (TimeUntilNextLogHeartbeatSeconds <= 0.0))
 		{
			bLogLoadingScreenStatus = true;
 			TimeUntilNextLogHeartbeatSeconds = Settings->LogLoadingScreenHeartbeatInterval;
 		}
	}
	else
	{
		const UCommonLoadingScreenSettings* Settings = GetDefault<UCommonLoadingScreenSettings>();
		if (bCurrentlyShowingLoadingScreen && !bLoadingWidgetCompleted)
		{
			UpdateLoadingProgress(1.0f, DeltaTime, Settings->CompletionInterpSpeed);
		}

		if (!bNotifyLoadingFinished)
		{
			bNotifyLoadingFinished = true;

			if (OnLoadingScreenFinished.IsBound())
				OnLoadingScreenFinished.Execute();
		}

		if (bLoadingWidgetCompleted && IsLoadingProgressReadyToDismiss(DeltaTime))	// 当LoadingWidget播放完成才隐藏UI
		{
			HideLoadingScreen();
 
			FThreadHeartBeat::Get().MonitorCheckpointEnd(GetFName());
		}
	}

	if (bLogLoadingScreenStatus)
	{
		UE_LOG(LogLoadingScreen, Log, TEXT("Loading screen showing: %d. Reason: %s"), bCurrentlyShowingLoadingScreen ? 1 : 0, *DebugReasonForShowingOrHidingLoadingScreen);
	}
}

bool ULoadingScreenManager::ShouldShowLoadingScreen(float DeltaTime)
{
	const UCommonLoadingScreenSettings* Settings = GetDefault<UCommonLoadingScreenSettings>();

	// Check debugging commands that force the state one way or another
#if !UE_BUILD_SHIPPING
	static bool bCmdLineNoLoadingScreen = FParse::Param(FCommandLine::Get(), TEXT("NoLoadingScreen"));
	if (bCmdLineNoLoadingScreen)
	{
		DebugReasonForShowingOrHidingLoadingScreen = FString(TEXT("CommandLine has 'NoLoadingScreen'"));
		return false;
	}
#endif

	// Can't show a loading screen if there's no game viewport
	UGameInstance* LocalGameInstance = GetGameInstance();
	if (LocalGameInstance->GetGameViewportClient() == nullptr)
	{
		return false;
	}

	// Check for a need to show the loading screen
	const bool bNeedToShowLoadingScreen = CheckForAnyNeedToShowLoadingScreen(DeltaTime);

	// Keep the loading screen up a bit longer if desired
	bool bWantToForceShowLoadingScreen = false;
	if (bNeedToShowLoadingScreen)
	{
		// Still need to show it
		TimeLoadingScreenLastDismissed = -1.0;
	}
	else
	{
		// Don't *need* to show the screen anymore, but might still want to for a bit
		const double CurrentTime = FPlatformTime::Seconds();
		const bool bCanHoldLoadingScreen = (!GIsEditor || Settings->HoldLoadingScreenAdditionalSecsEvenInEditor);
		const double HoldLoadingScreenAdditionalSecs = bCanHoldLoadingScreen ? LoadingScreenCVars::HoldLoadingScreenAdditionalSecs : 0.0;

		if (TimeLoadingScreenLastDismissed < 0.0)
		{
			TimeLoadingScreenLastDismissed = CurrentTime;
		}
		const double TimeSinceScreenDismissed = CurrentTime - TimeLoadingScreenLastDismissed;

		// hold for an extra X seconds, to cover up streaming
		if ((HoldLoadingScreenAdditionalSecs > 0.0) && (TimeSinceScreenDismissed < HoldLoadingScreenAdditionalSecs))
		{
			UpdateLoadingProgress(1.0f, DeltaTime, Settings->CompletionInterpSpeed);

			// Make sure we're rendering the world at this point, so that textures will actually stream in
			//@TODO: If bNeedToShowLoadingScreen bounces back true during this window, we won't turn this off again...
			UGameViewportClient* GameViewportClient = GetGameInstance()->GetGameViewportClient();
			GameViewportClient->bDisableWorldRendering = false;

			DebugReasonForShowingOrHidingLoadingScreen = FString::Printf(TEXT("Keeping loading screen up for an additional %.2f seconds to allow texture streaming"), HoldLoadingScreenAdditionalSecs);
			bWantToForceShowLoadingScreen = true;
		}
	}

	return bNeedToShowLoadingScreen || bWantToForceShowLoadingScreen;
}

bool ULoadingScreenManager::IsShowingInitialLoadingScreen() const
{
	FPreLoadScreenManager* PreLoadScreenManager = FPreLoadScreenManager::Get();
	return (PreLoadScreenManager != nullptr) && PreLoadScreenManager->HasValidActivePreLoadScreen();
}

void ULoadingScreenManager::ShowLoadingScreen()
{
	if (bCurrentlyShowingLoadingScreen)
	{
		return;
	}

	// Unable to show loading screen if the engine is still loading with its loading screen.
	if (FPreLoadScreenManager::Get() && FPreLoadScreenManager::Get()->HasActivePreLoadScreenType(EPreLoadScreenTypes::EngineLoadingScreen))
	{
		return;
	}

	TimeLoadingScreenShown = FPlatformTime::Seconds();
	ResetLoadingProgress();

	bCurrentlyShowingLoadingScreen = true;
	LoadingPercentInterfaces.Reset();

	CSV_EVENT(LoadingScreen, TEXT("Show"));

	const UCommonLoadingScreenSettings* Settings = GetDefault<UCommonLoadingScreenSettings>();
	FLoadingScreenCursorPositionSnapshot CursorPositionBeforeShow;
	const bool bShouldRestoreCursorPosition = CaptureCursorPositionForRestore(CursorPositionBeforeShow);

	if (IsShowingInitialLoadingScreen())
	{
		UE_LOG(LogLoadingScreen, Log, TEXT("Showing loading screen when 'IsShowingInitialLoadingScreen()' is true."));
		UE_LOG(LogLoadingScreen, Log, TEXT("%s"), *DebugReasonForShowingOrHidingLoadingScreen);
	}
	else
	{
		UE_LOG(LogLoadingScreen, Log, TEXT("Showing loading screen when 'IsShowingInitialLoadingScreen()' is false."));
		UE_LOG(LogLoadingScreen, Log, TEXT("%s"), *DebugReasonForShowingOrHidingLoadingScreen);

		UGameInstance* LocalGameInstance = GetGameInstance();

		// Eat input while the loading screen is displayed
		StartBlockingInput();

		LoadingScreenVisibilityChanged.Broadcast(/*bIsVisible=*/ true);

		// Create the loading screen widget
		TSubclassOf<UUserWidget> LoadingScreenWidgetClass = Settings->LoadingScreenWidget.TryLoadClass<UUserWidget>();
		UGameViewportClient* GameViewportClient = LocalGameInstance->GetGameViewportClient();

		if (GameViewportClient->bEnablePlayersSplitRT)
		{
			for (ULocalPlayer* Player : LocalGameInstance->GetLocalPlayers())
			{
				if (Player)
				{
					TSharedPtr<SWidget> PlayerWidget;

					if (UUserWidget* UserWidget = UUserWidget::CreateWidgetInstance(*LocalGameInstance, LoadingScreenWidgetClass, NAME_None))
					{
						PlayerWidget = UserWidget->TakeWidget();
						RegisterLoadingPercentInterface(UserWidget);
					}
					else
					{
						UE_LOG(LogLoadingScreen, Error, TEXT("Failed to load the loading screen widget %s, falling back to placeholder."), *Settings->LoadingScreenWidget.ToString());
						PlayerWidget = SNew(SThrobber);
					}

					PlayersLoadingScreenWidgets.Add(Player, PlayerWidget);
					GameViewportClient->AddViewportWidgetForPlayer(Player, PlayerWidget.ToSharedRef(), Settings->LoadingScreenZOrder);
				}
			}
		}
		else
		{
			if (UUserWidget* UserWidget = UUserWidget::CreateWidgetInstance(*LocalGameInstance, LoadingScreenWidgetClass, NAME_None))
			{
				LoadingScreenWidget = UserWidget->TakeWidget();
				RegisterLoadingPercentInterface(UserWidget);
			}
			else
			{
				UE_LOG(LogLoadingScreen, Error, TEXT("Failed to load the loading screen widget %s, falling back to placeholder."), *Settings->LoadingScreenWidget.ToString());
				LoadingScreenWidget = SNew(SThrobber);
			}

			// Add to the viewport at a high ZOrder to make sure it is on top of most things
			GameViewportClient->AddViewportWidgetContent(LoadingScreenWidget.ToSharedRef(), Settings->LoadingScreenZOrder);
		}

		ChangePerformanceSettings(/*bEnableLoadingScreen=*/ true);

		if (!GIsEditor || Settings->ForceTickLoadingScreenEvenInEditor)
		{
			// Tick Slate to make sure the loading screen is displayed immediately
			FSlateApplication::Get().Tick();
		}

		if (bShouldRestoreCursorPosition)
		{
			RestoreCursorPosition(CursorPositionBeforeShow);
			RestoreCursorPositionNextTick(CursorPositionBeforeShow);
		}
	}
}

void ULoadingScreenManager::HideLoadingScreen()
{
	if (!bCurrentlyShowingLoadingScreen)
	{
		return;
	}

	FLoadingScreenCursorPositionSnapshot CursorPositionBeforeHide;
	const bool bShouldRestoreCursorPosition = CaptureCursorPositionForRestore(CursorPositionBeforeHide);

	StopBlockingInput();

	if (IsShowingInitialLoadingScreen())
	{
		UE_LOG(LogLoadingScreen, Log, TEXT("Hiding loading screen when 'IsShowingInitialLoadingScreen()' is true."));
		UE_LOG(LogLoadingScreen, Log, TEXT("%s"), *DebugReasonForShowingOrHidingLoadingScreen);
	}
	else
	{
		UE_LOG(LogLoadingScreen, Log, TEXT("Hiding loading screen when 'IsShowingInitialLoadingScreen()' is false."));
		UE_LOG(LogLoadingScreen, Log, TEXT("%s"), *DebugReasonForShowingOrHidingLoadingScreen);

		UE_LOG(LogLoadingScreen, Log, TEXT("Garbage Collecting before dropping load screen"));
		GEngine->ForceGarbageCollection(true);

		RemoveWidgetFromViewport();
	
		ChangePerformanceSettings(/*bEnableLoadingScreen=*/ false);

		// Let observers know that the loading screen is done
		LoadingScreenVisibilityChanged.Broadcast(/*bIsVisible=*/ false);
	}

	CSV_EVENT(LoadingScreen, TEXT("Hide"));

	const double LoadingScreenDuration = FPlatformTime::Seconds() - TimeLoadingScreenShown;
	UE_LOG(LogLoadingScreen, Log, TEXT("LoadingScreen was visible for %.2fs"), LoadingScreenDuration);

	bCurrentlyShowingLoadingScreen = false;
	ResetLoadingProgress();

	if (bShouldRestoreCursorPosition)
	{
		RestoreCursorPosition(CursorPositionBeforeHide);
		RestoreCursorPositionNextTick(CursorPositionBeforeHide);
	}
}

void ULoadingScreenManager::RemoveWidgetFromViewport()
{
	UGameInstance* LocalGameInstance = GetGameInstance();
	if (LoadingScreenWidget.IsValid())
	{
		if (UGameViewportClient* GameViewportClient = LocalGameInstance->GetGameViewportClient())
		{
			GameViewportClient->RemoveViewportWidgetContent(LoadingScreenWidget.ToSharedRef());
		}
		LoadingScreenWidget.Reset();
	}

	if (!PlayersLoadingScreenWidgets.IsEmpty())
	{
		if (UGameViewportClient* GameViewportClient = LocalGameInstance->GetGameViewportClient())
		{
			for (const TPair<TWeakObjectPtr<ULocalPlayer>, TSharedPtr<SWidget>>& PlayerLoadingScreenWidget : PlayersLoadingScreenWidgets)
			{
				if (ULocalPlayer* Player = PlayerLoadingScreenWidget.Key.Get())
				{
					if (PlayerLoadingScreenWidget.Value.IsValid())
					{
						GameViewportClient->RemoveViewportWidgetForPlayer(Player, PlayerLoadingScreenWidget.Value.ToSharedRef());
					}
				}
			}
		}

		PlayersLoadingScreenWidgets.Reset();
	}

	LoadingPercentInterfaces.Reset();
}

void ULoadingScreenManager::StartBlockingInput()
{
	if (!InputPreProcessor.IsValid())
	{
		InputPreProcessor = MakeShareable<FLoadingScreenInputPreProcessor>(new FLoadingScreenInputPreProcessor());
		FSlateApplication::Get().RegisterInputPreProcessor(InputPreProcessor, 0);
	}
}

void ULoadingScreenManager::StopBlockingInput()
{
	if (InputPreProcessor.IsValid())
	{
		FSlateApplication::Get().UnregisterInputPreProcessor(InputPreProcessor);
		InputPreProcessor.Reset();
	}
}

void ULoadingScreenManager::ChangePerformanceSettings(bool bEnabingLoadingScreen)
{
	UGameInstance* LocalGameInstance = GetGameInstance();
	UGameViewportClient* GameViewportClient = LocalGameInstance->GetGameViewportClient();

	if (!bStartUpLoadingScreen)
	{
		FShaderPipelineCache::SetBatchMode(bEnabingLoadingScreen ? FShaderPipelineCache::BatchMode::Fast : FShaderPipelineCache::BatchMode::Background);

		// Don't bother drawing the 3D world while we're loading
		// 如果bDisableWorldRendering设置为false，视频纹理流送则不会起效。如果加载界面要使用视频，则不要设置为false
		GameViewportClient->bDisableWorldRendering = bEnabingLoadingScreen;
	}
	
	// Make sure to prioritize streaming in levels if the loading screen is up
	if (UWorld* ViewportWorld = GameViewportClient->GetWorld())
	{
		if (AWorldSettings* WorldSettings = ViewportWorld->GetWorldSettings(false, false))
		{
			WorldSettings->bHighPriorityLoadingLocal = bEnabingLoadingScreen;
		}
	}

	if (bEnabingLoadingScreen)
	{
		// Set a new hang detector timeout multiplier when the loading screen is visible.
		double HangDurationMultiplier;
		if (!GConfig || !GConfig->GetDouble(TEXT("Core.System"), TEXT("LoadingScreenHangDurationMultiplier"), /*out*/ HangDurationMultiplier, GEngineIni))
		{
			HangDurationMultiplier = 1.0;
		}
		FThreadHeartBeat::Get().SetDurationMultiplier(HangDurationMultiplier);

		// Do not report hitches while the loading screen is up
		FGameThreadHitchHeartBeat::Get().SuspendHeartBeat();
	}
	else
	{
		// Restore the hang detector timeout when we hide the loading screen
		FThreadHeartBeat::Get().SetDurationMultiplier(1.0);

		// Resume reporting hitches now that the loading screen is down
		FGameThreadHitchHeartBeat::Get().ResumeHeartBeat();
	}
}

bool ULoadingScreenManager::CaptureCursorPositionForRestore(FLoadingScreenCursorPositionSnapshot& OutCursorPosition) const
{
	UGameInstance* LocalGameInstance = GetGameInstance();

	if (FSlateApplication::IsInitialized())
	{
		if (ULocalPlayer* LocalPlayer = LocalGameInstance ? LocalGameInstance->GetFirstGamePlayer() : nullptr)
		{
			if (TSharedPtr<FSlateUser> SlateUser = LocalPlayer->GetSlateUser())
			{
				OutCursorPosition.AbsolutePosition = SlateUser->GetCursorPosition();
				OutCursorPosition.bHasAbsolutePosition = true;
			}
		}

		if (!OutCursorPosition.bHasAbsolutePosition)
		{
			OutCursorPosition.AbsolutePosition = FSlateApplication::Get().GetCursorPos();
			OutCursorPosition.bHasAbsolutePosition = true;
		}
	}

	if (APlayerController* PlayerController = LocalGameInstance ? LocalGameInstance->GetFirstLocalPlayerController() : nullptr)
	{
		if (PlayerController->ShouldShowMouseCursor())
		{
			float CursorX = 0.0f;
			float CursorY = 0.0f;
			if (PlayerController->GetMousePosition(CursorX, CursorY))
			{
				OutCursorPosition.ViewportPosition = FIntPoint(FMath::RoundToInt(CursorX), FMath::RoundToInt(CursorY));
				OutCursorPosition.bHasViewportPosition = true;
			}
		}
	}

	return OutCursorPosition.bHasAbsolutePosition || OutCursorPosition.bHasViewportPosition;
}

void ULoadingScreenManager::RestoreCursorPosition(const FLoadingScreenCursorPositionSnapshot& CursorPosition)
{
	UGameInstance* LocalGameInstance = GetGameInstance();

	bool bRestoredViewportPosition = false;
	if (CursorPosition.bHasViewportPosition)
	{
		if (APlayerController* PlayerController = LocalGameInstance ? LocalGameInstance->GetFirstLocalPlayerController() : nullptr)
		{
			if (PlayerController->ShouldShowMouseCursor())
			{
				PlayerController->SetMouseLocation(CursorPosition.ViewportPosition.X, CursorPosition.ViewportPosition.Y);
				bRestoredViewportPosition = true;
			}
		}
	}

	if (!bRestoredViewportPosition && CursorPosition.bHasAbsolutePosition && FSlateApplication::IsInitialized())
	{
		if (ULocalPlayer* LocalPlayer = LocalGameInstance ? LocalGameInstance->GetFirstGamePlayer() : nullptr)
		{
			if (TSharedPtr<FSlateUser> SlateUser = LocalPlayer->GetSlateUser())
			{
				SlateUser->SetCursorPosition(CursorPosition.AbsolutePosition);
				return;
			}
		}

		FSlateApplication::Get().SetCursorPos(CursorPosition.AbsolutePosition);
	}
}

void ULoadingScreenManager::RestoreCursorPositionNextTick(const FLoadingScreenCursorPositionSnapshot& CursorPosition)
{
	if (!FSlateApplication::IsInitialized())
	{
		return;
	}

	constexpr int32 NumCursorRestorePostSlateTicks = 3;
	TSharedRef<int32> RemainingRestoreTicks = MakeShared<int32>(NumCursorRestorePostSlateTicks);
	TSharedRef<FDelegateHandle> DelegateHandle = MakeShared<FDelegateHandle>();
	TWeakObjectPtr<ULoadingScreenManager> WeakThis(this);

	*DelegateHandle = FSlateApplication::Get().OnPostTick().AddLambda([WeakThis, CursorPosition, RemainingRestoreTicks, DelegateHandle](float DeltaTime)
	{
		if (ULoadingScreenManager* LoadingScreenManager = WeakThis.Get())
		{
			LoadingScreenManager->RestoreCursorPosition(CursorPosition);
		}

		--(*RemainingRestoreTicks);
		if (*RemainingRestoreTicks <= 0 || !WeakThis.IsValid())
		{
			if (FSlateApplication::IsInitialized())
			{
				FSlateApplication::Get().OnPostTick().Remove(*DelegateHandle);
			}
		}
	});
}

void ULoadingScreenManager::RegisterLoadingPercentInterface(UUserWidget* UserWidget)
{
	if (UserWidget && UserWidget->GetClass()->ImplementsInterface(ULoadingPercentInterface::StaticClass()))
	{
		LoadingPercentInterfaces.Add(UserWidget);
		ILoadingPercentInterface::Execute_OnLoadingPercentChanged(UserWidget, DisplayPercent);
	}
}

void ULoadingScreenManager::BroadcastLoadingPercent()
{
	for (int32 Index = LoadingPercentInterfaces.Num() - 1; Index >= 0; --Index)
	{
		UObject* LoadingPercentObject = LoadingPercentInterfaces[Index].GetObject();
		if (!LoadingPercentObject)
		{
			LoadingPercentInterfaces.RemoveAtSwap(Index);
			continue;
		}

		ILoadingPercentInterface::Execute_OnLoadingPercentChanged(LoadingPercentObject, DisplayPercent);
	}
}

void ULoadingScreenManager::ResetLoadingProgress()
{
	bLoadingWidgetCompleted = false;
	DisplayPercent = 0.0f;
	LastStageProgress = 0.0f;
	LastLevelPackageProgress = 0.0f;
	TimeLoadingProgressCompleted = -1.0;
}

void ULoadingScreenManager::UpdateLoadingProgress(float TargetProgress, float DeltaTime, float InterpSpeed)
{
	const UCommonLoadingScreenSettings* Settings = GetDefault<UCommonLoadingScreenSettings>();
	const float EffectiveDeltaTime = GetEffectiveProgressDeltaTime(DeltaTime);

	TargetProgress = FMath::Clamp(TargetProgress, 0.0f, 1.0f);
	if (TargetProgress < 1.0f)
	{
		TargetProgress = FMath::Max(TargetProgress, Settings->MinVisiblePercent);
	}

	if (Settings->bMonotonicIncrease)
	{
		TargetProgress = FMath::Max(TargetProgress, DisplayPercent);
	}

	if (InterpSpeed <= 0.0f)
	{
		DisplayPercent = TargetProgress;
	}
	else
	{
		DisplayPercent = FMath::FInterpTo(DisplayPercent, TargetProgress, EffectiveDeltaTime, InterpSpeed);
	}

	DisplayPercent = FMath::Clamp(DisplayPercent, 0.0f, 1.0f);
	if (FMath::IsNearlyEqual(DisplayPercent, TargetProgress, KINDA_SMALL_NUMBER))
	{
		DisplayPercent = TargetProgress;
	}

	BroadcastLoadingPercent();
}

float ULoadingScreenManager::ComputeVisualProgressTarget(float DeterminateProgress, bool bHasReliableProgress) const
{
	const UCommonLoadingScreenSettings* Settings = GetDefault<UCommonLoadingScreenSettings>();
	DeterminateProgress = FMath::Clamp(DeterminateProgress, 0.0f, 1.0f);

	if (!Settings->bUseIndeterminateProgress || bHasReliableProgress)
	{
		return DeterminateProgress;
	}

	const float StartPercent = FMath::Clamp(Settings->IndeterminateProgressStartPercent, 0.0f, 1.0f);
	const float TargetPercent = FMath::Clamp(FMath::Max(Settings->IndeterminateProgressTargetPercent, StartPercent), 0.0f, 1.0f);
	const float SecondsToTarget = FMath::Max(Settings->IndeterminateProgressSecondsToTarget, 0.1f);
	const double ProgressStartTime = (TimeLoadingScreenShown > 0.0) ? TimeLoadingScreenShown : FPlatformTime::Seconds();
	const float ElapsedTime = FMath::Max(static_cast<float>(FPlatformTime::Seconds() - ProgressStartTime), 0.0f);
	const float ProgressAlpha = 1.0f - FMath::Exp(-ElapsedTime / SecondsToTarget);
	const float IndeterminateProgress = FMath::Lerp(StartPercent, TargetPercent, ProgressAlpha);

	return FMath::Max(DeterminateProgress, IndeterminateProgress);
}

bool ULoadingScreenManager::IsLoadingProgressReadyToDismiss(float DeltaTime)
{
	const UCommonLoadingScreenSettings* Settings = GetDefault<UCommonLoadingScreenSettings>();
	UpdateLoadingProgress(1.0f, DeltaTime, Settings->CompletionInterpSpeed);

	if (DisplayPercent < Settings->CompletionVisibleThreshold)
	{
		TimeLoadingProgressCompleted = -1.0;
		return false;
	}

	if (TimeLoadingProgressCompleted < 0.0)
	{
		TimeLoadingProgressCompleted = FPlatformTime::Seconds();
	}

	return (FPlatformTime::Seconds() - TimeLoadingProgressCompleted) >= Settings->CompletionHoldSeconds;
}

float ULoadingScreenManager::GetEffectiveProgressDeltaTime(float DeltaTime) const
{
	const UCommonLoadingScreenSettings* Settings = GetDefault<UCommonLoadingScreenSettings>();
	return (DeltaTime > 0.0f) ? DeltaTime : FMath::Max(Settings->TimerInterval, 0.0f);
}

bool ULoadingScreenManager::CheckForAnyNeedToShowLoadingScreen(float DeltaTime)
{
	const UCommonLoadingScreenSettings* Settings = GetDefault<UCommonLoadingScreenSettings>();

	DebugReasonForShowingOrHidingLoadingScreen = TEXT("Reason for Showing/Hiding LoadingScreen is unknown!");

	const UGameInstance* LocalGameInstance = GetGameInstance();
	const FWorldContext* Context = LocalGameInstance ? LocalGameInstance->GetWorldContext() : nullptr;
	UWorld* World = Context ? Context->World() : nullptr;

	FString DebugReason;

	// 计算状态加载进度
	bool bStageNeedLoading = false;
	const float StageProgress = ComputeStageProgress(LocalGameInstance, Context, World, bStageNeedLoading, DebugReason);

	// 计算关卡加载进度
	bool bLevelNeedLoading = false;
	bool bLevelHasReliableProgress = false;
	const float LevelPackageProgress = ComputeLevelPackageProgress(LocalGameInstance, World, bLevelNeedLoading, bLevelHasReliableProgress);

	if (!(bStageNeedLoading || bLevelNeedLoading))
	{
		return false;
	}

	LastStageProgress = StageProgress;
	LastLevelPackageProgress = LevelPackageProgress;

	// StageProgress is a state checkpoint for diagnostics; it is not a real percent.
	const bool bUseLevelPackageProgress = bLevelNeedLoading && bLevelHasReliableProgress && (Settings->LevelPackageWeight > 0.0f);
	const float DeterminateProgress = bUseLevelPackageProgress ? LevelPackageProgress : 0.0f;
	const float VisualProgressTarget = ComputeVisualProgressTarget(DeterminateProgress, bUseLevelPackageProgress);

	// 进度平滑插值过渡
	UpdateLoadingProgress(VisualProgressTarget, DeltaTime, Settings->InterpSpeed);

	if (DebugReason.IsEmpty() && bLevelNeedLoading)
	{
		DebugReason = TEXT("Waiting for level package loading");
	}

	DebugReasonForShowingOrHidingLoadingScreen = DebugReason;

	return true;
}

float ULoadingScreenManager::ComputeStageProgress(const UGameInstance* GameInstance, const FWorldContext* Context, const UWorld* World, bool& bOutNeedLoading, FString& OutLoadingMessage) const
{
	bOutNeedLoading = false;
	OutLoadingMessage = TEXT("");
	float CurrentProgress = 0.f;

	auto SetNewStageProgress = [&bOutNeedLoading, &OutLoadingMessage, &CurrentProgress](float InNewProgress, const TCHAR* LoadingMessage)
	{
		bOutNeedLoading = true;
		OutLoadingMessage = LoadingMessage;
		CurrentProgress = FMath::Clamp(FMath::Max(InNewProgress, CurrentProgress), 0.f, 1.f);
	};

	if (LoadingScreenCVars::ForceLoadingScreenVisible)
	{
		SetNewStageProgress(0.f, TEXT("CommonLoadingScreen.AlwaysShow is true"));
		return CurrentProgress;
	}

	// 10%: 无WorldContext
	if (Context == nullptr)
	{
		SetNewStageProgress(0.10f, TEXT("The game instance has a null WorldContext"));
		return CurrentProgress;
	}

	// 15%: 无World
	if (World == nullptr)
	{
		SetNewStageProgress(0.15f, TEXT("We have no world (FWorldContext::World() is null)"));
		return CurrentProgress;
	}

	// 30%: GameState未同步
	AGameStateBase* GameState = World->GetGameState<AGameStateBase>();
	if (GameState == nullptr)
	{
		SetNewStageProgress(0.30f, TEXT("GameState hasn't yet replicated (it's null)"));
		return CurrentProgress;
	}

	// 60%: 处于LoadMap
	if (bCurrentlyInLoadMap)
	{
		SetNewStageProgress(0.60f, TEXT("bCurrentlyInLoadMap is true"));
		return CurrentProgress;
	}

	// 65%: TravelURL为空
	if (!Context->TravelURL.IsEmpty())
	{
		SetNewStageProgress(0.65f, TEXT("We have pending travel (the TravelURL is not empty)"));
		return CurrentProgress;
	}

	// 70%: 正在连接服务器
	if (Context->PendingNetGame != nullptr)
	{
		SetNewStageProgress(0.70f, TEXT("We are connecting to another server (PendingNetGame != nullptr)"));
		return CurrentProgress;
	}

	// 75%: World未BeginPlay
	if (!World->HasBegunPlay())
	{
		SetNewStageProgress(0.75f, TEXT("World hasn't begun play"));
		return CurrentProgress;
	}

	// 80%: 无缝切换进行中
	if (World->IsInSeamlessTravel())
	{
		SetNewStageProgress(0.80f, TEXT("We are in seamless travel"));
		return CurrentProgress;
	}

	// 82%: GameState
	if (GameState)
	{
		FString Reason;
		if (ILoadingProcessInterface::ShouldShowLoadingScreen(GameState, Reason))
		{
			SetNewStageProgress(0.82f, *Reason);
			return CurrentProgress;
		}

		// 84%: GameState组件
		for (UActorComponent* Comp : GameState->GetComponents())
		{
			FString CompReason;
			if (ILoadingProcessInterface::ShouldShowLoadingScreen(Comp, CompReason))
			{
				SetNewStageProgress(0.84f, *CompReason);
				return CurrentProgress;
			}
		}
	}

	// 86%: 外部加载处理
	for (const TWeakInterfacePtr<ILoadingProcessInterface>& Processor : ExternalLoadingProcessors)
	{
		FString ProcReason;
		if (ILoadingProcessInterface::ShouldShowLoadingScreen(Processor.GetObject(), ProcReason))
		{
			SetNewStageProgress(0.86f, *ProcReason);
			return CurrentProgress;
		}
	}

	bool bFoundAnyLocalPC = false;
	bool bMissingAnyLocalPC = false;

	if (GameInstance)
	{
		for (ULocalPlayer* LP : GameInstance->GetLocalPlayers())
		{
			if (!LP)
				continue;

			if (APlayerController* PC = LP->PlayerController)
			{
				bFoundAnyLocalPC = true;

				// 88%: PC
				FString PCReason;
				if (ILoadingProcessInterface::ShouldShowLoadingScreen(PC, PCReason))
				{
					SetNewStageProgress(0.88f, *PCReason);
					return CurrentProgress;
				}

				// 90%: PC组件
				for (UActorComponent* Comp : PC->GetComponents())
				{
					FString CompReason;
					if (ILoadingProcessInterface::ShouldShowLoadingScreen(Comp, CompReason))
					{
						SetNewStageProgress(0.90f, *CompReason);
						return CurrentProgress;
					}
				}

				if (APawn* Pawn = PC->GetPawn())
				{
					// 92%: Pawn
					FString PawnReason;
					if (ILoadingProcessInterface::ShouldShowLoadingScreen(Pawn, PawnReason))
					{
						SetNewStageProgress(0.92f, *PawnReason);
						return CurrentProgress;
					}

					// 94%: Pawn组件
					for (UActorComponent* Comp : Pawn->GetComponents())
					{
						FString CompReason;
						if (ILoadingProcessInterface::ShouldShowLoadingScreen(Comp, CompReason))
						{
							SetNewStageProgress(0.94f, *CompReason);
							return CurrentProgress;
						}
					}
				}
			}
			else
			{
				bMissingAnyLocalPC = true;
			}
		}
	}

	if (GameInstance)
	{
		if (UGameViewportClient* GVC = GameInstance->GetGameViewportClient())
		{
			const bool bIsInSplitscreen = (GVC->GetCurrentSplitscreenConfiguration() != ESplitScreenType::None);

			// 96%: 非分屏且一个本地PC都没有
			if (!bIsInSplitscreen && !bFoundAnyLocalPC)
			{
				SetNewStageProgress(0.96f, TEXT("Need at least one local player controller"));
				return CurrentProgress;
			}

			// 98%: 分屏且有缺失的本地PC
			if (bIsInSplitscreen && bMissingAnyLocalPC)
			{
				SetNewStageProgress(0.98f, TEXT("At least one missing local player controller in splitscreen"));
				return CurrentProgress;
			}
		}
	}

	CurrentProgress = 1.f;
	return CurrentProgress;
}

float ULoadingScreenManager::ComputeLevelPackageProgress(const UGameInstance* GameInstance, const UWorld* World, bool& bOutNeedLoading, bool& bOutHasReliableProgress) const
{
	bOutNeedLoading = false;
	bOutHasReliableProgress = false;
	float CurrentProgress = 0.f;

	if (World)
	{
		if (ALevelScriptActor* LevelScript = World->GetLevelScriptActor())
		{
			if (const ILevelLoadingProcessInterface* LevelLoadingProcess = Cast<ILevelLoadingProcessInterface>(LevelScript))
			{
				if (LevelLoadingProcess->IsLevelShown())
				{
					bOutNeedLoading = false;
					CurrentProgress = 1.f;
					return CurrentProgress;
				}

				bOutNeedLoading = true;

				if (LevelLoadingProcess->IsLoadingLevelPackageFinished())
				{
					bOutHasReliableProgress = true;
					CurrentProgress = 1.f;
					return CurrentProgress;
				}

				const float NewProgress = LevelLoadingProcess->GetLoadingProgress();
				if (NewProgress >= 0.f)
				{
					bOutHasReliableProgress = true;
					CurrentProgress = FMath::Max(CurrentProgress, NewProgress);
				}
			}
			else
			{
				bOutNeedLoading = false;
				CurrentProgress = 1.f;
				return CurrentProgress;
			}
		}
		else
		{
			bOutNeedLoading = false;
			CurrentProgress = 1.f;
			return CurrentProgress;
		}
	}
	else
	{
		bOutNeedLoading = true;
	}

	return FMath::Clamp(CurrentProgress, 0.f, 1.f);
}
