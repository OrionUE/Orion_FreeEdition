// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamInventory/SteamInventoryTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamInventoryTypes() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags();
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
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryFullUpdate();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResultReady();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOrionSteamItemFlags ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamItemFlags;
static UEnum* EOrionSteamItemFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamItemFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamItemFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamItemFlags"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamItemFlags.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamItemFlags>()
{
	return EOrionSteamItemFlags_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "EConsumed.Name", "EConsumed" },
		{ "ENoTrade.Name", "ENoTrade" },
		{ "ERemoved.Name", "ERemoved" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENoTrade", (int64)ENoTrade },
		{ "ERemoved", (int64)ERemoved },
		{ "EConsumed", (int64)EConsumed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamItemFlags",
	"EOrionSteamItemFlags",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamItemFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamItemFlags.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamItemFlags.InnerSingleton;
}
// ********** End Enum EOrionSteamItemFlags ********************************************************

// ********** Begin ScriptStruct FSteamItemInstanceID **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamItemInstanceID;
class UScriptStruct* FSteamItemInstanceID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamItemInstanceID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamItemInstanceID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemInstanceID, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamItemInstanceID"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamItemInstanceID.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "HasNativeBreak", "/Script/OrionSteam.OrionSteamUtilities:BreakSteamItemInstanceID" },
		{ "HasNativeMake", "/Script/OrionSteam.OrionSteamUtilities:MakeSteamItemInstanceID" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemInstanceID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamItemInstanceID",
	nullptr,
	0,
	sizeof(FSteamItemInstanceID),
	alignof(FSteamItemInstanceID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamItemInstanceID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamItemInstanceID.InnerSingleton, Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamItemInstanceID.InnerSingleton;
}
// ********** End ScriptStruct FSteamItemInstanceID ************************************************

// ********** Begin ScriptStruct FSteamItemDef *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamItemDef;
class UScriptStruct* FSteamItemDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamItemDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamItemDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemDef, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamItemDef"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamItemDef.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamItemDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamItemDef_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamItemDef, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamItemDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDef_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamItemDef",
	Z_Construct_UScriptStruct_FSteamItemDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDef_Statics::PropPointers),
	sizeof(FSteamItemDef),
	alignof(FSteamItemDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamItemDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamItemDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamItemDef.InnerSingleton, Z_Construct_UScriptStruct_FSteamItemDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamItemDef.InnerSingleton;
}
// ********** End ScriptStruct FSteamItemDef *******************************************************

// ********** Begin ScriptStruct FSteamItemDetails *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamItemDetails;
class UScriptStruct* FSteamItemDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamItemDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamItemDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemDetails, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamItemDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamItemDetails.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamItemDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_InstanceID = { "InstanceID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamItemDetails, InstanceID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceID_MetaData), NewProp_InstanceID_MetaData) }; // 605370625
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamItemDetails, Definition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) }; // 2225347947
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamItemDetails, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamItemFlags, METADATA_PARAMS(0, nullptr) }; // 2362266587
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamItemDetails, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 2362266587
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_InstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamItemDetails",
	Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers),
	sizeof(FSteamItemDetails),
	alignof(FSteamItemDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamItemDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamItemDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamItemDetails.InnerSingleton, Z_Construct_UScriptStruct_FSteamItemDetails_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamItemDetails.InnerSingleton;
}
// ********** End ScriptStruct FSteamItemDetails ***************************************************

// ********** Begin ScriptStruct FSteamInventoryResult *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamInventoryResult;
class UScriptStruct* FSteamInventoryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamInventoryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryResult, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamInventoryResult"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamInventoryResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryResult, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamInventoryResult",
	Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers),
	sizeof(FSteamInventoryResult),
	alignof(FSteamInventoryResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamInventoryResult.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryResult.InnerSingleton;
}
// ********** End ScriptStruct FSteamInventoryResult ***********************************************

// ********** Begin ScriptStruct FSteamInventoryEligiblePromoItemDefIDs ****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs;
class UScriptStruct* FSteamInventoryEligiblePromoItemDefIDs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamInventoryEligiblePromoItemDefIDs"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumEligiblePromoItemDefs_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumEligiblePromoItemDefs;
	static void NewProp_bCachedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryEligiblePromoItemDefIDs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryEligiblePromoItemDefIDs, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryEligiblePromoItemDefIDs, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_NumEligiblePromoItemDefs = { "NumEligiblePromoItemDefs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryEligiblePromoItemDefIDs, NumEligiblePromoItemDefs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumEligiblePromoItemDefs_MetaData), NewProp_NumEligiblePromoItemDefs_MetaData) };
void Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData_SetBit(void* Obj)
{
	((FSteamInventoryEligiblePromoItemDefIDs*)Obj)->bCachedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData = { "bCachedData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSteamInventoryEligiblePromoItemDefIDs), &Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedData_MetaData), NewProp_bCachedData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_NumEligiblePromoItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamInventoryEligiblePromoItemDefIDs",
	Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers),
	sizeof(FSteamInventoryEligiblePromoItemDefIDs),
	alignof(FSteamInventoryEligiblePromoItemDefIDs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs.InnerSingleton;
}
// ********** End ScriptStruct FSteamInventoryEligiblePromoItemDefIDs ******************************

// ********** Begin ScriptStruct FSteamInventoryResultReady ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamInventoryResultReady;
class UScriptStruct* FSteamInventoryResultReady::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryResultReady.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamInventoryResultReady.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryResultReady, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamInventoryResultReady"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryResultReady.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryResultReady>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryResultReady, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1014350698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryResultReady, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamInventoryResultReady",
	Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::PropPointers),
	sizeof(FSteamInventoryResultReady),
	alignof(FSteamInventoryResultReady),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResultReady()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryResultReady.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamInventoryResultReady.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryResultReady.InnerSingleton;
}
// ********** End ScriptStruct FSteamInventoryResultReady ******************************************

