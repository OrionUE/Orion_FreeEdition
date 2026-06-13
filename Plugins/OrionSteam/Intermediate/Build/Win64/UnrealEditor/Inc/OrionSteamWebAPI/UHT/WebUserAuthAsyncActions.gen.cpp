// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUserAuth/WebUserAuthAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebUserAuthAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionAuthenticateUser Function AuthenticateUserAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms
	{
		UObject* WorldContextObject;
		FString SteamId;
		TArray<uint8> SessionKey;
		TArray<uint8> EncryptedLoginKey;
		UOrionSteamWebAPIAsyncActionAuthenticateUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Authenticate User\n\x09 *\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09Should be the users steamid, unencrypted.\n\x09 * @param\x09SessionKey\x09\x09\x09\x09Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.\n\x09 * @param\x09""EncryptedLoginKey\x09\x09Should be the users hashed loginkey, AES encrypted with the sessionkey.\n\x09 */" },
#endif
		{ "DisplayName", "Authenticate User" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuthAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authenticate User\n\n@param       SteamId                                 Should be the users steamid, unencrypted.\n@param       SessionKey                              Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.\n@param       EncryptedLoginKey               Should be the users hashed loginkey, AES encrypted with the sessionkey." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionKey_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncryptedLoginKey_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncryptedLoginKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SessionKey_Inner = { "SessionKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SessionKey = { "SessionKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms, SessionKey), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_EncryptedLoginKey_Inner = { "EncryptedLoginKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_EncryptedLoginKey = { "EncryptedLoginKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms, EncryptedLoginKey), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SessionKey_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_SessionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_EncryptedLoginKey_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_EncryptedLoginKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser, nullptr, "AuthenticateUserAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::OrionSteamWebAPIAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::OrionSteamWebAPIAsyncActionAuthenticateUser_eventAuthenticateUserAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionAuthenticateUser::execAuthenticateUserAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(uint8,Z_Param_SessionKey);
	P_GET_TARRAY(uint8,Z_Param_EncryptedLoginKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionAuthenticateUser**)Z_Param__Result=UOrionSteamWebAPIAsyncActionAuthenticateUser::AuthenticateUserAsync(Z_Param_WorldContextObject,Z_Param_SteamId,Z_Param_SessionKey,Z_Param_EncryptedLoginKey);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionAuthenticateUser Function AuthenticateUserAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionAuthenticateUser *****************************
void UOrionSteamWebAPIAsyncActionAuthenticateUser::StaticRegisterNativesUOrionSteamWebAPIAsyncActionAuthenticateUser()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionAuthenticateUser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AuthenticateUserAsync", &UOrionSteamWebAPIAsyncActionAuthenticateUser::execAuthenticateUserAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser;
UClass* UOrionSteamWebAPIAsyncActionAuthenticateUser::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionAuthenticateUser;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionAuthenticateUser"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionAuthenticateUser,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionAuthenticateUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionAuthenticateUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserAuth/WebUserAuthAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuthAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionAuthenticateUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUser_AuthenticateUserAsync, "AuthenticateUserAsync" }, // 13639342
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionAuthenticateUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionAuthenticateUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionAuthenticateUser::UOrionSteamWebAPIAsyncActionAuthenticateUser() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionAuthenticateUser);
UOrionSteamWebAPIAsyncActionAuthenticateUser::~UOrionSteamWebAPIAsyncActionAuthenticateUser() {}
// ********** End Class UOrionSteamWebAPIAsyncActionAuthenticateUser *******************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionAuthenticateUserTicket Function AuthenticateUserTicketAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString Ticket;
		UOrionSteamWebAPIAsyncActionAuthenticateUserTicket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Authenticate User Ticket\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""AppId\x09\x09The App ID to get the betas of.\n\x09 * @param\x09Ticket\x09\x09""Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter.\n\x09 */" },
#endif
		{ "DisplayName", "Authenticate User Ticket" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuthAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authenticate User Ticket\n\n@param       Key                     Steamworks Web API publisher authentication key.\n@param       AppId           The App ID to get the betas of.\n@param       Ticket          Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms, Ticket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket, nullptr, "AuthenticateUserTicketAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::OrionSteamWebAPIAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::OrionSteamWebAPIAsyncActionAuthenticateUserTicket_eventAuthenticateUserTicketAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::execAuthenticateUserTicketAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ticket);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionAuthenticateUserTicket**)Z_Param__Result=UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::AuthenticateUserTicketAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_Ticket);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionAuthenticateUserTicket Function AuthenticateUserTicketAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionAuthenticateUserTicket ***********************
void UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::StaticRegisterNativesUOrionSteamWebAPIAsyncActionAuthenticateUserTicket()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AuthenticateUserTicketAsync", &UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::execAuthenticateUserTicketAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket;
UClass* UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionAuthenticateUserTicket;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionAuthenticateUserTicket"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionAuthenticateUserTicket,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionAuthenticateUserTicket\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserAuth/WebUserAuthAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuthAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionAuthenticateUserTicket\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync, "AuthenticateUserTicketAsync" }, // 4275877
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionAuthenticateUserTicket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::UOrionSteamWebAPIAsyncActionAuthenticateUserTicket() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionAuthenticateUserTicket);
UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::~UOrionSteamWebAPIAsyncActionAuthenticateUserTicket() {}
// ********** End Class UOrionSteamWebAPIAsyncActionAuthenticateUserTicket *************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserAuth_WebUserAuthAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser, UOrionSteamWebAPIAsyncActionAuthenticateUser::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionAuthenticateUser"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionAuthenticateUser), 2948408215U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket, UOrionSteamWebAPIAsyncActionAuthenticateUserTicket::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionAuthenticateUserTicket"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAuthenticateUserTicket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionAuthenticateUserTicket), 929224473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserAuth_WebUserAuthAsyncActions_h__Script_OrionSteamWebAPI_3275068514(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserAuth_WebUserAuthAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserAuth_WebUserAuthAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
