/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionFrontendStateComponent.h"

#include "CommonGameInstance.h"
#include "CommonSessionSubsystem.h"
#include "ControlFlowManager.h"
#include "LoadingScreenManager.h"
#include "OrionLogChannels.h"
#include "PrimaryGameLayout.h"
#include "GameModes/OrionExperienceManagerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NativeGameplayTags.h"
#include "ShaderPipelineCache.h"
#include "Player/OrionUserSubsystem.h"
#include "Settings/User/OrionSettingsLocal.h"
#include "System/OrionSystemStatics.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionFrontendStateComponent)

namespace FrontendTags
{
	UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_PLATFORM_TRAIT_SINGLEONLINEUSER, "Platform.Trait.SingleOnlineUser");
	UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_UI_LAYER_MENU, "UI.Layer.Menu");
}

namespace FrontendLoadingFlow
{
	constexpr float StartupLoadingFlowFallbackDelaySeconds = 5.0f;
	constexpr float LobbyBackgroundFlowFallbackDelaySeconds = 10.0f;
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
		.QueueStep(TEXT("Try Show Press Start Screen"), this, &ThisClass::FlowStep_TryShowPressStartScreen)
		.QueueStep(TEXT("Try Join Requested Session"), this, &ThisClass::FlowStep_TryJoinRequestedSession)
		.QueueStep(TEXT("Try Listen Session Invite"), this, &ThisClass::FlowStep_TryListenSessionInvite)
		.QueueStep(TEXT("Try Show Main Screen"), this, &ThisClass::FlowStep_TryShowMainScreen);

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
		QUICK_SCOPE_CYCLE_COUNTER(STAT_UOrionFrontendStateComponent_WaitForUserInitializationFallback);

		if ((CurrentSubFlow == PendingSubFlow) && bWaitingForLoadingScreenLogoFinished)
		{
			bWaitingForLoadingScreenLogoFinished = false;

			if (LoadingScreenManager.IsValid())
			{
				LoadingScreenManager->SetIsLoadingWidgetCompleted(true);
			}

			UE_LOG(LogOrion, Warning, TEXT("Startup loading screen did not report logo completion within %.1f seconds. Continuing frontend flow."),
				FrontendLoadingFlow::StartupLoadingFlowFallbackDelaySeconds);

			ContinueFlow();
		}

		return false;
	}), FrontendLoadingFlow::StartupLoadingFlowFallbackDelaySeconds);
}

void UOrionFrontendStateComponent::FlowStep_TryCompileShaders(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

	if (CheckIfCompileShaders())	// 检查是否需要编译着色器
	{
		// 显示编译着色器UI
		OnCompileShaders.ExecuteIfBound();
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
		RootLayout->PushWidgetToLayerStack<UCommonActivatableWidget>(FrontendTags::TAG_UI_LAYER_MENU, PressStartScreenClass);
	}

	LoadingScreenManager->SetIsStartUpLoadingScreen(false);
}

void UOrionFrontendStateComponent::FlowStep_TryJoinRequestedSession(FControlFlowNodeRef SubFlow)
{
	CurrentSubFlow = SubFlow;

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

void UOrionFrontendStateComponent::ContinueFlow()
{
	if (CurrentSubFlow)
	{
		CurrentSubFlow->ContinueFlow();
	}
}

void UOrionFrontendStateComponent::OnLoadingScreenLogoFinished()
{
	if (LoadingScreenManager.IsValid())
	{
		LoadingScreenManager->SetIsLoadingWidgetCompleted(true);
	}

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
		if (FShaderPipelineCache::NumPrecompilesRemaining() > 0)
		{
			return true;
		}
	}

	return false;
}
