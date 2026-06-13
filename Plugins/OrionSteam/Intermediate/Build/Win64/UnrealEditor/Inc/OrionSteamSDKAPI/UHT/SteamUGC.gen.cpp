// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUGC/SteamUGC.h"
#include "SteamTypes.h"
#include "SteamUGC/SteamUGCTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamUGC() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGC();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGC_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamItemPreviewType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamItemState();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamItemStatistic();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamItemUpdateStatus();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamRemoteStoragePublishedFileVisibility();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUGCContentDescriptorID();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUGCMatchingUGCType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUGCQuery();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUserUGCList();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUserUGCListSortOrder();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamWorkshopFileType();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAddAppDependencyResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAddItemToFavorites__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAddUGCDependencyResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateItem__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDeleteItemResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadItemResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAppDependenciesResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetUserItemVote__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetWorkshopEULAStatus__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnItemInstalled__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRemoveAppDependencyResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRemoveItemFromFavorites__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRemoveUGCDependencyResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSendQueryUGCRequest__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSetUserItemVote__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStartPlaytimeTracking__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStopPlaytimeTracking__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStopPlaytimeTrackingForAllItems__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSubmitItemUpdate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSubscribeItem__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUnsubscribeItem__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserSubscribedItemsListChanged__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnWorkshopEULAStatus__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCDetails();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FUGCQueryHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FUGCUpdateHandle();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamUGC Function AddAppDependency *********************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics
{
	struct OrionSteamUGC_eventAddAppDependency_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a dependency between the given item and the appid.\n\x09 *\n\x09 * This list of dependencies can be retrieved by calling GetAppDependencies.\n\x09 * This is a soft-dependency that is displayed on the web.\n\x09 * It is up to the application to determine whether the item can actually be used or not.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The item.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The required app/dlc.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a dependency between the given item and the appid.\n\nThis list of dependencies can be retrieved by calling GetAppDependencies.\nThis is a soft-dependency that is displayed on the web.\nIt is up to the application to determine whether the item can actually be used or not.\n\n@param       PublishedFileID         The item.\n@param       AppId                           The required app/dlc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddAppDependency_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAddAppDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3180581792
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddAppDependency_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddAppDependency", Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::OrionSteamUGC_eventAddAppDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::OrionSteamUGC_eventAddAppDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddAppDependency)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAppDependency(FOnAddAppDependencyResult(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddAppDependency ***********************************

// ********** Begin Class UOrionSteamUGC Function AddContentDescriptor *****************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics
{
	struct OrionSteamUGC_eventAddContentDescriptor_Parms
	{
		FUGCUpdateHandle Handle;
		ESteamUGCContentDescriptorID DescId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DescId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DescId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddContentDescriptor_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::NewProp_DescId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::NewProp_DescId = { "DescId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddContentDescriptor_Parms, DescId), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUGCContentDescriptorID, METADATA_PARAMS(0, nullptr) }; // 2350273977
void Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventAddContentDescriptor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventAddContentDescriptor_Parms), &Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::NewProp_DescId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::NewProp_DescId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddContentDescriptor", Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::OrionSteamUGC_eventAddContentDescriptor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::OrionSteamUGC_eventAddContentDescriptor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddContentDescriptor)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_ENUM(ESteamUGCContentDescriptorID,Z_Param_DescId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::AddContentDescriptor(Z_Param_Handle,ESteamUGCContentDescriptorID(Z_Param_DescId));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddContentDescriptor *******************************

// ********** Begin Class UOrionSteamUGC Function AddDependency ************************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics
{
	struct OrionSteamUGC_eventAddDependency_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
		FPublishedFileID ChildPublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a workshop item as a dependency to the specified item.\n\x09 *\n\x09 * If the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection.\n\x09 * Otherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC\n\x09 * API using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09\x09The workshop item to add a dependency to.\n\x09 * @param\x09""ChildPublishedFileID\x09The dependency to add to the parent.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a workshop item as a dependency to the specified item.\n\nIf the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection.\nOtherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC\nAPI using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.\n\n@param       PublishedFileID                 The workshop item to add a dependency to.\n@param       ChildPublishedFileID    The dependency to add to the parent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddDependency_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAddUGCDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3770062385
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddDependency_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::NewProp_ChildPublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddDependency", Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::OrionSteamUGC_eventAddDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::OrionSteamUGC_eventAddDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddDependency)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_GET_STRUCT(FPublishedFileID,Z_Param_ChildPublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDependency(FOnAddUGCDependencyResult(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_ChildPublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddDependency **************************************

// ********** Begin Class UOrionSteamUGC Function AddExcludedTag ***********************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics
{
	struct OrionSteamUGC_eventAddExcludedTag_Parms
	{
		FUGCQueryHandle Handle;
		FString TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.\n\x09 *\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09TagName\x09\x09The tag that must NOT be attached to the UGC to receive it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle          The UGC query Handle to customize.\n@param       TagName         The tag that must NOT be attached to the UGC to receive it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddExcludedTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddExcludedTag_Parms, TagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventAddExcludedTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventAddExcludedTag_Parms), &Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddExcludedTag", Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::OrionSteamUGC_eventAddExcludedTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::OrionSteamUGC_eventAddExcludedTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddExcludedTag)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::AddExcludedTag(Z_Param_Handle,Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddExcludedTag *************************************

// ********** Begin Class UOrionSteamUGC Function AddItemKeyValueTag *******************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics
{
	struct OrionSteamUGC_eventAddItemKeyValueTag_Parms
	{
		FUGCUpdateHandle Handle;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a Key-Value tag pair to an item. Keys can map to multiple different Values (1-to-many relationship).\n\x09 *\n\x09 * Key names are restricted to alpha-numeric characters and the '_' character.\n\x09 * Both Keys and Values cannot exceed 255 characters in length.\n\x09 * Key-Value tags are searchable by exact match only.\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09Key\x09\x09\x09\x09The Key to set on the item.\n\x09 * @param\x09Value\x09\x09\x09""A Value to map to the Key.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a Key-Value tag pair to an item. Keys can map to multiple different Values (1-to-many relationship).\n\nKey names are restricted to alpha-numeric characters and the '_' character.\nBoth Keys and Values cannot exceed 255 characters in length.\nKey-Value tags are searchable by exact match only.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                  The workshop item update Handle to customize.\n@param       Key                             The Key to set on the item.\n@param       Value                   A Value to map to the Key." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemKeyValueTag_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemKeyValueTag_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventAddItemKeyValueTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventAddItemKeyValueTag_Parms), &Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddItemKeyValueTag", Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::OrionSteamUGC_eventAddItemKeyValueTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::OrionSteamUGC_eventAddItemKeyValueTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddItemKeyValueTag)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::AddItemKeyValueTag(Z_Param_Handle,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddItemKeyValueTag *********************************

// ********** Begin Class UOrionSteamUGC Function AddItemPreviewFile *******************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics
{
	struct OrionSteamUGC_eventAddItemPreviewFile_Parms
	{
		FUGCUpdateHandle Handle;
		FString PreviewFile;
		ESteamItemPreviewType Type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds an additional preview file for the item.\n\x09 *\n\x09 * Then the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\n\x09 * NOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09PreviewFile\x09\x09""Absolute path to the local image.\n\x09 * @param\x09Type\x09\x09\x09The type of this preview.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an additional preview file for the item.\n\nThen the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\nNOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                  The workshop item update Handle to customize.\n@param       PreviewFile             Absolute path to the local image.\n@param       Type                    The type of this preview." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemPreviewFile_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemPreviewFile_Parms, Type), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamItemPreviewType, METADATA_PARAMS(0, nullptr) }; // 3482307812
void Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventAddItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventAddItemPreviewFile_Parms), &Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddItemPreviewFile", Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::OrionSteamUGC_eventAddItemPreviewFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::OrionSteamUGC_eventAddItemPreviewFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddItemPreviewFile)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
	P_GET_ENUM(ESteamItemPreviewType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::AddItemPreviewFile(Z_Param_Handle,Z_Param_PreviewFile,ESteamItemPreviewType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddItemPreviewFile *********************************

// ********** Begin Class UOrionSteamUGC Function AddItemPreviewVideo ******************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics
{
	struct OrionSteamUGC_eventAddItemPreviewVideo_Parms
	{
		FUGCUpdateHandle Handle;
		FString VideoID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds an additional video preview from YouTube for the item.\n\x09 *\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09VideoID\x09\x09\x09The YouTube video ID to add. (e.g. \"jHgZh4GV9G0\")\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an additional video preview from YouTube for the item.\n\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                  The workshop item update Handle to customize.\n@param       VideoID                 The YouTube video ID to add. (e.g. \"jHgZh4GV9G0\")" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VideoID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemPreviewVideo_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::NewProp_VideoID = { "VideoID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemPreviewVideo_Parms, VideoID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventAddItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventAddItemPreviewVideo_Parms), &Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::NewProp_VideoID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddItemPreviewVideo", Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::OrionSteamUGC_eventAddItemPreviewVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::OrionSteamUGC_eventAddItemPreviewVideo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddItemPreviewVideo)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_VideoID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::AddItemPreviewVideo(Z_Param_Handle,Z_Param_VideoID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddItemPreviewVideo ********************************

// ********** Begin Class UOrionSteamUGC Function AddItemToFavorites *******************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics
{
	struct OrionSteamUGC_eventAddItemToFavorites_Parms
	{
		FScriptDelegate Callback;
		int32 AppId;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a workshop item to the users favorites list.\n\x09 *\n\x09 * @param\x09""AppId\x09\x09\x09\x09The app ID that this item belongs to.\n\x09 * @param\x09PublishedFileID\x09\x09The workshop item to add to the users favorites list.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a workshop item to the users favorites list.\n\n@param       AppId                           The app ID that this item belongs to.\n@param       PublishedFileID         The workshop item to add to the users favorites list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemToFavorites_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAddItemToFavorites__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1020489068
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemToFavorites_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddItemToFavorites_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddItemToFavorites", Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::OrionSteamUGC_eventAddItemToFavorites_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::OrionSteamUGC_eventAddItemToFavorites_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddItemToFavorites)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemToFavorites(FOnAddItemToFavorites(Z_Param_Out_Callback),Z_Param_AppId,Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddItemToFavorites *********************************

// ********** Begin Class UOrionSteamUGC Function AddRequiredKeyValueTag ***************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics
{
	struct OrionSteamUGC_eventAddRequiredKeyValueTag_Parms
	{
		FUGCQueryHandle Handle;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a required Key-Value tag to a pending UGC Query. This will only return workshop items that have a Key = pKey and a Value = pValue.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09Key\x09\x09\x09The Key-Value Key that must be attached to the UGC to receive it.\n\x09 * @param\x09Value\x09\x09The Key-Value Value associated with pKey that must be attached to the UGC to receive it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a required Key-Value tag to a pending UGC Query. This will only return workshop items that have a Key = pKey and a Value = pValue.\n\n@param       Handle          The UGC query Handle to customize.\n@param       Key                     The Key-Value Key that must be attached to the UGC to receive it.\n@param       Value           The Key-Value Value associated with pKey that must be attached to the UGC to receive it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddRequiredKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddRequiredKeyValueTag_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddRequiredKeyValueTag_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventAddRequiredKeyValueTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventAddRequiredKeyValueTag_Parms), &Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddRequiredKeyValueTag", Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::OrionSteamUGC_eventAddRequiredKeyValueTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::OrionSteamUGC_eventAddRequiredKeyValueTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddRequiredKeyValueTag)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::AddRequiredKeyValueTag(Z_Param_Handle,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddRequiredKeyValueTag *****************************

// ********** Begin Class UOrionSteamUGC Function AddRequiredTag ***********************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics
{
	struct OrionSteamUGC_eventAddRequiredTag_Parms
	{
		FUGCQueryHandle Handle;
		FString TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09TagName\x09\x09The tag that must be attached to the UGC to receive it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.\n\n@param       Handle          The UGC query Handle to customize.\n@param       TagName         The tag that must be attached to the UGC to receive it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddRequiredTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddRequiredTag_Parms, TagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventAddRequiredTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventAddRequiredTag_Parms), &Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddRequiredTag", Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::OrionSteamUGC_eventAddRequiredTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::OrionSteamUGC_eventAddRequiredTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddRequiredTag)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::AddRequiredTag(Z_Param_Handle,Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddRequiredTag *************************************

// ********** Begin Class UOrionSteamUGC Function AddRequiredTagGroup ******************************
struct Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics
{
	struct OrionSteamUGC_eventAddRequiredTagGroup_Parms
	{
		FUGCQueryHandle Handle;
		TArray<FString> TagGroups;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Match any of the tags in this group\n\x09 *\n\x09 * Notes: Only available in UE4.27+\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Match any of the tags in this group\n\nNotes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TagGroups;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddRequiredTagGroup_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups_Inner = { "TagGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups = { "TagGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventAddRequiredTagGroup_Parms, TagGroups), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventAddRequiredTagGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventAddRequiredTagGroup_Parms), &Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "AddRequiredTagGroup", Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::OrionSteamUGC_eventAddRequiredTagGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::OrionSteamUGC_eventAddRequiredTagGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execAddRequiredTagGroup)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_TARRAY(FString,Z_Param_TagGroups);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::AddRequiredTagGroup(Z_Param_Handle,Z_Param_TagGroups);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function AddRequiredTagGroup ********************************

// ********** Begin Class UOrionSteamUGC Function BInitWorkshopForGameServer ***********************
struct Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics
{
	struct OrionSteamUGC_eventBInitWorkshopForGameServer_Parms
	{
		int32 WorkshopDepotID;
		FString Folder;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Lets game servers set a specific workshop folder before issuing any UGC commands.\n\x09 *\n\x09 * This is helpful if you want to support multiple game servers running out of the same install folder.\n\x09 *\n\x09 * @param\x09WorkshopDepotID\x09\x09The depot ID of the game server.\n\x09 * @param\x09""Folder\x09\x09\x09\x09The absolute path to store the workshop content.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lets game servers set a specific workshop folder before issuing any UGC commands.\n\nThis is helpful if you want to support multiple game servers running out of the same install folder.\n\n@param       WorkshopDepotID         The depot ID of the game server.\n@param       Folder                          The absolute path to store the workshop content." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkshopDepotID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::NewProp_WorkshopDepotID = { "WorkshopDepotID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventBInitWorkshopForGameServer_Parms, WorkshopDepotID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventBInitWorkshopForGameServer_Parms, Folder), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventBInitWorkshopForGameServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventBInitWorkshopForGameServer_Parms), &Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::NewProp_WorkshopDepotID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "BInitWorkshopForGameServer", Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::OrionSteamUGC_eventBInitWorkshopForGameServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::OrionSteamUGC_eventBInitWorkshopForGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execBInitWorkshopForGameServer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WorkshopDepotID);
	P_GET_PROPERTY(FStrProperty,Z_Param_Folder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::BInitWorkshopForGameServer(Z_Param_WorkshopDepotID,Z_Param_Folder);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function BInitWorkshopForGameServer *************************

// ********** Begin Class UOrionSteamUGC Function CreateItem ***************************************
struct Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics
{
	struct OrionSteamUGC_eventCreateItem_Parms
	{
		FScriptDelegate Callback;
		int32 ConsumerAppID;
		ESteamWorkshopFileType FileType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates a new workshop item with no content attached yet.\n\x09 *\n\x09 * @param\x09""ConsumerAppID\x09\x09The App ID that will be using this item.\n\x09 * @param\x09""FileType\x09\x09\x09The type of UGC to create.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new workshop item with no content attached yet.\n\n@param       ConsumerAppID           The App ID that will be using this item.\n@param       FileType                        The type of UGC to create." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateItem_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3212597880
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateItem_Parms, ConsumerAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateItem_Parms, FileType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamWorkshopFileType, METADATA_PARAMS(0, nullptr) }; // 1073562436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::NewProp_ConsumerAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::NewProp_FileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::NewProp_FileType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "CreateItem", Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::OrionSteamUGC_eventCreateItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::OrionSteamUGC_eventCreateItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_CreateItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_CreateItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execCreateItem)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
	P_GET_ENUM(ESteamWorkshopFileType,Z_Param_FileType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateItem(FOnCreateItem(Z_Param_Out_Callback),Z_Param_ConsumerAppID,ESteamWorkshopFileType(Z_Param_FileType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function CreateItem *****************************************

// ********** Begin Class UOrionSteamUGC Function CreateQueryAllUGCRequest *************************
struct Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics
{
	struct OrionSteamUGC_eventCreateQueryAllUGCRequest_Parms
	{
		ESteamUGCQuery QueryType;
		ESteamUGCMatchingUGCType FileType;
		int32 CreatorAppID;
		int32 ConsumerAppID;
		int32 Page;
		FUGCQueryHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Query for all matching UGC. You can use this to list all of the available UGC for your app.\n\x09 *\n\x09 * This will return up to 50 results as declared by kNumUGCResultsPerPage.\n\x09 * You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\n\x09 * NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09 * NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09 * To query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.\n\x09 *\n\x09 *\n\x09 * @param\x09QueryType\x09\x09\x09Used to specify the sorting and filtering for this call.\n\x09 * @param\x09""FileType\x09\x09\x09Used to specify the type of UGC queried for.\n\x09 * @param\x09""CreatorAppID\x09\x09This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n\x09 * @param\x09""ConsumerAppID\x09\x09This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n\x09 * @param\x09Page\x09\x09\x09\x09The page number of the results to receive. This should start at 1 on the first call.\n\x09 */" },
#endif
		{ "CPP_Default_Page", "1" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query for all matching UGC. You can use this to list all of the available UGC for your app.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage.\nYou can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.\n\n\n@param       QueryType                       Used to specify the sorting and filtering for this call.\n@param       FileType                        Used to specify the type of UGC queried for.\n@param       CreatorAppID            This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n@param       ConsumerAppID           This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n@param       Page                            The page number of the results to receive. This should start at 1 on the first call." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_QueryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QueryType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryAllUGCRequest_Parms, QueryType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUGCQuery, METADATA_PARAMS(0, nullptr) }; // 2084388208
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryAllUGCRequest_Parms, FileType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUGCMatchingUGCType, METADATA_PARAMS(0, nullptr) }; // 624450700
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryAllUGCRequest_Parms, CreatorAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryAllUGCRequest_Parms, ConsumerAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryAllUGCRequest_Parms, Page), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryAllUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_Page,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "CreateQueryAllUGCRequest", Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::OrionSteamUGC_eventCreateQueryAllUGCRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::OrionSteamUGC_eventCreateQueryAllUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execCreateQueryAllUGCRequest)
{
	P_GET_ENUM(ESteamUGCQuery,Z_Param_QueryType);
	P_GET_ENUM(ESteamUGCMatchingUGCType,Z_Param_FileType);
	P_GET_PROPERTY(FIntProperty,Z_Param_CreatorAppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Page);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUGCQueryHandle*)Z_Param__Result=UOrionSteamUGC::CreateQueryAllUGCRequest(ESteamUGCQuery(Z_Param_QueryType),ESteamUGCMatchingUGCType(Z_Param_FileType),Z_Param_CreatorAppID,Z_Param_ConsumerAppID,Z_Param_Page);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function CreateQueryAllUGCRequest ***************************

// ********** Begin Class UOrionSteamUGC Function CreateQueryUGCDetailsRequest *********************
struct Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics
{
	struct OrionSteamUGC_eventCreateQueryUGCDetailsRequest_Parms
	{
		TArray<FPublishedFileID> PublishedFileIDs;
		FUGCQueryHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Query for the details of specific workshop items.\n\x09 *\n\x09 * This will return up to 50 results as declared by kNumUGCResultsPerPage.\n\x09 * NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09 * NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09 * To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\x09 *\n\x09 * @param\x09PublishedFileIDs\x09\x09The list of workshop items to get the details for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query for the details of specific workshop items.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\n@param       PublishedFileIDs                The list of workshop items to get the details for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryUGCDetailsRequest_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryUGCDetailsRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "CreateQueryUGCDetailsRequest", Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::OrionSteamUGC_eventCreateQueryUGCDetailsRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::OrionSteamUGC_eventCreateQueryUGCDetailsRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execCreateQueryUGCDetailsRequest)
{
	P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUGCQueryHandle*)Z_Param__Result=UOrionSteamUGC::CreateQueryUGCDetailsRequest(Z_Param_PublishedFileIDs);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function CreateQueryUGCDetailsRequest ***********************

// ********** Begin Class UOrionSteamUGC Function CreateQueryUserUGCRequest ************************
struct Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics
{
	struct OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms
	{
		FSteamID SteamID;
		ESteamUserUGCList ListType;
		ESteamUGCMatchingUGCType MatchingUGCType;
		ESteamUserUGCListSortOrder SortOrder;
		int32 CreatorAppID;
		int32 ConsumerAppID;
		int32 Page;
		FUGCQueryHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.\n\x09 *\n\x09 * This will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\n\x09 * NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09 * NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09 * To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\x09 *\n\x09 * @param\x09SteamID\x09\x09\x09\x09The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.\n\x09 * @param\x09ListType\x09\x09\x09Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed. (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)\n\x09 * @param\x09MatchingUGCType\x09\x09Used to specify the type of UGC queried for.\n\x09 * @param\x09SortOrder\x09\x09\x09Used to specify the order that the list will be sorted in.\n\x09 * @param\x09""CreatorAppID\x09\x09This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n\x09 * @param\x09""ConsumerAppID\x09\x09This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n\x09 * @param\x09Page\x09\x09\x09\x09The page number of the results to receive. This should start at 1 on the first call.\n\x09 */" },
#endif
		{ "CPP_Default_Page", "1" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\n@param       SteamID                         The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.\n@param       ListType                        Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed. (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)\n@param       MatchingUGCType         Used to specify the type of UGC queried for.\n@param       SortOrder                       Used to specify the order that the list will be sorted in.\n@param       CreatorAppID            This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n@param       ConsumerAppID           This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n@param       Page                            The page number of the results to receive. This should start at 1 on the first call." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ListType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ListType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchingUGCType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchingUGCType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms, ListType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUserUGCList, METADATA_PARAMS(0, nullptr) }; // 2176790260
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType = { "MatchingUGCType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms, MatchingUGCType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUGCMatchingUGCType, METADATA_PARAMS(0, nullptr) }; // 624450700
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms, SortOrder), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUserUGCListSortOrder, METADATA_PARAMS(0, nullptr) }; // 674201063
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms, CreatorAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms, ConsumerAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms, Page), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_Page,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "CreateQueryUserUGCRequest", Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::OrionSteamUGC_eventCreateQueryUserUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execCreateQueryUserUGCRequest)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_ENUM(ESteamUserUGCList,Z_Param_ListType);
	P_GET_ENUM(ESteamUGCMatchingUGCType,Z_Param_MatchingUGCType);
	P_GET_ENUM(ESteamUserUGCListSortOrder,Z_Param_SortOrder);
	P_GET_PROPERTY(FIntProperty,Z_Param_CreatorAppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Page);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUGCQueryHandle*)Z_Param__Result=UOrionSteamUGC::CreateQueryUserUGCRequest(Z_Param_SteamID,ESteamUserUGCList(Z_Param_ListType),ESteamUGCMatchingUGCType(Z_Param_MatchingUGCType),ESteamUserUGCListSortOrder(Z_Param_SortOrder),Z_Param_CreatorAppID,Z_Param_ConsumerAppID,Z_Param_Page);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function CreateQueryUserUGCRequest **************************

// ********** Begin Class UOrionSteamUGC Function DeleteItem ***************************************
struct Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics
{
	struct OrionSteamUGC_eventDeleteItem_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Deletes the item without prompting the user.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The item to delete.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes the item without prompting the user.\n\n@param       PublishedFileID         The item to delete." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventDeleteItem_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDeleteItemResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1164339413
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventDeleteItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "DeleteItem", Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::OrionSteamUGC_eventDeleteItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::OrionSteamUGC_eventDeleteItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_DeleteItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_DeleteItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execDeleteItem)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteItem(FOnDeleteItemResult(Z_Param_Out_Callback),Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function DeleteItem *****************************************

// ********** Begin Class UOrionSteamUGC Function DownloadItem *************************************
struct Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics
{
	struct OrionSteamUGC_eventDownloadItem_Parms
	{
		FPublishedFileID PublishedFileID;
		bool bHighPriority;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Download or update a workshop item.\n\x09 *\n\x09 * If the return Value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.\n\x09 * If the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.\n\x09 * If the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update.\n\x09 * Do not access the workshop item on disk until the Callback DownloadItemResult_t is called.\n\x09 * The DownloadItemResult_t Callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the Handler\n\x09 * will be called for all item downloads regardless of the running application.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The workshop item to download.\n\x09 * @param\x09""bHighPriority\x09\x09Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Download or update a workshop item.\n\nIf the return Value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.\nIf the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.\nIf the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update.\nDo not access the workshop item on disk until the Callback DownloadItemResult_t is called.\nThe DownloadItemResult_t Callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the Handler\nwill be called for all item downloads regardless of the running application.\n\n@param       PublishedFileID         The workshop item to download.\n@param       bHighPriority           Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static void NewProp_bHighPriority_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPriority;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventDownloadItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
void Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit(void* Obj)
{
	((OrionSteamUGC_eventDownloadItem_Parms*)Obj)->bHighPriority = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::NewProp_bHighPriority = { "bHighPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventDownloadItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::NewProp_bHighPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "DownloadItem", Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::OrionSteamUGC_eventDownloadItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::OrionSteamUGC_eventDownloadItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_DownloadItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_DownloadItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execDownloadItem)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_GET_UBOOL(Z_Param_bHighPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::DownloadItem(Z_Param_PublishedFileID,Z_Param_bHighPriority);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function DownloadItem ***************************************

// ********** Begin Class UOrionSteamUGC Function GetAppDependencies *******************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics
{
	struct OrionSteamUGC_eventGetAppDependencies_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the app dependencies associated with the given PublishedFileId_t.\n\x09 *\n\x09 * These are \"soft\" dependencies that are shown on the web.\n\x09 * It is up to the application to determine whether an item can be used or not.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The workshop item to get app dependencies for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the app dependencies associated with the given PublishedFileId_t.\n\nThese are \"soft\" dependencies that are shown on the web.\nIt is up to the application to determine whether an item can be used or not.\n\n@param       PublishedFileID         The workshop item to get app dependencies for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetAppDependencies_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAppDependenciesResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2791803143
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetAppDependencies_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetAppDependencies", Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::OrionSteamUGC_eventGetAppDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::OrionSteamUGC_eventGetAppDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetAppDependencies)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAppDependencies(FOnGetAppDependenciesResult(Z_Param_Out_Callback),Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetAppDependencies *********************************

// ********** Begin Class UOrionSteamUGC Function GetItemDownloadInfo ******************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics
{
	struct OrionSteamUGC_eventGetItemDownloadInfo_Parms
	{
		FPublishedFileID PublishedFileID;
		int32 BytesDownloaded;
		int32 BytesTotal;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The workshop item to get the download info for.\n\x09 * @param\x09""BytesDownloaded\x09\x09Returns the current bytes downloaded.\n\x09 * @param\x09""BytesTotal\x09\x09\x09Returns the total bytes. This is only valid after the download has started.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.\n\n@param       PublishedFileID         The workshop item to get the download info for.\n@param       BytesDownloaded         Returns the current bytes downloaded.\n@param       BytesTotal                      Returns the total bytes. This is only valid after the download has started." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemDownloadInfo_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemDownloadInfo_Parms, BytesDownloaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemDownloadInfo_Parms, BytesTotal), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetItemDownloadInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetItemDownloadInfo_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::NewProp_BytesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetItemDownloadInfo", Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::OrionSteamUGC_eventGetItemDownloadInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::OrionSteamUGC_eventGetItemDownloadInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetItemDownloadInfo)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesTotal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetItemDownloadInfo(Z_Param_PublishedFileID,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetItemDownloadInfo ********************************

// ********** Begin Class UOrionSteamUGC Function GetItemInstallInfo *******************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics
{
	struct OrionSteamUGC_eventGetItemInstallInfo_Parms
	{
		FPublishedFileID PublishedFileID;
		int32 SizeOnDisk;
		FString Folder;
		int32 TimeStamp;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.\n\x09 *\n\x09 * Calling this sets the \"used\" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.\n\x09 * If k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The workshop item to get the install info for.\n\x09 * @param\x09SizeOnDisk\x09\x09\x09Returns the size of the workshop item in bytes.\n\x09 * @param\x09""Folder\x09\x09\x09\x09Returns the absolute path to the folder containing the content by copying it.\n\x09 * @param\x09TimeStamp\x09\x09\x09Returns the time when the workshop item was last updated.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.\n\nCalling this sets the \"used\" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.\nIf k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.\n\n@param       PublishedFileID         The workshop item to get the install info for.\n@param       SizeOnDisk                      Returns the size of the workshop item in bytes.\n@param       Folder                          Returns the absolute path to the folder containing the content by copying it.\n@param       TimeStamp                       Returns the time when the workshop item was last updated." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeOnDisk;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeStamp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemInstallInfo_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_SizeOnDisk = { "SizeOnDisk", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemInstallInfo_Parms, SizeOnDisk), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemInstallInfo_Parms, Folder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemInstallInfo_Parms, TimeStamp), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetItemInstallInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetItemInstallInfo_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_SizeOnDisk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_Folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_TimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetItemInstallInfo", Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::OrionSteamUGC_eventGetItemInstallInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::OrionSteamUGC_eventGetItemInstallInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetItemInstallInfo)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeOnDisk);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Folder);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeStamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetItemInstallInfo(Z_Param_PublishedFileID,Z_Param_Out_SizeOnDisk,Z_Param_Out_Folder,Z_Param_Out_TimeStamp);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetItemInstallInfo *********************************

// ********** Begin Class UOrionSteamUGC Function GetItemState *************************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics
{
	struct OrionSteamUGC_eventGetItemState_Parms
	{
		FPublishedFileID PublishedFileID;
		TArray<ESteamItemState> States;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current state of a workshop item on this client.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The workshop item to get the state for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current state of a workshop item on this client.\n\n@param       PublishedFileID         The workshop item to get the state for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_States_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_States_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemState_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::NewProp_States_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamItemState, METADATA_PARAMS(0, nullptr) }; // 2767900694
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemState_Parms, States), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2767900694
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::NewProp_States_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::NewProp_States_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::NewProp_States,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetItemState", Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::OrionSteamUGC_eventGetItemState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::OrionSteamUGC_eventGetItemState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetItemState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetItemState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetItemState)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_GET_TARRAY_REF(ESteamItemState,Z_Param_Out_States);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUGC::GetItemState(Z_Param_PublishedFileID,Z_Param_Out_States);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetItemState ***************************************

// ********** Begin Class UOrionSteamUGC Function GetItemUpdateProgress ****************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics
{
	struct OrionSteamUGC_eventGetItemUpdateProgress_Parms
	{
		FUGCUpdateHandle Handle;
		int32 BytesProcessed;
		int32 BytesTotal;
		ESteamItemUpdateStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the progress of an item update.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The update Handle to get the progress for.\n\x09 * @param\x09""BytesProcessed\x09\x09Returns the current number of bytes uploaded.\n\x09 * @param\x09""BytesTotal\x09\x09\x09Returns the total number of bytes that will be uploaded.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the progress of an item update.\n\n@param       Handle                          The update Handle to get the progress for.\n@param       BytesProcessed          Returns the current number of bytes uploaded.\n@param       BytesTotal                      Returns the total number of bytes that will be uploaded." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesProcessed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemUpdateProgress_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::NewProp_BytesProcessed = { "BytesProcessed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemUpdateProgress_Parms, BytesProcessed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemUpdateProgress_Parms, BytesTotal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetItemUpdateProgress_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamItemUpdateStatus, METADATA_PARAMS(0, nullptr) }; // 165449299
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::NewProp_BytesProcessed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::NewProp_BytesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetItemUpdateProgress", Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::OrionSteamUGC_eventGetItemUpdateProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::OrionSteamUGC_eventGetItemUpdateProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetItemUpdateProgress)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesProcessed);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesTotal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamItemUpdateStatus*)Z_Param__Result=UOrionSteamUGC::GetItemUpdateProgress(Z_Param_Handle,Z_Param_Out_BytesProcessed,Z_Param_Out_BytesTotal);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetItemUpdateProgress ******************************

// ********** Begin Class UOrionSteamUGC Function GetNumSubscribedItems ****************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics
{
	struct OrionSteamUGC_eventGetNumSubscribedItems_Parms
	{
		bool bIncludeLocallyDisabled;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the total number of items the current user is subscribed to for the game or application.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the total number of items the current user is subscribed to for the game or application." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeLocallyDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeLocallyDisabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::NewProp_bIncludeLocallyDisabled_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetNumSubscribedItems_Parms*)Obj)->bIncludeLocallyDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::NewProp_bIncludeLocallyDisabled = { "bIncludeLocallyDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetNumSubscribedItems_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::NewProp_bIncludeLocallyDisabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetNumSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::NewProp_bIncludeLocallyDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetNumSubscribedItems", Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::OrionSteamUGC_eventGetNumSubscribedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::OrionSteamUGC_eventGetNumSubscribedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetNumSubscribedItems)
{
	P_GET_UBOOL(Z_Param_bIncludeLocallyDisabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUGC::GetNumSubscribedItems(Z_Param_bIncludeLocallyDisabled);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetNumSubscribedItems ******************************

// ********** Begin Class UOrionSteamUGC Function GetNumSupportedGameVersions **********************
struct Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics
{
	struct OrionSteamUGC_eventGetNumSupportedGameVersions_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Some items can specify that they have a version that is valid for a range of game versions (Steam branch)\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Some items can specify that they have a version that is valid for a range of game versions (Steam branch)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetNumSupportedGameVersions_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetNumSupportedGameVersions_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetNumSupportedGameVersions_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetNumSupportedGameVersions", Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::OrionSteamUGC_eventGetNumSupportedGameVersions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::OrionSteamUGC_eventGetNumSupportedGameVersions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetNumSupportedGameVersions)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUGC::GetNumSupportedGameVersions(Z_Param_Handle,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetNumSupportedGameVersions ************************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCAdditionalPreview *********************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 PreviewIndex;
		FString URLOrVideoID;
		FString OriginalFileName;
		ESteamItemPreviewType PreviewType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.\n\x09 *\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * Before calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The UGC query Handle to get the results from.\n\x09 * @param\x09Index\x09\x09\x09\x09The index of the item to get the details of.\n\x09 * @param\x09PreviewIndex\x09\x09The index of the additional preview to get the details of.\n\x09 * @param\x09URLOrVideoID\x09\x09Returns a URL or Video ID by copying it into this string.\n\x09 * @param\x09OriginalFileName\x09Returns the original file name. May be set to NULL to not receive this.\n\x09 * @param\x09PreviewType\x09\x09\x09The type of preview that was returned.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nBefore calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.\n\n@param       Handle                          The UGC query Handle to get the results from.\n@param       Index                           The index of the item to get the details of.\n@param       PreviewIndex            The index of the additional preview to get the details of.\n@param       URLOrVideoID            Returns a URL or Video ID by copying it into this string.\n@param       OriginalFileName        Returns the original file name. May be set to NULL to not receive this.\n@param       PreviewType                     The type of preview that was returned." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URLOrVideoID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalFileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewIndex = { "PreviewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms, PreviewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLOrVideoID = { "URLOrVideoID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms, URLOrVideoID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName = { "OriginalFileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms, OriginalFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType = { "PreviewType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms, PreviewType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamItemPreviewType, METADATA_PARAMS(0, nullptr) }; // 3482307812
void Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLOrVideoID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCAdditionalPreview", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::OrionSteamUGC_eventGetQueryUGCAdditionalPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCAdditionalPreview)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_PreviewIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URLOrVideoID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OriginalFileName);
	P_GET_ENUM_REF(ESteamItemPreviewType,Z_Param_Out_PreviewType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCAdditionalPreview(Z_Param_Handle,Z_Param_Index,Z_Param_PreviewIndex,Z_Param_Out_URLOrVideoID,Z_Param_Out_OriginalFileName,(ESteamItemPreviewType&)(Z_Param_Out_PreviewType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCAdditionalPreview ***********************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCChildren ******************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCChildren_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		TArray<FPublishedFileID> PublishedFileIDs;
		int32 MaxEntries;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result.\n\x09 *\n\x09 * These items can either be a part of a collection or some other dependency (see AddDependency).\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * You should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The UGC query Handle to get the results from.\n\x09 * @param\x09Index\x09\x09\x09\x09The index of the item to get the details of.\n\x09 * @param\x09PublishedFileIDs\x09Returns the UGC children by setting this array.\n\x09 * @param\x09MaxEntries\x09\x09\x09The length of PublishedFileIDs.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result.\n\nThese items can either be a part of a collection or some other dependency (see AddDependency).\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.\n\n@param       Handle                          The UGC query Handle to get the results from.\n@param       Index                           The index of the item to get the details of.\n@param       PublishedFileIDs        Returns the UGC children by setting this array.\n@param       MaxEntries                      The length of PublishedFileIDs." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCChildren_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCChildren_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCChildren_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCChildren_Parms, MaxEntries), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetQueryUGCChildren_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetQueryUGCChildren_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_MaxEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCChildren", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::OrionSteamUGC_eventGetQueryUGCChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::OrionSteamUGC_eventGetQueryUGCChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCChildren)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_TARRAY_REF(FPublishedFileID,Z_Param_Out_PublishedFileIDs);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCChildren(Z_Param_Handle,Z_Param_Index,Z_Param_Out_PublishedFileIDs,Z_Param_MaxEntries);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCChildren ********************************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCKeyValueTag ***************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCKeyValueTag_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 KeyValueTagIndex;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve the details of a Key-Value tag associated with an individual workshop item after receiving a querying UGC call result.\n\x09 *\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * Before calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The UGC query Handle to get the results from.\n\x09 * @param\x09Index\x09\x09\x09\x09The index of the item to get the details of.\n\x09 * @param\x09KeyValueTagIndex\x09The index of the tag to get the details of.\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Returns the Key by copying it into this string.\n\x09 * @param\x09Value\x09\x09\x09\x09Returns the Value by copying it into this string.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the details of a Key-Value tag associated with an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nBefore calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.\n\n@param       Handle                          The UGC query Handle to get the results from.\n@param       Index                           The index of the item to get the details of.\n@param       KeyValueTagIndex        The index of the tag to get the details of.\n@param       Key                                     Returns the Key by copying it into this string.\n@param       Value                           Returns the Value by copying it into this string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyValueTagIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCKeyValueTag_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_KeyValueTagIndex = { "KeyValueTagIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCKeyValueTag_Parms, KeyValueTagIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCKeyValueTag_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCKeyValueTag_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetQueryUGCKeyValueTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetQueryUGCKeyValueTag_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_KeyValueTagIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCKeyValueTag", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::OrionSteamUGC_eventGetQueryUGCKeyValueTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::OrionSteamUGC_eventGetQueryUGCKeyValueTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCKeyValueTag)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_KeyValueTagIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCKeyValueTag(Z_Param_Handle,Z_Param_Index,Z_Param_KeyValueTagIndex,Z_Param_Out_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCKeyValueTag *****************************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCMetadata ******************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCMetadata_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		FString MetaData;
		int32 MetadataSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.\n\x09 *\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The UGC query Handle to get the results from.\n\x09 * @param\x09Index\x09\x09\x09The index of the item to get the details of.\n\x09 * @param\x09MetaData\x09\x09Returns the url by copying it into this string.\n\x09 * @param\x09MetadataSize\x09The size of pchMetadata in bytes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param       Handle                  The UGC query Handle to get the results from.\n@param       Index                   The index of the item to get the details of.\n@param       MetaData                Returns the url by copying it into this string.\n@param       MetadataSize    The size of pchMetadata in bytes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MetadataSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCMetadata_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCMetadata_Parms, MetaData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_MetadataSize = { "MetadataSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCMetadata_Parms, MetadataSize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetQueryUGCMetadata_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetQueryUGCMetadata_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_MetadataSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCMetadata", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::OrionSteamUGC_eventGetQueryUGCMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::OrionSteamUGC_eventGetQueryUGCMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCMetadata)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MetaData);
	P_GET_PROPERTY(FIntProperty,Z_Param_MetadataSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCMetadata(Z_Param_Handle,Z_Param_Index,Z_Param_Out_MetaData,Z_Param_MetadataSize);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCMetadata ********************************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCNumAdditionalPreviews *****************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.\n\x09 *\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * You can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09 * @param\x09Index\x09\x09The index of the item to get the details of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.\n\n@param       Handle          The UGC query Handle to get the results from.\n@param       Index           The index of the item to get the details of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCNumAdditionalPreviews", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::OrionSteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::OrionSteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCNumAdditionalPreviews)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCNumAdditionalPreviews(Z_Param_Handle,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCNumAdditionalPreviews *******************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCNumKeyValueTags ***********************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCNumKeyValueTags_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve the number of Key-Value tags of an individual workshop item after receiving a querying UGC call result.\n\x09 *\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * You can then call GetQueryUGCKeyValueTag to get the details of each tag.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09 * @param\x09Index\x09\x09The index of the item to get the details of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the number of Key-Value tags of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can then call GetQueryUGCKeyValueTag to get the details of each tag.\n\n@param       Handle          The UGC query Handle to get the results from.\n@param       Index           The index of the item to get the details of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCNumKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCNumKeyValueTags_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCNumKeyValueTags_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCNumKeyValueTags", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::OrionSteamUGC_eventGetQueryUGCNumKeyValueTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::OrionSteamUGC_eventGetQueryUGCNumKeyValueTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCNumKeyValueTags)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCNumKeyValueTags(Z_Param_Handle,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCNumKeyValueTags *************************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCNumTags *******************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCNumTags_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Notes: Only available in UE4.27+\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCNumTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCNumTags_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCNumTags_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCNumTags", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::OrionSteamUGC_eventGetQueryUGCNumTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::OrionSteamUGC_eventGetQueryUGCNumTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCNumTags)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCNumTags(Z_Param_Handle,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCNumTags *********************************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCPreviewURL ****************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCPreviewURL_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		FString URL;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.\n\x09 *\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * You can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09 * @param\x09Index\x09\x09The index of the item to get the details of.\n\x09 * @param\x09URL\x09\x09\x09Returns the url by copying it into this string.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.\n\n@param       Handle          The UGC query Handle to get the results from.\n@param       Index           The index of the item to get the details of.\n@param       URL                     Returns the url by copying it into this string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCPreviewURL_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCPreviewURL_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCPreviewURL_Parms, URL), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetQueryUGCPreviewURL_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetQueryUGCPreviewURL_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCPreviewURL", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::OrionSteamUGC_eventGetQueryUGCPreviewURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::OrionSteamUGC_eventGetQueryUGCPreviewURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCPreviewURL)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCPreviewURL(Z_Param_Handle,Z_Param_Index,Z_Param_Out_URL);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCPreviewURL ******************************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCResult ********************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCResult_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		FSteamUGCDetails Details;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve the details of an individual workshop item after receiving a querying UGC call result.\n\x09 *\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09 * @param\x09Index\x09\x09The index of the item to get the details of.\n\x09 * @param\x09""Details\x09\x09Returns the the UGC details.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the details of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param       Handle          The UGC query Handle to get the results from.\n@param       Index           The index of the item to get the details of.\n@param       Details         Returns the the UGC details." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Details;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCResult_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCResult_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCResult_Parms, Details), Z_Construct_UScriptStruct_FSteamUGCDetails, METADATA_PARAMS(0, nullptr) }; // 602228530
void Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetQueryUGCResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetQueryUGCResult_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCResult", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::OrionSteamUGC_eventGetQueryUGCResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::OrionSteamUGC_eventGetQueryUGCResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCResult)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FSteamUGCDetails,Z_Param_Out_Details);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCResult(Z_Param_Handle,Z_Param_Index,Z_Param_Out_Details);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCResult **********************************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCStatistic *****************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCStatistic_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		ESteamItemStatistic StatType;
		FString StatValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.\n\x09 *\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09 * @param\x09Index\x09\x09The index of the item to get the details of.\n\x09 * @param\x09StatType\x09The statistic to retrieve.\n\x09 * @param\x09StatValue\x09Returns the Value associated with the specified statistic.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param       Handle          The UGC query Handle to get the results from.\n@param       Index           The index of the item to get the details of.\n@param       StatType        The statistic to retrieve.\n@param       StatValue       Returns the Value associated with the specified statistic." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StatType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCStatistic_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCStatistic_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCStatistic_Parms, StatType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamItemStatistic, METADATA_PARAMS(0, nullptr) }; // 1840737785
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCStatistic_Parms, StatValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetQueryUGCStatistic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetQueryUGCStatistic_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCStatistic", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::OrionSteamUGC_eventGetQueryUGCStatistic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::OrionSteamUGC_eventGetQueryUGCStatistic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCStatistic)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_ENUM(ESteamItemStatistic,Z_Param_StatType);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StatValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCStatistic(Z_Param_Handle,Z_Param_Index,ESteamItemStatistic(Z_Param_StatType),Z_Param_Out_StatValue);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCStatistic *******************************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCTag ***********************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCTag_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 IndexTag;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Notes: Only available in UE4.27+\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCTag_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_IndexTag = { "IndexTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCTag_Parms, IndexTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCTag_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetQueryUGCTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetQueryUGCTag_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_IndexTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCTag", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::OrionSteamUGC_eventGetQueryUGCTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::OrionSteamUGC_eventGetQueryUGCTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCTag)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexTag);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCTag(Z_Param_Handle,Z_Param_Index,Z_Param_IndexTag,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCTag *************************************

// ********** Begin Class UOrionSteamUGC Function GetQueryUGCTagDisplayName ************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics
{
	struct OrionSteamUGC_eventGetQueryUGCTagDisplayName_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 IndexTag;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Notes: Only available in UE4.27+\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCTagDisplayName_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCTagDisplayName_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_IndexTag = { "IndexTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCTagDisplayName_Parms, IndexTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetQueryUGCTagDisplayName_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetQueryUGCTagDisplayName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetQueryUGCTagDisplayName_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_IndexTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetQueryUGCTagDisplayName", Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::OrionSteamUGC_eventGetQueryUGCTagDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::OrionSteamUGC_eventGetQueryUGCTagDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetQueryUGCTagDisplayName)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexTag);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetQueryUGCTagDisplayName(Z_Param_Handle,Z_Param_Index,Z_Param_IndexTag,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetQueryUGCTagDisplayName **************************

// ********** Begin Class UOrionSteamUGC Function GetSteamUGC **************************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics
{
	struct OrionSteamUGC_eventGetSteamUGC_Parms
	{
		UOrionSteamUGC* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetSteamUGC_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUGC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetSteamUGC", Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::OrionSteamUGC_eventGetSteamUGC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::OrionSteamUGC_eventGetSteamUGC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetSteamUGC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUGC**)Z_Param__Result=UOrionSteamUGC::GetSteamUGC();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetSteamUGC ****************************************

// ********** Begin Class UOrionSteamUGC Function GetSubscribedItems *******************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics
{
	struct OrionSteamUGC_eventGetSubscribedItems_Parms
	{
		TArray<FPublishedFileID> PublishedFileIDs;
		int32 MaxEntries;
		bool bIncludeLocallyDisabled;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a list of all of the items the current user is subscribed to for the current game.\n\x09 *\n\x09 * You create an array with the size provided by GetNumSubscribedItems before calling this.\n\x09 *\n\x09 * @param\x09PublishedFileIDs\x09The array where the item ids will be copied into.\n\x09 * @param\x09MaxEntries\x09\x09\x09\x09The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a list of all of the items the current user is subscribed to for the current game.\n\nYou create an array with the size provided by GetNumSubscribedItems before calling this.\n\n@param       PublishedFileIDs        The array where the item ids will be copied into.\n@param       MaxEntries                              The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
	static void NewProp_bIncludeLocallyDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeLocallyDisabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetSubscribedItems_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetSubscribedItems_Parms, MaxEntries), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_bIncludeLocallyDisabled_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetSubscribedItems_Parms*)Obj)->bIncludeLocallyDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_bIncludeLocallyDisabled = { "bIncludeLocallyDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetSubscribedItems_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_bIncludeLocallyDisabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_MaxEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_bIncludeLocallyDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetSubscribedItems", Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::OrionSteamUGC_eventGetSubscribedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::OrionSteamUGC_eventGetSubscribedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetSubscribedItems)
{
	P_GET_TARRAY_REF(FPublishedFileID,Z_Param_Out_PublishedFileIDs);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
	P_GET_UBOOL(Z_Param_bIncludeLocallyDisabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUGC::GetSubscribedItems(Z_Param_Out_PublishedFileIDs,Z_Param_MaxEntries,Z_Param_bIncludeLocallyDisabled);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetSubscribedItems *********************************

// ********** Begin Class UOrionSteamUGC Function GetSupportedGameVersionData **********************
struct Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics
{
	struct OrionSteamUGC_eventGetSupportedGameVersionData_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 VersionIndex;
		FString GameBranchMin;
		FString GameBranchMax;
		int32 GameBranchSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VersionIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameBranchMin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameBranchMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameBranchSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetSupportedGameVersionData_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetSupportedGameVersionData_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_VersionIndex = { "VersionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetSupportedGameVersionData_Parms, VersionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_GameBranchMin = { "GameBranchMin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetSupportedGameVersionData_Parms, GameBranchMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_GameBranchMax = { "GameBranchMax", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetSupportedGameVersionData_Parms, GameBranchMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_GameBranchSize = { "GameBranchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetSupportedGameVersionData_Parms, GameBranchSize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventGetSupportedGameVersionData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventGetSupportedGameVersionData_Parms), &Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_VersionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_GameBranchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_GameBranchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_GameBranchSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetSupportedGameVersionData", Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::OrionSteamUGC_eventGetSupportedGameVersionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::OrionSteamUGC_eventGetSupportedGameVersionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetSupportedGameVersionData)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_VersionIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameBranchMin);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameBranchMax);
	P_GET_PROPERTY(FIntProperty,Z_Param_GameBranchSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::GetSupportedGameVersionData(Z_Param_Handle,Z_Param_Index,Z_Param_VersionIndex,Z_Param_Out_GameBranchMin,Z_Param_Out_GameBranchMax,Z_Param_GameBranchSize);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetSupportedGameVersionData ************************

// ********** Begin Class UOrionSteamUGC Function GetUserContentDescriptorPreferences **************
struct Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics
{
	struct OrionSteamUGC_eventGetUserContentDescriptorPreferences_Parms
	{
		TArray<ESteamUGCContentDescriptorID> Descriptors;
		int32 MaxEntries;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return the user's community content descriptor preferences\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the user's community content descriptor preferences" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Descriptors_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Descriptors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Descriptors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::NewProp_Descriptors_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::NewProp_Descriptors_Inner = { "Descriptors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUGCContentDescriptorID, METADATA_PARAMS(0, nullptr) }; // 2350273977
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::NewProp_Descriptors = { "Descriptors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetUserContentDescriptorPreferences_Parms, Descriptors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2350273977
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetUserContentDescriptorPreferences_Parms, MaxEntries), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetUserContentDescriptorPreferences_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::NewProp_Descriptors_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::NewProp_Descriptors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::NewProp_Descriptors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::NewProp_MaxEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetUserContentDescriptorPreferences", Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::OrionSteamUGC_eventGetUserContentDescriptorPreferences_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::OrionSteamUGC_eventGetUserContentDescriptorPreferences_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetUserContentDescriptorPreferences)
{
	P_GET_TARRAY(ESteamUGCContentDescriptorID,Z_Param_Descriptors);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUGC::GetUserContentDescriptorPreferences(Z_Param_Descriptors,Z_Param_MaxEntries);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetUserContentDescriptorPreferences ****************

// ********** Begin Class UOrionSteamUGC Function GetUserItemVote **********************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics
{
	struct OrionSteamUGC_eventGetUserItemVote_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the users vote status on a workshop item.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The workshop item ID to get the users vote.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the users vote status on a workshop item.\n\n@param       PublishedFileID         The workshop item ID to get the users vote." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetUserItemVote_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetUserItemVote__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 425771275
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetUserItemVote", Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::OrionSteamUGC_eventGetUserItemVote_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::OrionSteamUGC_eventGetUserItemVote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetUserItemVote)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserItemVote(FOnGetUserItemVote(Z_Param_Out_Callback),Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetUserItemVote ************************************

// ********** Begin Class UOrionSteamUGC Function GetWorkshopEULAStatus ****************************
struct Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics
{
	struct OrionSteamUGC_eventGetWorkshopEULAStatus_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 *  Retrieve information related to the user's acceptance or not of the app's specific Workshop EULA\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*  Retrieve information related to the user's acceptance or not of the app's specific Workshop EULA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventGetWorkshopEULAStatus_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetWorkshopEULAStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 189144958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "GetWorkshopEULAStatus", Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::OrionSteamUGC_eventGetWorkshopEULAStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::OrionSteamUGC_eventGetWorkshopEULAStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execGetWorkshopEULAStatus)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetWorkshopEULAStatus(FOnGetWorkshopEULAStatus(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function GetWorkshopEULAStatus ******************************

// ********** Begin Class UOrionSteamUGC Function ReleaseQueryUGCRequest ***************************
struct Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics
{
	struct OrionSteamUGC_eventReleaseQueryUGCRequest_Parms
	{
		FUGCQueryHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Releases a UGC query Handle when you are done with it to free up memory.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The UGC query Handle to release.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Releases a UGC query Handle when you are done with it to free up memory.\n\n@param       Handle                  The UGC query Handle to release." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventReleaseQueryUGCRequest_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
void Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventReleaseQueryUGCRequest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventReleaseQueryUGCRequest_Parms), &Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "ReleaseQueryUGCRequest", Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::OrionSteamUGC_eventReleaseQueryUGCRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::OrionSteamUGC_eventReleaseQueryUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execReleaseQueryUGCRequest)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::ReleaseQueryUGCRequest(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function ReleaseQueryUGCRequest *****************************

// ********** Begin Class UOrionSteamUGC Function RemoveAppDependency ******************************
struct Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics
{
	struct OrionSteamUGC_eventRemoveAppDependency_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The item.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The app/dlc.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.\n\n@param       PublishedFileID         The item.\n@param       AppId                           The app/dlc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveAppDependency_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRemoveAppDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4095434047
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveAppDependency_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "RemoveAppDependency", Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::OrionSteamUGC_eventRemoveAppDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::OrionSteamUGC_eventRemoveAppDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execRemoveAppDependency)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAppDependency(FOnRemoveAppDependencyResult(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function RemoveAppDependency ********************************

// ********** Begin Class UOrionSteamUGC Function RemoveContentDescriptor **************************
struct Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics
{
	struct OrionSteamUGC_eventRemoveContentDescriptor_Parms
	{
		FUGCUpdateHandle Handle;
		ESteamUGCContentDescriptorID DescId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DescId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DescId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveContentDescriptor_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::NewProp_DescId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::NewProp_DescId = { "DescId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveContentDescriptor_Parms, DescId), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUGCContentDescriptorID, METADATA_PARAMS(0, nullptr) }; // 2350273977
void Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventRemoveContentDescriptor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventRemoveContentDescriptor_Parms), &Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::NewProp_DescId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::NewProp_DescId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "RemoveContentDescriptor", Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::OrionSteamUGC_eventRemoveContentDescriptor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::OrionSteamUGC_eventRemoveContentDescriptor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execRemoveContentDescriptor)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_ENUM(ESteamUGCContentDescriptorID,Z_Param_DescId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::RemoveContentDescriptor(Z_Param_Handle,ESteamUGCContentDescriptorID(Z_Param_DescId));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function RemoveContentDescriptor ****************************

// ********** Begin Class UOrionSteamUGC Function RemoveDependency *********************************
struct Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics
{
	struct OrionSteamUGC_eventRemoveDependency_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID ParentPublishedFileID;
		FPublishedFileID ChildPublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a workshop item as a dependency from the specified item.\n\x09 *\n\x09 * @param\x09ParentPublishedFileID\x09\x09The workshop item to remove a dependency from.\n\x09 * @param\x09""ChildPublishedFileID\x09\x09The dependency to remove from the parent.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a workshop item as a dependency from the specified item.\n\n@param       ParentPublishedFileID           The workshop item to remove a dependency from.\n@param       ChildPublishedFileID            The dependency to remove from the parent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveDependency_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRemoveUGCDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3098438185
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::NewProp_ParentPublishedFileID = { "ParentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveDependency_Parms, ParentPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveDependency_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::NewProp_ParentPublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::NewProp_ChildPublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "RemoveDependency", Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::OrionSteamUGC_eventRemoveDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::OrionSteamUGC_eventRemoveDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execRemoveDependency)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPublishedFileID,Z_Param_ParentPublishedFileID);
	P_GET_STRUCT(FPublishedFileID,Z_Param_ChildPublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDependency(FOnRemoveUGCDependencyResult(Z_Param_Out_Callback),Z_Param_ParentPublishedFileID,Z_Param_ChildPublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function RemoveDependency ***********************************

// ********** Begin Class UOrionSteamUGC Function RemoveItemFromFavorites **************************
struct Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics
{
	struct OrionSteamUGC_eventRemoveItemFromFavorites_Parms
	{
		FScriptDelegate Callback;
		int32 AppId;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a workshop item from the users favorites list.\n\x09 *\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09The app ID that this item belongs to.\n\x09 * @param\x09PublishedFileID\x09\x09\x09The workshop item to remove from the users favorites list.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a workshop item from the users favorites list.\n\n@param       AppId                                   The app ID that this item belongs to.\n@param       PublishedFileID                 The workshop item to remove from the users favorites list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveItemFromFavorites_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRemoveItemFromFavorites__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2284212399
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveItemFromFavorites_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveItemFromFavorites_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "RemoveItemFromFavorites", Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::OrionSteamUGC_eventRemoveItemFromFavorites_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::OrionSteamUGC_eventRemoveItemFromFavorites_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execRemoveItemFromFavorites)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItemFromFavorites(FOnRemoveItemFromFavorites(Z_Param_Out_Callback),Z_Param_AppId,Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function RemoveItemFromFavorites ****************************

// ********** Begin Class UOrionSteamUGC Function RemoveItemKeyValueTags ***************************
struct Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics
{
	struct OrionSteamUGC_eventRemoveItemKeyValueTags_Parms
	{
		FUGCUpdateHandle Handle;
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes an existing Key Value tag from an item.\n\x09 *\n\x09 * You can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09Key\x09\x09\x09The Key to remove from the item.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes an existing Key Value tag from an item.\n\nYou can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle          The workshop item update Handle to customize.\n@param       Key                     The Key to remove from the item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveItemKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveItemKeyValueTags_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventRemoveItemKeyValueTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventRemoveItemKeyValueTags_Parms), &Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "RemoveItemKeyValueTags", Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::OrionSteamUGC_eventRemoveItemKeyValueTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::OrionSteamUGC_eventRemoveItemKeyValueTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execRemoveItemKeyValueTags)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::RemoveItemKeyValueTags(Z_Param_Handle,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function RemoveItemKeyValueTags *****************************

// ********** Begin Class UOrionSteamUGC Function RemoveItemPreview ********************************
struct Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics
{
	struct OrionSteamUGC_eventRemoveItemPreview_Parms
	{
		FUGCUpdateHandle Handle;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * RemoveItemPreview\n\x09 *\n\x09 * @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09Index\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RemoveItemPreview\n\n@param       Handle          The workshop item update Handle to customize.\n@param       Index" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveItemPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventRemoveItemPreview_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventRemoveItemPreview_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventRemoveItemPreview_Parms), &Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "RemoveItemPreview", Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::OrionSteamUGC_eventRemoveItemPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::OrionSteamUGC_eventRemoveItemPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execRemoveItemPreview)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::RemoveItemPreview(Z_Param_Handle,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function RemoveItemPreview **********************************

// ********** Begin Class UOrionSteamUGC Function SendQueryUGCRequest ******************************
struct Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics
{
	struct OrionSteamUGC_eventSendQueryUGCRequest_Parms
	{
		FScriptDelegate Callback;
		FUGCQueryHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Send a UGC query to Steam.\n\x09 *\n\x09 * This must be called with a Handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:\n\x09 * AddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag\n\x09 *\n\x09 * @param\x09Handle\x09\x09The UGC query request Handle to send.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a UGC query to Steam.\n\nThis must be called with a Handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:\nAddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag\n\n@param       Handle          The UGC query request Handle to send." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSendQueryUGCRequest_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSendQueryUGCRequest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3768458104
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSendQueryUGCRequest_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SendQueryUGCRequest", Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::OrionSteamUGC_eventSendQueryUGCRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::OrionSteamUGC_eventSendQueryUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSendQueryUGCRequest)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendQueryUGCRequest(FOnSendQueryUGCRequest(Z_Param_Out_Callback),Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SendQueryUGCRequest ********************************

// ********** Begin Class UOrionSteamUGC Function SetAdminQuery ************************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics
{
	struct OrionSteamUGC_eventSetAdminQuery_Parms
	{
		FUGCUpdateHandle Handle;
		bool bAdminQuery;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Admin queries return hidden items\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Admin queries return hidden items" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bAdminQuery_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdminQuery;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetAdminQuery_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
void Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::NewProp_bAdminQuery_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetAdminQuery_Parms*)Obj)->bAdminQuery = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::NewProp_bAdminQuery = { "bAdminQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetAdminQuery_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::NewProp_bAdminQuery_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetAdminQuery_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetAdminQuery_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::NewProp_bAdminQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetAdminQuery", Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::OrionSteamUGC_eventSetAdminQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::OrionSteamUGC_eventSetAdminQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetAdminQuery)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bAdminQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetAdminQuery(Z_Param_Handle,Z_Param_bAdminQuery);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetAdminQuery **************************************

// ********** Begin Class UOrionSteamUGC Function SetAllowCachedResponse ***************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics
{
	struct OrionSteamUGC_eventSetAllowCachedResponse_Parms
	{
		FUGCQueryHandle Handle;
		int32 MaxAgeSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.\n\x09 *\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09MaxAgeSeconds\x09\x09The maximum amount of time that an item can be returned without a cache invalidation.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                          The UGC query Handle to customize.\n@param       MaxAgeSeconds           The maximum amount of time that an item can be returned without a cache invalidation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAgeSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetAllowCachedResponse_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds = { "MaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetAllowCachedResponse_Parms, MaxAgeSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetAllowCachedResponse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetAllowCachedResponse_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetAllowCachedResponse", Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::OrionSteamUGC_eventSetAllowCachedResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::OrionSteamUGC_eventSetAllowCachedResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetAllowCachedResponse)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxAgeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetAllowCachedResponse(Z_Param_Handle,Z_Param_MaxAgeSeconds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetAllowCachedResponse *****************************

// ********** Begin Class UOrionSteamUGC Function SetAllowLegacyUpload *****************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics
{
	struct OrionSteamUGC_eventSetAllowLegacyUpload_Parms
	{
		FUGCUpdateHandle Handle;
		bool bAllowLegacyUpload;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Use legacy upload for a single small file (SDK 1.43+ Only)\n\x09 *\n\x09 * The parameter to SetItemContent() should either be a directory with one file or the full path to the file.  The file must also be less than 10MB in size.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""bAllowLegacyUpload\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use legacy upload for a single small file (SDK 1.43+ Only)\n\nThe parameter to SetItemContent() should either be a directory with one file or the full path to the file.  The file must also be less than 10MB in size.\n\n@param       Handle                          The UGC query Handle to customize.\n@param       bAllowLegacyUpload" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bAllowLegacyUpload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLegacyUpload;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetAllowLegacyUpload_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
void Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetAllowLegacyUpload_Parms*)Obj)->bAllowLegacyUpload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload = { "bAllowLegacyUpload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetAllowLegacyUpload_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetAllowLegacyUpload_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetAllowLegacyUpload_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetAllowLegacyUpload", Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::OrionSteamUGC_eventSetAllowLegacyUpload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::OrionSteamUGC_eventSetAllowLegacyUpload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetAllowLegacyUpload)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bAllowLegacyUpload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAllowLegacyUpload(Z_Param_Handle,Z_Param_bAllowLegacyUpload);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetAllowLegacyUpload *******************************

// ********** Begin Class UOrionSteamUGC Function SetCloudFileNameFilter ***************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics
{
	struct OrionSteamUGC_eventSetCloudFileNameFilter_Parms
	{
		FUGCQueryHandle Handle;
		FString MatchCloudFileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets to only return items that have a specific filename on a pending UGC Query.\n\x09 *\n\x09 * NOTE: This can only be used with CreateQueryUserUGCRequest!\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09MatchCloudFileName\x09\x09The filename to match.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets to only return items that have a specific filename on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryUserUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                                  The UGC query Handle to customize.\n@param       MatchCloudFileName              The filename to match." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchCloudFileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetCloudFileNameFilter_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName = { "MatchCloudFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetCloudFileNameFilter_Parms, MatchCloudFileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetCloudFileNameFilter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetCloudFileNameFilter_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetCloudFileNameFilter", Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::OrionSteamUGC_eventSetCloudFileNameFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::OrionSteamUGC_eventSetCloudFileNameFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetCloudFileNameFilter)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchCloudFileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetCloudFileNameFilter(Z_Param_Handle,Z_Param_MatchCloudFileName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetCloudFileNameFilter *****************************

// ********** Begin Class UOrionSteamUGC Function SetItemContent ***********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics
{
	struct OrionSteamUGC_eventSetItemContent_Parms
	{
		FUGCUpdateHandle Handle;
		FString ContentFolder;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the folder that will be stored as the content for an item.\n\x09 *\n\x09 * For efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09""ContentFolder\x09The absolute path to a local folder containing the content for the item.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the folder that will be stored as the content for an item.\n\nFor efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                  The workshop item update Handle to customize.\n@param       ContentFolder   The absolute path to a local folder containing the content for the item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentFolder;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemContent_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::NewProp_ContentFolder = { "ContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemContent_Parms, ContentFolder), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetItemContent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetItemContent_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::NewProp_ContentFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetItemContent", Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::OrionSteamUGC_eventSetItemContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::OrionSteamUGC_eventSetItemContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetItemContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetItemContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetItemContent)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentFolder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetItemContent(Z_Param_Handle,Z_Param_ContentFolder);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetItemContent *************************************

// ********** Begin Class UOrionSteamUGC Function SetItemDescription *******************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics
{
	struct OrionSteamUGC_eventSetItemDescription_Parms
	{
		FUGCUpdateHandle Handle;
		FString Description;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a new description for an item.\n\x09 *\n\x09 * The description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.\n\x09 * You can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09""Description\x09\x09The new description of the item.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a new description for an item.\n\nThe description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.\nYou can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                  The workshop item update Handle to customize.\n@param       Description             The new description of the item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemDescription_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemDescription_Parms, Description), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetItemDescription_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetItemDescription_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetItemDescription", Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::OrionSteamUGC_eventSetItemDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::OrionSteamUGC_eventSetItemDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetItemDescription)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetItemDescription(Z_Param_Handle,Z_Param_Description);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetItemDescription *********************************

// ********** Begin Class UOrionSteamUGC Function SetItemMetadata **********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics
{
	struct OrionSteamUGC_eventSetItemMetadata_Parms
	{
		FUGCUpdateHandle Handle;
		FString MetaData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.\n\x09 *\n\x09 * The metadata must be limited to the size defined by k_cchDeveloperMetadataMax.\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09MetaData\x09\x09The new metadata for this item.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.\n\nThe metadata must be limited to the size defined by k_cchDeveloperMetadataMax.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                  The workshop item update Handle to customize.\n@param       MetaData                The new metadata for this item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemMetadata_Parms, MetaData), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetItemMetadata_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetItemMetadata_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetItemMetadata", Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::OrionSteamUGC_eventSetItemMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::OrionSteamUGC_eventSetItemMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetItemMetadata)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetItemMetadata(Z_Param_Handle,Z_Param_MetaData);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetItemMetadata ************************************

// ********** Begin Class UOrionSteamUGC Function SetItemPreview ***********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics
{
	struct OrionSteamUGC_eventSetItemPreview_Parms
	{
		FUGCUpdateHandle Handle;
		FString PreviewFile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the primary preview image for the item.\n\x09 *\n\x09 * The format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09PreviewFile\x09\x09The absolute path to a local preview image file for the item.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the primary preview image for the item.\n\nThe format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                  The workshop item update Handle to customize.\n@param       PreviewFile             The absolute path to a local preview image file for the item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemPreview_Parms, PreviewFile), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetItemPreview_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetItemPreview_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::NewProp_PreviewFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetItemPreview", Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::OrionSteamUGC_eventSetItemPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::OrionSteamUGC_eventSetItemPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetItemPreview)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetItemPreview(Z_Param_Handle,Z_Param_PreviewFile);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetItemPreview *************************************

// ********** Begin Class UOrionSteamUGC Function SetItemsDisabledLocally **************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics
{
	struct OrionSteamUGC_eventSetItemsDisabledLocally_Parms
	{
		TArray<FPublishedFileID> PublishedFileIDs;
		bool bDisabledLocally;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether the item should be disabled locally or not. This means that it will not be returned in GetSubscribedItems() by default.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the item should be disabled locally or not. This means that it will not be returned in GetSubscribedItems() by default." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static void NewProp_bDisabledLocally_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabledLocally;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemsDisabledLocally_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2295931229
void Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_bDisabledLocally_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetItemsDisabledLocally_Parms*)Obj)->bDisabledLocally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_bDisabledLocally = { "bDisabledLocally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetItemsDisabledLocally_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_bDisabledLocally_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetItemsDisabledLocally_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetItemsDisabledLocally_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_bDisabledLocally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetItemsDisabledLocally", Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::OrionSteamUGC_eventSetItemsDisabledLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::OrionSteamUGC_eventSetItemsDisabledLocally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetItemsDisabledLocally)
{
	P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileIDs);
	P_GET_UBOOL(Z_Param_bDisabledLocally);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetItemsDisabledLocally(Z_Param_PublishedFileIDs,Z_Param_bDisabledLocally);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetItemsDisabledLocally ****************************

// ********** Begin Class UOrionSteamUGC Function SetItemTags **************************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics
{
	struct OrionSteamUGC_eventSetItemTags_Parms
	{
		FUGCUpdateHandle Handle;
		TArray<FString> Tags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets arbitrary developer specified tags on an item.\n\x09 *\n\x09 * Each tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09Tags\x09\x09The list of tags to set on this item.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets arbitrary developer specified tags on an item.\n\nEach tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle          The workshop item update Handle to customize.\n@param       Tags            The list of tags to set on this item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetItemTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetItemTags_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetItemTags", Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::OrionSteamUGC_eventSetItemTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::OrionSteamUGC_eventSetItemTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetItemTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetItemTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetItemTags)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_TARRAY(FString,Z_Param_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetItemTags(Z_Param_Handle,Z_Param_Tags);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetItemTags ****************************************

// ********** Begin Class UOrionSteamUGC Function SetItemTitle *************************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics
{
	struct OrionSteamUGC_eventSetItemTitle_Parms
	{
		FUGCUpdateHandle Handle;
		FString Title;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a new title for an item.\n\x09 *\n\x09 * The title must be limited to the size defined by k_cchPublishedDocumentTitleMax.\n\x09 * You can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09Title\x09\x09The new title of the item.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a new title for an item.\n\nThe title must be limited to the size defined by k_cchPublishedDocumentTitleMax.\nYou can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle          The workshop item update Handle to customize.\n@param       Title           The new title of the item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemTitle_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemTitle_Parms, Title), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetItemTitle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetItemTitle_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetItemTitle", Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::OrionSteamUGC_eventSetItemTitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::OrionSteamUGC_eventSetItemTitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetItemTitle)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetItemTitle(Z_Param_Handle,Z_Param_Title);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetItemTitle ***************************************

// ********** Begin Class UOrionSteamUGC Function SetItemUpdateLanguage ****************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics
{
	struct OrionSteamUGC_eventSetItemUpdateLanguage_Parms
	{
		FUGCUpdateHandle Handle;
		FString Language;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the language of the title and description that will be set in this item update.\n\x09 *\n\x09 * This must be in the format of the API language code.\n\x09 * If this is not set then \"english\" is assumed.\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09Language\x09\x09The language of the title and description that will be set in this update.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the language of the title and description that will be set in this item update.\n\nThis must be in the format of the API language code.\nIf this is not set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                  The workshop item update Handle to customize.\n@param       Language                The language of the title and description that will be set in this update." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemUpdateLanguage_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemUpdateLanguage_Parms, Language), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetItemUpdateLanguage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetItemUpdateLanguage_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetItemUpdateLanguage", Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::OrionSteamUGC_eventSetItemUpdateLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::OrionSteamUGC_eventSetItemUpdateLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetItemUpdateLanguage)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetItemUpdateLanguage(Z_Param_Handle,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetItemUpdateLanguage ******************************

// ********** Begin Class UOrionSteamUGC Function SetItemVisibility ********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics
{
	struct OrionSteamUGC_eventSetItemVisibility_Parms
	{
		FUGCUpdateHandle Handle;
		ESteamRemoteStoragePublishedFileVisibility Visibility;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the visibility of an item.\n\x09 *\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09Visibility\x09\x09The visibility to set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the visibility of an item.\n\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                  The workshop item update Handle to customize.\n@param       Visibility              The visibility to set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemVisibility_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetItemVisibility_Parms, Visibility), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamRemoteStoragePublishedFileVisibility, METADATA_PARAMS(0, nullptr) }; // 1413410824
void Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetItemVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetItemVisibility_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::NewProp_Visibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetItemVisibility", Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::OrionSteamUGC_eventSetItemVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::OrionSteamUGC_eventSetItemVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetItemVisibility)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_ENUM(ESteamRemoteStoragePublishedFileVisibility,Z_Param_Visibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetItemVisibility(Z_Param_Handle,ESteamRemoteStoragePublishedFileVisibility(Z_Param_Visibility));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetItemVisibility **********************************

// ********** Begin Class UOrionSteamUGC Function SetLanguage **************************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics
{
	struct OrionSteamUGC_eventSetLanguage_Parms
	{
		FUGCQueryHandle Handle;
		FString Language;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the language to return the title and description in for the items on a pending UGC Query.\n\x09 *\n\x09 * This must be in the format of the API Language code.\n\x09 * If this is not set then \"english\" is assumed.\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09Language\x09\x09The language to return.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the language to return the title and description in for the items on a pending UGC Query.\n\nThis must be in the format of the API Language code.\nIf this is not set then \"english\" is assumed.\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                  The UGC query Handle to customize.\n@param       Language                The language to return." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetLanguage_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetLanguage_Parms, Language), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetLanguage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetLanguage_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetLanguage", Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::OrionSteamUGC_eventSetLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::OrionSteamUGC_eventSetLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetLanguage)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetLanguage(Z_Param_Handle,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetLanguage ****************************************

// ********** Begin Class UOrionSteamUGC Function SetMatchAnyTag ***********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics
{
	struct OrionSteamUGC_eventSetMatchAnyTag_Parms
	{
		FUGCQueryHandle Handle;
		bool bMatchAnyTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.\n\x09 *\n\x09 * NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""bMatchAnyTag\x09Should the item just need to have one required tag (true), or all of them? (false)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                  The UGC query Handle to customize.\n@param       bMatchAnyTag    Should the item just need to have one required tag (true), or all of them? (false)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bMatchAnyTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchAnyTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetMatchAnyTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
void Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetMatchAnyTag_Parms*)Obj)->bMatchAnyTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag = { "bMatchAnyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetMatchAnyTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetMatchAnyTag", Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::OrionSteamUGC_eventSetMatchAnyTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::OrionSteamUGC_eventSetMatchAnyTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetMatchAnyTag)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bMatchAnyTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetMatchAnyTag(Z_Param_Handle,Z_Param_bMatchAnyTag);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetMatchAnyTag *************************************

// ********** Begin Class UOrionSteamUGC Function SetRankedByTrendDays *****************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics
{
	struct OrionSteamUGC_eventSetRankedByTrendDays_Parms
	{
		FUGCQueryHandle Handle;
		int32 Days;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.\n\x09 *\n\x09 * NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""Days\x09\x09Sets the number of days to rank items over. Valid Values are 1-365 inclusive.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle          The UGC query Handle to customize.\n@param       Days            Sets the number of days to rank items over. Valid Values are 1-365 inclusive." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetRankedByTrendDays_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetRankedByTrendDays_Parms, Days), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetRankedByTrendDays_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetRankedByTrendDays_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::NewProp_Days,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetRankedByTrendDays", Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::OrionSteamUGC_eventSetRankedByTrendDays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::OrionSteamUGC_eventSetRankedByTrendDays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetRankedByTrendDays)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Days);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetRankedByTrendDays(Z_Param_Handle,Z_Param_Days);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetRankedByTrendDays *******************************

// ********** Begin Class UOrionSteamUGC Function SetRequiredGameVersions **************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics
{
	struct OrionSteamUGC_eventSetRequiredGameVersions_Parms
	{
		FUGCUpdateHandle Handle;
		FString GameBranchMin;
		FString GameBranchMax;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * An empty string for either parameter means that it will match any version on that end of the range.\n\x09 * This will only be applied if the actual content has been changed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* An empty string for either parameter means that it will match any version on that end of the range.\n* This will only be applied if the actual content has been changed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameBranchMin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameBranchMax;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetRequiredGameVersions_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::NewProp_GameBranchMin = { "GameBranchMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetRequiredGameVersions_Parms, GameBranchMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::NewProp_GameBranchMax = { "GameBranchMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetRequiredGameVersions_Parms, GameBranchMax), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetRequiredGameVersions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetRequiredGameVersions_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::NewProp_GameBranchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::NewProp_GameBranchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetRequiredGameVersions", Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::OrionSteamUGC_eventSetRequiredGameVersions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::OrionSteamUGC_eventSetRequiredGameVersions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetRequiredGameVersions)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameBranchMin);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameBranchMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetRequiredGameVersions(Z_Param_Handle,Z_Param_GameBranchMin,Z_Param_GameBranchMax);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetRequiredGameVersions ****************************

// ********** Begin Class UOrionSteamUGC Function SetReturnAdditionalPreviews **********************
struct Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics
{
	struct OrionSteamUGC_eventSetReturnAdditionalPreviews_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnAdditionalPreviews;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to return any additional images/videos attached to the items on a pending UGC Query.\n\x09 *\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""bReturnAdditionalPreviews\x09\x09Return the additional previews for the items?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return any additional images/videos attached to the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                                                  The UGC query Handle to customize.\n@param       bReturnAdditionalPreviews               Return the additional previews for the items?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnAdditionalPreviews_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnAdditionalPreviews;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetReturnAdditionalPreviews_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->bReturnAdditionalPreviews = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews = { "bReturnAdditionalPreviews", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetReturnAdditionalPreviews", Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::OrionSteamUGC_eventSetReturnAdditionalPreviews_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::OrionSteamUGC_eventSetReturnAdditionalPreviews_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetReturnAdditionalPreviews)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bReturnAdditionalPreviews);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetReturnAdditionalPreviews(Z_Param_Handle,Z_Param_bReturnAdditionalPreviews);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetReturnAdditionalPreviews ************************

// ********** Begin Class UOrionSteamUGC Function SetReturnChildren ********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics
{
	struct OrionSteamUGC_eventSetReturnChildren_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnChildren;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to return the IDs of the child items of the items on a pending UGC Query.\n\x09 *\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""bReturnChildren\x09\x09Return the IDs of children of the items?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return the IDs of the child items of the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                          The UGC query Handle to customize.\n@param       bReturnChildren         Return the IDs of children of the items?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnChildren;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetReturnChildren_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnChildren_Parms*)Obj)->bReturnChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::NewProp_bReturnChildren = { "bReturnChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnChildren_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::NewProp_bReturnChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetReturnChildren", Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::OrionSteamUGC_eventSetReturnChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::OrionSteamUGC_eventSetReturnChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetReturnChildren)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bReturnChildren);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetReturnChildren(Z_Param_Handle,Z_Param_bReturnChildren);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetReturnChildren **********************************

// ********** Begin Class UOrionSteamUGC Function SetReturnKeyValueTags ****************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics
{
	struct OrionSteamUGC_eventSetReturnKeyValueTags_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnKeyValueTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to return any Key-Value tags for the items on a pending UGC Query.\n\x09 *\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""bReturnKeyValueTags\x09\x09Return any Key-Value tags for the items?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return any Key-Value tags for the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                                  The UGC query Handle to customize.\n@param       bReturnKeyValueTags             Return any Key-Value tags for the items?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnKeyValueTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnKeyValueTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetReturnKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnKeyValueTags_Parms*)Obj)->bReturnKeyValueTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags = { "bReturnKeyValueTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnKeyValueTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetReturnKeyValueTags", Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::OrionSteamUGC_eventSetReturnKeyValueTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::OrionSteamUGC_eventSetReturnKeyValueTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetReturnKeyValueTags)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bReturnKeyValueTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetReturnKeyValueTags(Z_Param_Handle,Z_Param_bReturnKeyValueTags);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetReturnKeyValueTags ******************************

// ********** Begin Class UOrionSteamUGC Function SetReturnLongDescription *************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics
{
	struct OrionSteamUGC_eventSetReturnLongDescription_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnLongDescription;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to return the full description for the items on a pending UGC Query.\n\x09 *\n\x09 * If you don't set this then you only receive the summary which is the description truncated at 255 bytes.\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""bReturnLongDescription\x09\x09Return the long description for the items?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return the full description for the items on a pending UGC Query.\n\nIf you don't set this then you only receive the summary which is the description truncated at 255 bytes.\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                                          The UGC query Handle to customize.\n@param       bReturnLongDescription          Return the long description for the items?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnLongDescription_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnLongDescription;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetReturnLongDescription_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnLongDescription_Parms*)Obj)->bReturnLongDescription = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription = { "bReturnLongDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnLongDescription_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetReturnLongDescription", Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::OrionSteamUGC_eventSetReturnLongDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::OrionSteamUGC_eventSetReturnLongDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetReturnLongDescription)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bReturnLongDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetReturnLongDescription(Z_Param_Handle,Z_Param_bReturnLongDescription);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetReturnLongDescription ***************************

// ********** Begin Class UOrionSteamUGC Function SetReturnMetadata ********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics
{
	struct OrionSteamUGC_eventSetReturnMetadata_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnMetadata;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to return the developer specified metadata for the items on a pending UGC Query.\n\x09 *\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""bReturnMetadata\x09\x09Return the metadata for the items?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return the developer specified metadata for the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                          The UGC query Handle to customize.\n@param       bReturnMetadata         Return the metadata for the items?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnMetadata_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnMetadata;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetReturnMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnMetadata_Parms*)Obj)->bReturnMetadata = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata = { "bReturnMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnMetadata_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetReturnMetadata", Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::OrionSteamUGC_eventSetReturnMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::OrionSteamUGC_eventSetReturnMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetReturnMetadata)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bReturnMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetReturnMetadata(Z_Param_Handle,Z_Param_bReturnMetadata);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetReturnMetadata **********************************

// ********** Begin Class UOrionSteamUGC Function SetReturnOnlyIDs *********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics
{
	struct OrionSteamUGC_eventSetReturnOnlyIDs_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnOnlyIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to only return IDs instead of all the details on a pending UGC Query.\n\x09 *\n\x09 * This is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""bReturnOnlyIDs\x09\x09Return only the IDs of items?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to only return IDs instead of all the details on a pending UGC Query.\n\nThis is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                          The UGC query Handle to customize.\n@param       bReturnOnlyIDs          Return only the IDs of items?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnOnlyIDs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnOnlyIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetReturnOnlyIDs_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnOnlyIDs_Parms*)Obj)->bReturnOnlyIDs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs = { "bReturnOnlyIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnOnlyIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetReturnOnlyIDs", Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::OrionSteamUGC_eventSetReturnOnlyIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::OrionSteamUGC_eventSetReturnOnlyIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetReturnOnlyIDs)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bReturnOnlyIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetReturnOnlyIDs(Z_Param_Handle,Z_Param_bReturnOnlyIDs);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetReturnOnlyIDs ***********************************

// ********** Begin Class UOrionSteamUGC Function SetReturnPlaytimeStats ***************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics
{
	struct OrionSteamUGC_eventSetReturnPlaytimeStats_Parms
	{
		FUGCQueryHandle Handle;
		int32 Days;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to return the the playtime stats on a pending UGC Query.\n\x09 *\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""Days\x09\x09\x09The number of days worth of playtime stats to return.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return the the playtime stats on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                  The UGC query Handle to customize.\n@param       Days                    The number of days worth of playtime stats to return." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetReturnPlaytimeStats_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetReturnPlaytimeStats_Parms, Days), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnPlaytimeStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnPlaytimeStats_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::NewProp_Days,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetReturnPlaytimeStats", Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::OrionSteamUGC_eventSetReturnPlaytimeStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::OrionSteamUGC_eventSetReturnPlaytimeStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetReturnPlaytimeStats)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Days);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetReturnPlaytimeStats(Z_Param_Handle,Z_Param_Days);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetReturnPlaytimeStats *****************************

// ********** Begin Class UOrionSteamUGC Function SetReturnTotalOnly *******************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics
{
	struct OrionSteamUGC_eventSetReturnTotalOnly_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnTotalOnly;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to only return the the total number of matching items on a pending UGC Query.\n\x09 *\n\x09 * The actual items will not be returned when SteamUGCQueryCompleted_t is called.\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09""bReturnTotalOnly\x09Only return the total number of items?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to only return the the total number of matching items on a pending UGC Query.\n\nThe actual items will not be returned when SteamUGCQueryCompleted_t is called.\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                          The UGC query Handle to customize.\n@param       bReturnTotalOnly        Only return the total number of items?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnTotalOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnTotalOnly;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetReturnTotalOnly_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnTotalOnly_Parms*)Obj)->bReturnTotalOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly = { "bReturnTotalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetReturnTotalOnly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetReturnTotalOnly", Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::OrionSteamUGC_eventSetReturnTotalOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::OrionSteamUGC_eventSetReturnTotalOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetReturnTotalOnly)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_UBOOL(Z_Param_bReturnTotalOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetReturnTotalOnly(Z_Param_Handle,Z_Param_bReturnTotalOnly);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetReturnTotalOnly *********************************

// ********** Begin Class UOrionSteamUGC Function SetSearchText ************************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics
{
	struct OrionSteamUGC_eventSetSearchText_Parms
	{
		FUGCQueryHandle Handle;
		FString SearchText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a string to that items need to match in either the title or the description on a pending UGC Query.\n\x09 *\n\x09 * NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09 * NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09 * @param\x09SearchText\x09\x09The text to be searched for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a string to that items need to match in either the title or the description on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param       Handle                  The UGC query Handle to customize.\n@param       SearchText              The text to be searched for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetSearchText_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 3573413241
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetSearchText_Parms, SearchText), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetSearchText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetSearchText_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::NewProp_SearchText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetSearchText", Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::OrionSteamUGC_eventSetSearchText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::OrionSteamUGC_eventSetSearchText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetSearchText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetSearchText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetSearchText)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_SearchText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetSearchText(Z_Param_Handle,Z_Param_SearchText);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetSearchText **************************************

// ********** Begin Class UOrionSteamUGC Function SetSubscriptionsLoadOrder ************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics
{
	struct OrionSteamUGC_eventSetSubscriptionsLoadOrder_Parms
	{
		TArray<FPublishedFileID> PublishedFileIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the local load order for these items. If there are any items not in the given list, they will sort by the time subscribed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the local load order for these items. If there are any items not in the given list, they will sort by the time subscribed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetSubscriptionsLoadOrder_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2295931229
void Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetSubscriptionsLoadOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetSubscriptionsLoadOrder_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetSubscriptionsLoadOrder", Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::OrionSteamUGC_eventSetSubscriptionsLoadOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::OrionSteamUGC_eventSetSubscriptionsLoadOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetSubscriptionsLoadOrder)
{
	P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::SetSubscriptionsLoadOrder(Z_Param_PublishedFileIDs);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetSubscriptionsLoadOrder **************************

// ********** Begin Class UOrionSteamUGC Function SetUserItemVote **********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics
{
	struct OrionSteamUGC_eventSetUserItemVote_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
		bool bVoteUp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Allows the user to rate a workshop item up or down.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The workshop item ID to vote on.\n\x09 * @param\x09""bVoteUp\x09\x09\x09\x09Vote up (true) or down (false)?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows the user to rate a workshop item up or down.\n\n@param       PublishedFileID         The workshop item ID to vote on.\n@param       bVoteUp                         Vote up (true) or down (false)?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static void NewProp_bVoteUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoteUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetUserItemVote_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSetUserItemVote__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1772514777
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
void Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSetUserItemVote_Parms*)Obj)->bVoteUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::NewProp_bVoteUp = { "bVoteUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSetUserItemVote_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::NewProp_bVoteUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SetUserItemVote", Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::OrionSteamUGC_eventSetUserItemVote_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::OrionSteamUGC_eventSetUserItemVote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSetUserItemVote)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_GET_UBOOL(Z_Param_bVoteUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserItemVote(FOnSetUserItemVote(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_bVoteUp);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SetUserItemVote ************************************

// ********** Begin Class UOrionSteamUGC Function ShowWorkshopEULA *********************************
struct Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics
{
	struct OrionSteamUGC_eventShowWorkshopEULA_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Show the app's latest Workshop EULA to the user in an overlay window, where they can accept it or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show the app's latest Workshop EULA to the user in an overlay window, where they can accept it or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventShowWorkshopEULA_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventShowWorkshopEULA_Parms), &Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "ShowWorkshopEULA", Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::OrionSteamUGC_eventShowWorkshopEULA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::OrionSteamUGC_eventShowWorkshopEULA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execShowWorkshopEULA)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::ShowWorkshopEULA();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function ShowWorkshopEULA ***********************************

// ********** Begin Class UOrionSteamUGC Function StartItemUpdate **********************************
struct Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics
{
	struct OrionSteamUGC_eventStartItemUpdate_Parms
	{
		int32 ConsumerAppID;
		FPublishedFileID PublishedFileID;
		FUGCUpdateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts the item update process.\n\x09 *\n\x09 * This gets you a Handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09""ConsumerAppID\x09\x09The App ID that will be using this item.\n\x09 * @param\x09PublishedFileID\x09\x09The item to update.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the item update process.\n\nThis gets you a Handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.\n\n@param       ConsumerAppID           The App ID that will be using this item.\n@param       PublishedFileID         The item to update." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventStartItemUpdate_Parms, ConsumerAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventStartItemUpdate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventStartItemUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::NewProp_ConsumerAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "StartItemUpdate", Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::OrionSteamUGC_eventStartItemUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::OrionSteamUGC_eventStartItemUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execStartItemUpdate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUGCUpdateHandle*)Z_Param__Result=UOrionSteamUGC::StartItemUpdate(Z_Param_ConsumerAppID,Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function StartItemUpdate ************************************

// ********** Begin Class UOrionSteamUGC Function StartPlaytimeTracking ****************************
struct Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics
{
	struct OrionSteamUGC_eventStartPlaytimeTracking_Parms
	{
		FScriptDelegate Callback;
		TArray<FPublishedFileID> PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start tracking playtime on a set of workshop items.\n\x09 *\n\x09 * When your app shuts down, playtime tracking will automatically stop.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The array of workshop items you want to start tracking. (Maximum of 100 items.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start tracking playtime on a set of workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop.\n\n@param       PublishedFileID         The array of workshop items you want to start tracking. (Maximum of 100 items.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventStartPlaytimeTracking_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStartPlaytimeTracking__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2051145728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner = { "PublishedFileID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventStartPlaytimeTracking_Parms, PublishedFileID), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "StartPlaytimeTracking", Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::OrionSteamUGC_eventStartPlaytimeTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::OrionSteamUGC_eventStartPlaytimeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execStartPlaytimeTracking)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPlaytimeTracking(FOnStartPlaytimeTracking(Z_Param_Out_Callback),Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function StartPlaytimeTracking ******************************

// ********** Begin Class UOrionSteamUGC Function StopPlaytimeTracking *****************************
struct Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics
{
	struct OrionSteamUGC_eventStopPlaytimeTracking_Parms
	{
		FScriptDelegate Callback;
		TArray<FPublishedFileID> PublishedFileIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop tracking playtime on a set of workshop items.\n\x09 *\n\x09 * When your app shuts down, playtime tracking will automatically stop.\n\x09 *\n\x09 * @param\x09PublishedFileIDs\x09The array of workshop items you want to stop tracking. (Maximum of 100 items.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop tracking playtime on a set of workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop.\n\n@param       PublishedFileIDs        The array of workshop items you want to stop tracking. (Maximum of 100 items.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventStopPlaytimeTracking_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStopPlaytimeTracking__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 670389047
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventStopPlaytimeTracking_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "StopPlaytimeTracking", Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::OrionSteamUGC_eventStopPlaytimeTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::OrionSteamUGC_eventStopPlaytimeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execStopPlaytimeTracking)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPlaytimeTracking(FOnStopPlaytimeTracking(Z_Param_Out_Callback),Z_Param_PublishedFileIDs);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function StopPlaytimeTracking *******************************

// ********** Begin Class UOrionSteamUGC Function StopPlaytimeTrackingForAllItems ******************
struct Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics
{
	struct OrionSteamUGC_eventStopPlaytimeTrackingForAllItems_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop tracking playtime of all workshop items.\n\x09 *\n\x09 * When your app shuts down, playtime tracking will automatically stop.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop tracking playtime of all workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventStopPlaytimeTrackingForAllItems_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStopPlaytimeTrackingForAllItems__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 604438225
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "StopPlaytimeTrackingForAllItems", Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::OrionSteamUGC_eventStopPlaytimeTrackingForAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::OrionSteamUGC_eventStopPlaytimeTrackingForAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execStopPlaytimeTrackingForAllItems)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPlaytimeTrackingForAllItems(FOnStopPlaytimeTrackingForAllItems(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function StopPlaytimeTrackingForAllItems ********************

// ********** Begin Class UOrionSteamUGC Function SubmitItemUpdate *********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics
{
	struct OrionSteamUGC_eventSubmitItemUpdate_Parms
	{
		FScriptDelegate Callback;
		FUGCUpdateHandle Handle;
		FString ChangeNote;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Uploads the changes made to an item to the Steam Workshop.\n\x09 *\n\x09 * You can track the progress of an item update with GetItemUpdateProgress.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The update Handle to submit.\n\x09 * @param\x09""ChangeNote\x09\x09""A brief description of the changes made. (Optional, set to NULL for no change note)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uploads the changes made to an item to the Steam Workshop.\n\nYou can track the progress of an item update with GetItemUpdateProgress.\n\n@param       Handle                  The update Handle to submit.\n@param       ChangeNote              A brief description of the changes made. (Optional, set to NULL for no change note)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChangeNote;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSubmitItemUpdate_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSubmitItemUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 823385893
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSubmitItemUpdate_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote = { "ChangeNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSubmitItemUpdate_Parms, ChangeNote), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SubmitItemUpdate", Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::OrionSteamUGC_eventSubmitItemUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::OrionSteamUGC_eventSubmitItemUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSubmitItemUpdate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChangeNote);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubmitItemUpdate(FOnSubmitItemUpdate(Z_Param_Out_Callback),Z_Param_Handle,Z_Param_ChangeNote);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SubmitItemUpdate ***********************************

// ********** Begin Class UOrionSteamUGC Function SubscribeItem ************************************
struct Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics
{
	struct OrionSteamUGC_eventSubscribeItem_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Subscribe to a workshop item. It will be downloaded and installed as soon as possible.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The workshop item to subscribe to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribe to a workshop item. It will be downloaded and installed as soon as possible.\n\n@param       PublishedFileID         The workshop item to subscribe to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSubscribeItem_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSubscribeItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3914032328
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventSubscribeItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SubscribeItem", Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::OrionSteamUGC_eventSubscribeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::OrionSteamUGC_eventSubscribeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSubscribeItem)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubscribeItem(FOnSubscribeItem(Z_Param_Out_Callback),Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SubscribeItem **************************************

// ********** Begin Class UOrionSteamUGC Function SuspendDownloads *********************************
struct Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics
{
	struct OrionSteamUGC_eventSuspendDownloads_Parms
	{
		bool bSuspend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Suspends and resumes all workshop downloads.\n\x09 *\n\x09 * If you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.\n\x09 *\n\x09 * @param\x09""bSuspend\x09Suspend (true) or Resume (false) workshop downloads?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suspends and resumes all workshop downloads.\n\nIf you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.\n\n@param       bSuspend        Suspend (true) or Resume (false) workshop downloads?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuspend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit(void* Obj)
{
	((OrionSteamUGC_eventSuspendDownloads_Parms*)Obj)->bSuspend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::NewProp_bSuspend = { "bSuspend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventSuspendDownloads_Parms), &Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::NewProp_bSuspend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "SuspendDownloads", Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::OrionSteamUGC_eventSuspendDownloads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::OrionSteamUGC_eventSuspendDownloads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execSuspendDownloads)
{
	P_GET_UBOOL(Z_Param_bSuspend);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUGC::SuspendDownloads(Z_Param_bSuspend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function SuspendDownloads ***********************************

// ********** Begin Class UOrionSteamUGC Function UnsubscribeItem **********************************
struct Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics
{
	struct OrionSteamUGC_eventUnsubscribeItem_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unsubscribe from a workshop item. This will result in the item being removed after the game quits.\n\x09 *\n\x09 * @param\x09PublishedFileID\x09\x09The workshop item to unsubscribe from.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unsubscribe from a workshop item. This will result in the item being removed after the game quits.\n\n@param       PublishedFileID         The workshop item to unsubscribe from." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventUnsubscribeItem_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUnsubscribeItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2195035507
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventUnsubscribeItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "UnsubscribeItem", Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::OrionSteamUGC_eventUnsubscribeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::OrionSteamUGC_eventUnsubscribeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execUnsubscribeItem)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnsubscribeItem(FOnUnsubscribeItem(Z_Param_Out_Callback),Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function UnsubscribeItem ************************************

// ********** Begin Class UOrionSteamUGC Function UpdateItemPreviewFile ****************************
struct Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics
{
	struct OrionSteamUGC_eventUpdateItemPreviewFile_Parms
	{
		FUGCUpdateHandle Handle;
		int32 index;
		FString PreviewFile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates an existing additional preview file for the item.\n\x09 *\n\x09 * If the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09index\x09\x09\x09The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n\x09 * @param\x09PreviewFile\x09\x09""Absolute path to the local image.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates an existing additional preview file for the item.\n\nIf the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                  The workshop item update Handle to customize.\n@param       index                   The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n@param       PreviewFile             Absolute path to the local image." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventUpdateItemPreviewFile_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventUpdateItemPreviewFile_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventUpdateItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventUpdateItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventUpdateItemPreviewFile_Parms), &Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "UpdateItemPreviewFile", Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::OrionSteamUGC_eventUpdateItemPreviewFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::OrionSteamUGC_eventUpdateItemPreviewFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execUpdateItemPreviewFile)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::UpdateItemPreviewFile(Z_Param_Handle,Z_Param_index,Z_Param_PreviewFile);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function UpdateItemPreviewFile ******************************

// ********** Begin Class UOrionSteamUGC Function UpdateItemPreviewVideo ***************************
struct Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics
{
	struct OrionSteamUGC_eventUpdateItemPreviewVideo_Parms
	{
		FUGCUpdateHandle Handle;
		int32 Index;
		FString PreviewVideo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates an additional video preview from YouTube for the item.\n\x09 *\n\x09 * NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The workshop item update Handle to customize.\n\x09 * @param\x09Index\x09\x09\x09\x09The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n\x09 * @param\x09PreviewVideo\x09\x09The YouTube video to add. (e.g. \"jHgZh4GV9G0\")\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates an additional video preview from YouTube for the item.\n\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param       Handle                          The workshop item update Handle to customize.\n@param       Index                           The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n@param       PreviewVideo            The YouTube video to add. (e.g. \"jHgZh4GV9G0\")" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewVideo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventUpdateItemPreviewVideo_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1837176767
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventUpdateItemPreviewVideo_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo = { "PreviewVideo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUGC_eventUpdateItemPreviewVideo_Parms, PreviewVideo), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUGC_eventUpdateItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUGC_eventUpdateItemPreviewVideo_Parms), &Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUGC, nullptr, "UpdateItemPreviewVideo", Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::OrionSteamUGC_eventUpdateItemPreviewVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::OrionSteamUGC_eventUpdateItemPreviewVideo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUGC::execUpdateItemPreviewVideo)
{
	P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FStrProperty,Z_Param_PreviewVideo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUGC::UpdateItemPreviewVideo(Z_Param_Handle,Z_Param_Index,Z_Param_PreviewVideo);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUGC Function UpdateItemPreviewVideo *****************************

// ********** Begin Class UOrionSteamUGC ***********************************************************
void UOrionSteamUGC::StaticRegisterNativesUOrionSteamUGC()
{
	UClass* Class = UOrionSteamUGC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAppDependency", &UOrionSteamUGC::execAddAppDependency },
		{ "AddContentDescriptor", &UOrionSteamUGC::execAddContentDescriptor },
		{ "AddDependency", &UOrionSteamUGC::execAddDependency },
		{ "AddExcludedTag", &UOrionSteamUGC::execAddExcludedTag },
		{ "AddItemKeyValueTag", &UOrionSteamUGC::execAddItemKeyValueTag },
		{ "AddItemPreviewFile", &UOrionSteamUGC::execAddItemPreviewFile },
		{ "AddItemPreviewVideo", &UOrionSteamUGC::execAddItemPreviewVideo },
		{ "AddItemToFavorites", &UOrionSteamUGC::execAddItemToFavorites },
		{ "AddRequiredKeyValueTag", &UOrionSteamUGC::execAddRequiredKeyValueTag },
		{ "AddRequiredTag", &UOrionSteamUGC::execAddRequiredTag },
		{ "AddRequiredTagGroup", &UOrionSteamUGC::execAddRequiredTagGroup },
		{ "BInitWorkshopForGameServer", &UOrionSteamUGC::execBInitWorkshopForGameServer },
		{ "CreateItem", &UOrionSteamUGC::execCreateItem },
		{ "CreateQueryAllUGCRequest", &UOrionSteamUGC::execCreateQueryAllUGCRequest },
		{ "CreateQueryUGCDetailsRequest", &UOrionSteamUGC::execCreateQueryUGCDetailsRequest },
		{ "CreateQueryUserUGCRequest", &UOrionSteamUGC::execCreateQueryUserUGCRequest },
		{ "DeleteItem", &UOrionSteamUGC::execDeleteItem },
		{ "DownloadItem", &UOrionSteamUGC::execDownloadItem },
		{ "GetAppDependencies", &UOrionSteamUGC::execGetAppDependencies },
		{ "GetItemDownloadInfo", &UOrionSteamUGC::execGetItemDownloadInfo },
		{ "GetItemInstallInfo", &UOrionSteamUGC::execGetItemInstallInfo },
		{ "GetItemState", &UOrionSteamUGC::execGetItemState },
		{ "GetItemUpdateProgress", &UOrionSteamUGC::execGetItemUpdateProgress },
		{ "GetNumSubscribedItems", &UOrionSteamUGC::execGetNumSubscribedItems },
		{ "GetNumSupportedGameVersions", &UOrionSteamUGC::execGetNumSupportedGameVersions },
		{ "GetQueryUGCAdditionalPreview", &UOrionSteamUGC::execGetQueryUGCAdditionalPreview },
		{ "GetQueryUGCChildren", &UOrionSteamUGC::execGetQueryUGCChildren },
		{ "GetQueryUGCKeyValueTag", &UOrionSteamUGC::execGetQueryUGCKeyValueTag },
		{ "GetQueryUGCMetadata", &UOrionSteamUGC::execGetQueryUGCMetadata },
		{ "GetQueryUGCNumAdditionalPreviews", &UOrionSteamUGC::execGetQueryUGCNumAdditionalPreviews },
		{ "GetQueryUGCNumKeyValueTags", &UOrionSteamUGC::execGetQueryUGCNumKeyValueTags },
		{ "GetQueryUGCNumTags", &UOrionSteamUGC::execGetQueryUGCNumTags },
		{ "GetQueryUGCPreviewURL", &UOrionSteamUGC::execGetQueryUGCPreviewURL },
		{ "GetQueryUGCResult", &UOrionSteamUGC::execGetQueryUGCResult },
		{ "GetQueryUGCStatistic", &UOrionSteamUGC::execGetQueryUGCStatistic },
		{ "GetQueryUGCTag", &UOrionSteamUGC::execGetQueryUGCTag },
		{ "GetQueryUGCTagDisplayName", &UOrionSteamUGC::execGetQueryUGCTagDisplayName },
		{ "GetSteamUGC", &UOrionSteamUGC::execGetSteamUGC },
		{ "GetSubscribedItems", &UOrionSteamUGC::execGetSubscribedItems },
		{ "GetSupportedGameVersionData", &UOrionSteamUGC::execGetSupportedGameVersionData },
		{ "GetUserContentDescriptorPreferences", &UOrionSteamUGC::execGetUserContentDescriptorPreferences },
		{ "GetUserItemVote", &UOrionSteamUGC::execGetUserItemVote },
		{ "GetWorkshopEULAStatus", &UOrionSteamUGC::execGetWorkshopEULAStatus },
		{ "ReleaseQueryUGCRequest", &UOrionSteamUGC::execReleaseQueryUGCRequest },
		{ "RemoveAppDependency", &UOrionSteamUGC::execRemoveAppDependency },
		{ "RemoveContentDescriptor", &UOrionSteamUGC::execRemoveContentDescriptor },
		{ "RemoveDependency", &UOrionSteamUGC::execRemoveDependency },
		{ "RemoveItemFromFavorites", &UOrionSteamUGC::execRemoveItemFromFavorites },
		{ "RemoveItemKeyValueTags", &UOrionSteamUGC::execRemoveItemKeyValueTags },
		{ "RemoveItemPreview", &UOrionSteamUGC::execRemoveItemPreview },
		{ "SendQueryUGCRequest", &UOrionSteamUGC::execSendQueryUGCRequest },
		{ "SetAdminQuery", &UOrionSteamUGC::execSetAdminQuery },
		{ "SetAllowCachedResponse", &UOrionSteamUGC::execSetAllowCachedResponse },
		{ "SetAllowLegacyUpload", &UOrionSteamUGC::execSetAllowLegacyUpload },
		{ "SetCloudFileNameFilter", &UOrionSteamUGC::execSetCloudFileNameFilter },
		{ "SetItemContent", &UOrionSteamUGC::execSetItemContent },
		{ "SetItemDescription", &UOrionSteamUGC::execSetItemDescription },
		{ "SetItemMetadata", &UOrionSteamUGC::execSetItemMetadata },
		{ "SetItemPreview", &UOrionSteamUGC::execSetItemPreview },
		{ "SetItemsDisabledLocally", &UOrionSteamUGC::execSetItemsDisabledLocally },
		{ "SetItemTags", &UOrionSteamUGC::execSetItemTags },
		{ "SetItemTitle", &UOrionSteamUGC::execSetItemTitle },
		{ "SetItemUpdateLanguage", &UOrionSteamUGC::execSetItemUpdateLanguage },
		{ "SetItemVisibility", &UOrionSteamUGC::execSetItemVisibility },
		{ "SetLanguage", &UOrionSteamUGC::execSetLanguage },
		{ "SetMatchAnyTag", &UOrionSteamUGC::execSetMatchAnyTag },
		{ "SetRankedByTrendDays", &UOrionSteamUGC::execSetRankedByTrendDays },
		{ "SetRequiredGameVersions", &UOrionSteamUGC::execSetRequiredGameVersions },
		{ "SetReturnAdditionalPreviews", &UOrionSteamUGC::execSetReturnAdditionalPreviews },
		{ "SetReturnChildren", &UOrionSteamUGC::execSetReturnChildren },
		{ "SetReturnKeyValueTags", &UOrionSteamUGC::execSetReturnKeyValueTags },
		{ "SetReturnLongDescription", &UOrionSteamUGC::execSetReturnLongDescription },
		{ "SetReturnMetadata", &UOrionSteamUGC::execSetReturnMetadata },
		{ "SetReturnOnlyIDs", &UOrionSteamUGC::execSetReturnOnlyIDs },
		{ "SetReturnPlaytimeStats", &UOrionSteamUGC::execSetReturnPlaytimeStats },
		{ "SetReturnTotalOnly", &UOrionSteamUGC::execSetReturnTotalOnly },
		{ "SetSearchText", &UOrionSteamUGC::execSetSearchText },
		{ "SetSubscriptionsLoadOrder", &UOrionSteamUGC::execSetSubscriptionsLoadOrder },
		{ "SetUserItemVote", &UOrionSteamUGC::execSetUserItemVote },
		{ "ShowWorkshopEULA", &UOrionSteamUGC::execShowWorkshopEULA },
		{ "StartItemUpdate", &UOrionSteamUGC::execStartItemUpdate },
		{ "StartPlaytimeTracking", &UOrionSteamUGC::execStartPlaytimeTracking },
		{ "StopPlaytimeTracking", &UOrionSteamUGC::execStopPlaytimeTracking },
		{ "StopPlaytimeTrackingForAllItems", &UOrionSteamUGC::execStopPlaytimeTrackingForAllItems },
		{ "SubmitItemUpdate", &UOrionSteamUGC::execSubmitItemUpdate },
		{ "SubscribeItem", &UOrionSteamUGC::execSubscribeItem },
		{ "SuspendDownloads", &UOrionSteamUGC::execSuspendDownloads },
		{ "UnsubscribeItem", &UOrionSteamUGC::execUnsubscribeItem },
		{ "UpdateItemPreviewFile", &UOrionSteamUGC::execUpdateItemPreviewFile },
		{ "UpdateItemPreviewVideo", &UOrionSteamUGC::execUpdateItemPreviewVideo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUGC;
UClass* UOrionSteamUGC::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUGC;
	if (!Z_Registration_Info_UClass_UOrionSteamUGC.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUGC"),
			Z_Registration_Info_UClass_UOrionSteamUGC.InnerSingleton,
			StaticRegisterNativesUOrionSteamUGC,
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
	return Z_Registration_Info_UClass_UOrionSteamUGC.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUGC_NoRegister()
{
	return UOrionSteamUGC::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUGC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUGC/SteamUGC.h" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInstalled_MetaData[] = {
		{ "Category", "OrionSteam|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadItemResult_MetaData[] = {
		{ "Category", "OrionSteam|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSubscribedItemsListChanged_MetaData[] = {
		{ "Category", "OrionSteam|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkshopEULAStatus_MetaData[] = {
		{ "Category", "OrionSteam|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemInstalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadItemResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserSubscribedItemsListChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_WorkshopEULAStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddAppDependency, "AddAppDependency" }, // 864578553
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddContentDescriptor, "AddContentDescriptor" }, // 530073754
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddDependency, "AddDependency" }, // 756300358
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddExcludedTag, "AddExcludedTag" }, // 2871026961
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddItemKeyValueTag, "AddItemKeyValueTag" }, // 2228576763
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewFile, "AddItemPreviewFile" }, // 2949308948
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddItemPreviewVideo, "AddItemPreviewVideo" }, // 3162150162
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddItemToFavorites, "AddItemToFavorites" }, // 3748993932
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddRequiredKeyValueTag, "AddRequiredKeyValueTag" }, // 2285796662
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTag, "AddRequiredTag" }, // 4004160397
		{ &Z_Construct_UFunction_UOrionSteamUGC_AddRequiredTagGroup, "AddRequiredTagGroup" }, // 4108485805
		{ &Z_Construct_UFunction_UOrionSteamUGC_BInitWorkshopForGameServer, "BInitWorkshopForGameServer" }, // 3757543624
		{ &Z_Construct_UFunction_UOrionSteamUGC_CreateItem, "CreateItem" }, // 2243839049
		{ &Z_Construct_UFunction_UOrionSteamUGC_CreateQueryAllUGCRequest, "CreateQueryAllUGCRequest" }, // 605973998
		{ &Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUGCDetailsRequest, "CreateQueryUGCDetailsRequest" }, // 2732222612
		{ &Z_Construct_UFunction_UOrionSteamUGC_CreateQueryUserUGCRequest, "CreateQueryUserUGCRequest" }, // 1637435987
		{ &Z_Construct_UFunction_UOrionSteamUGC_DeleteItem, "DeleteItem" }, // 1253433516
		{ &Z_Construct_UFunction_UOrionSteamUGC_DownloadItem, "DownloadItem" }, // 1131334540
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetAppDependencies, "GetAppDependencies" }, // 4050378219
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetItemDownloadInfo, "GetItemDownloadInfo" }, // 949672851
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetItemInstallInfo, "GetItemInstallInfo" }, // 324275226
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetItemState, "GetItemState" }, // 2278956901
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetItemUpdateProgress, "GetItemUpdateProgress" }, // 2696163309
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetNumSubscribedItems, "GetNumSubscribedItems" }, // 3153275799
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetNumSupportedGameVersions, "GetNumSupportedGameVersions" }, // 3393803611
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCAdditionalPreview, "GetQueryUGCAdditionalPreview" }, // 2364305873
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCChildren, "GetQueryUGCChildren" }, // 2295336089
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCKeyValueTag, "GetQueryUGCKeyValueTag" }, // 2734667394
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCMetadata, "GetQueryUGCMetadata" }, // 1122550181
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumAdditionalPreviews, "GetQueryUGCNumAdditionalPreviews" }, // 465964622
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumKeyValueTags, "GetQueryUGCNumKeyValueTags" }, // 222785068
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCNumTags, "GetQueryUGCNumTags" }, // 1549639892
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCPreviewURL, "GetQueryUGCPreviewURL" }, // 1106740900
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCResult, "GetQueryUGCResult" }, // 1096653805
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCStatistic, "GetQueryUGCStatistic" }, // 2180677322
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTag, "GetQueryUGCTag" }, // 2409484705
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetQueryUGCTagDisplayName, "GetQueryUGCTagDisplayName" }, // 3182518493
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetSteamUGC, "GetSteamUGC" }, // 76020640
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetSubscribedItems, "GetSubscribedItems" }, // 253254123
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetSupportedGameVersionData, "GetSupportedGameVersionData" }, // 3882456361
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetUserContentDescriptorPreferences, "GetUserContentDescriptorPreferences" }, // 2702459285
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetUserItemVote, "GetUserItemVote" }, // 1693201448
		{ &Z_Construct_UFunction_UOrionSteamUGC_GetWorkshopEULAStatus, "GetWorkshopEULAStatus" }, // 868658192
		{ &Z_Construct_UFunction_UOrionSteamUGC_ReleaseQueryUGCRequest, "ReleaseQueryUGCRequest" }, // 2474657747
		{ &Z_Construct_UFunction_UOrionSteamUGC_RemoveAppDependency, "RemoveAppDependency" }, // 1040451745
		{ &Z_Construct_UFunction_UOrionSteamUGC_RemoveContentDescriptor, "RemoveContentDescriptor" }, // 216374326
		{ &Z_Construct_UFunction_UOrionSteamUGC_RemoveDependency, "RemoveDependency" }, // 1054745906
		{ &Z_Construct_UFunction_UOrionSteamUGC_RemoveItemFromFavorites, "RemoveItemFromFavorites" }, // 3187981845
		{ &Z_Construct_UFunction_UOrionSteamUGC_RemoveItemKeyValueTags, "RemoveItemKeyValueTags" }, // 3031712490
		{ &Z_Construct_UFunction_UOrionSteamUGC_RemoveItemPreview, "RemoveItemPreview" }, // 438744566
		{ &Z_Construct_UFunction_UOrionSteamUGC_SendQueryUGCRequest, "SendQueryUGCRequest" }, // 3361534938
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetAdminQuery, "SetAdminQuery" }, // 1736190744
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetAllowCachedResponse, "SetAllowCachedResponse" }, // 87578615
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetAllowLegacyUpload, "SetAllowLegacyUpload" }, // 3080074564
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetCloudFileNameFilter, "SetCloudFileNameFilter" }, // 825063394
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetItemContent, "SetItemContent" }, // 2892654618
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetItemDescription, "SetItemDescription" }, // 1206084159
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetItemMetadata, "SetItemMetadata" }, // 2669383583
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetItemPreview, "SetItemPreview" }, // 2178438904
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetItemsDisabledLocally, "SetItemsDisabledLocally" }, // 1651749546
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetItemTags, "SetItemTags" }, // 483242614
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetItemTitle, "SetItemTitle" }, // 537870051
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetItemUpdateLanguage, "SetItemUpdateLanguage" }, // 3585369214
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetItemVisibility, "SetItemVisibility" }, // 4106000238
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetLanguage, "SetLanguage" }, // 3384258446
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetMatchAnyTag, "SetMatchAnyTag" }, // 649397530
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetRankedByTrendDays, "SetRankedByTrendDays" }, // 1460248419
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetRequiredGameVersions, "SetRequiredGameVersions" }, // 2085409928
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetReturnAdditionalPreviews, "SetReturnAdditionalPreviews" }, // 1344088608
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetReturnChildren, "SetReturnChildren" }, // 936288475
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetReturnKeyValueTags, "SetReturnKeyValueTags" }, // 2538913379
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetReturnLongDescription, "SetReturnLongDescription" }, // 2149869323
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetReturnMetadata, "SetReturnMetadata" }, // 1724452793
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetReturnOnlyIDs, "SetReturnOnlyIDs" }, // 1446989986
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetReturnPlaytimeStats, "SetReturnPlaytimeStats" }, // 464901487
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetReturnTotalOnly, "SetReturnTotalOnly" }, // 660437228
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetSearchText, "SetSearchText" }, // 1754221782
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetSubscriptionsLoadOrder, "SetSubscriptionsLoadOrder" }, // 2286435447
		{ &Z_Construct_UFunction_UOrionSteamUGC_SetUserItemVote, "SetUserItemVote" }, // 388565864
		{ &Z_Construct_UFunction_UOrionSteamUGC_ShowWorkshopEULA, "ShowWorkshopEULA" }, // 3054402754
		{ &Z_Construct_UFunction_UOrionSteamUGC_StartItemUpdate, "StartItemUpdate" }, // 898810356
		{ &Z_Construct_UFunction_UOrionSteamUGC_StartPlaytimeTracking, "StartPlaytimeTracking" }, // 2155588015
		{ &Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTracking, "StopPlaytimeTracking" }, // 3852305619
		{ &Z_Construct_UFunction_UOrionSteamUGC_StopPlaytimeTrackingForAllItems, "StopPlaytimeTrackingForAllItems" }, // 3595951153
		{ &Z_Construct_UFunction_UOrionSteamUGC_SubmitItemUpdate, "SubmitItemUpdate" }, // 1293993240
		{ &Z_Construct_UFunction_UOrionSteamUGC_SubscribeItem, "SubscribeItem" }, // 492130922
		{ &Z_Construct_UFunction_UOrionSteamUGC_SuspendDownloads, "SuspendDownloads" }, // 761332578
		{ &Z_Construct_UFunction_UOrionSteamUGC_UnsubscribeItem, "UnsubscribeItem" }, // 4186246283
		{ &Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewFile, "UpdateItemPreviewFile" }, // 1241227088
		{ &Z_Construct_UFunction_UOrionSteamUGC_UpdateItemPreviewVideo, "UpdateItemPreviewVideo" }, // 4007025849
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUGC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUGC_Statics::NewProp_ItemInstalled = { "ItemInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUGC, ItemInstalled), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnItemInstalled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInstalled_MetaData), NewProp_ItemInstalled_MetaData) }; // 2660605249
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUGC_Statics::NewProp_DownloadItemResult = { "DownloadItemResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUGC, DownloadItemResult), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadItemResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadItemResult_MetaData), NewProp_DownloadItemResult_MetaData) }; // 379540105
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUGC_Statics::NewProp_UserSubscribedItemsListChanged = { "UserSubscribedItemsListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUGC, UserSubscribedItemsListChanged), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserSubscribedItemsListChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSubscribedItemsListChanged_MetaData), NewProp_UserSubscribedItemsListChanged_MetaData) }; // 1106620852
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUGC_Statics::NewProp_WorkshopEULAStatus = { "WorkshopEULAStatus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUGC, WorkshopEULAStatus), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnWorkshopEULAStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkshopEULAStatus_MetaData), NewProp_WorkshopEULAStatus_MetaData) }; // 934345934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUGC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUGC_Statics::NewProp_ItemInstalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUGC_Statics::NewProp_DownloadItemResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUGC_Statics::NewProp_UserSubscribedItemsListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUGC_Statics::NewProp_WorkshopEULAStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUGC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUGC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUGC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUGC_Statics::ClassParams = {
	&UOrionSteamUGC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUGC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUGC_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUGC_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUGC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUGC()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUGC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUGC.OuterSingleton, Z_Construct_UClass_UOrionSteamUGC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUGC.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUGC);
// ********** End Class UOrionSteamUGC *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGC_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamUGC, UOrionSteamUGC::StaticClass, TEXT("UOrionSteamUGC"), &Z_Registration_Info_UClass_UOrionSteamUGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUGC), 3785232452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGC_h__Script_OrionSteamSDKAPI_221429629(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGC_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGC_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
