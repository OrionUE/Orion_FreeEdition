/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionHeroComponent.h"

#include "CoreGameplayTags.h"
#include "Components/GameFrameworkComponentDelegates.h"
#include "Logging/MessageLog.h"
#include "EnhancedInputSubsystems.h"
#include "OrionPlayerState.h"
#include "Components/GameFrameworkComponentManager.h"
#include "Character/CorePawnExtensionComponent.h"
#include "Player/CorePlayerController.h"
#include "Player/CorePlayerState.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionHeroComponent)

#if WITH_EDITOR
#include "Misc/UObjectToken.h"
#endif

const FName UOrionHeroComponent::NAME_ActorFeatureName("Hero");

UOrionHeroComponent::UOrionHeroComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UOrionHeroComponent::InitLocalPlayer_Implementation(APawn* InPawn, AOrionPlayerState* InPS, ACorePlayerController* InPC)
{
}

void UOrionHeroComponent::OnRegister()
{
	Super::OnRegister();

	if (!GetPawn<APawn>())
	{
		UE_LOG(LogCore, Error, TEXT("[UOrionHeroComponent::OnRegister] This component has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint."));

#if WITH_EDITOR
		if (GIsEditor)
		{
			static const FText Message = NSLOCTEXT("OrionHeroComponent", "NotOnPawnError", "has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint. This will cause a crash if you PIE!");
			static const FName HeroMessageLogName = TEXT("OrionHeroComponent");

			FMessageLog(HeroMessageLogName).Error()
				->AddToken(FUObjectToken::Create(this, FText::FromString(GetNameSafe(this))))
				->AddToken(FTextToken::Create(Message));

			FMessageLog(HeroMessageLogName).Open();
		}
#endif
	}
	else
	{
		// Register with the init state system early, this will only work if this is a game world
		RegisterInitStateFeature();
	}
}

bool UOrionHeroComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const
{
	check(Manager);

	APawn* Pawn = GetPawn<APawn>();

	if (!CurrentState.IsValid() && DesiredState == CoreGameplayTags::InitState_Spawned)
	{
		// As long as we have a real pawn, let us transition
		if (Pawn)
		{
			return true;
		}
	}
	else if (CurrentState == CoreGameplayTags::InitState_Spawned && DesiredState == CoreGameplayTags::InitState_DataAvailable)
	{
		// The player state is required.
		if (!GetPlayerState<AOrionPlayerState>())
		{
			return false;
		}

		// If we're authority or autonomous, we need to wait for a controller with registered ownership of the player state.
		if (Pawn->GetLocalRole() != ROLE_SimulatedProxy)
		{
			AController* Controller = GetController<AController>();

			const bool bHasControllerPairedWithPS = (Controller != nullptr) &&
				(Controller->PlayerState != nullptr) &&
				(Controller->PlayerState->GetOwner() == Controller);

			if (!bHasControllerPairedWithPS)
			{
				return false;
			}
		}

		const bool bIsLocallyControlled = Pawn->IsLocallyControlled();
		const bool bIsBot = Pawn->IsBotControlled();

		if (bIsLocallyControlled && !bIsBot)
		{
			ACorePlayerController* CorePC = GetController<ACorePlayerController>();

			// The input component and local player is required when locally controlled.
			if (!Pawn->InputComponent || !CorePC || !CorePC->GetLocalPlayer())
			{
				return false;
			}
		}

		return true;
	}
	else if (CurrentState == CoreGameplayTags::InitState_DataAvailable && DesiredState == CoreGameplayTags::InitState_DataInitialized)
	{
		// Wait for player state and extension component
		AOrionPlayerState* OrionPS = GetPlayerState<AOrionPlayerState>();

		return OrionPS && Manager->HasFeatureReachedInitState(Pawn, UCorePawnExtensionComponent::NAME_ActorFeatureName, CoreGameplayTags::InitState_DataInitialized);
	}
	else if (CurrentState == CoreGameplayTags::InitState_DataInitialized && DesiredState == CoreGameplayTags::InitState_GameplayReady)
	{
		// TODO: add ability initialization checks?
		return true;
	}

	return false;
}

void UOrionHeroComponent::HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState)
{
	if (CurrentState == CoreGameplayTags::InitState_DataAvailable && DesiredState == CoreGameplayTags::InitState_DataInitialized)
	{
		APawn* Pawn = GetPawn<APawn>();
		AOrionPlayerState* OrionPS = GetPlayerState<AOrionPlayerState>();
		if (!ensure(Pawn && OrionPS))
		{
			return;
		}

		if (ACorePlayerController* CorePC = GetController<ACorePlayerController>())
		{
			if (CorePC->IsLocalController())
			{
				InitLocalPlayer(Pawn, OrionPS, CorePC);
			}
		}
	}
}

void UOrionHeroComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
{
	if (Params.FeatureName == UCorePawnExtensionComponent::NAME_ActorFeatureName)
	{
		if (Params.FeatureState == CoreGameplayTags::InitState_DataInitialized)
		{
			// If the extension component says all all other components are initialized, try to progress to next state
			CheckDefaultInitialization();
		}
	}
}

void UOrionHeroComponent::CheckDefaultInitialization()
{
	static const TArray<FGameplayTag> StateChain = { CoreGameplayTags::InitState_Spawned, CoreGameplayTags::InitState_DataAvailable, CoreGameplayTags::InitState_DataInitialized, CoreGameplayTags::InitState_GameplayReady };

	// This will try to progress from spawned (which is only set in BeginPlay) through the data initialization stages until it gets to gameplay ready
	ContinueInitStateChain(StateChain);
}

void UOrionHeroComponent::BeginPlay()
{
	Super::BeginPlay();

	// Listen for when the pawn extension component changes init state
	BindOnActorInitStateChanged(UCorePawnExtensionComponent::NAME_ActorFeatureName, FGameplayTag(), false);

	// Notifies that we are done spawning, then try the rest of initialization
	ensure(TryToChangeInitState(CoreGameplayTags::InitState_Spawned));
	CheckDefaultInitialization();
}

void UOrionHeroComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnregisterInitStateFeature();

	Super::EndPlay(EndPlayReason);
}
