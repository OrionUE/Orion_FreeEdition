// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamTimeline/SteamTimelineTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamTimelineTypes() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineEventClipPriority();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineGameMode();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventHandle();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamTimelineGameMode ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamTimelineGameMode;
static UEnum* ESteamTimelineGameMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamTimelineGameMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamTimelineGameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineGameMode, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ESteamTimelineGameMode"));
	}
	return Z_Registration_Info_UEnum_ESteamTimelineGameMode.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamTimelineGameMode>()
{
	return ESteamTimelineGameMode_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Controls the color of the timeline bar segments. The value names listed here map to a multiplayer game, where\n// the user starts a game (in menus), then joins a multiplayer session that first has a character selection lobby\n// then finally the multiplayer session starts. However, you can also map these values to any type of game. In a single\n// player game where you visit towns & dungeons, you could set k_ETimelineGameMode_Menus when the player is in a town\n// buying items, k_ETimelineGameMode_Staging for when a dungeon is loading and k_ETimelineGameMode_Playing for when\n// inside the dungeon fighting monsters.\n" },
#endif
		{ "k_ETimelineGameMode_Invalid.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_Invalid" },
		{ "k_ETimelineGameMode_LoadingScreen.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_LoadingScreen" },
		{ "k_ETimelineGameMode_Max.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_Max" },
		{ "k_ETimelineGameMode_Menus.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_Menus" },
		{ "k_ETimelineGameMode_Playing.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_Playing" },
		{ "k_ETimelineGameMode_Staging.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_Staging" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the color of the timeline bar segments. The value names listed here map to a multiplayer game, where\nthe user starts a game (in menus), then joins a multiplayer session that first has a character selection lobby\nthen finally the multiplayer session starts. However, you can also map these values to any type of game. In a single\nplayer game where you visit towns & dungeons, you could set k_ETimelineGameMode_Menus when the player is in a town\nbuying items, k_ETimelineGameMode_Staging for when a dungeon is loading and k_ETimelineGameMode_Playing for when\ninside the dungeon fighting monsters." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_Invalid", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_Invalid },
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_Playing", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_Playing },
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_Staging", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_Staging },
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_Menus", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_Menus },
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_LoadingScreen", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_LoadingScreen },
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_Max", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineGameMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"ESteamTimelineGameMode",
	"ESteamTimelineGameMode",
	Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineGameMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineGameMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineGameMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineGameMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineGameMode()
{
	if (!Z_Registration_Info_UEnum_ESteamTimelineGameMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamTimelineGameMode.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineGameMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamTimelineGameMode.InnerSingleton;
}
// ********** End Enum ESteamTimelineGameMode ******************************************************

// ********** Begin Enum ESteamTimelineEventClipPriority *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority;
static UEnum* ESteamTimelineEventClipPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineEventClipPriority, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ESteamTimelineEventClipPriority"));
	}
	return Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamTimelineEventClipPriority>()
{
	return ESteamTimelineEventClipPriority_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineEventClipPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used in AddTimelineEvent, where Featured events will be offered before Standard events\n" },
#endif
		{ "k_ETimelineEventClipPriority_Featured.Name", "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Featured" },
		{ "k_ETimelineEventClipPriority_Invalid.Name", "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Invalid" },
		{ "k_ETimelineEventClipPriority_None.Name", "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_None" },
		{ "k_ETimelineEventClipPriority_Standard.Name", "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Standard" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used in AddTimelineEvent, where Featured events will be offered before Standard events" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Invalid", (int64)ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Invalid },
		{ "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_None", (int64)ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_None },
		{ "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Standard", (int64)ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Standard },
		{ "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Featured", (int64)ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Featured },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineEventClipPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"ESteamTimelineEventClipPriority",
	"ESteamTimelineEventClipPriority",
	Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineEventClipPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineEventClipPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineEventClipPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineEventClipPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineEventClipPriority()
{
	if (!Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTimelineEventClipPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.InnerSingleton;
}
// ********** End Enum ESteamTimelineEventClipPriority *********************************************

// ********** Begin ScriptStruct FTimelineEventHandle **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTimelineEventHandle;
class UScriptStruct* FTimelineEventHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTimelineEventHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTimelineEventHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineEventHandle, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("TimelineEventHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FTimelineEventHandle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTimelineEventHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineEventHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineEventHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"TimelineEventHandle",
	nullptr,
	0,
	sizeof(FTimelineEventHandle),
	alignof(FTimelineEventHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimelineEventHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FTimelineEventHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTimelineEventHandle.InnerSingleton, Z_Construct_UScriptStruct_FTimelineEventHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTimelineEventHandle.InnerSingleton;
}
// ********** End ScriptStruct FTimelineEventHandle ************************************************

// ********** Begin ScriptStruct FSteamTimelineEventRecordingExists ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamTimelineEventRecordingExists;
class UScriptStruct* FSteamTimelineEventRecordingExists::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamTimelineEventRecordingExists.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamTimelineEventRecordingExists.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamTimelineEventRecordingExists"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamTimelineEventRecordingExists.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecordingExists_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_EventID;
	static void NewProp_bRecordingExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordingExists;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamTimelineEventRecordingExists>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamTimelineEventRecordingExists, EventID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventID_MetaData), NewProp_EventID_MetaData) };
void Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::NewProp_bRecordingExists_SetBit(void* Obj)
{
	((FSteamTimelineEventRecordingExists*)Obj)->bRecordingExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::NewProp_bRecordingExists = { "bRecordingExists", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSteamTimelineEventRecordingExists), &Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::NewProp_bRecordingExists_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecordingExists_MetaData), NewProp_bRecordingExists_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::NewProp_EventID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::NewProp_bRecordingExists,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamTimelineEventRecordingExists",
	Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::PropPointers),
	sizeof(FSteamTimelineEventRecordingExists),
	alignof(FSteamTimelineEventRecordingExists),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamTimelineEventRecordingExists.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamTimelineEventRecordingExists.InnerSingleton, Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamTimelineEventRecordingExists.InnerSingleton;
}
// ********** End ScriptStruct FSteamTimelineEventRecordingExists **********************************

