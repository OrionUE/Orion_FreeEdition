/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "OrionSystemStatics.generated.h"

UCLASS()
class UOrionSystemStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="System")
	static bool IsEditor();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="System")
	static bool IsShippingBuild();

	UFUNCTION(BlueprintCallable, Category="System")
	static FPrimaryAssetId GetPrimaryAssetIdFromUserFacingExperienceName(const FString& AdvertisedExperienceID);

	UFUNCTION(BlueprintCallable, Category="System", meta=(WorldContext="WorldContextObject"))
	static void ActivateListenSessionInvite(const UObject* WorldContextObject);
};
