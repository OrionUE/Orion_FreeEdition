/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

GAMECORE_API DECLARE_LOG_CATEGORY_EXTERN(LogGameCore, Log, All);
GAMECORE_API DECLARE_LOG_CATEGORY_EXTERN(LogCoreExperience, Log, All);
GAMECORE_API DECLARE_LOG_CATEGORY_EXTERN(LogCoreAbilitySystem, Log, All);

GAMECORE_API FString GetClientServerContextString(UObject* ContextObject = nullptr);
