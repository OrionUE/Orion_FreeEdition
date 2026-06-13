// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamWebAPI() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPI();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPI_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPISubsystem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPISubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPI ********************************************************
void UOrionSteamWebAPI::StaticRegisterNativesUOrionSteamWebAPI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPI;
UClass* UOrionSteamWebAPI::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPI;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPI"),
			Z_Registration_Info_UClass_UOrionSteamWebAPI.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPI,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPI.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPI_NoRegister()
{
	return UOrionSteamWebAPI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamWebAPI/OrionSteamWebAPI.h" },
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPI_Statics::ClassParams = {
	&UOrionSteamWebAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPI()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPI.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPI.OuterSingleton;
}
UOrionSteamWebAPI::UOrionSteamWebAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPI);
UOrionSteamWebAPI::~UOrionSteamWebAPI() {}
// ********** End Class UOrionSteamWebAPI **********************************************************

// ********** Begin Class UOrionSteamWebAPISubsystem ***********************************************
void UOrionSteamWebAPISubsystem::StaticRegisterNativesUOrionSteamWebAPISubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPISubsystem;
UClass* UOrionSteamWebAPISubsystem::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPISubsystem;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPISubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPISubsystem"),
			Z_Registration_Info_UClass_UOrionSteamWebAPISubsystem.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPISubsystem,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPISubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPISubsystem_NoRegister()
{
	return UOrionSteamWebAPISubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPISubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamWebAPI/OrionSteamWebAPI.h" },
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPISubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPISubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPISubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPISubsystem_Statics::ClassParams = {
	&UOrionSteamWebAPISubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPISubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPISubsystem()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPISubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPISubsystem.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPISubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPISubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPISubsystem);
UOrionSteamWebAPISubsystem::~UOrionSteamWebAPISubsystem() {}
// ********** End Class UOrionSteamWebAPISubsystem *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPI_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPI, UOrionSteamWebAPI::StaticClass, TEXT("UOrionSteamWebAPI"), &Z_Registration_Info_UClass_UOrionSteamWebAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPI), 1779440199U) },
		{ Z_Construct_UClass_UOrionSteamWebAPISubsystem, UOrionSteamWebAPISubsystem::StaticClass, TEXT("UOrionSteamWebAPISubsystem"), &Z_Registration_Info_UClass_UOrionSteamWebAPISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPISubsystem), 3012480040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPI_h__Script_OrionSteamWebAPI_1551233064(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPI_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPI_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
