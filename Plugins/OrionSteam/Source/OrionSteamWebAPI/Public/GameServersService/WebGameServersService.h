/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebGameServersService.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebGameServersService : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebGameServersService()
	{
		SubsystemType = ESubsystemWeb::GameServers;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Gets a list of game server accounts with their logon tokens
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|GameServersService")
	void GetAccountList(const FOnOrionSteamWebAPICallback& Callback, FString Key);

	/**
	 * Creates a persistent game server account
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	AppId		The app to use the account for
	 * @param	Memo		The Memo to set on the new account
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|GameServersService")
	void CreateAccount(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Memo);

	/**
	 * This method changes the Memo associated with the game server account. Memos do not affect the account in any way.
	 * The Memo shows up in the GetAccountList response and serves only as a reminder of what the account is used for.
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		The SteamID of the game server to set the Memo on
	 * @param	Memo		The Memo to set on the new account
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|GameServersService")
	void SetMemo(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, FString Memo);

	/**
	 * Generates a new login token for the specified game server
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		The SteamID of the game server to reset the login token of
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|GameServersService")
	void ResetLoginToken(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId);

	/**
	 * Deletes a persistent game server account
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		The SteamID of the game server account to delete
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|GameServersService")
	void DeleteAccount(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId);

	/**
	 * Gets public information about a given game server account
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		The SteamID of the game server to get info on
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|GameServersService")
	void GetAccountPublicInfo(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId);

	/**
	 * Queries the status of the specified token, which must be owned by you
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	LoginToken		Login token to query
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|GameServersService")
	void QueryLoginToken(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString LoginToken);

	/**
	 * performs a GSLT ban/unban of GSLT associated with a GS. If banning, also bans associated users' GSLTs.
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamId
	 * @param	bBanned
	 * @param	BanSeconds
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|GameServersService")
	void SetBanStatus(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, bool bBanned, int32 BanSeconds);

	/**
	 * Gets a list of server SteamIDs given a list of IPs
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	ServerIp
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|GameServersService")
	void GetServerSteamIdsByIP(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString ServerIp);

	/**
	 * Gets a list of server IP addresses given a list of SteamIDs
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	ServerSteamId
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|GameServersService")
	void GetServerIPsBySteamId(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString ServerSteamId);
};
