/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "OrionFriendUtilities.generated.h"

struct FOrionPlayerID;

UCLASS()
class ORIONGAME_API UOrionFriendUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	static FString GetPlayerNickname(UObject* WorldContextObject, const FOrionPlayerID& InPlayerID);

	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	static UTexture2D* GetPlayerSmallAvatar(UObject* WorldContextObject, const FOrionPlayerID& InPlayerID);

	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	static UTexture2D* GetPlayerMediumAvatar(UObject* WorldContextObject, const FOrionPlayerID& InPlayerID);

	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	static UTexture2D* GetPlayerLargeAvatar(UObject* WorldContextObject, const FOrionPlayerID& InPlayerID);
};
