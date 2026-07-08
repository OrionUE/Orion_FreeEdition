/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Containers/Array.h"
#include "Containers/UnrealString.h"
#include "CoreTypes.h"
#include "Math/UnrealMathUtility.h"
#include "Misc/ConfigCacheIni.h"

namespace OrionBrowserConfig
{
	inline constexpr int32 UnrestrictedFrameRate = 0;
	inline constexpr int32 DefaultUnrestrictedFrameRateTarget = 1000;
	inline constexpr int32 MinFrameRate = 1;
	inline constexpr float DefaultStartupPrewarmMaxWaitSeconds = 30.0f;

	inline bool GetBool(const TCHAR* Key, bool& Value)
	{
		return GConfig->GetBool(TEXT("OrionBrowser"), Key, Value, GEngineIni)
			|| GConfig->GetBool(TEXT("Browser"), Key, Value, GEngineIni);
	}

	inline bool GetInt(const TCHAR* Key, int32& Value)
	{
		return GConfig->GetInt(TEXT("OrionBrowser"), Key, Value, GEngineIni)
			|| GConfig->GetInt(TEXT("Browser"), Key, Value, GEngineIni);
	}

	inline bool GetFloat(const TCHAR* Key, float& Value)
	{
		return GConfig->GetFloat(TEXT("OrionBrowser"), Key, Value, GEngineIni)
			|| GConfig->GetFloat(TEXT("Browser"), Key, Value, GEngineIni);
	}

	inline bool GetArray(const TCHAR* Key, TArray<FString>& Value)
	{
		return GConfig->GetArray(TEXT("OrionBrowser"), Key, Value, GEngineIni) > 0
			|| GConfig->GetArray(TEXT("Browser"), Key, Value, GEngineIni) > 0;
	}

	inline bool ShouldUseUnrestrictedFrameRate()
	{
		bool bUseUnrestrictedFrameRate = true;
		GetBool(TEXT("bUseUnrestrictedFrameRate"), bUseUnrestrictedFrameRate);
		return bUseUnrestrictedFrameRate;
	}

	inline int32 GetUnrestrictedFrameRateTarget()
	{
		int32 FrameRateTarget = DefaultUnrestrictedFrameRateTarget;
		GetInt(TEXT("UnrestrictedFrameRateTarget"), FrameRateTarget);
		return FMath::Max(FrameRateTarget, MinFrameRate);
	}

	inline int32 ResolveFrameRateTarget(int32 RequestedFrameRate)
	{
		if (RequestedFrameRate <= UnrestrictedFrameRate)
		{
			return GetUnrestrictedFrameRateTarget();
		}

		return FMath::Max(RequestedFrameRate, MinFrameRate);
	}

	inline int32 ResolveBrowserFrameRate(int32 RequestedFrameRate)
	{
		if (ShouldUseUnrestrictedFrameRate())
		{
			return GetUnrestrictedFrameRateTarget();
		}

		return ResolveFrameRateTarget(RequestedFrameRate);
	}

	inline bool ShouldPrewarmOnStartup()
	{
		bool bPrewarmOnStartup = true;
		GetBool(TEXT("bPrewarmOnStartup"), bPrewarmOnStartup);
		return bPrewarmOnStartup;
	}

	inline float GetStartupPrewarmDelaySeconds()
	{
		float DelaySeconds = 0.0f;
		GetFloat(TEXT("StartupPrewarmDelaySeconds"), DelaySeconds);
		return FMath::Max(DelaySeconds, 0.0f);
	}

	inline float GetStartupPrewarmMaxWaitSeconds()
	{
		float MaxWaitSeconds = DefaultStartupPrewarmMaxWaitSeconds;
		GetFloat(TEXT("StartupPrewarmMaxWaitSeconds"), MaxWaitSeconds);
		return FMath::Max(MaxWaitSeconds, 0.0f);
	}
}
