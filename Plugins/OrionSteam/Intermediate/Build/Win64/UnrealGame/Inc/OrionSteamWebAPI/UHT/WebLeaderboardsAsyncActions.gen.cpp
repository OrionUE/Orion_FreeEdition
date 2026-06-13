// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Leaderboards/WebLeaderboardsAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebLeaderboardsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionDeleteLeaderboard Function DeleteLeaderboardAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Name;
		UOrionSteamWebAPIAsyncActionDeleteLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Leaderboards|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Delete Leaderboard\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09""appid of game\n\x09 * @param\x09Name\x09\x09Name of the leaderboard to delete\n\x09 */" },
#endif
		{ "DisplayName", "Delete Leaderboard" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete Leaderboard\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       AppId           appid of game\n@param       Name            Name of the leaderboard to delete" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard, nullptr, "DeleteLeaderboardAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::OrionSteamWebAPIAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::OrionSteamWebAPIAsyncActionDeleteLeaderboard_eventDeleteLeaderboardAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionDeleteLeaderboard::execDeleteLeaderboardAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionDeleteLeaderboard**)Z_Param__Result=UOrionSteamWebAPIAsyncActionDeleteLeaderboard::DeleteLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionDeleteLeaderboard Function DeleteLeaderboardAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionDeleteLeaderboard ****************************
void UOrionSteamWebAPIAsyncActionDeleteLeaderboard::StaticRegisterNativesUOrionSteamWebAPIAsyncActionDeleteLeaderboard()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionDeleteLeaderboard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteLeaderboardAsync", &UOrionSteamWebAPIAsyncActionDeleteLeaderboard::execDeleteLeaderboardAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard;
UClass* UOrionSteamWebAPIAsyncActionDeleteLeaderboard::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionDeleteLeaderboard;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionDeleteLeaderboard"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionDeleteLeaderboard,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionDeleteLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionDeleteLeaderboard\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionDeleteLeaderboard\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync, "DeleteLeaderboardAsync" }, // 3389507819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionDeleteLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionDeleteLeaderboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionDeleteLeaderboard::UOrionSteamWebAPIAsyncActionDeleteLeaderboard() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionDeleteLeaderboard);
UOrionSteamWebAPIAsyncActionDeleteLeaderboard::~UOrionSteamWebAPIAsyncActionDeleteLeaderboard() {}
// ********** End Class UOrionSteamWebAPIAsyncActionDeleteLeaderboard ******************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard Function FindOrCreateLeaderboardAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Name;
		FString SortMethod;
		FString DisplayType;
		bool bCreateIfNotFound;
		bool bOnlyTrustedWrites;
		bool bOnlyFriendsReads;
		UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Leaderboards|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find Or Create Leaderboard\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""appid of game\n\x09 * @param\x09Name\x09\x09\x09\x09\x09Name of the leaderboard to delete\n\x09 * @param\x09SortMethod\x09\x09\x09\x09sort method to use for this leaderboard (defaults to Ascending)\n\x09 * @param\x09""DisplayType\x09\x09\x09\x09""display type for this leaderboard (defaults to Numeric)\n\x09 * @param\x09""bCreateIfNotFound\x09\x09if this is true the leaderboard will be created if it doesn't exist. Defaults to true.\n\x09 * @param\x09""bOnlyTrustedWrites\x09\x09if this is true the leaderboard scores cannot be set by clients, and can only be set by publisher via SetLeaderboardScore WebAPI. Defaults to false.\n\x09 * @param\x09""bOnlyFriendsReads\x09\x09if this is true the leaderboard scores can only be read for friends by clients, scores can always be read by publisher. Defaults to false.\n\x09 */" },
