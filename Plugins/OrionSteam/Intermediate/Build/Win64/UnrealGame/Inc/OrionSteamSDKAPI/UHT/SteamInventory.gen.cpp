// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamInventory/SteamInventory.h"
#include "SteamInventory/SteamInventoryTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamInventory() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventory();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventory_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryDefinitionUpdate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamInventory Function AddPromoItem *******************************
struct Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics
{
	struct OrionSteamInventory_eventAddPromoItem_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemDef ItemDef;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Grant a specific one-time promotional item to the current user.\n\x09 *\n\x09 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\n\x09 * grant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\n\x09 * Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\n\x09 * This version will grant all items that have promo attributes specified for them in the configured item definitions.\n\x09 * This allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09 *\n\x09 * @param\x09ItemDef\x09\x09The ItemDef to grant the player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grant a specific one-time promotional item to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\ngrant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions.\nThis allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param       ItemDef         The ItemDef to grant the player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventAddPromoItem_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventAddPromoItem_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
void Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventAddPromoItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventAddPromoItem_Parms), &Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "AddPromoItem", Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::OrionSteamInventory_eventAddPromoItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::OrionSteamInventory_eventAddPromoItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execAddPromoItem)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::AddPromoItem(Z_Param_Out_Result,Z_Param_ItemDef);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function AddPromoItem *********************************

// ********** Begin Class UOrionSteamInventory Function AddPromoItems ******************************
struct Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics
{
	struct OrionSteamInventory_eventAddPromoItems_Parms
	{
		FSteamInventoryResult OutResult;
		TArray<FSteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Grant a specific one-time promotional item to the current user.\n\x09 *\n\x09 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\n\x09 * grant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\n\x09 * Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\n\x09 * This version will grant all items that have promo attributes specified for them in the configured item definitions.\n\x09 * This allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09 *\n\x09 * @param\x09ItemDefs\x09\x09\x09The list of items to grant the user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grant a specific one-time promotional item to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\ngrant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions.\nThis allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param       ItemDefs                        The list of items to grant the user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventAddPromoItems_Parms, OutResult), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventAddPromoItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2225347947
void Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventAddPromoItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventAddPromoItems_Parms), &Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "AddPromoItems", Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::OrionSteamInventory_eventAddPromoItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::OrionSteamInventory_eventAddPromoItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execAddPromoItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_OutResult);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::AddPromoItems(Z_Param_Out_OutResult,Z_Param_ItemDefs);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function AddPromoItems ********************************

// ********** Begin Class UOrionSteamInventory Function CheckResultSteamID *************************
struct Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics
{
	struct OrionSteamInventory_eventCheckResultSteamID_Parms
	{
		FSteamInventoryResult Handle;
		FSteamID SteamIDExpected;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether an inventory result handle belongs to the specified Steam ID.\n\x09 *\n\x09 * This is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The inventory result handle to check the Steam ID on.\n\x09 * @param\x09steamID\x09\x09The Steam ID to verify.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether an inventory result handle belongs to the specified Steam ID.\n\nThis is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\n@param       Handle          The inventory result handle to check the Steam ID on.\n@param       steamID         The Steam ID to verify." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDExpected;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventCheckResultSteamID_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::NewProp_SteamIDExpected = { "SteamIDExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventCheckResultSteamID_Parms, SteamIDExpected), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventCheckResultSteamID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventCheckResultSteamID_Parms), &Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::NewProp_SteamIDExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "CheckResultSteamID", Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::OrionSteamInventory_eventCheckResultSteamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::OrionSteamInventory_eventCheckResultSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execCheckResultSteamID)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDExpected);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::CheckResultSteamID(Z_Param_Handle,Z_Param_SteamIDExpected);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function CheckResultSteamID ***************************

