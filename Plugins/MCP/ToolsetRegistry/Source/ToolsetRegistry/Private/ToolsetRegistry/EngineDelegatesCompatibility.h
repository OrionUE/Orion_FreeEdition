// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Delegates/Delegate.h"

// Temporarily used to determine whether FCoreDelegates::GetOnPostEngineInit() is
// available until it's present in all streams.
template<typename T>
struct FOnPostEngineInit
{
	static FSimpleMulticastDelegate& Get()
	{
		if constexpr (requires { T::GetOnPostEngineInit(); })
		{
			return T::GetOnPostEngineInit();
		}
		else
		{
			return T::OnPostEngineInit;
		}
	}
};