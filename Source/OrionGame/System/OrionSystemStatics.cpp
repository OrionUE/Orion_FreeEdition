/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionSystemStatics.h"

#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "OrionLogChannels.h"
#include "Player/OrionPlayerState.h"
#include "TimerManager.h"
#include "AbilitySystemComponent.h"
#include "OrionGameplayTags.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionSystemStatics)

namespace
{
	constexpr int32 ListenSessionInviteMaxActivationAttempts = 12;
	constexpr float ListenSessionInviteRetryDelaySeconds = 0.25f;

	bool TryActivateListenSessionInvite(const UObject* WorldContextObject, bool bLogFailure)
	{
		if (!WorldContextObject)
		{
			if (bLogFailure)
			{
				UE_LOG(LogOrion, Warning, TEXT("Unable to activate listen session invite because world context object is invalid."));
			}

			return false;
		}

		AOrionPlayerState* PlayerState = Cast<AOrionPlayerState>(UGameplayStatics::GetPlayerState(WorldContextObject, 0));
		if (!PlayerState)
		{
			if (bLogFailure)
			{
				UE_LOG(LogOrion, Warning, TEXT("Unable to activate listen session invite because local player state is unavailable."));
			}

			return false;
		}

		UAbilitySystemComponent* AbilitySystemComponent = PlayerState->GetAbilitySystemComponent();
		if (!AbilitySystemComponent)
		{
			if (bLogFailure)
			{
				UE_LOG(LogOrion, Warning, TEXT("Unable to activate listen session invite because local ability system component is unavailable."));
			}

			return false;
		}

		FGameplayEventData Payload;
		Payload.EventTag = OrionGameplayTags::GameplayEvent_Online_ListenSessionInvite;
		Payload.Target = AbilitySystemComponent->GetAvatarActor();

		const int32 ActivatedAbilityCount = AbilitySystemComponent->HandleGameplayEvent(Payload.EventTag, &Payload);
		if (ActivatedAbilityCount <= 0)
		{
			if (bLogFailure)
			{
				UE_LOG(LogOrion, Warning, TEXT("Unable to activate listen session invite because no gameplay ability handled event %s."),
					*Payload.EventTag.ToString());
			}

			return false;
		}

		return true;
	}

	void RetryActivateListenSessionInvite(TWeakObjectPtr<UObject> WeakWorldContextObject, int32 AttemptsRemaining)
	{
		UObject* WorldContextObject = WeakWorldContextObject.Get();
		if (!WorldContextObject)
		{
			return;
		}

		UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull) : nullptr;
		if (!World)
		{
			UE_LOG(LogOrion, Warning, TEXT("Unable to retry listen session invite activation because world is unavailable."));
			return;
		}

		FTimerDelegate RetryDelegate;
		RetryDelegate.BindLambda([WeakWorldContextObject, AttemptsRemaining]()
		{
			const bool bLogFailure = AttemptsRemaining <= 1;
			if (TryActivateListenSessionInvite(WeakWorldContextObject.Get(), bLogFailure))
			{
				return;
			}

			if (AttemptsRemaining > 1)
			{
				RetryActivateListenSessionInvite(WeakWorldContextObject, AttemptsRemaining - 1);
			}
		});

		FTimerHandle RetryTimerHandle;
		World->GetTimerManager().SetTimer(RetryTimerHandle, RetryDelegate, ListenSessionInviteRetryDelaySeconds, false);
	}
}

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
	if (TryActivateListenSessionInvite(WorldContextObject, false))
	{
		return;
	}

	RetryActivateListenSessionInvite(TWeakObjectPtr<UObject>(const_cast<UObject*>(WorldContextObject)), ListenSessionInviteMaxActivationAttempts - 1);
}
