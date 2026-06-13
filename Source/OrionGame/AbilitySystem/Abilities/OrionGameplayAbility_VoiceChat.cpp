/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameplayAbility_VoiceChat.h"

#include "GameFramework/PlayerState.h"
#include "Player/OrionLocalPlayer.h"
#include "Settings/User/OrionSettingsLocal.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameplayAbility_VoiceChat)

void UOrionGameplayAbility_VoiceChat::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	InitInputDevice(ActorInfo);
}

void UOrionGameplayAbility_VoiceChat::InitInputDevice(const FGameplayAbilityActorInfo* ActorInfo)
{
	FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this, ActorInfo](float DeltaTime)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_UOrionGameplayAbility_VoiceChat_InitInputDevice);

		if (APlayerState* PS = Cast<APlayerState>(ActorInfo->OwnerActor))
		{
			if (APlayerController* PC = PS->GetPlayerController())
			{
				if (UOrionLocalPlayer* OrionLocalPlayer = Cast<UOrionLocalPlayer>(PC->GetLocalPlayer()))
				{
					UOrionSettingsLocal* SettingsLocal = OrionLocalPlayer->GetLocalSettings();
					InputDeviceSampleRate = SettingsLocal->GetInputDeviceSampleRate();
					InputDeviceNumChannels = SettingsLocal->GetInputDeviceNumChannels();

					return false;
				}
			}
		}

		return true;
	}));
}
