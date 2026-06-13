// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInventory/WebGameInventoryAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebGameInventoryAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails Function GetHistoryCommandDetailsAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString Command;
		FString ContextId;
		FString Arguments;
		UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameInventory|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a history of Commands\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09""appid of game\n\x09 * @param\x09SteamId\x09\x09\x09The steam ID of the account to operate on\n\x09 * @param\x09""Command\x09\x09\x09The Command to run on that asset\n\x09 * @param\x09""ContextId\x09\x09The context to fetch history for\n\x09 * @param\x09""Arguments\x09\x09The arguments that were provided with the Command in the first place\n\x09 */" },
#endif
		{ "DisplayName", "Get History Command Details" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a history of Commands\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       AppId                   appid of game\n@param       SteamId                 The steam ID of the account to operate on\n@param       Command                 The Command to run on that asset\n@param       ContextId               The context to fetch history for\n@param       Arguments               The arguments that were provided with the Command in the first place" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Arguments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, Command), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, Arguments), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Arguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails, nullptr, "GetHistoryCommandDetailsAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::OrionSteamWebAPIAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::execGetHistoryCommandDetailsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Arguments);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::GetHistoryCommandDetailsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_Command,Z_Param_ContextId,Z_Param_Arguments);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails Function GetHistoryCommandDetailsAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails *********************
void UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetHistoryCommandDetails()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHistoryCommandDetailsAsync", &UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::execGetHistoryCommandDetailsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails;
UClass* UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetHistoryCommandDetails"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetHistoryCommandDetails,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameInventory/WebGameInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync, "GetHistoryCommandDetailsAsync" }, // 4007945741
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails);
UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::~UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails ***********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetUserHistory Function GetUserHistoryAsync **
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString ContextId;
		int32 StartTime;
		int32 EndTime;
		UOrionSteamWebAPIAsyncActionGetUserHistory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameInventory|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a history of user\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09""appid of game\n\x09 * @param\x09SteamId\x09\x09\x09The Steam ID to fetch history for\n\x09 * @param\x09""ContextId\x09\x09The context to fetch history for\n\x09 * @param\x09StartTime\x09\x09Start time of the history range to collect\n\x09 * @param\x09""EndTime\x09\x09\x09""End time of the history range to collect\n\x09 */" },
#endif
		{ "DisplayName", "Get User History" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a history of user\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       AppId                   appid of game\n@param       SteamId                 The Steam ID to fetch history for\n@param       ContextId               The context to fetch history for\n@param       StartTime               Start time of the history range to collect\n@param       EndTime                 End time of the history range to collect" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, EndTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory, nullptr, "GetUserHistoryAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::OrionSteamWebAPIAsyncActionGetUserHistory_eventGetUserHistoryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetUserHistory::execGetUserHistoryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetUserHistory**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetUserHistory::GetUserHistoryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ContextId,Z_Param_StartTime,Z_Param_EndTime);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetUserHistory Function GetUserHistoryAsync ****

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetUserHistory *******************************
void UOrionSteamWebAPIAsyncActionGetUserHistory::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetUserHistory()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetUserHistory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserHistoryAsync", &UOrionSteamWebAPIAsyncActionGetUserHistory::execGetUserHistoryAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory;
UClass* UOrionSteamWebAPIAsyncActionGetUserHistory::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetUserHistory;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetUserHistory"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetUserHistory,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetUserHistory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameInventory/WebGameInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserHistory_GetUserHistoryAsync, "GetUserHistoryAsync" }, // 418472510
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetUserHistory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetUserHistory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetUserHistory::UOrionSteamWebAPIAsyncActionGetUserHistory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetUserHistory);
UOrionSteamWebAPIAsyncActionGetUserHistory::~UOrionSteamWebAPIAsyncActionGetUserHistory() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetUserHistory *********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionHistoryExecuteCommand Function HistoryExecuteCommandAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString ContextId;
		int32 ActorId;
		UOrionSteamWebAPIAsyncActionHistoryExecuteCommand* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameInventory|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a history of user\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09""appid of game\n\x09 * @param\x09SteamId\x09\x09\x09The Steam ID to fetch history for\n\x09 * @param\x09""ContextId\x09\x09The context to fetch history for\n\x09 * @param\x09""ActorId\x09\x09\x09""A unique 32 bit ID for the support person executing the Command\n\x09 */" },
