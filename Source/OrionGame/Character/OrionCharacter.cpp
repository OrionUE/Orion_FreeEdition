/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionCharacter.h"

#include "CoreGameplayTags.h"
#include "AbilitySystem/OrionAbilitySystemComponent.h"
#include "Character/CorePawnExtensionComponent.h"
#include "Components/GameFrameworkComponentManager.h"
#include "Player/OrionHeroComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionCharacter)

AOrionCharacter::AOrionCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PawnExtComponent = CreateDefaultSubobject<UCorePawnExtensionComponent>(TEXT("PawnExtensionComponent"));
	PawnExtComponent->OnAbilitySystemInitialized_RegisterAndCall(FSimpleMulticastDelegate::FDelegate::CreateUObject(this, &ThisClass::OnAbilitySystemInitialized));
	PawnExtComponent->OnAbilitySystemUninitialized_Register(FSimpleMulticastDelegate::FDelegate::CreateUObject(this, &ThisClass::OnAbilitySystemUninitialized));
}

void AOrionCharacter::CheckPawnControlInitState()
{
	Super::CheckPawnControlInitState();

	if (IsLocallyControlled())
	{
		UGameFrameworkComponentManager* GameFrameworkComponentManager = GetGameInstance()->GetSubsystem<UGameFrameworkComponentManager>();
		check(GameFrameworkComponentManager)

		if (!GameFrameworkComponentManager->HasFeatureReachedInitState(this, UOrionHeroComponent::NAME_ActorFeatureName, CoreGameplayTags::InitState_DataInitialized))
		{
			if (UOrionHeroComponent* OrionHeroComponent = FindComponentByClass<UOrionHeroComponent>())
			{
				OrionHeroComponent->ContinueInitStateChain(CoreGameplayTags::StateChain);
			}
		}
	}
}

UOrionAbilitySystemComponent* AOrionCharacter::GetOrionAbilitySystemComponent() const
{
	return Cast<UOrionAbilitySystemComponent>(GetAbilitySystemComponent());
}
