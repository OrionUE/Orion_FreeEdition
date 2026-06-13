/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "OrionSteamTypes.h"

#include "OrionSteamUserLibrary.generated.h"

UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamUserLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam|User")
	static FOrionSteamId GetLocalUserId();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam|User")
	static FOrionSteamId MakeUserIdFromString(const FString& InUserId);
};
