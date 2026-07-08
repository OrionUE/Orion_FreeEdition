/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#include "OrionBrowserHelperCallbackRegistry.h"
#include "OrionBrowserHelper.h"

#if ORION_WITH_CEF3

FGuid FOrionBrowserHelperCallbackRegistry::FindOrAdd(CefRefPtr<CefV8Context> Context, CefRefPtr<CefV8Value> Object, CefRefPtr<CefV8Value> Function, CefRefPtr<CefV8Value> OnError, bool bOneShot)
{
	if (! bOneShot)
	{
		for(auto Iter = CreateIterator(); Iter; ++Iter)
		{
			auto Value = Iter.Value();
			if (! Value.bOneShot
				&& Context->IsSame(Value.Context)
				&& Function->IsSame(Value.Function)
				&& ( ((Object == nullptr) && (Value.Object == nullptr)) || Object->IsSame(Value.Object))
				&& ( ((OnError == nullptr) && (Value.OnError == nullptr)) || OnError->IsSame(Value.OnError)))
			{
				return Iter.Key();
			}
		}
	}

	// If not found or one-shot, add new entry to the map
	FGuid Guid = FGuid::NewGuid();
	Add(Guid, FOrionBrowserHelperCallbackRegistryEntry(Context, Object, Function, OnError, bOneShot));
	return Guid;
}

void FOrionBrowserHelperCallbackRegistry::RemoveByContext(CefRefPtr<CefV8Context> Context)
{
	for(auto Iter = CreateIterator(); Iter; ++Iter)
	{
		if (Context->IsSame(Iter.Value().Context))
		{
			Iter.RemoveCurrent();
		}
	}
}

#endif // ORION_WITH_CEF3
