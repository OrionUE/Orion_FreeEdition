/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionFrontendStateComponent.h"

#include "CommonGameInstance.h"
#include "CommonSessionSubsystem.h"
#include "ControlFlowManager.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "HAL/FileManager.h"
#include "LoadingScreenManager.h"
#include "Misc/App.h"
#include "Misc/CommandLine.h"
#include "Misc/ConfigCacheIni.h"
#include "Misc/Paths.h"
#include "Misc/Parse.h"
#include "OrionLogChannels.h"
#include "PrimaryGameLayout.h"
#include "GameModes/OrionExperienceManagerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NativeGameplayTags.h"
#include "RHIShaderPlatform.h"
#include "RHIStrings.h"
#include "ShaderPipelineCache.h"
#include "Player/OrionUserSubsystem.h"
#include "Settings/User/OrionSettingsLocal.h"
#include "System/OrionSystemStatics.h"
#include "System/Flow/OrionFlowAction.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionFrontendStateComponent)

namespace FrontendTags
{
	UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_PLATFORM_TRAIT_SINGLEONLINEUSER, "Platform.Trait.SingleOnlineUser");
	UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_UI_LAYER_MENU, "UI.Layer.Menu");
}

namespace FrontendLoadingFlow
{
	constexpr float StartupLoadingFlowLogoWarningDelaySeconds = 5.0f;
	constexpr float LobbyBackgroundFlowFallbackDelaySeconds = 10.0f;
	const TCHAR* StartupPSOCacheSection = TEXT("Orion.StartupPSO");
	const TCHAR* StartupPSOCacheCompletedStampKey = TEXT("CompletedCacheStamp");

	bool ShouldIgnoreStartupPSOCacheCompletionMarker()
	{
		return FParse::Param(FCommandLine::Get(), TEXT("clearPSODriverCache")) ||
			FParse::Param(FCommandLine::Get(), TEXT("deleteuserpsocache")) ||
			FParse::Param(FCommandLine::Get(), TEXT("logpso"));
	}

	bool TryGetStartupPSOCacheStamp(FString& OutStamp)
	{
		if (!FPlatformProperties::RequiresCookedData())
		{
			return false;
		}

		const FName ShaderFormat = LegacyShaderPlatformToShaderFormat(GMaxRHIShaderPlatform);
		const FString CachePath = FPaths::ProjectContentDir() / TEXT("PipelineCaches") / ANSI_TO_TCHAR(FPlatformProperties::IniPlatformName()) /
			FString::Printf(TEXT("%s_%s.stable.upipelinecache"), FApp::GetProjectName(), *ShaderFormat.ToString());
		const int64 CacheSize = IFileManager::Get().FileSize(*CachePath);
		if (CacheSize < 0)
		{
			return false;
		}

		const FDateTime CacheTimestamp = IFileManager::Get().GetTimeStamp(*CachePath);
		OutStamp = FString::Printf(TEXT("GameVersion=%d;Platform=%s;ShaderFormat=%s;Size=%lld;TimestampTicks=%lld"),
			FShaderPipelineCache::GetGameVersionForPSOFileCache(),
			ANSI_TO_TCHAR(FPlatformProperties::IniPlatformName()),
			*ShaderFormat.ToString(),
			CacheSize,
			CacheTimestamp.GetTicks());
		return true;
	}

	bool IsStartupPSOCacheMarkedComplete()
	{
		if (!GConfig || ShouldIgnoreStartupPSOCacheCompletionMarker())
		{
			return false;
		}

		FString CurrentStamp;
		if (!TryGetStartupPSOCacheStamp(CurrentStamp))
		{
			return false;
		}

		FString CompletedStamp;
		return GConfig->GetString(StartupPSOCacheSection, StartupPSOCacheCompletedStampKey, CompletedStamp, GGameUserSettingsIni) && CompletedStamp == CurrentStamp;
	}

