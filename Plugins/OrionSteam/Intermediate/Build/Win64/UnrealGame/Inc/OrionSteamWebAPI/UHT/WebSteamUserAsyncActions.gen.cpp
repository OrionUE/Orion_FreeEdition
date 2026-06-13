// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUser/WebSteamUserAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebSteamUserAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL_NoRegister();
ORIONSTEAMWEBAPI_API UEnum* Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionCheckAppOwnership Function CheckAppOwnershipAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionCheckAppOwnership* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamUser|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the specified user owns the app.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09""AppID to check for ownership\n\x09 */" },
#endif
		{ "DisplayName", "Check App Ownership" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the specified user owns the app.\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       SteamId         SteamID of user\n@param       AppId           AppID to check for ownership" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership, nullptr, "CheckAppOwnershipAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::OrionSteamWebAPIAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::OrionSteamWebAPIAsyncActionCheckAppOwnership_eventCheckAppOwnershipAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionCheckAppOwnership::execCheckAppOwnershipAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionCheckAppOwnership**)Z_Param__Result=UOrionSteamWebAPIAsyncActionCheckAppOwnership::CheckAppOwnershipAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionCheckAppOwnership Function CheckAppOwnershipAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionCheckAppOwnership ****************************
void UOrionSteamWebAPIAsyncActionCheckAppOwnership::StaticRegisterNativesUOrionSteamWebAPIAsyncActionCheckAppOwnership()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionCheckAppOwnership::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckAppOwnershipAsync", &UOrionSteamWebAPIAsyncActionCheckAppOwnership::execCheckAppOwnershipAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership;
UClass* UOrionSteamWebAPIAsyncActionCheckAppOwnership::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionCheckAppOwnership;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionCheckAppOwnership"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionCheckAppOwnership,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionCheckAppOwnership::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionCheckAppOwnership\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionCheckAppOwnership\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCheckAppOwnership_CheckAppOwnershipAsync, "CheckAppOwnershipAsync" }, // 2390710413
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionCheckAppOwnership>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionCheckAppOwnership::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionCheckAppOwnership::UOrionSteamWebAPIAsyncActionCheckAppOwnership() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionCheckAppOwnership);
UOrionSteamWebAPIAsyncActionCheckAppOwnership::~UOrionSteamWebAPIAsyncActionCheckAppOwnership() {}
// ********** End Class UOrionSteamWebAPIAsyncActionCheckAppOwnership ******************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetAppPriceInfo Function GetAppPriceInfoAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		TArray<int32> AppIds;
		UOrionSteamWebAPIAsyncActionGetAppPriceInfo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamUser|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get App Price Info\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09SteamID of user\n\x09 * @param\x09""AppIds\x09\x09Max: 100\n\x09 */" },
