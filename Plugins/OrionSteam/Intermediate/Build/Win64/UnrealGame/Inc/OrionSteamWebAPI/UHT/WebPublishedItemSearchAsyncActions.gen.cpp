// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebPublishedItemSearchAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionRankedByPublicationOrder Function RankedByPublicationOrderAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 StartId;
		int32 Count;
		bool bHasAppAdminAccess;
		int32 FileType;
		TArray<FString> Tag;
		TArray<FString> UserTag;
		UOrionSteamWebAPIAsyncActionRankedByPublicationOrder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Ranked by Publication Order\n\x09 *\n\x09 * @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09 * @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09 * @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09 * @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09 * @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09 */" },
#endif
		{ "DisplayName", "Ranked by Publication Order" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranked by Publication Order\n\n@param       key                                             Steamworks Web API publisher authentication key.\n@param       steamid                                 SteamID of user\n@param       AppId                                   AppId of product\n@param       StartId                                 Starting index in the result set(0 based)\n@param       Count                                   Number Requested\n@param       bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param       FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param       Tag                                             Tag to filter result set\n@param       UserTag                                 A user specific Tag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, StartId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_StartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Tag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_UserTag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_UserTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder, nullptr, "RankedByPublicationOrderAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::OrionSteamWebAPIAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::execRankedByPublicationOrderAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
	P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
	P_GET_TARRAY(FString,Z_Param_Tag);
	P_GET_TARRAY(FString,Z_Param_UserTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionRankedByPublicationOrder**)Z_Param__Result=UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::RankedByPublicationOrderAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionRankedByPublicationOrder Function RankedByPublicationOrderAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionRankedByPublicationOrder *********************
void UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::StaticRegisterNativesUOrionSteamWebAPIAsyncActionRankedByPublicationOrder()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RankedByPublicationOrderAsync", &UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::execRankedByPublicationOrderAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder;
UClass* UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionRankedByPublicationOrder;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionRankedByPublicationOrder"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionRankedByPublicationOrder,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionRankedByPublicationOrder\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionRankedByPublicationOrder\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync, "RankedByPublicationOrderAsync" }, // 2074987385
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionRankedByPublicationOrder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::UOrionSteamWebAPIAsyncActionRankedByPublicationOrder() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionRankedByPublicationOrder);
UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::~UOrionSteamWebAPIAsyncActionRankedByPublicationOrder() {}
// ********** End Class UOrionSteamWebAPIAsyncActionRankedByPublicationOrder ***********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionRankedByTrend Function RankedByTrendAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 StartId;
		int32 Count;
		bool bHasAppAdminAccess;
		int32 FileType;
		int32 Days;
		TArray<FString> Tag;
		TArray<FString> UserTag;
		UOrionSteamWebAPIAsyncActionRankedByTrend* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Ranked by Trend\n\x09 *\n\x09 * @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09 * @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09 * @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09 * @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09 * @param\x09""Days\x09\x09\x09\x09\x09Number of days for the trend period, including today\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09 * @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09 */" },
#endif
		{ "DisplayName", "Ranked by Trend" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranked by Trend\n\n@param       key                                             Steamworks Web API publisher authentication key.\n@param       steamid                                 SteamID of user\n@param       AppId                                   AppId of product\n@param       StartId                                 Starting index in the result set(0 based)\n@param       Count                                   Number Requested\n@param       bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param       FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param       Days                                    Number of days for the trend period, including today\n@param       Tag                                             Tag to filter result set\n@param       UserTag                                 A user specific Tag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, StartId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Days), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_StartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Days,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Tag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_UserTag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_UserTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend, nullptr, "RankedByTrendAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::OrionSteamWebAPIAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionRankedByTrend::execRankedByTrendAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
	P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
	P_GET_PROPERTY(FIntProperty,Z_Param_Days);
	P_GET_TARRAY(FString,Z_Param_Tag);
	P_GET_TARRAY(FString,Z_Param_UserTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionRankedByTrend**)Z_Param__Result=UOrionSteamWebAPIAsyncActionRankedByTrend::RankedByTrendAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Days,Z_Param_Tag,Z_Param_UserTag);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionRankedByTrend Function RankedByTrendAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionRankedByTrend ********************************
void UOrionSteamWebAPIAsyncActionRankedByTrend::StaticRegisterNativesUOrionSteamWebAPIAsyncActionRankedByTrend()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionRankedByTrend::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RankedByTrendAsync", &UOrionSteamWebAPIAsyncActionRankedByTrend::execRankedByTrendAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend;
UClass* UOrionSteamWebAPIAsyncActionRankedByTrend::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionRankedByTrend;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionRankedByTrend"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionRankedByTrend,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionRankedByTrend::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionRankedByTrend\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionRankedByTrend\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByTrend_RankedByTrendAsync, "RankedByTrendAsync" }, // 3820940140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionRankedByTrend>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionRankedByTrend::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionRankedByTrend::UOrionSteamWebAPIAsyncActionRankedByTrend() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionRankedByTrend);
UOrionSteamWebAPIAsyncActionRankedByTrend::~UOrionSteamWebAPIAsyncActionRankedByTrend() {}
// ********** End Class UOrionSteamWebAPIAsyncActionRankedByTrend **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionRankedByVote Function RankedByVoteAsync ******
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 StartId;
		int32 Count;
		bool bHasAppAdminAccess;
		int32 FileType;
		TArray<FString> Tag;
		TArray<FString> UserTag;
		UOrionSteamWebAPIAsyncActionRankedByVote* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Ranked by Vote\n\x09 *\n\x09 * @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09 * @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09 * @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09 * @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09 * @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09 */" },
