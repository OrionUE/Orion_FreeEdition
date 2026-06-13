/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionPlayerInfoComponent.h"

#include "OrionPlayerManager.h"
#include "OrionUserSubsystem.h"
#include "GameModes/CoreExperienceManagerComponent.h"
#include "Player/CorePlayerController.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionPlayerInfoComponent)

UOrionPlayerInfoComponent::UOrionPlayerInfoComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
}

void UOrionPlayerInfoComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GetController<ACorePlayerController>()->IsLocalController())
	{
		if (GetOwner()->HasAuthority())
		{
			PlayerID = UOrionUserSubsystem::Get(this).GetPlayerID();

			Server_InitializePlayerInfo();
		}
		else
		{
			PlayerID = UOrionUserSubsystem::Get(this).GetPlayerID();

			Server_SetPlayerID(PlayerID);
			Client_InitializePlayerInfo();
		}
	}
}

void UOrionPlayerInfoComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (GetOwner()->HasAuthority())
	{
		UOrionPlayerManager* PlayerManager = GetWorld()->GetSubsystem<UOrionPlayerManager>();
		PlayerManager->UnregisterPlayer(PlayerID);
	}
}

void UOrionPlayerInfoComponent::Server_InitializePlayerInfo()
{
	UCoreExperienceManagerComponent* ExperienceComponent = GetWorld()->GetGameState()->FindComponentByClass<UCoreExperienceManagerComponent>();
	check(ExperienceComponent);
	ExperienceComponent->CallOrRegister_OnExperienceLoaded_LowPriority(FOnCoreExperienceLoaded::FDelegate::CreateLambda([this](const UCoreExperienceDefinition* Experience)
	{
		if (!bInitialized)
		{
			bInitialized = true;
			OnPlayerInfoInitialized.Broadcast();
		}

		OnPlayerInfoInitialized.Clear();

		if (GetOwner()->HasAuthority())
		{
			UOrionPlayerManager* PlayerManager = GetWorld()->GetSubsystem<UOrionPlayerManager>();
			PlayerManager->RegisterPlayer(PlayerID);

			OnPlayerRegistered();
		}
	}));
}

void UOrionPlayerInfoComponent::Client_InitializePlayerInfo()
{
	if (!bInitialized)
	{
		bInitialized = true;
		OnPlayerInfoInitialized.Broadcast();
	}

	OnPlayerInfoInitialized.Clear();
}

void UOrionPlayerInfoComponent::OnPlayerRegistered()
{
}

void UOrionPlayerInfoComponent::CallOrRegister_OnPlayerInfoInitialized(FOnPlayerInfoComponentInitialized::FDelegate&& Delegate)
{
	if (bInitialized)
	{
		Delegate.Execute();
	}
	else
	{
		OnPlayerInfoInitialized.Add(MoveTemp(Delegate));
	}
}

void UOrionPlayerInfoComponent::Server_SetPlayerID_Implementation(const FOrionPlayerID& InPlayerID)
{
	PlayerID = InPlayerID;

	Server_InitializePlayerInfo();
}
