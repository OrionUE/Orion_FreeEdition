// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamParentalSettings/SteamParentalSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamParentalSettings() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamParentalSettings();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamParentalSettings_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamParentalFeature();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamParentalSettings Function BIsAppBlocked ***********************
struct Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics
{
	struct OrionSteamParentalSettings_eventBIsAppBlocked_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|ParentalSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Is app blocked\n\x09 *\n\x09 * @param\x09""AppID\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is app blocked\n\n@param       AppID" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamParentalSettings_eventBIsAppBlocked_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamParentalSettings_eventBIsAppBlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamParentalSettings_eventBIsAppBlocked_Parms), &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamParentalSettings, nullptr, "BIsAppBlocked", Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::OrionSteamParentalSettings_eventBIsAppBlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::OrionSteamParentalSettings_eventBIsAppBlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamParentalSettings::execBIsAppBlocked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsAppBlocked(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamParentalSettings Function BIsAppBlocked *************************

// ********** Begin Class UOrionSteamParentalSettings Function BIsAppInBlockList *******************
struct Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics
{
	struct OrionSteamParentalSettings_eventBIsAppInBlockList_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|ParentalSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Is app blocked\n\x09 *\n\x09 * @param\x09""AppID\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is app blocked\n\n@param       AppID" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamParentalSettings_eventBIsAppInBlockList_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamParentalSettings_eventBIsAppInBlockList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamParentalSettings_eventBIsAppInBlockList_Parms), &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamParentalSettings, nullptr, "BIsAppInBlockList", Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::OrionSteamParentalSettings_eventBIsAppInBlockList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::OrionSteamParentalSettings_eventBIsAppInBlockList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamParentalSettings::execBIsAppInBlockList)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsAppInBlockList(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamParentalSettings Function BIsAppInBlockList *********************

// ********** Begin Class UOrionSteamParentalSettings Function BIsFeatureBlocked *******************
struct Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics
{
	struct OrionSteamParentalSettings_eventBIsFeatureBlocked_Parms
	{
		ESteamParentalFeature Feature;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|ParentalSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Is feature blocked\n\x09 *\n\x09 * @param\x09""Feature\x09\x09""feature\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is feature blocked\n\n@param       Feature         feature" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Feature;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamParentalSettings_eventBIsFeatureBlocked_Parms, Feature), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamParentalFeature, METADATA_PARAMS(0, nullptr) }; // 3326934806
void Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamParentalSettings_eventBIsFeatureBlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamParentalSettings_eventBIsFeatureBlocked_Parms), &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamParentalSettings, nullptr, "BIsFeatureBlocked", Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::OrionSteamParentalSettings_eventBIsFeatureBlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::OrionSteamParentalSettings_eventBIsFeatureBlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamParentalSettings::execBIsFeatureBlocked)
{
	P_GET_ENUM(ESteamParentalFeature,Z_Param_Feature);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsFeatureBlocked(ESteamParentalFeature(Z_Param_Feature));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamParentalSettings Function BIsFeatureBlocked *********************

// ********** Begin Class UOrionSteamParentalSettings Function BIsFeatureInBlockList ***************
struct Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics
{
	struct OrionSteamParentalSettings_eventBIsFeatureInBlockList_Parms
	{
		ESteamParentalFeature Feature;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|ParentalSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Is feature blocked\n\x09 *\n\x09 * @param\x09""Feature\x09\x09""feature\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is feature blocked\n\n@param       Feature         feature" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Feature;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamParentalSettings_eventBIsFeatureInBlockList_Parms, Feature), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamParentalFeature, METADATA_PARAMS(0, nullptr) }; // 3326934806
void Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamParentalSettings_eventBIsFeatureInBlockList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamParentalSettings_eventBIsFeatureInBlockList_Parms), &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamParentalSettings, nullptr, "BIsFeatureInBlockList", Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::OrionSteamParentalSettings_eventBIsFeatureInBlockList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::OrionSteamParentalSettings_eventBIsFeatureInBlockList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamParentalSettings::execBIsFeatureInBlockList)
{
	P_GET_ENUM(ESteamParentalFeature,Z_Param_Feature);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsFeatureInBlockList(ESteamParentalFeature(Z_Param_Feature));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamParentalSettings Function BIsFeatureInBlockList *****************

// ********** Begin Class UOrionSteamParentalSettings Function BIsParentalLockEnabled **************
struct Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics
{
	struct OrionSteamParentalSettings_eventBIsParentalLockEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|ParentalSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Is parental lock enabled\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is parental lock enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamParentalSettings_eventBIsParentalLockEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamParentalSettings_eventBIsParentalLockEnabled_Parms), &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamParentalSettings, nullptr, "BIsParentalLockEnabled", Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::OrionSteamParentalSettings_eventBIsParentalLockEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::OrionSteamParentalSettings_eventBIsParentalLockEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamParentalSettings::execBIsParentalLockEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsParentalLockEnabled();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamParentalSettings Function BIsParentalLockEnabled ****************

// ********** Begin Class UOrionSteamParentalSettings Function BIsParentalLockLocked ***************
struct Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics
{
	struct OrionSteamParentalSettings_eventBIsParentalLockLocked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|ParentalSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Is parental lock locked\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is parental lock locked" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamParentalSettings_eventBIsParentalLockLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamParentalSettings_eventBIsParentalLockLocked_Parms), &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamParentalSettings, nullptr, "BIsParentalLockLocked", Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::OrionSteamParentalSettings_eventBIsParentalLockLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::OrionSteamParentalSettings_eventBIsParentalLockLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamParentalSettings::execBIsParentalLockLocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsParentalLockLocked();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamParentalSettings Function BIsParentalLockLocked *****************

// ********** Begin Class UOrionSteamParentalSettings Function GetSteamParentalSettings ************
struct Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics
{
	struct OrionSteamParentalSettings_eventGetSteamParentalSettings_Parms
	{
		UOrionSteamParentalSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamParentalSettings_eventGetSteamParentalSettings_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamParentalSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamParentalSettings, nullptr, "GetSteamParentalSettings", Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::OrionSteamParentalSettings_eventGetSteamParentalSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::OrionSteamParentalSettings_eventGetSteamParentalSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamParentalSettings::execGetSteamParentalSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamParentalSettings**)Z_Param__Result=UOrionSteamParentalSettings::GetSteamParentalSettings();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamParentalSettings Function GetSteamParentalSettings **************

// ********** Begin Class UOrionSteamParentalSettings **********************************************
void UOrionSteamParentalSettings::StaticRegisterNativesUOrionSteamParentalSettings()
{
	UClass* Class = UOrionSteamParentalSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BIsAppBlocked", &UOrionSteamParentalSettings::execBIsAppBlocked },
		{ "BIsAppInBlockList", &UOrionSteamParentalSettings::execBIsAppInBlockList },
		{ "BIsFeatureBlocked", &UOrionSteamParentalSettings::execBIsFeatureBlocked },
		{ "BIsFeatureInBlockList", &UOrionSteamParentalSettings::execBIsFeatureInBlockList },
		{ "BIsParentalLockEnabled", &UOrionSteamParentalSettings::execBIsParentalLockEnabled },
		{ "BIsParentalLockLocked", &UOrionSteamParentalSettings::execBIsParentalLockLocked },
		{ "GetSteamParentalSettings", &UOrionSteamParentalSettings::execGetSteamParentalSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamParentalSettings;
UClass* UOrionSteamParentalSettings::GetPrivateStaticClass()
{
	using TClass = UOrionSteamParentalSettings;
	if (!Z_Registration_Info_UClass_UOrionSteamParentalSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamParentalSettings"),
			Z_Registration_Info_UClass_UOrionSteamParentalSettings.InnerSingleton,
			StaticRegisterNativesUOrionSteamParentalSettings,
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
	return Z_Registration_Info_UClass_UOrionSteamParentalSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamParentalSettings_NoRegister()
{
	return UOrionSteamParentalSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamParentalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamParentalSettings/SteamParentalSettings.h" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppBlocked, "BIsAppBlocked" }, // 2354167667
		{ &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsAppInBlockList, "BIsAppInBlockList" }, // 2045179175
		{ &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureBlocked, "BIsFeatureBlocked" }, // 1075084505
		{ &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsFeatureInBlockList, "BIsFeatureInBlockList" }, // 972592021
		{ &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockEnabled, "BIsParentalLockEnabled" }, // 1685829718
		{ &Z_Construct_UFunction_UOrionSteamParentalSettings_BIsParentalLockLocked, "BIsParentalLockLocked" }, // 2955601807
		{ &Z_Construct_UFunction_UOrionSteamParentalSettings_GetSteamParentalSettings, "GetSteamParentalSettings" }, // 2284113567
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamParentalSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamParentalSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamParentalSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamParentalSettings_Statics::ClassParams = {
	&UOrionSteamParentalSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamParentalSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamParentalSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamParentalSettings()
{
	if (!Z_Registration_Info_UClass_UOrionSteamParentalSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamParentalSettings.OuterSingleton, Z_Construct_UClass_UOrionSteamParentalSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamParentalSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamParentalSettings);
// ********** End Class UOrionSteamParentalSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamParentalSettings, UOrionSteamParentalSettings::StaticClass, TEXT("UOrionSteamParentalSettings"), &Z_Registration_Info_UClass_UOrionSteamParentalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamParentalSettings), 3902657815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h__Script_OrionSteamSDKAPI_848715659(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
