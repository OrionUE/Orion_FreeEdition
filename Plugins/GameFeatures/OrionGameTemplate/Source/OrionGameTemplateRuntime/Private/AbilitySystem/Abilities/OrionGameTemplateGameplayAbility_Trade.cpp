/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "AbilitySystem/Abilities/OrionGameTemplateGameplayAbility_Trade.h"

#include "Game/OrionGameTemplateGameplayComponent.h"
#include "Game/OrionGameTemplateTypes.h"
#include "GameFramework/GameStateBase.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplateGameplayAbility_Trade)

UOrionGameTemplateGameplayAbility_Trade::UOrionGameTemplateGameplayAbility_Trade(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ActivationPolicy = ECoreAbilityActivationPolicy::OnInputStarted;
	ActivationGroup = ECoreAbilityActivationGroup::Independent;
}

void UOrionGameTemplateGameplayAbility_Trade::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
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
				if (!TemplateGame->TryTradeNearestWorkbench(GetControllerFromActorInfo(), EOrionGameTemplateTradeOfferType::SellWood, InteractionRange) &&
					!TemplateGame->TryTradeNearestWorkbench(GetControllerFromActorInfo(), EOrionGameTemplateTradeOfferType::SellOre, InteractionRange))
				{
					TemplateGame->TryTradeNearestWorkbench(GetControllerFromActorInfo(), EOrionGameTemplateTradeOfferType::BuyRation, InteractionRange);
				}
			}
		}
	}

	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}
