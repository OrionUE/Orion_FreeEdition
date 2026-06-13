/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebLobbyMatchmakingServiceTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPICreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPICreateLobby : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPICreateLobby(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 MaxMembers, EOrionSteamWebAPILobbyType LobbyType, FString LobbyName, FString InputJson, TArray<FString> SteamIdInvitedMembers, FString LobbyMetaData)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "ILobbyMatchmakingService", "CreateLobby", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("max_members", MaxMembers);
		m_RequestString.Add("lobby_type", static_cast<int32>(LobbyType));
		m_RequestString.Add("lobby_name", LobbyName);
		m_RequestString.AddStringField("input_json", InputJson);
		TArray<TSharedPtr<FJsonValue>> Array;

		for (int32 i = 0; i < SteamIdInvitedMembers.Num(); i++)
		{
			Array.Add(MakeShared<FJsonValueString>(LexToString(SteamIdInvitedMembers[i])));
		}

		m_RequestString.AddArrayField("steamid_invited_members", Array);
		m_RequestString.AddStringField("lobby_metadata", LobbyMetaData);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPICreateLobby() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIRemoveUserFromLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIRemoveUserFromLobby : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIRemoveUserFromLobby(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamIdToRemove, FString SteamIdLobby, FString InputJson)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "ILobbyMatchmakingService", "RemoveUserFromLobby", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("steamid_to_remove", FCString::Atoi64(*SteamIdToRemove));
		m_RequestString.AddNumberField("steamid_lobby", FCString::Atoi64(*SteamIdLobby));
		m_RequestString.AddStringField("input_json", InputJson);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIRemoveUserFromLobby() = delete;
};