	void MarkStartupPSOCacheComplete()
	{
		if (!GConfig)
		{
			return;
		}

		FString CurrentStamp;
		if (!TryGetStartupPSOCacheStamp(CurrentStamp))
		{
			return;
		}

		GConfig->SetString(StartupPSOCacheSection, StartupPSOCacheCompletedStampKey, *CurrentStamp, GGameUserSettingsIni);
		GConfig->Flush(false, GGameUserSettingsIni);
		UE_LOG(LogOrion, Display, TEXT("Marked startup PSO cache complete: %s"), *CurrentStamp);
	}
}

UOrionFrontendStateComponent::UOrionFrontendStateComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UOrionFrontendStateComponent::BeginPlay()
{
	Super::BeginPlay();

	// Listen for the experience load to complete
	AGameStateBase* GameState = GetGameStateChecked<AGameStateBase>();
	UOrionExperienceManagerComponent* ExperienceComponent = GameState->FindComponentByClass<UOrionExperienceManagerComponent>();
	check(ExperienceComponent);

	ExperienceComponent->CallOrRegister_OnExperienceLoaded_HighPriority(FOnCoreExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));

	const UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(this);
	LoadingScreenManager = GameInstance->GetSubsystem<ULoadingScreenManager>();
	bRunInitialGameStartupFlowSteps = LoadingScreenManager.IsValid() && LoadingScreenManager->GetIsStartUpLoadingScreen();

	if (LoadingScreenManager.IsValid())
	{
		LoadingScreenManager->OnLoadingScreenFinished.BindLambda([this]
		{
			bLoadingScreenFinished = true;
		});
	}
}

void UOrionFrontendStateComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (StartupPopupFlowActionClassesLoadHandle.IsValid())
	{
		StartupPopupFlowActionClassesLoadHandle->CancelHandle();
		StartupPopupFlowActionClassesLoadHandle.Reset();
	}

	StartupPopupSubFlow.Reset();
	StartupPopupPreloadSubFlow.Reset();
	ActiveStartupPopupFlowActions.Reset();
	ActiveStartupPopupFlowActionPreloadIndex = INDEX_NONE;
	ActiveStartupPopupFlowActionIndex = INDEX_NONE;
	bStartupPopupFlowActionsPreloaded = false;

	Super::EndPlay(EndPlayReason);
}

bool UOrionFrontendStateComponent::ShouldShowLoadingScreen(FString& OutReason) const
{
	if (!bUserInitializationFinished)
	{
		OutReason = TEXT("Frontend Flow Pending...");

		if (FrontendFlow.IsValid())
		{
			const TOptional<FString> StepDebugName = FrontendFlow->GetCurrentStepDebugName();
			if (StepDebugName.IsSet())
			{
				OutReason = StepDebugName.GetValue();
			}
		}

		return true;
	}

	return false;
}

void UOrionFrontendStateComponent::OnExperienceLoaded(const UCoreExperienceDefinition* Experience)
{
	FControlFlow& Flow = FControlFlowStatics::Create(this, TEXT("FrontendFlow"))
		.QueueStep(TEXT("Wait For User Initialization"), this, &ThisClass::FlowStep_WaitForUserInitialization)
		.QueueStep(TEXT("Try Compile Shaders"), this, &ThisClass::FlowStep_TryCompileShaders)
		.QueueStep(TEXT("Try Run Benchmark At Startup"), this, &ThisClass::FlowStep_TryRunBenchmarkAtStartup)
		.QueueStep(TEXT("Try Show Lobby Background Level"), this, &ThisClass::FlowStep_TryShowLobbyBackgroundLevel)
		.QueueStep(TEXT("Wait For Loading Finish"), this, &ThisClass::FlowStep_WaitForLoadingFinish)
		.QueueStep(TEXT("Try Preload Startup Popups"), this, &ThisClass::FlowStep_TryPreloadStartupPopups)
		.QueueStep(TEXT("Try Show Press Start Screen"), this, &ThisClass::FlowStep_TryShowPressStartScreen)
		.QueueStep(TEXT("Try Join Requested Session"), this, &ThisClass::FlowStep_TryJoinRequestedSession)
		.QueueStep(TEXT("Try Listen Session Invite"), this, &ThisClass::FlowStep_TryListenSessionInvite)
		.QueueStep(TEXT("Try Show Main Screen"), this, &ThisClass::FlowStep_TryShowMainScreen)
		.QueueStep(TEXT("Try Evaluate Startup Popups"), this, &ThisClass::FlowStep_TryEvaluateStartupPopups);

	Flow.ExecuteFlow();

	FrontendFlow = Flow.AsShared();
}

