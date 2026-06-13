/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebPublishedItemSearchAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionRankedByPublicationOrder
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionRankedByPublicationOrder : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Ranked by Publication Order
	 *
	 * @param	key						Steamworks Web API publisher authentication key.
	 * @param	steamid					SteamID of user
	 * @param	AppId					AppId of product
	 * @param	StartId					Starting index in the result set(0 based)
	 * @param	Count					Number Requested
	 * @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	 * @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	 * @param	Tag						Tag to filter result set
	 * @param	UserTag					A user specific Tag
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Ranked by Publication Order", AutoCreateRefTerm="Tag,UserTag", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|PlayerService|Async")
	static UOrionSteamWebAPIAsyncActionRankedByPublicationOrder* RankedByPublicationOrderAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionRankedByTrend
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionRankedByTrend : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Ranked by Trend
	 *
	 * @param	key						Steamworks Web API publisher authentication key.
	 * @param	steamid					SteamID of user
	 * @param	AppId					AppId of product
	 * @param	StartId					Starting index in the result set(0 based)
	 * @param	Count					Number Requested
	 * @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	 * @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	 * @param	Days					Number of days for the trend period, including today
	 * @param	Tag						Tag to filter result set
	 * @param	UserTag					A user specific Tag
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Ranked by Trend", AutoCreateRefTerm="Tag,UserTag", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|PlayerService|Async")
	static UOrionSteamWebAPIAsyncActionRankedByTrend* RankedByTrendAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, TArray<FString> Tag, TArray<FString> UserTag);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionRankedByVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionRankedByVote : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Ranked by Vote
	 *
	 * @param	key						Steamworks Web API publisher authentication key.
	 * @param	steamid					SteamID of user
	 * @param	AppId					AppId of product
	 * @param	StartId					Starting index in the result set(0 based)
	 * @param	Count					Number Requested
	 * @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	 * @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	 * @param	Tag						Tag to filter result set
	 * @param	UserTag					A user specific Tag
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Ranked by Vote", AutoCreateRefTerm="Tag,UserTag", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|PlayerService|Async")
	static UOrionSteamWebAPIAsyncActionRankedByVote* RankedByVoteAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionResultSetSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionResultSetSummary : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Result Set Summary
	 *
	 * @param	key						Steamworks Web API publisher authentication key.
	 * @param	steamid					SteamID of user
	 * @param	AppId					AppId of product
	 * @param	StartId					Starting index in the result set(0 based)
	 * @param	bHasAppAdminAccess		Whether the user making the request is an admin for the appand can see private files
	 * @param	FileType				EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items
	 * @param	Tag						Tag to filter result set
	 * @param	UserTag					A user specific Tag
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Result Set Summary", AutoCreateRefTerm="Tag,UserTag", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|PlayerService|Async")
	static UOrionSteamWebAPIAsyncActionResultSetSummary* ResultSetSummaryAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};
