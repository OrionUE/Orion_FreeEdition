/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebGameInventoryAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets a history of Commands
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			appid of game
	 * @param	SteamId			The steam ID of the account to operate on
	 * @param	Command			The Command to run on that asset
	 * @param	ContextId		The context to fetch history for
	 * @param	Arguments		The arguments that were provided with the Command in the first place
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get History Command Details", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|GameInventory|Async")
	static UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString Command, FString ContextId, FString Arguments);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetUserHistory : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets a history of user
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			appid of game
	 * @param	SteamId			The Steam ID to fetch history for
	 * @param	ContextId		The context to fetch history for
	 * @param	StartTime		Start time of the history range to collect
	 * @param	EndTime			End time of the history range to collect
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get User History", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|GameInventory|Async")
	static UOrionSteamWebAPIAsyncActionGetUserHistory* GetUserHistoryAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 StartTime, int32 EndTime);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionHistoryExecuteCommand
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionHistoryExecuteCommand : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets a history of user
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			appid of game
	 * @param	SteamId			The Steam ID to fetch history for
	 * @param	ContextId		The context to fetch history for
	 * @param	ActorId			A unique 32 bit ID for the support person executing the Command
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="History Execute Commands", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|GameInventory|Async")
	static UOrionSteamWebAPIAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 ActorId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionSupportGetAssetHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionSupportGetAssetHistory : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets a history of user
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	AppId			appid of game
	 * @param	AssetId			The asset ID to operate on
	 * @param	ContextId		The context to fetch history for
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Support Get Asset History", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|GameInventory|Async")
	static UOrionSteamWebAPIAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString AssetId, FString ContextId);
};
