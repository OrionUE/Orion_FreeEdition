/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OnlineSubsystemTypes.h"
#include "TaskManager/OrionOnlineAsyncTaskManagerSteam.h"
#include "OrionOnlineSubsystemSteam.h"
#include "OrionOnlineSubsystemSteamTypes.h"
#include "OnlineStats.h"
#include "Interfaces/OnlineAchievementsInterface.h"

class FOrionOnlineSubsystemSteam;

#if WITH_ORIONSTEAM

inline ELeaderboardSortMethod ToSteamLeaderboardSortMethod(ELeaderboardSort::Type InSortMethod)
{
	switch (InSortMethod)
	{
	case ELeaderboardSort::Ascending:
		return k_ELeaderboardSortMethodAscending;
	case ELeaderboardSort::Descending:
		return k_ELeaderboardSortMethodDescending;
	case ELeaderboardSort::None:
	default:
		return k_ELeaderboardSortMethodNone;
	}
}

inline ELeaderboardSort::Type FromSteamLeaderboardSortMethod(ELeaderboardSortMethod InSortMethod)
{
	switch (InSortMethod)
	{
	case k_ELeaderboardSortMethodAscending:
		return ELeaderboardSort::Ascending;
	case k_ELeaderboardSortMethodDescending:
		return ELeaderboardSort::Descending;
	case k_ELeaderboardSortMethodNone:
	default:
		return ELeaderboardSort::None;
	}
}

inline ELeaderboardDisplayType ToSteamLeaderboardDisplayType(ELeaderboardFormat::Type InDisplayFormat)
{
	switch (InDisplayFormat)
	{
	case ELeaderboardFormat::Seconds:
		return k_ELeaderboardDisplayTypeTimeSeconds;
	case ELeaderboardFormat::Milliseconds:
		return k_ELeaderboardDisplayTypeTimeMilliSeconds;
	case ELeaderboardFormat::Number:
	default:
		return k_ELeaderboardDisplayTypeNumeric;
	}
}

inline ELeaderboardFormat::Type FromSteamLeaderboardDisplayType(ELeaderboardDisplayType InDisplayFormat)
{
	switch (InDisplayFormat)
	{
	case k_ELeaderboardDisplayTypeTimeSeconds:
		return ELeaderboardFormat::Seconds;
	case k_ELeaderboardDisplayTypeTimeMilliSeconds:
		return ELeaderboardFormat::Milliseconds;
	case k_ELeaderboardDisplayTypeNumeric:
	default:
		return ELeaderboardFormat::Number;
	}
}

inline FString GetLeaderboardStatName(const FString& LeaderboardName, const FString& StatName)
{
	return TCHAR_TO_ANSI((*FString::Printf(TEXT("%s_%s"), *LeaderboardName, *StatName)));
}

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamRequestUserStats : public FOrionOnlineAsyncTaskSteam
{
private:
	FOrionOnlineAsyncTaskSteamRequestUserStats() = delete;

public:
	FOrionOnlineAsyncTaskSteamRequestUserStats(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FUniqueNetIdSteam& InUserId)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_UserId(InUserId.AsShared()), m_CallbackResults()
	{
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamRequestUserStats bWasSuccessful: %d UserId: %s"), WasSuccessful(), *m_UserId->ToDebugString());
	}

	virtual void Tick() override;
	virtual void Finalize() override;

private:
	bool m_bInit;
	FUniqueNetIdSteamRef m_UserId;
	UserStatsReceived_t m_CallbackResults;
};

class FOrionOnlineAsyncTaskSteamUpdateStats : public FOrionOnlineAsyncTaskSteam
{
private:
	FOrionOnlineAsyncTaskSteamUpdateStats() = delete;

public:
	FOrionOnlineAsyncTaskSteamUpdateStats(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FUniqueNetIdSteam& InUserId, const FStatPropertyArray& InStats)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_UserId(InUserId.AsShared()),
		  m_Stats(InStats), m_CallbackResults()
	{
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamUpdateStats bWasSuccessful: %d User: %s"), WasSuccessful(), *m_UserId->ToDebugString());
	}

