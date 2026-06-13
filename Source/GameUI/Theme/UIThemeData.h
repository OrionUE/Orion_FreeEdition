/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DataAsset.h"
#include "Math/Color.h"

#include "UIThemeData.generated.h"

UCLASS(BlueprintType)
class GAMEUI_API UUIThemeData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UUIThemeData();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI Theme|Color")
	FLinearColor MainThemeColor;
};
