/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIReportPlayerCheating
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIReportPlayerCheating : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIReportPlayerCheating(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ICheatReportingService", "ReportPlayerCheating", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("steamidreporter", FCString::Atoi64(*SteamIdReporter));
		m_RequestString.AddStringField("appData", AppData);
		m_RequestString.AddBoolField("heuristic", bHeuristic);
		m_RequestString.AddBoolField("detection", bDetection);
		m_RequestString.AddBoolField("playerreport", bPlayerReport);
		m_RequestString.AddBoolField("noreportid", bNoReportID);
		m_RequestString.AddNumberField("gamemode", GameMode);
		m_RequestString.AddNumberField("suspicionstarttime", SuspicionStartTime);
		m_RequestString.AddNumberField("severity", Severity);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIReportPlayerCheating() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIReportPlayerCheating"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIRequestPlayerGameBan
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIRequestPlayerGameBan : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIRequestPlayerGameBan(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString ReportID, FString CheatDescription, int32 Duration, bool bDelayBan)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ICheatReportingService", "RequestPlayerGameBan", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("reportid", FCString::Atoi64(*ReportID));
		m_RequestString.AddStringField("cheatdescription", CheatDescription);
		m_RequestString.AddNumberField("duration", Duration);
		m_RequestString.AddBoolField("delayban", bDelayBan);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIRequestPlayerGameBan() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIRequestPlayerGameBan"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIRemovePlayerGameBan
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIRemovePlayerGameBan : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIRemovePlayerGameBan(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ICheatReportingService", "RequestPlayerGameBan", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIRemovePlayerGameBan() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIRemovePlayerGameBan"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetCheatingReports
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetCheatingReports : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetCheatingReports(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 TimeEnd, int32 TimeBegin, FString ReportIdmin, bool bIncludeReports, bool bIncludeBans, FString SteamId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ICheatReportingService", "GetCheatingReports", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("timeend", TimeEnd);
		m_RequestString.AddNumberField("timebegin", TimeBegin);
		m_RequestString.AddNumberField("reportidmin", FCString::Atoi64(*ReportIdmin));
		m_RequestString.AddBoolField("includereports", bIncludeReports);
		m_RequestString.AddBoolField("includebans", bIncludeBans);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetCheatingReports() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetCheatingReports"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIReportCheatData
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIReportCheatData : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIReportCheatData(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessId, int32 CheatProcessId, FString CheatParam1, FString CheatParam2)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ICheatReportingService", "ReportCheatData", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddStringField("pathandfilename", PathAndFileName);
		m_RequestString.AddStringField("webcheaturl", WebCheatURL);
		m_RequestString.AddNumberField("time_now", FCString::Atoi64(*TimeNow));
		m_RequestString.AddNumberField("time_started", FCString::Atoi64(*TimeStarted));
		m_RequestString.AddNumberField("time_stopped", FCString::Atoi64(*TimeStopped));
		m_RequestString.AddStringField("cheatname", CheatName);
		m_RequestString.AddNumberField("game_process_id", GameProcessId);
		m_RequestString.AddNumberField("cheat_process_id", CheatProcessId);
		m_RequestString.AddNumberField("cheat_param_1", FCString::Atoi64(*CheatParam1));
		m_RequestString.AddNumberField("cheat_param_2", FCString::Atoi64(*CheatParam2));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIReportCheatData() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIReportCheatData"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIRequestVacStatusForUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIRequestVacStatusForUser : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIRequestVacStatusForUser(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString SessionId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ICheatReportingService", "RequestVacStatusForUser", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("session_id", FCString::Atoi64(*SessionId));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIRequestVacStatusForUser() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIRequestVacStatusForUser"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIStartSecureMultiplayerSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIStartSecureMultiplayerSession : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIStartSecureMultiplayerSession(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ICheatReportingService", "StartSecureMultiplayerSession", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIStartSecureMultiplayerSession() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIStartSecureMultiplayerSession"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIEndSecureMultiplayerSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIEndSecureMultiplayerSession : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIEndSecureMultiplayerSession(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString SessionId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ICheatReportingService", "EndSecureMultiplayerSession", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("session_id", FCString::Atoi64(*SessionId));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIEndSecureMultiplayerSession() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIEndSecureMultiplayerSession"));
	}
};
