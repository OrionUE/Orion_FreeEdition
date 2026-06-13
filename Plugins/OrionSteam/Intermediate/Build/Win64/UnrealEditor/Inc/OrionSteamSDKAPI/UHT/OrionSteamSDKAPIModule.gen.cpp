// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamSDKAPIModule.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamSDKAPIModule() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteam();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteam_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamSubsystem();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteam **************************************************************
void UOrionSteam::StaticRegisterNativesUOrionSteam()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteam;
UClass* UOrionSteam::GetPrivateStaticClass()
{
	using TClass = UOrionSteam;
	if (!Z_Registration_Info_UClass_UOrionSteam.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteam"),
			Z_Registration_Info_UClass_UOrionSteam.InnerSingleton,
			StaticRegisterNativesUOrionSteam,
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
	return Z_Registration_Info_UClass_UOrionSteam.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteam_NoRegister()
{
	return UOrionSteam::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamSDKAPIModule.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteam>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteam_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteam_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteam_Statics::ClassParams = {
	&UOrionSteam::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteam_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteam_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteam()
{
	if (!Z_Registration_Info_UClass_UOrionSteam.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteam.OuterSingleton, Z_Construct_UClass_UOrionSteam_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteam.OuterSingleton;
}
UOrionSteam::UOrionSteam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteam);
UOrionSteam::~UOrionSteam() {}
// ********** End Class UOrionSteam ****************************************************************

// ********** Begin Class UOrionSteamInterface *****************************************************
void UOrionSteamInterface::StaticRegisterNativesUOrionSteamInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamInterface;
UClass* UOrionSteamInterface::GetPrivateStaticClass()
{
	using TClass = UOrionSteamInterface;
	if (!Z_Registration_Info_UClass_UOrionSteamInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamInterface"),
			Z_Registration_Info_UClass_UOrionSteamInterface.InnerSingleton,
			StaticRegisterNativesUOrionSteamInterface,
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
	return Z_Registration_Info_UClass_UOrionSteamInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamInterface_NoRegister()
{
	return UOrionSteamInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamSDKAPIModule.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamInterface_Statics::ClassParams = {
	&UOrionSteamInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamInterface()
{
	if (!Z_Registration_Info_UClass_UOrionSteamInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamInterface.OuterSingleton, Z_Construct_UClass_UOrionSteamInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamInterface.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamInterface);
// ********** End Class UOrionSteamInterface *******************************************************

// ********** Begin Class UOrionSteamSubsystem *****************************************************
void UOrionSteamSubsystem::StaticRegisterNativesUOrionSteamSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamSubsystem;
UClass* UOrionSteamSubsystem::GetPrivateStaticClass()
{
	using TClass = UOrionSteamSubsystem;
	if (!Z_Registration_Info_UClass_UOrionSteamSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamSubsystem"),
			Z_Registration_Info_UClass_UOrionSteamSubsystem.InnerSingleton,
			StaticRegisterNativesUOrionSteamSubsystem,
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
	return Z_Registration_Info_UClass_UOrionSteamSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamSubsystem_NoRegister()
{
	return UOrionSteamSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamSDKAPIModule.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamSubsystem_Statics::ClassParams = {
	&UOrionSteamSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamSubsystem()
{
	if (!Z_Registration_Info_UClass_UOrionSteamSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamSubsystem.OuterSingleton, Z_Construct_UClass_UOrionSteamSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamSubsystem);
// ********** End Class UOrionSteamSubsystem *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamSDKAPIModule_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteam, UOrionSteam::StaticClass, TEXT("UOrionSteam"), &Z_Registration_Info_UClass_UOrionSteam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteam), 1085581406U) },
		{ Z_Construct_UClass_UOrionSteamInterface, UOrionSteamInterface::StaticClass, TEXT("UOrionSteamInterface"), &Z_Registration_Info_UClass_UOrionSteamInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamInterface), 473890210U) },
		{ Z_Construct_UClass_UOrionSteamSubsystem, UOrionSteamSubsystem::StaticClass, TEXT("UOrionSteamSubsystem"), &Z_Registration_Info_UClass_UOrionSteamSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamSubsystem), 1514205112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamSDKAPIModule_h__Script_OrionSteamSDKAPI_1181073694(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamSDKAPIModule_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamSDKAPIModule_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