	virtual void Tick() override;

private:
	bool m_bInit;
	FUniqueNetIdSteamRef m_UserId;
	const FStatPropertyArray m_Stats;
	UserStatsReceived_t m_CallbackResults;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamRetrieveStats : public FOrionOnlineAsyncTaskSteam
{
public:
	FOrionOnlineAsyncTaskSteamRetrieveStats(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FUniqueNetIdSteam& InUserId, const FOnlineLeaderboardReadRef& InReadObject, bool bInShouldTriggerDelegates)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_UserId(InUserId.AsShared()),
		  m_ReadObject(InReadObject), m_CallbackResults(),
		  m_bShouldTriggerDelegates(bInShouldTriggerDelegates)
	{
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamRetrieveStats bWasSuccessful: %d UserId: %s"), WasSuccessful(), *m_UserId->ToDebugString());
	}

	virtual void Tick() override;
	virtual void Finalize() override;
	virtual void TriggerDelegates() override;

private:
	bool m_bInit;
	FUniqueNetIdSteamRef m_UserId;
	FOnlineLeaderboardReadPtr m_ReadObject;
	UserStatsReceived_t m_CallbackResults;
	bool m_bShouldTriggerDelegates;
	FOrionOnlineAsyncTaskSteamRetrieveStats() = delete;
};

class FOrionOnlineAsyncTaskSteamStoreStats : public FOrionOnlineAsyncTaskSteam
{
public:
	FOrionOnlineAsyncTaskSteamStoreStats()
		: FOrionOnlineAsyncTaskSteam(nullptr, k_uAPICallInvalid),
		  m_bInit(false),
		  m_SessionName(NAME_None),
		  m_UserId(FUniqueNetIdSteam::EmptyId())
	{
	}

	virtual void OperationStarted()
	{
	}

	virtual void OperationFailed()
	{
	}

	virtual void OperationSucceeded()
	{
	}

public:
	FOrionOnlineAsyncTaskSteamStoreStats(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FName& InSessionName, const FUniqueNetIdSteam& InUserId)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_SessionName(InSessionName),
		  m_UserId(InUserId.AsShared())
	{
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamStoreStats SessionName: %s bWasSuccessful: %d"), *m_SessionName.ToString(), WasSuccessful());
	}

	virtual void Tick() override;
	void OnUserStatsStoreStatsFinished(EOnlineAsyncTaskState::Type State);

protected:
	bool m_bInit;
	const FName m_SessionName;
	const FUniqueNetIdSteamRef m_UserId;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamGetAchievements : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamGetAchievements() = delete;

public:
	FOrionOnlineAsyncTaskSteamGetAchievements(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FUniqueNetIdSteam& InUserId, const FOnQueryAchievementsCompleteDelegate& InAchievementDelegate)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_UserId(InUserId.AsShared()), m_CallbackResults(),
		  m_AchievementDelegate(InAchievementDelegate)
	{
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamGetAchievements bWasSuccessful: %d UserId: %s"), WasSuccessful(), *m_UserId->ToDebugString());
	}

	virtual void Tick() override;
	virtual void Finalize() override;
	virtual void TriggerDelegates() override;

private:
	bool m_bInit;
	FUniqueNetIdSteamRef m_UserId;
	UserStatsReceived_t m_CallbackResults;
	FOnQueryAchievementsCompleteDelegate m_AchievementDelegate;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamRetrieveLeaderboard : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamRetrieveLeaderboard()
		: FOrionOnlineAsyncTaskSteam(nullptr, k_uAPICallInvalid),
		  m_bInit(false),
		  m_SortMethod(ELeaderboardSort::Ascending),
		  m_DisplayFormat(ELeaderboardFormat::Number), m_CallbackResults(),
		  m_bFindOnly(true)
	{
	}

public:
	FOrionOnlineAsyncTaskSteamRetrieveLeaderboard(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FString& InLeaderboardName, ELeaderboardSort::Type InSortMethod, ELeaderboardFormat::Type InDisplayFormat)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_LeaderboardName(InLeaderboardName),
		  m_SortMethod(InSortMethod),
		  m_DisplayFormat(InDisplayFormat), m_CallbackResults(),
		  m_bFindOnly(false)
	{
	}

