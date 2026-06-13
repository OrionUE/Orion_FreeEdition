/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "OrionSteamTypes.h"

#include "OrionSteamFriendsLibrary.generated.h"

class UTexture2D;

UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamFriendsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam|Friends")
	static int32 GetFriendCount();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam|Friends")
	static FOrionSteamId GetFriendByIndex(int32 InFriendIndex);

	UFUNCTION(BlueprintCallable, Category="OrionSteam|Friends")
	static UTexture2D* GetSmallFriendAvatar(FOrionSteamId InFriendId);

	UFUNCTION(BlueprintCallable, Category="OrionSteam|Friends")
	static UTexture2D* GetMediumFriendAvatar(FOrionSteamId InFriendId);

	UFUNCTION(BlueprintCallable, Category="OrionSteam|Friends")
	static UTexture2D* GetLargeFriendAvatar(FOrionSteamId InFriendId);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam|Friends")
	static FString GetFriendPersonaName(FOrionSteamId InFriendId);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam|Friends")
	static EOrionSteamPersonaState GetFriendPersonaState(FOrionSteamId InFriendId);
};
