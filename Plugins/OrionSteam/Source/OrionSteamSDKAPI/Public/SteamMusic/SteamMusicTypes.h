/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/Steam.h"
#include "SteamMusicTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamAudioPlaybackStatus : uint8
{
	Undefined = 0,
	Playing = 1,
	Paused = 2,
	Idle = 3
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FPlaybackStatusHasChanged
{
	GENERATED_BODY()
public:
	FPlaybackStatusHasChanged() = default;

#if WITH_ORIONSTEAM
	FPlaybackStatusHasChanged(const PlaybackStatusHasChanged_t& Data)
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FVolumeHasChanged
{
	GENERATED_BODY()
public:
	FVolumeHasChanged()
		: Volume(0)
	{
	}

#if WITH_ORIONSTEAM
	FVolumeHasChanged(const VolumeHasChanged_t& Data)
		: Volume(Data.m_flNewVolume)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="MatchmakingServers")
	float Volume;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlaybackStatusHasChanged, const FPlaybackStatusHasChanged&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVolumeHasChanged, const FVolumeHasChanged&, Data);
