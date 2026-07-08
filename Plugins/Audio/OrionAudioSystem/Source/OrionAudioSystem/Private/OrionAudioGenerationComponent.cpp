/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionAudioGenerationComponent.h"

#include "GameFramework/Actor.h"
#include "OrionAudioSystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionAudioGenerationComponent)

UOrionAudioGenerationComponent::UOrionAudioGenerationComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
	SetMobility(EComponentMobility::Movable);
}

void UOrionAudioGenerationComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();
	if (bAutoEnableOwnerReplication && Owner && Owner->HasAuthority() && !Owner->GetIsReplicated())
	{
		Owner->SetReplicates(true);
	}
}

UAudioComponent* UOrionAudioGenerationComponent::PlayAudioAtCurrentWorldLocation()
{
	return PlayAudioAtLocation(GetComponentLocation(), GetComponentRotation());
}

UAudioComponent* UOrionAudioGenerationComponent::PlayAudioAtLocation(FVector Location, FRotator Rotation)
{
	if (!HasPlayableSound())
	{
		UE_LOG(LogOrionAudioSystem, Warning, TEXT("PlayAudioAtLocation failed: no sound configured on %s."), *GetNameSafe(GetOwner()));
		return nullptr;
	}

	const FOrionAudioPlaybackRequest PlaybackRequest = BuildPlaybackRequest(Location, Rotation);

	if (ShouldUseNetworkedPlayback())
	{
		AActor* Owner = GetOwner();
		if (Owner && Owner->HasAuthority())
		{
			BroadcastPlaybackRequest(PlaybackRequest);
		}
		else
		{
			if (Owner && Owner->GetLocalRole() == ROLE_SimulatedProxy)
			{
				UE_LOG(LogOrionAudioSystem, Warning, TEXT("Client playback request on %s may be rejected because the owner is not an autonomous proxy."), *GetNameSafe(Owner));
			}

			if (bUseReliableServerPlayback)
			{
				ServerPlayAudioAtLocationReliable(PlaybackRequest);
			}
			else
			{
				ServerPlayAudioAtLocationUnreliable(PlaybackRequest);
			}
		}

		return nullptr;
	}

	return PlayAudioLocally(PlaybackRequest);
}

void UOrionAudioGenerationComponent::SetAudioSound(USoundBase* NewSound)
{
	SetAudioSourceState(NewSound, AttenuationSettings, true);
}

void UOrionAudioGenerationComponent::SetAudioAttenuationSettings(USoundAttenuation* NewAttenuationSettings)
{
	SetAudioSourceState(Sound.Get(), NewAttenuationSettings, true);
}

void UOrionAudioGenerationComponent::ServerPlayAudioAtLocationReliable_Implementation(const FOrionAudioPlaybackRequest& PlaybackRequest)
{
	HandleServerPlaybackRequest(PlaybackRequest);
}

void UOrionAudioGenerationComponent::ServerPlayAudioAtLocationUnreliable_Implementation(const FOrionAudioPlaybackRequest& PlaybackRequest)
{
	HandleServerPlaybackRequest(PlaybackRequest);
}

void UOrionAudioGenerationComponent::MulticastPlayAudioAtLocation_Implementation(const FOrionAudioPlaybackRequest& PlaybackRequest)
{
	PlayAudioLocally(PlaybackRequest);
}

void UOrionAudioGenerationComponent::MulticastPlayAudioAtLocationReliable_Implementation(const FOrionAudioPlaybackRequest& PlaybackRequest)
{
	PlayAudioLocally(PlaybackRequest);
}

void UOrionAudioGenerationComponent::ServerSetAudioSourceState_Implementation(USoundBase* NewSound, USoundAttenuation* NewAttenuationSettings)
{
	SetAudioSourceState(NewSound, NewAttenuationSettings, false);
	MulticastSetAudioSourceState(NewSound, NewAttenuationSettings);
}

void UOrionAudioGenerationComponent::MulticastSetAudioSourceState_Implementation(USoundBase* NewSound, USoundAttenuation* NewAttenuationSettings)
{
	SetAudioSourceState(NewSound, NewAttenuationSettings, false);
}

FOrionAudioPlaybackRequest UOrionAudioGenerationComponent::BuildPlaybackRequest(const FVector& Location, const FRotator& Rotation) const
{
	FOrionAudioPlaybackRequest PlaybackRequest;
	PlaybackRequest.Location = Location;
	PlaybackRequest.Rotation = Rotation;
	PopulatePlaybackRequest(PlaybackRequest);

	return PlaybackRequest;
}

void UOrionAudioGenerationComponent::PopulatePlaybackRequest(FOrionAudioPlaybackRequest& PlaybackRequest) const
{
}

UAudioComponent* UOrionAudioGenerationComponent::PlayAudioLocally(const FOrionAudioPlaybackRequest& PlaybackRequest)
{
	if (CanPlayAudioLocally())
	{
		UE_LOG(LogOrionAudioSystem, Warning, TEXT("%s has no concrete local audio playback implementation."), *GetNameSafe(this));
	}

	return nullptr;
}

void UOrionAudioGenerationComponent::OnAudioSourceStateChanged()
{
}

void UOrionAudioGenerationComponent::HandleServerPlaybackRequest(const FOrionAudioPlaybackRequest& PlaybackRequest)
{
	if (!HasPlayableSound())
	{
		UE_LOG(LogOrionAudioSystem, Warning, TEXT("Server playback ignored request without sound on %s."), *GetNameSafe(GetOwner()));
		return;
	}

	BroadcastPlaybackRequest(PlaybackRequest);
}

void UOrionAudioGenerationComponent::BroadcastPlaybackRequest(const FOrionAudioPlaybackRequest& PlaybackRequest)
{
	if (bUseReliableMulticast)
	{
		MulticastPlayAudioAtLocationReliable(PlaybackRequest);
	}
	else
	{
		MulticastPlayAudioAtLocation(PlaybackRequest);
	}
}

void UOrionAudioGenerationComponent::SetAudioSourceState(USoundBase* NewSound, USoundAttenuation* NewAttenuationSettings, bool bBroadcastChange)
{
	Sound = NewSound;
	AttenuationSettings = NewAttenuationSettings;

	OnAudioSourceStateChanged();

	if (bBroadcastChange)
	{
		BroadcastAudioSourceState();
	}
}

void UOrionAudioGenerationComponent::BroadcastAudioSourceState()
{
	if (!ShouldUseNetworkedPlayback())
	{
		return;
	}

	const AActor* Owner = GetOwner();
	if (Owner && Owner->HasAuthority())
	{
		MulticastSetAudioSourceState(Sound.Get(), AttenuationSettings);
	}
	else
	{
		ServerSetAudioSourceState(Sound.Get(), AttenuationSettings);
	}
}

bool UOrionAudioGenerationComponent::HasPlayableSound() const
{
	return Sound != nullptr;
}

bool UOrionAudioGenerationComponent::ShouldUseNetworkedPlayback() const
{
	return bReplicatePlayback && (GetNetMode() != NM_Standalone);
}

bool UOrionAudioGenerationComponent::CanPlayAudioLocally() const
{
	return (GetNetMode() != NM_DedicatedServer) && HasPlayableSound();
}

const UObject* UOrionAudioGenerationComponent::GetAudioWorldContextObject() const
{
	return GetOwner() ? static_cast<const UObject*>(GetOwner()) : static_cast<const UObject*>(this);
}
