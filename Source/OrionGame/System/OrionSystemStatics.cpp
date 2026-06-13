/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionSystemStatics.h"

#include "Kismet/GameplayStatics.h"
#include "Player/OrionPlayerState.h"
#include "AbilitySystemComponent.h"
#include "OrionGameplayTags.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionSystemStatics)

bool UOrionSystemStatics::IsEditor()
{
	bool bIsEditor = false;

#if WITH_EDITOR
	bIsEditor = true;
#endif

	return bIsEditor;
}

bool UOrionSystemStatics::IsShippingBuild()
{
	return FApp::GetBuildConfiguration() == EBuildConfiguration::Shipping ? true : false;
}

FPrimaryAssetId UOrionSystemStatics::GetPrimaryAssetIdFromUserFacingExperienceName(const FString& AdvertisedExperienceID)
{
	const FPrimaryAssetType Type(TEXT("BBL_ExperienceUserFacingDefinition"));
	return FPrimaryAssetId(Type, FName(*AdvertisedExperienceID));
}

void UOrionSystemStatics::ActivateListenSessionInvite(const UObject* WorldContextObject)
{
	AOrionPlayerState* PlayerState = Cast<AOrionPlayerState>(UGameplayStatics::GetPlayerState(WorldContextObject, 0));
	if (PlayerState)
	{
		if (UAbilitySystemComponent* AbilitySystemComponent = PlayerState->GetAbilitySystemComponent())
		{
			FGameplayEventData Payload;
			Payload.EventTag = OrionGameplayTags::GameplayEvent_Online_ListenSessionInvite;
			Payload.Target = AbilitySystemComponent->GetAvatarActor();

			AbilitySystemComponent->HandleGameplayEvent(Payload.EventTag, &Payload);
		}
	}
}
