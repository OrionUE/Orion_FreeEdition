/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Session/SessionSearchResultSteam.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(SessionSearchResultSteam)

FName USessionSearchResultSteam::GetServerName() const
{
	return FName(SessionResult.GetOnlineSessionSearchResult().Session.OwningUserName);
}

FString USessionSearchResultSteam::GetDescription() const
{
	return SessionResult.GetOnlineSessionSearchResult().GetSessionIdStr();
}

void USessionSearchResultSteam::GetStringSetting(FName Key, FString& Value, bool& bFoundValue) const
{
	bFoundValue = SessionResult.GetOnlineSessionSearchResult().Session.SessionSettings.Get<FString>(Key, /*out*/ Value);
}

void USessionSearchResultSteam::GetIntSetting(FName Key, int32& Value, bool& bFoundValue) const
{
	bFoundValue = SessionResult.GetOnlineSessionSearchResult().Session.SessionSettings.Get<int32>(Key, /*out*/ Value);
}

int32 USessionSearchResultSteam::GetNumOpenPrivateConnections() const
{
	return SessionResult.GetOnlineSessionSearchResult().Session.NumOpenPrivateConnections;
}

int32 USessionSearchResultSteam::GetNumOpenPublicConnections() const
{
	return SessionResult.GetOnlineSessionSearchResult().Session.NumOpenPublicConnections;
}

int32 USessionSearchResultSteam::GetMaxPublicConnections() const
{
	return SessionResult.GetOnlineSessionSearchResult().Session.SessionSettings.NumPublicConnections;
}

int32 USessionSearchResultSteam::GetPingInMs() const
{
	return SessionResult.GetOnlineSessionSearchResult().PingInMs;
}

int32 USessionSearchResultSteam::GetCurrentPlayers() const
{
	return SessionResult.GetOnlineSessionSearchResult().Session.SessionSettings.NumPublicConnections - SessionResult.GetOnlineSessionSearchResult().Session.NumOpenPublicConnections;
}

void USessionSearchResultSteam::SetSessionResult(const FCoreSessionResult& InSessionResult)
{
	SessionResult = InSessionResult;
}

void USessionSearchResultSteam::SetSessionResult(const FSteamSessionResult& InSessionResult)
{
	SetSessionResult(FCoreSessionResult(InSessionResult.Result));
}

FCoreSessionResult USessionSearchResultSteam::GetSessionResult() const
{
	return SessionResult;
}

FBlueprintSessionResult USessionSearchResultSteam::GetBlueprintSessionResult() const
{
	return SessionResult.GetBlueprintSessionResult();
}
