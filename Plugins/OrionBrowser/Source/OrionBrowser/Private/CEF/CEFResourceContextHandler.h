/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if ORION_WITH_CEF3

#include "IWebBrowserResourceLoader.h"

#include "CEFLibCefIncludes.h"


FString OrionResourceTypeToString(const CefRequest::ResourceType& Type);

class FOrionWebBrowserSingleton;

/**
	* Implements CEF Request handling for when a browser window is still being constructed
	*/
class FOrionCEFResourceContextHandler :
	  public CefRequestContextHandler
	, public CefResourceRequestHandler
{
public:

	/** Default constructor. */
	FOrionCEFResourceContextHandler(FOrionWebBrowserSingleton *InOwningSingleton);

public:

	// CefResourceRequestHandler Interface
	virtual CefResourceRequestHandler::ReturnValue OnBeforeResourceLoad(CefRefPtr<CefBrowser> Browser, CefRefPtr<CefFrame> Frame, CefRefPtr<CefRequest> Request, CefRefPtr<CefCallback> Callback) override;

	// CefRequestContextHandler Interface
	virtual CefRefPtr<CefResourceRequestHandler> GetResourceRequestHandler(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, CefRefPtr<CefRequest> request, bool is_navigation, bool is_download, const CefString& request_initiator, bool& disable_default_handling) override;


public:
	FOnBeforeContextResourceLoadDelegate& OnBeforeLoad() { return BeforeResourceLoadDelegate; }

private:
	/** Delegate for handling resource load requests */
	FOnBeforeContextResourceLoadDelegate BeforeResourceLoadDelegate;

	/** Singleton that owns this context handler, so we can lookup browser objects from it */
	FOrionWebBrowserSingleton* OwningSingleton;

	// Include the default reference counting implementation.
	IMPLEMENT_REFCOUNTING(FOrionCEFResourceContextHandler);
};

#endif
