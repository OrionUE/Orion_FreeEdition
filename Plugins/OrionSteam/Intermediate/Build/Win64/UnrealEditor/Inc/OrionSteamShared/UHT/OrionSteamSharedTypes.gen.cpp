// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamSharedTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamSharedTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ORIONSTEAMSHARED_API UEnum* Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState();
ORIONSTEAMSHARED_API UEnum* Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter();
ORIONSTEAMSHARED_API UFunction* Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature();
ORIONSTEAMSHARED_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint();
ORIONSTEAMSHARED_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint();
ORIONSTEAMSHARED_API UScriptStruct* Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo();
ORIONSTEAMSHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
UPackage* Z_Construct_UPackage__Script_OrionSteamShared();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamLobbyDistanceFilter *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter;
static UEnum* ESteamLobbyDistanceFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter, (UObject*)Z_Construct_UPackage__Script_OrionSteamShared(), TEXT("ESteamLobbyDistanceFilter"));
	}
	return Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton;
}
template<> ORIONSTEAMSHARED_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>()
{
	return ESteamLobbyDistanceFilter_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// lobby search distance. Lobby results are sorted from closest to farthest.\n" },
#endif
		{ "k_ELobbyDistanceFilterClose.Comment", "// only lobbies in the same immediate region will be returned\n" },
		{ "k_ELobbyDistanceFilterClose.DisplayName", "Close" },
		{ "k_ELobbyDistanceFilterClose.Name", "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterClose" },
		{ "k_ELobbyDistanceFilterClose.ToolTip", "only lobbies in the same immediate region will be returned" },
		{ "k_ELobbyDistanceFilterDefault.Comment", "// only lobbies in the same region or near by regions\n" },
		{ "k_ELobbyDistanceFilterDefault.DisplayName", "Default" },
		{ "k_ELobbyDistanceFilterDefault.Name", "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterDefault" },
		{ "k_ELobbyDistanceFilterDefault.ToolTip", "only lobbies in the same region or near by regions" },
		{ "k_ELobbyDistanceFilterFar.Comment", "// for games that don't have many latency requirements, will return lobbies about half-way around the globe\n" },
		{ "k_ELobbyDistanceFilterFar.DisplayName", "Far" },
		{ "k_ELobbyDistanceFilterFar.Name", "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterFar" },
		{ "k_ELobbyDistanceFilterFar.ToolTip", "for games that don't have many latency requirements, will return lobbies about half-way around the globe" },
		{ "k_ELobbyDistanceFilterWorldwide.Comment", "// no filtering, will match lobbies as far as India to NY (not recommended, expect multiple seconds of latency between the clients)\n" },
		{ "k_ELobbyDistanceFilterWorldwide.DisplayName", "WorldWide" },
		{ "k_ELobbyDistanceFilterWorldwide.Name", "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterWorldwide" },
		{ "k_ELobbyDistanceFilterWorldwide.ToolTip", "no filtering, will match lobbies as far as India to NY (not recommended, expect multiple seconds of latency between the clients)" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "lobby search distance. Lobby results are sorted from closest to farthest." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterClose", (int64)ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterClose },
		{ "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterDefault", (int64)ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterDefault },
		{ "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterFar", (int64)ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterFar },
		{ "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterWorldwide", (int64)ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterWorldwide },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamShared,
	nullptr,
	"ESteamLobbyDistanceFilter",
	"ESteamLobbyDistanceFilter",
	Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton, Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton;
}
// ********** End Enum ESteamLobbyDistanceFilter ***************************************************

// ********** Begin Enum EOnlineFriendOrionSteamPresenceState **************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineFriendOrionSteamPresenceState;
static UEnum* EOnlineFriendOrionSteamPresenceState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOnlineFriendOrionSteamPresenceState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOnlineFriendOrionSteamPresenceState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState, (UObject*)Z_Construct_UPackage__Script_OrionSteamShared(), TEXT("EOnlineFriendOrionSteamPresenceState"));
	}
	return Z_Registration_Info_UEnum_EOnlineFriendOrionSteamPresenceState.OuterSingleton;
}
template<> ORIONSTEAMSHARED_API UEnum* StaticEnum<EOnlineFriendOrionSteamPresenceState>()
{
	return EOnlineFriendOrionSteamPresenceState_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Away.Comment", "/** User is away */" },
		{ "Away.Name", "EOnlineFriendOrionSteamPresenceState::Away" },
		{ "Away.ToolTip", "User is away" },
		{ "BlueprintType", "true" },
		{ "DoNotDisturb.Comment", "/** User is in do not disturb mode */" },
		{ "DoNotDisturb.Name", "EOnlineFriendOrionSteamPresenceState::DoNotDisturb" },
		{ "DoNotDisturb.ToolTip", "User is in do not disturb mode" },
		{ "ExtendedAway.Comment", "/** User is away for >2 hours (can change depending on platform) */" },
		{ "ExtendedAway.Name", "EOnlineFriendOrionSteamPresenceState::ExtendedAway" },
		{ "ExtendedAway.ToolTip", "User is away for >2 hours (can change depending on platform)" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
		{ "Offline.Comment", "/** User is offline */" },
		{ "Offline.Name", "EOnlineFriendOrionSteamPresenceState::Offline" },
		{ "Offline.ToolTip", "User is offline" },
		{ "Online.Comment", "/** User is online */" },
		{ "Online.Name", "EOnlineFriendOrionSteamPresenceState::Online" },
		{ "Online.ToolTip", "User is online" },
		{ "Unknown.Comment", "/** Default */" },
		{ "Unknown.Name", "EOnlineFriendOrionSteamPresenceState::Unknown" },
		{ "Unknown.ToolTip", "Default" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOnlineFriendOrionSteamPresenceState::Offline", (int64)EOnlineFriendOrionSteamPresenceState::Offline },
		{ "EOnlineFriendOrionSteamPresenceState::Online", (int64)EOnlineFriendOrionSteamPresenceState::Online },
		{ "EOnlineFriendOrionSteamPresenceState::Away", (int64)EOnlineFriendOrionSteamPresenceState::Away },
		{ "EOnlineFriendOrionSteamPresenceState::ExtendedAway", (int64)EOnlineFriendOrionSteamPresenceState::ExtendedAway },
		{ "EOnlineFriendOrionSteamPresenceState::DoNotDisturb", (int64)EOnlineFriendOrionSteamPresenceState::DoNotDisturb },
		{ "EOnlineFriendOrionSteamPresenceState::Unknown", (int64)EOnlineFriendOrionSteamPresenceState::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamShared,
	nullptr,
	"EOnlineFriendOrionSteamPresenceState",
	"EOnlineFriendOrionSteamPresenceState",
	Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState()
{
	if (!Z_Registration_Info_UEnum_EOnlineFriendOrionSteamPresenceState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineFriendOrionSteamPresenceState.InnerSingleton, Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOnlineFriendOrionSteamPresenceState.InnerSingleton;
}
// ********** End Enum EOnlineFriendOrionSteamPresenceState ****************************************

// ********** Begin ScriptStruct FOnlineUserPresenceOrionSteamBlueprint ****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint;
class UScriptStruct* FOnlineUserPresenceOrionSteamBlueprint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint, (UObject*)Z_Construct_UPackage__Script_OrionSteamShared(), TEXT("OnlineUserPresenceOrionSteamBlueprint"));
	}
	return Z_Registration_Info_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnline_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingThisGame_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsJoinable_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasVoiceSupport_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastOnline_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceState_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsOnline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnline;
	static void NewProp_bIsPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
	static void NewProp_bIsPlayingThisGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingThisGame;
	static void NewProp_bIsJoinable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJoinable;
	static void NewProp_bHasVoiceSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVoiceSupport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastOnline;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PresenceState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PresenceState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineUserPresenceOrionSteamBlueprint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsOnline_SetBit(void* Obj)
{
	((FOnlineUserPresenceOrionSteamBlueprint*)Obj)->bIsOnline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsOnline = { "bIsOnline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOnlineUserPresenceOrionSteamBlueprint), &Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsOnline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOnline_MetaData), NewProp_bIsOnline_MetaData) };
void Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
{
	((FOnlineUserPresenceOrionSteamBlueprint*)Obj)->bIsPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOnlineUserPresenceOrionSteamBlueprint), &Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlaying_MetaData), NewProp_bIsPlaying_MetaData) };
void Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsPlayingThisGame_SetBit(void* Obj)
{
	((FOnlineUserPresenceOrionSteamBlueprint*)Obj)->bIsPlayingThisGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsPlayingThisGame = { "bIsPlayingThisGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOnlineUserPresenceOrionSteamBlueprint), &Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsPlayingThisGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayingThisGame_MetaData), NewProp_bIsPlayingThisGame_MetaData) };
void Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsJoinable_SetBit(void* Obj)
{
	((FOnlineUserPresenceOrionSteamBlueprint*)Obj)->bIsJoinable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsJoinable = { "bIsJoinable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOnlineUserPresenceOrionSteamBlueprint), &Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsJoinable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsJoinable_MetaData), NewProp_bIsJoinable_MetaData) };
void Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bHasVoiceSupport_SetBit(void* Obj)
{
	((FOnlineUserPresenceOrionSteamBlueprint*)Obj)->bHasVoiceSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bHasVoiceSupport = { "bHasVoiceSupport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOnlineUserPresenceOrionSteamBlueprint), &Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bHasVoiceSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasVoiceSupport_MetaData), NewProp_bHasVoiceSupport_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_LastOnline = { "LastOnline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineUserPresenceOrionSteamBlueprint, LastOnline), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastOnline_MetaData), NewProp_LastOnline_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_PresenceState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_PresenceState = { "PresenceState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineUserPresenceOrionSteamBlueprint, PresenceState), Z_Construct_UEnum_OrionSteamShared_EOnlineFriendOrionSteamPresenceState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceState_MetaData), NewProp_PresenceState_MetaData) }; // 912289407
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsOnline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsPlayingThisGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bIsJoinable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_bHasVoiceSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_LastOnline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_PresenceState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewProp_PresenceState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamShared,
	nullptr,
	&NewStructOps,
	"OnlineUserPresenceOrionSteamBlueprint",
	Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::PropPointers),
	sizeof(FOnlineUserPresenceOrionSteamBlueprint),
	alignof(FOnlineUserPresenceOrionSteamBlueprint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint()
{
	if (!Z_Registration_Info_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint.InnerSingleton, Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint.InnerSingleton;
}
// ********** End ScriptStruct FOnlineUserPresenceOrionSteamBlueprint ******************************

// ********** Begin ScriptStruct FOrionSteamAudioInputDeviceInfo ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOrionSteamAudioInputDeviceInfo;
class UScriptStruct* FOrionSteamAudioInputDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOrionSteamAudioInputDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOrionSteamAudioInputDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo, (UObject*)Z_Construct_UPackage__Script_OrionSteamShared(), TEXT("OrionSteamAudioInputDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FOrionSteamAudioInputDeviceInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Platform audio input device info, in a Blueprint-readable format\n */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform audio input device info, in a Blueprint-readable format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the audio device */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the audio device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ID of the device. */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID of the device." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputChannels_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of channels supported by the audio device */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of channels supported by the audio device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredSampleRate_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The preferred sample rate of the audio device */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The preferred sample rate of the audio device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsHardwareAEC_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not the device supports Acoustic Echo Canceling */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not the device supports Acoustic Echo Canceling" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreferredSampleRate;
	static void NewProp_bSupportsHardwareAEC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsHardwareAEC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrionSteamAudioInputDeviceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrionSteamAudioInputDeviceInfo, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrionSteamAudioInputDeviceInfo, DeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_InputChannels = { "InputChannels", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrionSteamAudioInputDeviceInfo, InputChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputChannels_MetaData), NewProp_InputChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_PreferredSampleRate = { "PreferredSampleRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrionSteamAudioInputDeviceInfo, PreferredSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredSampleRate_MetaData), NewProp_PreferredSampleRate_MetaData) };
void Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC_SetBit(void* Obj)
{
	((FOrionSteamAudioInputDeviceInfo*)Obj)->bSupportsHardwareAEC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC = { "bSupportsHardwareAEC", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOrionSteamAudioInputDeviceInfo), &Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsHardwareAEC_MetaData), NewProp_bSupportsHardwareAEC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_InputChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_PreferredSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamShared,
	nullptr,
	&NewStructOps,
	"OrionSteamAudioInputDeviceInfo",
	Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::PropPointers),
	sizeof(FOrionSteamAudioInputDeviceInfo),
	alignof(FOrionSteamAudioInputDeviceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FOrionSteamAudioInputDeviceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOrionSteamAudioInputDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOrionSteamAudioInputDeviceInfo.InnerSingleton;
}
// ********** End ScriptStruct FOrionSteamAudioInputDeviceInfo *************************************

// ********** Begin ScriptStruct FOnlineFriendOrionSteamBlueprint **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOnlineFriendOrionSteamBlueprint;
class UScriptStruct* FOnlineFriendOrionSteamBlueprint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOnlineFriendOrionSteamBlueprint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOnlineFriendOrionSteamBlueprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint, (UObject*)Z_Construct_UPackage__Script_OrionSteamShared(), TEXT("OnlineFriendOrionSteamBlueprint"));
	}
	return Z_Registration_Info_UScriptStruct_FOnlineFriendOrionSteamBlueprint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Presence_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RealName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Presence;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineFriendOrionSteamBlueprint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineFriendOrionSteamBlueprint, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::NewProp_RealName = { "RealName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineFriendOrionSteamBlueprint, RealName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealName_MetaData), NewProp_RealName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineFriendOrionSteamBlueprint, Presence), Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Presence_MetaData), NewProp_Presence_MetaData) }; // 2506251295
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineFriendOrionSteamBlueprint, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::NewProp_RealName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::NewProp_Presence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamShared,
	nullptr,
	&NewStructOps,
	"OnlineFriendOrionSteamBlueprint",
	Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::PropPointers),
	sizeof(FOnlineFriendOrionSteamBlueprint),
	alignof(FOnlineFriendOrionSteamBlueprint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint()
{
	if (!Z_Registration_Info_UScriptStruct_FOnlineFriendOrionSteamBlueprint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOnlineFriendOrionSteamBlueprint.InnerSingleton, Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOnlineFriendOrionSteamBlueprint.InnerSingleton;
}
// ********** End ScriptStruct FOnlineFriendOrionSteamBlueprint ************************************

// ********** Begin ScriptStruct FSteamSessionSetting **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamSessionSetting;
class UScriptStruct* FSteamSessionSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamSessionSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamSessionSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamSessionSetting, (UObject*)Z_Construct_UPackage__Script_OrionSteamShared(), TEXT("SteamSessionSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamSessionSetting.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamSessionSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamSessionSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamShared,
	nullptr,
	&NewStructOps,
	"SteamSessionSetting",
	nullptr,
	0,
	sizeof(FSteamSessionSetting),
	alignof(FSteamSessionSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamSessionSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamSessionSetting.InnerSingleton, Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamSessionSetting.InnerSingleton;
}
// ********** End ScriptStruct FSteamSessionSetting ************************************************

// ********** Begin Delegate FOnOrionSteamAudioInputDevicesObtained ********************************
struct Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics
{
	struct _Script_OrionSteamShared_eventOnOrionSteamAudioInputDevicesObtained_Parms
	{
		TArray<FOrionSteamAudioInputDeviceInfo> AvailableDevices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Called when a list of all available audio devices is retrieved\n */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSharedTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a list of all available audio devices is retrieved" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableDevices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableDevices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_Inner = { "AvailableDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 2165814420
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices = { "AvailableDevices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamShared_eventOnOrionSteamAudioInputDevicesObtained_Parms, AvailableDevices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableDevices_MetaData), NewProp_AvailableDevices_MetaData) }; // 2165814420
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamShared, nullptr, "OnOrionSteamAudioInputDevicesObtained__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::_Script_OrionSteamShared_eventOnOrionSteamAudioInputDevicesObtained_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::_Script_OrionSteamShared_eventOnOrionSteamAudioInputDevicesObtained_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOrionSteamAudioInputDevicesObtained_DelegateWrapper(const FScriptDelegate& OnOrionSteamAudioInputDevicesObtained, TArray<FOrionSteamAudioInputDeviceInfo> const& AvailableDevices)
{
	struct _Script_OrionSteamShared_eventOnOrionSteamAudioInputDevicesObtained_Parms
	{
		TArray<FOrionSteamAudioInputDeviceInfo> AvailableDevices;
	};
	_Script_OrionSteamShared_eventOnOrionSteamAudioInputDevicesObtained_Parms Parms;
	Parms.AvailableDevices=AvailableDevices;
	OnOrionSteamAudioInputDevicesObtained.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnOrionSteamAudioInputDevicesObtained **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h__Script_OrionSteamShared_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamLobbyDistanceFilter_StaticEnum, TEXT("ESteamLobbyDistanceFilter"), &Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2792033207U) },
		{ EOnlineFriendOrionSteamPresenceState_StaticEnum, TEXT("EOnlineFriendOrionSteamPresenceState"), &Z_Registration_Info_UEnum_EOnlineFriendOrionSteamPresenceState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 912289407U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOnlineUserPresenceOrionSteamBlueprint::StaticStruct, Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics::NewStructOps, TEXT("OnlineUserPresenceOrionSteamBlueprint"), &Z_Registration_Info_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineUserPresenceOrionSteamBlueprint), 2506251295U) },
		{ FOrionSteamAudioInputDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics::NewStructOps, TEXT("OrionSteamAudioInputDeviceInfo"), &Z_Registration_Info_UScriptStruct_FOrionSteamAudioInputDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrionSteamAudioInputDeviceInfo), 2165814420U) },
		{ FOnlineFriendOrionSteamBlueprint::StaticStruct, Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics::NewStructOps, TEXT("OnlineFriendOrionSteamBlueprint"), &Z_Registration_Info_UScriptStruct_FOnlineFriendOrionSteamBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineFriendOrionSteamBlueprint), 366832869U) },
		{ FSteamSessionSetting::StaticStruct, Z_Construct_UScriptStruct_FSteamSessionSetting_Statics::NewStructOps, TEXT("SteamSessionSetting"), &Z_Registration_Info_UScriptStruct_FSteamSessionSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamSessionSetting), 1619414451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h__Script_OrionSteamShared_3460564715(TEXT("/Script/OrionSteamShared"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h__Script_OrionSteamShared_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h__Script_OrionSteamShared_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h__Script_OrionSteamShared_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h__Script_OrionSteamShared_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