#endif
		{ "DisplayName", "History Execute Commands" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a history of user\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       AppId                   appid of game\n@param       SteamId                 The Steam ID to fetch history for\n@param       ContextId               The context to fetch history for\n@param       ActorId                 A unique 32 bit ID for the support person executing the Command" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActorId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ActorId = { "ActorId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, ActorId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ActorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand, nullptr, "HistoryExecuteCommandAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::OrionSteamWebAPIAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::OrionSteamWebAPIAsyncActionHistoryExecuteCommand_eventHistoryExecuteCommandAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::execHistoryExecuteCommandAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActorId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionHistoryExecuteCommand**)Z_Param__Result=UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::HistoryExecuteCommandAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ContextId,Z_Param_ActorId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionHistoryExecuteCommand Function HistoryExecuteCommandAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionHistoryExecuteCommand ************************
void UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::StaticRegisterNativesUOrionSteamWebAPIAsyncActionHistoryExecuteCommand()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HistoryExecuteCommandAsync", &UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::execHistoryExecuteCommandAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand;
UClass* UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionHistoryExecuteCommand;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionHistoryExecuteCommand"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionHistoryExecuteCommand,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionHistoryExecuteCommand\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameInventory/WebGameInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionHistoryExecuteCommand\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync, "HistoryExecuteCommandAsync" }, // 1797029864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionHistoryExecuteCommand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::UOrionSteamWebAPIAsyncActionHistoryExecuteCommand() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionHistoryExecuteCommand);
UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::~UOrionSteamWebAPIAsyncActionHistoryExecuteCommand() {}
// ********** End Class UOrionSteamWebAPIAsyncActionHistoryExecuteCommand **************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionSupportGetAssetHistory Function SupportGetAssetHistoryAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString AssetId;
		FString ContextId;
		UOrionSteamWebAPIAsyncActionSupportGetAssetHistory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameInventory|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a history of user\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09""appid of game\n\x09 * @param\x09""AssetId\x09\x09\x09The asset ID to operate on\n\x09 * @param\x09""ContextId\x09\x09The context to fetch history for\n\x09 */" },
#endif
		{ "DisplayName", "Support Get Asset History" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a history of user\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       AppId                   appid of game\n@param       AssetId                 The asset ID to operate on\n@param       ContextId               The context to fetch history for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, AssetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory, nullptr, "SupportGetAssetHistoryAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::OrionSteamWebAPIAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::OrionSteamWebAPIAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::execSupportGetAssetHistoryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionSupportGetAssetHistory**)Z_Param__Result=UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::SupportGetAssetHistoryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_AssetId,Z_Param_ContextId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionSupportGetAssetHistory Function SupportGetAssetHistoryAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionSupportGetAssetHistory ***********************
void UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::StaticRegisterNativesUOrionSteamWebAPIAsyncActionSupportGetAssetHistory()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SupportGetAssetHistoryAsync", &UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::execSupportGetAssetHistoryAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory;
UClass* UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionSupportGetAssetHistory;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionSupportGetAssetHistory"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionSupportGetAssetHistory,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionSupportGetAssetHistory\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameInventory/WebGameInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventoryAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionSupportGetAssetHistory\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync, "SupportGetAssetHistoryAsync" }, // 3507308945
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionSupportGetAssetHistory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::UOrionSteamWebAPIAsyncActionSupportGetAssetHistory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionSupportGetAssetHistory);
UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::~UOrionSteamWebAPIAsyncActionSupportGetAssetHistory() {}
// ********** End Class UOrionSteamWebAPIAsyncActionSupportGetAssetHistory *************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails, UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails), 2444364633U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory, UOrionSteamWebAPIAsyncActionGetUserHistory::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetUserHistory"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetUserHistory), 1674507783U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand, UOrionSteamWebAPIAsyncActionHistoryExecuteCommand::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionHistoryExecuteCommand"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionHistoryExecuteCommand), 2267568560U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory, UOrionSteamWebAPIAsyncActionSupportGetAssetHistory::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionSupportGetAssetHistory"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionSupportGetAssetHistory), 3412942763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h__Script_OrionSteamWebAPI_1348932458(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
