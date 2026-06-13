/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "AbilitySystem/Abilities/OrionGameTemplateGameplayAbility_Build.h"

#include "Game/OrionGameTemplateGameplayComponent.h"
#include "GameFramework/GameStateBase.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplateGameplayAbility_Build)

UOrionGameTemplateGameplayAbility_Build::UOrionGameTemplateGameplayAbility_Build(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ActivationPolicy = ECoreAbilityActivationPolicy::OnInputStarted;
	ActivationGroup = ECoreAbilityActivationGroup::Independent;
}

void UOrionGameTemplateGameplayAbility_Build::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	if (ActorInfo && ActorInfo->IsNetAuthority())
	{
		if (AGameStateBase* GameState = GetWorld()->GetGameState())
		{
			if (UOrionGameTemplateGameplayComponent* TemplateGame = GameState->FindComponentByClass<UOrionGameTemplateGameplayComponent>())
			{
				TemplateGame->TryBuildStructure(GetControllerFromActorInfo(), StructureType, BuildRange);
			}
		}
	}

	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}