// ********** Begin ScriptStruct FSteamTimelineGamePhaseRecordingExists ****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamTimelineGamePhaseRecordingExists;
class UScriptStruct* FSteamTimelineGamePhaseRecordingExists::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamTimelineGamePhaseRecordingExists.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamTimelineGamePhaseRecordingExists.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamTimelineGamePhaseRecordingExists"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamTimelineGamePhaseRecordingExists.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseID_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingMS_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongestClipMS_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipCount_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotCount_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PhaseID;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RecordingMS;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_LongestClipMS;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClipCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScreenshotCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamTimelineGamePhaseRecordingExists>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewProp_PhaseID = { "PhaseID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamTimelineGamePhaseRecordingExists, PhaseID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseID_MetaData), NewProp_PhaseID_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewProp_RecordingMS = { "RecordingMS", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamTimelineGamePhaseRecordingExists, RecordingMS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingMS_MetaData), NewProp_RecordingMS_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewProp_LongestClipMS = { "LongestClipMS", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamTimelineGamePhaseRecordingExists, LongestClipMS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongestClipMS_MetaData), NewProp_LongestClipMS_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewProp_ClipCount = { "ClipCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamTimelineGamePhaseRecordingExists, ClipCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipCount_MetaData), NewProp_ClipCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewProp_ScreenshotCount = { "ScreenshotCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamTimelineGamePhaseRecordingExists, ScreenshotCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotCount_MetaData), NewProp_ScreenshotCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewProp_PhaseID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewProp_RecordingMS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewProp_LongestClipMS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewProp_ClipCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewProp_ScreenshotCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamTimelineGamePhaseRecordingExists",
	Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::PropPointers),
	sizeof(FSteamTimelineGamePhaseRecordingExists),
	alignof(FSteamTimelineGamePhaseRecordingExists),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamTimelineGamePhaseRecordingExists.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamTimelineGamePhaseRecordingExists.InnerSingleton, Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamTimelineGamePhaseRecordingExists.InnerSingleton;
}
// ********** End ScriptStruct FSteamTimelineGamePhaseRecordingExists ******************************

// ********** Begin Delegate FOnSteamTimelineEventRecordingExists **********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamTimelineEventRecordingExists_Parms
	{
		FSteamTimelineEventRecordingExists Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamTimelineEventRecordingExists_Parms, Data), Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3173330751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamTimelineEventRecordingExists__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamTimelineEventRecordingExists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamTimelineEventRecordingExists_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineEventRecordingExists__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamTimelineEventRecordingExists_DelegateWrapper(const FMulticastScriptDelegate& OnSteamTimelineEventRecordingExists, FSteamTimelineEventRecordingExists const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamTimelineEventRecordingExists_Parms
	{
		FSteamTimelineEventRecordingExists Data;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamTimelineEventRecordingExists_Parms Parms;
	Parms.Data=Data;
	OnSteamTimelineEventRecordingExists.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamTimelineEventRecordingExists ************************************

// ********** Begin Delegate FOnSteamTimelineGamePhaseRecordingExists ******************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamTimelineGamePhaseRecordingExists_Parms
	{
		FSteamTimelineGamePhaseRecordingExists Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamTimelineGamePhaseRecordingExists_Parms, Data), Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2944637949
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamTimelineGamePhaseRecordingExists__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamTimelineGamePhaseRecordingExists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamTimelineGamePhaseRecordingExists_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamTimelineGamePhaseRecordingExists__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamTimelineGamePhaseRecordingExists_DelegateWrapper(const FMulticastScriptDelegate& OnSteamTimelineGamePhaseRecordingExists, FSteamTimelineGamePhaseRecordingExists const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamTimelineGamePhaseRecordingExists_Parms
	{
		FSteamTimelineGamePhaseRecordingExists Data;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamTimelineGamePhaseRecordingExists_Parms Parms;
	Parms.Data=Data;
	OnSteamTimelineGamePhaseRecordingExists.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamTimelineGamePhaseRecordingExists ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamTimelineGameMode_StaticEnum, TEXT("ESteamTimelineGameMode"), &Z_Registration_Info_UEnum_ESteamTimelineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2994596060U) },
		{ ESteamTimelineEventClipPriority_StaticEnum, TEXT("ESteamTimelineEventClipPriority"), &Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1530433162U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTimelineEventHandle::StaticStruct, Z_Construct_UScriptStruct_FTimelineEventHandle_Statics::NewStructOps, TEXT("TimelineEventHandle"), &Z_Registration_Info_UScriptStruct_FTimelineEventHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimelineEventHandle), 3368931965U) },
		{ FSteamTimelineEventRecordingExists::StaticStruct, Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics::NewStructOps, TEXT("SteamTimelineEventRecordingExists"), &Z_Registration_Info_UScriptStruct_FSteamTimelineEventRecordingExists, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamTimelineEventRecordingExists), 3173330751U) },
		{ FSteamTimelineGamePhaseRecordingExists::StaticStruct, Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics::NewStructOps, TEXT("SteamTimelineGamePhaseRecordingExists"), &Z_Registration_Info_UScriptStruct_FSteamTimelineGamePhaseRecordingExists, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamTimelineGamePhaseRecordingExists), 2944637949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h__Script_OrionSteamSDKAPI_626034812(TEXT("/Script/OrionSteamSDKAPI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