void UOrionFrontendStateComponent::OnUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext)
{
	FControlFlowNodePtr FlowToContinue = InProgressPressStartScreen;
	UOrionUserSubsystem& UserSubsystem = UOrionUserSubsystem::Get();

	if (ensure(FlowToContinue.IsValid()))
	{
		UserSubsystem.OnUserInitializeComplete.RemoveDynamic(this, &ThisClass::OnUserInitialized);
		InProgressPressStartScreen.Reset();

		if (bSuccess)
		{
			// On success continue flow normally
			FlowToContinue->ContinueFlow();
		}
		else
		{
			// TODO: Just continue for now, could go to some sort of error screen
			FlowToContinue->ContinueFlow();
		}
	}
}

void UOrionFrontendStateComponent::FlowStep_WaitForUserInitialization(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	// If this was a hard disconnect, explicitly destroy all user and session state
	// TODO: Refactor the engine disconnect flow so it is more explicit about why it happened
	bool bWasHardDisconnect = false;
	AGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AGameModeBase>();
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(this);

	if (ensure(GameMode) && UGameplayStatics::HasOption(GameMode->OptionsString, TEXT("closed")))
	{
		bWasHardDisconnect = true;
	}

	// Only reset users on hard disconnect
	UOrionUserSubsystem& UserSubsystem = UOrionUserSubsystem::Get();
	if (bWasHardDisconnect)
	{
		UserSubsystem.ResetUserState();
	}

	// Always reset sessions
	UCommonSessionSubsystem* SessionSubsystem = GameInstance->GetSubsystem<UCommonSessionSubsystem>();
	if (ensure(SessionSubsystem))
	{
		SessionSubsystem->CleanUpSessions();
	}

	bUserInitializationFinished = true;

	const bool bIsStartUpLoadingScreen = LoadingScreenManager.IsValid() && LoadingScreenManager->GetIsStartUpLoadingScreen();
	if (!bIsStartUpLoadingScreen)
	{
		ContinueFlow();
		return;
	}

	bWaitingForLoadingScreenLogoFinished = true;

	const FControlFlowNodePtr PendingSubFlow = SubFlow;
	FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this, PendingSubFlow](float DeltaTime)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_UOrionFrontendStateComponent_WaitForUserInitializationLogoWarning);

		if ((CurrentSubFlow == PendingSubFlow) && bWaitingForLoadingScreenLogoFinished)
		{
			UE_LOG(LogOrion, Warning, TEXT("Startup loading screen did not report logo completion within %.1f seconds. Keeping frontend flow blocked until OnLoadingScreenLogoFinished is called."),
				FrontendLoadingFlow::StartupLoadingFlowLogoWarningDelaySeconds);
		}

		return false;
	}), FrontendLoadingFlow::StartupLoadingFlowLogoWarningDelaySeconds);
}

void UOrionFrontendStateComponent::FlowStep_TryCompileShaders(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	if (CheckIfCompileShaders())	// 检查是否需要编译着色器
	{
		// 显示编译着色器UI
		if (OnCompileShaders.IsBound())
		{
			OnCompileShaders.Execute();
		}
		else
		{
			UE_LOG(LogOrion, Warning, TEXT("Startup PSO compilation is required but no compile shader UI callback is bound. Compiling without UI."));
			StartCompileShaders();
		}
	}
	else
	{
		SubFlow->ContinueFlow();
	}
}

void UOrionFrontendStateComponent::FlowStep_TryRunBenchmarkAtStartup(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	if (UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get())
	{
		if (!SettingsLocal->ShouldRunAutoBenchmarkAtStartup())
		{
			SubFlow->ContinueFlow();
			return;
		}
	}

	if (OnRunBenchmark.IsBound())
	{
		OnRunBenchmark.Execute();
	}
	else
	{
		SubFlow->ContinueFlow();
		return;
	}
}

