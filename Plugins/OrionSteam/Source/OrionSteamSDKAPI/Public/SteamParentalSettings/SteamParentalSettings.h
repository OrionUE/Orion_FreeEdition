/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "SteamParentalSettingsTypes.h"
#include "SteamParentalSettings.generated.h"

UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamParentalSettings : public UOrionSteamInterface
{
	GENERATED_BODY()
public:
	UOrionSteamParentalSettings();
	virtual ~UOrionSteamParentalSettings() override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam")
	static UOrionSteamParentalSettings* GetSteamParentalSettings();

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Is parental lock enabled
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|ParentalSettings")
	bool BIsParentalLockEnabled();

	/**
	 * Is parental lock locked
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|ParentalSettings")
	bool BIsParentalLockLocked();

	/**
	 * Is app blocked
	 *
	 * @param	AppID
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|ParentalSettings")
	bool BIsAppBlocked(int32 AppID);

	/**
	 * Is app blocked
	 *
	 * @param	AppID
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|ParentalSettings")
	bool BIsAppInBlockList(int32 AppID);

	/**
	 * Is feature blocked
	 *
	 * @param	Feature		feature
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|ParentalSettings")
	bool BIsFeatureBlocked(ESteamParentalFeature Feature);

	/**
	 * Is feature blocked
	 *
	 * @param	Feature		feature
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|ParentalSettings")
	bool BIsFeatureInBlockList(ESteamParentalFeature Feature);
};
