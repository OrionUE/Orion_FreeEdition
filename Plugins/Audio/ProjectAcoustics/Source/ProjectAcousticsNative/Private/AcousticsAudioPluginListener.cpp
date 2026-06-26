// Copyright (c) 2022 Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include "AcousticsAudioPluginListener.h"

#include "AcousticsSourceDataOverride.h"
#include "AcousticsVirtualSpeaker.h"
#include "AudioDevice.h"

FAcousticsAudioPluginListener::FAcousticsAudioPluginListener()
	: m_AcousticsNativeAudioModule(nullptr)
	, m_SourceDataOverridePtr(nullptr)
	, m_NumVirtualSpeakers(0)
	, m_IsInitialized(false)
{
}

void FAcousticsAudioPluginListener::OnListenerInitialize(FAudioDevice* AudioDevice, UWorld* ListenerWorld)
{
	// Only initialize if this is a game playing. Either a real game or play in editor session
	if (AudioDevice == nullptr || ListenerWorld == nullptr || (ListenerWorld->WorldType != EWorldType::Game && ListenerWorld->WorldType != EWorldType::PIE))
	{
		return;
	}

	if (!m_AcousticsNativeAudioModule)
	{
		m_AcousticsNativeAudioModule = &FModuleManager::GetModuleChecked<FProjectAcousticsNativeModule>("ProjectAcousticsNative");
	}

	m_SourceDataOverridePtr = static_cast<FAcousticsSourceDataOverride*>(AudioDevice->SourceDataOverridePluginInterface.Get());

	if (m_SourceDataOverridePtr == nullptr || !m_SourceDataOverridePtr->IsSpatialReverbInitialized())
	{
		// Exit early and don't spawn any virtual speakers if spatial reverb isn't being used
		return;
	}

	// Save the positions of the virtual speakers. These won't change after initialization
	m_SourceDataOverridePtr->GetSpatialReverbOutputChannelDirections(m_VirtualSpeakerPositions, &m_NumVirtualSpeakers);

	// Create the effect chain that store our custom speaker effects. These speaker effects are responsible for outputing
	// the audio for each virtual speakers
	TArray<TObjectPtr<USoundSourceBus>> SourceBuses;
	for (uint32 i = 0u; i < m_NumVirtualSpeakers; i++)
	{
		// Create the source bus
		SourceBuses.Add(NewObject<USoundSourceBus>());
		TObjectPtr<USoundSourceBus> SourceBus = SourceBuses[i];
		SourceBus->bAutoDeactivateWhenSilent = true;

		// The preset gets passed onto the actual SoundEffect that does the processing, so we set the ptr and index here
		TObjectPtr<USoundEffectAcousticsVirtualSpeakerPreset> AcousticsPreset = NewObject<USoundEffectAcousticsVirtualSpeakerPreset>();
		AcousticsPreset->SourceDataOverridePtr = m_SourceDataOverridePtr;
		AcousticsPreset->SpeakerIndex = i;

		// Chain entry holds the preset
		FSourceEffectChainEntry ChainEntry;
		ChainEntry.Preset = AcousticsPreset;

		// Put the chain entry on a preset chain
		TObjectPtr<USoundEffectSourcePresetChain> PresetChain = NewObject<USoundEffectSourcePresetChain>();
		PresetChain->Chain.Add(ChainEntry);

		// Add the preset chain to the source bus
		SourceBus->SourceEffectChain = PresetChain;
	}

	uint32 SpeakerCount = 1;
	// Spawn an ambient actor to host each of the source buses
	for (TObjectPtr<USoundSourceBus> SourceBus : SourceBuses)
	{
		FName Name = FName(FString::Printf(TEXT("ProjectAcousticsVirtualSpeaker%d"), SpeakerCount++));
		FActorSpawnParameters SpeakerSpawnParams;
		SpeakerSpawnParams.Name = Name;
		SpeakerSpawnParams.NameMode = FActorSpawnParameters::ESpawnActorNameMode::Requested;
		AAmbientSound* Speaker = ListenerWorld->SpawnActor<AAmbientSound>(SpeakerSpawnParams);
		if (Speaker == nullptr)
		{
			continue;
		}

		// Label is what actually gets displayed in World Outliner
#if WITH_EDITOR
		Speaker->SetActorLabel(Speaker->GetName());
#endif
		UAudioComponent* AudioComponent = Speaker->GetAudioComponent();
		if (AudioComponent == nullptr)
		{
			Speaker->Destroy();
			continue;
		}

		// Important settings for the virtual speaker
		SourceBus->VirtualizationMode = EVirtualizationMode::Disabled;
		AudioComponent->Sound = SourceBus;
		AudioComponent->bOverrideAttenuation = true;
		AudioComponent->AttenuationOverrides.bSpatialize = true;
		AudioComponent->AttenuationOverrides.bAttenuate = false;
		AudioComponent->AttenuationOverrides.bEnableReverbSend = false;
		AudioComponent->AttenuationOverrides.bEnableOcclusion = false;
		AudioComponent->AttenuationOverrides.SpatializationAlgorithm = ESoundSpatializationAlgorithm::SPATIALIZATION_HRTF;
		AudioComponent->AttenuationOverrides.bEnableSourceDataOverride = false;

		// Activate it
		AudioComponent->Play();

		m_VirtualSpeakers.Add(Speaker);
	}

	if (m_VirtualSpeakers.IsEmpty())
	{
		ResetVirtualSpeakers();
		return;
	}

	UE_LOG(
		LogAcousticsNative,
		Display,
		TEXT("Spawning %d virtual speakers to render Project Acoustics Spatial Reverb"),
		m_VirtualSpeakers.Num());
	m_IsInitialized = true;
}

