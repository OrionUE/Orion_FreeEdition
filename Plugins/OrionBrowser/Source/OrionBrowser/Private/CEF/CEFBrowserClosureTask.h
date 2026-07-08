/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if ORION_WITH_CEF3
#include "CEFLibCefIncludes.h"

// Helper for posting a closure as a task
class FOrionCEFBrowserClosureTask
	: public CefTask
{
public:
	FOrionCEFBrowserClosureTask(CefRefPtr<CefBaseRefCounted> InHandle, TFunction<void ()> InClosure)
		: Handle(InHandle)
		, Closure(InClosure)
	{ }

	virtual void Execute() override { Closure(); }

private:
	CefRefPtr<CefBaseRefCounted> Handle; // Used so the handler will not go out of scope before the closure is executed.
	TFunction<void ()> Closure;
	IMPLEMENT_REFCOUNTING(FOrionCEFBrowserClosureTask);
};


#endif /* ORION_WITH_CEF3 */
