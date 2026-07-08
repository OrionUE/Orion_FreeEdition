/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/Array.h"
#include "Containers/Map.h"
#include "Containers/UnrealString.h"
#include "CoreMinimal.h"
#include "HAL/Platform.h"
#include "Internationalization/Text.h"
#include "Misc/Guid.h"
#include "Templates/EnableIf.h"
#include "Templates/IsPointer.h"
#include "Templates/SharedPointer.h"
#include "UObject/Class.h"
#include "UObject/NameTypes.h"
#include "UObject/ObjectMacros.h"

#include "OrionWebJSFunction.generated.h"

class FOrionWebJSScripting;
class UObject;
class UStruct;

struct FOrionWebJSParam
{

	struct IStructWrapper
	{
		virtual ~IStructWrapper() = default;
		virtual UStruct* GetTypeInfo() = 0;
		virtual const void* GetData() = 0;
		virtual IStructWrapper* Clone() = 0;
	};

	template <typename T> struct FStructWrapper
		: public IStructWrapper
	{
		T StructValue;
		FStructWrapper(const T& InValue)
			: StructValue(InValue)
		{}
		virtual ~FStructWrapper() = default;
	virtual UStruct* GetTypeInfo() override { return T::StaticStruct(); }
	virtual const void* GetData() override { return &StructValue; }
	virtual IStructWrapper* Clone() override { return new FStructWrapper<T>(StructValue); }
	};

	FOrionWebJSParam() : Tag(PTYPE_NULL) {}
	FOrionWebJSParam(bool Value) : Tag(PTYPE_BOOL), BoolValue(Value) {}
	FOrionWebJSParam(int8 Value) : Tag(PTYPE_INT), IntValue(Value) {}
	FOrionWebJSParam(int16 Value) : Tag(PTYPE_INT), IntValue(Value) {}
	FOrionWebJSParam(int32 Value) : Tag(PTYPE_INT), IntValue(Value) {}
	FOrionWebJSParam(uint8 Value) : Tag(PTYPE_INT), IntValue(Value) {}
	FOrionWebJSParam(uint16 Value) : Tag(PTYPE_INT), IntValue(Value) {}
	FOrionWebJSParam(uint32 Value) : Tag(PTYPE_DOUBLE), DoubleValue(Value) {}
	FOrionWebJSParam(int64 Value) : Tag(PTYPE_DOUBLE), DoubleValue(Value) {}
	FOrionWebJSParam(uint64 Value) : Tag(PTYPE_DOUBLE), DoubleValue(Value) {}
	FOrionWebJSParam(double Value) : Tag(PTYPE_DOUBLE), DoubleValue(Value) {}
	FOrionWebJSParam(float Value) : Tag(PTYPE_DOUBLE), DoubleValue(Value) {}
	FOrionWebJSParam(const FString& Value) : Tag(PTYPE_STRING), StringValue(new FString(Value)) {}
	FOrionWebJSParam(const FText& Value) : Tag(PTYPE_STRING), StringValue(new FString(Value.ToString())) {}
	FOrionWebJSParam(const FName& Value) : Tag(PTYPE_STRING), StringValue(new FString(Value.ToString())) {}
	FOrionWebJSParam(const TCHAR* Value) : Tag(PTYPE_STRING), StringValue(new FString(Value)) {}
	FOrionWebJSParam(UObject* Value) : Tag(PTYPE_OBJECT), ObjectValue(Value) {}
	template <typename T> FOrionWebJSParam(const T& Value,
		typename TEnableIf<!TIsPointer<T>::Value, UStruct>::Type* InTypeInfo=T::StaticStruct())
		: Tag(PTYPE_STRUCT)
		, StructValue(new FStructWrapper<T>(Value))
	{}
	template <typename T> FOrionWebJSParam(const TArray<T>& Value)
		: Tag(PTYPE_ARRAY)
	{
		ArrayValue = new TArray<FOrionWebJSParam>();
		ArrayValue->Reserve(Value.Num());
		for(T Item : Value)
		{
			ArrayValue->Add(FOrionWebJSParam(Item));
		}
	}
	template <typename T> FOrionWebJSParam(const TMap<FString, T>& Value)
		: Tag(PTYPE_MAP)
	{
		MapValue = new TMap<FString, FOrionWebJSParam>();
		MapValue->Reserve(Value.Num());
		for(const auto& Pair : Value)
		{
			MapValue->Add(Pair.Key, FOrionWebJSParam(Pair.Value));
		}
	}
	template <typename K, typename T> FOrionWebJSParam(const TMap<K, T>& Value)
		: Tag(PTYPE_MAP)
	{
		MapValue = new TMap<FString, FOrionWebJSParam>();
		MapValue->Reserve(Value.Num());
		for(const auto& Pair : Value)
		{
			MapValue->Add(Pair.Key.ToString(), FOrionWebJSParam(Pair.Value));
		}
	}
	ORIONBROWSER_API FOrionWebJSParam(const FOrionWebJSParam& Other);
	ORIONBROWSER_API FOrionWebJSParam(FOrionWebJSParam&& Other);
	ORIONBROWSER_API ~FOrionWebJSParam();

