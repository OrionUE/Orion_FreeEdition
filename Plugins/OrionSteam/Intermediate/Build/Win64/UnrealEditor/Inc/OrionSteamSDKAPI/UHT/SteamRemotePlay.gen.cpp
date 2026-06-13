// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamRemotePlay/SteamRemotePlay.h"
#include "SteamRemotePlay/SteamRemotePlayTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamRemotePlay() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamRemotePlay();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamRemotePlay_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamDeviceFormFactor();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamRemotePlaySessionConnected__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamRemotePlaySessionDisconnected__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayCursorID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlayInput();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRemotePlaySessionID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamRemotePlay Function BEnableRemotePlayTogetherDirectInput ******
struct Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics
{
	struct OrionSteamRemotePlay_eventBEnableRemotePlayTogetherDirectInput_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Make mouse and keyboard input for Remote Play Together sessions available via GetInput() instead of being merged with local input\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make mouse and keyboard input for Remote Play Together sessions available via GetInput() instead of being merged with local input" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamRemotePlay_eventBEnableRemotePlayTogetherDirectInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamRemotePlay_eventBEnableRemotePlayTogetherDirectInput_Parms), &Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "BEnableRemotePlayTogetherDirectInput", Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::OrionSteamRemotePlay_eventBEnableRemotePlayTogetherDirectInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::OrionSteamRemotePlay_eventBEnableRemotePlayTogetherDirectInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execBEnableRemotePlayTogetherDirectInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BEnableRemotePlayTogetherDirectInput();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function BEnableRemotePlayTogetherDirectInput ********

// ********** Begin Class UOrionSteamRemotePlay Function BGetSessionClientResolution ***************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics
{
	struct OrionSteamRemotePlay_eventBGetSessionClientResolution_Parms
	{
		int32 SessionID;
		int32 ResolutionX;
		int32 ResolutionY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.\n\x09 *\n\x09 * @param\x09SessionID\x09\x09The session ID to get information about\n\x09 * @param\x09ResolutionX\x09\x09""A pointer to a variable to fill with the device resolution width\n\x09 * @param\x09ResolutionY\x09\x09""A pointer to a variable to fill with the device resolution height\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.\n\n@param       SessionID               The session ID to get information about\n@param       ResolutionX             A pointer to a variable to fill with the device resolution width\n@param       ResolutionY             A pointer to a variable to fill with the device resolution height" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventBGetSessionClientResolution_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventBGetSessionClientResolution_Parms, ResolutionX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventBGetSessionClientResolution_Parms, ResolutionY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamRemotePlay_eventBGetSessionClientResolution_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamRemotePlay_eventBGetSessionClientResolution_Parms), &Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "BGetSessionClientResolution", Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::OrionSteamRemotePlay_eventBGetSessionClientResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::OrionSteamRemotePlay_eventBGetSessionClientResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execBGetSessionClientResolution)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ResolutionX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ResolutionY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BGetSessionClientResolution(Z_Param_SessionID,Z_Param_Out_ResolutionX,Z_Param_Out_ResolutionY);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function BGetSessionClientResolution *****************

// ********** Begin Class UOrionSteamRemotePlay Function BSendRemotePlayTogetherInvite *************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics
{
	struct OrionSteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms
	{
		FSteamID SteamIDFriend;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Invite a friend to join the game using Remote Play Together\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09\x09The Steam ID of the friend you'd like to invite\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invite a friend to join the game using Remote Play Together\n\n@param       SteamIDFriend           The Steam ID of the friend you'd like to invite" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms), &Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "BSendRemotePlayTogetherInvite", Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::OrionSteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::OrionSteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execBSendRemotePlayTogetherInvite)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BSendRemotePlayTogetherInvite(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function BSendRemotePlayTogetherInvite ***************

// ********** Begin Class UOrionSteamRemotePlay Function DisableRemotePlayTogetherDirectInput ******
struct Z_Construct_UFunction_UOrionSteamRemotePlay_DisableRemotePlayTogetherDirectInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Merge Remote Play Together mouse and keyboard input with local input\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Merge Remote Play Together mouse and keyboard input with local input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_DisableRemotePlayTogetherDirectInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "DisableRemotePlayTogetherDirectInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_DisableRemotePlayTogetherDirectInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_DisableRemotePlayTogetherDirectInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_DisableRemotePlayTogetherDirectInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_DisableRemotePlayTogetherDirectInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execDisableRemotePlayTogetherDirectInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableRemotePlayTogetherDirectInput();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function DisableRemotePlayTogetherDirectInput ********

// ********** Begin Class UOrionSteamRemotePlay Function GetInput **********************************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics
{
	struct OrionSteamRemotePlay_eventGetInput_Parms
	{
		FRemotePlayInput Input;
		int32 MaxEvents;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get input events from Remote Play Together sessions\n\x09 *\n\x09 * This is available after calling BEnableRemotePlayTogetherDirectInput()\n\x09 * Input is an array of input events that will be filled in by this function, up to unMaxEvents.\n\x09 *\n\x09 * @param\x09Input\x09\x09The Steam ID of the friend you'd like to invite\n\x09 * @param\x09MaxEvents\x09\x09The Steam ID of the friend you'd like to invite\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get input events from Remote Play Together sessions\n\nThis is available after calling BEnableRemotePlayTogetherDirectInput()\nInput is an array of input events that will be filled in by this function, up to unMaxEvents.\n\n@param       Input           The Steam ID of the friend you'd like to invite\n@param       MaxEvents               The Steam ID of the friend you'd like to invite" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEvents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetInput_Parms, Input), Z_Construct_UScriptStruct_FRemotePlayInput, METADATA_PARAMS(0, nullptr) }; // 3009984877
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::NewProp_MaxEvents = { "MaxEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetInput_Parms, MaxEvents), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::NewProp_MaxEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "GetInput", Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::OrionSteamRemotePlay_eventGetInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::OrionSteamRemotePlay_eventGetInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execGetInput)
{
	P_GET_STRUCT(FRemotePlayInput,Z_Param_Input);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxEvents);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInput(Z_Param_Input,Z_Param_MaxEvents);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function GetInput ************************************

// ********** Begin Class UOrionSteamRemotePlay Function GetSessionClientFormFactor ****************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics
{
	struct OrionSteamRemotePlay_eventGetSessionClientFormFactor_Parms
	{
		int32 SessionID;
		EOrionSteamDeviceFormFactor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the form factor of the session client device\n\x09 *\n\x09 * @param\x09SessionID\x09The session ID to get information about\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the form factor of the session client device\n\n@param       SessionID       The session ID to get information about" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetSessionClientFormFactor_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetSessionClientFormFactor_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamDeviceFormFactor, METADATA_PARAMS(0, nullptr) }; // 1487751040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "GetSessionClientFormFactor", Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::OrionSteamRemotePlay_eventGetSessionClientFormFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::OrionSteamRemotePlay_eventGetSessionClientFormFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execGetSessionClientFormFactor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOrionSteamDeviceFormFactor*)Z_Param__Result=P_THIS->GetSessionClientFormFactor(Z_Param_SessionID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function GetSessionClientFormFactor ******************

// ********** Begin Class UOrionSteamRemotePlay Function GetSessionClientName **********************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics
{
	struct OrionSteamRemotePlay_eventGetSessionClientName_Parms
	{
		int32 SessionID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the name of the session client device\n\x09 *\n\x09 * @param\x09SessionID\x09The session ID to get information about\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the name of the session client device\n\n@param       SessionID       The session ID to get information about" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetSessionClientName_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetSessionClientName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "GetSessionClientName", Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::OrionSteamRemotePlay_eventGetSessionClientName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::OrionSteamRemotePlay_eventGetSessionClientName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execGetSessionClientName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSessionClientName(Z_Param_SessionID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function GetSessionClientName ************************

// ********** Begin Class UOrionSteamRemotePlay Function GetSessionCount ***************************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics
{
	struct OrionSteamRemotePlay_eventGetSessionCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the number of currently connected Steam Remote Play sessions\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of currently connected Steam Remote Play sessions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetSessionCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "GetSessionCount", Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::OrionSteamRemotePlay_eventGetSessionCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::OrionSteamRemotePlay_eventGetSessionCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execGetSessionCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSessionCount();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function GetSessionCount *****************************

// ********** Begin Class UOrionSteamRemotePlay Function GetSessionID ******************************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics
{
	struct OrionSteamRemotePlay_eventGetSessionID_Parms
	{
		int32 SessionIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the currently connected Steam Remote Play session ID at the specified index\n\x09 *\n\x09 * @param\x09SessionIndex\x09The index of the specified session\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the currently connected Steam Remote Play session ID at the specified index\n\n@param       SessionIndex    The index of the specified session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::NewProp_SessionIndex = { "SessionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetSessionID_Parms, SessionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetSessionID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::NewProp_SessionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "GetSessionID", Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::OrionSteamRemotePlay_eventGetSessionID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::OrionSteamRemotePlay_eventGetSessionID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execGetSessionID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSessionID(Z_Param_SessionIndex);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function GetSessionID ********************************

// ********** Begin Class UOrionSteamRemotePlay Function GetSessionSteamID *************************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics
{
	struct OrionSteamRemotePlay_eventGetSessionSteamID_Parms
	{
		int32 SessionID;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the SteamID of the connected user\n\x09 *\n\x09 * @param\x09SessionID\x09The session ID to get information about\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the SteamID of the connected user\n\n@param       SessionID       The session ID to get information about" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetSessionSteamID_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetSessionSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "GetSessionSteamID", Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::OrionSteamRemotePlay_eventGetSessionSteamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::OrionSteamRemotePlay_eventGetSessionSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execGetSessionSteamID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->GetSessionSteamID(Z_Param_SessionID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function GetSessionSteamID ***************************

// ********** Begin Class UOrionSteamRemotePlay Function GetSteamRemotePlay ************************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics
{
	struct OrionSteamRemotePlay_eventGetSteamRemotePlay_Parms
	{
		UOrionSteamRemotePlay* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventGetSteamRemotePlay_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamRemotePlay_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "GetSteamRemotePlay", Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::OrionSteamRemotePlay_eventGetSteamRemotePlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::OrionSteamRemotePlay_eventGetSteamRemotePlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execGetSteamRemotePlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamRemotePlay**)Z_Param__Result=UOrionSteamRemotePlay::GetSteamRemotePlay();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function GetSteamRemotePlay **************************

// ********** Begin Class UOrionSteamRemotePlay Function SetMouseCursor ****************************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics
{
	struct OrionSteamRemotePlay_eventSetMouseCursor_Parms
	{
		FRemotePlaySessionID SessionID;
		FRemotePlayCursorID CursorID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the mouse cursor for a remote player\n\x09 *\n\x09 * This is available after calling BEnableRemotePlayTogetherDirectInput()\n\x09 * The cursor ID is a value returned by CreateMouseCursor()\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the mouse cursor for a remote player\n\nThis is available after calling BEnableRemotePlayTogetherDirectInput()\nThe cursor ID is a value returned by CreateMouseCursor()" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CursorID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventSetMouseCursor_Parms, SessionID), Z_Construct_UScriptStruct_FRemotePlaySessionID, METADATA_PARAMS(0, nullptr) }; // 851035858
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::NewProp_CursorID = { "CursorID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventSetMouseCursor_Parms, CursorID), Z_Construct_UScriptStruct_FRemotePlayCursorID, METADATA_PARAMS(0, nullptr) }; // 1281022479
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::NewProp_CursorID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "SetMouseCursor", Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::OrionSteamRemotePlay_eventSetMouseCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::OrionSteamRemotePlay_eventSetMouseCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execSetMouseCursor)
{
	P_GET_STRUCT(FRemotePlaySessionID,Z_Param_SessionID);
	P_GET_STRUCT(FRemotePlayCursorID,Z_Param_CursorID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseCursor(Z_Param_SessionID,Z_Param_CursorID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function SetMouseCursor ******************************

// ********** Begin Class UOrionSteamRemotePlay Function SetMousePosition **************************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics
{
	struct OrionSteamRemotePlay_eventSetMousePosition_Parms
	{
		FRemotePlaySessionID SessionID;
		float NormalizedX;
		float NormalizedY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the mouse cursor position for a remote player\n\x09 *\n\x09 * This is available after calling BEnableRemotePlayTogetherDirectInput()\n\x09 *\n\x09 * This is used to warp the cursor to a specific location and isn't needed during normal event processing.\n\x09 * The position is normalized relative to the window, where 0,0 is the upper left, and 1,1 is the lower right.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the mouse cursor position for a remote player\n\nThis is available after calling BEnableRemotePlayTogetherDirectInput()\n\nThis is used to warp the cursor to a specific location and isn't needed during normal event processing.\nThe position is normalized relative to the window, where 0,0 is the upper left, and 1,1 is the lower right." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventSetMousePosition_Parms, SessionID), Z_Construct_UScriptStruct_FRemotePlaySessionID, METADATA_PARAMS(0, nullptr) }; // 851035858
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::NewProp_NormalizedX = { "NormalizedX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventSetMousePosition_Parms, NormalizedX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::NewProp_NormalizedY = { "NormalizedY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventSetMousePosition_Parms, NormalizedY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::NewProp_NormalizedX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::NewProp_NormalizedY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "SetMousePosition", Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::OrionSteamRemotePlay_eventSetMousePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::OrionSteamRemotePlay_eventSetMousePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execSetMousePosition)
{
	P_GET_STRUCT(FRemotePlaySessionID,Z_Param_SessionID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMousePosition(Z_Param_SessionID,Z_Param_NormalizedX,Z_Param_NormalizedY);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function SetMousePosition ****************************

// ********** Begin Class UOrionSteamRemotePlay Function SetMouseVisibility ************************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics
{
	struct OrionSteamRemotePlay_eventSetMouseVisibility_Parms
	{
		FRemotePlaySessionID SessionID;
		bool bVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the mouse cursor visibility for a remote player\n\x09 *\n\x09 * This is available after calling BEnableRemotePlayTogetherDirectInput()\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the mouse cursor visibility for a remote player\n\nThis is available after calling BEnableRemotePlayTogetherDirectInput()" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionID;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamRemotePlay_eventSetMouseVisibility_Parms, SessionID), Z_Construct_UScriptStruct_FRemotePlaySessionID, METADATA_PARAMS(0, nullptr) }; // 851035858
void Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((OrionSteamRemotePlay_eventSetMouseVisibility_Parms*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamRemotePlay_eventSetMouseVisibility_Parms), &Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::NewProp_bVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "SetMouseVisibility", Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::OrionSteamRemotePlay_eventSetMouseVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::OrionSteamRemotePlay_eventSetMouseVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execSetMouseVisibility)
{
	P_GET_STRUCT(FRemotePlaySessionID,Z_Param_SessionID);
	P_GET_UBOOL(Z_Param_bVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseVisibility(Z_Param_SessionID,Z_Param_bVisible);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function SetMouseVisibility **************************

// ********** Begin Class UOrionSteamRemotePlay Function ShowRemotePlayTogetherUI ******************
struct Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics
{
	struct OrionSteamRemotePlay_eventShowRemotePlayTogetherUI_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|RemotePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Show the Remote Play Together UI in the game overlay\n\x09 * This returns false if your game is not configured for Remote Play Together\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Show the Remote Play Together UI in the game overlay\n* This returns false if your game is not configured for Remote Play Together" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamRemotePlay_eventShowRemotePlayTogetherUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamRemotePlay_eventShowRemotePlayTogetherUI_Parms), &Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamRemotePlay, nullptr, "ShowRemotePlayTogetherUI", Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::OrionSteamRemotePlay_eventShowRemotePlayTogetherUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::OrionSteamRemotePlay_eventShowRemotePlayTogetherUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamRemotePlay::execShowRemotePlayTogetherUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShowRemotePlayTogetherUI();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamRemotePlay Function ShowRemotePlayTogetherUI ********************

// ********** Begin Class UOrionSteamRemotePlay ****************************************************
void UOrionSteamRemotePlay::StaticRegisterNativesUOrionSteamRemotePlay()
{
	UClass* Class = UOrionSteamRemotePlay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BEnableRemotePlayTogetherDirectInput", &UOrionSteamRemotePlay::execBEnableRemotePlayTogetherDirectInput },
		{ "BGetSessionClientResolution", &UOrionSteamRemotePlay::execBGetSessionClientResolution },
		{ "BSendRemotePlayTogetherInvite", &UOrionSteamRemotePlay::execBSendRemotePlayTogetherInvite },
		{ "DisableRemotePlayTogetherDirectInput", &UOrionSteamRemotePlay::execDisableRemotePlayTogetherDirectInput },
		{ "GetInput", &UOrionSteamRemotePlay::execGetInput },
		{ "GetSessionClientFormFactor", &UOrionSteamRemotePlay::execGetSessionClientFormFactor },
		{ "GetSessionClientName", &UOrionSteamRemotePlay::execGetSessionClientName },
		{ "GetSessionCount", &UOrionSteamRemotePlay::execGetSessionCount },
		{ "GetSessionID", &UOrionSteamRemotePlay::execGetSessionID },
		{ "GetSessionSteamID", &UOrionSteamRemotePlay::execGetSessionSteamID },
		{ "GetSteamRemotePlay", &UOrionSteamRemotePlay::execGetSteamRemotePlay },
		{ "SetMouseCursor", &UOrionSteamRemotePlay::execSetMouseCursor },
		{ "SetMousePosition", &UOrionSteamRemotePlay::execSetMousePosition },
		{ "SetMouseVisibility", &UOrionSteamRemotePlay::execSetMouseVisibility },
		{ "ShowRemotePlayTogetherUI", &UOrionSteamRemotePlay::execShowRemotePlayTogetherUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamRemotePlay;
UClass* UOrionSteamRemotePlay::GetPrivateStaticClass()
{
	using TClass = UOrionSteamRemotePlay;
	if (!Z_Registration_Info_UClass_UOrionSteamRemotePlay.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamRemotePlay"),
			Z_Registration_Info_UClass_UOrionSteamRemotePlay.InnerSingleton,
			StaticRegisterNativesUOrionSteamRemotePlay,
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
	return Z_Registration_Info_UClass_UOrionSteamRemotePlay.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamRemotePlay_NoRegister()
{
	return UOrionSteamRemotePlay::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamRemotePlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRemotePlay/SteamRemotePlay.h" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamRemotePlaySessionConnected_MetaData[] = {
		{ "Category", "OrionSteam|RemotePlay|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamRemotePlaySessionDisconnected_MetaData[] = {
		{ "Category", "OrionSteam|RemotePlay|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRemotePlaySessionConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRemotePlaySessionDisconnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_BEnableRemotePlayTogetherDirectInput, "BEnableRemotePlayTogetherDirectInput" }, // 3299291317
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_BGetSessionClientResolution, "BGetSessionClientResolution" }, // 1601456372
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_BSendRemotePlayTogetherInvite, "BSendRemotePlayTogetherInvite" }, // 819060410
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_DisableRemotePlayTogetherDirectInput, "DisableRemotePlayTogetherDirectInput" }, // 1485584673
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_GetInput, "GetInput" }, // 376236411
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientFormFactor, "GetSessionClientFormFactor" }, // 4175254982
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionClientName, "GetSessionClientName" }, // 4038966843
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionCount, "GetSessionCount" }, // 588642134
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionID, "GetSessionID" }, // 3027302684
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_GetSessionSteamID, "GetSessionSteamID" }, // 3995802632
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_GetSteamRemotePlay, "GetSteamRemotePlay" }, // 1351183276
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseCursor, "SetMouseCursor" }, // 1268581454
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_SetMousePosition, "SetMousePosition" }, // 3222144823
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_SetMouseVisibility, "SetMouseVisibility" }, // 1087790101
		{ &Z_Construct_UFunction_UOrionSteamRemotePlay_ShowRemotePlayTogetherUI, "ShowRemotePlayTogetherUI" }, // 3339999787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamRemotePlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamRemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected = { "SteamRemotePlaySessionConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamRemotePlay, SteamRemotePlaySessionConnected), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamRemotePlaySessionConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamRemotePlaySessionConnected_MetaData), NewProp_SteamRemotePlaySessionConnected_MetaData) }; // 560103732
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamRemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected = { "SteamRemotePlaySessionDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamRemotePlay, SteamRemotePlaySessionDisconnected), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamRemotePlaySessionDisconnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamRemotePlaySessionDisconnected_MetaData), NewProp_SteamRemotePlaySessionDisconnected_MetaData) }; // 116594892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamRemotePlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamRemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamRemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamRemotePlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamRemotePlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamRemotePlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamRemotePlay_Statics::ClassParams = {
	&UOrionSteamRemotePlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamRemotePlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamRemotePlay_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamRemotePlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamRemotePlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamRemotePlay()
{
	if (!Z_Registration_Info_UClass_UOrionSteamRemotePlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamRemotePlay.OuterSingleton, Z_Construct_UClass_UOrionSteamRemotePlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamRemotePlay.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamRemotePlay);
// ********** End Class UOrionSteamRemotePlay ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamRemotePlay, UOrionSteamRemotePlay::StaticClass, TEXT("UOrionSteamRemotePlay"), &Z_Registration_Info_UClass_UOrionSteamRemotePlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamRemotePlay), 3659122220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h__Script_OrionSteamSDKAPI_2092029957(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
