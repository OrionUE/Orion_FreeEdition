/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

//
// OrionBrowserHelper.cpp : Defines the entry point for the browser sub process
//

#include "OrionBrowserHelper.h"

#include "RequiredProgramMainCPPInclude.h"

#if ORION_WITH_CEF3
#include "OrionCEF3Utils.h"
#include "OrionBrowserHelperApp.h"
#endif

//#define DEBUG_USING_CONSOLE	0

IMPLEMENT_APPLICATION(OrionBrowserHelper, "OrionBrowserHelper")

#if ORION_WITH_CEF3
int32 RunCEFSubProcess(const CefMainArgs& MainArgs)
{
	bool bLoadedCEF = OrionCEF3Utils::LoadCEF3Modules(false);
	check(bLoadedCEF);

	// Create an App object for handling various render process events, such as message passing
	CefRefPtr<CefApp> App(new FOrionBrowserHelperApp);

	// Execute the sub-process logic. This will block until the sub-process should exit.
	int32 Result = CefExecuteProcess(MainArgs, App, nullptr);
	OrionCEF3Utils::UnloadCEF3Modules();
	return Result;
}
#endif
