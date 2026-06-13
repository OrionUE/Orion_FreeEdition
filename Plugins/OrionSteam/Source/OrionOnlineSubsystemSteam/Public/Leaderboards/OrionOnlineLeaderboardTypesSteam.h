/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OnlineSubsystemTypes.h"
#if WITH_ORIONSTEAM
#include "isteamuserstats.h"
#endif
#include "OrionOnlineSubsystemSteamTypes.h"

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FLeaderboardMetadataSteam
{
	friend class FOrionOnlineLeaderboardsSteam;

private:
	FLeaderboardMetadataSteam()
		: m_SortMethod(ELeaderboardSort::Type::Ascending), m_DisplayFormat(), m_TotalLeaderboardRows(0), m_LeaderboardHandle(0), m_AsyncState()
	{
	}

	FLeaderboardMetadataSteam(const FString& InLeaderboardName, ELeaderboardSort::Type InSortMethod, ELeaderboardFormat::Type InDisplayFormat)
		: m_LeaderboardName(InLeaderboardName),
		  m_SortMethod(InSortMethod),
		  m_DisplayFormat(InDisplayFormat),
		  m_TotalLeaderboardRows(0),
		  m_LeaderboardHandle(-1),
		  m_AsyncState(EOnlineAsyncTaskState::NotStarted)
	{
	}

	FLeaderboardMetadataSteam(const FString& InLeaderboardName)
		: m_LeaderboardName(InLeaderboardName),
		  m_SortMethod(ELeaderboardSort::None),
		  m_DisplayFormat(ELeaderboardFormat::Number),
		  m_TotalLeaderboardRows(0),
		  m_LeaderboardHandle(-1),
		  m_AsyncState(EOnlineAsyncTaskState::NotStarted)
	{
	}

public:
	FString m_LeaderboardName;
	ELeaderboardSort::Type m_SortMethod;
	ELeaderboardFormat::Type m_DisplayFormat;
	int32 m_TotalLeaderboardRows;
	SteamLeaderboard_t m_LeaderboardHandle;
	EOnlineAsyncTaskState::Type m_AsyncState;
};

struct ORIONONLINESUBSYSTEMSTEAM_API FOrionUserStatsStateSteam
{
private:
	FOrionUserStatsStateSteam() = delete;

public:
	FOrionUserStatsStateSteam(const FUniqueNetIdSteam& InUserId, EOnlineAsyncTaskState::Type InState)
		: m_UserId(InUserId.AsShared()),
		  m_StatsState(InState)
	{
	}

	FUniqueNetIdSteamRef m_UserId;
	EOnlineAsyncTaskState::Type m_StatsState;
};
#endif
