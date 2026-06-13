// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebGameNotificationsServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionCreateSession Function CreateSessionAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Context;
		FString Title;
		FString Users;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionCreateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameNotificationsService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates a brand new async session with the players specified in the request.\n\x09 *\n\x09 * The unique session id returned in this API call should be stored with the game session state of the game, as it will be used to reference other calls in the Game Notifications API\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID of the session to update.\n\x09 * @param\x09""Context\x09(int64)\x09\x09Game-specified Context value the game can use to associate the session with some object on their backend.\n\x09 * @param\x09Title\x09\x09\x09\x09The Title of the session to be displayed within each user's list of sessions.\n\x09 * @param\x09Users\x09\x09\x09\x09The initial state of all Users in the session.\n\x09 * @param\x09SteamId\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session and all Users being added to the session must be friends with the user.\n\x09 */" },
#endif
		{ "DisplayName", "Create Session" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a brand new async session with the players specified in the request.\n\nThe unique session id returned in this API call should be stored with the game session state of the game, as it will be used to reference other calls in the Game Notifications API\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           The App ID of the session to update.\n@param       Context (int64)         Game-specified Context value the game can use to associate the session with some object on their backend.\n@param       Title                           The Title of the session to be displayed within each user's list of sessions.\n@param       Users                           The initial state of all Users in the session.\n@param       SteamId                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session and all Users being added to the session must be friends with the user." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Users;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms, Context), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms, Users), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_Users,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession, nullptr, "CreateSessionAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::OrionSteamWebAPIAsyncActionCreateSession_eventCreateSessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionCreateSession::execCreateSessionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Users);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionCreateSession**)Z_Param__Result=UOrionSteamWebAPIAsyncActionCreateSession::CreateSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Context,Z_Param_Title,Z_Param_Users,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionCreateSession Function CreateSessionAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionCreateSession ********************************
void UOrionSteamWebAPIAsyncActionCreateSession::StaticRegisterNativesUOrionSteamWebAPIAsyncActionCreateSession()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionCreateSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSessionAsync", &UOrionSteamWebAPIAsyncActionCreateSession::execCreateSessionAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCreateSession;
UClass* UOrionSteamWebAPIAsyncActionCreateSession::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionCreateSession;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCreateSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionCreateSession"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCreateSession.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionCreateSession,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCreateSession.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionCreateSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionCreateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionCreateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionCreateSession_CreateSessionAsync, "CreateSessionAsync" }, // 4065182743
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionCreateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionCreateSession::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCreateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCreateSession.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCreateSession.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionCreateSession::UOrionSteamWebAPIAsyncActionCreateSession() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionCreateSession);
UOrionSteamWebAPIAsyncActionCreateSession::~UOrionSteamWebAPIAsyncActionCreateSession() {}
// ********** End Class UOrionSteamWebAPIAsyncActionCreateSession **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionUpdateSession Function UpdateSessionAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SessionId;
		int32 AppId;
		FString Title;
		FString Users;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionUpdateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameNotificationsService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Update a game session whenever the state of the game changes.\n\x09 *\n\x09 * Be sure to update the state of each user accordingly, as what is sent here will be reflected in user notifications for all Users in the game.\n\x09 * Any Users that were in the session that are not specified will be removed from the session, and any newly specified Users will be added to the session.\n\x09 * You must send the complete state of the session -- all previous state will be replaced by the newly specified state.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SessionId (int64)\x09The sessionid to update.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID of the session to update.\n\x09 * @param\x09Title\x09\x09\x09\x09(Optional) The new Title of the session. If not specified, the Title will not be changed.\n\x09 * @param\x09Users\x09\x09\x09\x09(Optional) A list of Users whose state will be updated to reflect the given state. If the Users are not already in the session, they will be added to it.\n\x09 * @param\x09SteamId\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session.\n\x09 */" },
#endif
		{ "DisplayName", "Update Session" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update a game session whenever the state of the game changes.\n\nBe sure to update the state of each user accordingly, as what is sent here will be reflected in user notifications for all Users in the game.\nAny Users that were in the session that are not specified will be removed from the session, and any newly specified Users will be added to the session.\nYou must send the complete state of the session -- all previous state will be replaced by the newly specified state.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SessionId (int64)       The sessionid to update.\n@param       AppId                           The App ID of the session to update.\n@param       Title                           (Optional) The new Title of the session. If not specified, the Title will not be changed.\n@param       Users                           (Optional) A list of Users whose state will be updated to reflect the given state. If the Users are not already in the session, they will be added to it.\n@param       SteamId                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Users;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, Users), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_Users,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession, nullptr, "UpdateSessionAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::OrionSteamWebAPIAsyncActionUpdateSession_eventUpdateSessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionUpdateSession::execUpdateSessionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Users);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionUpdateSession**)Z_Param__Result=UOrionSteamWebAPIAsyncActionUpdateSession::UpdateSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SessionId,Z_Param_AppId,Z_Param_Title,Z_Param_Users,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionUpdateSession Function UpdateSessionAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionUpdateSession ********************************
