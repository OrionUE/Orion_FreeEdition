/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "UObject/NameTypes.h"
#include <OnlineSubsystemTypes.h>
#include <Interfaces/OnlinePresenceInterface.h>
#include <Misc/TVariant.h>

#include "AudioCaptureDeviceInterface.h"

#if WITH_ORIONSTEAM
#include "OnlineSessionSettings.h"
#include "isteammatchmaking.h"
#endif

#include "OrionSteamSharedTypes.generated.h"

#ifndef ORIONSTEAM_SUBSYSTEM
#define ORIONSTEAM_SUBSYSTEM FName(TEXT("OrionSteam"))
#endif

#ifdef _MSC_VER
#define STEAM_SDK_IGNORE_REDUNDANCY_START \
	__pragma(warning(push))               \
		__pragma(warning(disable : 6287))

#define STEAM_SDK_IGNORE_REDUNDANCY_END \
	__pragma(warning(pop))
#else
#define STEAM_SDK_IGNORE_REDUNDANCY_START
#define STEAM_SDK_IGNORE_REDUNDANCY_END
#endif

namespace FNetworkProtocolTypes
{
	ORIONSTEAMSHARED_API extern const FLazyName OrionSteam;
	ORIONSTEAMSHARED_API extern const FLazyName OrionSteamSocketsP2P;
	ORIONSTEAMSHARED_API extern const FLazyName OrionSteamSocketsIP;
} // namespace FNetworkProtocolTypes

// lobby search distance. Lobby results are sorted from closest to farthest.
UENUM(BlueprintType)
enum class ESteamLobbyDistanceFilter : uint8
{
	// only lobbies in the same immediate region will be returned
	k_ELobbyDistanceFilterClose = 0 UMETA(DisplayName="Close"),
	// only lobbies in the same region or near by regions
	k_ELobbyDistanceFilterDefault UMETA(DisplayName="Default"),
	// for games that don't have many latency requirements, will return lobbies about half-way around the globe
	k_ELobbyDistanceFilterFar UMETA(DisplayName="Far"),
	// no filtering, will match lobbies as far as India to NY (not recommended, expect multiple seconds of latency between the clients)
	k_ELobbyDistanceFilterWorldwide UMETA(DisplayName="WorldWide"),
};

UENUM(BlueprintType)
enum class EOnlineFriendOrionSteamPresenceState : uint8
{
	/** User is offline */
	Offline,
	/** User is online */
	Online,
	/** User is away */
	Away,
	/** User is away for >2 hours (can change depending on platform) */
	ExtendedAway,
	/** User is in do not disturb mode */
	DoNotDisturb,
	/** Default */
	Unknown
};

USTRUCT(BlueprintType)
struct ORIONSTEAMSHARED_API FOnlineUserPresenceOrionSteamBlueprint
{
	GENERATED_BODY()

public:
	FOnlineUserPresenceOrionSteamBlueprint()
		: bIsOnline(false), bIsPlaying(false), bIsPlayingThisGame(false), bIsJoinable(false), bHasVoiceSupport(false), PresenceState(EOnlineFriendOrionSteamPresenceState::Offline)
	{
	}

	FOnlineUserPresenceOrionSteamBlueprint(const FOnlineUserPresence& Presence)
		: bIsOnline(Presence.bIsOnline), bIsPlaying(Presence.bIsPlaying), bIsPlayingThisGame(Presence.bIsPlayingThisGame), bIsJoinable(Presence.bIsJoinable), bHasVoiceSupport(Presence.bHasVoiceSupport), PresenceState(static_cast<EOnlineFriendOrionSteamPresenceState>(Presence.Status.State))
	{
	}

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	bool bIsOnline;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	bool bIsPlaying;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	bool bIsPlayingThisGame;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	bool bIsJoinable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	bool bHasVoiceSupport;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	FDateTime LastOnline;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	EOnlineFriendOrionSteamPresenceState PresenceState;
};

/**
 * Platform audio input device info, in a Blueprint-readable format
 */
USTRUCT(BlueprintType)
struct ORIONSTEAMSHARED_API FOrionSteamAudioInputDeviceInfo
{
	GENERATED_USTRUCT_BODY()

	FOrionSteamAudioInputDeviceInfo()
		: DeviceName(""), DeviceId(""), InputChannels(0), PreferredSampleRate(0), bSupportsHardwareAEC(true) {
		  };

	FOrionSteamAudioInputDeviceInfo(const Audio::FCaptureDeviceInfo& InDeviceInfo);

	/** The name of the audio device */
	UPROPERTY(BlueprintReadOnly, Category="Audio")
	FString DeviceName;

	/** ID of the device. */
	UPROPERTY(BlueprintReadOnly, Category="Audio")
	FString DeviceId;

	/** The number of channels supported by the audio device */
	UPROPERTY(BlueprintReadOnly, Category="Audio")
	int32 InputChannels;

	/** The preferred sample rate of the audio device */
	UPROPERTY(BlueprintReadOnly, Category="Audio")
	int32 PreferredSampleRate;

	/** Whether or not the device supports Acoustic Echo Canceling */
	UPROPERTY(BlueprintReadOnly, Category="Audio")
	uint8 bSupportsHardwareAEC : 1;
};

USTRUCT(BlueprintType)
struct ORIONSTEAMSHARED_API FOnlineFriendOrionSteamBlueprint
{
	GENERATED_BODY()

public:
	FOnlineFriendOrionSteamBlueprint()
	{
	}

	FOnlineFriendOrionSteamBlueprint(const FOnlineFriend& Friend)
		: DisplayName(Friend.GetDisplayName()), RealName(Friend.GetRealName()), Presence(Friend.GetPresence()), SteamId(Friend.GetUserId()->ToString())
	{
	}

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	FString DisplayName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	FString RealName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	FOnlineUserPresenceOrionSteamBlueprint Presence;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	FString SteamId;
};

#if WITH_ORIONSTEAM
class FOnlineSessionSearchSteam final : public FOnlineSessionSearch
{
public:
	ELobbyDistanceFilter m_LobbyDistanceFilter;
};
#endif

USTRUCT(BlueprintType)
struct FSteamSessionSetting
{
	GENERATED_BODY()
public:
	FSteamSessionSetting() {
	};

	FSteamSessionSetting(int32 Value)
	{
		m_Data.Set<int32>(Value);
	}

	FSteamSessionSetting(FString Value)
	{
		m_Data.Set<FString>(Value);
	}

public:
	FString m_Key;
	TVariant<int32, FString> m_Data;
};

/**
 * Called when a list of all available audio devices is retrieved
 */
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnOrionSteamAudioInputDevicesObtained, const TArray<FOrionSteamAudioInputDeviceInfo>&, AvailableDevices);
