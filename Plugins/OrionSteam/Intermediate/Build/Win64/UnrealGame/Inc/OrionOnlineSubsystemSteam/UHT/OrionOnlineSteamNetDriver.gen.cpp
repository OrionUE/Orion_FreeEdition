// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionOnlineSteamNetDriver.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionOnlineSteamNetDriver() {}

// ********** Begin Cross Module References ********************************************************
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSteamNetDriver();
ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSteamNetDriver_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionOnlineSubsystemSteam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionOnlineSteamNetDriver ***********************************************
void UOrionOnlineSteamNetDriver::StaticRegisterNativesUOrionOnlineSteamNetDriver()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionOnlineSteamNetDriver;
UClass* UOrionOnlineSteamNetDriver::GetPrivateStaticClass()
{
	using TClass = UOrionOnlineSteamNetDriver;
	if (!Z_Registration_Info_UClass_UOrionOnlineSteamNetDriver.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionOnlineSteamNetDriver"),
			Z_Registration_Info_UClass_UOrionOnlineSteamNetDriver.InnerSingleton,
			StaticRegisterNativesUOrionOnlineSteamNetDriver,
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
	return Z_Registration_Info_UClass_UOrionOnlineSteamNetDriver.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionOnlineSteamNetDriver_NoRegister()
{
	return UOrionOnlineSteamNetDriver::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionOnlineSteamNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionOnlineSteamNetDriver.h" },
		{ "ModuleRelativePath", "Private/OrionOnlineSteamNetDriver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionOnlineSteamNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionOnlineSteamNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionOnlineSubsystemSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionOnlineSteamNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionOnlineSteamNetDriver_Statics::ClassParams = {
	&UOrionOnlineSteamNetDriver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionOnlineSteamNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionOnlineSteamNetDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionOnlineSteamNetDriver()
{
	if (!Z_Registration_Info_UClass_UOrionOnlineSteamNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionOnlineSteamNetDriver.OuterSingleton, Z_Construct_UClass_UOrionOnlineSteamNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionOnlineSteamNetDriver.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionOnlineSteamNetDriver);
UOrionOnlineSteamNetDriver::~UOrionOnlineSteamNetDriver() {}
// ********** End Class UOrionOnlineSteamNetDriver *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_OrionOnlineSteamNetDriver_h__Script_OrionOnlineSubsystemSteam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionOnlineSteamNetDriver, UOrionOnlineSteamNetDriver::StaticClass, TEXT("UOrionOnlineSteamNetDriver"), &Z_Registration_Info_UClass_UOrionOnlineSteamNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionOnlineSteamNetDriver), 366294532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_OrionOnlineSteamNetDriver_h__Script_OrionOnlineSubsystemSteam_1755126120(TEXT("/Script/OrionOnlineSubsystemSteam"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_OrionOnlineSteamNetDriver_h__Script_OrionOnlineSubsystemSteam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_OrionOnlineSteamNetDriver_h__Script_OrionOnlineSubsystemSteam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