void UOrionSteamWebAPIAsyncActionUpdateSession::StaticRegisterNativesUOrionSteamWebAPIAsyncActionUpdateSession()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionUpdateSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateSessionAsync", &UOrionSteamWebAPIAsyncActionUpdateSession::execUpdateSessionAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUpdateSession;
UClass* UOrionSteamWebAPIAsyncActionUpdateSession::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionUpdateSession;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUpdateSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionUpdateSession"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUpdateSession.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionUpdateSession,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUpdateSession.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionUpdateSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionUpdateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionUpdateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUpdateSession_UpdateSessionAsync, "UpdateSessionAsync" }, // 2721709872
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionUpdateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionUpdateSession::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUpdateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUpdateSession.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUpdateSession.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionUpdateSession::UOrionSteamWebAPIAsyncActionUpdateSession() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionUpdateSession);
UOrionSteamWebAPIAsyncActionUpdateSession::~UOrionSteamWebAPIAsyncActionUpdateSession() {}
// ********** End Class UOrionSteamWebAPIAsyncActionUpdateSession **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp Function EnumerateSessionsForAppAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		bool bIncludeAllUserMessages;
		bool bIncludeAuthUserMessage;
		FString Language;
		UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameNotificationsService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This returns a list of sessions that a Steam ID is part of.\n\x09 *\n\x09 * The optional bools will return further details about each session if set.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09\x09The sessionid to request details for. Optional. If not specified, all the user's sessions will be returned.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09\x09The user whose sessions are to be enumerated.\n\x09 * @param\x09""bIncludeAllUserMessages\x09\x09(Optional) Set whether the message for all Users should be included. Defaults to false.\n\x09 * @param\x09""bIncludeAuthUserMessage\x09\x09(Optional) Set whether the message for the authenticated user should be included. Defaults to false.\n\x09 * @param\x09Language\x09\x09\x09\x09\x09(Optional) Language to localize the text in.\n\x09 */" },
#endif
		{ "DisplayName", "Enumerate Sessions for App" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This returns a list of sessions that a Steam ID is part of.\n\nThe optional bools will return further details about each session if set.\n\n@param       Key                                                     Steamworks Web API publisher authentication Key.\n@param       AppId                                           The sessionid to request details for. Optional. If not specified, all the user's sessions will be returned.\n@param       SteamId                                         The user whose sessions are to be enumerated.\n@param       bIncludeAllUserMessages         (Optional) Set whether the message for all Users should be included. Defaults to false.\n@param       bIncludeAuthUserMessage         (Optional) Set whether the message for the authenticated user should be included. Defaults to false.\n@param       Language                                        (Optional) Language to localize the text in." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bIncludeAllUserMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAllUserMessages;
	static void NewProp_bIncludeAuthUserMessage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAuthUserMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms*)Obj)->bIncludeAllUserMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages = { "bIncludeAllUserMessages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms*)Obj)->bIncludeAuthUserMessage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage = { "bIncludeAuthUserMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAllUserMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_bIncludeAuthUserMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp, nullptr, "EnumerateSessionsForAppAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::OrionSteamWebAPIAsyncActionEnumerateSessionsForApp_eventEnumerateSessionsForAppAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::execEnumerateSessionsForAppAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bIncludeAllUserMessages);
	P_GET_UBOOL(Z_Param_bIncludeAuthUserMessage);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp**)Z_Param__Result=UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::EnumerateSessionsForAppAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_bIncludeAllUserMessages,Z_Param_bIncludeAuthUserMessage,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp Function EnumerateSessionsForAppAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp **********************
void UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::StaticRegisterNativesUOrionSteamWebAPIAsyncActionEnumerateSessionsForApp()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumerateSessionsForAppAsync", &UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::execEnumerateSessionsForAppAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp;
UClass* UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionEnumerateSessionsForApp"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionEnumerateSessionsForApp,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync, "EnumerateSessionsForAppAsync" }, // 2600165382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp);
UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::~UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp() {}
// ********** End Class UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp ************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp Function GetSessionDetailsForAppAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString sessions;
		int32 AppId;
		FString Language;
		UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameNotificationsService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns details about specific session(s).\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09sessions\x09\x09\x09The session(s) to receive the details for\n\x09 * @param\x09""AppId\x09\x09\x09\x09The appid for the sessions.\n\x09 * @param\x09Language\x09\x09\x09Language to localize the text in.\n\x09 */" },
