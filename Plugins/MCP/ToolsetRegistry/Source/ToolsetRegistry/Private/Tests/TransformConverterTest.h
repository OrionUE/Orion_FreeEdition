// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "TransformConverterTest.generated.h"


USTRUCT(BlueprintType)
struct FTransformConverterTest
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FTransform TestTransform;
};
