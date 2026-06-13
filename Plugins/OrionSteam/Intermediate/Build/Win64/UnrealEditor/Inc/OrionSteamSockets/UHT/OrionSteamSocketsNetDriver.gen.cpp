// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamSocketsNetDriver.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamSocketsNetDriver() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
ORIONSTEAMSOCKETS_API UClass* Z_Construct_UClass_UOrionSteamSocketsNetDriver();
ORIONSTEAMSOCKETS_API UClass* Z_Construct_UClass_UOrionSteamSocketsNetDriver_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamSockets();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamSocketsNetDriver **********************************************
void UOrionSteamSocketsNetDriver::StaticRegisterNativesUOrionSteamSocketsNetDriver()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamSocketsNetDriver;
UClass* UOrionSteamSocketsNetDriver::GetPrivateStaticClass()
{
	using TClass = UOrionSteamSocketsNetDriver;
	if (!Z_Registration_Info_UClass_UOrionSteamSocketsNetDriver.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamSocketsNetDriver"),
			Z_Registration_Info_UClass_UOrionSteamSocketsNetDriver.InnerSingleton,
			StaticRegisterNativesUOrionSteamSocketsNetDriver,
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
	return Z_Registration_Info_UClass_UOrionSteamSocketsNetDriver.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamSocketsNetDriver_NoRegister()
{
	return UOrionSteamSocketsNetDriver::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamSocketsNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamSocketsNetDriver.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSocketsNetDriver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamSocketsNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamSocketsNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamSocketsNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamSocketsNetDriver_Statics::ClassParams = {
	&UOrionSteamSocketsNetDriver::StaticClass,
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
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamSocketsNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamSocketsNetDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamSocketsNetDriver()
{
	if (!Z_Registration_Info_UClass_UOrionSteamSocketsNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamSocketsNetDriver.OuterSingleton, Z_Construct_UClass_UOrionSteamSocketsNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamSocketsNetDriver.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamSocketsNetDriver);
UOrionSteamSocketsNetDriver::~UOrionSteamSocketsNetDriver() {}
// ********** End Class UOrionSteamSocketsNetDriver ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSockets_Public_OrionSteamSocketsNetDriver_h__Script_OrionSteamSockets_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamSocketsNetDriver, UOrionSteamSocketsNetDriver::StaticClass, TEXT("UOrionSteamSocketsNetDriver"), &Z_Registration_Info_UClass_UOrionSteamSocketsNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamSocketsNetDriver), 3373501028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSockets_Public_OrionSteamSocketsNetDriver_h__Script_OrionSteamSockets_4176627494(TEXT("/Script/OrionSteamSockets"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSockets_Public_OrionSteamSocketsNetDriver_h__Script_OrionSteamSockets_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSockets_Public_OrionSteamSocketsNetDriver_h__Script_OrionSteamSockets_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
