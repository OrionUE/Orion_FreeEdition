/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionFireAndForgetAudioGenerationComponent.h"

#include "Kismet/GameplayStatics.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionFireAndForgetAudioGenerationComponent)

UOrionFireAndForgetAudioGenerationComponent::UOrionFireAndForgetAudioGenerationComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UAudioComponent* UOrionFireAndForgetAudioGenerationComponent::PlayAudioLocally(const FOrionAudioPlaybackRequest& PlaybackRequest)
{
	if (!CanPlayAudioLocally())
	{
		return nullptr;
	}

	UGameplayStatics::PlaySoundAtLocation(
		GetAudioWorldContextObject(),
		Sound.Get(),
		PlaybackRequest.Location,
		PlaybackRequest.Rotation,
		VolumeMultiplier,
		PitchMultiplier,
		StartTime,
		AttenuationSettings,
		ConcurrencySettings,
		GetOwner());

	return nullptr;
}
