/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

namespace OrionSteamSharedStatics
{
	static FString GetEngineIniPath()
	{
		FString Result;
		FString DefaultEngineIni = FPaths::ProjectConfigDir() / "DefaultEngine.ini";

#if UE_VERSION_NEWER_THAN(5, 0, 3)
		Result = FConfigCacheIni::NormalizeConfigIniPath(FString::Printf(TEXT("%sDefault%s.ini"), *FPaths::SourceConfigDir(), TEXT("Engine")));
#else
		Result = DefaultEngineIni;
#endif

		return Result;
	}

	static FString GetGameIniPath()
	{
		FString Result;
		FString DefaultGameIni = FPaths::ProjectConfigDir() / "DefaultGame.ini";

#if UE_VERSION_NEWER_THAN(5, 0, 3)
		Result = FConfigCacheIni::NormalizeConfigIniPath(FString::Printf(TEXT("%sDefault%s.ini"), *FPaths::SourceConfigDir(), TEXT("Game")));
#else
		Result = DefaultGameIni;
#endif

		return Result;
	}

	static bool GetAllowP2PPacketRelay()
	{
		bool bResult = false;

		GConfig->GetBool(TEXT("OrionOnlineSubsystemSteam"), TEXT("bAllowP2PPacketRelay"), bResult, GEngineIni);

		bool bOverrideUsingCommandLine = false;
		if (FParse::Bool(FCommandLine::Get(), TEXT("OrionSteamSocketsRelays"), bOverrideUsingCommandLine))
		{
			bResult = bOverrideUsingCommandLine;
		}

		return bResult;
	}
} // namespace OrionSteamSharedStatics
