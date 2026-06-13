/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "SteamTimelineTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

// Controls the color of the timeline bar segments. The value names listed here map to a multiplayer game, where
// the user starts a game (in menus), then joins a multiplayer session that first has a character selection lobby
// then finally the multiplayer session starts. However, you can also map these values to any type of game. In a single
// player game where you visit towns & dungeons, you could set k_ETimelineGameMode_Menus when the player is in a town
// buying items, k_ETimelineGameMode_Staging for when a dungeon is loading and k_ETimelineGameMode_Playing for when
// inside the dungeon fighting monsters.
UENUM(BlueprintType)
enum class ESteamTimelineGameMode : uint8
{
	k_ETimelineGameMode_Invalid = 0,
	k_ETimelineGameMode_Playing = 1,
	k_ETimelineGameMode_Staging = 2,
	k_ETimelineGameMode_Menus = 3,
	k_ETimelineGameMode_LoadingScreen = 4,

	k_ETimelineGameMode_Max, // one past the last valid value
};

// Used in AddTimelineEvent, where Featured events will be offered before Standard events
UENUM(BlueprintType)
enum class ESteamTimelineEventClipPriority : uint8
{
	k_ETimelineEventClipPriority_Invalid = 0,
	k_ETimelineEventClipPriority_None = 1,
	k_ETimelineEventClipPriority_Standard = 2,
	k_ETimelineEventClipPriority_Featured = 3,
};

USTRUCT(BlueprintType)
struct FTimelineEventHandle
{
	GENERATED_BODY()

	FTimelineEventHandle()
		: m_TimelineEventHandle(0)
	{
	}

	FTimelineEventHandle(uint64_t Value)
		: m_TimelineEventHandle(Value)
	{
	}

	operator uint64_t() const
	{
		return m_TimelineEventHandle;
	}

	uint64 m_TimelineEventHandle;
};

USTRUCT(BlueprintType)
struct FSteamTimelineEventRecordingExists
{
	GENERATED_BODY()
public:
	FSteamTimelineEventRecordingExists()
		: EventID(0), bRecordingExists(false)
	{
	}

#if WITH_ORIONSTEAM
	FSteamTimelineEventRecordingExists(const SteamTimelineEventRecordingExists_t& Data)
		: EventID(Data.m_ulEventID), bRecordingExists(Data.m_bRecordingExists)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Timeline")
	int64 EventID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Timeline")
	bool bRecordingExists;
};

USTRUCT(BlueprintType)
struct FSteamTimelineGamePhaseRecordingExists
{
	GENERATED_BODY()
public:
	FSteamTimelineGamePhaseRecordingExists()
		: RecordingMS(),
		  LongestClipMS(0),
		  ClipCount(0),
		  ScreenshotCount(0)
	{
	}

#if WITH_ORIONSTEAM
	FSteamTimelineGamePhaseRecordingExists(const SteamTimelineGamePhaseRecordingExists_t& Data)
		: PhaseID(UTF8_TO_TCHAR(Data.m_rgchPhaseID)), RecordingMS(Data.m_ulRecordingMS), LongestClipMS(Data.m_ulLongestClipMS), ClipCount(Data.m_unClipCount), ScreenshotCount(Data.m_unScreenshotCount)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Timeline")
	FString PhaseID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Timeline")
	int64 RecordingMS;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Timeline")
	int64 LongestClipMS;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Timeline")
	int32 ClipCount;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Timeline")
	int32 ScreenshotCount;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamTimelineEventRecordingExists, const FSteamTimelineEventRecordingExists&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamTimelineGamePhaseRecordingExists, const FSteamTimelineGamePhaseRecordingExists&, Data);
