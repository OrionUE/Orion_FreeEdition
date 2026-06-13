/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamUserStatsTypes.h"

#if WITH_ORIONSTEAM

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserStatsFindLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserStatsFindLeaderboard : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnFindLeaderboard m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserStatsFindLeaderboard(const FOnFindLeaderboard Callback, const FString LeaderboardName, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_LeaderboardName(LeaderboardName)
	{
	}

	FOnlineAsyncTaskOrionSteamUserStatsFindLeaderboard(UOrionSteamAsyncAction* AsyncObject, const FString LeaderboardName, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_LeaderboardName(LeaderboardName)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserStatsFindLeaderboard() = delete;

protected:
	LeaderboardFindResult_t m_CallbackResults;
	FString m_LeaderboardName;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserStatsFindLeaderboard"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntries : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnDownloadLeaderboardEntries m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntries(const FOnDownloadLeaderboardEntries Callback, const FSteamLeaderboard Leaderboard, const ESteamLeaderboardDataRequest DataRequest, const int32 RangeStart, const int32 RangeEnd, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_Leaderboard(Leaderboard), m_DataRequest(DataRequest), m_RangeStart(RangeStart), m_RangeEnd(RangeEnd)
	{
	}

	FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntries(UOrionSteamAsyncAction* AsyncObject, FSteamLeaderboard Leaderboard, const ESteamLeaderboardDataRequest DataRequest, const int32 RangeStart, const int32 RangeEnd, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_Leaderboard(Leaderboard), m_DataRequest(DataRequest), m_RangeStart(RangeStart), m_RangeEnd(RangeEnd)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntries() = delete;

protected:
	LeaderboardScoresDownloaded_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	ESteamLeaderboardDataRequest m_DataRequest;
	int32 m_RangeStart;
	int32 m_RangeEnd;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntries"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalStats : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRequestGlobalStats m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalStats(const FOnRequestGlobalStats Callback, const int32 HistoryDays, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_HistoryDays(HistoryDays)
	{
	}

	FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalStats(UOrionSteamAsyncAction* AsyncObject, const int32 HistoryDays, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_HistoryDays(HistoryDays)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalStats() = delete;

protected:
	GlobalStatsReceived_t m_CallbackResults;
	int32 m_HistoryDays;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalStats"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalAchievementPercentages
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalAchievementPercentages : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRequestGlobalAchievementPercentages m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalAchievementPercentages(const FOnRequestGlobalAchievementPercentages Callback, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults()
	{
	}

	FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalAchievementPercentages(UOrionSteamAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalAchievementPercentages() = delete;

protected:
	GlobalAchievementPercentagesReady_t m_CallbackResults;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserStatsRequestGlobalAchievementPercentages"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserStatsGetNumberOfCurrentPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserStatsGetNumberOfCurrentPlayers : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnGetNumberOfCurrentPlayers m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserStatsGetNumberOfCurrentPlayers(const FOnGetNumberOfCurrentPlayers Callback, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults()
	{
	}

	FOnlineAsyncTaskOrionSteamUserStatsGetNumberOfCurrentPlayers(UOrionSteamAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserStatsGetNumberOfCurrentPlayers() = delete;

protected:
	NumberOfCurrentPlayers_t m_CallbackResults;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserStatsGetNumberOfCurrentPlayers"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserStatsUploadLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserStatsUploadLeaderboardScore : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnUploadLeaderboardScore m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserStatsUploadLeaderboardScore(const FOnUploadLeaderboardScore Callback, const FSteamLeaderboard Leaderboard, const ESteamLeaderboardUploadScoreMethod UploadMethod, const int32 Score, const TArray<int32> ScoreDetails, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_Leaderboard(Leaderboard), m_UploadScoreMethod(UploadMethod), m_Score(Score), m_ScoreDetails(ScoreDetails)
	{
	}

	FOnlineAsyncTaskOrionSteamUserStatsUploadLeaderboardScore(UOrionSteamAsyncAction* AsyncObject, const FSteamLeaderboard Leaderboard, const ESteamLeaderboardUploadScoreMethod UploadMethod, const int32 Score, const TArray<int32> ScoreDetails, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_Leaderboard(Leaderboard), m_UploadScoreMethod(UploadMethod), m_Score(Score), m_ScoreDetails(ScoreDetails)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserStatsUploadLeaderboardScore() = delete;

protected:
	LeaderboardScoreUploaded_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	ESteamLeaderboardUploadScoreMethod m_UploadScoreMethod;
	int32 m_Score;
	TArray<int32> m_ScoreDetails;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserStatsUploadLeaderboardScore"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserStatsFindOrCreateLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserStatsFindOrCreateLeaderboard : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnFindOrCreateLeaderboard m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserStatsFindOrCreateLeaderboard(const FOnFindOrCreateLeaderboard Callback, const FString LeaderboardName, const ESteamLeaderboardSortMethod SortMethod, const ESteamLeaderboardDisplayType DisplayType, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_LeaderboardName(LeaderboardName), m_SortMethod(SortMethod), m_DisplayType(DisplayType)
	{
	}

	FOnlineAsyncTaskOrionSteamUserStatsFindOrCreateLeaderboard(UOrionSteamAsyncAction* AsyncObject, const FString LeaderboardName, const ESteamLeaderboardSortMethod SortMethod, const ESteamLeaderboardDisplayType DisplayType, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_LeaderboardName(LeaderboardName), m_SortMethod(SortMethod), m_DisplayType(DisplayType)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserStatsFindOrCreateLeaderboard() = delete;

protected:
	LeaderboardFindResult_t m_CallbackResults;
	FString m_LeaderboardName;
	ESteamLeaderboardSortMethod m_SortMethod = ESteamLeaderboardSortMethod::None;
	ESteamLeaderboardDisplayType m_DisplayType = ESteamLeaderboardDisplayType::None;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserStatsFindOrCreateLeaderboard"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserStatsRequestUserStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserStatsRequestUserStats : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRequestUserStats m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserStatsRequestUserStats(const FOnRequestUserStats Callback, const FSteamID SteamID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamID(SteamID)
	{
	}

	FOnlineAsyncTaskOrionSteamUserStatsRequestUserStats(UOrionSteamAsyncAction* AsyncObject, const FSteamID SteamID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_SteamID(SteamID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserStatsRequestUserStats() = delete;

protected:
	UserStatsReceived_t m_CallbackResults;
	FSteamID m_SteamID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserStatsRequestUserStats"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntriesForUsers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntriesForUsers : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnDownloadLeaderboardEntriesForUsers m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntriesForUsers(const FOnDownloadLeaderboardEntriesForUsers Callback, const FSteamLeaderboard Leaderboard, const TArray<FSteamID> Users, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_Leaderboard(Leaderboard), m_Users(Users)
	{
	}

	FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntriesForUsers(UOrionSteamAsyncAction* AsyncObject, const FSteamLeaderboard Leaderboard, const TArray<FSteamID> Users, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_Leaderboard(Leaderboard), m_Users(Users)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntriesForUsers() = delete;

protected:
	LeaderboardScoresDownloaded_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	TArray<FSteamID> m_Users;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserStatsDownloadLeaderboardEntriesForUsers"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserStatsAttachLeaderboardUGC
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserStatsAttachLeaderboardUGC : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnAttachLeaderboardUGC m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserStatsAttachLeaderboardUGC(const FOnAttachLeaderboardUGC Callback, const FSteamLeaderboard Leaderboard, const FSteamUGCHandle Handle, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_Leaderboard(Leaderboard), m_UGCHandle(Handle)
	{
	}

	FOnlineAsyncTaskOrionSteamUserStatsAttachLeaderboardUGC(UOrionSteamAsyncAction* AsyncObject, const FSteamLeaderboard Leaderboard, const FSteamUGCHandle Handle, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_Leaderboard(Leaderboard), m_UGCHandle(Handle)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserStatsAttachLeaderboardUGC() = delete;

protected:
	LeaderboardUGCSet_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	FSteamUGCHandle m_UGCHandle;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserStatsAttachLeaderboardUGC"));
	}
};
#endif
