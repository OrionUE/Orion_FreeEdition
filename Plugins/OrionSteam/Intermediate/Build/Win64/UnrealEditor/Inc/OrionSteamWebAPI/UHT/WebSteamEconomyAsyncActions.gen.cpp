// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamEconomy/WebSteamEconomyAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebSteamEconomyAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionCanTrade Function CanTradeAsync **************
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionCanTrade_eventCanTradeAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString TargetId;
		UOrionSteamWebAPIAsyncActionCanTrade* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamEconomy|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Can trade\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09That the Key is associated with. Must be a steam economy app.\n\x09 * @param\x09SteamId\x09\x09\x09\x09SteamID of user attempting to initiate a trade\n\x09 * @param\x09TargetId (int64)\x09SteamID of user that is the target of the trade invitation\n\x09 */" },
#endif
		{ "DisplayName", "Can Trade" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can trade\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           That the Key is associated with. Must be a steam economy app.\n@param       SteamId                         SteamID of user attempting to initiate a trade\n@param       TargetId (int64)        SteamID of user that is the target of the trade invitation" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCanTrade_eventCanTradeAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCanTrade_eventCanTradeAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCanTrade_eventCanTradeAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCanTrade_eventCanTradeAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_TargetId = { "TargetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCanTrade_eventCanTradeAsync_Parms, TargetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCanTrade_eventCanTradeAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_TargetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade, nullptr, "CanTradeAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::OrionSteamWebAPIAsyncActionCanTrade_eventCanTradeAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::OrionSteamWebAPIAsyncActionCanTrade_eventCanTradeAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionCanTrade::execCanTradeAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionCanTrade**)Z_Param__Result=UOrionSteamWebAPIAsyncActionCanTrade::CanTradeAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_TargetId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionCanTrade Function CanTradeAsync ****************

// ********** Begin Class UOrionSteamWebAPIAsyncActionCanTrade *************************************
void UOrionSteamWebAPIAsyncActionCanTrade::StaticRegisterNativesUOrionSteamWebAPIAsyncActionCanTrade()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionCanTrade::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanTradeAsync", &UOrionSteamWebAPIAsyncActionCanTrade::execCanTradeAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCanTrade;
UClass* UOrionSteamWebAPIAsyncActionCanTrade::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionCanTrade;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCanTrade.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionCanTrade"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCanTrade.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionCanTrade,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCanTrade.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionCanTrade::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionCanTrade\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionCanTrade\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCanTrade_CanTradeAsync, "CanTradeAsync" }, // 1024505081
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionCanTrade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionCanTrade::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCanTrade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCanTrade.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCanTrade.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionCanTrade::UOrionSteamWebAPIAsyncActionCanTrade() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionCanTrade);
UOrionSteamWebAPIAsyncActionCanTrade::~UOrionSteamWebAPIAsyncActionCanTrade() {}
// ********** End Class UOrionSteamWebAPIAsyncActionCanTrade ***************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction Function FinalizeAssetTransactionAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString TxnId;
		FString Language;
		UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamEconomy|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finalize Asset Transaction\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09The app ID the user is buying assets for\n\x09 * @param\x09SteamId\x09\x09SteamID of the user making a purchase\n\x09 * @param\x09TxnId\x09\x09The transaction ID\n\x09 * @param\x09Language\x09The local Language for the user\n\x09 */" },
