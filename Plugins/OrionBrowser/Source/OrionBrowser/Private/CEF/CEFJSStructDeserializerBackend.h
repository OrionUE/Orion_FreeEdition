/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if ORION_WITH_CEF3

#include "OrionWebBrowserSingleton.h"
#include "UObject/UnrealType.h"
#include "IStructDeserializerBackend.h"
#include "CEFJSScripting.h"

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

class FOrionCEFJSScripting;
class IStructDeserializerBackend;
enum class EStructDeserializerBackendTokens;
class FProperty;
class UStruct;

#if ORION_WITH_CEF3

class IOrionCefContainerWalker
	: public TSharedFromThis<IOrionCefContainerWalker>
{
public:
	IOrionCefContainerWalker(TSharedPtr<IOrionCefContainerWalker> InParent)
		: Parent(InParent)
	{}
	virtual ~IOrionCefContainerWalker() = default;

	virtual TSharedPtr<IOrionCefContainerWalker> GetNextToken( EStructDeserializerBackendTokens& OutToken, FString& PropertyName ) = 0;
	virtual bool ReadProperty(TSharedPtr<FOrionCEFJSScripting> Scripting, FProperty* Property, FProperty* Outer, void* Data, int32 ArrayIndex) = 0;

	TSharedPtr<IOrionCefContainerWalker> Parent;
};

class FOrionCefListValueWalker
	: public IOrionCefContainerWalker
{
public:
	FOrionCefListValueWalker(TSharedPtr<IOrionCefContainerWalker> InParent, CefRefPtr<CefListValue> InList)
		: IOrionCefContainerWalker(InParent)
		, List(InList)
		, Index(-2)
	{}

	virtual TSharedPtr<IOrionCefContainerWalker> GetNextToken( EStructDeserializerBackendTokens& OutToken, FString& PropertyName ) override;
	virtual bool ReadProperty(TSharedPtr<FOrionCEFJSScripting> Scripting, FProperty* Property, FProperty* Outer, void* Data, int32 ArrayIndex ) override;

	CefRefPtr<CefListValue> List;
	size_t Index;
};

class FOrionCefDictionaryValueWalker
	: public IOrionCefContainerWalker
{
public:
	FOrionCefDictionaryValueWalker(TSharedPtr<IOrionCefContainerWalker> InParent, CefRefPtr<CefDictionaryValue> InDictionary)
		: IOrionCefContainerWalker(InParent)
		, Dictionary(InDictionary)
		, Index(-2)
	{
		Dictionary->GetKeys(Keys);
	}

	virtual TSharedPtr<IOrionCefContainerWalker> GetNextToken( EStructDeserializerBackendTokens& OutToken, FString& PropertyName ) override;
	virtual bool ReadProperty(TSharedPtr<FOrionCEFJSScripting> Scripting, FProperty* Property, FProperty* Outer, void* Data, int32 ArrayIndex ) override;

private:
	CefRefPtr<CefDictionaryValue> Dictionary;
	size_t Index;
	CefDictionaryValue::KeyList Keys;
};

/**
	* Implements a writer for UStruct serialization using CefDictionary.
	*/
class FOrionCEFJSStructDeserializerBackend
	: public IStructDeserializerBackend
{
public:

	/**
	 * Creates and initializes a new instance.
	 *
	 * @param Archive The archive to deserialize from.
	 */
	FOrionCEFJSStructDeserializerBackend(TSharedPtr<FOrionCEFJSScripting> InScripting, CefRefPtr<CefDictionaryValue> InDictionary)
		: Scripting(InScripting)
		, Walker(new FOrionCefDictionaryValueWalker(nullptr, InDictionary))
		, CurrentPropertyName()
	{ }

public:

	// IStructDeserializerBackend interface

	virtual const FString& GetCurrentPropertyName() const override;
	virtual FString GetDebugString() const override;
	virtual const FString& GetLastErrorMessage() const override;
	virtual bool GetNextToken( EStructDeserializerBackendTokens& OutToken ) override;
	virtual bool ReadProperty( FProperty* Property, FProperty* Outer, void* Data, int32 ArrayIndex ) override;
	virtual void SkipArray() override;
	virtual void SkipStructure() override;

private:
	TSharedPtr<FOrionCEFJSScripting> Scripting;
	/** Holds the source CEF dictionary containing a serialized verion of the structure. */
	TSharedPtr<IOrionCefContainerWalker> Walker;
	FString CurrentPropertyName;
};

#endif
