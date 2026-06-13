// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerService/WebPlayerServiceAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebPlayerServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames Function GetRecentlyPlayedGamesAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 Count;
		UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets information about a player's recently played games\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09The player we're asking about\n\x09 * @param\x09""Count\x09\x09The number of games to return (0/unset: all)\n\x09 */" },
#endif
		{ "DisplayName", "Get Recently PlayedGames" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets information about a player's recently played games\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       SteamId         The player we're asking about\n@param       Count           The number of games to return (0/unset: all)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames, nullptr, "GetRecentlyPlayedGamesAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::OrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::OrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_eventGetRecentlyPlayedGamesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::execGetRecentlyPlayedGamesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::GetRecentlyPlayedGamesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames Function GetRecentlyPlayedGamesAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames ***********************
void UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRecentlyPlayedGamesAsync", &UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::execGetRecentlyPlayedGamesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames;
UClass* UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetRecentlyPlayedGames"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync, "GetRecentlyPlayedGamesAsync" }, // 262341243
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames);
UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::~UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames *************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetOwnedGames Function GetOwnedGamesAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		bool bIncludeAppInfo;
		bool bIncludePlayedFreeGames;
		TArray<int32> Filter;
		UOrionSteamWebAPIAsyncActionGetOwnedGames* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return a list of games owned by the player\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09\x09The player we're asking about\n\x09 * @param\x09""bIncludeAppInfo\x09\x09\x09\x09true if we want additional details (name, icon) about each game\n\x09 * @param\x09""bIncludePlayedFreeGames\x09\x09""Free games are excluded by default. If this is set, free games the user has played will be returned.\n\x09 * @param\x09""Filter\x09\x09\x09\x09\x09\x09if set, restricts result set to the passed in apps\n\x09 */" },
