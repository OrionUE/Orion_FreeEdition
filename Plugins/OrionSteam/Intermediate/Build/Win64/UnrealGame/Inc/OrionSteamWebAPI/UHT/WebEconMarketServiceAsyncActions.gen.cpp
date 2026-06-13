// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EconMarket/WebEconMarketServiceAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebEconMarketServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetMarketEligibility Function GetMarketEligibilityAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionGetMarketEligibility* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconMarketService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether or not an account is allowed to use the market\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09The SteamID of the user to check\n\x09 */" },
#endif
		{ "DisplayName", "Get Market Eligibility" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether or not an account is allowed to use the market\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       SteamId         The SteamID of the user to check" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility, nullptr, "GetMarketEligibilityAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::OrionSteamWebAPIAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::OrionSteamWebAPIAsyncActionGetMarketEligibility_eventGetMarketEligibilityAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetMarketEligibility::execGetMarketEligibilityAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetMarketEligibility**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetMarketEligibility::GetMarketEligibilityAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetMarketEligibility Function GetMarketEligibilityAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetMarketEligibility *************************
void UOrionSteamWebAPIAsyncActionGetMarketEligibility::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetMarketEligibility()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetMarketEligibility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMarketEligibilityAsync", &UOrionSteamWebAPIAsyncActionGetMarketEligibility::execGetMarketEligibilityAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility;
UClass* UOrionSteamWebAPIAsyncActionGetMarketEligibility::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetMarketEligibility;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetMarketEligibility"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetMarketEligibility,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetMarketEligibility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetMarketEligibility\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetMarketEligibility\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketEligibility_GetMarketEligibilityAsync, "GetMarketEligibilityAsync" }, // 2960728444
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetMarketEligibility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetMarketEligibility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetMarketEligibility::UOrionSteamWebAPIAsyncActionGetMarketEligibility() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetMarketEligibility);
UOrionSteamWebAPIAsyncActionGetMarketEligibility::~UOrionSteamWebAPIAsyncActionGetMarketEligibility() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetMarketEligibility ***************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionCancelAppListingsForUser Function CancelAppListingsForUserAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		bool bSynchronous;
		UOrionSteamWebAPIAsyncActionCancelAppListingsForUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconMarketService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancels all of a user's listings for a specific app ID.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09The app making the request\n\x09 * @param\x09SteamId\x09\x09\x09The SteamID of the user whose listings should be canceled\n\x09 * @param\x09""bSynchronous\x09Whether or not to wait until all listings have been canceled before returning the response\n\x09 */" },
#endif
		{ "DisplayName", "Cancel App Listings for User" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancels all of a user's listings for a specific app ID.\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       AppId                   The app making the request\n@param       SteamId                 The SteamID of the user whose listings should be canceled\n@param       bSynchronous    Whether or not to wait until all listings have been canceled before returning the response" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bSynchronous_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronous;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_bSynchronous_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms*)Obj)->bSynchronous = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_bSynchronous = { "bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_bSynchronous_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_bSynchronous,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser, nullptr, "CancelAppListingsForUserAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::OrionSteamWebAPIAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::OrionSteamWebAPIAsyncActionCancelAppListingsForUser_eventCancelAppListingsForUserAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::execCancelAppListingsForUserAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bSynchronous);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionCancelAppListingsForUser**)Z_Param__Result=UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::CancelAppListingsForUserAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_bSynchronous);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionCancelAppListingsForUser Function CancelAppListingsForUserAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionCancelAppListingsForUser *********************
void UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::StaticRegisterNativesUOrionSteamWebAPIAsyncActionCancelAppListingsForUser()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelAppListingsForUserAsync", &UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::execCancelAppListingsForUserAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser;
UClass* UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionCancelAppListingsForUser;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionCancelAppListingsForUser"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionCancelAppListingsForUser,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionCancelAppListingsForUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionCancelAppListingsForUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync, "CancelAppListingsForUserAsync" }, // 3963563242
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionCancelAppListingsForUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::UOrionSteamWebAPIAsyncActionCancelAppListingsForUser() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionCancelAppListingsForUser);
UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::~UOrionSteamWebAPIAsyncActionCancelAppListingsForUser() {}
// ********** End Class UOrionSteamWebAPIAsyncActionCancelAppListingsForUser ***********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetAssetID Function GetAssetIDAsync **********
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetAssetID_eventGetAssetIDAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString ListingId;
		UOrionSteamWebAPIAsyncActionGetAssetID* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconMarketService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the asset ID of the item sold in a listing\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n\x09 * @param\x09ListingId (int64)\x09The identifier of the listing to get information for\n\x09 */" },
