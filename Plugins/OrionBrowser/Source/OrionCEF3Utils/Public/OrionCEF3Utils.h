/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/UnrealString.h"
#include "CoreMinimal.h"
#include "HAL/Platform.h"

#if ORION_WITH_CEF3
namespace OrionCEF3Utils

{
	/**
	 * Load the required modules for CEF3, returns false if we fail to load the cef library
	 */
	ORIONCEF3UTILS_API bool LoadCEF3Modules(bool bIsMainApp);

	/**
	 * Unload the required modules for CEF3
	 */
	ORIONCEF3UTILS_API void UnloadCEF3Modules();

#if PLATFORM_WINDOWS
	/**
	 * Get the module (dll) handle to the loaded CEF3 module, will be null if not loaded
	 */
	ORIONCEF3UTILS_API void* GetCEF3ModuleHandle();
#endif

	/**
	 * Get the module loaded path
	 */
	ORIONCEF3UTILS_API FString GetCEF3ModulePath();

	/**
	 * Move the current cef3.log file to a backup file, so CEF makes a new log when it starts up.
	 * This backup file is then cleaned up by the logic in FMaintenance::DeleteOldLogs()
	 */
	ORIONCEF3UTILS_API void BackupCEF3Logfile(const FString& LogFilePath);
}
#endif //ORION_WITH_CEF3