#endif
		{ "CPP_Default_bCreateIfNotFound", "false" },
		{ "CPP_Default_bOnlyFriendsReads", "false" },
		{ "CPP_Default_bOnlyTrustedWrites", "false" },
		{ "CPP_Default_DisplayType", "Numeric" },
		{ "CPP_Default_SortMethod", "Ascending" },
		{ "DisplayName", "Find or Create Leaderboard" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Or Create Leaderboard\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       AppId                                   appid of game\n@param       Name                                    Name of the leaderboard to delete\n@param       SortMethod                              sort method to use for this leaderboard (defaults to Ascending)\n@param       DisplayType                             display type for this leaderboard (defaults to Numeric)\n@param       bCreateIfNotFound               if this is true the leaderboard will be created if it doesn't exist. Defaults to true.\n@param       bOnlyTrustedWrites              if this is true the leaderboard scores cannot be set by clients, and can only be set by publisher via SetLeaderboardScore WebAPI. Defaults to false.\n@param       bOnlyFriendsReads               if this is true the leaderboard scores can only be read for friends by clients, scores can always be read by publisher. Defaults to false." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayType;
	static void NewProp_bCreateIfNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNotFound;
	static void NewProp_bOnlyTrustedWrites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyTrustedWrites;
	static void NewProp_bOnlyFriendsReads_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyFriendsReads;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, SortMethod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, DisplayType), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms*)Obj)->bCreateIfNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound = { "bCreateIfNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms*)Obj)->bOnlyTrustedWrites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites = { "bOnlyTrustedWrites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms*)Obj)->bOnlyFriendsReads = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads = { "bOnlyFriendsReads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard, nullptr, "FindOrCreateLeaderboardAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_SortMethod);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayType);
	P_GET_UBOOL(Z_Param_bCreateIfNotFound);
	P_GET_UBOOL(Z_Param_bOnlyTrustedWrites);
	P_GET_UBOOL(Z_Param_bOnlyFriendsReads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard**)Z_Param__Result=UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Name,Z_Param_SortMethod,Z_Param_DisplayType,Z_Param_bCreateIfNotFound,Z_Param_bOnlyTrustedWrites,Z_Param_bOnlyFriendsReads);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard Function FindOrCreateLeaderboardAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard **********************
void UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::StaticRegisterNativesUOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindOrCreateLeaderboardAsync", &UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard;
UClass* UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionFindOrCreateLeaderboard"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync, "FindOrCreateLeaderboardAsync" }, // 2205260369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard);
UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::~UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard() {}
// ********** End Class UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard ************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetLeaderboardEntries Function GetLeaderboardEntriesAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 RangeStart;
		int32 RangeEnd;
		int32 LeaderboardId;
		int32 DataRequest;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionGetLeaderboardEntries* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Leaderboards|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Leaderboard Entries\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09 * @param\x09RangeStart\x09\x09\x09range start or 0\n\x09 * @param\x09RangeEnd\x09\x09\x09range end or max LB entries\n\x09 * @param\x09LeaderboardId\x09\x09ID of the leaderboard to view\n\x09 * @param\x09""DataRequest\x09\x09\x09type of request: RequestGlobal, RequestAroundUser, RequestFriends\n\x09 * @param\x09SteamId\x09\x09\x09\x09SteamID used for friend & around user requests\n\x09 */" },
#endif
		{ "DisplayName", "Get Leaderboard Entries" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Leaderboard Entries\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           appid of game\n@param       RangeStart                      range start or 0\n@param       RangeEnd                        range end or max LB entries\n@param       LeaderboardId           ID of the leaderboard to view\n@param       DataRequest                     type of request: RequestGlobal, RequestAroundUser, RequestFriends\n@param       SteamId                         SteamID used for friend & around user requests" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataRequest;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, RangeStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, RangeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_DataRequest = { "DataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, DataRequest), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_DataRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries, nullptr, "GetLeaderboardEntriesAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::OrionSteamWebAPIAsyncActionGetLeaderboardEntries_eventGetLeaderboardEntriesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::execGetLeaderboardEntriesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataRequest);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetLeaderboardEntries**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::GetLeaderboardEntriesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_RangeStart,Z_Param_RangeEnd,Z_Param_LeaderboardId,Z_Param_DataRequest,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetLeaderboardEntries Function GetLeaderboardEntriesAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetLeaderboardEntries ************************
void UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetLeaderboardEntries()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLeaderboardEntriesAsync", &UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::execGetLeaderboardEntriesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries;
UClass* UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetLeaderboardEntries;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetLeaderboardEntries"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetLeaderboardEntries,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetLeaderboardEntries\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetLeaderboardEntries\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync, "GetLeaderboardEntriesAsync" }, // 418168738
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetLeaderboardEntries>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::UOrionSteamWebAPIAsyncActionGetLeaderboardEntries() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetLeaderboardEntries);
UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::~UOrionSteamWebAPIAsyncActionGetLeaderboardEntries() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetLeaderboardEntries **************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame Function GetLeaderboardsForGameAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Leaderboards|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Leaderboards for Game\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09 */" },
#endif
		{ "DisplayName", "Get Leaderboards for Game" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Leaderboards for Game\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           appid of game" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame, nullptr, "GetLeaderboardsForGameAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::OrionSteamWebAPIAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::OrionSteamWebAPIAsyncActionGetLeaderboardsForGame_eventGetLeaderboardsForGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::execGetLeaderboardsForGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::GetLeaderboardsForGameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame Function GetLeaderboardsForGameAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame ***********************
void UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetLeaderboardsForGame()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLeaderboardsForGameAsync", &UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::execGetLeaderboardsForGameAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame;
UClass* UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetLeaderboardsForGame"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetLeaderboardsForGame,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync, "GetLeaderboardsForGameAsync" }, // 3259511915
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame);
UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::~UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame *************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionResetLeaderboard Function ResetLeaderboardAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 LeaderboardId;
		UOrionSteamWebAPIAsyncActionResetLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Leaderboards|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reset Leaderboard\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09 * @param\x09LeaderboardId\x09\x09numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n\x09 */" },
#endif
		{ "DisplayName", "Reset Leaderboard" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset Leaderboard\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           appid of game\n@param       LeaderboardId           numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard, nullptr, "ResetLeaderboardAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::OrionSteamWebAPIAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::OrionSteamWebAPIAsyncActionResetLeaderboard_eventResetLeaderboardAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionResetLeaderboard::execResetLeaderboardAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionResetLeaderboard**)Z_Param__Result=UOrionSteamWebAPIAsyncActionResetLeaderboard::ResetLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_LeaderboardId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionResetLeaderboard Function ResetLeaderboardAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionResetLeaderboard *****************************
void UOrionSteamWebAPIAsyncActionResetLeaderboard::StaticRegisterNativesUOrionSteamWebAPIAsyncActionResetLeaderboard()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionResetLeaderboard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetLeaderboardAsync", &UOrionSteamWebAPIAsyncActionResetLeaderboard::execResetLeaderboardAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard;
UClass* UOrionSteamWebAPIAsyncActionResetLeaderboard::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionResetLeaderboard;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionResetLeaderboard"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionResetLeaderboard,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionResetLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionResetLeaderboard\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionResetLeaderboard\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionResetLeaderboard_ResetLeaderboardAsync, "ResetLeaderboardAsync" }, // 1097036071
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionResetLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionResetLeaderboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionResetLeaderboard::UOrionSteamWebAPIAsyncActionResetLeaderboard() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionResetLeaderboard);
UOrionSteamWebAPIAsyncActionResetLeaderboard::~UOrionSteamWebAPIAsyncActionResetLeaderboard() {}
// ********** End Class UOrionSteamWebAPIAsyncActionResetLeaderboard *******************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionSetLeaderboardScore Function SetLeaderboardScoreAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 LeaderboardId;
		FString SteamId;
		int32 Score;
		TArray<uint8> Details;
		FString ScoreMethod;
		UOrionSteamWebAPIAsyncActionSetLeaderboardScore* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "details" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Leaderboards|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set Leaderboard Score\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09""appid of game\n\x09 * @param\x09LeaderboardId\x09\x09numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n\x09 * @param\x09SteamId\x09\x09\x09\x09SteamId to set the score for\n\x09 * @param\x09Score\x09\x09\x09\x09the score to set for this user\n\x09 * @param\x09""Details\x09\x09\x09\x09game-specific details for how the score was earned. Up to 256 bytes.\n\x09 * @param\x09ScoreMethod\x09\x09\x09update method to use. Can be \"KeepBest\" or \"ForceUpdate\"\n\x09 */" },