void UOrionFrontendStateComponent::FlowStep_TryShowLobbyBackgroundLevel(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	ShowLobbyBackgroundLevel();

	const FControlFlowNodePtr PendingSubFlow = SubFlow;
	FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this, PendingSubFlow](float DeltaTime)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_UOrionFrontendStateComponent_ShowLobbyBackgroundFallback);

		if (CurrentSubFlow == PendingSubFlow)
		{
			UE_LOG(LogOrion, Warning, TEXT("Lobby background did not continue frontend flow within %.1f seconds. Continuing frontend flow."),
				FrontendLoadingFlow::LobbyBackgroundFlowFallbackDelaySeconds);

			ContinueFlow();
		}

		return false;
	}), FrontendLoadingFlow::LobbyBackgroundFlowFallbackDelaySeconds);
}

void UOrionFrontendStateComponent::FlowStep_WaitForLoadingFinish(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this](float DeltaTime)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_UOrionFrontendStateComponent_FlowStep_WaitForLoadingFinish);

		if (bLoadingScreenFinished)
		{
			ContinueFlow();
			return false;
		}
		return true;
	}));
}

void UOrionFrontendStateComponent::FlowStep_TryPreloadStartupPopups(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	if (!ShouldRunInitialGameStartupFlowSteps() || StartupPopupFlowActionClasses.IsEmpty())
	{
		SubFlow->ContinueFlow();
		return;
	}

	StartupPopupPreloadSubFlow = SubFlow;
	StartupPopupSubFlow.Reset();
	ActiveStartupPopupFlowActions.Reset();
	ActiveStartupPopupFlowActionPreloadIndex = INDEX_NONE;
	ActiveStartupPopupFlowActionIndex = INDEX_NONE;
	bStartupPopupFlowActionsPreloaded = false;

	TArray<FSoftObjectPath> ActionClassPaths;
	for (const TSoftClassPtr<UOrionFlowAction>& ActionClass : StartupPopupFlowActionClasses)
	{
		if (!ActionClass.IsNull() && !ActionClass.Get())
		{
			ActionClassPaths.AddUnique(ActionClass.ToSoftObjectPath());
		}
	}

	if (ActionClassPaths.IsEmpty())
	{
		HandleStartupPopupFlowActionClassesLoaded();
		return;
	}

	if (StartupPopupFlowActionClassesLoadHandle.IsValid())
	{
		StartupPopupFlowActionClassesLoadHandle->CancelHandle();
		StartupPopupFlowActionClassesLoadHandle.Reset();
	}

	StartupPopupFlowActionClassesLoadHandle = UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		ActionClassPaths,
		FStreamableDelegate::CreateUObject(this, &ThisClass::HandleStartupPopupFlowActionClassesLoaded),
		FStreamableManager::AsyncLoadHighPriority);
}

void UOrionFrontendStateComponent::FlowStep_TryShowPressStartScreen(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	UOrionUserSubsystem& UserSubsystem = UOrionUserSubsystem::Get();

	UserSubsystem.InitializeUser();

	if (LoadingScreenManager.IsValid() && !LoadingScreenManager->GetIsStartUpLoadingScreen())
	{
		SubFlow->ContinueFlow();
		return;
	}

	// Check to see if the first player is already logged in, if they are, we can skip the press start screen.
	if (const UCommonUserInfo* FirstUser = UserSubsystem.GetUserInfoForLocalPlayerIndex(0))
	{
		if (FirstUser->InitializationState == ECommonUserInitializationState::LoggedInLocalOnly ||
			FirstUser->InitializationState == ECommonUserInitializationState::LoggedInOnline)
		{
			SubFlow->ContinueFlow();
			return;
		}
	}

	// Add the Press Start screen, move to the next flow when it deactivates.
	if (UPrimaryGameLayout* RootLayout = UPrimaryGameLayout::GetPrimaryGameLayoutForPrimaryPlayer(this))
	{
		if (UCommonActivatableWidget* PressStartScreen = RootLayout->PushWidgetToLayerStack<UCommonActivatableWidget>(FrontendTags::TAG_UI_LAYER_MENU, PressStartScreenClass))
		{
			CompleteStartupLoadingScreen();
		}
		else
		{
			UE_LOG(LogOrion, Warning, TEXT("Failed to push Press Start screen. Keeping startup loading screen visible."));
		}
	}
	else
	{
		UE_LOG(LogOrion, Warning, TEXT("Primary game layout is unavailable. Keeping startup loading screen visible."));
	}
}

