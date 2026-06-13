/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebSteamCommunity.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebSteamCommunity : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebSteamCommunity()
	{
		SubsystemType = ESubsystemWeb::Community;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Allows publishers to report users who are behaving badly on their community hub.
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamIdActor	SteamID of user doing the reporting
	 * @param	SteamIdTarget	SteamID of the entity being accused of abuse
	 * @param	AppId			AppID to check for ownership
	 * @param	AbuseType		Abuse type code (see EAbuseReportType enum)
	 * @param	ContentType		Content type code (see ECommunityContentType enum)
	 * @param	Description		Narrative from user
	 * @param	Gid				GID of related record (depends on content type)
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|SteamCommunity")
	void ReportAbuse(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamIdActor, FString SteamIdTarget, int32 AppId, int32 AbuseType, int32 ContentType, FString Description, FString Gid);
};