#endif
		{ "DisplayName", "Get Session Details for App" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns details about specific session(s).\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       sessions                        The session(s) to receive the details for\n@param       AppId                           The appid for the sessions.\n@param       Language                        Language to localize the text in." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_sessions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_sessions = { "sessions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, sessions), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_sessions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp, nullptr, "GetSessionDetailsForAppAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::OrionSteamWebAPIAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::OrionSteamWebAPIAsyncActionGetSessionDetailsForApp_eventGetSessionDetailsForAppAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::execGetSessionDetailsForAppAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_sessions);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::GetSessionDetailsForAppAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_sessions,Z_Param_AppId,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp Function GetSessionDetailsForAppAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp **********************
void UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetSessionDetailsForApp()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSessionDetailsForAppAsync", &UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::execGetSessionDetailsForAppAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp;
UClass* UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetSessionDetailsForApp"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetSessionDetailsForApp,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync, "GetSessionDetailsForAppAsync" }, // 3850269414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp);
UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::~UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp ************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionRequestNotifications Function RequestNotificationsAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionRequestNotifications* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameNotificationsService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests that a user receive game notifications for an app.\n\x09 *\n\x09 * Whenever a user starts a game that requires game notifications, the server must make a RequestNotifications call for the signed in user.\n\x09 * This will register your game to use offline notifications with the user by asking the user to opt into game notifications for your specific game.\n\x09 * Make this call, at most, once per game launch. Subsequent calls will not ask the user to opt in if the user has decided to opt out.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09The Steam ID to request notifications for.\n\x09 * @param\x09""AppId\x09\x09\x09The App ID to request notifications for.\n\x09 */" },
#endif
		{ "DisplayName", "Request Notifications" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests that a user receive game notifications for an app.\n\nWhenever a user starts a game that requires game notifications, the server must make a RequestNotifications call for the signed in user.\nThis will register your game to use offline notifications with the user by asking the user to opt into game notifications for your specific game.\nMake this call, at most, once per game launch. Subsequent calls will not ask the user to opt in if the user has decided to opt out.\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 The Steam ID to request notifications for.\n@param       AppId                   The App ID to request notifications for." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications, nullptr, "RequestNotificationsAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::OrionSteamWebAPIAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::OrionSteamWebAPIAsyncActionRequestNotifications_eventRequestNotificationsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionRequestNotifications::execRequestNotificationsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionRequestNotifications**)Z_Param__Result=UOrionSteamWebAPIAsyncActionRequestNotifications::RequestNotificationsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionRequestNotifications Function RequestNotificationsAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionRequestNotifications *************************
void UOrionSteamWebAPIAsyncActionRequestNotifications::StaticRegisterNativesUOrionSteamWebAPIAsyncActionRequestNotifications()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionRequestNotifications::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestNotificationsAsync", &UOrionSteamWebAPIAsyncActionRequestNotifications::execRequestNotificationsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications;
UClass* UOrionSteamWebAPIAsyncActionRequestNotifications::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionRequestNotifications;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionRequestNotifications"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionRequestNotifications,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionRequestNotifications::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionRequestNotifications\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionRequestNotifications\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestNotifications_RequestNotificationsAsync, "RequestNotificationsAsync" }, // 1567732253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionRequestNotifications>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionRequestNotifications::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionRequestNotifications::UOrionSteamWebAPIAsyncActionRequestNotifications() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionRequestNotifications);
UOrionSteamWebAPIAsyncActionRequestNotifications::~UOrionSteamWebAPIAsyncActionRequestNotifications() {}
// ********** End Class UOrionSteamWebAPIAsyncActionRequestNotifications ***************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionDeleteSession Function DeleteSessionAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionDeleteSession_eventDeleteSessionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SessionId;
		int32 AppId;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionDeleteSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameNotificationsService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Delete an active async game session. This will remove all notifications to any user that is part of the game session.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SessionId (int64)\x09The sessionid to delete.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID of the session to delete.\n\x09 * @param\x09SteamId\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session.\n\x09 */" },