void FAcousticsAudioPluginListener::OnTick(UWorld* InWorld, const int32 ViewportIndex, const FTransform& ListenerTransform, const float InDeltaSeconds)
{
	if (m_AcousticsNativeAudioModule == nullptr || !m_IsInitialized || InWorld == nullptr)
	{
		return;
	}

	const FVector ListenerLocation = ListenerTransform.GetLocation();
	const int32 NumSpeakersToUpdate = FMath::Min3(
		static_cast<int32>(m_NumVirtualSpeakers),
		m_VirtualSpeakers.Num(),
		m_VirtualSpeakerPositions.Num());

	for (int32 i = 0; i < NumSpeakersToUpdate; ++i)
	{
		AAmbientSound* Speaker = m_VirtualSpeakers[i].Get();
		if (!IsValid(Speaker) || Speaker->IsActorBeingDestroyed() || Speaker->GetWorld() != InWorld)
		{
			continue;
		}

		Speaker->SetActorLocation(ListenerLocation + m_VirtualSpeakerPositions[i]);
	}
}

void FAcousticsAudioPluginListener::OnListenerUpdated(FAudioDevice* AudioDevice, const int32 ViewportIndex, const FTransform& ListenerTransform, const float InDeltaSeconds)
{
	// Actor state must stay on the game thread; see OnTick.
}

void FAcousticsAudioPluginListener::OnWorldChanged(FAudioDevice* AudioDevice, UWorld* ListenerWorld)
{
	ResetVirtualSpeakers();
	OnListenerInitialize(AudioDevice, ListenerWorld);
}

void FAcousticsAudioPluginListener::OnListenerShutdown(FAudioDevice* AudioDevice)
{
	ResetVirtualSpeakers();

	if (m_AcousticsNativeAudioModule)
	{
		m_AcousticsNativeAudioModule->UnregisterAudioDevice(AudioDevice);
		m_AcousticsNativeAudioModule = nullptr;
	}

	m_SourceDataOverridePtr = nullptr;
}

void FAcousticsAudioPluginListener::ResetVirtualSpeakers()
{
	m_IsInitialized = false;
	m_NumVirtualSpeakers = 0;
	m_VirtualSpeakers.Empty();
	m_VirtualSpeakerPositions.Empty();
}