#endif
		{ "DisplayName", "Ranked by Vote" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranked by Vote\n\n@param       key                                             Steamworks Web API publisher authentication key.\n@param       steamid                                 SteamID of user\n@param       AppId                                   AppId of product\n@param       StartId                                 Starting index in the result set(0 based)\n@param       Count                                   Number Requested\n@param       bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param       FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param       Tag                                             Tag to filter result set\n@param       UserTag                                 A user specific Tag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, StartId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_StartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote, nullptr, "RankedByVoteAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::OrionSteamWebAPIAsyncActionRankedByVote_eventRankedByVoteAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionRankedByVote::execRankedByVoteAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
	P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
	P_GET_TARRAY(FString,Z_Param_Tag);
	P_GET_TARRAY(FString,Z_Param_UserTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionRankedByVote**)Z_Param__Result=UOrionSteamWebAPIAsyncActionRankedByVote::RankedByVoteAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionRankedByVote Function RankedByVoteAsync ********

// ********** Begin Class UOrionSteamWebAPIAsyncActionRankedByVote *********************************
void UOrionSteamWebAPIAsyncActionRankedByVote::StaticRegisterNativesUOrionSteamWebAPIAsyncActionRankedByVote()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionRankedByVote::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RankedByVoteAsync", &UOrionSteamWebAPIAsyncActionRankedByVote::execRankedByVoteAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByVote;
UClass* UOrionSteamWebAPIAsyncActionRankedByVote::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionRankedByVote;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByVote.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionRankedByVote"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByVote.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionRankedByVote,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByVote.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionRankedByVote::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionRankedByVote\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionRankedByVote\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRankedByVote_RankedByVoteAsync, "RankedByVoteAsync" }, // 4186497018
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionRankedByVote>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionRankedByVote::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByVote.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByVote.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByVote.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionRankedByVote::UOrionSteamWebAPIAsyncActionRankedByVote() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionRankedByVote);
UOrionSteamWebAPIAsyncActionRankedByVote::~UOrionSteamWebAPIAsyncActionRankedByVote() {}
// ********** End Class UOrionSteamWebAPIAsyncActionRankedByVote ***********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionResultSetSummary Function ResultSetSummaryAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 StartId;
		bool bHasAppAdminAccess;
		int32 FileType;
		TArray<FString> Tag;
		TArray<FString> UserTag;
		UOrionSteamWebAPIAsyncActionResultSetSummary* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Result Set Summary\n\x09 *\n\x09 * @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09 * @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09 * @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09 * @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09 */" },
#endif
		{ "DisplayName", "Result Set Summary" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result Set Summary\n\n@param       key                                             Steamworks Web API publisher authentication key.\n@param       steamid                                 SteamID of user\n@param       AppId                                   AppId of product\n@param       StartId                                 Starting index in the result set(0 based)\n@param       bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param       FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param       Tag                                             Tag to filter result set\n@param       UserTag                                 A user specific Tag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartId;
	static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, StartId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_StartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Tag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_UserTag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_UserTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary, nullptr, "ResultSetSummaryAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::OrionSteamWebAPIAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionResultSetSummary::execResultSetSummaryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartId);
	P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
	P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
	P_GET_TARRAY(FString,Z_Param_Tag);
	P_GET_TARRAY(FString,Z_Param_UserTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionResultSetSummary**)Z_Param__Result=UOrionSteamWebAPIAsyncActionResultSetSummary::ResultSetSummaryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionResultSetSummary Function ResultSetSummaryAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionResultSetSummary *****************************
void UOrionSteamWebAPIAsyncActionResultSetSummary::StaticRegisterNativesUOrionSteamWebAPIAsyncActionResultSetSummary()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionResultSetSummary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResultSetSummaryAsync", &UOrionSteamWebAPIAsyncActionResultSetSummary::execResultSetSummaryAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary;
UClass* UOrionSteamWebAPIAsyncActionResultSetSummary::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionResultSetSummary;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionResultSetSummary"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionResultSetSummary,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionResultSetSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionResultSetSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionResultSetSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResultSetSummary_ResultSetSummaryAsync, "ResultSetSummaryAsync" }, // 56913834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionResultSetSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionResultSetSummary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionResultSetSummary::UOrionSteamWebAPIAsyncActionResultSetSummary() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionResultSetSummary);
UOrionSteamWebAPIAsyncActionResultSetSummary::~UOrionSteamWebAPIAsyncActionResultSetSummary() {}
// ********** End Class UOrionSteamWebAPIAsyncActionResultSetSummary *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder, UOrionSteamWebAPIAsyncActionRankedByPublicationOrder::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionRankedByPublicationOrder"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByPublicationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionRankedByPublicationOrder), 1431455696U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend, UOrionSteamWebAPIAsyncActionRankedByTrend::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionRankedByTrend"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByTrend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionRankedByTrend), 4093139859U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRankedByVote, UOrionSteamWebAPIAsyncActionRankedByVote::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionRankedByVote"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRankedByVote, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionRankedByVote), 1448133213U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary, UOrionSteamWebAPIAsyncActionResultSetSummary::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionResultSetSummary"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResultSetSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionResultSetSummary), 2215691323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h__Script_OrionSteamWebAPI_2641787039(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemSearch_WebPublishedItemSearchAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
