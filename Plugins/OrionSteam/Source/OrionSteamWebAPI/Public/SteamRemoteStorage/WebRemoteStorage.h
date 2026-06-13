/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebRemoteStorage.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebRemoteStorage : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebRemoteStorage()
	{
		SubsystemType = ESubsystemWeb::OrionSteamWebAPI;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Enumerate User Published Files
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		SteamID of user
	 * @param	AppId		AppId of product
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|RemoteStorage")
	void EnumerateUserPublishedFiles(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId);

	/**
	 * Enumerate User Subscribed Files
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		SteamID of user
	 * @param	AppId		AppId of product
	 * @param	ListType	EUCMListType
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|RemoteStorage")
	void EnumerateUserSubscribedFiles(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, int32 ListType);

	/**
	 * Get Collection Details
	 *
	 * @param	PublishedFileIds		collection ids to get the details for
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|RemoteStorage")
	void GetCollectionDetails(const FOnOrionSteamWebAPICallback& Callback, TArray<FString> PublishedFileIds);

	/**
	 * Get Collection Details
	 *
	 * @param	publishedFileIDs		collection ids to get the details for
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|RemoteStorage")
	void GetPublishedFileDetails(const FOnOrionSteamWebAPICallback& Callback, FString PublishedFileIds);

	/**
	 * Get UGC File Details
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId			If specified, only returns details if the file is owned by the SteamID specified
	 * @param	UGCID	 		ID of UGC file to get info for
	 * @param	AppId			AppId of product
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|RemoteStorage")
	void GetUGCFileDetails(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, FString UGCID, int32 AppId);

	/**
	 * Set UGC Used By GC
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamId			If specified, only returns details if the file is owned by the SteamID specified
	 * @param	UGCID	 		ID of UGC file to get info for
	 * @param	AppId			AppId of product
	 * @param	bUsed			New state of flag
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|RemoteStorage")
	void SetUGCUsedByGC(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, FString UGCID, int32 AppId, bool bUsed);

	/**
	 * Subscribe Published File
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param	SteamId					If specified, only returns details if the file is owned by the SteamID specified
	 * @param	AppId					AppId of product
	 * @param	PublishedFileIds			published file id to subscribe to
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|RemoteStorage")
	void SubscribePublishedFile(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString PublishedFileIds);

	/**
	 * Unsubscribe Published File
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param	SteamId					If specified, only returns details if the file is owned by the SteamID specified
	 * @param	AppId					AppId of product
	 * @param	PublishedFileIds			published file id to unsubscribe from
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|RemoteStorage")
	void UnsubscribePublishedFile(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString PublishedFileIds);
};
