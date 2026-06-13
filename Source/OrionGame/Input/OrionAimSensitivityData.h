/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DataAsset.h"

#include "OrionAimSensitivityData.generated.h"

enum class EOrionGamepadSensitivity : uint8;

/**
 * Defines a set of gamepad sensitivity to a float value
 */
UCLASS(Const)
class ORIONGAME_API UOrionAimSensitivityData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UOrionAimSensitivityData(const FObjectInitializer& ObjectInitializer);
	
	float SensitivityEnumToFloat(const EOrionGamepadSensitivity InSensitivity) const;
	
protected:
	/** Map of SensitivityMap settings to their corresponding float */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EOrionGamepadSensitivity, float> SensitivityMap;
};
