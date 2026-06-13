// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamNews/WebSteamNewsAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebSteamNewsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetNewsForApp Function GetNewsForAppAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppId;
		int32 MaxLength;
		TArray<FString> Feeds;
		int32 EndDate;
		int32 Count;
		UOrionSteamWebAPIAsyncActionGetNewsForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "feeds" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the news for the specified app.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""AppId\x09\x09\x09""AppID to retrieve news for\n\x09 * @param\x09MaxLength\x09\x09Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n\x09 * @param\x09""EndDate\x09\x09\x09Retrieve posts earlier than this date (unix epoch timestamp)\n\x09 * @param\x09""Feeds\x09\x09\x09# of posts to retrieve (default 20)\n\x09 * @param\x09""Count\x09\x09\x09List of feed names to return news for\n\x09 */" },
#endif
		{ "CPP_Default_Count", "20" },
		{ "CPP_Default_EndDate", "1549795233" },
		{ "DisplayName", "Get News for App" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the news for the specified app.\n\n@param       Key                             Steamworks Web API publisher authentication key.\n@param       AppId                   AppID to retrieve news for\n@param       MaxLength               Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n@param       EndDate                 Retrieve posts earlier than this date (unix epoch timestamp)\n@param       Feeds                   # of posts to retrieve (default 20)\n@param       Count                   List of feed names to return news for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLength;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Feeds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Feeds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, MaxLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Feeds_Inner = { "Feeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Feeds = { "Feeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, Feeds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, EndDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_MaxLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Feeds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Feeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp, nullptr, "GetNewsForAppAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::OrionSteamWebAPIAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::OrionSteamWebAPIAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetNewsForApp::execGetNewsForAppAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxLength);
	P_GET_TARRAY(FString,Z_Param_Feeds);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndDate);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetNewsForApp**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetNewsForApp::GetNewsForAppAsync(Z_Param_WorldContextObject,Z_Param_AppId,Z_Param_MaxLength,Z_Param_Feeds,Z_Param_EndDate,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetNewsForApp Function GetNewsForAppAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetNewsForApp ********************************
void UOrionSteamWebAPIAsyncActionGetNewsForApp::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetNewsForApp()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetNewsForApp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNewsForAppAsync", &UOrionSteamWebAPIAsyncActionGetNewsForApp::execGetNewsForAppAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp;
UClass* UOrionSteamWebAPIAsyncActionGetNewsForApp::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetNewsForApp;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetNewsForApp"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetNewsForApp,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetNewsForApp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetNewsForApp\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetNewsForApp\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForApp_GetNewsForAppAsync, "GetNewsForAppAsync" }, // 3129132476
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetNewsForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetNewsForApp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetNewsForApp::UOrionSteamWebAPIAsyncActionGetNewsForApp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetNewsForApp);
UOrionSteamWebAPIAsyncActionGetNewsForApp::~UOrionSteamWebAPIAsyncActionGetNewsForApp() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetNewsForApp **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed Function GetNewsForAppAuthedAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 MaxLength;
		TArray<FString> Feeds;
		int32 EndDate;
		int32 Count;
		UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "feeds" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the news for the specified app. Publisher only version that can return info for unreleased games.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""AppId\x09\x09\x09""AppID to retrieve news for\n\x09 * @param\x09MaxLength\x09\x09Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n\x09 * @param\x09""EndDate\x09\x09\x09Retrieve posts earlier than this date (unix epoch timestamp)\n\x09 * @param\x09""Feeds\x09\x09\x09# of posts to retrieve (default 20)\n\x09 * @param\x09""Count\x09\x09\x09List of feed names to return news for\n\x09 */" },
#endif
		{ "CPP_Default_Count", "20" },
		{ "CPP_Default_EndDate", "1549795233" },
		{ "DisplayName", "Get News for App Authed" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the news for the specified app. Publisher only version that can return info for unreleased games.\n\n@param       Key                             Steamworks Web API publisher authentication key.\n@param       AppId                   AppID to retrieve news for\n@param       MaxLength               Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n@param       EndDate                 Retrieve posts earlier than this date (unix epoch timestamp)\n@param       Feeds                   # of posts to retrieve (default 20)\n@param       Count                   List of feed names to return news for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLength;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Feeds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Feeds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, MaxLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Feeds_Inner = { "Feeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Feeds = { "Feeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, Feeds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, EndDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_MaxLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Feeds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Feeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed, nullptr, "GetNewsForAppAuthedAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::OrionSteamWebAPIAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::execGetNewsForAppAuthedAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxLength);
	P_GET_TARRAY(FString,Z_Param_Feeds);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndDate);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::GetNewsForAppAuthedAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_MaxLength,Z_Param_Feeds,Z_Param_EndDate,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed Function GetNewsForAppAuthedAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed **************************
void UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetNewsForAppAuthed()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNewsForAppAuthedAsync", &UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::execGetNewsForAppAuthedAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed;
UClass* UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetNewsForAppAuthed"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetNewsForAppAuthed,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync, "GetNewsForAppAuthedAsync" }, // 3855342917
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed);
UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::~UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed ****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamNews_WebSteamNewsAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp, UOrionSteamWebAPIAsyncActionGetNewsForApp::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetNewsForApp"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetNewsForApp), 4222375447U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed, UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed), 2563589316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamNews_WebSteamNewsAsyncActions_h__Script_OrionSteamWebAPI_2373937473(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamNews_WebSteamNewsAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamNews_WebSteamNewsAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