#endif
		{ "CPP_Default_ScoreMethod", "KeepBest" },
		{ "DisplayName", "Set Leaderboard Score" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Leaderboard Score\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           appid of game\n@param       LeaderboardId           numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n@param       SteamId                         SteamId to set the score for\n@param       Score                           the score to set for this user\n@param       Details                         game-specific details for how the score was earned. Up to 256 bytes.\n@param       ScoreMethod                     update method to use. Can be \"KeepBest\" or \"ForceUpdate\"" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Details_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Details;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScoreMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_ScoreMethod = { "ScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, ScoreMethod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_ScoreMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore, nullptr, "SetLeaderboardScoreAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::OrionSteamWebAPIAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionSetLeaderboardScore::execSetLeaderboardScoreAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_TARRAY(uint8,Z_Param_Details);
	P_GET_PROPERTY(FStrProperty,Z_Param_ScoreMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionSetLeaderboardScore**)Z_Param__Result=UOrionSteamWebAPIAsyncActionSetLeaderboardScore::SetLeaderboardScoreAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_LeaderboardId,Z_Param_SteamId,Z_Param_Score,Z_Param_Details,Z_Param_ScoreMethod);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionSetLeaderboardScore Function SetLeaderboardScoreAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionSetLeaderboardScore **************************
void UOrionSteamWebAPIAsyncActionSetLeaderboardScore::StaticRegisterNativesUOrionSteamWebAPIAsyncActionSetLeaderboardScore()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionSetLeaderboardScore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetLeaderboardScoreAsync", &UOrionSteamWebAPIAsyncActionSetLeaderboardScore::execSetLeaderboardScoreAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore;
UClass* UOrionSteamWebAPIAsyncActionSetLeaderboardScore::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionSetLeaderboardScore;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionSetLeaderboardScore"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionSetLeaderboardScore,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionSetLeaderboardScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionSetLeaderboardScore\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Leaderboards/WebLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboardsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionSetLeaderboardScore\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync, "SetLeaderboardScoreAsync" }, // 312481733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionSetLeaderboardScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionSetLeaderboardScore::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionSetLeaderboardScore::UOrionSteamWebAPIAsyncActionSetLeaderboardScore() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionSetLeaderboardScore);
UOrionSteamWebAPIAsyncActionSetLeaderboardScore::~UOrionSteamWebAPIAsyncActionSetLeaderboardScore() {}
// ********** End Class UOrionSteamWebAPIAsyncActionSetLeaderboardScore ****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboardsAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard, UOrionSteamWebAPIAsyncActionDeleteLeaderboard::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionDeleteLeaderboard"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionDeleteLeaderboard), 1777168870U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard, UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard), 2855250339U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries, UOrionSteamWebAPIAsyncActionGetLeaderboardEntries::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetLeaderboardEntries"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetLeaderboardEntries), 3041083190U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame, UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame), 2465023310U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard, UOrionSteamWebAPIAsyncActionResetLeaderboard::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionResetLeaderboard"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionResetLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionResetLeaderboard), 1454730736U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore, UOrionSteamWebAPIAsyncActionSetLeaderboardScore::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionSetLeaderboardScore"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetLeaderboardScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionSetLeaderboardScore), 1065640413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboardsAsyncActions_h__Script_OrionSteamWebAPI_2335307093(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboardsAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboardsAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
