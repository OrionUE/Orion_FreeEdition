/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebAppsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionGetAppBetas
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamAppsAsyncActionGetAppBetas : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets all of the beta branches for the specified application.
	 *
	 * NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	 *
	 * @param	Key			Steamworks Web API publisher authentication key.
	 * @param	AppID		The App ID to get the betas of.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get App Betas", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Apps|Async")
	static UOrionSteamAppsAsyncActionGetAppBetas* GetAppBetasAsync(UObject* WorldContextObject, FString Key, int32 AppID);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionGetAppBuilds
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamAppsAsyncActionGetAppBuilds : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 *�Gets an applications build history.
	 *
	 * NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	 *
	 * @param	Key			Steamworks Web API publisher authentication key.
	 * @param	AppID		The App ID to get the build history of.
	 * @param	Count		The number of builds to retrieve, the default is 10.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get App Builds", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Apps|Async")
	static UOrionSteamAppsAsyncActionGetAppBuilds* GetAppBuildsAsync(UObject* WorldContextObject, FString Key, int32 AppID, int32 Count = 10);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionGetAppDepotVersions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamAppsAsyncActionGetAppDepotVersions : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets all the versions of all the depots for the specified application.
	 *
	 * NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	 *
	 * @param	Key			Steamworks Web API publisher authentication key.
	 * @param	AppID		The App ID to get the depot versions for.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get App Depot Versions", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Apps|Async")
	static UOrionSteamAppsAsyncActionGetAppDepotVersions* GetAppDepotVersionsAsync(UObject* WorldContextObject, FString Key, int32 AppID);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionGetAppList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamAppsAsyncActionGetAppList : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UOrionSteamAppsAsyncActionGetAppList()
	{
		OnOrionSteamWebAPIAppListCallback.BindUFunction(this, "HandleCallback");
	}

	virtual ~UOrionSteamAppsAsyncActionGetAppList() override
	{
		OnOrionSteamWebAPIAppListCallback.Unbind();
	}

	UFUNCTION()
	virtual void HandleCallback(const TArray<FWebAppsGetAppList>& data, bool bWasSuccessful)
	{
		OnCallback.Broadcast(data, bWasSuccessful);

		SetReadyToDestroy();
	};

	/**
	 * Gets the complete list of public apps.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get App List", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Apps|Async")
	static UOrionSteamAppsAsyncActionGetAppList* GetAppListAsync(UObject* WorldContextObject);

	UPROPERTY(BlueprintAssignable)
	FOnOrionSteamWebAPIAppListAsyncCallback OnCallback;

	FOnOrionSteamWebAPIAppListCallback OnOrionSteamWebAPIAppListCallback;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionGetCheatingReports
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamAppsAsyncActionGetCheatingReports : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get a list of cheating reports submitted for this app.
	 *
	 * Used to gather the cheating reports so that they may be reviewed and a determination made.
	 * NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	 *
	 * @param	Key					Steamworks Web API publisher authentication key.
	 * @param	AppID				AppID of game
	 * @param	TimeBegin			Time range begin
	 * @param	TimeEnd				Time range end
	 * @param	bIncludeReports		include reports that were not bans
	 * @param	bIncludeBans		include reports that were bans
	 * @param	ReportidMin			minimum report id
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Cheating Reports", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Apps|Async")
	static UOrionSteamAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(UObject* WorldContextObject, FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionGetPlayersBanned
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamAppsAsyncActionGetPlayersBanned : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	 *
	 * @param	Key		Steamworks Web API publisher authentication key.
	 * @param	AppID		AppID of game
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Players Banned", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Apps|Async")
	static UOrionSteamAppsAsyncActionGetPlayersBanned* GetPlayersBannedAsync(UObject* WorldContextObject, FString Key, int32 AppID);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionGetServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamAppsAsyncActionGetServerList : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	 *
	 * @param	Key			Steamworks Web API publisher authentication key.
	 * @param	Filter		Query filter string
	 * @param	Limit		Limit number of servers in the response
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Server List", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Apps|Async")
	static UOrionSteamAppsAsyncActionGetServerList* GetServerListAsync(UObject* WorldContextObject, FString Key, FString Filter, int32 Limit);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionGetServersAtAddress
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamAppsAsyncActionGetServersAtAddress : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * @param	Addr	IP or IP:queryport to list
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Servers at Address", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Apps|Async")
	static UOrionSteamAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(UObject* WorldContextObject, FString Addr);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionSetAppBuildLive
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamAppsAsyncActionSetAppBuildLive : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	 *
	 * @param	Key				Steamworks Web API publisher authentication key.
	 * @param	AppID			AppID of game
	 * @param	BuildID			BuildID
	 * @param	BetaKey			beta key, required. Use public for default branch
	 * @param	Description		optional description for this build
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Set App Build Live", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Apps|Async")
	static UOrionSteamAppsAsyncActionSetAppBuildLive* SetAppBuildLiveAsync(UObject* WorldContextObject, FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionUpToDateCheck
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamAppsAsyncActionUpToDateCheck : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * @param	AppID		AppID of game
	 * @param	Version		The installed version of the game
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Up To Date Check", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Apps|Async")
	static UOrionSteamAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(UObject* WorldContextObject, int32 AppID, int32 Version);
};