// ********** Begin Class UOrionSteamInventory Function ConsumeItem ********************************
struct Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics
{
	struct OrionSteamInventory_eventConsumeItem_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemInstanceID ItemConsume;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\n\x09 *\n\x09 * Once an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended.\n\x09 * ConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\n\x09 *\n\x09 * @param\x09ItemConsume\x09\x09\x09The item instance id to consume.\n\x09 * @param\x09Quantity\x09\x09The number of items in that stack to consume.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\n\nOnce an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended.\nConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\n\n@param       ItemConsume                     The item instance id to consume.\n@param       Quantity                The number of items in that stack to consume." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemConsume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventConsumeItem_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::NewProp_ItemConsume = { "ItemConsume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventConsumeItem_Parms, ItemConsume), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventConsumeItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventConsumeItem_Parms), &Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::NewProp_ItemConsume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "ConsumeItem", Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::OrionSteamInventory_eventConsumeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::OrionSteamInventory_eventConsumeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execConsumeItem)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemConsume);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::ConsumeItem(Z_Param_Out_Result,Z_Param_ItemConsume,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function ConsumeItem **********************************

// ********** Begin Class UOrionSteamInventory Function DeserializeResult **************************
struct Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics
{
	struct OrionSteamInventory_eventDeserializeResult_Parms
	{
		FSteamInventoryResult Result;
		TArray<uint8> Buffer;
		bool bReservedMustBeFalse;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Deserializes a result set and verifies the signature bytes.\n\x09 *\n\x09 * This call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode.\n\x09 * The \"expired\" result could indicate that the data may be out of date - not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated.\n\x09 * You could compare the timestamp from GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal,\n\x09 * or you could request the player with expired data to send an updated result set.\n\x09 * You should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\n\x09 *\n\x09 * @param\x09""Buffer\x09\x09\x09\x09\x09The buffer to deserialize.\n\x09 * @param\x09""bReservedMustBeFalse\x09This must be false!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deserializes a result set and verifies the signature bytes.\n\nThis call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode.\nThe \"expired\" result could indicate that the data may be out of date - not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated.\nYou could compare the timestamp from GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal,\nor you could request the player with expired data to send an updated result set.\nYou should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\n\n@param       Buffer                                  The buffer to deserialize.\n@param       bReservedMustBeFalse    This must be false!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static void NewProp_bReservedMustBeFalse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReservedMustBeFalse;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventDeserializeResult_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventDeserializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse_SetBit(void* Obj)
{
	((OrionSteamInventory_eventDeserializeResult_Parms*)Obj)->bReservedMustBeFalse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse = { "bReservedMustBeFalse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventDeserializeResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "DeserializeResult", Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::OrionSteamInventory_eventDeserializeResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::OrionSteamInventory_eventDeserializeResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execDeserializeResult)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_TARRAY(uint8,Z_Param_Buffer);
	P_GET_UBOOL(Z_Param_bReservedMustBeFalse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::DeserializeResult(Z_Param_Out_Result,Z_Param_Buffer,Z_Param_bReservedMustBeFalse);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function DeserializeResult ****************************

// ********** Begin Class UOrionSteamInventory Function DestroyResult ******************************
struct Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics
{
	struct OrionSteamInventory_eventDestroyResult_Parms
	{
		FSteamInventoryResult Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Destroys a result handle and frees all associated memory.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The inventory result handle to destroy.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys a result handle and frees all associated memory.\n\n@param       Handle          The inventory result handle to destroy." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventDestroyResult_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "DestroyResult", Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::OrionSteamInventory_eventDestroyResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::OrionSteamInventory_eventDestroyResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_DestroyResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_DestroyResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execDestroyResult)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamInventory::DestroyResult(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function DestroyResult ********************************

// ********** Begin Class UOrionSteamInventory Function ExchangeItems ******************************
struct Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics
{
	struct OrionSteamInventory_eventExchangeItems_Parms
	{
		FSteamInventoryResult Result;
		TArray<FSteamItemDef> ArrayGenerate;
		TArray<int32> ArrayGenerateQuantity;
		TArray<FSteamItemInstanceID> ArrayDestroy;
		TArray<int32> ArrayDestroyQuantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Grant one item in exchange for a set of other items.\n\x09 *\n\x09 * This can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).\n\x09 * The caller of this API passes in the requested item and an array of existing items and quantities to exchange for it.\n\x09 * The API currently takes an array of items to generate but at this time the size of that array must be 1 and the quantity of the new item must be 1.\n\x09 * Any items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item.\n\x09 * Exchange recipes are evaluated atomically by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.\n\x09 *\n\x09 * @param\x09""ArrayGenerate\x09\x09\x09\x09\x09The list of items that will be created by this call. Currently can only be 1 item!\n\x09 * @param\x09""ArrayGenerateQuantity\x09\x09\x09The quantity of each item in pArrayGenerate to create. Currently can only be 1 item and it must be set to 1!\n\x09 * @param\x09""ArrayDestroy\x09\x09\x09\x09\x09The list of items that will be destroyed by this call.\n\x09 * @param\x09""ArrayDestroyQuantity\x09\x09\x09The quantity of each item in pArrayDestroy to destroy.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grant one item in exchange for a set of other items.\n\nThis can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).\nThe caller of this API passes in the requested item and an array of existing items and quantities to exchange for it.\nThe API currently takes an array of items to generate but at this time the size of that array must be 1 and the quantity of the new item must be 1.\nAny items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item.\nExchange recipes are evaluated atomically by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.\n\n@param       ArrayGenerate                                   The list of items that will be created by this call. Currently can only be 1 item!\n@param       ArrayGenerateQuantity                   The quantity of each item in pArrayGenerate to create. Currently can only be 1 item and it must be set to 1!\n@param       ArrayDestroy                                    The list of items that will be destroyed by this call.\n@param       ArrayDestroyQuantity                    The quantity of each item in pArrayDestroy to destroy." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayGenerate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayGenerate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayGenerateQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayGenerateQuantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayDestroy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayDestroy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayDestroyQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayDestroyQuantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventExchangeItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayGenerate_Inner = { "ArrayGenerate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayGenerate = { "ArrayGenerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventExchangeItems_Parms, ArrayGenerate), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity_Inner = { "ArrayGenerateQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity = { "ArrayGenerateQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventExchangeItems_Parms, ArrayGenerateQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayDestroy_Inner = { "ArrayDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayDestroy = { "ArrayDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventExchangeItems_Parms, ArrayDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity_Inner = { "ArrayDestroyQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity = { "ArrayDestroyQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventExchangeItems_Parms, ArrayDestroyQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventExchangeItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventExchangeItems_Parms), &Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayGenerate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayGenerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayDestroy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "ExchangeItems", Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::OrionSteamInventory_eventExchangeItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::OrionSteamInventory_eventExchangeItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execExchangeItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ArrayGenerate);
	P_GET_TARRAY(int32,Z_Param_ArrayGenerateQuantity);
	P_GET_TARRAY(FSteamItemInstanceID,Z_Param_ArrayDestroy);
	P_GET_TARRAY(int32,Z_Param_ArrayDestroyQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::ExchangeItems(Z_Param_Out_Result,Z_Param_ArrayGenerate,Z_Param_ArrayGenerateQuantity,Z_Param_ArrayDestroy,Z_Param_ArrayDestroyQuantity);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function ExchangeItems ********************************

// ********** Begin Class UOrionSteamInventory Function GenerateItems ******************************
struct Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics
{
	struct OrionSteamInventory_eventGenerateItems_Parms
	{
		FSteamInventoryResult Result;
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Grants specific items to the current user, for developers only.\n\x09 *\n\x09 * This API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.\n\x09 * You can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!\n\x09 *\n\x09 * @param\x09ItemDefs\x09\x09The list of items to grant the user.\n\x09 * @param\x09Quantity\x09\x09The quantity of each item in pArrayItemDefs to grant. This is optional, pass in NULL to specify 1 of each item.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grants specific items to the current user, for developers only.\n\nThis API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.\nYou can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!\n\n@param       ItemDefs                The list of items to grant the user.\n@param       Quantity                The quantity of each item in pArrayItemDefs to grant. This is optional, pass in NULL to specify 1 of each item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGenerateItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGenerateItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGenerateItems_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGenerateItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGenerateItems_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GenerateItems", Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::OrionSteamInventory_eventGenerateItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::OrionSteamInventory_eventGenerateItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GenerateItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GenerateItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGenerateItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_GET_TARRAY(int32,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GenerateItems(Z_Param_Out_Result,Z_Param_ItemDefs,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GenerateItems ********************************

// ********** Begin Class UOrionSteamInventory Function GetAllItems ********************************
struct Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics
{
	struct OrionSteamInventory_eventGetAllItems_Parms
	{
		FSteamInventoryResult Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start retrieving all items in the current users inventory.\n\x09 *\n\x09 * Calls to this function are subject to rate limits and may return cached results if called too frequently.\n\x09 * It is suggested that you call this function only when you are about to display the user's full inventory, or if you expect that the inventory may have changed.\n\x09 *\n\x09 * @param\x09Handle\x09\x09Returns a new inventory result handle.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start retrieving all items in the current users inventory.\n\nCalls to this function are subject to rate limits and may return cached results if called too frequently.\nIt is suggested that you call this function only when you are about to display the user's full inventory, or if you expect that the inventory may have changed.\n\n@param       Handle          Returns a new inventory result handle." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetAllItems_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
void Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGetAllItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGetAllItems_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetAllItems", Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::OrionSteamInventory_eventGetAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::OrionSteamInventory_eventGetAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetAllItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GetAllItems(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetAllItems **********************************

// ********** Begin Class UOrionSteamInventory Function GetEligiblePromoItemDefinitionIDs **********
struct Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics
{
	struct OrionSteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms
	{
		FSteamID SteamID;
		TArray<FSteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the list of item definition ids that a user can be granted.\n\x09 *\n\x09 * You should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\x09 *\n\x09 * @param\x09SteamID\x09\x09The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n\x09 * @param\x09ItemDefs\x09Returns the item definition ids by copying them into this array.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the list of item definition ids that a user can be granted.\n\nYou should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\n@param       SteamID         The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n@param       ItemDefs        Returns the item definition ids by copying them into this array." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2225347947
void Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetEligiblePromoItemDefinitionIDs", Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::OrionSteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::OrionSteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetEligiblePromoItemDefinitionIDs)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GetEligiblePromoItemDefinitionIDs(Z_Param_SteamID,Z_Param_Out_ItemDefs);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetEligiblePromoItemDefinitionIDs ************

// ********** Begin Class UOrionSteamInventory Function GetItemDefinitionIDs ***********************
struct Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics
{
	struct OrionSteamInventory_eventGetItemDefinitionIDs_Parms
	{
		TArray<FSteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\n\x09 *\n\x09 * These item definitions may not necessarily be contiguous integers.\n\x09 * This should be called in response to a SteamInventoryDefinitionUpdate_t callback.\n\x09 * There is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\x09 *\n\x09 * @param\x09ItemDefs\x09Returns the item definitions by copying them into this array.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\n\nThese item definitions may not necessarily be contiguous integers.\nThis should be called in response to a SteamInventoryDefinitionUpdate_t callback.\nThere is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\n@param       ItemDefs        Returns the item definitions by copying them into this array." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemDefinitionIDs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2225347947
void Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGetItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGetItemDefinitionIDs_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetItemDefinitionIDs", Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::OrionSteamInventory_eventGetItemDefinitionIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::OrionSteamInventory_eventGetItemDefinitionIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetItemDefinitionIDs)
{
	P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GetItemDefinitionIDs(Z_Param_Out_ItemDefs);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetItemDefinitionIDs *************************

// ********** Begin Class UOrionSteamInventory Function GetItemDefinitionProperty ******************
struct Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics
{
	struct OrionSteamInventory_eventGetItemDefinitionProperty_Parms
	{
		FSteamItemDef ItemDef;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a string property from the specified item definition.\n\x09 *\n\x09 * Gets a property value for a specific item definition.\n\x09 * Note that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\n\x09 * Pass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\x09 *\n\x09 * @param\x09ItemDef\x09\x09\x09\x09The item definition to get the properties for.\n\x09 * @param\x09PropertyName\x09\x09The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09 * @param\x09Value\x09\x09\x09\x09Returns the value associated with pchPropertyName.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a string property from the specified item definition.\n\nGets a property value for a specific item definition.\nNote that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\nPass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\n@param       ItemDef                         The item definition to get the properties for.\n@param       PropertyName            The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n@param       Value                           Returns the value associated with pchPropertyName." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemDefinitionProperty_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemDefinitionProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemDefinitionProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGetItemDefinitionProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGetItemDefinitionProperty_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetItemDefinitionProperty", Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::OrionSteamInventory_eventGetItemDefinitionProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::OrionSteamInventory_eventGetItemDefinitionProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetItemDefinitionProperty)
{
	P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GetItemDefinitionProperty(Z_Param_ItemDef,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetItemDefinitionProperty ********************

// ********** Begin Class UOrionSteamInventory Function GetItemPrice *******************************
struct Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics
{
	struct OrionSteamInventory_eventGetItemPrice_Parms
	{
		FSteamItemDef ItemDef;
		int32 Price;
		int32 BasePrice;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\x09 *\n\x09 * @param\x09ItemDef\x09\x09The item definition id to retrieve the price for\n\x09 * @param\x09Price\x09\x09The price pointer to populate. Prices are rendered in the user's local currency.\n\x09 * @param\x09""BasePrice\x09(Steam SDK 1.46 only)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\n@param       ItemDef         The item definition id to retrieve the price for\n@param       Price           The price pointer to populate. Prices are rendered in the user's local currency.\n@param       BasePrice       (Steam SDK 1.46 only)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Price;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BasePrice;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemPrice_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemPrice_Parms, Price), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::NewProp_BasePrice = { "BasePrice", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemPrice_Parms, BasePrice), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGetItemPrice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGetItemPrice_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::NewProp_Price,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::NewProp_BasePrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetItemPrice", Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::OrionSteamInventory_eventGetItemPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::OrionSteamInventory_eventGetItemPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetItemPrice)
{
	P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Price);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BasePrice);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GetItemPrice(Z_Param_ItemDef,Z_Param_Out_Price,Z_Param_Out_BasePrice);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetItemPrice *********************************

// ********** Begin Class UOrionSteamInventory Function GetItemsByID *******************************
struct Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics
{
	struct OrionSteamInventory_eventGetItemsByID_Parms
	{
		FSteamInventoryResult InventoryResult;
		TArray<FSteamItemInstanceID> InstanceIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the state of a subset of the current user's inventory.\n\x09 *\n\x09 * The subset is specified by an array of item instance IDs.\n\x09 * The results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory. For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\n\x09 *\n\x09 * @param\x09InstanceIDs\x09\x09""A list of the item instance ids to update the state of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the state of a subset of the current user's inventory.\n\nThe subset is specified by an array of item instance IDs.\nThe results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory. For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\n\n@param       InstanceIDs             A list of the item instance ids to update the state of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemsByID_Parms, InventoryResult), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs_Inner = { "InstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs = { "InstanceIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemsByID_Parms, InstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 605370625
void Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGetItemsByID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGetItemsByID_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetItemsByID", Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::OrionSteamInventory_eventGetItemsByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::OrionSteamInventory_eventGetItemsByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetItemsByID)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_TARRAY(FSteamItemInstanceID,Z_Param_InstanceIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GetItemsByID(Z_Param_Out_InventoryResult,Z_Param_InstanceIDs);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetItemsByID *********************************

// ********** Begin Class UOrionSteamInventory Function GetItemsWithPrices *************************
struct Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics
{
	struct OrionSteamInventory_eventGetItemsWithPrices_Parms
	{
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Prices;
		TArray<int32> BasePrices;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\x09 *\n\x09 * @param\x09ItemDefs\x09\x09The array of item definition ids to populate\n\x09 * @param\x09Prices\x09\x09The array of prices for each corresponding item definition id in pArrayItemDefs. Prices are rendered in the user's local currency.\n\x09 * @param\x09""BasePrices\x09(Steam SDK 1.46 only)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\n@param       ItemDefs                The array of item definition ids to populate\n@param       Prices          The array of prices for each corresponding item definition id in pArrayItemDefs. Prices are rendered in the user's local currency.\n@param       BasePrices      (Steam SDK 1.46 only)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Prices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Prices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BasePrices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BasePrices;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemsWithPrices_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_Prices_Inner = { "Prices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_Prices = { "Prices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemsWithPrices_Parms, Prices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_BasePrices_Inner = { "BasePrices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_BasePrices = { "BasePrices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetItemsWithPrices_Parms, BasePrices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGetItemsWithPrices_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGetItemsWithPrices_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_Prices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_Prices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_BasePrices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_BasePrices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetItemsWithPrices", Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::OrionSteamInventory_eventGetItemsWithPrices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::OrionSteamInventory_eventGetItemsWithPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetItemsWithPrices)
{
	P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Prices);
	P_GET_TARRAY_REF(int32,Z_Param_Out_BasePrices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GetItemsWithPrices(Z_Param_Out_ItemDefs,Z_Param_Out_Prices,Z_Param_Out_BasePrices);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetItemsWithPrices ***************************

// ********** Begin Class UOrionSteamInventory Function GetNumItemsWithPrices **********************
struct Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics
{
	struct OrionSteamInventory_eventGetNumItemsWithPrices_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * After a successful call to RequestPrices, this will return the number of item definitions with valid pricing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After a successful call to RequestPrices, this will return the number of item definitions with valid pricing." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetNumItemsWithPrices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetNumItemsWithPrices", Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::OrionSteamInventory_eventGetNumItemsWithPrices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::OrionSteamInventory_eventGetNumItemsWithPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetNumItemsWithPrices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamInventory::GetNumItemsWithPrices();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetNumItemsWithPrices ************************

// ********** Begin Class UOrionSteamInventory Function GetResultItemProperty **********************
struct Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics
{
	struct OrionSteamInventory_eventGetResultItemProperty_Parms
	{
		FSteamInventoryResult Handle;
		int32 ItemIndex;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the dynamic properties from an item in an inventory result set.\n\x09 *\n\x09 * Property names are always composed of ASCII letters, numbers, and/or underscores.\n\x09 * If the results do not fit in the given buffer, partial results may be copied.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The result handle containing the item to get the properties of.\n\x09 * @param\x09ItemIndex\n\x09 * @param\x09PropertyName\x09The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the dynamic properties from an item in an inventory result set.\n\nProperty names are always composed of ASCII letters, numbers, and/or underscores.\nIf the results do not fit in the given buffer, partial results may be copied.\n\n@param       Handle                  The result handle containing the item to get the properties of.\n@param       ItemIndex\n@param       PropertyName    The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetResultItemProperty_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetResultItemProperty_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetResultItemProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetResultItemProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGetResultItemProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGetResultItemProperty_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetResultItemProperty", Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::OrionSteamInventory_eventGetResultItemProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::OrionSteamInventory_eventGetResultItemProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetResultItemProperty)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GetResultItemProperty(Z_Param_Handle,Z_Param_ItemIndex,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetResultItemProperty ************************

// ********** Begin Class UOrionSteamInventory Function GetResultItems *****************************
struct Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics
{
	struct OrionSteamInventory_eventGetResultItems_Parms
	{
		FSteamInventoryResult Handle;
		TArray<FSteamItemDetails> Items;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the items associated with an inventory result handle.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The inventory result handle to get the items for.\n\x09 * @param\x09Items\x09\x09The details are returned by copying them into this array.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the items associated with an inventory result handle.\n\n@param       Handle          The inventory result handle to get the items for.\n@param       Items           The details are returned by copying them into this array." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetResultItems_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(0, nullptr) }; // 1463735765
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetResultItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1463735765
void Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGetResultItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGetResultItems_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetResultItems", Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::OrionSteamInventory_eventGetResultItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::OrionSteamInventory_eventGetResultItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetResultItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetResultItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetResultItems)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_TARRAY_REF(FSteamItemDetails,Z_Param_Out_Items);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GetResultItems(Z_Param_Handle,Z_Param_Out_Items);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetResultItems *******************************

// ********** Begin Class UOrionSteamInventory Function GetResultStatus ****************************
struct Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics
{
	struct OrionSteamInventory_eventGetResultStatus_Parms
	{
		FSteamInventoryResult Handle;
		ESteamResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find out the status of an asynchronous inventory result handle.\n\x09 *\n\x09 * This is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The inventory result handle to get the status for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find out the status of an asynchronous inventory result handle.\n\nThis is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\n@param       Handle          The inventory result handle to get the status for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetResultStatus_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetResultStatus_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(0, nullptr) }; // 2505325344
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetResultStatus", Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::OrionSteamInventory_eventGetResultStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::OrionSteamInventory_eventGetResultStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetResultStatus)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamResult*)Z_Param__Result=UOrionSteamInventory::GetResultStatus(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetResultStatus ******************************

// ********** Begin Class UOrionSteamInventory Function GetResultTimestamp *************************
struct Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics
{
	struct OrionSteamInventory_eventGetResultTimestamp_Parms
	{
		FSteamInventoryResult Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the server time at which the result was generated.\n\x09 *\n\x09 * @param\x09Handle\x09The inventory result handle to get the timestamp for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the server time at which the result was generated.\n\n@param       Handle  The inventory result handle to get the timestamp for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetResultTimestamp_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetResultTimestamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetResultTimestamp", Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::OrionSteamInventory_eventGetResultTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::OrionSteamInventory_eventGetResultTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetResultTimestamp)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamInventory::GetResultTimestamp(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetResultTimestamp ***************************

// ********** Begin Class UOrionSteamInventory Function GetSteamInventory **************************
struct Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics
{
	struct OrionSteamInventory_eventGetSteamInventory_Parms
	{
		UOrionSteamInventory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGetSteamInventory_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GetSteamInventory", Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::OrionSteamInventory_eventGetSteamInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::OrionSteamInventory_eventGetSteamInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGetSteamInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamInventory**)Z_Param__Result=UOrionSteamInventory::GetSteamInventory();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GetSteamInventory ****************************

// ********** Begin Class UOrionSteamInventory Function GrantPromoItems ****************************
struct Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics
{
	struct OrionSteamInventory_eventGrantPromoItems_Parms
	{
		FSteamInventoryResult Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Grant all potential one-time promotional items to the current user.\n\x09 *\n\x09 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs.\n\x09 * One of the primary scenarios for this call is to grant an item to users who also own a specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\n\x09 * Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\n\x09 * This version will grant all items that have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client.\n\x09 * For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09 *\n\x09 * @param\x09Result\x09\x09Returns a new inventory result handle.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grant all potential one-time promotional items to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs.\nOne of the primary scenarios for this call is to grant an item to users who also own a specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client.\nFor example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param       Result          Returns a new inventory result handle." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventGrantPromoItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
void Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventGrantPromoItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventGrantPromoItems_Parms), &Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "GrantPromoItems", Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::OrionSteamInventory_eventGrantPromoItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::OrionSteamInventory_eventGrantPromoItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execGrantPromoItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::GrantPromoItems(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function GrantPromoItems ******************************

// ********** Begin Class UOrionSteamInventory Function LoadItemDefinitions ************************
struct Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics
{
	struct OrionSteamInventory_eventLoadItemDefinitions_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Triggers an asynchronous load and refresh of item definitions.\n\x09 *\n\x09 * Item definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties.\n\x09 * Some of these properties are required to display items on the Steam community web site. Other properties can be defined by applications.\n\x09 * There is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers an asynchronous load and refresh of item definitions.\n\nItem definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties.\nSome of these properties are required to display items on the Steam community web site. Other properties can be defined by applications.\nThere is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventLoadItemDefinitions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventLoadItemDefinitions_Parms), &Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "LoadItemDefinitions", Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::OrionSteamInventory_eventLoadItemDefinitions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::OrionSteamInventory_eventLoadItemDefinitions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execLoadItemDefinitions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::LoadItemDefinitions();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function LoadItemDefinitions **************************

// ********** Begin Class UOrionSteamInventory Function RemoveProperty *****************************
struct Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics
{
	struct OrionSteamInventory_eventRemoveProperty_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a dynamic property for the given item.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param\x09ItemID\x09\x09\x09ID of the item being modified.\n\x09 * @param\x09PropertyName\x09The dynamic property being removed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a dynamic property for the given item.\n\n@param       Handle                  The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param       ItemID                  ID of the item being modified.\n@param       PropertyName    The dynamic property being removed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventRemoveProperty_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3607744349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventRemoveProperty_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventRemoveProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventRemoveProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventRemoveProperty_Parms), &Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "RemoveProperty", Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::OrionSteamInventory_eventRemoveProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::OrionSteamInventory_eventRemoveProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execRemoveProperty)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::RemoveProperty(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function RemoveProperty *******************************

// ********** Begin Class UOrionSteamInventory Function RequestEligiblePromoItemDefinitionsIDs *****
struct Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics
{
	struct OrionSteamInventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\x09 *\n\x09 * These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\n\x09 * After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\x09 *\n\x09 * @param\x09SteamID\x09\x09The Steam ID of the user to request the eligible promo items for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\nThese are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\nAfter calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\n@param       SteamID         The Steam ID of the user to request the eligible promo items for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 146140876
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "RequestEligiblePromoItemDefinitionsIDs", Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::OrionSteamInventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::OrionSteamInventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execRequestEligiblePromoItemDefinitionsIDs)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestEligiblePromoItemDefinitionsIDs(FOnRequestEligiblePromoItemDefinitionsIDs(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function RequestEligiblePromoItemDefinitionsIDs *******

// ********** Begin Class UOrionSteamInventory Function RequestPrices ******************************
struct Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics
{
	struct OrionSteamInventory_eventRequestPrices_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Request prices for all item definitions that can be purchased in the user's local currency.\n\x09 *\n\x09 * A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\n\x09 * After that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request prices for all item definitions that can be purchased in the user's local currency.\n\nA SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\nAfter that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventRequestPrices_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1350591132
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "RequestPrices", Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::OrionSteamInventory_eventRequestPrices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::OrionSteamInventory_eventRequestPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_RequestPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_RequestPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execRequestPrices)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestPrices(FOnSteamInventoryRequestPricesResult(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function RequestPrices ********************************

// ********** Begin Class UOrionSteamInventory Function SerializeResult ****************************
struct Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics
{
	struct OrionSteamInventory_eventSerializeResult_Parms
	{
		FSteamInventoryResult Handle;
		TArray<uint8> Buffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\n\x09 *\n\x09 * A result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players.\n\x09 * This is a secure way of preventing hackers from lying about posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer.\n\x09 * The size of a serialized result depends on the number items which are being serialized. When securely transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\n\x09 * Results have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\n\x09 * If this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The inventory result handle to serialize.\n\x09 * @param\x09""Buffer\x09\x09The buffer that the serialized result will be copied into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\n\nA result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players.\nThis is a secure way of preventing hackers from lying about posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer.\nThe size of a serialized result depends on the number items which are being serialized. When securely transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\nResults have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\nIf this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\n@param       Handle          The inventory result handle to serialize.\n@param       Buffer          The buffer that the serialized result will be copied into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSerializeResult_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSerializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventSerializeResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventSerializeResult_Parms), &Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "SerializeResult", Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::OrionSteamInventory_eventSerializeResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::OrionSteamInventory_eventSerializeResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_SerializeResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_SerializeResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execSerializeResult)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::SerializeResult(Z_Param_Handle,Z_Param_Out_Buffer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function SerializeResult ******************************

// ********** Begin Class UOrionSteamInventory Function SetPropertyBool ****************************
struct Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics
{
	struct OrionSteamInventory_eventSetPropertyBool_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		bool bValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09 * @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09 * @param\x09""bValue\x09\x09\x09\x09The string value being set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param       Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param       ItemID                          ID of the item being modified.\n@param       PropertyName            The dynamic property being added or updated.\n@param       bValue                          The string value being set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyBool_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3607744349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyBool_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyBool_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventSetPropertyBool_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventSetPropertyBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "SetPropertyBool", Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::OrionSteamInventory_eventSetPropertyBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::OrionSteamInventory_eventSetPropertyBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execSetPropertyBool)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::SetPropertyBool(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_bValue);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function SetPropertyBool ******************************

// ********** Begin Class UOrionSteamInventory Function SetPropertyFloat ***************************
struct Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics
{
	struct OrionSteamInventory_eventSetPropertyFloat_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09 * @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09 * @param\x09Value\x09\x09\x09\x09The string value being set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param       Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param       ItemID                          ID of the item being modified.\n@param       PropertyName            The dynamic property being added or updated.\n@param       Value                           The string value being set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyFloat_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3607744349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyFloat_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyFloat_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventSetPropertyFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventSetPropertyFloat_Parms), &Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "SetPropertyFloat", Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::OrionSteamInventory_eventSetPropertyFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::OrionSteamInventory_eventSetPropertyFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execSetPropertyFloat)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::SetPropertyFloat(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function SetPropertyFloat *****************************

// ********** Begin Class UOrionSteamInventory Function SetPropertyInt *****************************
struct Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics
{
	struct OrionSteamInventory_eventSetPropertyInt_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09 * @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09 * @param\x09Value\x09\x09\x09\x09The string value being set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param       Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param       ItemID                          ID of the item being modified.\n@param       PropertyName            The dynamic property being added or updated.\n@param       Value                           The string value being set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyInt_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3607744349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyInt_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyInt_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventSetPropertyInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventSetPropertyInt_Parms), &Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "SetPropertyInt", Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::OrionSteamInventory_eventSetPropertyInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::OrionSteamInventory_eventSetPropertyInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execSetPropertyInt)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::SetPropertyInt(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function SetPropertyInt *******************************

// ********** Begin Class UOrionSteamInventory Function SetPropertyString **************************
struct Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics
{
	struct OrionSteamInventory_eventSetPropertyString_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09 * @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09 * @param\x09Value\x09\x09\x09\x09The string value being set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param       Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param       ItemID                          ID of the item being modified.\n@param       PropertyName            The dynamic property being added or updated.\n@param       Value                           The string value being set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyString_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3607744349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyString_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyString_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSetPropertyString_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventSetPropertyString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventSetPropertyString_Parms), &Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "SetPropertyString", Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::OrionSteamInventory_eventSetPropertyString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::OrionSteamInventory_eventSetPropertyString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execSetPropertyString)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::SetPropertyString(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function SetPropertyString ****************************

// ********** Begin Class UOrionSteamInventory Function StartPurchase ******************************
struct Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics
{
	struct OrionSteamInventory_eventStartPurchase_Parms
	{
		FScriptDelegate Callback;
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\x09 *\n\x09 * The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\n\x09 * If the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\n\x09 * If the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\n\x09 * NOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\x09 *\n\x09 * @param\x09ItemDefs\x09\x09The array of item definition ids that the user wants to purchase.\n\x09 * @param\x09Quantity\x09\x09The array of quantities of each item definition that the user wants to purchase.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\nThe user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\nIf the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\nIf the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\nNOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\n@param       ItemDefs                The array of item definition ids that the user wants to purchase.\n@param       Quantity                The array of quantities of each item definition that the user wants to purchase." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventStartPurchase_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3102576711
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventStartPurchase_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefs_MetaData), NewProp_ItemDefs_MetaData) }; // 2225347947
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventStartPurchase_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "StartPurchase", Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::OrionSteamInventory_eventStartPurchase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::OrionSteamInventory_eventStartPurchase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_StartPurchase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_StartPurchase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execStartPurchase)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_GET_TARRAY(int32,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPurchase(FOnSteamInventoryStartPurchaseResult(Z_Param_Out_Callback),Z_Param_ItemDefs,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function StartPurchase ********************************

// ********** Begin Class UOrionSteamInventory Function StartUpdateProperties **********************
struct Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics
{
	struct OrionSteamInventory_eventStartUpdateProperties_Parms
	{
		FSteamInventoryUpdateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts a transaction request to update dynamic properties on items for the current user.\n\x09 *\n\x09 * This call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\n\x09 * After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\n\x09 * A SteamInventoryResultReady_t callback will be fired with the results of the operation.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts a transaction request to update dynamic properties on items for the current user.\n\nThis call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\nAfter calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\nA SteamInventoryResultReady_t callback will be fired with the results of the operation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventStartUpdateProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3607744349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "StartUpdateProperties", Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::OrionSteamInventory_eventStartUpdateProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::OrionSteamInventory_eventStartUpdateProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execStartUpdateProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamInventoryUpdateHandle*)Z_Param__Result=UOrionSteamInventory::StartUpdateProperties();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function StartUpdateProperties ************************

// ********** Begin Class UOrionSteamInventory Function SubmitUpdateProperties *********************
struct Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics
{
	struct OrionSteamInventory_eventSubmitUpdateProperties_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamInventoryResult ResultHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts a transaction request to update dynamic properties on items for the current user.\n\x09 *\n\x09 * This call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\n\x09 * After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\n\x09 * A SteamInventoryResultReady_t callback will be fired with the results of the operation.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts a transaction request to update dynamic properties on items for the current user.\n\nThis call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\nAfter calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\nA SteamInventoryResultReady_t callback will be fired with the results of the operation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSubmitUpdateProperties_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3607744349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventSubmitUpdateProperties_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
void Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventSubmitUpdateProperties_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventSubmitUpdateProperties_Parms), &Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::NewProp_ResultHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "SubmitUpdateProperties", Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::OrionSteamInventory_eventSubmitUpdateProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::OrionSteamInventory_eventSubmitUpdateProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execSubmitUpdateProperties)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::SubmitUpdateProperties(Z_Param_Handle,Z_Param_Out_ResultHandle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function SubmitUpdateProperties ***********************

// ********** Begin Class UOrionSteamInventory Function TransferItemQuantity ***********************
struct Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics
{
	struct OrionSteamInventory_eventTransferItemQuantity_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemInstanceID ItemIDSource;
		int32 Quantity;
		FSteamItemInstanceID ItemIDDest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Transfer items between stacks within a user's inventory.\n\x09 *\n\x09 * This can be used to stack, split, and moving items. The source and destination items must have the same itemdef id.\n\x09 * To move items onto a destination stack specify the source, the quantity to move, and the destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\n\x09 *\n\x09 * @param\x09ItemIDSource\x09\x09The source item to transfer.\n\x09 * @param\x09Quantity\x09\x09\x09The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n\x09 * @param\x09ItemIDDest\x09\x09\x09The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transfer items between stacks within a user's inventory.\n\nThis can be used to stack, split, and moving items. The source and destination items must have the same itemdef id.\nTo move items onto a destination stack specify the source, the quantity to move, and the destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\n\n@param       ItemIDSource            The source item to transfer.\n@param       Quantity                        The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n@param       ItemIDDest                      The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIDSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIDDest;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventTransferItemQuantity_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_ItemIDSource = { "ItemIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventTransferItemQuantity_Parms, ItemIDSource), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventTransferItemQuantity_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_ItemIDDest = { "ItemIDDest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventTransferItemQuantity_Parms, ItemIDDest), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
void Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventTransferItemQuantity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventTransferItemQuantity_Parms), &Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_ItemIDSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_ItemIDDest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "TransferItemQuantity", Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::OrionSteamInventory_eventTransferItemQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::OrionSteamInventory_eventTransferItemQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execTransferItemQuantity)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIDSource);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIDDest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::TransferItemQuantity(Z_Param_Out_Result,Z_Param_ItemIDSource,Z_Param_Quantity,Z_Param_ItemIDDest);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function TransferItemQuantity *************************

// ********** Begin Class UOrionSteamInventory Function TriggerItemDrop ****************************
struct Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics
{
	struct OrionSteamInventory_eventTriggerItemDrop_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemDef ListDefinition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Trigger an item drop if the user has played a long enough period of time.\n\x09 *\n\x09 * This period can be customized in two places:\n\x09 * At the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\n\x09 * In an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\n\x09 * Only item definitions which are marked as \"playtime item generators\" can be spawned.\n\x09 * Typically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur.\n\x09 * The granularity of the playtime generator settings is in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client.\n\x09 * The Steam servers will perform playtime accounting to prevent too-frequent drops. The servers will also manage adding the item to the players inventory.\n\x09 *\n\x09 * @param\x09ListDefinition\x09\x09This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger an item drop if the user has played a long enough period of time.\n\nThis period can be customized in two places:\nAt the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\nIn an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\nOnly item definitions which are marked as \"playtime item generators\" can be spawned.\nTypically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur.\nThe granularity of the playtime generator settings is in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client.\nThe Steam servers will perform playtime accounting to prevent too-frequent drops. The servers will also manage adding the item to the players inventory.\n\n@param       ListDefinition          This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ListDefinition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventTriggerItemDrop_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 1014350698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::NewProp_ListDefinition = { "ListDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInventory_eventTriggerItemDrop_Parms, ListDefinition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2225347947
void Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInventory_eventTriggerItemDrop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInventory_eventTriggerItemDrop_Parms), &Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::NewProp_ListDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInventory, nullptr, "TriggerItemDrop", Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::OrionSteamInventory_eventTriggerItemDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::OrionSteamInventory_eventTriggerItemDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInventory::execTriggerItemDrop)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemDef,Z_Param_ListDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInventory::TriggerItemDrop(Z_Param_Out_Result,Z_Param_ListDefinition);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInventory Function TriggerItemDrop ******************************

// ********** Begin Class UOrionSteamInventory *****************************************************
void UOrionSteamInventory::StaticRegisterNativesUOrionSteamInventory()
{
	UClass* Class = UOrionSteamInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPromoItem", &UOrionSteamInventory::execAddPromoItem },
		{ "AddPromoItems", &UOrionSteamInventory::execAddPromoItems },
		{ "CheckResultSteamID", &UOrionSteamInventory::execCheckResultSteamID },
		{ "ConsumeItem", &UOrionSteamInventory::execConsumeItem },
		{ "DeserializeResult", &UOrionSteamInventory::execDeserializeResult },
		{ "DestroyResult", &UOrionSteamInventory::execDestroyResult },
		{ "ExchangeItems", &UOrionSteamInventory::execExchangeItems },
		{ "GenerateItems", &UOrionSteamInventory::execGenerateItems },
		{ "GetAllItems", &UOrionSteamInventory::execGetAllItems },
		{ "GetEligiblePromoItemDefinitionIDs", &UOrionSteamInventory::execGetEligiblePromoItemDefinitionIDs },
		{ "GetItemDefinitionIDs", &UOrionSteamInventory::execGetItemDefinitionIDs },
		{ "GetItemDefinitionProperty", &UOrionSteamInventory::execGetItemDefinitionProperty },
		{ "GetItemPrice", &UOrionSteamInventory::execGetItemPrice },
		{ "GetItemsByID", &UOrionSteamInventory::execGetItemsByID },
		{ "GetItemsWithPrices", &UOrionSteamInventory::execGetItemsWithPrices },
		{ "GetNumItemsWithPrices", &UOrionSteamInventory::execGetNumItemsWithPrices },
		{ "GetResultItemProperty", &UOrionSteamInventory::execGetResultItemProperty },
		{ "GetResultItems", &UOrionSteamInventory::execGetResultItems },
		{ "GetResultStatus", &UOrionSteamInventory::execGetResultStatus },
		{ "GetResultTimestamp", &UOrionSteamInventory::execGetResultTimestamp },
		{ "GetSteamInventory", &UOrionSteamInventory::execGetSteamInventory },
		{ "GrantPromoItems", &UOrionSteamInventory::execGrantPromoItems },
		{ "LoadItemDefinitions", &UOrionSteamInventory::execLoadItemDefinitions },
		{ "RemoveProperty", &UOrionSteamInventory::execRemoveProperty },
		{ "RequestEligiblePromoItemDefinitionsIDs", &UOrionSteamInventory::execRequestEligiblePromoItemDefinitionsIDs },
		{ "RequestPrices", &UOrionSteamInventory::execRequestPrices },
		{ "SerializeResult", &UOrionSteamInventory::execSerializeResult },
		{ "SetPropertyBool", &UOrionSteamInventory::execSetPropertyBool },
		{ "SetPropertyFloat", &UOrionSteamInventory::execSetPropertyFloat },
		{ "SetPropertyInt", &UOrionSteamInventory::execSetPropertyInt },
		{ "SetPropertyString", &UOrionSteamInventory::execSetPropertyString },
		{ "StartPurchase", &UOrionSteamInventory::execStartPurchase },
		{ "StartUpdateProperties", &UOrionSteamInventory::execStartUpdateProperties },
		{ "SubmitUpdateProperties", &UOrionSteamInventory::execSubmitUpdateProperties },
		{ "TransferItemQuantity", &UOrionSteamInventory::execTransferItemQuantity },
		{ "TriggerItemDrop", &UOrionSteamInventory::execTriggerItemDrop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamInventory;
UClass* UOrionSteamInventory::GetPrivateStaticClass()
{
	using TClass = UOrionSteamInventory;
	if (!Z_Registration_Info_UClass_UOrionSteamInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamInventory"),
			Z_Registration_Info_UClass_UOrionSteamInventory.InnerSingleton,
			StaticRegisterNativesUOrionSteamInventory,
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
	return Z_Registration_Info_UClass_UOrionSteamInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamInventory_NoRegister()
{
	return UOrionSteamInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamInventory/SteamInventory.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryResultReady_MetaData[] = {
		{ "Category", "OrionSteam|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryDefinitionUpdate_MetaData[] = {
		{ "Category", "OrionSteam|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryFullUpdate_MetaData[] = {
		{ "Category", "OrionSteam|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryStartPurchaseResult_MetaData[] = {
		{ "Category", "OrionSteam|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryRequestPricesResultDelegate_MetaData[] = {
		{ "Category", "OrionSteam|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData[] = {
		{ "Category", "OrionSteam|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryResultReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryDefinitionUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryFullUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryStartPurchaseResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryRequestPricesResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryEligiblePromoItemDefIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamInventory_AddPromoItem, "AddPromoItem" }, // 2514686402
		{ &Z_Construct_UFunction_UOrionSteamInventory_AddPromoItems, "AddPromoItems" }, // 2924079672
		{ &Z_Construct_UFunction_UOrionSteamInventory_CheckResultSteamID, "CheckResultSteamID" }, // 2079592976
		{ &Z_Construct_UFunction_UOrionSteamInventory_ConsumeItem, "ConsumeItem" }, // 1613801899
		{ &Z_Construct_UFunction_UOrionSteamInventory_DeserializeResult, "DeserializeResult" }, // 3229059865
		{ &Z_Construct_UFunction_UOrionSteamInventory_DestroyResult, "DestroyResult" }, // 324525129
		{ &Z_Construct_UFunction_UOrionSteamInventory_ExchangeItems, "ExchangeItems" }, // 1014390
		{ &Z_Construct_UFunction_UOrionSteamInventory_GenerateItems, "GenerateItems" }, // 3448355865
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetAllItems, "GetAllItems" }, // 460255684
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetEligiblePromoItemDefinitionIDs, "GetEligiblePromoItemDefinitionIDs" }, // 3433181403
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionIDs, "GetItemDefinitionIDs" }, // 4059865957
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetItemDefinitionProperty, "GetItemDefinitionProperty" }, // 3222774714
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetItemPrice, "GetItemPrice" }, // 919720845
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetItemsByID, "GetItemsByID" }, // 3234998205
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetItemsWithPrices, "GetItemsWithPrices" }, // 1695788979
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetNumItemsWithPrices, "GetNumItemsWithPrices" }, // 4125007176
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetResultItemProperty, "GetResultItemProperty" }, // 479262308
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetResultItems, "GetResultItems" }, // 1704279851
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetResultStatus, "GetResultStatus" }, // 2714631173
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetResultTimestamp, "GetResultTimestamp" }, // 4287658334
		{ &Z_Construct_UFunction_UOrionSteamInventory_GetSteamInventory, "GetSteamInventory" }, // 1577442426
		{ &Z_Construct_UFunction_UOrionSteamInventory_GrantPromoItems, "GrantPromoItems" }, // 1845974898
		{ &Z_Construct_UFunction_UOrionSteamInventory_LoadItemDefinitions, "LoadItemDefinitions" }, // 635189189
		{ &Z_Construct_UFunction_UOrionSteamInventory_RemoveProperty, "RemoveProperty" }, // 1107112504
		{ &Z_Construct_UFunction_UOrionSteamInventory_RequestEligiblePromoItemDefinitionsIDs, "RequestEligiblePromoItemDefinitionsIDs" }, // 3831820721
		{ &Z_Construct_UFunction_UOrionSteamInventory_RequestPrices, "RequestPrices" }, // 527940312
		{ &Z_Construct_UFunction_UOrionSteamInventory_SerializeResult, "SerializeResult" }, // 1494719066
		{ &Z_Construct_UFunction_UOrionSteamInventory_SetPropertyBool, "SetPropertyBool" }, // 3149969793
		{ &Z_Construct_UFunction_UOrionSteamInventory_SetPropertyFloat, "SetPropertyFloat" }, // 3486054486
		{ &Z_Construct_UFunction_UOrionSteamInventory_SetPropertyInt, "SetPropertyInt" }, // 2668296385
		{ &Z_Construct_UFunction_UOrionSteamInventory_SetPropertyString, "SetPropertyString" }, // 255693895
		{ &Z_Construct_UFunction_UOrionSteamInventory_StartPurchase, "StartPurchase" }, // 512818645
		{ &Z_Construct_UFunction_UOrionSteamInventory_StartUpdateProperties, "StartUpdateProperties" }, // 1797885308
		{ &Z_Construct_UFunction_UOrionSteamInventory_SubmitUpdateProperties, "SubmitUpdateProperties" }, // 420092799
		{ &Z_Construct_UFunction_UOrionSteamInventory_TransferItemQuantity, "TransferItemQuantity" }, // 2770270724
		{ &Z_Construct_UFunction_UOrionSteamInventory_TriggerItemDrop, "TriggerItemDrop" }, // 1309777844
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryResultReady = { "SteamInventoryResultReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamInventory, SteamInventoryResultReady), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryResultReady_MetaData), NewProp_SteamInventoryResultReady_MetaData) }; // 3292259680
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryDefinitionUpdate = { "SteamInventoryDefinitionUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamInventory, SteamInventoryDefinitionUpdate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryDefinitionUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryDefinitionUpdate_MetaData), NewProp_SteamInventoryDefinitionUpdate_MetaData) }; // 1839083096
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryFullUpdate = { "SteamInventoryFullUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamInventory, SteamInventoryFullUpdate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryFullUpdate_MetaData), NewProp_SteamInventoryFullUpdate_MetaData) }; // 408131739
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryStartPurchaseResult = { "SteamInventoryStartPurchaseResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamInventory, SteamInventoryStartPurchaseResult), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryStartPurchaseResult_MetaData), NewProp_SteamInventoryStartPurchaseResult_MetaData) }; // 2546501092
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate = { "SteamInventoryRequestPricesResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamInventory, SteamInventoryRequestPricesResultDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryRequestPricesResultDelegate_MetaData), NewProp_SteamInventoryRequestPricesResultDelegate_MetaData) }; // 2931603096
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs = { "SteamInventoryEligiblePromoItemDefIDs", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamInventory, SteamInventoryEligiblePromoItemDefIDs), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData), NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData) }; // 2407958387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryResultReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryDefinitionUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryFullUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryStartPurchaseResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamInventory_Statics::ClassParams = {
	&UOrionSteamInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamInventory_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamInventory()
{
	if (!Z_Registration_Info_UClass_UOrionSteamInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamInventory.OuterSingleton, Z_Construct_UClass_UOrionSteamInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamInventory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamInventory);
// ********** End Class UOrionSteamInventory *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventory_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamInventory, UOrionSteamInventory::StaticClass, TEXT("UOrionSteamInventory"), &Z_Registration_Info_UClass_UOrionSteamInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamInventory), 3377275955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventory_h__Script_OrionSteamSDKAPI_2413413826(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventory_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventory_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
