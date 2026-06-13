// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamApps/OrionSteamApps.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamApps() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamApps();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamApps_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamBetaBranchFlags();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDLCInstalled__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnNewUrlLaunchParametersDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnTimedTrialStatusDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamApps Function BGetDLCDataByIndex ******************************
struct Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics
{
	struct OrionSteamApps_eventBGetDLCDataByIndex_Parms
	{
		int32 DLC;
		int32 AppID;
		bool bAvailable;
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns metadata for a DLC by index.\n\x09 *\n\x09 * @param\x09""DLC\x09\x09\x09\x09\x09index of the DLC to get between 0 and GetDLCCount.\n\x09 * @param\x09""AppID\x09\x09\x09\x09Returns the App ID of the DLC.\n\x09 * @param\x09""bAvailable\x09\x09\x09Returns whether the DLC is currently available.\n\x09 * @param\x09Name\x09\x09\x09\x09Returns the name of the DLC by copying it into this buffer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns metadata for a DLC by index.\n\n@param       DLC                                     index of the DLC to get between 0 and GetDLCCount.\n@param       AppID                           Returns the App ID of the DLC.\n@param       bAvailable                      Returns whether the DLC is currently available.\n@param       Name                            Returns the name of the DLC by copying it into this buffer." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DLC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_bAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvailable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_DLC = { "DLC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventBGetDLCDataByIndex_Parms, DLC), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventBGetDLCDataByIndex_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit(void* Obj)
{
	((OrionSteamApps_eventBGetDLCDataByIndex_Parms*)Obj)->bAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable = { "bAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventBGetDLCDataByIndex_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBGetDLCDataByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_DLC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BGetDLCDataByIndex", Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::OrionSteamApps_eventBGetDLCDataByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::OrionSteamApps_eventBGetDLCDataByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBGetDLCDataByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DLC);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
	P_GET_UBOOL_REF(Z_Param_Out_bAvailable);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BGetDLCDataByIndex(Z_Param_DLC,Z_Param_Out_AppID,Z_Param_Out_bAvailable,Z_Param_Out_Name);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BGetDLCDataByIndex ********************************

// ********** Begin Class UOrionSteamApps Function BIsAppInstalled *********************************
struct Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics
{
	struct OrionSteamApps_eventBIsAppInstalled_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if a specific app is installed.\n\x09 *\n\x09 * The app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\n\x09 * This only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\x09 *\n\x09 * @param\x09""AppID\x09The App ID of the application to check.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if a specific app is installed.\n\nThe app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\nThis only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\n@param       AppID   The App ID of the application to check." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventBIsAppInstalled_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBIsAppInstalled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBIsAppInstalled_Parms), &Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BIsAppInstalled", Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::OrionSteamApps_eventBIsAppInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::OrionSteamApps_eventBIsAppInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBIsAppInstalled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BIsAppInstalled(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BIsAppInstalled ***********************************

// ********** Begin Class UOrionSteamApps Function BIsCybercafe ************************************
struct Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics
{
	struct OrionSteamApps_eventBIsCybercafe_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether the current App ID is for Cyber Cafes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the current App ID is for Cyber Cafes." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBIsCybercafe_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBIsCybercafe_Parms), &Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BIsCybercafe", Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::OrionSteamApps_eventBIsCybercafe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::OrionSteamApps_eventBIsCybercafe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBIsCybercafe)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BIsCybercafe();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BIsCybercafe **************************************

// ********** Begin Class UOrionSteamApps Function BIsDlcInstalled *********************************
struct Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics
{
	struct OrionSteamApps_eventBIsDlcInstalled_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the user owns a specific DLC and if the DLC is installed\n\x09 *\n\x09 * @param\x09""AppID\x09The App ID of the DLC to check.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user owns a specific DLC and if the DLC is installed\n\n@param       AppID   The App ID of the DLC to check." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventBIsDlcInstalled_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBIsDlcInstalled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBIsDlcInstalled_Parms), &Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BIsDlcInstalled", Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::OrionSteamApps_eventBIsDlcInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::OrionSteamApps_eventBIsDlcInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBIsDlcInstalled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BIsDlcInstalled(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BIsDlcInstalled ***********************************

// ********** Begin Class UOrionSteamApps Function BIsLowViolence **********************************
struct Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics
{
	struct OrionSteamApps_eventBIsLowViolence_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the license owned by the user provides low violence depots.\n\x09 *\n\x09 * Low violence depots are useful for copies sold in countries that have content restrictions.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the license owned by the user provides low violence depots.\n\nLow violence depots are useful for copies sold in countries that have content restrictions." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBIsLowViolence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBIsLowViolence_Parms), &Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BIsLowViolence", Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::OrionSteamApps_eventBIsLowViolence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::OrionSteamApps_eventBIsLowViolence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBIsLowViolence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BIsLowViolence();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BIsLowViolence ************************************

// ********** Begin Class UOrionSteamApps Function BIsSubscribed ***********************************
struct Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics
{
	struct OrionSteamApps_eventBIsSubscribed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the active user is subscribed to the current App ID.\n\x09 *\n\x09 * This will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the active user is subscribed to the current App ID.\n\nThis will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBIsSubscribed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBIsSubscribed_Parms), &Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BIsSubscribed", Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::OrionSteamApps_eventBIsSubscribed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::OrionSteamApps_eventBIsSubscribed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBIsSubscribed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BIsSubscribed();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BIsSubscribed *************************************

// ********** Begin Class UOrionSteamApps Function BIsSubscribedApp ********************************
struct Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics
{
	struct OrionSteamApps_eventBIsSubscribedApp_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the active user is subscribed to a specified AppId.\n\x09 *\n\x09 * Only use this if you need to check ownership of another game related to yours, a demo for example.\n\x09 *\n\x09 * @param\x09""AppID\x09The App ID to check.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the active user is subscribed to a specified AppId.\n\nOnly use this if you need to check ownership of another game related to yours, a demo for example.\n\n@param       AppID   The App ID to check." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventBIsSubscribedApp_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBIsSubscribedApp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBIsSubscribedApp_Parms), &Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BIsSubscribedApp", Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::OrionSteamApps_eventBIsSubscribedApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::OrionSteamApps_eventBIsSubscribedApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBIsSubscribedApp)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BIsSubscribedApp(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BIsSubscribedApp **********************************

// ********** Begin Class UOrionSteamApps Function BIsSubscribedFromFamilySharing ******************
struct Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics
{
	struct OrionSteamApps_eventBIsSubscribedFromFamilySharing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\x09 *\n\x09 * If you need to determine the steamID of the permanent owner of the license, use GetAppOwner.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\nIf you need to determine the steamID of the permanent owner of the license, use GetAppOwner." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBIsSubscribedFromFamilySharing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBIsSubscribedFromFamilySharing_Parms), &Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BIsSubscribedFromFamilySharing", Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::OrionSteamApps_eventBIsSubscribedFromFamilySharing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::OrionSteamApps_eventBIsSubscribedFromFamilySharing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBIsSubscribedFromFamilySharing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BIsSubscribedFromFamilySharing();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BIsSubscribedFromFamilySharing ********************

// ********** Begin Class UOrionSteamApps Function BIsSubscribedFromFreeWeekend ********************
struct Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics
{
	struct OrionSteamApps_eventBIsSubscribedFromFreeWeekend_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the user is subscribed to the current App ID through a free weekend.\n\x09 *\n\x09 * Before using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user is subscribed to the current App ID through a free weekend.\n\nBefore using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBIsSubscribedFromFreeWeekend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBIsSubscribedFromFreeWeekend_Parms), &Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BIsSubscribedFromFreeWeekend", Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::OrionSteamApps_eventBIsSubscribedFromFreeWeekend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::OrionSteamApps_eventBIsSubscribedFromFreeWeekend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBIsSubscribedFromFreeWeekend)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BIsSubscribedFromFreeWeekend();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BIsSubscribedFromFreeWeekend **********************

// ********** Begin Class UOrionSteamApps Function BIsTimedTrial ***********************************
struct Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics
{
	struct OrionSteamApps_eventBIsTimedTrial_Parms
	{
		int32 SecondsAllowed;
		int32 SecondsPlayed;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if game is a timed trial with limited playtime\n\x09 *\n\x09 * Notes: Only available in UE4.27+\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if game is a timed trial with limited playtime\n\nNotes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsAllowed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsPlayed;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::NewProp_SecondsAllowed = { "SecondsAllowed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventBIsTimedTrial_Parms, SecondsAllowed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::NewProp_SecondsPlayed = { "SecondsPlayed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventBIsTimedTrial_Parms, SecondsPlayed), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBIsTimedTrial_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBIsTimedTrial_Parms), &Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::NewProp_SecondsAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::NewProp_SecondsPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BIsTimedTrial", Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::OrionSteamApps_eventBIsTimedTrial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::OrionSteamApps_eventBIsTimedTrial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBIsTimedTrial)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SecondsAllowed);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SecondsPlayed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BIsTimedTrial(Z_Param_Out_SecondsAllowed,Z_Param_Out_SecondsPlayed);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BIsTimedTrial *************************************

// ********** Begin Class UOrionSteamApps Function BIsVACBanned ************************************
struct Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics
{
	struct OrionSteamApps_eventBIsVACBanned_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the user has a VAC ban on their account\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user has a VAC ban on their account" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventBIsVACBanned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventBIsVACBanned_Parms), &Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "BIsVACBanned", Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::OrionSteamApps_eventBIsVACBanned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::OrionSteamApps_eventBIsVACBanned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execBIsVACBanned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::BIsVACBanned();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function BIsVACBanned **************************************

// ********** Begin Class UOrionSteamApps Function GetAppBuildId ***********************************
struct Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics
{
	struct OrionSteamApps_eventGetAppBuildId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the buildid of this app, may change at any time based on backend updates to the game.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the buildid of this app, may change at any time based on backend updates to the game." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetAppBuildId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetAppBuildId", Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::OrionSteamApps_eventGetAppBuildId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::OrionSteamApps_eventGetAppBuildId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetAppBuildId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamApps::GetAppBuildId();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetAppBuildId *************************************

// ********** Begin Class UOrionSteamApps Function GetAppInstallDir ********************************
struct Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics
{
	struct OrionSteamApps_eventGetAppInstallDir_Parms
	{
		int32 AppID;
		FString Folder;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the install folder for a specific AppID.\n\x09 *\n\x09 * This works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\x09 *\n\x09 * @param\x09""AppID\x09\x09\x09The App ID to get the install dir for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the install folder for a specific AppID.\n\nThis works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\n@param       AppID                   The App ID to get the install dir for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetAppInstallDir_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetAppInstallDir_Parms, Folder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::NewProp_Folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetAppInstallDir", Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::OrionSteamApps_eventGetAppInstallDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::OrionSteamApps_eventGetAppInstallDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetAppInstallDir)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Folder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamApps::GetAppInstallDir(Z_Param_AppID,Z_Param_Out_Folder);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetAppInstallDir **********************************

// ********** Begin Class UOrionSteamApps Function GetAppOwner *************************************
struct Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics
{
	struct OrionSteamApps_eventGetAppOwner_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetAppOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetAppOwner", Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::OrionSteamApps_eventGetAppOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::OrionSteamApps_eventGetAppOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetAppOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetAppOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetAppOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamApps::GetAppOwner();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetAppOwner ***************************************

// ********** Begin Class UOrionSteamApps Function GetAvailableGameLanguages ***********************
struct Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics
{
	struct OrionSteamApps_eventGetAvailableGameLanguages_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a comma separated list of the languages the current app supports.\n\x09 *\n\x09 * For the full list of languages that may be returned see Localization and Languages.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a comma separated list of the languages the current app supports.\n\nFor the full list of languages that may be returned see Localization and Languages." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetAvailableGameLanguages_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetAvailableGameLanguages", Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::OrionSteamApps_eventGetAvailableGameLanguages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::OrionSteamApps_eventGetAvailableGameLanguages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetAvailableGameLanguages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamApps::GetAvailableGameLanguages();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetAvailableGameLanguages *************************

// ********** Begin Class UOrionSteamApps Function GetBetaInfo *************************************
struct Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics
{
	struct OrionSteamApps_eventGetBetaInfo_Parms
	{
		int32 BetaIndex;
		TArray<ESteamBetaBranchFlags> Flags;
		int32 BuildId;
		FString BetaName;
		FString Description;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Return beta branch details, name, description, current BuildID and state flags (EBetaBranchFlags)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Return beta branch details, name, description, current BuildID and state flags (EBetaBranchFlags)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BetaIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BetaName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_BetaIndex = { "BetaIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetBetaInfo_Parms, BetaIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamBetaBranchFlags, METADATA_PARAMS(0, nullptr) }; // 1495249813
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetBetaInfo_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1495249813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetBetaInfo_Parms, BuildId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_BetaName = { "BetaName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetBetaInfo_Parms, BetaName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetBetaInfo_Parms, Description), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventGetBetaInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventGetBetaInfo_Parms), &Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_BetaIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_BuildId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_BetaName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetBetaInfo", Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::OrionSteamApps_eventGetBetaInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::OrionSteamApps_eventGetBetaInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetBetaInfo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BetaIndex);
	P_GET_TARRAY_REF(ESteamBetaBranchFlags,Z_Param_Out_Flags);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BuildId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_BetaName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::GetBetaInfo(Z_Param_BetaIndex,Z_Param_Out_Flags,Z_Param_Out_BuildId,Z_Param_Out_BetaName,Z_Param_Out_Description);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetBetaInfo ***************************************

// ********** Begin Class UOrionSteamApps Function GetCurrentBetaName ******************************
struct Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics
{
	struct OrionSteamApps_eventGetCurrentBetaName_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\x09 *\n\x09 * @param\x09Name\x09The buffer where the beta name will be copied in to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\n@param       Name    The buffer where the beta name will be copied in to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetCurrentBetaName_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventGetCurrentBetaName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventGetCurrentBetaName_Parms), &Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetCurrentBetaName", Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::OrionSteamApps_eventGetCurrentBetaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::OrionSteamApps_eventGetCurrentBetaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetCurrentBetaName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::GetCurrentBetaName(Z_Param_Out_Name);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetCurrentBetaName ********************************

// ********** Begin Class UOrionSteamApps Function GetCurrentGameLanguage **************************
struct Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics
{
	struct OrionSteamApps_eventGetCurrentGameLanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current language that the user has set.\n\x09 *\n\x09 * This falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\n\x09 * For the full list of languages see Supported Languages.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current language that the user has set.\n\nThis falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\nFor the full list of languages see Supported Languages." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetCurrentGameLanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetCurrentGameLanguage", Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::OrionSteamApps_eventGetCurrentGameLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::OrionSteamApps_eventGetCurrentGameLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetCurrentGameLanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamApps::GetCurrentGameLanguage();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetCurrentGameLanguage ****************************

// ********** Begin Class UOrionSteamApps Function GetDLCCount *************************************
struct Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics
{
	struct OrionSteamApps_eventGetDLCCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of DLC pieces for the current app.\n\x09 *\n\x09 * This is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of DLC pieces for the current app.\n\nThis is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetDLCCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetDLCCount", Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::OrionSteamApps_eventGetDLCCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::OrionSteamApps_eventGetDLCCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetDLCCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetDLCCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetDLCCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamApps::GetDLCCount();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetDLCCount ***************************************

// ********** Begin Class UOrionSteamApps Function GetDlcDownloadProgress **************************
struct Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics
{
	struct OrionSteamApps_eventGetDlcDownloadProgress_Parms
	{
		int32 AppID;
		int32 BytesDownloaded;
		int32 BytesTotal;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the download progress for optional DLC.\n\x09 *\n\x09 * @param\x09""AppID\x09\x09\x09\x09The App ID of the DLC to monitor\n\x09 * @param\x09""BytesDownloaded\x09\x09Returns the number of bytes downloaded.\n\x09 * @param\x09""BytesTotal\x09\x09\x09Returns the total size of the download in bytes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the download progress for optional DLC.\n\n@param       AppID                           The App ID of the DLC to monitor\n@param       BytesDownloaded         Returns the number of bytes downloaded.\n@param       BytesTotal                      Returns the total size of the download in bytes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetDlcDownloadProgress_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetDlcDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetDlcDownloadProgress_Parms, BytesTotal), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventGetDlcDownloadProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventGetDlcDownloadProgress_Parms), &Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetDlcDownloadProgress", Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::OrionSteamApps_eventGetDlcDownloadProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::OrionSteamApps_eventGetDlcDownloadProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetDlcDownloadProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesTotal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::GetDlcDownloadProgress(Z_Param_AppID,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetDlcDownloadProgress ****************************

// ********** Begin Class UOrionSteamApps Function GetEarliestPurchaseUnixTime *********************
struct Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics
{
	struct OrionSteamApps_eventGetEarliestPurchaseUnixTime_Parms
	{
		int32 AppID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\x09 *\n\x09 * This is useful for rewarding users based on their initial purchase date.\n\x09 *\n\x09 * @param\x09""AppID\x09The App ID to get the purchase time for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\nThis is useful for rewarding users based on their initial purchase date.\n\n@param       AppID   The App ID to get the purchase time for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetEarliestPurchaseUnixTime_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetEarliestPurchaseUnixTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetEarliestPurchaseUnixTime", Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::OrionSteamApps_eventGetEarliestPurchaseUnixTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::OrionSteamApps_eventGetEarliestPurchaseUnixTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetEarliestPurchaseUnixTime)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamApps::GetEarliestPurchaseUnixTime(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetEarliestPurchaseUnixTime ***********************

// ********** Begin Class UOrionSteamApps Function GetFileDetails **********************************
struct Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics
{
	struct OrionSteamApps_eventGetFileDetails_Parms
	{
		FScriptDelegate Callback;
		FString FileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\x09 *\n\x09 * Currently provides:\n\x09 * The file size in bytes.\n\x09 * The file's SHA1 hash.\n\x09 * The file's flags.\n\x09 *\n\x09 * @param\x09""FileName\x09The absolute path and name to the file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\nCurrently provides:\nThe file size in bytes.\nThe file's SHA1 hash.\nThe file's flags.\n\n@param       FileName        The absolute path and name to the file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2822192807
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetFileDetails_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetFileDetails", Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::OrionSteamApps_eventGetFileDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::OrionSteamApps_eventGetFileDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetFileDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetFileDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetFileDetails)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFileDetails(FOnFileDetailsResult(Z_Param_Out_Callback),Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetFileDetails ************************************

// ********** Begin Class UOrionSteamApps Function GetInstalledDepots ******************************
struct Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics
{
	struct OrionSteamApps_eventGetInstalledDepots_Parms
	{
		int32 AppID;
		int32 MaxDepots;
		TArray<int32> Depots;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a list of all installed depots for a given App ID in mount order.\n\x09 *\n\x09 * @param\x09""AppID\x09\x09\x09The App to list the depots for.\n\x09 * @param\x09MaxDepots\x09\x09The maximum number of depots to obtain, typically the size of pvecDepots.\n\x09 * @param\x09""Depots\x09\x09\x09""A preallocated array that will be filled with the list of depots.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a list of all installed depots for a given App ID in mount order.\n\n@param       AppID                   The App to list the depots for.\n@param       MaxDepots               The maximum number of depots to obtain, typically the size of pvecDepots.\n@param       Depots                  A preallocated array that will be filled with the list of depots." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Depots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Depots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetInstalledDepots_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::NewProp_MaxDepots = { "MaxDepots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetInstalledDepots_Parms, MaxDepots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::NewProp_Depots_Inner = { "Depots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::NewProp_Depots = { "Depots", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetInstalledDepots_Parms, Depots), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetInstalledDepots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::NewProp_MaxDepots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::NewProp_Depots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::NewProp_Depots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetInstalledDepots", Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::OrionSteamApps_eventGetInstalledDepots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::OrionSteamApps_eventGetInstalledDepots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetInstalledDepots)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxDepots);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Depots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamApps::GetInstalledDepots(Z_Param_AppID,Z_Param_MaxDepots,Z_Param_Out_Depots);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetInstalledDepots ********************************

// ********** Begin Class UOrionSteamApps Function GetLaunchCommandLine ****************************
struct Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics
{
	struct OrionSteamApps_eventGetLaunchCommandLine_Parms
	{
		FString CommandLine;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/.\n\x09 *\n\x09 * This method is preferable to launching with a command line via the operating system, which can be a security risk.\n\x09 * In order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the Installation > General page on your app.\n\x09 *\n\x09 * @param\x09""CommandLine\x09\x09\x09The string buffer that the command line will be copied into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/.\n\nThis method is preferable to launching with a command line via the operating system, which can be a security risk.\nIn order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the Installation > General page on your app.\n\n@param       CommandLine                     The string buffer that the command line will be copied into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommandLine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::NewProp_CommandLine = { "CommandLine", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetLaunchCommandLine_Parms, CommandLine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetLaunchCommandLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::NewProp_CommandLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetLaunchCommandLine", Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::OrionSteamApps_eventGetLaunchCommandLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::OrionSteamApps_eventGetLaunchCommandLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetLaunchCommandLine)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CommandLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamApps::GetLaunchCommandLine(Z_Param_Out_CommandLine);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetLaunchCommandLine ******************************

// ********** Begin Class UOrionSteamApps Function GetLaunchQueryParam *****************************
struct Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics
{
	struct OrionSteamApps_eventGetLaunchQueryParam_Parms
	{
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\x09 *\n\x09 * Parameter names starting with the character '@' are reserved for internal use and will always return an empty string.\n\x09 * Parameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\x09 *\n\x09 * @param\x09Key\x09\x09The launch key to test for. Ex: param1\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\nParameter names starting with the character '@' are reserved for internal use and will always return an empty string.\nParameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\n@param       Key             The launch key to test for. Ex: param1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetLaunchQueryParam_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetLaunchQueryParam_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetLaunchQueryParam", Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::OrionSteamApps_eventGetLaunchQueryParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::OrionSteamApps_eventGetLaunchQueryParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetLaunchQueryParam)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamApps::GetLaunchQueryParam(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetLaunchQueryParam *******************************

// ********** Begin Class UOrionSteamApps Function GetNumBetas *************************************
struct Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics
{
	struct OrionSteamApps_eventGetNumBetas_Parms
	{
		int32 Available;
		int32 Private;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Returns total number of known app beta branches (including default \"public\" branch )\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Returns total number of known app beta branches (including default \"public\" branch )" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Available;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Private;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::NewProp_Available = { "Available", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetNumBetas_Parms, Available), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::NewProp_Private = { "Private", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetNumBetas_Parms, Private), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetNumBetas_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::NewProp_Available,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::NewProp_Private,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetNumBetas", Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::OrionSteamApps_eventGetNumBetas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::OrionSteamApps_eventGetNumBetas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetNumBetas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetNumBetas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetNumBetas)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Available);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Private);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamApps::GetNumBetas(Z_Param_Out_Available,Z_Param_Out_Private);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetNumBetas ***************************************

// ********** Begin Class UOrionSteamApps Function GetSteamApps ************************************
struct Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics
{
	struct OrionSteamApps_eventGetSteamApps_Parms
	{
		UOrionSteamApps* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventGetSteamApps_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamApps_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "GetSteamApps", Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::OrionSteamApps_eventGetSteamApps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::OrionSteamApps_eventGetSteamApps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_GetSteamApps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_GetSteamApps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execGetSteamApps)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamApps**)Z_Param__Result=UOrionSteamApps::GetSteamApps();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function GetSteamApps **************************************

// ********** Begin Class UOrionSteamApps Function InstallDLC **************************************
struct Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics
{
	struct OrionSteamApps_eventInstallDLC_Parms
	{
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Allows you to install an optional DLC.\n\x09 *\n\x09 * @param\x09""AppID\x09The DLC you want to install.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to install an optional DLC.\n\n@param       AppID   The DLC you want to install." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventInstallDLC_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "InstallDLC", Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::OrionSteamApps_eventInstallDLC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::OrionSteamApps_eventInstallDLC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_InstallDLC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_InstallDLC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execInstallDLC)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamApps::InstallDLC(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function InstallDLC ****************************************

// ********** Begin Class UOrionSteamApps Function MarkContentCorrupt ******************************
struct Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics
{
	struct OrionSteamApps_eventMarkContentCorrupt_Parms
	{
		bool bMissingFilesOnly;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Allows you to force verify game content on next launch.\n\x09 *\n\x09 * If you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),\n\x09 * you can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\x09 *\n\x09 * @param\x09""bMissingFilesOnly\x09Only scan for missing files, don't verify the checksum of each file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to force verify game content on next launch.\n\nIf you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),\nyou can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\n@param       bMissingFilesOnly       Only scan for missing files, don't verify the checksum of each file." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bMissingFilesOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissingFilesOnly;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit(void* Obj)
{
	((OrionSteamApps_eventMarkContentCorrupt_Parms*)Obj)->bMissingFilesOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly = { "bMissingFilesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventMarkContentCorrupt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "MarkContentCorrupt", Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::OrionSteamApps_eventMarkContentCorrupt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::OrionSteamApps_eventMarkContentCorrupt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execMarkContentCorrupt)
{
	P_GET_UBOOL(Z_Param_bMissingFilesOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::MarkContentCorrupt(Z_Param_bMissingFilesOnly);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function MarkContentCorrupt ********************************

// ********** Begin Class UOrionSteamApps Function SetActiveBeta ***********************************
struct Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics
{
	struct OrionSteamApps_eventSetActiveBeta_Parms
	{
		FString BetaName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Select this beta branch for this app as active, might need the game to restart so Steam can update to that branch\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Select this beta branch for this app as active, might need the game to restart so Steam can update to that branch" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BetaName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::NewProp_BetaName = { "BetaName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventSetActiveBeta_Parms, BetaName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventSetActiveBeta_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventSetActiveBeta_Parms), &Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::NewProp_BetaName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "SetActiveBeta", Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::OrionSteamApps_eventSetActiveBeta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::OrionSteamApps_eventSetActiveBeta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execSetActiveBeta)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BetaName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::SetActiveBeta(Z_Param_BetaName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function SetActiveBeta *************************************

// ********** Begin Class UOrionSteamApps Function SetDlcContext ***********************************
struct Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics
{
	struct OrionSteamApps_eventSetDlcContext_Parms
	{
		int32 AppId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Set current DLC AppID being played (or 0 if none). Allows Steam to track usage of major DLC extensions\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Set current DLC AppID being played (or 0 if none). Allows Steam to track usage of major DLC extensions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventSetDlcContext_Parms, AppId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamApps_eventSetDlcContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamApps_eventSetDlcContext_Parms), &Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "SetDlcContext", Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::OrionSteamApps_eventSetDlcContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::OrionSteamApps_eventSetDlcContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_SetDlcContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_SetDlcContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execSetDlcContext)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamApps::SetDlcContext(Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function SetDlcContext *************************************

// ********** Begin Class UOrionSteamApps Function UninstallDLC ************************************
struct Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics
{
	struct OrionSteamApps_eventUninstallDLC_Parms
	{
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Allows you to uninstall an optional DLC.\n\x09 *\n\x09 * @param\x09""AppID\x09The DLC you want to uninstall.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to uninstall an optional DLC.\n\n@param       AppID   The DLC you want to uninstall." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamApps_eventUninstallDLC_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamApps, nullptr, "UninstallDLC", Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::OrionSteamApps_eventUninstallDLC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::OrionSteamApps_eventUninstallDLC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamApps_UninstallDLC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamApps_UninstallDLC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamApps::execUninstallDLC)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamApps::UninstallDLC(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamApps Function UninstallDLC **************************************

// ********** Begin Class UOrionSteamApps **********************************************************
void UOrionSteamApps::StaticRegisterNativesUOrionSteamApps()
{
	UClass* Class = UOrionSteamApps::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BGetDLCDataByIndex", &UOrionSteamApps::execBGetDLCDataByIndex },
		{ "BIsAppInstalled", &UOrionSteamApps::execBIsAppInstalled },
		{ "BIsCybercafe", &UOrionSteamApps::execBIsCybercafe },
		{ "BIsDlcInstalled", &UOrionSteamApps::execBIsDlcInstalled },
		{ "BIsLowViolence", &UOrionSteamApps::execBIsLowViolence },
		{ "BIsSubscribed", &UOrionSteamApps::execBIsSubscribed },
		{ "BIsSubscribedApp", &UOrionSteamApps::execBIsSubscribedApp },
		{ "BIsSubscribedFromFamilySharing", &UOrionSteamApps::execBIsSubscribedFromFamilySharing },
		{ "BIsSubscribedFromFreeWeekend", &UOrionSteamApps::execBIsSubscribedFromFreeWeekend },
		{ "BIsTimedTrial", &UOrionSteamApps::execBIsTimedTrial },
		{ "BIsVACBanned", &UOrionSteamApps::execBIsVACBanned },
		{ "GetAppBuildId", &UOrionSteamApps::execGetAppBuildId },
		{ "GetAppInstallDir", &UOrionSteamApps::execGetAppInstallDir },
		{ "GetAppOwner", &UOrionSteamApps::execGetAppOwner },
		{ "GetAvailableGameLanguages", &UOrionSteamApps::execGetAvailableGameLanguages },
		{ "GetBetaInfo", &UOrionSteamApps::execGetBetaInfo },
		{ "GetCurrentBetaName", &UOrionSteamApps::execGetCurrentBetaName },
		{ "GetCurrentGameLanguage", &UOrionSteamApps::execGetCurrentGameLanguage },
		{ "GetDLCCount", &UOrionSteamApps::execGetDLCCount },
		{ "GetDlcDownloadProgress", &UOrionSteamApps::execGetDlcDownloadProgress },
		{ "GetEarliestPurchaseUnixTime", &UOrionSteamApps::execGetEarliestPurchaseUnixTime },
		{ "GetFileDetails", &UOrionSteamApps::execGetFileDetails },
		{ "GetInstalledDepots", &UOrionSteamApps::execGetInstalledDepots },
		{ "GetLaunchCommandLine", &UOrionSteamApps::execGetLaunchCommandLine },
		{ "GetLaunchQueryParam", &UOrionSteamApps::execGetLaunchQueryParam },
		{ "GetNumBetas", &UOrionSteamApps::execGetNumBetas },
		{ "GetSteamApps", &UOrionSteamApps::execGetSteamApps },
		{ "InstallDLC", &UOrionSteamApps::execInstallDLC },
		{ "MarkContentCorrupt", &UOrionSteamApps::execMarkContentCorrupt },
		{ "SetActiveBeta", &UOrionSteamApps::execSetActiveBeta },
		{ "SetDlcContext", &UOrionSteamApps::execSetDlcContext },
		{ "UninstallDLC", &UOrionSteamApps::execUninstallDLC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamApps;
UClass* UOrionSteamApps::GetPrivateStaticClass()
{
	using TClass = UOrionSteamApps;
	if (!Z_Registration_Info_UClass_UOrionSteamApps.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamApps"),
			Z_Registration_Info_UClass_UOrionSteamApps.InnerSingleton,
			StaticRegisterNativesUOrionSteamApps,
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
	return Z_Registration_Info_UClass_UOrionSteamApps.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamApps_NoRegister()
{
	return UOrionSteamApps::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamApps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamApps/OrionSteamApps.h" },
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLCInstalled_MetaData[] = {
		{ "Category", "OrionSteam|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileDetailsResultDelegate_MetaData[] = {
		{ "Category", "OrionSteam|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewUrlLaunchParametersDelegate_MetaData[] = {
		{ "Category", "OrionSteam|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimedTrialStatusDelegate_MetaData[] = {
		{ "Category", "OrionSteam|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/OrionSteamApps.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DLCInstalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FileDetailsResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewUrlLaunchParametersDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TimedTrialStatusDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamApps_BGetDLCDataByIndex, "BGetDLCDataByIndex" }, // 2283646381
		{ &Z_Construct_UFunction_UOrionSteamApps_BIsAppInstalled, "BIsAppInstalled" }, // 2607320294
		{ &Z_Construct_UFunction_UOrionSteamApps_BIsCybercafe, "BIsCybercafe" }, // 1874909384
		{ &Z_Construct_UFunction_UOrionSteamApps_BIsDlcInstalled, "BIsDlcInstalled" }, // 511883758
		{ &Z_Construct_UFunction_UOrionSteamApps_BIsLowViolence, "BIsLowViolence" }, // 1488131636
		{ &Z_Construct_UFunction_UOrionSteamApps_BIsSubscribed, "BIsSubscribed" }, // 1403363336
		{ &Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedApp, "BIsSubscribedApp" }, // 3719504422
		{ &Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFamilySharing, "BIsSubscribedFromFamilySharing" }, // 360771578
		{ &Z_Construct_UFunction_UOrionSteamApps_BIsSubscribedFromFreeWeekend, "BIsSubscribedFromFreeWeekend" }, // 2532755316
		{ &Z_Construct_UFunction_UOrionSteamApps_BIsTimedTrial, "BIsTimedTrial" }, // 2901325166
		{ &Z_Construct_UFunction_UOrionSteamApps_BIsVACBanned, "BIsVACBanned" }, // 3950294826
		{ &Z_Construct_UFunction_UOrionSteamApps_GetAppBuildId, "GetAppBuildId" }, // 1793098485
		{ &Z_Construct_UFunction_UOrionSteamApps_GetAppInstallDir, "GetAppInstallDir" }, // 349346021
		{ &Z_Construct_UFunction_UOrionSteamApps_GetAppOwner, "GetAppOwner" }, // 478228340
		{ &Z_Construct_UFunction_UOrionSteamApps_GetAvailableGameLanguages, "GetAvailableGameLanguages" }, // 3179572081
		{ &Z_Construct_UFunction_UOrionSteamApps_GetBetaInfo, "GetBetaInfo" }, // 3533765141
		{ &Z_Construct_UFunction_UOrionSteamApps_GetCurrentBetaName, "GetCurrentBetaName" }, // 2643749830
		{ &Z_Construct_UFunction_UOrionSteamApps_GetCurrentGameLanguage, "GetCurrentGameLanguage" }, // 2704422004
		{ &Z_Construct_UFunction_UOrionSteamApps_GetDLCCount, "GetDLCCount" }, // 1286930239
		{ &Z_Construct_UFunction_UOrionSteamApps_GetDlcDownloadProgress, "GetDlcDownloadProgress" }, // 97844823
		{ &Z_Construct_UFunction_UOrionSteamApps_GetEarliestPurchaseUnixTime, "GetEarliestPurchaseUnixTime" }, // 54614228
		{ &Z_Construct_UFunction_UOrionSteamApps_GetFileDetails, "GetFileDetails" }, // 920667969
		{ &Z_Construct_UFunction_UOrionSteamApps_GetInstalledDepots, "GetInstalledDepots" }, // 2197931066
		{ &Z_Construct_UFunction_UOrionSteamApps_GetLaunchCommandLine, "GetLaunchCommandLine" }, // 33636354
		{ &Z_Construct_UFunction_UOrionSteamApps_GetLaunchQueryParam, "GetLaunchQueryParam" }, // 3663068710
		{ &Z_Construct_UFunction_UOrionSteamApps_GetNumBetas, "GetNumBetas" }, // 1620112751
		{ &Z_Construct_UFunction_UOrionSteamApps_GetSteamApps, "GetSteamApps" }, // 819436547
		{ &Z_Construct_UFunction_UOrionSteamApps_InstallDLC, "InstallDLC" }, // 1683814284
		{ &Z_Construct_UFunction_UOrionSteamApps_MarkContentCorrupt, "MarkContentCorrupt" }, // 1184439390
		{ &Z_Construct_UFunction_UOrionSteamApps_SetActiveBeta, "SetActiveBeta" }, // 3893765975
		{ &Z_Construct_UFunction_UOrionSteamApps_SetDlcContext, "SetDlcContext" }, // 3103781539
		{ &Z_Construct_UFunction_UOrionSteamApps_UninstallDLC, "UninstallDLC" }, // 3984711275
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamApps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamApps_Statics::NewProp_DLCInstalled = { "DLCInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamApps, DLCInstalled), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDLCInstalled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLCInstalled_MetaData), NewProp_DLCInstalled_MetaData) }; // 3373424554
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamApps_Statics::NewProp_FileDetailsResultDelegate = { "FileDetailsResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamApps, FileDetailsResultDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFileDetailsResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileDetailsResultDelegate_MetaData), NewProp_FileDetailsResultDelegate_MetaData) }; // 3176807348
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamApps_Statics::NewProp_NewUrlLaunchParametersDelegate = { "NewUrlLaunchParametersDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamApps, NewUrlLaunchParametersDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnNewUrlLaunchParametersDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewUrlLaunchParametersDelegate_MetaData), NewProp_NewUrlLaunchParametersDelegate_MetaData) }; // 1057182238
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamApps_Statics::NewProp_TimedTrialStatusDelegate = { "TimedTrialStatusDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamApps, TimedTrialStatusDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnTimedTrialStatusDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimedTrialStatusDelegate_MetaData), NewProp_TimedTrialStatusDelegate_MetaData) }; // 2603455641
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamApps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamApps_Statics::NewProp_DLCInstalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamApps_Statics::NewProp_FileDetailsResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamApps_Statics::NewProp_NewUrlLaunchParametersDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamApps_Statics::NewProp_TimedTrialStatusDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamApps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamApps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamApps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamApps_Statics::ClassParams = {
	&UOrionSteamApps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamApps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamApps_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamApps_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamApps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamApps()
{
	if (!Z_Registration_Info_UClass_UOrionSteamApps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamApps.OuterSingleton, Z_Construct_UClass_UOrionSteamApps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamApps.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamApps);
// ********** End Class UOrionSteamApps ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamApps, UOrionSteamApps::StaticClass, TEXT("UOrionSteamApps"), &Z_Registration_Info_UClass_UOrionSteamApps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamApps), 1000347317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h__Script_OrionSteamSDKAPI_352856594(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
