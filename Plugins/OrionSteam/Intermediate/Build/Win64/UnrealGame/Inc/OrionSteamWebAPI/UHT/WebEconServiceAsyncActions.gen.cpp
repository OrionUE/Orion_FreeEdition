// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EconService/WebEconServiceAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebEconServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetTradeHistory Function GetTradeHistoryAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 MaxTrades;
		int32 StartAfterTime;
		FString StartAfterTradeId;
		bool bNavigatingBack;
		bool bGetDescriptions;
		FString Language;
		bool bIncludeFailed;
		bool bIncludeTotal;
		UOrionSteamWebAPIAsyncActionGetTradeHistory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a history of trades\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09MaxTrades\x09\x09\x09\x09The number of trades to return information for\n\x09 * @param\x09StartAfterTime\x09\x09\x09The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n\x09 * @param\x09StartAfterTradeId\x09\x09The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n\x09 * @param\x09""bNavigatingBack\x09\x09\x09The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n\x09 * @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trades will also be returned\n\x09 * @param\x09Language\x09\x09\x09\x09The language to use when loading item display data\n\x09 * @param\x09""bIncludeFailed\x09\x09\x09Include Failed\n\x09 * @param\x09""bIncludeTotal\x09\x09\x09If set, the total number of trades the account has participated in will be included in the response\n\x09 */" },
