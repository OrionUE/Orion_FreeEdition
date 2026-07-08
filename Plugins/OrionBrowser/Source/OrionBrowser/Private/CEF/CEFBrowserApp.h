/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Misc/ScopeLock.h"

#if ORION_WITH_CEF3

#include "CEFLibCefIncludes.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOrionCEFBrowser, Log, All);

/**
	* Implements CEF App and other Process level interfaces
	*/
class FOrionCEFBrowserApp : public CefApp,
	public CefBrowserProcessHandler
{
public:

	/**
	 * Default Constructor
	 */
	FOrionCEFBrowserApp();

	/** Used to pump the CEF message loop whenever OnScheduleMessagePumpWork is triggered */
	bool TickMessagePump(float DeltaTime, bool bForce);

private:
	// CefApp methods.
	virtual CefRefPtr<CefBrowserProcessHandler> GetBrowserProcessHandler() override { return this; }
	virtual void OnBeforeCommandLineProcessing(const CefString& ProcessType, CefRefPtr< CefCommandLine > CommandLine) override;
	// CefBrowserProcessHandler methods:
	virtual void OnBeforeChildProcessLaunch(CefRefPtr<CefCommandLine> CommandLine) override;
	virtual void OnScheduleMessagePumpWork(int64_t delay_ms) override;
	virtual bool OnAlreadyRunningAppRelaunch(CefRefPtr<CefCommandLine> CommandLine, const CefString& CurrentDirectory) override;

	// Include the default reference counting implementation.
	IMPLEMENT_REFCOUNTING(FOrionCEFBrowserApp);

	// Lock for access MessagePumpCountdown
	FCriticalSection MessagePumpCountdownCS;
	// Countdown in milliseconds until CefDoMessageLoopWork is called.  Updated by OnScheduleMessagePumpWork
	int64 MessagePumpCountdown;
};
#endif