#endif
		{ "DisplayName", "Get Asset ID" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the asset ID of the item sold in a listing\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n@param       ListingId (int64)       The identifier of the listing to get information for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ListingId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetID_eventGetAssetIDAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetID_eventGetAssetIDAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetID_eventGetAssetIDAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_ListingId = { "ListingId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetID_eventGetAssetIDAsync_Parms, ListingId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetID_eventGetAssetIDAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_ListingId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID, nullptr, "GetAssetIDAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::OrionSteamWebAPIAsyncActionGetAssetID_eventGetAssetIDAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::OrionSteamWebAPIAsyncActionGetAssetID_eventGetAssetIDAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetAssetID::execGetAssetIDAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ListingId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetAssetID**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetAssetID::GetAssetIDAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_ListingId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetAssetID Function GetAssetIDAsync ************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetAssetID ***********************************
void UOrionSteamWebAPIAsyncActionGetAssetID::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetAssetID()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetAssetID::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAssetIDAsync", &UOrionSteamWebAPIAsyncActionGetAssetID::execGetAssetIDAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetID;
UClass* UOrionSteamWebAPIAsyncActionGetAssetID::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetAssetID;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetID.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetAssetID"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetID.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetAssetID,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetID.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetAssetID::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetAssetID\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetAssetID\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetID_GetAssetIDAsync, "GetAssetIDAsync" }, // 1412032822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetAssetID>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetAssetID::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetID.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetID.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetID.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetAssetID::UOrionSteamWebAPIAsyncActionGetAssetID() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetAssetID);
UOrionSteamWebAPIAsyncActionGetAssetID::~UOrionSteamWebAPIAsyncActionGetAssetID() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetAssetID *************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPopular Function GetPopularAsync **********
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString Language;
		int32 Rows;
		int32 Start;
		int32 FilterAppID;
		int32 ECurrency;
		UOrionSteamWebAPIAsyncActionGetPopular* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconMarketService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the most popular items\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09Language\x09\x09\x09The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n\x09 * @param\x09Rows\x09\x09\x09\x09Number of rows per page\n\x09 * @param\x09Start\x09\x09\x09\x09The result number to start at\n\x09 * @param\x09""FilterAppID\x09\x09\x09If present, the app ID to limit results to\n\x09 * @param\x09""ECurrency\x09\x09\x09If present, prices returned will be represented in this currency\n\x09 */" },
#endif
		{ "DisplayName", "Get Popular" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the most popular items\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       Language                        The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n@param       Rows                            Number of rows per page\n@param       Start                           The result number to start at\n@param       FilterAppID                     If present, the app ID to limit results to\n@param       ECurrency                       If present, prices returned will be represented in this currency" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Start;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FilterAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ECurrency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms, Rows), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms, Start), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_FilterAppID = { "FilterAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms, FilterAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_ECurrency = { "ECurrency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms, ECurrency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Rows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_FilterAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_ECurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular, nullptr, "GetPopularAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::OrionSteamWebAPIAsyncActionGetPopular_eventGetPopularAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetPopular::execGetPopularAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FIntProperty,Z_Param_Rows);
	P_GET_PROPERTY(FIntProperty,Z_Param_Start);
	P_GET_PROPERTY(FIntProperty,Z_Param_FilterAppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_ECurrency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetPopular**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetPopular::GetPopularAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_Language,Z_Param_Rows,Z_Param_Start,Z_Param_FilterAppID,Z_Param_ECurrency);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPopular Function GetPopularAsync ************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPopular ***********************************
void UOrionSteamWebAPIAsyncActionGetPopular::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPopular()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetPopular::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPopularAsync", &UOrionSteamWebAPIAsyncActionGetPopular::execGetPopularAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPopular;
UClass* UOrionSteamWebAPIAsyncActionGetPopular::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetPopular;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPopular.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetPopular"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPopular.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPopular,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPopular.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetPopular::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetPopular\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconMarket/WebEconMarketServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetPopular\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPopular_GetPopularAsync, "GetPopularAsync" }, // 1538860122
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetPopular>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetPopular::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPopular.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPopular.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPopular.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetPopular::UOrionSteamWebAPIAsyncActionGetPopular() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetPopular);
UOrionSteamWebAPIAsyncActionGetPopular::~UOrionSteamWebAPIAsyncActionGetPopular() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPopular *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility, UOrionSteamWebAPIAsyncActionGetMarketEligibility::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetMarketEligibility"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketEligibility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetMarketEligibility), 2497782797U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser, UOrionSteamWebAPIAsyncActionCancelAppListingsForUser::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionCancelAppListingsForUser"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelAppListingsForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionCancelAppListingsForUser), 3098569016U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetID, UOrionSteamWebAPIAsyncActionGetAssetID::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetAssetID"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetID, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetAssetID), 2101014293U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPopular, UOrionSteamWebAPIAsyncActionGetPopular::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetPopular"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPopular, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetPopular), 2539038139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketServiceAsyncActions_h__Script_OrionSteamWebAPI_2748069518(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
