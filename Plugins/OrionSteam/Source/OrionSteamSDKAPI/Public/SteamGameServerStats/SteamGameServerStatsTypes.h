/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "OrionSteamSDKAPI/Steam.h"
#include "SteamGameServerStatsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct FGSStatsReceived
{
	GENERATED_BODY()
public:
	FGSStatsReceived()
		: Result(ESteamResult::None)
	{
	}

#if WITH_ORIONSTEAM
	FGSStatsReceived(const GSStatsReceived_t& Data)
		: Result(_SteamResult(Data.m_eResult)), SteamIDUser(Data.m_steamIDUser)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category="GameServer")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="GameServer")
	FSteamID SteamIDUser;
};

USTRUCT(BlueprintType)
struct FGSStatsStored
{
	GENERATED_BODY()
public:
	FGSStatsStored()
		: Result(ESteamResult::None)
	{
	}

#if WITH_ORIONSTEAM
	FGSStatsStored(const GSStatsStored_t& Data)
		: Result(_SteamResult(Data.m_eResult)), SteamIDUser(Data.m_steamIDUser)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category="GameServer")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="GameServer")
	FSteamID SteamIDUser;
};

USTRUCT(BlueprintType)
struct FGSStatsUnloaded
{
	GENERATED_BODY()
public:
	FGSStatsUnloaded() = default;

#if WITH_ORIONSTEAM
	FGSStatsUnloaded(const GSStatsUnloaded_t& Data)
		: SteamIDUser(Data.m_steamIDUser)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category="GameServer")
	FSteamID SteamIDUser;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerRequestUserStats, const FGSStatsReceived&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerStoreUserStats, const FGSStatsStored&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSStatsUnloaded, const FGSStatsUnloaded&, Data);
