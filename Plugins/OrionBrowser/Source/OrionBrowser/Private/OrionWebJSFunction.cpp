/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#include "OrionWebJSFunction.h"
#include "WebJSScripting.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionWebJSFunction)

#if ORION_WITH_CEF3
#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/AllowWindowsPlatformAtomics.h"
#endif
#pragma push_macro("OVERRIDE")
#undef OVERRIDE // cef headers provide their own OVERRIDE macro
THIRD_PARTY_INCLUDES_START
#if PLATFORM_APPLE
PRAGMA_DISABLE_DEPRECATION_WARNINGS
#endif
#include "include/cef_values.h"
#if PLATFORM_APPLE
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#endif
THIRD_PARTY_INCLUDES_END
#pragma pop_macro("OVERRIDE")
#if PLATFORM_WINDOWS
#include "Windows/HideWindowsPlatformAtomics.h"
#include "Windows/HideWindowsPlatformTypes.h"
#endif
#endif

FOrionWebJSParam::~FOrionWebJSParam()
{
	// Since the FString, StructWrapper, TArray, and TMap members are in a union, they may or may not be valid, so we have to call the destructors manually.
	switch (Tag)
	{
		case PTYPE_STRING:
			delete StringValue;
			break;
		case PTYPE_STRUCT:
			delete StructValue;
			break;
		case PTYPE_ARRAY:
			delete ArrayValue;
			break;
		case PTYPE_MAP:
			delete MapValue;
			break;
		default:
			break;
	}
}

FOrionWebJSParam::FOrionWebJSParam(const FOrionWebJSParam& Other)
	: Tag(Other.Tag)
{
	switch (Other.Tag)
	{
		case PTYPE_BOOL:
			BoolValue = Other.BoolValue;
			break;
		case PTYPE_DOUBLE:
			DoubleValue = Other.DoubleValue;
			break;
		case PTYPE_INT:
			IntValue = Other.IntValue;
			break;
		case PTYPE_STRING:
			StringValue = new FString(*Other.StringValue);
			break;
		case PTYPE_NULL:
			break;
		case PTYPE_OBJECT:
			ObjectValue = Other.ObjectValue;
			break;
		case PTYPE_STRUCT:
			StructValue = Other.StructValue->Clone();
			break;
		case PTYPE_ARRAY:
			ArrayValue = new TArray<FOrionWebJSParam>(*Other.ArrayValue);
			break;
		case PTYPE_MAP:
			MapValue = new TMap<FString, FOrionWebJSParam>(*Other.MapValue);
			break;
	}
}

FOrionWebJSParam::FOrionWebJSParam(FOrionWebJSParam&& Other)
	: Tag(Other.Tag)
{
	switch (Other.Tag)
	{
	case PTYPE_BOOL:
		BoolValue = Other.BoolValue;
		break;
	case PTYPE_DOUBLE:
		DoubleValue = Other.DoubleValue;
		break;
	case PTYPE_INT:
		IntValue = Other.IntValue;
		break;
	case PTYPE_STRING:
		StringValue = Other.StringValue;
		Other.StringValue = nullptr;
		break;
	case PTYPE_NULL:
		break;
	case PTYPE_OBJECT:
		ObjectValue = Other.ObjectValue;
		Other.ObjectValue = nullptr;
		break;
	case PTYPE_STRUCT:
		StructValue = Other.StructValue;
		Other.StructValue = nullptr;
		break;
	case PTYPE_ARRAY:
		ArrayValue = Other.ArrayValue;
		Other.ArrayValue = nullptr;
		break;
	case PTYPE_MAP:
		MapValue = Other.MapValue;
		Other.MapValue = nullptr;
		break;
	}

	Other.Tag = PTYPE_NULL;
}

void FOrionWebJSCallbackBase::Invoke(int32 ArgCount, FOrionWebJSParam Arguments[], bool bIsError) const
{
	TSharedPtr<FOrionWebJSScripting> Scripting = ScriptingPtr.Pin();
	if (Scripting.IsValid())
	{
		Scripting->InvokeJSFunction(CallbackId, ArgCount, Arguments, bIsError);
	}
}