#endif
		{ "DisplayName", "Finalize Asset Transaction" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finalize Asset Transaction\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       AppId           The app ID the user is buying assets for\n@param       SteamId         SteamID of the user making a purchase\n@param       TxnId           The transaction ID\n@param       Language        The local Language for the user" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TxnId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_TxnId = { "TxnId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, TxnId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_TxnId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction, nullptr, "FinalizeAssetTransactionAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::OrionSteamWebAPIAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::OrionSteamWebAPIAsyncActionFinalizeAssetTransaction_eventFinalizeAssetTransactionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::execFinalizeAssetTransactionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_TxnId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction**)Z_Param__Result=UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::FinalizeAssetTransactionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_TxnId,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction Function FinalizeAssetTransactionAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction *********************
void UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::StaticRegisterNativesUOrionSteamWebAPIAsyncActionFinalizeAssetTransaction()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinalizeAssetTransactionAsync", &UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::execFinalizeAssetTransactionAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction;
UClass* UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionFinalizeAssetTransaction"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionFinalizeAssetTransaction,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync, "FinalizeAssetTransactionAsync" }, // 1687224405
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction);
UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::~UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction() {}
// ********** End Class UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction ***********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetAssetClassInfo Function GetAssetClassInfoAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Language;
		int32 ClassCount;
		FString ClassId;
		FString InstanceId;
		UOrionSteamWebAPIAsyncActionGetAssetClassInfo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamEconomy|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Asset Class Info\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09 * @param\x09Language\x09\x09The user's local Language\n\x09 * @param\x09""ClassCount\x09\x09Number of classes requested. Must be at least one.\n\x09 * @param\x09""ClassId\x09\x09\x09""Class ID of the nth class.\n\x09 * @param\x09InstanceId\x09\x09Instance ID of the nth class.\n\x09 */" },
#endif
		{ "DisplayName", "Get Asset Class Info" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Asset Class Info\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       AppId                   The app ID the user is buying assets for\n@param       Language                The user's local Language\n@param       ClassCount              Number of classes requested. Must be at least one.\n@param       ClassId                 Class ID of the nth class.\n@param       InstanceId              Instance ID of the nth class." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClassCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ClassCount = { "ClassCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, ClassCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ClassId = { "ClassId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, ClassId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, InstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ClassCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ClassId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_InstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo, nullptr, "GetAssetClassInfoAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::OrionSteamWebAPIAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetAssetClassInfo::execGetAssetClassInfoAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FIntProperty,Z_Param_ClassCount);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InstanceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetAssetClassInfo**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetAssetClassInfo::GetAssetClassInfoAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Language,Z_Param_ClassCount,Z_Param_ClassId,Z_Param_InstanceId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetAssetClassInfo Function GetAssetClassInfoAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetAssetClassInfo ****************************
void UOrionSteamWebAPIAsyncActionGetAssetClassInfo::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetAssetClassInfo()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetAssetClassInfo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAssetClassInfoAsync", &UOrionSteamWebAPIAsyncActionGetAssetClassInfo::execGetAssetClassInfoAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo;
UClass* UOrionSteamWebAPIAsyncActionGetAssetClassInfo::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetAssetClassInfo;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetAssetClassInfo"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetAssetClassInfo,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetAssetClassInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetAssetClassInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetAssetClassInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync, "GetAssetClassInfoAsync" }, // 536733923
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetAssetClassInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetAssetClassInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetAssetClassInfo::UOrionSteamWebAPIAsyncActionGetAssetClassInfo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetAssetClassInfo);
UOrionSteamWebAPIAsyncActionGetAssetClassInfo::~UOrionSteamWebAPIAsyncActionGetAssetClassInfo() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetAssetClassInfo ******************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetAssetPrices Function GetAssetPricesAsync **
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Currency;
		FString Language;
		UOrionSteamWebAPIAsyncActionGetAssetPrices* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamEconomy|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns prices and categories for items that users are able to purchase.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09 * @param\x09""Currency\x09\x09The currency to filter for\n\x09 * @param\x09Language\x09\x09The user's local Language\n\x09 */" },