#endif
		{ "DisplayName", "Get Owned Games" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a list of games owned by the player\n\n@param       Key                                                     Steamworks Web API publisher authentication Key.\n@param       SteamId                                         The player we're asking about\n@param       bIncludeAppInfo                         true if we want additional details (name, icon) about each game\n@param       bIncludePlayedFreeGames         Free games are excluded by default. If this is set, free games the user has played will be returned.\n@param       Filter                                          if set, restricts result set to the passed in apps" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bIncludeAppInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAppInfo;
	static void NewProp_bIncludePlayedFreeGames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludePlayedFreeGames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Filter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms*)Obj)->bIncludeAppInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo = { "bIncludeAppInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms*)Obj)->bIncludePlayedFreeGames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames = { "bIncludePlayedFreeGames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter_Inner = { "Filter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, Filter), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludeAppInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_bIncludePlayedFreeGames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames, nullptr, "GetOwnedGamesAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::OrionSteamWebAPIAsyncActionGetOwnedGames_eventGetOwnedGamesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetOwnedGames::execGetOwnedGamesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bIncludeAppInfo);
	P_GET_UBOOL(Z_Param_bIncludePlayedFreeGames);
	P_GET_TARRAY(int32,Z_Param_Filter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetOwnedGames**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetOwnedGames::GetOwnedGamesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_bIncludeAppInfo,Z_Param_bIncludePlayedFreeGames,Z_Param_Filter);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetOwnedGames Function GetOwnedGamesAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetOwnedGames ********************************
void UOrionSteamWebAPIAsyncActionGetOwnedGames::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetOwnedGames()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetOwnedGames::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwnedGamesAsync", &UOrionSteamWebAPIAsyncActionGetOwnedGames::execGetOwnedGamesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames;
UClass* UOrionSteamWebAPIAsyncActionGetOwnedGames::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetOwnedGames;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetOwnedGames"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetOwnedGames,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetOwnedGames::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetOwnedGames\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetOwnedGames\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetOwnedGames_GetOwnedGamesAsync, "GetOwnedGamesAsync" }, // 1379758873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetOwnedGames>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetOwnedGames::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetOwnedGames::UOrionSteamWebAPIAsyncActionGetOwnedGames() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetOwnedGames);
UOrionSteamWebAPIAsyncActionGetOwnedGames::~UOrionSteamWebAPIAsyncActionGetOwnedGames() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetOwnedGames **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetSteamLevel Function GetSteamLevelAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionGetSteamLevel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the Steam Level of a user\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09\x09The player we're asking about\n\x09 */" },
#endif
		{ "DisplayName", "Get Steam Level" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Steam Level of a user\n\n@param       Key                                                     Steamworks Web API publisher authentication Key.\n@param       SteamId                                         The player we're asking about" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel, nullptr, "GetSteamLevelAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::OrionSteamWebAPIAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::OrionSteamWebAPIAsyncActionGetSteamLevel_eventGetSteamLevelAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetSteamLevel::execGetSteamLevelAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetSteamLevel**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetSteamLevel::GetSteamLevelAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetSteamLevel Function GetSteamLevelAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetSteamLevel ********************************
void UOrionSteamWebAPIAsyncActionGetSteamLevel::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetSteamLevel()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetSteamLevel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSteamLevelAsync", &UOrionSteamWebAPIAsyncActionGetSteamLevel::execGetSteamLevelAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel;
UClass* UOrionSteamWebAPIAsyncActionGetSteamLevel::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetSteamLevel;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetSteamLevel"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetSteamLevel,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetSteamLevel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetSteamLevel\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetSteamLevel\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSteamLevel_GetSteamLevelAsync, "GetSteamLevelAsync" }, // 3817142497
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetSteamLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetSteamLevel::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetSteamLevel::UOrionSteamWebAPIAsyncActionGetSteamLevel() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetSteamLevel);
UOrionSteamWebAPIAsyncActionGetSteamLevel::~UOrionSteamWebAPIAsyncActionGetSteamLevel() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetSteamLevel **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetBadges Function GetBadgesAsync ************
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetBadges_eventGetBadgesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionGetBadges* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets badges that are owned by a specific user\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09 */" },
#endif
		{ "DisplayName", "Get Badges" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets badges that are owned by a specific user\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 The player we're asking about" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetBadges_eventGetBadgesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetBadges_eventGetBadgesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetBadges_eventGetBadgesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetBadges_eventGetBadgesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges, nullptr, "GetBadgesAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::OrionSteamWebAPIAsyncActionGetBadges_eventGetBadgesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::OrionSteamWebAPIAsyncActionGetBadges_eventGetBadgesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetBadges::execGetBadgesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetBadges**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetBadges::GetBadgesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetBadges Function GetBadgesAsync **************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetBadges ************************************
void UOrionSteamWebAPIAsyncActionGetBadges::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetBadges()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetBadges::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBadgesAsync", &UOrionSteamWebAPIAsyncActionGetBadges::execGetBadgesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetBadges;
UClass* UOrionSteamWebAPIAsyncActionGetBadges::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetBadges;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetBadges.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetBadges"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetBadges.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetBadges,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetBadges.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetBadges::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetBadges\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetBadges\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetBadges_GetBadgesAsync, "GetBadgesAsync" }, // 4273734309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetBadges>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetBadges::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetBadges.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetBadges.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetBadges.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetBadges::UOrionSteamWebAPIAsyncActionGetBadges() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetBadges);
UOrionSteamWebAPIAsyncActionGetBadges::~UOrionSteamWebAPIAsyncActionGetBadges() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetBadges **************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress Function GetCommunityBadgeProgressAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 BadgeId;
		UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets all the quests needed to get the specified badge, and which are completed\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09 * @param\x09""BadgeId\x09\x09\x09The badge we're asking about\n\x09 */" },
#endif
		{ "DisplayName", "Get Community Badge Progress" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the quests needed to get the specified badge, and which are completed\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 The player we're asking about\n@param       BadgeId                 The badge we're asking about" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BadgeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_BadgeId = { "BadgeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms, BadgeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_BadgeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress, nullptr, "GetCommunityBadgeProgressAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::OrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::OrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_eventGetCommunityBadgeProgressAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::execGetCommunityBadgeProgressAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_BadgeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::GetCommunityBadgeProgressAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_BadgeId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress Function GetCommunityBadgeProgressAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress ********************
void UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCommunityBadgeProgressAsync", &UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::execGetCommunityBadgeProgressAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress;
UClass* UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetCommunityBadgeProgress"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync, "GetCommunityBadgeProgressAsync" }, // 3731422115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress);
UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::~UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress **********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionIsPlayingSharedGame Function IsPlayingSharedGameAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppIdPlaying;
		UOrionSteamWebAPIAsyncActionIsPlayingSharedGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns valid lender SteamID if game currently played is borrowed\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09 * @param\x09""AppIdPlaying\x09The game player is currently playing\n\x09 */" },
#endif
		{ "DisplayName", "Is Playing Shared Game" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns valid lender SteamID if game currently played is borrowed\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 The player we're asking about\n@param       AppIdPlaying    The game player is currently playing" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppIdPlaying;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_AppIdPlaying = { "AppIdPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms, AppIdPlaying), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_AppIdPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame, nullptr, "IsPlayingSharedGameAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::OrionSteamWebAPIAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::OrionSteamWebAPIAsyncActionIsPlayingSharedGame_eventIsPlayingSharedGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::execIsPlayingSharedGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppIdPlaying);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionIsPlayingSharedGame**)Z_Param__Result=UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::IsPlayingSharedGameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppIdPlaying);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionIsPlayingSharedGame Function IsPlayingSharedGameAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionIsPlayingSharedGame **************************
void UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::StaticRegisterNativesUOrionSteamWebAPIAsyncActionIsPlayingSharedGame()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPlayingSharedGameAsync", &UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::execIsPlayingSharedGameAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame;
UClass* UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionIsPlayingSharedGame;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionIsPlayingSharedGame"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionIsPlayingSharedGame,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionIsPlayingSharedGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "PlayerService/WebPlayerServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionIsPlayingSharedGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync, "IsPlayingSharedGameAsync" }, // 3095287686
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionIsPlayingSharedGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::UOrionSteamWebAPIAsyncActionIsPlayingSharedGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionIsPlayingSharedGame);
UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::~UOrionSteamWebAPIAsyncActionIsPlayingSharedGame() {}
// ********** End Class UOrionSteamWebAPIAsyncActionIsPlayingSharedGame ****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames, UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetRecentlyPlayedGames), 2267401647U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames, UOrionSteamWebAPIAsyncActionGetOwnedGames::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetOwnedGames"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetOwnedGames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetOwnedGames), 3270696419U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel, UOrionSteamWebAPIAsyncActionGetSteamLevel::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetSteamLevel"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSteamLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetSteamLevel), 2385919428U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetBadges, UOrionSteamWebAPIAsyncActionGetBadges::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetBadges"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetBadges, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetBadges), 4202246107U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress, UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetCommunityBadgeProgress), 122757685U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame, UOrionSteamWebAPIAsyncActionIsPlayingSharedGame::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionIsPlayingSharedGame"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionIsPlayingSharedGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionIsPlayingSharedGame), 1131823640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerServiceAsyncActions_h__Script_OrionSteamWebAPI_1715565625(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
