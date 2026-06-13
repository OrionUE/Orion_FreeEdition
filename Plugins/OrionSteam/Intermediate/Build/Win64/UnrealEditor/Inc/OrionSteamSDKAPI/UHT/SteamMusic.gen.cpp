// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMusic/SteamMusic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamMusic() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMusic();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMusic_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamMusic Function BIsEnabled *************************************
struct Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics
{
	struct OrionSteamMusic_eventBIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if Steam Music is enabled.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if Steam Music is enabled." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMusic_eventBIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMusic_eventBIsEnabled_Parms), &Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMusic, nullptr, "BIsEnabled", Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::OrionSteamMusic_eventBIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::OrionSteamMusic_eventBIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMusic::execBIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsEnabled();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMusic Function BIsEnabled ***************************************

// ********** Begin Class UOrionSteamMusic Function BIsPlaying *************************************
struct Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics
{
	struct OrionSteamMusic_eventBIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMusic_eventBIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMusic_eventBIsPlaying_Parms), &Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMusic, nullptr, "BIsPlaying", Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::OrionSteamMusic_eventBIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::OrionSteamMusic_eventBIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMusic::execBIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsPlaying();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMusic Function BIsPlaying ***************************************

// ********** Begin Class UOrionSteamMusic Function GetPlaybackStatus ******************************
struct Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics
{
	struct OrionSteamMusic_eventGetPlaybackStatus_Parms
	{
		ESteamAudioPlaybackStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current status of the Steam Music player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current status of the Steam Music player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMusic_eventGetPlaybackStatus_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus, METADATA_PARAMS(0, nullptr) }; // 2624482108
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMusic, nullptr, "GetPlaybackStatus", Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::OrionSteamMusic_eventGetPlaybackStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::OrionSteamMusic_eventGetPlaybackStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMusic::execGetPlaybackStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamAudioPlaybackStatus*)Z_Param__Result=P_THIS->GetPlaybackStatus();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMusic Function GetPlaybackStatus ********************************

// ********** Begin Class UOrionSteamMusic Function GetSteamMusic **********************************
struct Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics
{
	struct OrionSteamMusic_eventGetSteamMusic_Parms
	{
		UOrionSteamMusic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMusic_eventGetSteamMusic_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamMusic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMusic, nullptr, "GetSteamMusic", Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::OrionSteamMusic_eventGetSteamMusic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::OrionSteamMusic_eventGetSteamMusic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMusic::execGetSteamMusic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamMusic**)Z_Param__Result=UOrionSteamMusic::GetSteamMusic();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMusic Function GetSteamMusic ************************************

// ********** Begin Class UOrionSteamMusic Function GetVolume **************************************
struct Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics
{
	struct OrionSteamMusic_eventGetVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current volume of the Steam Music player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current volume of the Steam Music player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMusic_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMusic, nullptr, "GetVolume", Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::OrionSteamMusic_eventGetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::OrionSteamMusic_eventGetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMusic_GetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMusic_GetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMusic::execGetVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVolume();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMusic Function GetVolume ****************************************

// ********** Begin Class UOrionSteamMusic Function Pause ******************************************
struct Z_Construct_UFunction_UOrionSteamMusic_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pause the Steam Music player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pause the Steam Music player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMusic_Pause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMusic, nullptr, "Pause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMusic_Pause_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamMusic_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMusic_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMusic::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMusic Function Pause ********************************************

// ********** Begin Class UOrionSteamMusic Function Play *******************************************
struct Z_Construct_UFunction_UOrionSteamMusic_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Have the Steam Music player resume playing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Have the Steam Music player resume playing." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMusic_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMusic, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMusic_Play_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamMusic_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMusic_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMusic::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMusic Function Play *********************************************

// ********** Begin Class UOrionSteamMusic Function PlayNext ***************************************
struct Z_Construct_UFunction_UOrionSteamMusic_PlayNext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Have the Steam Music player skip to the next song.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Have the Steam Music player skip to the next song." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMusic_PlayNext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMusic, nullptr, "PlayNext", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_PlayNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMusic_PlayNext_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamMusic_PlayNext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMusic_PlayNext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMusic::execPlayNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayNext();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMusic Function PlayNext *****************************************

// ********** Begin Class UOrionSteamMusic Function PlayPrevious ***********************************
struct Z_Construct_UFunction_UOrionSteamMusic_PlayPrevious_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Have the Steam Music player play the previous song.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Have the Steam Music player play the previous song." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMusic_PlayPrevious_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMusic, nullptr, "PlayPrevious", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_PlayPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMusic_PlayPrevious_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamMusic_PlayPrevious()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMusic_PlayPrevious_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMusic::execPlayPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayPrevious();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMusic Function PlayPrevious *************************************

// ********** Begin Class UOrionSteamMusic Function SetVolume **************************************
struct Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics
{
	struct OrionSteamMusic_eventSetVolume_Parms
	{
		float flVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the volume of the Steam Music player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the volume of the Steam Music player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_flVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::NewProp_flVolume = { "flVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMusic_eventSetVolume_Parms, flVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::NewProp_flVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMusic, nullptr, "SetVolume", Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::OrionSteamMusic_eventSetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::OrionSteamMusic_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMusic_SetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMusic_SetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMusic::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_flVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolume(Z_Param_flVolume);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMusic Function SetVolume ****************************************

// ********** Begin Class UOrionSteamMusic *********************************************************
void UOrionSteamMusic::StaticRegisterNativesUOrionSteamMusic()
{
	UClass* Class = UOrionSteamMusic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BIsEnabled", &UOrionSteamMusic::execBIsEnabled },
		{ "BIsPlaying", &UOrionSteamMusic::execBIsPlaying },
		{ "GetPlaybackStatus", &UOrionSteamMusic::execGetPlaybackStatus },
		{ "GetSteamMusic", &UOrionSteamMusic::execGetSteamMusic },
		{ "GetVolume", &UOrionSteamMusic::execGetVolume },
		{ "Pause", &UOrionSteamMusic::execPause },
		{ "Play", &UOrionSteamMusic::execPlay },
		{ "PlayNext", &UOrionSteamMusic::execPlayNext },
		{ "PlayPrevious", &UOrionSteamMusic::execPlayPrevious },
		{ "SetVolume", &UOrionSteamMusic::execSetVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamMusic;
UClass* UOrionSteamMusic::GetPrivateStaticClass()
{
	using TClass = UOrionSteamMusic;
	if (!Z_Registration_Info_UClass_UOrionSteamMusic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamMusic"),
			Z_Registration_Info_UClass_UOrionSteamMusic.InnerSingleton,
			StaticRegisterNativesUOrionSteamMusic,
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
	return Z_Registration_Info_UClass_UOrionSteamMusic.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamMusic_NoRegister()
{
	return UOrionSteamMusic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamMusic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMusic/SteamMusic.h" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackStatusHasChanged_MetaData[] = {
		{ "Category", "OrionSteam|Music|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeHasChanged_MetaData[] = {
		{ "Category", "OrionSteam|Music|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlaybackStatusHasChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_VolumeHasChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamMusic_BIsEnabled, "BIsEnabled" }, // 3070843603
		{ &Z_Construct_UFunction_UOrionSteamMusic_BIsPlaying, "BIsPlaying" }, // 1560213684
		{ &Z_Construct_UFunction_UOrionSteamMusic_GetPlaybackStatus, "GetPlaybackStatus" }, // 2130120892
		{ &Z_Construct_UFunction_UOrionSteamMusic_GetSteamMusic, "GetSteamMusic" }, // 1449877136
		{ &Z_Construct_UFunction_UOrionSteamMusic_GetVolume, "GetVolume" }, // 1706151586
		{ &Z_Construct_UFunction_UOrionSteamMusic_Pause, "Pause" }, // 1157524710
		{ &Z_Construct_UFunction_UOrionSteamMusic_Play, "Play" }, // 2389119129
		{ &Z_Construct_UFunction_UOrionSteamMusic_PlayNext, "PlayNext" }, // 3822340279
		{ &Z_Construct_UFunction_UOrionSteamMusic_PlayPrevious, "PlayPrevious" }, // 4147940076
		{ &Z_Construct_UFunction_UOrionSteamMusic_SetVolume, "SetVolume" }, // 2939701170
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamMusic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMusic_Statics::NewProp_PlaybackStatusHasChanged = { "PlaybackStatusHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMusic, PlaybackStatusHasChanged), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackStatusHasChanged_MetaData), NewProp_PlaybackStatusHasChanged_MetaData) }; // 1833030492
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMusic_Statics::NewProp_VolumeHasChanged = { "VolumeHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMusic, VolumeHasChanged), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeHasChanged_MetaData), NewProp_VolumeHasChanged_MetaData) }; // 1877806674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamMusic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMusic_Statics::NewProp_PlaybackStatusHasChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMusic_Statics::NewProp_VolumeHasChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMusic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamMusic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMusic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamMusic_Statics::ClassParams = {
	&UOrionSteamMusic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamMusic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMusic_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMusic_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamMusic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamMusic()
{
	if (!Z_Registration_Info_UClass_UOrionSteamMusic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamMusic.OuterSingleton, Z_Construct_UClass_UOrionSteamMusic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamMusic.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamMusic);
// ********** End Class UOrionSteamMusic ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamMusic, UOrionSteamMusic::StaticClass, TEXT("UOrionSteamMusic"), &Z_Registration_Info_UClass_UOrionSteamMusic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamMusic), 1517587511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h__Script_OrionSteamSDKAPI_149512492(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