#endif
		{ "DisplayName", "Get App Price Info" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get App Price Info\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       SteamId         SteamID of user\n@param       AppIds          Max: 100" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AppIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds_Inner = { "AppIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds = { "AppIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, AppIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_AppIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo, nullptr, "GetAppPriceInfoAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::OrionSteamWebAPIAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::OrionSteamWebAPIAsyncActionGetAppPriceInfo_eventGetAppPriceInfoAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetAppPriceInfo::execGetAppPriceInfoAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int32,Z_Param_AppIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetAppPriceInfo**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetAppPriceInfo::GetAppPriceInfoAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppIds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetAppPriceInfo Function GetAppPriceInfoAsync **

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetAppPriceInfo ******************************
void UOrionSteamWebAPIAsyncActionGetAppPriceInfo::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetAppPriceInfo()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetAppPriceInfo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppPriceInfoAsync", &UOrionSteamWebAPIAsyncActionGetAppPriceInfo::execGetAppPriceInfoAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo;
UClass* UOrionSteamWebAPIAsyncActionGetAppPriceInfo::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetAppPriceInfo;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetAppPriceInfo"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetAppPriceInfo,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetAppPriceInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetAppPriceInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetAppPriceInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync, "GetAppPriceInfoAsync" }, // 4190318814
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetAppPriceInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetAppPriceInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetAppPriceInfo::UOrionSteamWebAPIAsyncActionGetAppPriceInfo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetAppPriceInfo);
UOrionSteamWebAPIAsyncActionGetAppPriceInfo::~UOrionSteamWebAPIAsyncActionGetAppPriceInfo() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetAppPriceInfo ********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetFriendList Function GetFriendListAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetFriendList_eventGetFriendListAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		FString Relationship;
		UOrionSteamWebAPIAsyncActionGetFriendList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamUser|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Friend List\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09SteamID of user\n\x09 * @param\x09Relationship\x09relationship type (ex: friend)\n\x09 */" },
#endif
		{ "DisplayName", "Get Friend List" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Friend List\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 SteamID of user\n@param       Relationship    relationship type (ex: friend)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Relationship;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetFriendList_eventGetFriendListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetFriendList_eventGetFriendListAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetFriendList_eventGetFriendListAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Relationship = { "Relationship", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetFriendList_eventGetFriendListAsync_Parms, Relationship), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetFriendList_eventGetFriendListAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_Relationship,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList, nullptr, "GetFriendListAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::OrionSteamWebAPIAsyncActionGetFriendList_eventGetFriendListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::OrionSteamWebAPIAsyncActionGetFriendList_eventGetFriendListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetFriendList::execGetFriendListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Relationship);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetFriendList**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetFriendList::GetFriendListAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_Relationship);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetFriendList Function GetFriendListAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetFriendList ********************************
void UOrionSteamWebAPIAsyncActionGetFriendList::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetFriendList()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetFriendList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFriendListAsync", &UOrionSteamWebAPIAsyncActionGetFriendList::execGetFriendListAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetFriendList;
UClass* UOrionSteamWebAPIAsyncActionGetFriendList::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetFriendList;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetFriendList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetFriendList"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetFriendList.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetFriendList,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetFriendList.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetFriendList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetFriendList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetFriendList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetFriendList_GetFriendListAsync, "GetFriendListAsync" }, // 4228040367
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetFriendList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetFriendList::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetFriendList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetFriendList.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetFriendList.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetFriendList::UOrionSteamWebAPIAsyncActionGetFriendList() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetFriendList);
UOrionSteamWebAPIAsyncActionGetFriendList::~UOrionSteamWebAPIAsyncActionGetFriendList() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetFriendList **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPlayerBans Function GetPlayerBansAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		TArray<FString> SteamIds;
		UOrionSteamWebAPIAsyncActionGetPlayerBans* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamUser|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Player Bans\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 */" },
#endif
		{ "DisplayName", "Get Player Bans" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Player Bans\n\n@param       Key                             Steamworks Web API publisher authentication Key." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds_Inner = { "SteamIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds = { "SteamIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, SteamIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_SteamIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans, nullptr, "GetPlayerBansAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::OrionSteamWebAPIAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::OrionSteamWebAPIAsyncActionGetPlayerBans_eventGetPlayerBansAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetPlayerBans::execGetPlayerBansAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY(FString,Z_Param_SteamIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetPlayerBans**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetPlayerBans::GetPlayerBansAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamIds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPlayerBans Function GetPlayerBansAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPlayerBans ********************************
void UOrionSteamWebAPIAsyncActionGetPlayerBans::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPlayerBans()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetPlayerBans::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerBansAsync", &UOrionSteamWebAPIAsyncActionGetPlayerBans::execGetPlayerBansAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans;
UClass* UOrionSteamWebAPIAsyncActionGetPlayerBans::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetPlayerBans;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetPlayerBans"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPlayerBans,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetPlayerBans::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetPlayerBans\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetPlayerBans\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerBans_GetPlayerBansAsync, "GetPlayerBansAsync" }, // 1957351076
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetPlayerBans>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetPlayerBans::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetPlayerBans::UOrionSteamWebAPIAsyncActionGetPlayerBans() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetPlayerBans);
UOrionSteamWebAPIAsyncActionGetPlayerBans::~UOrionSteamWebAPIAsyncActionGetPlayerBans() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPlayerBans **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPlayerSummaries Function GetPlayerSummariesAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		TArray<FString> SteamIds;
		UOrionSteamWebAPIAsyncActionGetPlayerSummaries* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamUser|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Player Summaries\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamIds\x09\x09Max: 100\n\x09 */" },
#endif
		{ "DisplayName", "Get Player Summaries" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Player Summaries\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamIds                Max: 100" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds_Inner = { "SteamIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds = { "SteamIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, SteamIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_SteamIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries, nullptr, "GetPlayerSummariesAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::OrionSteamWebAPIAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::OrionSteamWebAPIAsyncActionGetPlayerSummaries_eventGetPlayerSummariesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetPlayerSummaries::execGetPlayerSummariesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY(FString,Z_Param_SteamIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetPlayerSummaries**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetPlayerSummaries::GetPlayerSummariesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamIds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPlayerSummaries Function GetPlayerSummariesAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPlayerSummaries ***************************
void UOrionSteamWebAPIAsyncActionGetPlayerSummaries::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPlayerSummaries()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetPlayerSummaries::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerSummariesAsync", &UOrionSteamWebAPIAsyncActionGetPlayerSummaries::execGetPlayerSummariesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries;
UClass* UOrionSteamWebAPIAsyncActionGetPlayerSummaries::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetPlayerSummaries;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetPlayerSummaries"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPlayerSummaries,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetPlayerSummaries::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetPlayerSummaries\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetPlayerSummaries\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync, "GetPlayerSummariesAsync" }, // 1933213867
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetPlayerSummaries>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetPlayerSummaries::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetPlayerSummaries::UOrionSteamWebAPIAsyncActionGetPlayerSummaries() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetPlayerSummaries);
UOrionSteamWebAPIAsyncActionGetPlayerSummaries::~UOrionSteamWebAPIAsyncActionGetPlayerSummaries() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPlayerSummaries *****************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership Function GetPublisherAppOwnershipAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamUser|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Publisher App Ownership\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09SteamID of user\n\x09 */" },
#endif
		{ "DisplayName", "Get Publisher App Ownership" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Publisher App Ownership\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 SteamID of user" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership, nullptr, "GetPublisherAppOwnershipAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::OrionSteamWebAPIAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::OrionSteamWebAPIAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::execGetPublisherAppOwnershipAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::GetPublisherAppOwnershipAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership Function GetPublisherAppOwnershipAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership *********************
void UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPublisherAppOwnership()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPublisherAppOwnershipAsync", &UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::execGetPublisherAppOwnershipAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership;
UClass* UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetPublisherAppOwnership"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPublisherAppOwnership,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync, "GetPublisherAppOwnershipAsync" }, // 616130532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership);
UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::~UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership ***********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges Function GetPublisherAppOwnershipChangesAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString PackageRowVersion;
		FString CdKeyRowVersion;
		UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamUser|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number.\n\x09* From the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in.\n\x09""A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09PackageRowVersion\x09\x09""64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.\n\x09* @param\x09""CdKeyRowVersion\x09\x09\x09""64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls.\n\x09*/" },
#endif
		{ "DisplayName", "Get Publisher App Ownership Changes" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This method can be used to determine what SteamIDs have ownership changes starting from a particular package or Key row version number.\nFrom the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the Key passed in.\n       A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        PackageRowVersion               64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.\n@param        CdKeyRowVersion                 64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageRowVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CdKeyRowVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_PackageRowVersion = { "PackageRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, PackageRowVersion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_CdKeyRowVersion = { "CdKeyRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, CdKeyRowVersion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_PackageRowVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_CdKeyRowVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges, nullptr, "GetPublisherAppOwnershipChangesAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::OrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::OrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::execGetPublisherAppOwnershipChangesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageRowVersion);
	P_GET_PROPERTY(FStrProperty,Z_Param_CdKeyRowVersion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::GetPublisherAppOwnershipChangesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_PackageRowVersion,Z_Param_CdKeyRowVersion);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges Function GetPublisherAppOwnershipChangesAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges **************
void UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPublisherAppOwnershipChangesAsync", &UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::execGetPublisherAppOwnershipChangesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges;
UClass* UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync, "GetPublisherAppOwnershipChangesAsync" }, // 1822374709
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges);
UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::~UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges ****************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetUserGroupList Function GetUserGroupListAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionGetUserGroupList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|SteamUser|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get User Group List\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09SteamID of user\n\x09 */" },
#endif
		{ "DisplayName", "Get User Group List" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get User Group List\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 SteamID of user" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList, nullptr, "GetUserGroupListAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::OrionSteamWebAPIAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::OrionSteamWebAPIAsyncActionGetUserGroupList_eventGetUserGroupListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetUserGroupList::execGetUserGroupListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetUserGroupList**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetUserGroupList::GetUserGroupListAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetUserGroupList Function GetUserGroupListAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetUserGroupList *****************************
void UOrionSteamWebAPIAsyncActionGetUserGroupList::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetUserGroupList()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetUserGroupList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserGroupListAsync", &UOrionSteamWebAPIAsyncActionGetUserGroupList::execGetUserGroupListAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList;
UClass* UOrionSteamWebAPIAsyncActionGetUserGroupList::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetUserGroupList;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetUserGroupList"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetUserGroupList,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetUserGroupList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetUserGroupList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetUserGroupList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserGroupList_GetUserGroupListAsync, "GetUserGroupListAsync" }, // 1829233470
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetUserGroupList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetUserGroupList::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetUserGroupList::UOrionSteamWebAPIAsyncActionGetUserGroupList() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetUserGroupList);
UOrionSteamWebAPIAsyncActionGetUserGroupList::~UOrionSteamWebAPIAsyncActionGetUserGroupList() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetUserGroupList *******************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGrantPackage Function GrantPackageAsync ******
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 packageID;
		FString ipaddress;
		FString thirdPartyKey;
		int32 thirdPartyAppID;
		UOrionSteamWebAPIAsyncActionGrantPackage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|SteamUser|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get User Group List\n\x09 *\n\x09 * This call will only work on packages which have \"canbegrantedfromexternal\" set to 1.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09SteamID of user\n\x09 * @param\x09packageID\x09\x09\x09PackageID to grant\n\x09 * @param\x09ipaddress\x09\x09\x09ip address of user in string format(xxx.xxx.xxx.xxx).\n\x09 * @param\x09thirdPartyKey\x09\x09Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.\n\x09 * @param\x09thirdPartyAppID\x09\x09Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'.\n\x09 */" },
#endif
		{ "DisplayName", "Grant Package" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get User Group List\n\nThis call will only work on packages which have \"canbegrantedfromexternal\" set to 1.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SteamId                         SteamID of user\n@param       packageID                       PackageID to grant\n@param       ipaddress                       ip address of user in string format(xxx.xxx.xxx.xxx).\n@param       thirdPartyKey           Optionally associate third party Key during grant. 'thirdpartyappid' will have to be set.\n@param       thirdPartyAppID         Has to be set if 'thirdpartyKey' is set.The appid associated with the 'thirdpartyKey'." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_packageID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ipaddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_thirdPartyKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_thirdPartyAppID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_packageID = { "packageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms, packageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms, ipaddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_thirdPartyKey = { "thirdPartyKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms, thirdPartyKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_thirdPartyAppID = { "thirdPartyAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms, thirdPartyAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_packageID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_ipaddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_thirdPartyKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_thirdPartyAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage, nullptr, "GrantPackageAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::OrionSteamWebAPIAsyncActionGrantPackage_eventGrantPackageAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGrantPackage::execGrantPackageAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_packageID);
	P_GET_PROPERTY(FStrProperty,Z_Param_ipaddress);
	P_GET_PROPERTY(FStrProperty,Z_Param_thirdPartyKey);
	P_GET_PROPERTY(FIntProperty,Z_Param_thirdPartyAppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGrantPackage**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGrantPackage::GrantPackageAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_packageID,Z_Param_ipaddress,Z_Param_thirdPartyKey,Z_Param_thirdPartyAppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGrantPackage Function GrantPackageAsync ********

// ********** Begin Class UOrionSteamWebAPIAsyncActionGrantPackage *********************************
void UOrionSteamWebAPIAsyncActionGrantPackage::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGrantPackage()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGrantPackage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GrantPackageAsync", &UOrionSteamWebAPIAsyncActionGrantPackage::execGrantPackageAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGrantPackage;
UClass* UOrionSteamWebAPIAsyncActionGrantPackage::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGrantPackage;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGrantPackage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGrantPackage"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGrantPackage.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGrantPackage,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGrantPackage.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGrantPackage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGrantPackage\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGrantPackage\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGrantPackage_GrantPackageAsync, "GrantPackageAsync" }, // 3686060555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGrantPackage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGrantPackage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGrantPackage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGrantPackage.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGrantPackage.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGrantPackage::UOrionSteamWebAPIAsyncActionGrantPackage() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGrantPackage);
UOrionSteamWebAPIAsyncActionGrantPackage::~UOrionSteamWebAPIAsyncActionGrantPackage() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGrantPackage ***********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionResolveVanityURL Function ResolveVanityURLAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString VanityURL;
		EVanityUrlType URLType;
		UOrionSteamWebAPIAsyncActionResolveVanityURL* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|SteamUser|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resolve Vanity URL\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09VanityURL\x09\x09The vanity URL to get a SteamID for\n\x09 * @param\x09URLType\n\x09 */" },
#endif
		{ "DisplayName", "Resolve Vanity URL" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolve Vanity URL\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       VanityURL               The vanity URL to get a SteamID for\n@param       URLType" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VanityURL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_URLType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_URLType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_VanityURL = { "VanityURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, VanityURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType = { "URLType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, URLType), Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType, METADATA_PARAMS(0, nullptr) }; // 270422063
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_VanityURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_URLType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL, nullptr, "ResolveVanityURLAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::OrionSteamWebAPIAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::OrionSteamWebAPIAsyncActionResolveVanityURL_eventResolveVanityURLAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionResolveVanityURL::execResolveVanityURLAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_VanityURL);
	P_GET_ENUM(EVanityUrlType,Z_Param_URLType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionResolveVanityURL**)Z_Param__Result=UOrionSteamWebAPIAsyncActionResolveVanityURL::ResolveVanityURLAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_VanityURL,EVanityUrlType(Z_Param_URLType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionResolveVanityURL Function ResolveVanityURLAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionResolveVanityURL *****************************
void UOrionSteamWebAPIAsyncActionResolveVanityURL::StaticRegisterNativesUOrionSteamWebAPIAsyncActionResolveVanityURL()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionResolveVanityURL::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResolveVanityURLAsync", &UOrionSteamWebAPIAsyncActionResolveVanityURL::execResolveVanityURLAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL;
UClass* UOrionSteamWebAPIAsyncActionResolveVanityURL::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionResolveVanityURL;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionResolveVanityURL"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionResolveVanityURL,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionResolveVanityURL::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionResolveVanityURL\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/WebSteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionResolveVanityURL\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResolveVanityURL_ResolveVanityURLAsync, "ResolveVanityURLAsync" }, // 4186524171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionResolveVanityURL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionResolveVanityURL::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionResolveVanityURL::UOrionSteamWebAPIAsyncActionResolveVanityURL() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionResolveVanityURL);
UOrionSteamWebAPIAsyncActionResolveVanityURL::~UOrionSteamWebAPIAsyncActionResolveVanityURL() {}
// ********** End Class UOrionSteamWebAPIAsyncActionResolveVanityURL *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUser_WebSteamUserAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership, UOrionSteamWebAPIAsyncActionCheckAppOwnership::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionCheckAppOwnership"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCheckAppOwnership, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionCheckAppOwnership), 413873002U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo, UOrionSteamWebAPIAsyncActionGetAppPriceInfo::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetAppPriceInfo"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAppPriceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetAppPriceInfo), 2696485048U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetFriendList, UOrionSteamWebAPIAsyncActionGetFriendList::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetFriendList"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetFriendList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetFriendList), 2312727257U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans, UOrionSteamWebAPIAsyncActionGetPlayerBans::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetPlayerBans"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerBans, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetPlayerBans), 1357718750U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries, UOrionSteamWebAPIAsyncActionGetPlayerSummaries::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetPlayerSummaries"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerSummaries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetPlayerSummaries), 2506173869U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership, UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetPublisherAppOwnership), 2436121499U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges, UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetPublisherAppOwnershipChanges), 128710415U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList, UOrionSteamWebAPIAsyncActionGetUserGroupList::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetUserGroupList"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserGroupList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetUserGroupList), 2477453115U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGrantPackage, UOrionSteamWebAPIAsyncActionGrantPackage::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGrantPackage"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGrantPackage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGrantPackage), 825529947U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL, UOrionSteamWebAPIAsyncActionResolveVanityURL::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionResolveVanityURL"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResolveVanityURL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionResolveVanityURL), 1878278141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUser_WebSteamUserAsyncActions_h__Script_OrionSteamWebAPI_1945229893(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUser_WebSteamUserAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUser_WebSteamUserAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
