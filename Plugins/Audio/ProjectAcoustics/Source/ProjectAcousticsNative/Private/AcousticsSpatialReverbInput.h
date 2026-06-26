/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Sound/SoundEffectSubmix.h"

#include "AcousticsSpatialReverbInput.generated.h"

class FAcousticsSourceDataOverride;

USTRUCT(BlueprintType)
struct FSoundEffectAcousticsSpatialReverbInputSettings
{
	GENERATED_BODY()

	FSoundEffectAcousticsSpatialReverbInputSettings()
	{
	}
};

/**
 * Captures a source's pre-distance submix send and forwards it into the Project Acoustics spatial reverb input path.
 */
class FSoundEffectAcousticsSpatialReverbInput : public FSoundEffectSubmix
{
public:
	virtual void Init(const FSoundEffectSubmixInitData& InInitData) override;
	virtual void OnPresetChanged() override;
	virtual void OnProcessAudio(const FSoundEffectSubmixInputData& InData, FSoundEffectSubmixOutputData& OutData) override;

private:
	int32 m_SourceId = INDEX_NONE;
	int32 m_SampleRate = 0;
	FAcousticsSourceDataOverride* m_SourceDataOverridePtr = nullptr;
};

UCLASS(ClassGroup = AudioSubmixEffect, meta = (BlueprintSpawnableComponent))
class USoundEffectAcousticsSpatialReverbInputPreset : public USoundEffectSubmixPreset
{
	GENERATED_BODY()

public:
	EFFECT_PRESET_METHODS(SoundEffectAcousticsSpatialReverbInput)

	virtual FColor GetPresetColor() const override { return FColor(196.0f, 185.0f, 121.0f); }

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SubmixEffect|Preset")
	FSoundEffectAcousticsSpatialReverbInputSettings Settings;

	int32 SourceId = INDEX_NONE;
	FAcousticsSourceDataOverride* SourceDataOverridePtr = nullptr;
};
