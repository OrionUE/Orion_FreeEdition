/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Misc/CoreMisc.h"

#if WITH_ORIONSTEAM
THIRD_PARTY_INCLUDES_START
#include "steam_api.h"
#include "isteamgameserver.h"
#include "isteamgameserverstats.h"
THIRD_PARTY_INCLUDES_END
#endif

#if WITH_ORIONSTEAM
FORCEINLINE static ISteamUGC* GetUGC()
{
	return IsRunningDedicatedServer() ? SteamGameServerUGC() : SteamUGC();
}

FORCEINLINE static ISteamNetworking* GetNetworking()
{
	return IsRunningDedicatedServer() ? SteamGameServerNetworking() : SteamNetworking();
}

FORCEINLINE static ISteamUtils* GetUtils()
{
	return IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
}

FORCEINLINE static ISteamInventory* GetInventory()
{
	return IsRunningDedicatedServer() ? SteamGameServerInventory() : SteamInventory();
}

FORCEINLINE static ISteamApps* GetApps()
{
	return SteamApps();
}

FORCEINLINE static ISteamTimeline* GetTimeline()
{
	return SteamTimeline();
}
#else
FORCEINLINE static void* GetUGC()
{
	return nullptr;
}

FORCEINLINE static void* GetNetworking()
{
	return nullptr;
}

FORCEINLINE static void* GetUtils()
{
	return nullptr;
}

FORCEINLINE static void* GetInventory()
{
	return nullptr;
}

FORCEINLINE static void* GetApps()
{
	return nullptr;
}
#endif
