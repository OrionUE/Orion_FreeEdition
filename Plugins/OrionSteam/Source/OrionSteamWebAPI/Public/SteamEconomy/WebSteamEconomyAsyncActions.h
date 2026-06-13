/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebSteamEconomyAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionCanTrade
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionCanTrade : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Can trade
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				That the Key is associated with. Must be a steam economy app.
	 * @param	SteamId				SteamID of user attempting to initiate a trade
	 * @param	TargetId (int64)	SteamID of user that is the target of the trade invitation
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Can Trade", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamEconomy|Async")
	static UOrionSteamWebAPIAsyncActionCanTrade* CanTradeAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString TargetId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Finalize Asset Transaction
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	AppId		The app ID the user is buying assets for
	 * @param	SteamId		SteamID of the user making a purchase
	 * @param	TxnId		The transaction ID
	 * @param	Language	The local Language for the user
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Finalize Asset Transaction", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamEconomy|Async")
	static UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction* FinalizeAssetTransactionAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString TxnId, FString Language);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetAssetClassInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetAssetClassInfo : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get Asset Class Info
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			The app ID the user is buying assets for
	 * @param	Language		The user's local Language
	 * @param	ClassCount		Number of classes requested. Must be at least one.
	 * @param	ClassId			Class ID of the nth class.
	 * @param	InstanceId		Instance ID of the nth class.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Asset Class Info", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamEconomy|Async")
	static UOrionSteamWebAPIAsyncActionGetAssetClassInfo* GetAssetClassInfoAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Language, int32 ClassCount, FString ClassId, FString InstanceId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetAssetPrices
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetAssetPrices : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Returns prices and categories for items that users are able to purchase.
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			The app ID the user is buying assets for
	 * @param	Currency		The currency to filter for
	 * @param	Language		The user's local Language
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Asset Prices", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamEconomy|Async")
	static UOrionSteamWebAPIAsyncActionGetAssetPrices* GetAssetPricesAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Currency, FString Language);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get Exported Assets for User
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	SteamId				SteamID of user
	 * @param	AppId				The app to get exported items from.
	 * @param	ContextId (int64)	The context in the app to get exported items from.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Exported Assets for User", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamEconomy|Async")
	static UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser* GetExportedAssetsForUserAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString ContextId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetMarketPrices
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetMarketPrices : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get Market Prices
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			The app ID the user is buying assets for
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Market Prices", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamEconomy|Async")
	static UOrionSteamWebAPIAsyncActionGetMarketPrices* GetMarketPricesAsync(UObject* WorldContextObject, FString Key, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionStartAssetTransaction
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionStartAssetTransaction : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Start Asset Transaction
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				The app ID the user is buying assets for
	 * @param	SteamId				SteamID of user making a purchase
	 * @param	AssetId				The ID of the first asset the user is buying - there must be at least one
	 * @param	AssetQuantity		The quantity of assetid0's the the user is buying
	 * @param	Currency			The local currency for the user
	 * @param	Language			The local Language for the user
	 * @param	Ipaddress			The user's IP address
	 * @param	Referer				The referring URL
	 * @param	bClientAuth			If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Start Asset Transaction"), Category="OrionSteamWebAPI|SteamEconomy|Async")
	static UOrionSteamWebAPIAsyncActionStartAssetTransaction* StartAssetTransactionAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString AssetId, int32 AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionStartTrade
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionStartTrade : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Start Trade
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			The app ID the user is buying assets for
	 * @param	SteamId1		SteamID of first user in the trade
	 * @param	SteamId2		SteamID of second user in the trade
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Start Trade"), Category="OrionSteamWebAPI|SteamEconomy|Async")
	static UOrionSteamWebAPIAsyncActionStartTrade* StartTradeAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId1, FString SteamId2);
};
