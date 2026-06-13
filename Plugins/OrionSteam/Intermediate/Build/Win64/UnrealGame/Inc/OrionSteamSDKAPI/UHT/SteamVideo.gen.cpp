// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVideo/SteamVideo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamVideo() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamVideo();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamVideo_NoRegister();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetOPFSettingsResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetVideoURLResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamVideo Function GetOPFSettings *********************************
struct Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics
{
	struct OrionSteamVideo_eventGetOPFSettings_Parms
	{
		int32 VideoAppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Video" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the OPF details for 360 video playback\n\x09 *\n\x09 * To retrieve the 360 OPF (open projection format) data to playback a 360 video, start by making a call to this, then the callback will indicate whether the request was successful. If it was successful, the actual OPF JSON data can be retrieved with a call to GetOPFStringForApp.\n\x09 *\n\x09 * @param\x09VideoAppID\x09\x09The video app ID to get the OPF details of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the OPF details for 360 video playback\n\nTo retrieve the 360 OPF (open projection format) data to playback a 360 video, start by making a call to this, then the callback will indicate whether the request was successful. If it was successful, the actual OPF JSON data can be retrieved with a call to GetOPFStringForApp.\n\n@param       VideoAppID              The video app ID to get the OPF details of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamVideo_eventGetOPFSettings_Parms, VideoAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::NewProp_VideoAppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamVideo, nullptr, "GetOPFSettings", Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::OrionSteamVideo_eventGetOPFSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::OrionSteamVideo_eventGetOPFSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamVideo::execGetOPFSettings)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamVideo::GetOPFSettings(Z_Param_VideoAppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamVideo Function GetOPFSettings ***********************************

// ********** Begin Class UOrionSteamVideo Function GetOPFStringForApp *****************************
struct Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics
{
	struct OrionSteamVideo_eventGetOPFStringForApp_Parms
	{
		int32 VideoAppID;
		FString OutBuffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Video" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the OPF string for the specified video App ID.\n\x09 *\n\x09 * Once the callback for GetOPFSettingsResult_t has been raised and the EResult indicates success, then calling this will return back the actual OPF data in a JSON format.\n\x09 * The size of the OPF string varies, but at this time 48,000 bytes should be sufficient to contain the full string. If it is not, pnBufferSize will be set to the size required. In that case, make a second call with the correct buffer size.\n\x09 * NOTE: The data returned in a successful call to GetOPFStringForApp() can only be retrieved once. If you need to retrieve it multiple times, a call to GetOPFSettings will need to be made each time.\n\x09 *\n\x09 * param\x09\x09VideoAppID\x09\x09The video app ID to get the OPF string for.\n\x09 * param\x09\x09OutBuffer\x09\x09\x09Returns the OPF string by writing it to this buffer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the OPF string for the specified video App ID.\n\nOnce the callback for GetOPFSettingsResult_t has been raised and the EResult indicates success, then calling this will return back the actual OPF data in a JSON format.\nThe size of the OPF string varies, but at this time 48,000 bytes should be sufficient to contain the full string. If it is not, pnBufferSize will be set to the size required. In that case, make a second call with the correct buffer size.\nNOTE: The data returned in a successful call to GetOPFStringForApp() can only be retrieved once. If you need to retrieve it multiple times, a call to GetOPFSettings will need to be made each time.\n\nparam                VideoAppID              The video app ID to get the OPF string for.\nparam                OutBuffer                       Returns the OPF string by writing it to this buffer." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutBuffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamVideo_eventGetOPFStringForApp_Parms, VideoAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamVideo_eventGetOPFStringForApp_Parms, OutBuffer), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamVideo_eventGetOPFStringForApp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamVideo_eventGetOPFStringForApp_Parms), &Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::NewProp_VideoAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::NewProp_OutBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamVideo, nullptr, "GetOPFStringForApp", Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::OrionSteamVideo_eventGetOPFStringForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::OrionSteamVideo_eventGetOPFStringForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamVideo::execGetOPFStringForApp)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamVideo::GetOPFStringForApp(Z_Param_VideoAppID,Z_Param_Out_OutBuffer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamVideo Function GetOPFStringForApp *******************************

// ********** Begin Class UOrionSteamVideo Function GetSteamVideo **********************************
struct Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics
{
	struct OrionSteamVideo_eventGetSteamVideo_Parms
	{
		UOrionSteamVideo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamVideo_eventGetSteamVideo_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamVideo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamVideo, nullptr, "GetSteamVideo", Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::OrionSteamVideo_eventGetSteamVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::OrionSteamVideo_eventGetSteamVideo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamVideo::execGetSteamVideo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamVideo**)Z_Param__Result=UOrionSteamVideo::GetSteamVideo();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamVideo Function GetSteamVideo ************************************

// ********** Begin Class UOrionSteamVideo Function GetVideoURL ************************************
struct Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics
{
	struct OrionSteamVideo_eventGetVideoURL_Parms
	{
		int32 VideoAppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Video" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously gets the URL suitable for streaming the video associated with the specified video app ID.\n\x09 *\n\x09 * param\x09\x09videoAppID\x09The video app ID to receive the video stream for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously gets the URL suitable for streaming the video associated with the specified video app ID.\n\nparam                videoAppID      The video app ID to receive the video stream for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamVideo_eventGetVideoURL_Parms, VideoAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::NewProp_VideoAppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamVideo, nullptr, "GetVideoURL", Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::OrionSteamVideo_eventGetVideoURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::OrionSteamVideo_eventGetVideoURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamVideo::execGetVideoURL)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamVideo::GetVideoURL(Z_Param_VideoAppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamVideo Function GetVideoURL **************************************

// ********** Begin Class UOrionSteamVideo Function IsBroadcasting *********************************
struct Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics
{
	struct OrionSteamVideo_eventIsBroadcasting_Parms
	{
		int32 NumViewers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Video" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the user is currently live broadcasting and gets the number of users.\n\x09 *\n\x09 * param\x09\x09numViewers\x09\x09Returns the number of viewers currently watching the live broadcast.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user is currently live broadcasting and gets the number of users.\n\nparam                numViewers              Returns the number of viewers currently watching the live broadcast." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumViewers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::NewProp_NumViewers = { "NumViewers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamVideo_eventIsBroadcasting_Parms, NumViewers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamVideo_eventIsBroadcasting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamVideo_eventIsBroadcasting_Parms), &Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::NewProp_NumViewers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamVideo, nullptr, "IsBroadcasting", Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::OrionSteamVideo_eventIsBroadcasting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::OrionSteamVideo_eventIsBroadcasting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamVideo::execIsBroadcasting)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumViewers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamVideo::IsBroadcasting(Z_Param_Out_NumViewers);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamVideo Function IsBroadcasting ***********************************

// ********** Begin Class UOrionSteamVideo *********************************************************
void UOrionSteamVideo::StaticRegisterNativesUOrionSteamVideo()
{
	UClass* Class = UOrionSteamVideo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOPFSettings", &UOrionSteamVideo::execGetOPFSettings },
		{ "GetOPFStringForApp", &UOrionSteamVideo::execGetOPFStringForApp },
		{ "GetSteamVideo", &UOrionSteamVideo::execGetSteamVideo },
		{ "GetVideoURL", &UOrionSteamVideo::execGetVideoURL },
		{ "IsBroadcasting", &UOrionSteamVideo::execIsBroadcasting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamVideo;
UClass* UOrionSteamVideo::GetPrivateStaticClass()
{
	using TClass = UOrionSteamVideo;
	if (!Z_Registration_Info_UClass_UOrionSteamVideo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamVideo"),
			Z_Registration_Info_UClass_UOrionSteamVideo.InnerSingleton,
			StaticRegisterNativesUOrionSteamVideo,
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
	return Z_Registration_Info_UClass_UOrionSteamVideo.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamVideo_NoRegister()
{
	return UOrionSteamVideo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamVideo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamVideo/SteamVideo.h" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetOPFSettingsResult_MetaData[] = {
		{ "Category", "OrionSteam|Video|Delegates" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetVideoURLResult_MetaData[] = {
		{ "Category", "OrionSteam|Video|Delegates" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetOPFSettingsResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetVideoURLResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamVideo_GetOPFSettings, "GetOPFSettings" }, // 3115230324
		{ &Z_Construct_UFunction_UOrionSteamVideo_GetOPFStringForApp, "GetOPFStringForApp" }, // 945607366
		{ &Z_Construct_UFunction_UOrionSteamVideo_GetSteamVideo, "GetSteamVideo" }, // 1247620982
		{ &Z_Construct_UFunction_UOrionSteamVideo_GetVideoURL, "GetVideoURL" }, // 3837104146
		{ &Z_Construct_UFunction_UOrionSteamVideo_IsBroadcasting, "IsBroadcasting" }, // 662416996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamVideo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamVideo_Statics::NewProp_GetOPFSettingsResult = { "GetOPFSettingsResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamVideo, GetOPFSettingsResult), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetOPFSettingsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetOPFSettingsResult_MetaData), NewProp_GetOPFSettingsResult_MetaData) }; // 1300828037
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamVideo_Statics::NewProp_GetVideoURLResult = { "GetVideoURLResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamVideo, GetVideoURLResult), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetVideoURLResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetVideoURLResult_MetaData), NewProp_GetVideoURLResult_MetaData) }; // 308616123
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamVideo_Statics::NewProp_GetOPFSettingsResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamVideo_Statics::NewProp_GetVideoURLResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamVideo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamVideo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamVideo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamVideo_Statics::ClassParams = {
	&UOrionSteamVideo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamVideo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamVideo_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamVideo_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamVideo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamVideo()
{
	if (!Z_Registration_Info_UClass_UOrionSteamVideo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamVideo.OuterSingleton, Z_Construct_UClass_UOrionSteamVideo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamVideo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamVideo);
// ********** End Class UOrionSteamVideo ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamVideo_SteamVideo_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamVideo, UOrionSteamVideo::StaticClass, TEXT("UOrionSteamVideo"), &Z_Registration_Info_UClass_UOrionSteamVideo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamVideo), 97974382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamVideo_SteamVideo_h__Script_OrionSteamSDKAPI_1478226551(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamVideo_SteamVideo_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamVideo_SteamVideo_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
