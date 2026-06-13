/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebSteamEconomy.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebSteamEconomy : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebSteamEconomy()
	{
		SubsystemType = ESubsystemWeb::Economy;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Can trade
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				That the Key is associated with. Must be a steam economy app.
	 * @param	SteamId				SteamID of user attempting to initiate a trade
	 * @param	TargetId (int64)	SteamID of user that is the target of the trade invitation
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|SteamEconomy")
	void CanTrade(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FString TargetId);

	/**
	 * Finalize Asset Transaction
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	AppId		The app ID the user is buying assets for
	 * @param	SteamId		SteamID of the user making a purchase
	 * @param	TxnId		The transaction ID
	 * @param	Language	The local Language for the user
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|SteamEconomy")
	void FinalizeAssetTransaction(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FString TxnId, FString Language);

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
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|SteamEconomy")
	void GetAssetClassInfo(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Language, int32 ClassCount, FString ClassId, FString InstanceId);

	/**
	 * Returns prices and categories for items that users are able to purchase.
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			The app ID the user is buying assets for
	 * @param	Currency		The currency to filter for
	 * @param	Language		The user's local Language
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|SteamEconomy")
	void GetAssetPrices(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Currency, FString Language);

	/**
	 * Get Exported Assets for User
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	SteamId				SteamID of user
	 * @param	AppId				The app to get exported items from.
	 * @param	ContextId (int64)	The context in the app to get exported items from.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|SteamEconomy")
	void GetExportedAssetsForUser(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString ContextId);

	/**
	 * Get Market Prices
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			The app ID the user is buying assets for
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|SteamEconomy")
	void GetMarketPrices(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId);

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
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|SteamEconomy")
	void StartAssetTransaction(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FString AssetId, int32 AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth);

	/**
	 * Start Trade
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			The app ID the user is buying assets for
	 * @param	SteamIDd		SteamID of first user in the trade
	 * @param	SteamId2		SteamID of second user in the trade
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|SteamEconomy")
	void StartTrade(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamIDd, FString SteamId2);
};