#endif
		{ "DisplayName", "Delete Session" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete an active async game session. This will remove all notifications to any user that is part of the game session.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SessionId (int64)       The sessionid to delete.\n@param       AppId                           The App ID of the session to delete.\n@param       SteamId                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSession_eventDeleteSessionAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession, nullptr, "DeleteSessionAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::OrionSteamWebAPIAsyncActionDeleteSession_eventDeleteSessionAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::OrionSteamWebAPIAsyncActionDeleteSession_eventDeleteSessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionDeleteSession::execDeleteSessionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionDeleteSession**)Z_Param__Result=UOrionSteamWebAPIAsyncActionDeleteSession::DeleteSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SessionId,Z_Param_AppId,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionDeleteSession Function DeleteSessionAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionDeleteSession ********************************
void UOrionSteamWebAPIAsyncActionDeleteSession::StaticRegisterNativesUOrionSteamWebAPIAsyncActionDeleteSession()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionDeleteSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteSessionAsync", &UOrionSteamWebAPIAsyncActionDeleteSession::execDeleteSessionAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSession;
UClass* UOrionSteamWebAPIAsyncActionDeleteSession::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionDeleteSession;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionDeleteSession"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSession.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionDeleteSession,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSession.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionDeleteSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionDeleteSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionDeleteSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSession_DeleteSessionAsync, "DeleteSessionAsync" }, // 753906641
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionDeleteSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionDeleteSession::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSession.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSession.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionDeleteSession::UOrionSteamWebAPIAsyncActionDeleteSession() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionDeleteSession);
UOrionSteamWebAPIAsyncActionDeleteSession::~UOrionSteamWebAPIAsyncActionDeleteSession() {}
// ********** End Class UOrionSteamWebAPIAsyncActionDeleteSession **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionDeleteSessionBatch Function DeleteSessionBatchAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SessionId;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionDeleteSessionBatch* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|GameNotificationsService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Deletes a batch of async game sessions\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SessionId (int64)\x09The sessionid to delete.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID of the session to delete.\n\x09 */" },
#endif
		{ "DisplayName", "Delete Session Batch" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes a batch of async game sessions\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SessionId (int64)       The sessionid to delete.\n@param       AppId                           The App ID of the session to delete." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch, nullptr, "DeleteSessionBatchAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::OrionSteamWebAPIAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::OrionSteamWebAPIAsyncActionDeleteSessionBatch_eventDeleteSessionBatchAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionDeleteSessionBatch::execDeleteSessionBatchAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionDeleteSessionBatch**)Z_Param__Result=UOrionSteamWebAPIAsyncActionDeleteSessionBatch::DeleteSessionBatchAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SessionId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionDeleteSessionBatch Function DeleteSessionBatchAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionDeleteSessionBatch ***************************
void UOrionSteamWebAPIAsyncActionDeleteSessionBatch::StaticRegisterNativesUOrionSteamWebAPIAsyncActionDeleteSessionBatch()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionDeleteSessionBatch::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteSessionBatchAsync", &UOrionSteamWebAPIAsyncActionDeleteSessionBatch::execDeleteSessionBatchAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch;
UClass* UOrionSteamWebAPIAsyncActionDeleteSessionBatch::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionDeleteSessionBatch;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionDeleteSessionBatch"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionDeleteSessionBatch,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionDeleteSessionBatch::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionDeleteSessionBatch\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionDeleteSessionBatch\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync, "DeleteSessionBatchAsync" }, // 1233070673
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionDeleteSessionBatch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionDeleteSessionBatch::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionDeleteSessionBatch::UOrionSteamWebAPIAsyncActionDeleteSessionBatch() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionDeleteSessionBatch);
UOrionSteamWebAPIAsyncActionDeleteSessionBatch::~UOrionSteamWebAPIAsyncActionDeleteSessionBatch() {}
// ********** End Class UOrionSteamWebAPIAsyncActionDeleteSessionBatch *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameNotificationsService_WebGameNotificationsServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionCreateSession, UOrionSteamWebAPIAsyncActionCreateSession::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionCreateSession"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionCreateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionCreateSession), 2275136607U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUpdateSession, UOrionSteamWebAPIAsyncActionUpdateSession::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionUpdateSession"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUpdateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionUpdateSession), 3181085105U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp, UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionEnumerateSessionsForApp), 1752706818U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp, UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetSessionDetailsForApp), 710236404U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications, UOrionSteamWebAPIAsyncActionRequestNotifications::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionRequestNotifications"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestNotifications, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionRequestNotifications), 4172579116U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSession, UOrionSteamWebAPIAsyncActionDeleteSession::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionDeleteSession"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionDeleteSession), 2996077107U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch, UOrionSteamWebAPIAsyncActionDeleteSessionBatch::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionDeleteSessionBatch"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionDeleteSessionBatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionDeleteSessionBatch), 4271654883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameNotificationsService_WebGameNotificationsServiceAsyncActions_h__Script_OrionSteamWebAPI_1758519664(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameNotificationsService_WebGameNotificationsServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameNotificationsService_WebGameNotificationsServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
