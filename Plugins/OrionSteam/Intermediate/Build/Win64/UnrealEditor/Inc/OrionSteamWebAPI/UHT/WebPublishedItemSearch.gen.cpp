// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PublishedItemSearch/WebPublishedItemSearch.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebPublishedItemSearch() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPISubsystem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch_NoRegister();
ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebSteamPublishedItemSearch Function RankedByPublicationOrder ***********
struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics
{
	struct WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 StartId;
		int32 Count;
		bool bHasAppAdminAccess;
		int32 FileType;
		TArray<FString> Tag;
		TArray<FString> UserTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "Category", "OrionSteamWebAPI|SteamPublishedItemSearch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Ranked by Publication Order\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09 * @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09 * @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09 * @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09 * @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranked by Publication Order\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 SteamID of user\n@param       AppId                                   AppId of product\n@param       StartId                                 Starting index in the result set(0 based)\n@param       Count                                   Number Requested\n@param       bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param       FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param       Tag                                             Tag to filter result set\n@param       UserTag                                 A user specific Tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, StartId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_StartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByPublicationOrder", Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByPublicationOrder)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
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
	P_THIS->RankedByPublicationOrder(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
	P_NATIVE_END;
}
// ********** End Class UWebSteamPublishedItemSearch Function RankedByPublicationOrder *************

// ********** Begin Class UWebSteamPublishedItemSearch Function RankedByTrend **********************
struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics
{
	struct WebSteamPublishedItemSearch_eventRankedByTrend_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 StartId;
		int32 Count;
		bool bHasAppAdminAccess;
		int32 FileType;
		int32 days;
		TArray<FString> Tag;
		TArray<FString> UserTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "Category", "OrionSteamWebAPI|SteamPublishedItemSearch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Ranked by Trend\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09 * @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09 * @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09 * @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09 * @param\x09""days\x09\x09\x09\x09\x09Number of days for the trend period, including today\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09 * @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranked by Trend\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 SteamID of user\n@param       AppId                                   AppId of product\n@param       StartId                                 Starting index in the result set(0 based)\n@param       Count                                   Number Requested\n@param       bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param       FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param       days                                    Number of days for the trend period, including today\n@param       Tag                                             Tag to filter result set\n@param       UserTag                                 A user specific Tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_days;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, StartId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((WebSteamPublishedItemSearch_eventRankedByTrend_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByTrend_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_days = { "days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, days), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_StartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_days,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByTrend", Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::WebSteamPublishedItemSearch_eventRankedByTrend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::WebSteamPublishedItemSearch_eventRankedByTrend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByTrend)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
	P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
	P_GET_PROPERTY(FIntProperty,Z_Param_days);
	P_GET_TARRAY(FString,Z_Param_Tag);
	P_GET_TARRAY(FString,Z_Param_UserTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RankedByTrend(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_days,Z_Param_Tag,Z_Param_UserTag);
	P_NATIVE_END;
}
// ********** End Class UWebSteamPublishedItemSearch Function RankedByTrend ************************

// ********** Begin Class UWebSteamPublishedItemSearch Function RankedByVote ***********************
struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics
{
	struct WebSteamPublishedItemSearch_eventRankedByVote_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 StartId;
		int32 Count;
		bool bHasAppAdminAccess;
		int32 FileType;
		TArray<FString> Tag;
		TArray<FString> UserTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "Category", "OrionSteamWebAPI|SteamPublishedItemSearch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Ranked by Publication Order\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09 * @param\x09""Count\x09\x09\x09\x09\x09Number Requested\n\x09 * @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09 * @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09 * @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranked by Publication Order\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 SteamID of user\n@param       AppId                                   AppId of product\n@param       StartId                                 Starting index in the result set(0 based)\n@param       Count                                   Number Requested\n@param       bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param       FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param       Tag                                             Tag to filter result set\n@param       UserTag                                 A user specific Tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, StartId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((WebSteamPublishedItemSearch_eventRankedByVote_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByVote_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_StartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByVote", Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::WebSteamPublishedItemSearch_eventRankedByVote_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::WebSteamPublishedItemSearch_eventRankedByVote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByVote)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
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
	P_THIS->RankedByVote(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
	P_NATIVE_END;
}
// ********** End Class UWebSteamPublishedItemSearch Function RankedByVote *************************