#endif
		{ "DisplayName", "Get Trade History" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a history of trades\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       MaxTrades                               The number of trades to return information for\n@param       StartAfterTime                  The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n@param       StartAfterTradeId               The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n@param       bNavigatingBack                 The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n@param       bGetDescriptions                If set, the item display data for the items included in the returned trades will also be returned\n@param       Language                                The language to use when loading item display data\n@param       bIncludeFailed                  Include Failed\n@param       bIncludeTotal                   If set, the total number of trades the account has participated in will be included in the response" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTrades;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartAfterTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartAfterTradeId;
	static void NewProp_bNavigatingBack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavigatingBack;
	static void NewProp_bGetDescriptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static void NewProp_bIncludeFailed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFailed;
	static void NewProp_bIncludeTotal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeTotal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_MaxTrades = { "MaxTrades", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, MaxTrades), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_StartAfterTime = { "StartAfterTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, StartAfterTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_StartAfterTradeId = { "StartAfterTradeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, StartAfterTradeId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bNavigatingBack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack = { "bNavigatingBack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bGetDescriptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bIncludeFailed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed = { "bIncludeFailed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bIncludeTotal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal = { "bIncludeTotal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_MaxTrades,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_StartAfterTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_StartAfterTradeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory, nullptr, "GetTradeHistoryAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::OrionSteamWebAPIAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetTradeHistory::execGetTradeHistoryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxTrades);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartAfterTime);
	P_GET_PROPERTY(FStrProperty,Z_Param_StartAfterTradeId);
	P_GET_UBOOL(Z_Param_bNavigatingBack);
	P_GET_UBOOL(Z_Param_bGetDescriptions);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_UBOOL(Z_Param_bIncludeFailed);
	P_GET_UBOOL(Z_Param_bIncludeTotal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetTradeHistory**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetTradeHistory::GetTradeHistoryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_MaxTrades,Z_Param_StartAfterTime,Z_Param_StartAfterTradeId,Z_Param_bNavigatingBack,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bIncludeFailed,Z_Param_bIncludeTotal);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetTradeHistory Function GetTradeHistoryAsync **

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetTradeHistory ******************************
void UOrionSteamWebAPIAsyncActionGetTradeHistory::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetTradeHistory()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetTradeHistory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTradeHistoryAsync", &UOrionSteamWebAPIAsyncActionGetTradeHistory::execGetTradeHistoryAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory;
UClass* UOrionSteamWebAPIAsyncActionGetTradeHistory::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetTradeHistory;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetTradeHistory"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetTradeHistory,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetTradeHistory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetTradeHistory\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetTradeHistory\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeHistory_GetTradeHistoryAsync, "GetTradeHistoryAsync" }, // 3438986466
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetTradeHistory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetTradeHistory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetTradeHistory::UOrionSteamWebAPIAsyncActionGetTradeHistory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetTradeHistory);
UOrionSteamWebAPIAsyncActionGetTradeHistory::~UOrionSteamWebAPIAsyncActionGetTradeHistory() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetTradeHistory ********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionFlushInventoryCache Function FlushInventoryCacheAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString ContextId;
		UOrionSteamWebAPIAsyncActionFlushInventoryCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Flushes the cache for a user's inventory in a specific app context\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09User to clear cache for.\n\x09 * @param\x09""AppId\x09\x09\x09""App to clear cache for.\n\x09 * @param\x09""ContextId\x09\x09""Context to clear cache for.\n\x09 */" },
#endif
		{ "DisplayName", "Flush Inventory Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flushes the cache for a user's inventory in a specific app context\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 User to clear cache for.\n@param       AppId                   App to clear cache for.\n@param       ContextId               Context to clear cache for." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache, nullptr, "FlushInventoryCacheAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::OrionSteamWebAPIAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::OrionSteamWebAPIAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionFlushInventoryCache::execFlushInventoryCacheAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionFlushInventoryCache**)Z_Param__Result=UOrionSteamWebAPIAsyncActionFlushInventoryCache::FlushInventoryCacheAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ContextId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionFlushInventoryCache Function FlushInventoryCacheAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionFlushInventoryCache **************************
void UOrionSteamWebAPIAsyncActionFlushInventoryCache::StaticRegisterNativesUOrionSteamWebAPIAsyncActionFlushInventoryCache()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionFlushInventoryCache::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FlushInventoryCacheAsync", &UOrionSteamWebAPIAsyncActionFlushInventoryCache::execFlushInventoryCacheAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache;
UClass* UOrionSteamWebAPIAsyncActionFlushInventoryCache::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionFlushInventoryCache;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionFlushInventoryCache"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionFlushInventoryCache,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionFlushInventoryCache::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionFlushInventoryCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionFlushInventoryCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushInventoryCache_FlushInventoryCacheAsync, "FlushInventoryCacheAsync" }, // 3606257892
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionFlushInventoryCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionFlushInventoryCache::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionFlushInventoryCache::UOrionSteamWebAPIAsyncActionFlushInventoryCache() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionFlushInventoryCache);
UOrionSteamWebAPIAsyncActionFlushInventoryCache::~UOrionSteamWebAPIAsyncActionFlushInventoryCache() {}
// ********** End Class UOrionSteamWebAPIAsyncActionFlushInventoryCache ****************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache Function FlushAssetAppearanceCacheAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\n\x09 */" },
#endif
		{ "DisplayName", "Flush Asset Appearance Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache, nullptr, "FlushAssetAppearanceCacheAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::OrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::OrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::execFlushAssetAppearanceCacheAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache**)Z_Param__Result=UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::FlushAssetAppearanceCacheAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache Function FlushAssetAppearanceCacheAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache ********************
void UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::StaticRegisterNativesUOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FlushAssetAppearanceCacheAsync", &UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::execFlushAssetAppearanceCacheAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache;
UClass* UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionFlushAssetAppearanceCache"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync, "FlushAssetAppearanceCacheAsync" }, // 1859085436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache);
UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::~UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache() {}
// ********** End Class UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache **********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionFlushContextCache Function FlushContextCacheAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionFlushContextCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\n\x09 */" },
#endif
		{ "DisplayName", "Flush Context Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache, nullptr, "FlushContextCacheAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::OrionSteamWebAPIAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::OrionSteamWebAPIAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionFlushContextCache::execFlushContextCacheAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionFlushContextCache**)Z_Param__Result=UOrionSteamWebAPIAsyncActionFlushContextCache::FlushContextCacheAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionFlushContextCache Function FlushContextCacheAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionFlushContextCache ****************************
void UOrionSteamWebAPIAsyncActionFlushContextCache::StaticRegisterNativesUOrionSteamWebAPIAsyncActionFlushContextCache()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionFlushContextCache::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FlushContextCacheAsync", &UOrionSteamWebAPIAsyncActionFlushContextCache::execFlushContextCacheAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache;
UClass* UOrionSteamWebAPIAsyncActionFlushContextCache::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionFlushContextCache;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionFlushContextCache"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionFlushContextCache,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionFlushContextCache::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionFlushContextCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionFlushContextCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFlushContextCache_FlushContextCacheAsync, "FlushContextCacheAsync" }, // 1374906953
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionFlushContextCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionFlushContextCache::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionFlushContextCache::UOrionSteamWebAPIAsyncActionFlushContextCache() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionFlushContextCache);
UOrionSteamWebAPIAsyncActionFlushContextCache::~UOrionSteamWebAPIAsyncActionFlushContextCache() {}
// ********** End Class UOrionSteamWebAPIAsyncActionFlushContextCache ******************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetTradeOffers Function GetTradeOffersAsync **
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		bool bGetSentOffers;
		bool bGetReceivedOffers;
		bool bGetDescriptions;
		FString Language;
		bool bActiveOnly;
		bool bHistoricalOnly;
		int32 TimeHistoricalCutoff;
		UOrionSteamWebAPIAsyncActionGetTradeOffers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a list of sent or received trade offers\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""bGetSentOffers\x09\x09\x09Request the list of sent offers.\n\x09 * @param\x09""bGetReceivedOffers\x09\x09Request the list of received offers.\n\x09 * @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trade offers will also be returned.\n\x09 * @param\x09Language\x09\x09\x09\x09The language to use when loading item display data.\n\x09 * @param\x09""bActiveOnly\x09\x09\x09\x09Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n\x09 * @param\x09""bHistoricalOnly\x09\x09\x09Indicates we should only return offers which are not active.\n\x09 * @param\x09TimeHistoricalCutoff\x09When active_only is set, offers updated since this time will also be returned\n\x09 */" },
