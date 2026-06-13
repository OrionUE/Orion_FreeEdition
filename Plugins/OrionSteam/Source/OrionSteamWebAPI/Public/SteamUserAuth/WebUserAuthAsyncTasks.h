/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAuthenticateUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAuthenticateUser : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAuthenticateUser(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString SteamId, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUserAuth", "AuthenticateUser", "", 1, EVerb::POST, true)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("sessionkey", SessionKey);
		m_RequestString.Add("encrypted_loginkey", EncryptedLoginKey);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAuthenticateUser() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAuthenticateUserTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAuthenticateUserTicket : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAuthenticateUserTicket(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Ticket)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUserAuth", "AuthenticateUserTicket", Key, 1, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("ticket", Ticket);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAuthenticateUserTicket() = delete;
};