void UOrionFrontendStateComponent::FlowStep_TryJoinRequestedSession(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	if (!ShouldRunInitialGameStartupFlowSteps())
	{
		SubFlow->ContinueFlow();
		return;
	}

	UCommonGameInstance* GameInstance = Cast<UCommonGameInstance>(UGameplayStatics::GetGameInstance(this));
	if (GameInstance->GetRequestedSession() != nullptr && GameInstance->CanJoinRequestedSession())
	{
		UCommonSessionSubsystem* SessionSubsystem = GameInstance->GetSubsystem<UCommonSessionSubsystem>();
		if (ensure(SessionSubsystem))
		{
			// Bind to session join completion to continue or cancel the flow
			// TODO: Need to ensure that after session join completes, the server travel completes.
			OnJoinSessionCompleteEventHandle = SessionSubsystem->OnJoinSessionCompleteEvent.AddWeakLambda(this, [this, SubFlow, SessionSubsystem](const FOnlineResultInformation& Result)
			{
				// Unbind delegate. SessionSubsystem is the object triggering this event, so it must still be valid.
				SessionSubsystem->OnJoinSessionCompleteEvent.Remove(OnJoinSessionCompleteEventHandle);
				OnJoinSessionCompleteEventHandle.Reset();

				if (Result.bWasSuccessful)
				{
					// No longer transitioning to the main menu
					SubFlow->CancelFlow();
					return;
				}
				else
				{
					// Proceed to the main menu
					SubFlow->ContinueFlow();
					return;
				}
			});
			GameInstance->JoinRequestedSession();
			return;
		}
	}

	SubFlow->ContinueFlow();
}

void UOrionFrontendStateComponent::FlowStep_TryListenSessionInvite(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	UOrionSystemStatics::ActivateListenSessionInvite(this);

	SubFlow->ContinueFlow();
}

void UOrionFrontendStateComponent::FlowStep_TryShowMainScreen(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	if (UPrimaryGameLayout* RootLayout = UPrimaryGameLayout::GetPrimaryGameLayoutForPrimaryPlayer(this))
	{
		constexpr bool bSuspendInputUntilComplete = true;
		RootLayout->PushWidgetToLayerStackAsync<UCommonActivatableWidget>(FrontendTags::TAG_UI_LAYER_MENU, bSuspendInputUntilComplete, MainScreenClass,
			[this, SubFlow](EAsyncWidgetLayerState State, UCommonActivatableWidget* Screen) {
			switch (State)
			{
			case EAsyncWidgetLayerState::AfterPush:
				CompleteStartupLoadingScreen();
				SubFlow->ContinueFlow();
				return;
			case EAsyncWidgetLayerState::Canceled:
				SubFlow->ContinueFlow();
				return;
			default:
				return;
			}
		});
	}

	if (LoadingScreenManager.IsValid())
	{
		LoadingScreenManager->OnLoadingScreenFinished.Unbind();
	}
}

