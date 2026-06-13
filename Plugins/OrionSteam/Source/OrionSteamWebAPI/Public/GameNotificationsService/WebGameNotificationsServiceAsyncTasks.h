/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPICreateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPICreateSession : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPICreateSession(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 Appid, FString Context, FString Title, FString Users, FString SteamId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameNotificationsService", "CreateSession", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", Appid);
		m_RequestString.AddNumberField("context", FCString::Atoi64(*Context));
		m_RequestString.AddStringField("title", Title);
		m_RequestString.AddStringField("users", Users);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPICreateSession() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPICreateSession"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIUpdateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIUpdateSession : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIUpdateSession(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SessionId, int32 Appid, FString Title, FString Users, FString SteamId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameNotificationsService", "UpdateSession", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("sessionID", FCString::Atoi64(*SessionId));
		m_RequestString.AddNumberField("appid", Appid);
		m_RequestString.AddStringField("title", Title);
		m_RequestString.AddStringField("users", Users);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIUpdateSession() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIUpdateSession"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIEnumerateSessionsForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIEnumerateSessionsForApp : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIEnumerateSessionsForApp(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 Appid, FString SteamId, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameNotificationsService", "EnumerateSessionsForApp", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("appid", Appid);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddBoolField("include_all_user_messages", bIncludeAllUserMessages);
		m_RequestString.AddBoolField("include_auth_user_message", bIncludeAuthUserMessage);
		m_RequestString.AddStringField("language", Language);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIEnumerateSessionsForApp() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIEnumerateSessionsForApp"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetSessionDetailsForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetSessionDetailsForApp : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetSessionDetailsForApp(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString Sessions, int32 Appid, FString Language)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameNotificationsService", "GetSessionDetailsForApp", Key, 1, EVerb::GET)
	{
		m_RequestString.AddStringField("sessions", Sessions);
		m_RequestString.AddNumberField("appid", Appid);
		m_RequestString.AddStringField("language", Language);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetSessionDetailsForApp() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetSessionDetailsForApp"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIRequestNotifications
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIRequestNotifications : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIRequestNotifications(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 Appid)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameNotificationsService", "RequestNotifications", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", Appid);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIRequestNotifications() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIRequestNotifications"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIDeleteSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIDeleteSession : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIDeleteSession(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SessionId, int32 Appid, FString SteamId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameNotificationsService", "DeleteSession", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("sessionid", FCString::Atoi64(*SessionId));
		m_RequestString.AddNumberField("appid", Appid);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIDeleteSession() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIDeleteSession"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIDeleteSessionBatch
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIDeleteSessionBatch : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIDeleteSessionBatch(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SessionId, int32 Appid)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameNotificationsService", "DeleteSessionBatch", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("sessionid", FCString::Atoi64(*SessionId));
		m_RequestString.AddNumberField("appid", Appid);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIDeleteSessionBatch() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIDeleteSessionBatch"));
	}
};
