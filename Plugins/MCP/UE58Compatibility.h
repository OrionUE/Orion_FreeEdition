// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#ifndef TOOLSETREGISTRY_API
#define TOOLSETREGISTRY_API
#endif

namespace UE::MCPCompat
{
	TOOLSETREGISTRY_API void RaiseScriptError(const FString& ErrorMessage);
}

#ifndef UE_LOGF
#define UE_LOGF(CategoryName, Verbosity, Format, ...) \
	UE_LOG(CategoryName, Verbosity, TEXT(Format), ##__VA_ARGS__)
#endif

#ifndef UE_CLOGF
#define UE_CLOGF(Condition, CategoryName, Verbosity, Format, ...) \
	UE_CLOG(Condition, CategoryName, Verbosity, TEXT(Format), ##__VA_ARGS__)
#endif