void UOrionFrontendStateComponent::FlowStep_TryEvaluateStartupPopups(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	if (!ShouldRunInitialGameStartupFlowSteps())
	{
		SubFlow->ContinueFlow();
		return;
	}

	StartupPopupSubFlow = SubFlow;
	ActiveStartupPopupFlowActionIndex = INDEX_NONE;

	if (StartupPopupFlowActionClasses.IsEmpty())
	{
		SubFlow->ContinueFlow();
		return;
	}

	if (bStartupPopupFlowActionsPreloaded)
	{
		ExecuteNextStartupPopupFlowAction();
		return;
	}

	ActiveStartupPopupFlowActions.Reset();

	TArray<FSoftObjectPath> ActionClassPaths;
	for (const TSoftClassPtr<UOrionFlowAction>& ActionClass : StartupPopupFlowActionClasses)
	{
		if (!ActionClass.IsNull() && !ActionClass.Get())
		{
			ActionClassPaths.AddUnique(ActionClass.ToSoftObjectPath());
		}
	}

	if (ActionClassPaths.IsEmpty())
	{
		HandleStartupPopupFlowActionClassesLoaded();
		return;
	}

	if (StartupPopupFlowActionClassesLoadHandle.IsValid())
	{
		StartupPopupFlowActionClassesLoadHandle->CancelHandle();
		StartupPopupFlowActionClassesLoadHandle.Reset();
	}

	StartupPopupFlowActionClassesLoadHandle = UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		ActionClassPaths,
		FStreamableDelegate::CreateUObject(this, &ThisClass::HandleStartupPopupFlowActionClassesLoaded),
		FStreamableManager::AsyncLoadHighPriority);
}

void UOrionFrontendStateComponent::HandleStartupPopupFlowActionClassesLoaded()
{
	StartupPopupFlowActionClassesLoadHandle.Reset();

	if (StartupPopupPreloadSubFlow.IsValid() && CurrentSubFlow == StartupPopupPreloadSubFlow)
	{
		BuildStartupPopupFlowActions();
		PreloadNextStartupPopupFlowAction();
		return;
	}

	if (!StartupPopupSubFlow.IsValid() || CurrentSubFlow != StartupPopupSubFlow)
	{
		StartupPopupPreloadSubFlow.Reset();
		ActiveStartupPopupFlowActions.Reset();
		ActiveStartupPopupFlowActionPreloadIndex = INDEX_NONE;
		ActiveStartupPopupFlowActionIndex = INDEX_NONE;
		bStartupPopupFlowActionsPreloaded = false;
		return;
	}

	BuildStartupPopupFlowActions();
	ExecuteNextStartupPopupFlowAction();
}

void UOrionFrontendStateComponent::BuildStartupPopupFlowActions()
{
	ActiveStartupPopupFlowActions.Reset();
	for (const TSoftClassPtr<UOrionFlowAction>& ActionClassPtr : StartupPopupFlowActionClasses)
	{
		UClass* ActionClass = ActionClassPtr.Get();
		if (!ActionClass)
		{
			UE_LOG(LogOrion, Warning, TEXT("Startup popup flow action class failed to load: %s"),
				*ActionClassPtr.ToSoftObjectPath().ToString());
			continue;
		}

		UOrionFlowAction* Action = NewObject<UOrionFlowAction>(this, ActionClass);
		if (!Action)
		{
			UE_LOG(LogOrion, Warning, TEXT("Startup popup flow action failed to instantiate: %s"),
				*GetPathNameSafe(ActionClass));
			continue;
		}

		ActiveStartupPopupFlowActions.Add(Action);
	}
}

void UOrionFrontendStateComponent::PreloadNextStartupPopupFlowAction()
{
	if (!StartupPopupPreloadSubFlow.IsValid() || CurrentSubFlow != StartupPopupPreloadSubFlow)
	{
		StartupPopupPreloadSubFlow.Reset();
		ActiveStartupPopupFlowActions.Reset();
		ActiveStartupPopupFlowActionPreloadIndex = INDEX_NONE;
		ActiveStartupPopupFlowActionIndex = INDEX_NONE;
		bStartupPopupFlowActionsPreloaded = false;
		return;
	}

	++ActiveStartupPopupFlowActionPreloadIndex;
	if (!ActiveStartupPopupFlowActions.IsValidIndex(ActiveStartupPopupFlowActionPreloadIndex))
	{
		FControlFlowNodePtr FlowToContinue = StartupPopupPreloadSubFlow;
		StartupPopupPreloadSubFlow.Reset();
		ActiveStartupPopupFlowActionPreloadIndex = INDEX_NONE;
		ActiveStartupPopupFlowActionIndex = INDEX_NONE;
		bStartupPopupFlowActionsPreloaded = true;
		FlowToContinue->ContinueFlow();
		return;
	}

	UOrionFlowAction* Action = ActiveStartupPopupFlowActions[ActiveStartupPopupFlowActionPreloadIndex];
	if (!Action)
	{
		PreloadNextStartupPopupFlowAction();
		return;
	}

	const int32 PreloadingActionIndex = ActiveStartupPopupFlowActionPreloadIndex;
	Action->PreloadAction(this, FSimpleDelegate::CreateWeakLambda(this, [this, PreloadingActionIndex]
	{
		if (ActiveStartupPopupFlowActionPreloadIndex == PreloadingActionIndex)
		{
			PreloadNextStartupPopupFlowAction();
		}
	}));
}