// ********** Begin ScriptStruct FSteamInventoryFullUpdate *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamInventoryFullUpdate;
class UScriptStruct* FSteamInventoryFullUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryFullUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamInventoryFullUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamInventoryFullUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryFullUpdate.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryFullUpdate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryFullUpdate, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1014350698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamInventoryFullUpdate",
	Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers),
	sizeof(FSteamInventoryFullUpdate),
	alignof(FSteamInventoryFullUpdate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryFullUpdate()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryFullUpdate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamInventoryFullUpdate.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryFullUpdate.InnerSingleton;
}
// ********** End ScriptStruct FSteamInventoryFullUpdate *******************************************

// ********** Begin ScriptStruct FSteamInventoryRequestPricesResult ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamInventoryRequestPricesResult;
class UScriptStruct* FSteamInventoryRequestPricesResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryRequestPricesResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamInventoryRequestPricesResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamInventoryRequestPricesResult"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryRequestPricesResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryRequestPricesResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryRequestPricesResult, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryRequestPricesResult, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Currency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamInventoryRequestPricesResult",
	Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers),
	sizeof(FSteamInventoryRequestPricesResult),
	alignof(FSteamInventoryRequestPricesResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryRequestPricesResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamInventoryRequestPricesResult.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryRequestPricesResult.InnerSingleton;
}
// ********** End ScriptStruct FSteamInventoryRequestPricesResult **********************************

// ********** Begin ScriptStruct FSteamInventoryStartPurchaseResult ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamInventoryStartPurchaseResult;
class UScriptStruct* FSteamInventoryStartPurchaseResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryStartPurchaseResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamInventoryStartPurchaseResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamInventoryStartPurchaseResult"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryStartPurchaseResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransactionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryStartPurchaseResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryStartPurchaseResult, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryStartPurchaseResult, OrderId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderId_MetaData), NewProp_OrderId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryStartPurchaseResult, TransactionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransactionId_MetaData), NewProp_TransactionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_TransactionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamInventoryStartPurchaseResult",
	Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers),
	sizeof(FSteamInventoryStartPurchaseResult),
	alignof(FSteamInventoryStartPurchaseResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamInventoryStartPurchaseResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamInventoryStartPurchaseResult.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamInventoryStartPurchaseResult.InnerSingleton;
}
// ********** End ScriptStruct FSteamInventoryStartPurchaseResult **********************************

