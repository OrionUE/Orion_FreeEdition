// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PublishedItemVoting/WebPublishedItemVotingAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebPublishedItemVotingAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionItemVoteSummary Function ItemVoteSummaryAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		TArray<FString> PublishedFileIds;
		UOrionSteamWebAPIAsyncActionItemVoteSummary* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "publishedFileIDs" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Item Vote Summary\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09Steam ID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""appID of product\n\x09 * @param\x09PublishedFileIds\x09\x09The Published File ID who's vote details are required\n\x09 */" },
#endif
		{ "DisplayName", "Item Vote Summary" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item Vote Summary\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 Steam ID of user\n@param       AppId                                   appID of product\n@param       PublishedFileIds                The Published File ID who's vote details are required" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary, nullptr, "ItemVoteSummaryAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::OrionSteamWebAPIAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::OrionSteamWebAPIAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionItemVoteSummary::execItemVoteSummaryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionItemVoteSummary**)Z_Param__Result=UOrionSteamWebAPIAsyncActionItemVoteSummary::ItemVoteSummaryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionItemVoteSummary Function ItemVoteSummaryAsync **

// ********** Begin Class UOrionSteamWebAPIAsyncActionItemVoteSummary ******************************
void UOrionSteamWebAPIAsyncActionItemVoteSummary::StaticRegisterNativesUOrionSteamWebAPIAsyncActionItemVoteSummary()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionItemVoteSummary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ItemVoteSummaryAsync", &UOrionSteamWebAPIAsyncActionItemVoteSummary::execItemVoteSummaryAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary;
UClass* UOrionSteamWebAPIAsyncActionItemVoteSummary::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionItemVoteSummary;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionItemVoteSummary"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionItemVoteSummary,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionItemVoteSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionItemVoteSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionItemVoteSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionItemVoteSummary_ItemVoteSummaryAsync, "ItemVoteSummaryAsync" }, // 2950369273
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionItemVoteSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionItemVoteSummary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionItemVoteSummary::UOrionSteamWebAPIAsyncActionItemVoteSummary() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionItemVoteSummary);
UOrionSteamWebAPIAsyncActionItemVoteSummary::~UOrionSteamWebAPIAsyncActionItemVoteSummary() {}
// ********** End Class UOrionSteamWebAPIAsyncActionItemVoteSummary ********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionUserVoteSummary Function UserVoteSummaryAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		TArray<FString> PublishedFileIds;
		UOrionSteamWebAPIAsyncActionUserVoteSummary* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "publishedFileIDs" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Item Vote Summary\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09Steam ID of user\n\x09 * @param\x09PublishedFileIds\x09\x09The Published File ID who's vote details are required\n\x09 */" },
#endif
		{ "DisplayName", "User Vote Summary" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item Vote Summary\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 Steam ID of user\n@param       PublishedFileIds                The Published File ID who's vote details are required" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary, nullptr, "UserVoteSummaryAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::OrionSteamWebAPIAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::OrionSteamWebAPIAsyncActionUserVoteSummary_eventUserVoteSummaryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionUserVoteSummary::execUserVoteSummaryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionUserVoteSummary**)Z_Param__Result=UOrionSteamWebAPIAsyncActionUserVoteSummary::UserVoteSummaryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionUserVoteSummary Function UserVoteSummaryAsync **

// ********** Begin Class UOrionSteamWebAPIAsyncActionUserVoteSummary ******************************
void UOrionSteamWebAPIAsyncActionUserVoteSummary::StaticRegisterNativesUOrionSteamWebAPIAsyncActionUserVoteSummary()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionUserVoteSummary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UserVoteSummaryAsync", &UOrionSteamWebAPIAsyncActionUserVoteSummary::execUserVoteSummaryAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary;
UClass* UOrionSteamWebAPIAsyncActionUserVoteSummary::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionUserVoteSummary;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionUserVoteSummary"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionUserVoteSummary,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionUserVoteSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionUserVoteSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVotingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionUserVoteSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUserVoteSummary_UserVoteSummaryAsync, "UserVoteSummaryAsync" }, // 3713385823
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionUserVoteSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionUserVoteSummary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionUserVoteSummary::UOrionSteamWebAPIAsyncActionUserVoteSummary() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionUserVoteSummary);
UOrionSteamWebAPIAsyncActionUserVoteSummary::~UOrionSteamWebAPIAsyncActionUserVoteSummary() {}
// ********** End Class UOrionSteamWebAPIAsyncActionUserVoteSummary ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary, UOrionSteamWebAPIAsyncActionItemVoteSummary::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionItemVoteSummary"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionItemVoteSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionItemVoteSummary), 60145782U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary, UOrionSteamWebAPIAsyncActionUserVoteSummary::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionUserVoteSummary"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUserVoteSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionUserVoteSummary), 2794128809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h__Script_OrionSteamWebAPI_1704021496(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVotingAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