void UOrionFrontendStateComponent::ExecuteNextStartupPopupFlowAction()
{
	if (!StartupPopupSubFlow.IsValid() || CurrentSubFlow != StartupPopupSubFlow)
	{
		ActiveStartupPopupFlowActions.Reset();
		ActiveStartupPopupFlowActionIndex = INDEX_NONE;
		bStartupPopupFlowActionsPreloaded = false;
		return;
	}

	++ActiveStartupPopupFlowActionIndex;
	if (!ActiveStartupPopupFlowActions.IsValidIndex(ActiveStartupPopupFlowActionIndex))
	{
		FControlFlowNodePtr FlowToContinue = StartupPopupSubFlow;
		StartupPopupSubFlow.Reset();
		ActiveStartupPopupFlowActions.Reset();
		ActiveStartupPopupFlowActionIndex = INDEX_NONE;
		bStartupPopupFlowActionsPreloaded = false;
		FlowToContinue->ContinueFlow();
		return;
	}

	UOrionFlowAction* Action = ActiveStartupPopupFlowActions[ActiveStartupPopupFlowActionIndex];
	if (!Action)
	{
		ExecuteNextStartupPopupFlowAction();
		return;
	}

	const int32 ExecutingActionIndex = ActiveStartupPopupFlowActionIndex;
	Action->ExecuteAction(this, FSimpleDelegate::CreateWeakLambda(this, [this, ExecutingActionIndex]
	{
		if (ActiveStartupPopupFlowActionIndex == ExecutingActionIndex)
		{
			ExecuteNextStartupPopupFlowAction();
		}
	}));
}

void UOrionFrontendStateComponent::ContinueFlow()
{
	if (CurrentSubFlow)
	{
		CurrentSubFlow->ContinueFlow();
	}
}

void UOrionFrontendStateComponent::CompleteStartupLoadingScreen()
{
	if (!LoadingScreenManager.IsValid() || !LoadingScreenManager->GetIsStartUpLoadingScreen() || bStartupLoadingScreenCompletionQueued)
	{
		return;
	}

	bStartupLoadingScreenCompletionQueued = true;

	FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this](float DeltaTime)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_UOrionFrontendStateComponent_CompleteStartupLoadingScreen);

		bStartupLoadingScreenCompletionQueued = false;

		if (LoadingScreenManager.IsValid() && LoadingScreenManager->GetIsStartUpLoadingScreen())
		{
			LoadingScreenManager->SetIsLoadingWidgetCompleted(true);
			LoadingScreenManager->SetIsStartUpLoadingScreen(false);
		}

		return false;
	}));
}

bool UOrionFrontendStateComponent::ShouldRunInitialGameStartupFlowSteps() const
{
	return bRunInitialGameStartupFlowSteps;
}

void UOrionFrontendStateComponent::OnLoadingScreenLogoFinished()
{
	if (!bWaitingForLoadingScreenLogoFinished)
	{
		return;
	}

	const FControlFlowNodePtr PendingSubFlow = CurrentSubFlow;
	FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this, PendingSubFlow](float DeltaTime)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_UOrionFrontendStateComponent_OnLoadingScreenLogoFinished);

		if (!bWaitingForLoadingScreenLogoFinished || CurrentSubFlow != PendingSubFlow)
		{
			return false;
		}

		if (bUserInitializationFinished)
		{
			bWaitingForLoadingScreenLogoFinished = false;
			ContinueFlow();
			return false;
		}
		return true;
	}));
}