	enum { PTYPE_NULL, PTYPE_BOOL, PTYPE_INT, PTYPE_DOUBLE, PTYPE_STRING, PTYPE_OBJECT, PTYPE_STRUCT, PTYPE_ARRAY, PTYPE_MAP } Tag;
	union
	{
		bool BoolValue;
		double DoubleValue;
		int32 IntValue;
		UObject* ObjectValue;
		const FString* StringValue;
		IStructWrapper* StructValue;
		TArray<FOrionWebJSParam>* ArrayValue;
		TMap<FString, FOrionWebJSParam>* MapValue;
	};

};

class FOrionWebJSScripting;

/** Base class for JS callback objects. */
USTRUCT()
struct FOrionWebJSCallbackBase
{
	GENERATED_USTRUCT_BODY()
	FOrionWebJSCallbackBase()
	{}

	bool IsValid() const { return ScriptingPtr.IsValid(); }


protected:
	FOrionWebJSCallbackBase(TSharedPtr<FOrionWebJSScripting> InScripting, const FGuid& InCallbackId)
		: ScriptingPtr(InScripting)
		, CallbackId(InCallbackId)
	{}

	ORIONBROWSER_API void Invoke(int32 ArgCount, FOrionWebJSParam Arguments[], bool bIsError = false) const;

private:

	TWeakPtr<FOrionWebJSScripting> ScriptingPtr;
	FGuid CallbackId;
};


/**
	* Representation of a remote JS function.
	* FOrionWebJSFunction objects represent a JS function and allow calling them from native code.
	* FOrionWebJSFunction objects can also be added to delegates and events using the Bind/AddLambda method.
	*/
USTRUCT()
struct FOrionWebJSFunction
	: public FOrionWebJSCallbackBase
{
	GENERATED_USTRUCT_BODY()

	FOrionWebJSFunction()
		: FOrionWebJSCallbackBase()
	{}

	FOrionWebJSFunction(TSharedPtr<FOrionWebJSScripting> InScripting, const FGuid& InFunctionId)
		: FOrionWebJSCallbackBase(InScripting, InFunctionId)
	{}

	template<typename ...ArgTypes> void operator()(ArgTypes... Args) const
	{
		FOrionWebJSParam ArgArray[sizeof...(Args)] = {FOrionWebJSParam(Args)...};
		Invoke(sizeof...(Args), ArgArray);
	}
};

/** 
	*  Representation of a remote JS async response object.
	*  UFUNCTIONs taking a FOrionWebJSResponse will get it passed in automatically when called from a web browser.
	*  Pass a result or error back by invoking Success or Failure on the object.
	*  UFunctions accepting a FOrionWebJSResponse should have a void return type, as any value returned from the function will be ignored.
	*  Calling the response methods does not have to happen before returning from the function, which means you can use this to implement asynchronous functionality.
	*
	*  Note that the remote object will become invalid as soon as a result has been delivered, so you can only call either Success or Failure once.
	*/
USTRUCT()
struct FOrionWebJSResponse
	: public FOrionWebJSCallbackBase
{
	GENERATED_USTRUCT_BODY()

	FOrionWebJSResponse()
		: FOrionWebJSCallbackBase()
	{}

	FOrionWebJSResponse(TSharedPtr<FOrionWebJSScripting> InScripting, const FGuid& InCallbackId)
		: FOrionWebJSCallbackBase(InScripting, InCallbackId)
	{}

	/**
	 * Indicate successful completion without a return value.
	 * The remote Promise's then() handler will be executed without arguments.
	 */
	void Success() const { Invoke(0, nullptr, false); }

	/**
	 * Indicate successful completion passing a return value back.
	 * The remote Promise's then() handler will be executed with the value passed as its single argument.
	 */
	template<typename T>
	void Success(T Arg) const
	{
		FOrionWebJSParam ArgArray[1] = {FOrionWebJSParam(Arg)};
		Invoke(1, ArgArray, false);
	}

	/**
	 * Indicate failed completion, passing an error message back to JS.
	 * The remote Promise's catch() handler will be executed with the value passed as the error reason.
	 */
	template<typename T>
	void Failure(T Arg) const
	{
		FOrionWebJSParam ArgArray[1] = {FOrionWebJSParam(Arg)};
		Invoke(1, ArgArray, true);
	}


};
