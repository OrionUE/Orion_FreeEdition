/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/Steam.h"
#include "SteamUtilsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamTextFilteringContext : uint8
{
	k_ETextFilteringContextUnknown = 0,
	// Unknown context
	k_ETextFilteringContextGameContent = 1,
	// Game content, only legally required filtering is performed
	k_ETextFilteringContextChat = 2,
	// Chat from another player
	k_ETextFilteringContextName = 3,
	// Character or item name
};

UENUM(BlueprintType)
enum class ESteamCheckFileSignature : uint8
{
	InvalidSignature = 0,
	ValidSignature = 1,
	FileNotFound = 2,
	NoSignaturesFoundForThisApp = 3,
	NoSignaturesFoundForThisFile = 4,
};

UENUM(BlueprintType)
enum class ESteamGamepadTextInputLineMode : uint8
{
	SingleLine = 0,
	MultipleLines = 1
};

UENUM(BlueprintType)
enum class ESteamGamepadTextInputMode : uint8
{
	Normal = 0,
	Password = 1
};

UENUM(BlueprintType)
enum class ESteamNotificationPosition : uint8
{
	TopLeft = 0,
	TopRight = 1,
	BottomLeft = 2,
	BottomRight = 3,
};

UENUM(BlueprintType)
enum class ESteamUniverse : uint8
{
	Invalid = 0,
	Public = 1,
	Beta = 2,
	Internal = 3,
	Dev = 4,
	Max
};

UENUM(BlueprintType)
enum class EGameSearchErrorCode : uint8
{
	UNKNOWN = 0,
	k_EGameSearchErrorCode_OK = 1,
	k_EGameSearchErrorCode_Failed_Search_Already_In_Progress = 2,
	k_EGameSearchErrorCode_Failed_No_Search_In_Progress = 3,
	k_EGameSearchErrorCode_Failed_Not_Lobby_Leader = 4,		 // if not the lobby leader can not call SearchForGameWithLobby
	k_EGameSearchErrorCode_Failed_No_Host_Available = 5,	 // no host is available that matches those search params
	k_EGameSearchErrorCode_Failed_Search_Params_Invalid = 6, // search params are invalid
	k_EGameSearchErrorCode_Failed_Offline = 7,				 // offline, could not communicate with server
	k_EGameSearchErrorCode_Failed_NotAuthorized = 8,		 // either the user or the application does not have priveledges to do this
	k_EGameSearchErrorCode_Failed_Unknown_Error = 9,		 // unknown error
};

UENUM(BlueprintType)
enum class EPlayerResult : uint8
{
	UNKNOWN = 0,
	k_EPlayerResultFailedToConnect = 1, // failed to connect after confirming
	k_EPlayerResultAbandoned = 2,		// quit game without completing it
	k_EPlayerResultKicked = 3,			// kicked by other players/moderator/server rules
	k_EPlayerResultIncomplete = 4,		// player stayed to end but game did not conclude successfully ( nofault to player )
	k_EPlayerResultCompleted = 5,		// player completed game
};

UENUM(BlueprintType)
enum class EOrionSteamIPv6ConnectivityProtocol : uint8
{
	k_ESteamIPv6ConnectivityProtocol_Invalid = 0,
	k_ESteamIPv6ConnectivityProtocol_HTTP = 1, // because a proxy may make this different than other protocols
	k_ESteamIPv6ConnectivityProtocol_UDP = 2,  // test UDP connectivity. Uses a port that is commonly needed for other Steam stuff. If UDP works, TCP probably works.
};

// For the above transport protocol, what do we think the local machine's connectivity to the internet over ipv6 is like
UENUM(BlueprintType)
enum class EOrionSteamIPv6ConnectivityState : uint8
{
	k_ESteamIPv6ConnectivityState_Unknown = 0, // We haven't run a test yet
	k_ESteamIPv6ConnectivityState_Good = 1,	   // We have recently been able to make a request on ipv6 for the given protocol
	k_ESteamIPv6ConnectivityState_Bad = 2,	   // We failed to make a request, either because this machine has no ipv6 address assigned, or it has no upstream connectivity
};

UENUM(BlueprintType)
enum class ESteamFloatingGamepadTextInputMode : uint8
{
	k_EFloatingGamepadTextInputModeModeSingleLine = 0,	  // Enter dismisses the keyboard
	k_EFloatingGamepadTextInputModeModeMultipleLines = 1, // User needs to explictly close the keyboard
	k_EFloatingGamepadTextInputModeModeEmail = 2,		  // Keyboard layout is email, enter dismisses the keyboard
	k_EFloatingGamepadTextInputModeModeNumeric = 3,		  // Keyboard layout is numeric, enter dismisses the keyboard
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct FCheckFileSignature
{
	GENERATED_BODY()
public:
	FCheckFileSignature()
		: CheckFileSignature(ESteamCheckFileSignature::InvalidSignature)
	{
	}

#if WITH_ORIONSTEAM
	FCheckFileSignature(const CheckFileSignature_t& Data)
		: CheckFileSignature(static_cast<ESteamCheckFileSignature>(Data.m_eCheckFileSignature))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Utils")
	ESteamCheckFileSignature CheckFileSignature;
};

USTRUCT(BlueprintType)
struct FGamepadTextInputDismissed
{
	GENERATED_BODY()
public:
	FGamepadTextInputDismissed()
		: bSubmitted(false), SubmittedText(0)
	{
	}

#if WITH_ORIONSTEAM
	FGamepadTextInputDismissed(const GamepadTextInputDismissed_t& Data)
		: bSubmitted(Data.m_bSubmitted), SubmittedText(Data.m_unSubmittedText)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Utils")
	bool bSubmitted;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Utils")
	int32 SubmittedText;
};

USTRUCT(BlueprintType)
struct FLowBatteryPower
{
	GENERATED_BODY()
public:
	FLowBatteryPower()
		: MinutesBatteryLeft(0)
	{
	}

#if WITH_ORIONSTEAM
	FLowBatteryPower(const LowBatteryPower_t& Data)
		: MinutesBatteryLeft(Data.m_nMinutesBatteryLeft)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Utils")
	int32 MinutesBatteryLeft;
};

USTRUCT(BlueprintType)
struct FIPCountry
{
	GENERATED_BODY()
public:
	FIPCountry() = default;

#if WITH_ORIONSTEAM
	FIPCountry(const IPCountry_t& Data)
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FSteamShutdown
{
	GENERATED_BODY()
public:
	FSteamShutdown() = default;

#if WITH_ORIONSTEAM
	FSteamShutdown(const SteamShutdown_t& Data)
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FAppResumingFromSuspend
{
	GENERATED_BODY()
public:
	FAppResumingFromSuspend() = default;

#if WITH_ORIONSTEAM
	FAppResumingFromSuspend(const AppResumingFromSuspend_t& Data)
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FFloatingGamepadTextInputDismissed
{
	GENERATED_BODY()
public:
	FFloatingGamepadTextInputDismissed() = default;

#if WITH_ORIONSTEAM
	FFloatingGamepadTextInputDismissed(const FloatingGamepadTextInputDismissed_t& Data)
	{
	}
#endif
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckFileSignature, const FCheckFileSignature&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamepadTextInputDismissed, const FGamepadTextInputDismissed&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIPCountry, const FIPCountry&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLowBatteryPower, const FLowBatteryPower&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamShutdown, const FSteamShutdown&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAppResumingFromSuspend, const FAppResumingFromSuspend&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloatingGamepadTextInputDismissed, const FFloatingGamepadTextInputDismissed&, Data);
