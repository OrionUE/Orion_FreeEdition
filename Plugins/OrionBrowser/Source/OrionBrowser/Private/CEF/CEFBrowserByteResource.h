/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if ORION_WITH_CEF3


#include "CEFLibCefIncludes.h"



/**
	* Implements a resource handler that will return the contents of a string as the result.
	*/
class FOrionCEFBrowserByteResource
	: public CefResourceHandler
{
public:
	/**
	 */
	FOrionCEFBrowserByteResource(const CefRefPtr<CefPostDataElement>& PostData, const FString& InMimeType);
	~FOrionCEFBrowserByteResource();
	
	// CefResourceHandler interface
	virtual void Cancel() override;
	virtual void GetResponseHeaders(CefRefPtr<CefResponse> Response, int64_t& ResponseLength, CefString& RedirectUrl) override;
	virtual bool ProcessRequest(CefRefPtr<CefRequest> Request, CefRefPtr<CefCallback> Callback) override;
	virtual bool ReadResponse(void* DataOut, int BytesToRead, int& BytesRead, CefRefPtr<CefCallback> Callback) override;
	
private:
	int32 Position;
	int32 Size;
	unsigned char* Buffer;
	FString MimeType;
	
	// Include the default reference counting implementation.
	IMPLEMENT_REFCOUNTING(FOrionCEFBrowserByteResource);
};


#endif