	FOrionOnlineAsyncTaskSteamRetrieveLeaderboard(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FString& InLeaderboardName)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_LeaderboardName(InLeaderboardName),
		  m_SortMethod(ELeaderboardSort::Ascending),
		  m_DisplayFormat(ELeaderboardFormat::Number), m_CallbackResults(),
		  m_bFindOnly(true)
	{
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamRetrieveLeaderboard bWasSuccessful: %d"), WasSuccessful());
	}

	virtual void Tick() override;
	virtual void Finalize() override;

private:
	bool m_bInit;
	FString m_LeaderboardName;
	ELeaderboardSort::Type m_SortMethod;
	ELeaderboardFormat::Type m_DisplayFormat;
	LeaderboardFindResult_t m_CallbackResults;
	bool m_bFindOnly;

private:
	void CreateOrFindLeaderboard(const FString& InLeaderboardName, ELeaderboardSort::Type InSortMethod, ELeaderboardFormat::Type InDisplayFormat);
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamRetrieveLeaderboardEntries : public FOrionOnlineAsyncTaskSteam
{
public:
	FOrionOnlineAsyncTaskSteamRetrieveLeaderboardEntries(FOrionOnlineSubsystemSteam* InSteamSubsystem, const TArray<FUniqueNetIdRef>& InPlayers, const FOnlineLeaderboardReadRef& InReadObject)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_Players(InPlayers),
		  m_ReadObject(InReadObject), m_CallbackResults(),
		  m_Type(ERetrieveType::FetchUsers), m_Rank(0), m_Range(0),
		  m_bShouldTriggerDelegates(false)
	{
	}

	FOrionOnlineAsyncTaskSteamRetrieveLeaderboardEntries(FOrionOnlineSubsystemSteam* InSteamSubsystem, int32 InRank, int32 InRange, const FOnlineLeaderboardReadRef& InReadObject)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_ReadObject(InReadObject), m_CallbackResults(),
		  m_Type(ERetrieveType::FetchRank),
		  m_Rank(InRank),
		  m_Range(InRange),
		  m_bShouldTriggerDelegates(false)
	{
	}

	FOrionOnlineAsyncTaskSteamRetrieveLeaderboardEntries(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FOnlineLeaderboardReadRef& InReadObject)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_ReadObject(InReadObject), m_CallbackResults(),
		  m_Type(ERetrieveType::FetchFriends), m_Rank(0), m_Range(0),
		  m_bShouldTriggerDelegates(false)
	{
	}

	FOrionOnlineAsyncTaskSteamRetrieveLeaderboardEntries(FOrionOnlineSubsystemSteam* InSteamSubsystem, FUniqueNetIdRef InUser, int32 InRange, const FOnlineLeaderboardReadRef& InReadObject)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_ReadObject(InReadObject), m_CallbackResults(), m_Type(), m_Rank(0),
		  m_Range(InRange),
		  m_bShouldTriggerDelegates(false)
	{
		m_Players.Push(FUniqueNetIdSteam::Create(*InUser));
		m_Type = Subsystem->IsLocalPlayer(*m_Players[0]) ? ERetrieveType::FetchCurRankUser : ERetrieveType::FetchRankUser;
	}

	FString TaskTypeToString() const
	{
		switch (m_Type)
		{
		default:
			return TEXT("Invalid");
			break;
		case FetchUsers:
			return TEXT("Fetch Users");
			break;
		case FetchFriends:
			return TEXT("Fetch Friends");
			break;
		case FetchRank:
			return TEXT("Fetch Global Ranks");
			break;
		case FetchCurRankUser:
			return TEXT("Fetch Rank around current user");
			break;
		case FetchRankUser:
			return TEXT("Fetch Rank around the users");
			break;
		}
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamRetrieveLeaderboardEntries Task Type %s bWasSuccessful: %d"), *TaskTypeToString(), WasSuccessful());
	}

	virtual void Tick() override;
	virtual void Finalize() override;
	virtual void TriggerDelegates() override;

private:
	enum ERetrieveType
	{
		None,
		FetchUsers,
		FetchFriends,
		FetchRank,
		FetchCurRankUser,
		FetchRankUser,
		Max
	};

	bool m_bInit;
	TArray<FUniqueNetIdRef> m_Players;
	FOnlineLeaderboardReadRef m_ReadObject;
	LeaderboardScoresDownloaded_t m_CallbackResults;
	ERetrieveType m_Type;
	int32 m_Rank;
	int32 m_Range;
	bool m_bShouldTriggerDelegates;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamUpdateLeaderboard : public FOrionOnlineAsyncTaskSteam
{
private:
	FOrionOnlineAsyncTaskSteamUpdateLeaderboard()
		: FOrionOnlineAsyncTaskSteam(nullptr, k_uAPICallInvalid),
		  m_bInit(false),
		  m_NewScore(0),
		  m_UpdateMethod(ELeaderboardUpdateMethod::KeepBest), m_CallbackResults(),
		  m_bShouldTriggerDelegates(false)
	{
	}

public:
	FOrionOnlineAsyncTaskSteamUpdateLeaderboard(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FString& InLeaderboardName, const FString& InRatedStat, ELeaderboardUpdateMethod::Type InUpdateMethod, bool bInShouldTriggerDelegates)
		: FOrionOnlineAsyncTaskSteam(InSteamSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_LeaderboardName(InLeaderboardName),
		  m_RatedStat(InRatedStat),
		  m_NewScore(0),
		  m_UpdateMethod(InUpdateMethod), m_CallbackResults(),
		  m_bShouldTriggerDelegates(bInShouldTriggerDelegates)
	{
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamUpdateLeaderboard bWasSuccessful: %d Leaderboard: %s Score: %d"), WasSuccessful(), *m_LeaderboardName, m_NewScore);
	}

	virtual void Tick() override;
	virtual void TriggerDelegates() override;

private:
	bool m_bInit;
	FString m_LeaderboardName;
	FString m_RatedStat;
	int32 m_NewScore;
	ELeaderboardUpdateMethod::Type m_UpdateMethod;
	LeaderboardScoreUploaded_t m_CallbackResults;
	bool m_bShouldTriggerDelegates;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamFlushLeaderboards : public FOrionOnlineAsyncTaskSteamStoreStats
{
private:
	FOrionOnlineAsyncTaskSteamFlushLeaderboards()
		: FOrionOnlineAsyncTaskSteamStoreStats()
	{
	}

public:
	FOrionOnlineAsyncTaskSteamFlushLeaderboards(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FName& InSessionName, const FUniqueNetIdSteam& InUserId)
		: FOrionOnlineAsyncTaskSteamStoreStats(InSteamSubsystem, InSessionName, InUserId)
	{
	}

	virtual void TriggerDelegates() override;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamWriteAchievements : public FOrionOnlineAsyncTaskSteamStoreStats
{
private:
	FOrionOnlineAsyncTaskSteamWriteAchievements()
		: FOrionOnlineAsyncTaskSteamStoreStats(),
		  m_WriteObject(nullptr)
	{
	}

	virtual void OperationStarted() override
	{
		check(m_WriteObject.IsValid());
		m_WriteObject->WriteState = EOnlineAsyncTaskState::InProgress;
	}

	virtual void OperationFailed() override
	{
		check(m_WriteObject.IsValid());
		m_WriteObject->WriteState = EOnlineAsyncTaskState::Failed;
	}

	virtual void OperationSucceeded() override
	{
		check(m_WriteObject.IsValid());
		m_WriteObject->WriteState = EOnlineAsyncTaskState::Done;
	}

private:
	FOnlineAchievementsWritePtr m_WriteObject;
	FOnAchievementsWrittenDelegate m_OnWriteFinishedDelegate;

public:
	FOrionOnlineAsyncTaskSteamWriteAchievements(FOrionOnlineSubsystemSteam* InSteamSubsystem, const FUniqueNetIdSteam& InUserId, FOnlineAchievementsWriteRef& InWriteObject, const FOnAchievementsWrittenDelegate& InOnWriteFinishedDelegate)
		: FOrionOnlineAsyncTaskSteamStoreStats(InSteamSubsystem, TEXT("Unused"), InUserId), m_WriteObject(InWriteObject), m_OnWriteFinishedDelegate(InOnWriteFinishedDelegate)
	{
	}

	virtual void TriggerDelegates() override;
};
#endif