#endif
		{ "DisplayName", "Get Trade Offers" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a list of sent or received trade offers\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       bGetSentOffers                  Request the list of sent offers.\n@param       bGetReceivedOffers              Request the list of received offers.\n@param       bGetDescriptions                If set, the item display data for the items included in the returned trade offers will also be returned.\n@param       Language                                The language to use when loading item display data.\n@param       bActiveOnly                             Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n@param       bHistoricalOnly                 Indicates we should only return offers which are not active.\n@param       TimeHistoricalCutoff    When active_only is set, offers updated since this time will also be returned" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_bGetSentOffers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetSentOffers;
	static void NewProp_bGetReceivedOffers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetReceivedOffers;
	static void NewProp_bGetDescriptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static void NewProp_bActiveOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveOnly;
	static void NewProp_bHistoricalOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHistoricalOnly;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeHistoricalCutoff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetSentOffers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers = { "bGetSentOffers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetReceivedOffers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers = { "bGetReceivedOffers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetDescriptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bActiveOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly = { "bActiveOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bHistoricalOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly = { "bHistoricalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_TimeHistoricalCutoff = { "TimeHistoricalCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, TimeHistoricalCutoff), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_TimeHistoricalCutoff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers, nullptr, "GetTradeOffersAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::OrionSteamWebAPIAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetTradeOffers::execGetTradeOffersAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_bGetSentOffers);
	P_GET_UBOOL(Z_Param_bGetReceivedOffers);
	P_GET_UBOOL(Z_Param_bGetDescriptions);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_UBOOL(Z_Param_bActiveOnly);
	P_GET_UBOOL(Z_Param_bHistoricalOnly);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeHistoricalCutoff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetTradeOffers**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetTradeOffers::GetTradeOffersAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_bGetSentOffers,Z_Param_bGetReceivedOffers,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bActiveOnly,Z_Param_bHistoricalOnly,Z_Param_TimeHistoricalCutoff);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetTradeOffers Function GetTradeOffersAsync ****

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetTradeOffers *******************************
void UOrionSteamWebAPIAsyncActionGetTradeOffers::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetTradeOffers()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetTradeOffers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTradeOffersAsync", &UOrionSteamWebAPIAsyncActionGetTradeOffers::execGetTradeOffersAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers;
UClass* UOrionSteamWebAPIAsyncActionGetTradeOffers::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetTradeOffers;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetTradeOffers"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetTradeOffers,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetTradeOffers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetTradeOffers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetTradeOffers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffers_GetTradeOffersAsync, "GetTradeOffersAsync" }, // 1207528831
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetTradeOffers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetTradeOffers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetTradeOffers::UOrionSteamWebAPIAsyncActionGetTradeOffers() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetTradeOffers);
UOrionSteamWebAPIAsyncActionGetTradeOffers::~UOrionSteamWebAPIAsyncActionGetTradeOffers() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetTradeOffers *********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetTradeOffer Function GetTradeOfferAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString TradeOfferId;
		FString Language;
		UOrionSteamWebAPIAsyncActionGetTradeOffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a specific trade offer\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\n\x09 */" },
#endif
		{ "DisplayName", "Get Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a specific trade offer\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, TradeOfferId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_TradeOfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer, nullptr, "GetTradeOfferAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::OrionSteamWebAPIAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::OrionSteamWebAPIAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetTradeOffer::execGetTradeOfferAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_TradeOfferId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetTradeOffer**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetTradeOffer::GetTradeOfferAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_TradeOfferId,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetTradeOffer Function GetTradeOfferAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetTradeOffer ********************************
void UOrionSteamWebAPIAsyncActionGetTradeOffer::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetTradeOffer()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetTradeOffer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTradeOfferAsync", &UOrionSteamWebAPIAsyncActionGetTradeOffer::execGetTradeOfferAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer;
UClass* UOrionSteamWebAPIAsyncActionGetTradeOffer::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetTradeOffer;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetTradeOffer"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetTradeOffer,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetTradeOffer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetTradeOffer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetTradeOffer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffer_GetTradeOfferAsync, "GetTradeOfferAsync" }, // 3195380014
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetTradeOffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetTradeOffer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetTradeOffer::UOrionSteamWebAPIAsyncActionGetTradeOffer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetTradeOffer);
UOrionSteamWebAPIAsyncActionGetTradeOffer::~UOrionSteamWebAPIAsyncActionGetTradeOffer() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetTradeOffer **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetTradeOffersSummary Function GetTradeOffersSummaryAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 TimeLastVisit;
		UOrionSteamWebAPIAsyncActionGetTradeOffersSummary* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get counts of pending and new trade offers\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09TimeLastVisit\x09\x09\x09The time the user last visited. If not passed, will use the time the user last visited the trade offer page.\n\x09 */" },
#endif
		{ "DisplayName", "Get Trade Offers Summary" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get counts of pending and new trade offers\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       TimeLastVisit                   The time the user last visited. If not passed, will use the time the user last visited the trade offer page." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastVisit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_TimeLastVisit = { "TimeLastVisit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, TimeLastVisit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_TimeLastVisit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary, nullptr, "GetTradeOffersSummaryAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::OrionSteamWebAPIAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::OrionSteamWebAPIAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::execGetTradeOffersSummaryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeLastVisit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetTradeOffersSummary**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::GetTradeOffersSummaryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_TimeLastVisit);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetTradeOffersSummary Function GetTradeOffersSummaryAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetTradeOffersSummary ************************
void UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetTradeOffersSummary()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTradeOffersSummaryAsync", &UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::execGetTradeOffersSummaryAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary;
UClass* UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetTradeOffersSummary;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetTradeOffersSummary"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetTradeOffersSummary,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetTradeOffersSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetTradeOffersSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync, "GetTradeOffersSummaryAsync" }, // 4117133880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetTradeOffersSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::UOrionSteamWebAPIAsyncActionGetTradeOffersSummary() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetTradeOffersSummary);
UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::~UOrionSteamWebAPIAsyncActionGetTradeOffersSummary() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetTradeOffersSummary **************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionDeclineTradeOffer Function DeclineTradeOfferAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString TradeOfferId;
		UOrionSteamWebAPIAsyncActionDeclineTradeOffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|EconService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Decline a trade offer someone sent to us\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09TradeOfferId\n\x09 */" },
#endif
		{ "DisplayName", "Decline Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decline a trade offer someone sent to us\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       TradeOfferId" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, TradeOfferId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_TradeOfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer, nullptr, "DeclineTradeOfferAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::OrionSteamWebAPIAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::OrionSteamWebAPIAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionDeclineTradeOffer::execDeclineTradeOfferAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_TradeOfferId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionDeclineTradeOffer**)Z_Param__Result=UOrionSteamWebAPIAsyncActionDeclineTradeOffer::DeclineTradeOfferAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_TradeOfferId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionDeclineTradeOffer Function DeclineTradeOfferAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionDeclineTradeOffer ****************************
void UOrionSteamWebAPIAsyncActionDeclineTradeOffer::StaticRegisterNativesUOrionSteamWebAPIAsyncActionDeclineTradeOffer()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionDeclineTradeOffer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeclineTradeOfferAsync", &UOrionSteamWebAPIAsyncActionDeclineTradeOffer::execDeclineTradeOfferAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer;
UClass* UOrionSteamWebAPIAsyncActionDeclineTradeOffer::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionDeclineTradeOffer;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionDeclineTradeOffer"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionDeclineTradeOffer,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionDeclineTradeOffer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetTradeOffersSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetTradeOffersSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync, "DeclineTradeOfferAsync" }, // 594085126
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionDeclineTradeOffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionDeclineTradeOffer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionDeclineTradeOffer::UOrionSteamWebAPIAsyncActionDeclineTradeOffer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionDeclineTradeOffer);
UOrionSteamWebAPIAsyncActionDeclineTradeOffer::~UOrionSteamWebAPIAsyncActionDeclineTradeOffer() {}
// ********** End Class UOrionSteamWebAPIAsyncActionDeclineTradeOffer ******************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionCancelTradeOffer Function CancelTradeOfferAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString TradeOfferId;
		UOrionSteamWebAPIAsyncActionCancelTradeOffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|EconService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel a trade offer we sent\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09TradeOfferId\n\x09 */" },
#endif
		{ "DisplayName", "Cancel Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel a trade offer we sent\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       TradeOfferId" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, TradeOfferId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_TradeOfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer, nullptr, "CancelTradeOfferAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::OrionSteamWebAPIAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::OrionSteamWebAPIAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionCancelTradeOffer::execCancelTradeOfferAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_TradeOfferId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionCancelTradeOffer**)Z_Param__Result=UOrionSteamWebAPIAsyncActionCancelTradeOffer::CancelTradeOfferAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_TradeOfferId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionCancelTradeOffer Function CancelTradeOfferAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionCancelTradeOffer *****************************
void UOrionSteamWebAPIAsyncActionCancelTradeOffer::StaticRegisterNativesUOrionSteamWebAPIAsyncActionCancelTradeOffer()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionCancelTradeOffer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelTradeOfferAsync", &UOrionSteamWebAPIAsyncActionCancelTradeOffer::execCancelTradeOfferAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer;
UClass* UOrionSteamWebAPIAsyncActionCancelTradeOffer::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionCancelTradeOffer;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionCancelTradeOffer"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionCancelTradeOffer,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionCancelTradeOffer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionCancelTradeOffer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionCancelTradeOffer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCancelTradeOffer_CancelTradeOfferAsync, "CancelTradeOfferAsync" }, // 3150472539
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionCancelTradeOffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionCancelTradeOffer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionCancelTradeOffer::UOrionSteamWebAPIAsyncActionCancelTradeOffer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionCancelTradeOffer);
UOrionSteamWebAPIAsyncActionCancelTradeOffer::~UOrionSteamWebAPIAsyncActionCancelTradeOffer() {}
// ********** End Class UOrionSteamWebAPIAsyncActionCancelTradeOffer *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconService_WebEconServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory, UOrionSteamWebAPIAsyncActionGetTradeHistory::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetTradeHistory"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetTradeHistory), 1490930615U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache, UOrionSteamWebAPIAsyncActionFlushInventoryCache::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionFlushInventoryCache"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushInventoryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionFlushInventoryCache), 1105147078U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache, UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionFlushAssetAppearanceCache), 1503055621U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache, UOrionSteamWebAPIAsyncActionFlushContextCache::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionFlushContextCache"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFlushContextCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionFlushContextCache), 927798316U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers, UOrionSteamWebAPIAsyncActionGetTradeOffers::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetTradeOffers"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetTradeOffers), 1910095133U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer, UOrionSteamWebAPIAsyncActionGetTradeOffer::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetTradeOffer"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetTradeOffer), 724650748U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary, UOrionSteamWebAPIAsyncActionGetTradeOffersSummary::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetTradeOffersSummary"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetTradeOffersSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetTradeOffersSummary), 777167333U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer, UOrionSteamWebAPIAsyncActionDeclineTradeOffer::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionDeclineTradeOffer"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeclineTradeOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionDeclineTradeOffer), 3244809309U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer, UOrionSteamWebAPIAsyncActionCancelTradeOffer::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionCancelTradeOffer"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCancelTradeOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionCancelTradeOffer), 3006877012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconService_WebEconServiceAsyncActions_h__Script_OrionSteamWebAPI_126520978(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconService_WebEconServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconService_WebEconServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
