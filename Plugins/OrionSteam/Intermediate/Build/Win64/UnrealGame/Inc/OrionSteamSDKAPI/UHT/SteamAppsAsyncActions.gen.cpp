// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamApps/SteamAppsAsyncActions.h"
#include "SteamApps/SteamAppsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamAppsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncAction();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFileDetailsResult();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnFileDetailsResultAsyncDelegate *************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnFileDetailsResultAsyncDelegate_Parms
	{
		FFileDetailsResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnFileDetailsResultAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FFileDetailsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3663998125
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnFileDetailsResultAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnFileDetailsResultAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnFileDetailsResultAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnFileDetailsResultAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnFileDetailsResultAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileDetailsResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultAsyncDelegate, FFileDetailsResult const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnFileDetailsResultAsyncDelegate_Parms
	{
		FFileDetailsResult Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnFileDetailsResultAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileDetailsResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFileDetailsResultAsyncDelegate ***************************************

// ********** Begin Class UOrionSteamAppsAsyncActionGetFileDetails Function GetFileDetailsAsync ****
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics
{
	struct OrionSteamAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms
	{
		UObject* WorldContextObject;
		FString FileName;
		float Timeout;
		UOrionSteamAppsAsyncActionGetFileDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\x09 * Currently provides:\n\x09 * The file size in bytes.\n\x09 * The file's SHA1 hash.\n\x09 * The file's flags.\n\x09 *\n\x09 * @param\x09""FileName\x09The absolute path and name to the file.\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Get File Details" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously retrieves metadata details about a specific file in the depot manifest.\nCurrently provides:\nThe file size in bytes.\nThe file's SHA1 hash.\nThe file's flags.\n\n@param       FileName        The absolute path and name to the file.\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails, nullptr, "GetFileDetailsAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::OrionSteamAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::OrionSteamAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetFileDetails::execGetFileDetailsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionGetFileDetails**)Z_Param__Result=UOrionSteamAppsAsyncActionGetFileDetails::GetFileDetailsAsync(Z_Param_WorldContextObject,Z_Param_FileName,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetFileDetails Function GetFileDetailsAsync ******

// ********** Begin Class UOrionSteamAppsAsyncActionGetFileDetails Function HandleCallback *********
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics
{
	struct OrionSteamAppsAsyncActionGetFileDetails_eventHandleCallback_Parms
	{
		FFileDetailsResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetFileDetails_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFileDetailsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3663998125
void Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamAppsAsyncActionGetFileDetails_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamAppsAsyncActionGetFileDetails_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::OrionSteamAppsAsyncActionGetFileDetails_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::OrionSteamAppsAsyncActionGetFileDetails_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetFileDetails::execHandleCallback)
{
	P_GET_STRUCT_REF(FFileDetailsResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetFileDetails Function HandleCallback ***********

// ********** Begin Class UOrionSteamAppsAsyncActionGetFileDetails *********************************
void UOrionSteamAppsAsyncActionGetFileDetails::StaticRegisterNativesUOrionSteamAppsAsyncActionGetFileDetails()
{
	UClass* Class = UOrionSteamAppsAsyncActionGetFileDetails::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFileDetailsAsync", &UOrionSteamAppsAsyncActionGetFileDetails::execGetFileDetailsAsync },
		{ "HandleCallback", &UOrionSteamAppsAsyncActionGetFileDetails::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetFileDetails;
UClass* UOrionSteamAppsAsyncActionGetFileDetails::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionGetFileDetails;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetFileDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionGetFileDetails"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetFileDetails.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionGetFileDetails,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetFileDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_NoRegister()
{
	return UOrionSteamAppsAsyncActionGetFileDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionGetFileDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamApps/SteamAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionGetFileDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_GetFileDetailsAsync, "GetFileDetailsAsync" }, // 2255325889
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetFileDetails_HandleCallback, "HandleCallback" }, // 958482983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionGetFileDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamAppsAsyncActionGetFileDetails, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1939226711
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionGetFileDetails::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetFileDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetFileDetails.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetFileDetails.OuterSingleton;
}
UOrionSteamAppsAsyncActionGetFileDetails::UOrionSteamAppsAsyncActionGetFileDetails(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionGetFileDetails);
UOrionSteamAppsAsyncActionGetFileDetails::~UOrionSteamAppsAsyncActionGetFileDetails() {}
// ********** End Class UOrionSteamAppsAsyncActionGetFileDetails ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails, UOrionSteamAppsAsyncActionGetFileDetails::StaticClass, TEXT("UOrionSteamAppsAsyncActionGetFileDetails"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetFileDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionGetFileDetails), 2845481523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h__Script_OrionSteamSDKAPI_4082797692(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
