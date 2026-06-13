/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "OrionSteamSDKAPI/Steam.h"
#include "SteamNetworkingUtilsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FSteamNetworkPingLocation
{
	GENERATED_BODY()
public:
	FSteamNetworkPingLocation() = default;

#if WITH_ORIONSTEAM
	FSteamNetworkPingLocation(const SteamNetworkPingLocation_t& Val)
	{
		char* Data = new char[k_cchMaxSteamNetworkingPingLocationString];
		SteamNetworkingUtils()->ConvertPingLocationToString(Val, Data, k_cchMaxSteamNetworkingPingLocationString);
		Location = UTF8_TO_TCHAR(Data);
		delete[] Data;
	}
#endif

public:
#if WITH_ORIONSTEAM
	operator SteamNetworkPingLocation_t()
	{
		SteamNetworkPingLocation_t Data;
		SteamNetworkingUtils()->ParsePingLocationString(TCHAR_TO_UTF8(*Location), Data);
		return Data;
	}

	operator SteamNetworkPingLocation_t() const
	{
		SteamNetworkPingLocation_t Data;
		SteamNetworkingUtils()->ParsePingLocationString(TCHAR_TO_UTF8(*Location), Data);
		return Data;
	}
#endif

protected:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="NetworkingUtils")
	FString Location;
};