void UOrionFrontendStateComponent::StartCompileShaders()
{
	// 开始编译着色器
	if (LoadingScreenManager.IsValid())
	{
		LoadingScreenManager->OnCompilingShadersFinished.BindLambda([this]
		{
			bCompileShadersFinished = true;
			FrontendLoadingFlow::MarkStartupPSOCacheComplete();
			OnCompileShadersPercentChanged.ExecuteIfBound(1.f);
			OnCompileShadersFinished.ExecuteIfBound();

			ContinueFlow();
		});

		bCompileShadersFinished = false;
		LoadingScreenManager->StartCompileShaders();
		TotalShadersPrecompiles = FShaderPipelineCache::NumPrecompilesRemaining();
		OnCompileShadersPercentChanged.ExecuteIfBound(0.f);

		// 开始Tick更新着色器编译进度
		FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this](float DeltaTime)
		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_UOrionFrontendStateComponent_StartCompileShaders);

			int32 CurrentShadersPrecompilesRemaining = FShaderPipelineCache::NumPrecompilesRemaining();
			if (CurrentShadersPrecompilesRemaining > TotalShadersPrecompiles)
			{
				TotalShadersPrecompiles = CurrentShadersPrecompilesRemaining;
				OnCompileShadersPercentChanged.ExecuteIfBound(0.f);
			}
			else
			{
				if (TotalShadersPrecompiles - CurrentShadersPrecompilesRemaining == 0)
				{
					OnCompileShadersPercentChanged.ExecuteIfBound(0.f);
				}
				else
				{
					float CurrentPercent = static_cast<float>(TotalShadersPrecompiles - CurrentShadersPrecompilesRemaining) / TotalShadersPrecompiles;
					OnCompileShadersPercentChanged.ExecuteIfBound(CurrentPercent);
				}
			}

			if (bCompileShadersFinished)
			{
				OnCompileShadersPercentChanged.ExecuteIfBound(1.f);
				return false;
			}
			return true;
		}));
	}
}

void UOrionFrontendStateComponent::RunBenchmark()
{
	if (UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get())
	{
		SettingsLocal->RunAutoBenchmark(true);
	}
}

void UOrionFrontendStateComponent::BindOnCompileShaders(const FOnCompileShaders& Callback)
{
	OnCompileShaders = Callback;
}

void UOrionFrontendStateComponent::BindOnCompileShadersPercentChanged(const FOnCompileShadersPercentChanged& Callback)
{
	OnCompileShadersPercentChanged = Callback;
}

void UOrionFrontendStateComponent::BindOnCompileShadersFinished(const FOnCompileShadersFinished& Callback)
{
	OnCompileShadersFinished = Callback;
}

void UOrionFrontendStateComponent::BindOnRunBenchmark(const FOnRunBenchmark& Callback)
{
	OnRunBenchmark = Callback;
}

bool UOrionFrontendStateComponent::CheckIfCompileShaders()
{
	if (LoadingScreenManager.IsValid() && LoadingScreenManager->GetIsStartUpLoadingScreen())
	{
		const uint32 NumPrecompilesRemaining = FShaderPipelineCache::NumPrecompilesRemaining();
		if (NumPrecompilesRemaining > 0)
		{
			if (FrontendLoadingFlow::IsStartupPSOCacheMarkedComplete())
			{
				UE_LOG(LogOrion, Display, TEXT("Skipping blocking startup PSO compilation because this bundled PSO cache already completed once. Remaining precompiles continue in background: %u"),
					NumPrecompilesRemaining);
				return false;
			}

			UE_LOG(LogOrion, Display, TEXT("Startup PSO compilation required: %u precompiles remaining."), NumPrecompilesRemaining);
			return true;
		}

		FrontendLoadingFlow::MarkStartupPSOCacheComplete();
	}

	return false;
}