// ********** Begin Delegate FOnSteamInventoryResultReady ******************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryResultReady_Parms
	{
		FSteamInventoryResultReady Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamInventoryResultReady_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryResultReady, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2792157865
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamInventoryResultReady__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryResultReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryResultReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryResultReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryResultReady_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryResultReady, FSteamInventoryResultReady const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryResultReady_Parms
	{
		FSteamInventoryResultReady Data;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamInventoryResultReady_Parms Parms;
	Parms.Data=Data;
	OnSteamInventoryResultReady.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamInventoryResultReady ********************************************

// ********** Begin Delegate FOnSteamInventoryFullUpdate *******************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryFullUpdate_Parms
	{
		FSteamInventoryFullUpdate Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamInventoryFullUpdate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryFullUpdate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3532088158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamInventoryFullUpdate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryFullUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryFullUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryFullUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryFullUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryFullUpdate, FSteamInventoryFullUpdate const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryFullUpdate_Parms
	{
		FSteamInventoryFullUpdate Data;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamInventoryFullUpdate_Parms Parms;
	Parms.Data=Data;
	OnSteamInventoryFullUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamInventoryFullUpdate *********************************************

// ********** Begin Delegate FOnSteamInventoryStartPurchaseResultDelegate **************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResultDelegate_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2972716367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryStartPurchaseResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultDelegate, FSteamInventoryStartPurchaseResult const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResultDelegate_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResultDelegate_Parms Parms;
	Parms.Data=Data;
	OnSteamInventoryStartPurchaseResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamInventoryStartPurchaseResultDelegate ****************************

// ********** Begin Delegate FOnSteamInventoryRequestPricesResultDelegate **************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResultDelegate_Parms
	{
		FSteamInventoryRequestPricesResult Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2174400510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamInventoryRequestPricesResultDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryRequestPricesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultDelegate, FSteamInventoryRequestPricesResult const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResultDelegate_Parms
	{
		FSteamInventoryRequestPricesResult Data;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResultDelegate_Parms Parms;
	Parms.Data=Data;
	OnSteamInventoryRequestPricesResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamInventoryRequestPricesResultDelegate ****************************

// ********** Begin Delegate FOnSteamInventoryEligiblePromoItemDefIDs ******************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2020789835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryEligiblePromoItemDefIDs_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryEligiblePromoItemDefIDs, FSteamInventoryEligiblePromoItemDefIDs const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms Parms;
	Parms.Data=Data;
	OnSteamInventoryEligiblePromoItemDefIDs.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamInventoryEligiblePromoItemDefIDs ********************************

// ********** Begin Delegate FOnSteamInventoryDefinitionUpdate *************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryDefinitionUpdate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryDefinitionUpdate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamInventoryDefinitionUpdate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryDefinitionUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryDefinitionUpdate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryDefinitionUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryDefinitionUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryDefinitionUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryDefinitionUpdate)
{
	OnSteamInventoryDefinitionUpdate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnSteamInventoryDefinitionUpdate ***************************************

// ********** Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDs *****************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2020789835
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestEligiblePromoItemDefinitionsIDs_DelegateWrapper(const FScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDs, FSteamInventoryEligiblePromoItemDefIDs const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestEligiblePromoItemDefinitionsIDs.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestEligiblePromoItemDefinitionsIDs *******************************

// ********** Begin Delegate FOnSteamInventoryRequestPricesResult **********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResult_Parms
	{
		FSteamInventoryRequestPricesResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResult_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2174400510
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResult_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResult_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamInventoryRequestPricesResult__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryRequestPricesResult_DelegateWrapper(const FScriptDelegate& OnSteamInventoryRequestPricesResult, FSteamInventoryRequestPricesResult const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResult_Parms
	{
		FSteamInventoryRequestPricesResult Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamInventoryRequestPricesResult_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamInventoryRequestPricesResult.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamInventoryRequestPricesResult ************************************

// ********** Begin Delegate FOnSteamInventoryStartPurchaseResult **********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResult_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResult_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2972716367
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResult_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResult_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamInventoryStartPurchaseResult__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryStartPurchaseResult_DelegateWrapper(const FScriptDelegate& OnSteamInventoryStartPurchaseResult, FSteamInventoryStartPurchaseResult const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResult_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamInventoryStartPurchaseResult_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamInventoryStartPurchaseResult.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamInventoryStartPurchaseResult ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOrionSteamItemFlags_StaticEnum, TEXT("EOrionSteamItemFlags"), &Z_Registration_Info_UEnum_EOrionSteamItemFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2362266587U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamItemInstanceID::StaticStruct, Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::NewStructOps, TEXT("SteamItemInstanceID"), &Z_Registration_Info_UScriptStruct_FSteamItemInstanceID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamItemInstanceID), 605370625U) },
		{ FSteamItemDef::StaticStruct, Z_Construct_UScriptStruct_FSteamItemDef_Statics::NewStructOps, TEXT("SteamItemDef"), &Z_Registration_Info_UScriptStruct_FSteamItemDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamItemDef), 2225347947U) },
		{ FSteamItemDetails::StaticStruct, Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewStructOps, TEXT("SteamItemDetails"), &Z_Registration_Info_UScriptStruct_FSteamItemDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamItemDetails), 1463735765U) },
		{ FSteamInventoryResult::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewStructOps, TEXT("SteamInventoryResult"), &Z_Registration_Info_UScriptStruct_FSteamInventoryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryResult), 1014350698U) },
		{ FSteamInventoryEligiblePromoItemDefIDs::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewStructOps, TEXT("SteamInventoryEligiblePromoItemDefIDs"), &Z_Registration_Info_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryEligiblePromoItemDefIDs), 2020789835U) },
		{ FSteamInventoryResultReady::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewStructOps, TEXT("SteamInventoryResultReady"), &Z_Registration_Info_UScriptStruct_FSteamInventoryResultReady, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryResultReady), 2792157865U) },
		{ FSteamInventoryFullUpdate::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewStructOps, TEXT("SteamInventoryFullUpdate"), &Z_Registration_Info_UScriptStruct_FSteamInventoryFullUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryFullUpdate), 3532088158U) },
		{ FSteamInventoryRequestPricesResult::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewStructOps, TEXT("SteamInventoryRequestPricesResult"), &Z_Registration_Info_UScriptStruct_FSteamInventoryRequestPricesResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryRequestPricesResult), 2174400510U) },
		{ FSteamInventoryStartPurchaseResult::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewStructOps, TEXT("SteamInventoryStartPurchaseResult"), &Z_Registration_Info_UScriptStruct_FSteamInventoryStartPurchaseResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryStartPurchaseResult), 2972716367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h__Script_OrionSteamSDKAPI_393191111(TEXT("/Script/OrionSteamSDKAPI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
