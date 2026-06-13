/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebSteamCommunityAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionReportAbuse
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionReportAbuse : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Allows publishers to report users who are behaving badly on their community hub.
	 *
	 * @param	Key				Steamworks Web API publisher authentication key.
	 * @param	SteamIdActor	SteamID of user doing the reporting
	 * @param	SteamIdTarget	SteamID of the entity being accused of abuse
	 * @param	AppId			AppID to check for ownership
	 * @param	AbuseType		Abuse type code (see EAbuseReportType enum)
	 * @param	ContentType		Content type code (see ECommunityContentType enum)
	 * @param	Description		Narrative from user
	 * @param	Gid				GID of related record (depends on content type)
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Report Abuse", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|PlayerService|Async")
	static UOrionSteamWebAPIAsyncActionReportAbuse* ReportAbuseAsync(UObject* WorldContextObject, FString Key, FString SteamIdActor, FString SteamIdTarget, int32 AppId, int32 AbuseType, int32 ContentType, FString Description, FString Gid);
};