#endif
		{ "DisplayName", "Get Asset Prices" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns prices and categories for items that users are able to purchase.\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       AppId                   The app ID the user is buying assets for\n@param       Currency                The currency to filter for\n@param       Language                The user's local Language" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices, nullptr, "GetAssetPricesAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::OrionSteamWebAPIAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::OrionSteamWebAPIAsyncActionGetAssetPrices_eventGetAssetPricesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetAssetPrices::execGetAssetPricesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetAssetPrices**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetAssetPrices::GetAssetPricesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Currency,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetAssetPrices Function GetAssetPricesAsync ****

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetAssetPrices *******************************
void UOrionSteamWebAPIAsyncActionGetAssetPrices::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetAssetPrices()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetAssetPrices::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAssetPricesAsync", &UOrionSteamWebAPIAsyncActionGetAssetPrices::execGetAssetPricesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices;
UClass* UOrionSteamWebAPIAsyncActionGetAssetPrices::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetAssetPrices;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetAssetPrices"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetAssetPrices,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetAssetPrices::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetAssetPrices\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetAssetPrices\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetAssetPrices_GetAssetPricesAsync, "GetAssetPricesAsync" }, // 1900258010
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetAssetPrices>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetAssetPrices::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetAssetPrices::UOrionSteamWebAPIAsyncActionGetAssetPrices() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetAssetPrices);
UOrionSteamWebAPIAsyncActionGetAssetPrices::~UOrionSteamWebAPIAsyncActionGetAssetPrices() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetAssetPrices *********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser Function GetExportedAssetsForUserAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString ContextId;
		UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamEconomy|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Exported Assets for User\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09The app to get exported items from.\n\x09 * @param\x09""ContextId (int64)\x09The context in the app to get exported items from.\n\x09 */" },
#endif
		{ "DisplayName", "Get Exported Assets for User" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Exported Assets for User\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SteamId                         SteamID of user\n@param       AppId                           The app to get exported items from.\n@param       ContextId (int64)       The context in the app to get exported items from." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser, nullptr, "GetExportedAssetsForUserAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::OrionSteamWebAPIAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::OrionSteamWebAPIAsyncActionGetExportedAssetsForUser_eventGetExportedAssetsForUserAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::execGetExportedAssetsForUserAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::GetExportedAssetsForUserAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ContextId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser Function GetExportedAssetsForUserAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser *********************
void UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetExportedAssetsForUser()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetExportedAssetsForUserAsync", &UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::execGetExportedAssetsForUserAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser;
UClass* UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetExportedAssetsForUser"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetExportedAssetsForUser,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync, "GetExportedAssetsForUserAsync" }, // 1191868527
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser);
UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::~UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser ***********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetMarketPrices Function GetMarketPricesAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionGetMarketPrices* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|SteamEconomy|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Market Prices\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09 */" },
#endif
		{ "DisplayName", "Get Market Prices" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Market Prices\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       AppId                   The app ID the user is buying assets for" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices, nullptr, "GetMarketPricesAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::OrionSteamWebAPIAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::OrionSteamWebAPIAsyncActionGetMarketPrices_eventGetMarketPricesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetMarketPrices::execGetMarketPricesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetMarketPrices**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetMarketPrices::GetMarketPricesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetMarketPrices Function GetMarketPricesAsync **

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetMarketPrices ******************************
void UOrionSteamWebAPIAsyncActionGetMarketPrices::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetMarketPrices()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetMarketPrices::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMarketPricesAsync", &UOrionSteamWebAPIAsyncActionGetMarketPrices::execGetMarketPricesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices;
UClass* UOrionSteamWebAPIAsyncActionGetMarketPrices::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetMarketPrices;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetMarketPrices"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetMarketPrices,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetMarketPrices::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetMarketPrices\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetMarketPrices\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetMarketPrices_GetMarketPricesAsync, "GetMarketPricesAsync" }, // 3274097668
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetMarketPrices>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetMarketPrices::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetMarketPrices::UOrionSteamWebAPIAsyncActionGetMarketPrices() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetMarketPrices);
UOrionSteamWebAPIAsyncActionGetMarketPrices::~UOrionSteamWebAPIAsyncActionGetMarketPrices() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetMarketPrices ********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionStartAssetTransaction Function StartAssetTransactionAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString AssetId;
		int32 AssetQuantity;
		FString Currency;
		FString Language;
		FString Ipaddress;
		FString Referer;
		bool bClientAuth;
		UOrionSteamWebAPIAsyncActionStartAssetTransaction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|SteamEconomy|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start Asset Transaction\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The app ID the user is buying assets for\n\x09 * @param\x09SteamId\x09\x09\x09\x09SteamID of user making a purchase\n\x09 * @param\x09""AssetId\x09\x09\x09\x09The ID of the first asset the user is buying - there must be at least one\n\x09 * @param\x09""AssetQuantity\x09\x09The quantity of assetid0's the the user is buying\n\x09 * @param\x09""Currency\x09\x09\x09The local currency for the user\n\x09 * @param\x09Language\x09\x09\x09The local Language for the user\n\x09 * @param\x09Ipaddress\x09\x09\x09The user's IP address\n\x09 * @param\x09Referer\x09\x09\x09\x09The referring URL\n\x09 * @param\x09""bClientAuth\x09\x09\x09If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products.\n\x09 */" },
