/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#include "CEF/CEFBrowserByteResource.h"

#if ORION_WITH_CEF3

FOrionCEFBrowserByteResource::FOrionCEFBrowserByteResource(const CefRefPtr<CefPostDataElement>& PostData, const FString& InMimeType)
	: Position(0)
	, Buffer(nullptr)
	, MimeType(InMimeType)
{
	Size = PostData->GetBytesCount();
	if (Size > 0)
	{
		Buffer = new unsigned char[Size];
		PostData->GetBytes(Size, Buffer);
	}
}

FOrionCEFBrowserByteResource::~FOrionCEFBrowserByteResource()
{
	delete[] Buffer;
}

void FOrionCEFBrowserByteResource::Cancel()
{

}

void FOrionCEFBrowserByteResource::GetResponseHeaders(CefRefPtr<CefResponse> Response, int64_t& ResponseLength, CefString& RedirectUrl)
{
	Response->SetMimeType(TCHAR_TO_WCHAR(*MimeType));
	Response->SetStatus(200);
	Response->SetStatusText("OK");
	ResponseLength = Size;
}

bool FOrionCEFBrowserByteResource::ProcessRequest(CefRefPtr<CefRequest> Request, CefRefPtr<CefCallback> Callback)
{
	Callback->Continue();
	return true;
}

bool FOrionCEFBrowserByteResource::ReadResponse(void* DataOut, int BytesToRead, int& BytesRead, CefRefPtr<CefCallback> Callback)
{
	int32 BytesLeft = Size - Position;
	BytesRead = BytesLeft >= BytesToRead ? BytesToRead : BytesLeft;
	if (BytesRead > 0)
	{
		FMemory::Memcpy(DataOut, Buffer + Position, BytesRead);
		Position += BytesRead;
		return true;
	}
	return false;
}
#endif
