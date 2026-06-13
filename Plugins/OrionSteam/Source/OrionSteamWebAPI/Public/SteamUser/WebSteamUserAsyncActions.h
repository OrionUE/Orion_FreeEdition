/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "WebSteamUserTypes.h"
#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebSteamUserAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionCheckAppOwnership
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionCheckAppOwnership : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Checks if the specified user owns the app.
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		SteamID of user
	 * @param	AppId		AppID to check for ownership
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Check App Ownership", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamUser|Async")
	static UOrionSteamWebAPIAsyncActionCheckAppOwnership* CheckAppOwnershipAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetAppPriceInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetAppPriceInfo : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get App Price Info
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		SteamID of user
	 * @param	AppIds		Max: 100
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get App Price Info", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamUser|Async")
	static UOrionSteamWebAPIAsyncActionGetAppPriceInfo* GetAppPriceInfoAsync(UObject* WorldContextObject, FString Key, FString SteamId, TArray<int32> AppIds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetFriendList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetFriendList : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get Friend List
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamId			SteamID of user
	 * @param	Relationship	relationship type (ex: friend)
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Friend List", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamUser|Async")
	static UOrionSteamWebAPIAsyncActionGetFriendList* GetFriendListAsync(UObject* WorldContextObject, FString Key, FString SteamId, FString Relationship);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetPlayerBans
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetPlayerBans : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get Player Bans
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Player Bans", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamUser|Async")
	static UOrionSteamWebAPIAsyncActionGetPlayerBans* GetPlayerBansAsync(UObject* WorldContextObject, FString Key, TArray<FString> SteamIds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetPlayerSummaries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetPlayerSummaries : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get Player Summaries
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamIds		Max: 100
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Player Summaries", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamUser|Async")
	static UOrionSteamWebAPIAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(UObject* WorldContextObject, FString Key, TArray<FString> SteamIds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get Publisher App Ownership
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamId			SteamID of user
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Publisher App Ownership", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamUser|Async")
	static UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(UObject* WorldContextObject, FString Key, FString SteamId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number.
	* From the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in.
	A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	PackageRowVersion		64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.
	* @param	CdKeyRowVersion			64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls.
	*/
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Publisher App Ownership Changes", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|SteamUser|Async")
	static UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChangesAsync(UObject* WorldContextObject, FString Key, FString PackageRowVersion, FString CdKeyRowVersion);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetUserGroupList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetUserGroupList : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get User Group List
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamId			SteamID of user
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get User Group List"), Category="OrionSteamWebAPI|SteamUser|Async")
	static UOrionSteamWebAPIAsyncActionGetUserGroupList* GetUserGroupListAsync(UObject* WorldContextObject, FString Key, FString SteamId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGrantPackage
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGrantPackage : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get User Group List
	 *
	 * This call will only work on packages which have "canbegrantedfromexternal" set to 1.
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	SteamId				SteamID of user
	 * @param	packageID			PackageID to grant
	 * @param	ipaddress			ip address of user in string format(xxx.xxx.xxx.xxx).
	 * @param	thirdPartyKey		Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.
	 * @param	thirdPartyAppID		Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Grant Package"), Category="OrionSteamWebAPI|SteamUser|Async")
	static UOrionSteamWebAPIAsyncActionGrantPackage* GrantPackageAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 packageID, FString ipaddress, FString thirdPartyKey, int32 thirdPartyAppID);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionResolveVanityURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionResolveVanityURL : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Resolve Vanity URL
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	VanityURL		The vanity URL to get a SteamID for
	 * @param	URLType
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Resolve Vanity URL"), Category="OrionSteamWebAPI|SteamUser|Async")
	static UOrionSteamWebAPIAsyncActionResolveVanityURL* ResolveVanityURLAsync(UObject* WorldContextObject, FString Key, FString VanityURL, EVanityUrlType URLType);
};