#endif
		{ "DisplayName", "Start Asset Transaction" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start Asset Transaction\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           The app ID the user is buying assets for\n@param       SteamId                         SteamID of user making a purchase\n@param       AssetId                         The ID of the first asset the user is buying - there must be at least one\n@param       AssetQuantity           The quantity of assetid0's the the user is buying\n@param       Currency                        The local currency for the user\n@param       Language                        The local Language for the user\n@param       Ipaddress                       The user's IP address\n@param       Referer                         The referring URL\n@param       bClientAuth                     If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetQuantity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ipaddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Referer;
	static void NewProp_bClientAuth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientAuth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AssetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetQuantity = { "AssetQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AssetQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Ipaddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Referer = { "Referer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Referer), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms*)Obj)->bClientAuth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth = { "bClientAuth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Ipaddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Referer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction, nullptr, "StartAssetTransactionAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::OrionSteamWebAPIAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionStartAssetTransaction::execStartAssetTransactionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AssetQuantity);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ipaddress);
	P_GET_PROPERTY(FStrProperty,Z_Param_Referer);
	P_GET_UBOOL(Z_Param_bClientAuth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionStartAssetTransaction**)Z_Param__Result=UOrionSteamWebAPIAsyncActionStartAssetTransaction::StartAssetTransactionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_AssetId,Z_Param_AssetQuantity,Z_Param_Currency,Z_Param_Language,Z_Param_Ipaddress,Z_Param_Referer,Z_Param_bClientAuth);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionStartAssetTransaction Function StartAssetTransactionAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionStartAssetTransaction ************************
void UOrionSteamWebAPIAsyncActionStartAssetTransaction::StaticRegisterNativesUOrionSteamWebAPIAsyncActionStartAssetTransaction()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionStartAssetTransaction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartAssetTransactionAsync", &UOrionSteamWebAPIAsyncActionStartAssetTransaction::execStartAssetTransactionAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction;
UClass* UOrionSteamWebAPIAsyncActionStartAssetTransaction::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionStartAssetTransaction;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionStartAssetTransaction"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionStartAssetTransaction,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionStartAssetTransaction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionStartAssetTransaction\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionStartAssetTransaction\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartAssetTransaction_StartAssetTransactionAsync, "StartAssetTransactionAsync" }, // 778856118
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionStartAssetTransaction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionStartAssetTransaction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionStartAssetTransaction::UOrionSteamWebAPIAsyncActionStartAssetTransaction() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionStartAssetTransaction);
UOrionSteamWebAPIAsyncActionStartAssetTransaction::~UOrionSteamWebAPIAsyncActionStartAssetTransaction() {}
// ********** End Class UOrionSteamWebAPIAsyncActionStartAssetTransaction **************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionStartTrade Function StartTradeAsync **********
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionStartTrade_eventStartTradeAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId1;
		FString SteamId2;
		UOrionSteamWebAPIAsyncActionStartTrade* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|SteamEconomy|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start Trade\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09 * @param\x09SteamId1\x09\x09SteamID of first user in the trade\n\x09 * @param\x09SteamId2\x09\x09SteamID of second user in the trade\n\x09 */" },
