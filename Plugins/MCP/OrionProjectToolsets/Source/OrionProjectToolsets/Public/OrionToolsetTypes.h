/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"

#include "OrionToolsetTypes.generated.h"

USTRUCT(BlueprintType)
struct FOrionToolResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Result")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FString AssetPath;
};
