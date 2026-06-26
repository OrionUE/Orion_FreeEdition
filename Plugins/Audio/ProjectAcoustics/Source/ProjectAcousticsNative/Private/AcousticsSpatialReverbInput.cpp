/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "AcousticsSpatialReverbInput.h"

#include "AcousticsSourceDataOverride.h"
#include "Audio.h"

void FSoundEffectAcousticsSpatialReverbInput::Init(const FSoundEffectSubmixInitData& InInitData)
{
	m_SampleRate = FMath::RoundToInt(InInitData.SampleRate);
	OnPresetChanged();
}

void FSoundEffectAcousticsSpatialReverbInput::OnPresetChanged()
{
	const auto* AcousticsPreset = Cast<USoundEffectAcousticsSpatialReverbInputPreset>(Preset);
	if (AcousticsPreset == nullptr)
	{
		m_SourceDataOverridePtr = nullptr;
		m_SourceId = INDEX_NONE;
		return;
	}

	m_SourceDataOverridePtr = AcousticsPreset->SourceDataOverridePtr;
	m_SourceId = AcousticsPreset->SourceId;
}

void FSoundEffectAcousticsSpatialReverbInput::OnProcessAudio(
	const FSoundEffectSubmixInputData& InData, FSoundEffectSubmixOutputData& OutData)
{
	if (m_SourceDataOverridePtr != nullptr && m_SourceId != INDEX_NONE && InData.AudioBuffer != nullptr &&
		InData.NumChannels > 0 && InData.NumFrames > 0)
	{
		ISourceBufferListener::FOnNewBufferParams Params;
		Params.AudioData = InData.AudioBuffer->GetData();
		Params.SourceId = m_SourceId;
		Params.NumSamples = InData.AudioBuffer->Num();
		Params.NumChannels = InData.NumChannels;
		Params.SampleRate = m_SampleRate;

		m_SourceDataOverridePtr->SaveNewInputBuffer(Params);
	}

	if (OutData.AudioBuffer != nullptr)
	{
		FMemory::Memzero(OutData.AudioBuffer->GetData(), sizeof(float) * OutData.AudioBuffer->Num());
	}
}
