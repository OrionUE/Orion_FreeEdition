// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sessions/OrionOnlineSessionInterfaceSteam.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionOnlineSessionInterfaceSteam() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils();
ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionOnlineSubsystemSteam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionOnlineSessionInterfaceSteamUtils Function GetJoinedLobbyIds ********
struct Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics
{
	struct OrionOnlineSessionInterfaceSteamUtils_eventGetJoinedLobbyIds_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/Sessions/OrionOnlineSessionInterfaceSteam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionOnlineSessionInterfaceSteamUtils_eventGetJoinedLobbyIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils, nullptr, "GetJoinedLobbyIds", Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::OrionOnlineSessionInterfaceSteamUtils_eventGetJoinedLobbyIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::OrionOnlineSessionInterfaceSteamUtils_eventGetJoinedLobbyIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionOnlineSessionInterfaceSteamUtils::execGetJoinedLobbyIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UOrionOnlineSessionInterfaceSteamUtils::GetJoinedLobbyIds();
	P_NATIVE_END;
}
// ********** End Class UOrionOnlineSessionInterfaceSteamUtils Function GetJoinedLobbyIds **********

// ********** Begin Class UOrionOnlineSessionInterfaceSteamUtils Function GetLastJoinedLobbyId *****
struct Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics
{
	struct OrionOnlineSessionInterfaceSteamUtils_eventGetLastJoinedLobbyId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/Sessions/OrionOnlineSessionInterfaceSteam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionOnlineSessionInterfaceSteamUtils_eventGetLastJoinedLobbyId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils, nullptr, "GetLastJoinedLobbyId", Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::OrionOnlineSessionInterfaceSteamUtils_eventGetLastJoinedLobbyId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::OrionOnlineSessionInterfaceSteamUtils_eventGetLastJoinedLobbyId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionOnlineSessionInterfaceSteamUtils::execGetLastJoinedLobbyId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionOnlineSessionInterfaceSteamUtils::GetLastJoinedLobbyId();
	P_NATIVE_END;
}
// ********** End Class UOrionOnlineSessionInterfaceSteamUtils Function GetLastJoinedLobbyId *******

// ********** Begin Class UOrionOnlineSessionInterfaceSteamUtils ***********************************
void UOrionOnlineSessionInterfaceSteamUtils::StaticRegisterNativesUOrionOnlineSessionInterfaceSteamUtils()
{
	UClass* Class = UOrionOnlineSessionInterfaceSteamUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetJoinedLobbyIds", &UOrionOnlineSessionInterfaceSteamUtils::execGetJoinedLobbyIds },
		{ "GetLastJoinedLobbyId", &UOrionOnlineSessionInterfaceSteamUtils::execGetLastJoinedLobbyId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionOnlineSessionInterfaceSteamUtils;
UClass* UOrionOnlineSessionInterfaceSteamUtils::GetPrivateStaticClass()
{
	using TClass = UOrionOnlineSessionInterfaceSteamUtils;
	if (!Z_Registration_Info_UClass_UOrionOnlineSessionInterfaceSteamUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionOnlineSessionInterfaceSteamUtils"),
			Z_Registration_Info_UClass_UOrionOnlineSessionInterfaceSteamUtils.InnerSingleton,
			StaticRegisterNativesUOrionOnlineSessionInterfaceSteamUtils,
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
	return Z_Registration_Info_UClass_UOrionOnlineSessionInterfaceSteamUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils_NoRegister()
{
	return UOrionOnlineSessionInterfaceSteamUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sessions/OrionOnlineSessionInterfaceSteam.h" },
		{ "ModuleRelativePath", "Public/Sessions/OrionOnlineSessionInterfaceSteam.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetJoinedLobbyIds, "GetJoinedLobbyIds" }, // 1558974977
		{ &Z_Construct_UFunction_UOrionOnlineSessionInterfaceSteamUtils_GetLastJoinedLobbyId, "GetLastJoinedLobbyId" }, // 818401974
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionOnlineSessionInterfaceSteamUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionOnlineSubsystemSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils_Statics::ClassParams = {
	&UOrionOnlineSessionInterfaceSteamUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils()
{
	if (!Z_Registration_Info_UClass_UOrionOnlineSessionInterfaceSteamUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionOnlineSessionInterfaceSteamUtils.OuterSingleton, Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionOnlineSessionInterfaceSteamUtils.OuterSingleton;
}
UOrionOnlineSessionInterfaceSteamUtils::UOrionOnlineSessionInterfaceSteamUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionOnlineSessionInterfaceSteamUtils);
UOrionOnlineSessionInterfaceSteamUtils::~UOrionOnlineSessionInterfaceSteamUtils() {}
// ********** End Class UOrionOnlineSessionInterfaceSteamUtils *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_Sessions_OrionOnlineSessionInterfaceSteam_h__Script_OrionOnlineSubsystemSteam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionOnlineSessionInterfaceSteamUtils, UOrionOnlineSessionInterfaceSteamUtils::StaticClass, TEXT("UOrionOnlineSessionInterfaceSteamUtils"), &Z_Registration_Info_UClass_UOrionOnlineSessionInterfaceSteamUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionOnlineSessionInterfaceSteamUtils), 624844003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_Sessions_OrionOnlineSessionInterfaceSteam_h__Script_OrionOnlineSubsystemSteam_609617373(TEXT("/Script/OrionOnlineSubsystemSteam"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_Sessions_OrionOnlineSessionInterfaceSteam_h__Script_OrionOnlineSubsystemSteam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_Sessions_OrionOnlineSessionInterfaceSteam_h__Script_OrionOnlineSubsystemSteam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
