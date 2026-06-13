/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebEconMarketServiceAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetMarketEligibility
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetMarketEligibility : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Checks whether or not an account is allowed to use the market
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		The SteamID of the user to check
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Market Eligibility", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconMarketService|Async")
	static UOrionSteamWebAPIAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(UObject* WorldContextObject, FString Key, FString SteamId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionCancelAppListingsForUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionCancelAppListingsForUser : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Cancels all of a user's listings for a specific app ID.
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			The app making the request
	 * @param	SteamId			The SteamID of the user whose listings should be canceled
	 * @param	bSynchronous	Whether or not to wait until all listings have been canceled before returning the response
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Cancel App Listings for User", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconMarketService|Async")
	static UOrionSteamWebAPIAsyncActionCancelAppListingsForUser* CancelAppListingsForUserAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, bool bSynchronous);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetAssetID
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetAssetID : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Returns the asset ID of the item sold in a listing
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request
	 * @param	ListingId (int64)	The identifier of the listing to get information for
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Asset ID", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconMarketService|Async")
	static UOrionSteamWebAPIAsyncActionGetAssetID* GetAssetIDAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString ListingId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetPopular
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetPopular : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets the most popular items
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	Language			The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request
	 * @param	Rows				Number of rows per page
	 * @param	Start				The result number to start at
	 * @param	FilterAppID			If present, the app ID to limit results to
	 * @param	ECurrency			If present, prices returned will be represented in this currency
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Popular", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconMarketService|Async")
	static UOrionSteamWebAPIAsyncActionGetPopular* GetPopularAsync(UObject* WorldContextObject, FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency);
};
