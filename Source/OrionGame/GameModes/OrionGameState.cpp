/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameState.h"

#include "OrionExperienceManagerComponent.h"
#include "AbilitySystem/OrionAbilitySystemComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "Messages/CoreVerbMessage.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameState)

AOrionGameState::AOrionGameState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ExperienceManagerComponent = CreateDefaultSubobject<UOrionExperienceManagerComponent>(TEXT("ExperienceManagerComponent"));

	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<UOrionAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
}

void AOrionGameState::MulticastMessageToClients_Implementation(const FCoreVerbMessage Message)
{
	if (GetNetMode() == NM_Client)
	{
		UGameplayMessageSubsystem::Get(this).BroadcastMessage(Message.Verb, Message);
	}
}

void AOrionGameState::MulticastReliableMessageToClients_Implementation(const FCoreVerbMessage Message)
{
	MulticastMessageToClients_Implementation(Message);
}
