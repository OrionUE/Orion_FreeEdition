/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebEconMarketService.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebEconMarketService : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebEconMarketService()
	{
		SubsystemType = ESubsystemWeb::EconMarket;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Checks whether or not an account is allowed to use the market
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		The SteamID of the user to check
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|EconMarketService")
	void GetMarketEligibility(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId);

	/**
	 * Cancels all of a user's listings for a specific app ID.
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			The app making the request
	 * @param	SteamId			The SteamID of the user whose listings should be canceled
	 * @param	bSynchronous	Whether or not to wait until all listings have been canceled before returning the response
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|EconMarketService")
	void CancelAppListingsForUser(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, bool bSynchronous);

	/**
	 * Returns the asset ID of the item sold in a listing
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request
	 * @param	ListingId (int64)	The identifier of the listing to get information for
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|EconMarketService")
	void GetAssetID(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString ListingId);

	/**
	 * Gets the most popular items
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	Language			The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request
	 * @param	Rows				Number of rows per page
	 * @param	Start				The result number to start at
	 * @param	FilterAppId			If present, the app ID to limit results to
	 * @param	ECurrency			If present, prices returned will be represented in this currency
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|EconMarketService")
	void GetPopular(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency);
};
