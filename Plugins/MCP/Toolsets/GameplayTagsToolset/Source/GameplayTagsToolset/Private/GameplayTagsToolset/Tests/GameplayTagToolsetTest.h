// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagToolsetTest.generated.h"

// Minimal test asset that holds a gameplay tag container for searchable name tests.
UCLASS(Hidden)
class UGameplayTagTestAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FGameplayTagContainer Tags;
};
