/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionManagedAudioGenerationComponent.h"

#include "Components/AudioComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionManagedAudioGenerationComponent)

UOrionManagedAudioGenerationComponent::UOrionManagedAudioGenerationComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UOrionManagedAudioGenerationComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	StopAndDestroyGeneratedAudio();

	Super::EndPlay(EndPlayReason);
}

void UOrionManagedAudioGenerationComponent::SetAudioAttenuationOverrideEnabled(bool bEnabled)
{
	SetManagedAudioGenerationState(bEnabled, AttenuationOverrides, bAutoDestroyGeneratedAudio, true);
}

void UOrionManagedAudioGenerationComponent::SetAudioAttenuationOverrides(const FSoundAttenuationSettings& NewAttenuationOverrides)
{
	SetManagedAudioGenerationState(bOverrideAttenuation, NewAttenuationOverrides, bAutoDestroyGeneratedAudio, true);
}

void UOrionManagedAudioGenerationComponent::ApplyAttenuationToActiveAudio()
{
	PruneGeneratedAudioComponents();

	for (const TWeakObjectPtr<UAudioComponent>& AudioComponentPtr : GeneratedAudioComponents)
	{
		if (UAudioComponent* AudioComponent = AudioComponentPtr.Get())
		{
			if (bOverrideAttenuation)
			{
				AudioComponent->AdjustAttenuation(AttenuationOverrides);
			}
			else
			{
				AudioComponent->SetOverrideAttenuation(false);
				AudioComponent->SetAttenuationSettings(AttenuationSettings);
			}
		}
	}
}

void UOrionManagedAudioGenerationComponent::SetAutoDestroyGeneratedAudio(bool bShouldAutoDestroy)
{
	SetManagedAudioGenerationState(bOverrideAttenuation, AttenuationOverrides, bShouldAutoDestroy, true);
}

void UOrionManagedAudioGenerationComponent::StopAndDestroyGeneratedAudio()
{
	for (const TWeakObjectPtr<UAudioComponent>& AudioComponentPtr : GeneratedAudioComponents)
	{
		if (UAudioComponent* AudioComponent = AudioComponentPtr.Get())
		{
			AudioComponent->bAutoDestroy = false;
			AudioComponent->Stop();
			AudioComponent->DestroyComponent();
		}
	}

	GeneratedAudioComponents.Reset();
}

void UOrionManagedAudioGenerationComponent::ServerSetManagedAudioGenerationState_Implementation(bool bNewOverrideAttenuation, const FSoundAttenuationSettings& NewAttenuationOverrides, bool bNewAutoDestroyGeneratedAudio)
{
	SetManagedAudioGenerationState(bNewOverrideAttenuation, NewAttenuationOverrides, bNewAutoDestroyGeneratedAudio, false);
	MulticastSetManagedAudioGenerationState(bNewOverrideAttenuation, NewAttenuationOverrides, bNewAutoDestroyGeneratedAudio);
}

void UOrionManagedAudioGenerationComponent::MulticastSetManagedAudioGenerationState_Implementation(bool bNewOverrideAttenuation, const FSoundAttenuationSettings& NewAttenuationOverrides, bool bNewAutoDestroyGeneratedAudio)
{
	SetManagedAudioGenerationState(bNewOverrideAttenuation, NewAttenuationOverrides, bNewAutoDestroyGeneratedAudio, false);
}

void UOrionManagedAudioGenerationComponent::PopulatePlaybackRequest(FOrionAudioPlaybackRequest& PlaybackRequest) const
{
	Super::PopulatePlaybackRequest(PlaybackRequest);

	PlaybackRequest.bAutoDestroyGeneratedAudio = bAutoDestroyGeneratedAudio;
}

UAudioComponent* UOrionManagedAudioGenerationComponent::PlayAudioLocally(const FOrionAudioPlaybackRequest& PlaybackRequest)
{
	if (!CanPlayAudioLocally())
	{
		return nullptr;
	}

	UAudioComponent* AudioComponent = UGameplayStatics::SpawnSoundAtLocation(
		GetAudioWorldContextObject(),
		Sound.Get(),
		PlaybackRequest.Location,
		PlaybackRequest.Rotation,
		VolumeMultiplier,
		PitchMultiplier,
		StartTime,
		AttenuationSettings,
		ConcurrencySettings,
		PlaybackRequest.bAutoDestroyGeneratedAudio);

	if (AudioComponent)
	{
		if (bOverrideAttenuation)
		{
			AudioComponent->AdjustAttenuation(AttenuationOverrides);
		}

		TrackGeneratedAudioComponent(AudioComponent);
	}

	return AudioComponent;
}

void UOrionManagedAudioGenerationComponent::OnAudioSourceStateChanged()
{
	Super::OnAudioSourceStateChanged();

	ApplyAttenuationToActiveAudio();
}

void UOrionManagedAudioGenerationComponent::SetManagedAudioGenerationState(bool bNewOverrideAttenuation, const FSoundAttenuationSettings& NewAttenuationOverrides, bool bNewAutoDestroyGeneratedAudio, bool bBroadcastChange)
{
	bOverrideAttenuation = bNewOverrideAttenuation;
	AttenuationOverrides = NewAttenuationOverrides;
	bAutoDestroyGeneratedAudio = bNewAutoDestroyGeneratedAudio;

	ApplyAttenuationToActiveAudio();
	ApplyAutoDestroyToGeneratedAudio();

	if (bBroadcastChange)
	{
		BroadcastManagedAudioGenerationState();
	}
}

void UOrionManagedAudioGenerationComponent::BroadcastManagedAudioGenerationState()
{
	if (!ShouldUseNetworkedPlayback())
	{
		return;
	}

	const AActor* Owner = GetOwner();
	if (Owner && Owner->HasAuthority())
	{
		MulticastSetManagedAudioGenerationState(bOverrideAttenuation, AttenuationOverrides, bAutoDestroyGeneratedAudio);
	}
	else
	{
		ServerSetManagedAudioGenerationState(bOverrideAttenuation, AttenuationOverrides, bAutoDestroyGeneratedAudio);
	}
}

void UOrionManagedAudioGenerationComponent::ApplyAutoDestroyToGeneratedAudio()
{
	PruneGeneratedAudioComponents();

	for (const TWeakObjectPtr<UAudioComponent>& AudioComponentPtr : GeneratedAudioComponents)
	{
		if (UAudioComponent* AudioComponent = AudioComponentPtr.Get())
		{
			AudioComponent->bAutoDestroy = bAutoDestroyGeneratedAudio;

			if (bAutoDestroyGeneratedAudio && !AudioComponent->IsActive())
			{
				AudioComponent->DestroyComponent();
			}
		}
	}

	PruneGeneratedAudioComponents();
}

void UOrionManagedAudioGenerationComponent::TrackGeneratedAudioComponent(UAudioComponent* AudioComponent)
{
	if (!AudioComponent)
	{
		return;
	}

	PruneGeneratedAudioComponents();
	GeneratedAudioComponents.Add(AudioComponent);
}

void UOrionManagedAudioGenerationComponent::PruneGeneratedAudioComponents()
{
	GeneratedAudioComponents.RemoveAll([](const TWeakObjectPtr<UAudioComponent>& AudioComponentPtr)
	{
		const UAudioComponent* AudioComponent = AudioComponentPtr.Get();
		return !AudioComponent || (AudioComponent->bAutoDestroy && !AudioComponent->IsActive());
	});
}
