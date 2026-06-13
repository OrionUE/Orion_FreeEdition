/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebEconServiceAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetTradeHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetTradeHistory : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets a history of trades
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param	MaxTrades				The number of trades to return information for
	 * @param	StartAfterTime			The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back
	 * @param	StartAfterTradeId		The tradeid shown on the previous page of results, or the ID of the first trade if navigating back
	 * @param	bNavigatingBack			The user wants the previous page of results, so return the previous max_trades trades before the start time and ID
	 * @param	bGetDescriptions		If set, the item display data for the items included in the returned trades will also be returned
	 * @param	Language				The language to use when loading item display data
	 * @param	bIncludeFailed			Include Failed
	 * @param	bIncludeTotal			If set, the total number of trades the account has participated in will be included in the response
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Trade History", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconService|Async")
	static UOrionSteamWebAPIAsyncActionGetTradeHistory* GetTradeHistoryAsync(UObject* WorldContextObject, FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionFlushInventoryCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionFlushInventoryCache : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Flushes the cache for a user's inventory in a specific app context
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamId			User to clear cache for.
	 * @param	AppId			App to clear cache for.
	 * @param	ContextId		Context to clear cache for.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Flush Inventory Cache", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconService|Async")
	static UOrionSteamWebAPIAsyncActionFlushInventoryCache* FlushInventoryCacheAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString ContextId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Flush Asset Appearance Cache", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconService|Async")
	static UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(UObject* WorldContextObject, FString Key, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionFlushContextCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionFlushContextCache : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Flush Context Cache", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconService|Async")
	static UOrionSteamWebAPIAsyncActionFlushContextCache* FlushContextCacheAsync(UObject* WorldContextObject, FString Key, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetTradeOffers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetTradeOffers : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get a list of sent or received trade offers
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param	bGetSentOffers			Request the list of sent offers.
	 * @param	bGetReceivedOffers		Request the list of received offers.
	 * @param	bGetDescriptions		If set, the item display data for the items included in the returned trade offers will also be returned.
	 * @param	Language				The language to use when loading item display data.
	 * @param	bActiveOnly				Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff
	 * @param	bHistoricalOnly			Indicates we should only return offers which are not active.
	 * @param	TimeHistoricalCutoff	When active_only is set, offers updated since this time will also be returned
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Trade Offers", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconService|Async")
	static UOrionSteamWebAPIAsyncActionGetTradeOffers* GetTradeOffersAsync(UObject* WorldContextObject, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetTradeOffer : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets a specific trade offer
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Trade Offer", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconService|Async")
	static UOrionSteamWebAPIAsyncActionGetTradeOffer* GetTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId, FString Language);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetTradeOffersSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetTradeOffersSummary : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get counts of pending and new trade offers
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param	TimeLastVisit			The time the user last visited. If not passed, will use the time the user last visited the trade offer page.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Trade Offers Summary", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconService|Async")
	static UOrionSteamWebAPIAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(UObject* WorldContextObject, FString Key, int32 TimeLastVisit);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetTradeOffersSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionDeclineTradeOffer : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Decline a trade offer someone sent to us
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param	TradeOfferId
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Decline Trade Offer", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|EconService|Async")
	static UOrionSteamWebAPIAsyncActionDeclineTradeOffer* DeclineTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionCancelTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionCancelTradeOffer : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Cancel a trade offer we sent
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	TradeOfferId
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Cancel Trade Offer"), Category="OrionSteamWebAPI|EconService|Async")
	static UOrionSteamWebAPIAsyncActionCancelTradeOffer* CancelTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId);
};
