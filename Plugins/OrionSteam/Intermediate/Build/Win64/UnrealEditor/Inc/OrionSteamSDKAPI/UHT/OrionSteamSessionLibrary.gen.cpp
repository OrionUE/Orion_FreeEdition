// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamSessionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamSessionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamSessionLibrary();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamSessionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamSessionLibrary Function SendGameSessionInviteToFriend *********
struct Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics
{
	struct OrionSteamSessionLibrary_eventSendGameSessionInviteToFriend_Parms
	{
		int32 InLocalUserNum;
		FString InFriendSteamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Session" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamSessionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFriendSteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLocalUserNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFriendSteamId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::NewProp_InLocalUserNum = { "InLocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamSessionLibrary_eventSendGameSessionInviteToFriend_Parms, InLocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::NewProp_InFriendSteamId = { "InFriendSteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamSessionLibrary_eventSendGameSessionInviteToFriend_Parms, InFriendSteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFriendSteamId_MetaData), NewProp_InFriendSteamId_MetaData) };
void Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamSessionLibrary_eventSendGameSessionInviteToFriend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamSessionLibrary_eventSendGameSessionInviteToFriend_Parms), &Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::NewProp_InLocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::NewProp_InFriendSteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamSessionLibrary, nullptr, "SendGameSessionInviteToFriend", Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::OrionSteamSessionLibrary_eventSendGameSessionInviteToFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::OrionSteamSessionLibrary_eventSendGameSessionInviteToFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamSessionLibrary::execSendGameSessionInviteToFriend)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLocalUserNum);
	P_GET_PROPERTY(FStrProperty,Z_Param_InFriendSteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamSessionLibrary::SendGameSessionInviteToFriend(Z_Param_InLocalUserNum,Z_Param_InFriendSteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamSessionLibrary Function SendGameSessionInviteToFriend ***********

// ********** Begin Class UOrionSteamSessionLibrary ************************************************
void UOrionSteamSessionLibrary::StaticRegisterNativesUOrionSteamSessionLibrary()
{
	UClass* Class = UOrionSteamSessionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendGameSessionInviteToFriend", &UOrionSteamSessionLibrary::execSendGameSessionInviteToFriend },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamSessionLibrary;
UClass* UOrionSteamSessionLibrary::GetPrivateStaticClass()
{
	using TClass = UOrionSteamSessionLibrary;
	if (!Z_Registration_Info_UClass_UOrionSteamSessionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamSessionLibrary"),
			Z_Registration_Info_UClass_UOrionSteamSessionLibrary.InnerSingleton,
			StaticRegisterNativesUOrionSteamSessionLibrary,
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
	return Z_Registration_Info_UClass_UOrionSteamSessionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamSessionLibrary_NoRegister()
{
	return UOrionSteamSessionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamSessionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamSDKAPI/OrionSteamSessionLibrary.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamSessionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamSessionLibrary_SendGameSessionInviteToFriend, "SendGameSessionInviteToFriend" }, // 4115245789
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamSessionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamSessionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamSessionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamSessionLibrary_Statics::ClassParams = {
	&UOrionSteamSessionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamSessionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamSessionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamSessionLibrary()
{
	if (!Z_Registration_Info_UClass_UOrionSteamSessionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamSessionLibrary.OuterSingleton, Z_Construct_UClass_UOrionSteamSessionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamSessionLibrary.OuterSingleton;
}
UOrionSteamSessionLibrary::UOrionSteamSessionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamSessionLibrary);
UOrionSteamSessionLibrary::~UOrionSteamSessionLibrary() {}
// ********** End Class UOrionSteamSessionLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamSessionLibrary_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamSessionLibrary, UOrionSteamSessionLibrary::StaticClass, TEXT("UOrionSteamSessionLibrary"), &Z_Registration_Info_UClass_UOrionSteamSessionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamSessionLibrary), 871471827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamSessionLibrary_h__Script_OrionSteamSDKAPI_1722046402(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamSessionLibrary_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamSessionLibrary_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
