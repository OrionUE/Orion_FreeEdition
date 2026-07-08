/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if ORION_WITH_CEF3
#include "OrionBrowserHelperLibCEFIncludes.h"

/**
 * The application's main function.
 *
 * @param MainArgs Main Arguments for the process (created differently on each platform).
 * @return Application's exit value.
 */
int32 RunCEFSubProcess(const CefMainArgs& MainArgs);
#endif
