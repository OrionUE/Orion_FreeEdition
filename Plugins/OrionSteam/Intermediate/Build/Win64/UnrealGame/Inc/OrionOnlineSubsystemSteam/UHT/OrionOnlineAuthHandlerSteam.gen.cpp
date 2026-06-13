// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Auth/OrionOnlineAuthHandlerSteam.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionOnlineAuthHandlerSteam() {}

// ********** Begin Cross Module References ********************************************************
ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface();
ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface_NoRegister();
PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
UPackage* Z_Construct_UPackage__Script_OrionOnlineSubsystemSteam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionOnlineSteamAuthComponentModuleInterface ****************************
void UOrionOnlineSteamAuthComponentModuleInterface::StaticRegisterNativesUOrionOnlineSteamAuthComponentModuleInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionOnlineSteamAuthComponentModuleInterface;
UClass* UOrionOnlineSteamAuthComponentModuleInterface::GetPrivateStaticClass()
{
	using TClass = UOrionOnlineSteamAuthComponentModuleInterface;
	if (!Z_Registration_Info_UClass_UOrionOnlineSteamAuthComponentModuleInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionOnlineSteamAuthComponentModuleInterface"),
			Z_Registration_Info_UClass_UOrionOnlineSteamAuthComponentModuleInterface.InnerSingleton,
			StaticRegisterNativesUOrionOnlineSteamAuthComponentModuleInterface,
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
	return Z_Registration_Info_UClass_UOrionOnlineSteamAuthComponentModuleInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface_NoRegister()
{
	return UOrionOnlineSteamAuthComponentModuleInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/OrionOnlineAuthHandlerSteam.h" },
		{ "ModuleRelativePath", "Public/Auth/OrionOnlineAuthHandlerSteam.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionOnlineSteamAuthComponentModuleInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHandlerComponentFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionOnlineSubsystemSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface_Statics::ClassParams = {
	&UOrionOnlineSteamAuthComponentModuleInterface::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface()
{
	if (!Z_Registration_Info_UClass_UOrionOnlineSteamAuthComponentModuleInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionOnlineSteamAuthComponentModuleInterface.OuterSingleton, Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionOnlineSteamAuthComponentModuleInterface.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionOnlineSteamAuthComponentModuleInterface);
UOrionOnlineSteamAuthComponentModuleInterface::~UOrionOnlineSteamAuthComponentModuleInterface() {}
// ********** End Class UOrionOnlineSteamAuthComponentModuleInterface ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_Auth_OrionOnlineAuthHandlerSteam_h__Script_OrionOnlineSubsystemSteam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionOnlineSteamAuthComponentModuleInterface, UOrionOnlineSteamAuthComponentModuleInterface::StaticClass, TEXT("UOrionOnlineSteamAuthComponentModuleInterface"), &Z_Registration_Info_UClass_UOrionOnlineSteamAuthComponentModuleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionOnlineSteamAuthComponentModuleInterface), 1955309161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_Auth_OrionOnlineAuthHandlerSteam_h__Script_OrionOnlineSubsystemSteam_3045165478(TEXT("/Script/OrionOnlineSubsystemSteam"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_Auth_OrionOnlineAuthHandlerSteam_h__Script_OrionOnlineSubsystemSteam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_Auth_OrionOnlineAuthHandlerSteam_h__Script_OrionOnlineSubsystemSteam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