// ********** Begin Class UWebSteamPublishedItemSearch Function ResultSetSummary *******************
struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics
{
	struct WebSteamPublishedItemSearch_eventResultSetSummary_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 StartId;
		bool bHasAppAdminAccess;
		int32 FileType;
		TArray<FString> Tag;
		TArray<FString> UserTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag,UserTag" },
		{ "Category", "OrionSteamWebAPI|SteamPublishedItemSearch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Ranked by Publication Order\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09StartId\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09 * @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09 * @param\x09""FileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09 * @param\x09UserTag\x09\x09\x09\x09\x09""A user specific Tag\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranked by Publication Order\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 SteamID of user\n@param       AppId                                   AppId of product\n@param       StartId                                 Starting index in the result set(0 based)\n@param       bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param       FileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param       Tag                                             Tag to filter result set\n@param       UserTag                                 A user specific Tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_StartId = { "StartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, StartId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
{
	((WebSteamPublishedItemSearch_eventResultSetSummary_Parms*)Obj)->bHasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventResultSetSummary_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_StartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "ResultSetSummary", Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::WebSteamPublishedItemSearch_eventResultSetSummary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::WebSteamPublishedItemSearch_eventResultSetSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execResultSetSummary)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
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
	P_THIS->ResultSetSummary(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_StartId,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
	P_NATIVE_END;
}
// ********** End Class UWebSteamPublishedItemSearch Function ResultSetSummary *********************

// ********** Begin Class UWebSteamPublishedItemSearch *********************************************
void UWebSteamPublishedItemSearch::StaticRegisterNativesUWebSteamPublishedItemSearch()
{
	UClass* Class = UWebSteamPublishedItemSearch::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RankedByPublicationOrder", &UWebSteamPublishedItemSearch::execRankedByPublicationOrder },
		{ "RankedByTrend", &UWebSteamPublishedItemSearch::execRankedByTrend },
		{ "RankedByVote", &UWebSteamPublishedItemSearch::execRankedByVote },
		{ "ResultSetSummary", &UWebSteamPublishedItemSearch::execResultSetSummary },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWebSteamPublishedItemSearch;
UClass* UWebSteamPublishedItemSearch::GetPrivateStaticClass()
{
	using TClass = UWebSteamPublishedItemSearch;
	if (!Z_Registration_Info_UClass_UWebSteamPublishedItemSearch.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WebSteamPublishedItemSearch"),
			Z_Registration_Info_UClass_UWebSteamPublishedItemSearch.InnerSingleton,
			StaticRegisterNativesUWebSteamPublishedItemSearch,
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
	return Z_Registration_Info_UClass_UWebSteamPublishedItemSearch.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch_NoRegister()
{
	return UWebSteamPublishedItemSearch::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder, "RankedByPublicationOrder" }, // 1885489227
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend, "RankedByTrend" }, // 2202479511
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote, "RankedByVote" }, // 1734046568
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary, "ResultSetSummary" }, // 404717417
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamPublishedItemSearch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPISubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::ClassParams = {
	&UWebSteamPublishedItemSearch::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch()
{
	if (!Z_Registration_Info_UClass_UWebSteamPublishedItemSearch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSteamPublishedItemSearch.OuterSingleton, Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSteamPublishedItemSearch.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamPublishedItemSearch);
UWebSteamPublishedItemSearch::~UWebSteamPublishedItemSearch() {}
// ********** End Class UWebSteamPublishedItemSearch ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemSearch_WebPublishedItemSearch_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebSteamPublishedItemSearch, UWebSteamPublishedItemSearch::StaticClass, TEXT("UWebSteamPublishedItemSearch"), &Z_Registration_Info_UClass_UWebSteamPublishedItemSearch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSteamPublishedItemSearch), 2452869473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemSearch_WebPublishedItemSearch_h__Script_OrionSteamWebAPI_582608479(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemSearch_WebPublishedItemSearch_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemSearch_WebPublishedItemSearch_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
