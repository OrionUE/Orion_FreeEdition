/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebPublishedItemVoting.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebPublishedItemVoting : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebPublishedItemVoting()
	{
		SubsystemType = ESubsystemWeb::PublishedItemVoting;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Item Vote Summary
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param	SteamId					Steam ID of user
	 * @param	AppId					AppId of product
	 * @param	PublishedFileIds		The Published File ID who's vote details are requdred
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|PublishedItemVoting", meta=(AutoCreateRefTerm="PublishedFileIDd"))
	void ItemVoteSummary(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, TArray<FString> PublishedFileIds);

	/**
	 * Item Vote Summary
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param	SteamId					Steam ID of user
	 * @param	PublishedFileIds		The Published File ID who's vote details are requdred
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|PublishedItemVoting", meta=(AutoCreateRefTerm="PublishedFileIDd"))
	void UserVoteSummary(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, TArray<FString> PublishedFileIds);
};
