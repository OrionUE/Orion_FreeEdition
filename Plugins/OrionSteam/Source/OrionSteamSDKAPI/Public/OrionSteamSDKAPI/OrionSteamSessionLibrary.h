/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "OrionSteamSessionLibrary.generated.h"

UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamSessionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Session")
	static bool SendGameSessionInviteToFriend(int32 InLocalUserNum, const FString& InFriendSteamId);
};