#endif
		{ "DisplayName", "Start Trade" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start Trade\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       AppId                   The app ID the user is buying assets for\n@param       SteamId1                SteamID of first user in the trade\n@param       SteamId2                SteamID of second user in the trade" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId1;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartTrade_eventStartTradeAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartTrade_eventStartTradeAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartTrade_eventStartTradeAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId1 = { "SteamId1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartTrade_eventStartTradeAsync_Parms, SteamId1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId2 = { "SteamId2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartTrade_eventStartTradeAsync_Parms, SteamId2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartTrade_eventStartTradeAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_SteamId2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade, nullptr, "StartTradeAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::OrionSteamWebAPIAsyncActionStartTrade_eventStartTradeAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::OrionSteamWebAPIAsyncActionStartTrade_eventStartTradeAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionStartTrade::execStartTradeAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId1);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionStartTrade**)Z_Param__Result=UOrionSteamWebAPIAsyncActionStartTrade::StartTradeAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId1,Z_Param_SteamId2);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionStartTrade Function StartTradeAsync ************

// ********** Begin Class UOrionSteamWebAPIAsyncActionStartTrade ***********************************
void UOrionSteamWebAPIAsyncActionStartTrade::StaticRegisterNativesUOrionSteamWebAPIAsyncActionStartTrade()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionStartTrade::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartTradeAsync", &UOrionSteamWebAPIAsyncActionStartTrade::execStartTradeAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartTrade;
UClass* UOrionSteamWebAPIAsyncActionStartTrade::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionStartTrade;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartTrade.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionStartTrade"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartTrade.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionStartTrade,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartTrade.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionStartTrade::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionStartTrade\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamEconomy/WebSteamEconomyAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomyAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionStartTrade\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartTrade_StartTradeAsync, "StartTradeAsync" }, // 1625771214
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionStartTrade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionStartTrade::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartTrade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartTrade.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartTrade.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionStartTrade::UOrionSteamWebAPIAsyncActionStartTrade() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionStartTrade);
UOrionSteamWebAPIAsyncActionStartTrade::~UOrionSteamWebAPIAsyncActionStartTrade() {}
// ********** End Class UOrionSteamWebAPIAsyncActionStartTrade *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamEconomy_WebSteamEconomyAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCanTrade, UOrionSteamWebAPIAsyncActionCanTrade::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionCanTrade"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCanTrade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionCanTrade), 793483456U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction, UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionFinalizeAssetTransaction), 1557871726U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo, UOrionSteamWebAPIAsyncActionGetAssetClassInfo::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetAssetClassInfo"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetClassInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetAssetClassInfo), 2363885941U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices, UOrionSteamWebAPIAsyncActionGetAssetPrices::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetAssetPrices"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetAssetPrices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetAssetPrices), 1474805512U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser, UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetExportedAssetsForUser), 3788514983U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices, UOrionSteamWebAPIAsyncActionGetMarketPrices::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetMarketPrices"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetMarketPrices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetMarketPrices), 792542757U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction, UOrionSteamWebAPIAsyncActionStartAssetTransaction::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionStartAssetTransaction"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartAssetTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionStartAssetTransaction), 3720541094U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartTrade, UOrionSteamWebAPIAsyncActionStartTrade::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionStartTrade"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartTrade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionStartTrade), 2120986303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamEconomy_WebSteamEconomyAsyncActions_h__Script_OrionSteamWebAPI_643994293(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamEconomy_WebSteamEconomyAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamEconomy_WebSteamEconomyAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
