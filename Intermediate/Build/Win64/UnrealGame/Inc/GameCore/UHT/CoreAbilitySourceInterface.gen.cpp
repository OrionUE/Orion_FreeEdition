// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/CoreAbilitySourceInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreAbilitySourceInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySourceInterface();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySourceInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCoreAbilitySourceInterface ******************************************
void UCoreAbilitySourceInterface::StaticRegisterNativesUCoreAbilitySourceInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreAbilitySourceInterface;
UClass* UCoreAbilitySourceInterface::GetPrivateStaticClass()
{
	using TClass = UCoreAbilitySourceInterface;
	if (!Z_Registration_Info_UClass_UCoreAbilitySourceInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreAbilitySourceInterface"),
			Z_Registration_Info_UClass_UCoreAbilitySourceInterface.InnerSingleton,
			StaticRegisterNativesUCoreAbilitySourceInterface,
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
	return Z_Registration_Info_UClass_UCoreAbilitySourceInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreAbilitySourceInterface_NoRegister()
{
	return UCoreAbilitySourceInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreAbilitySourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySourceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICoreAbilitySourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreAbilitySourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilitySourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreAbilitySourceInterface_Statics::ClassParams = {
	&UCoreAbilitySourceInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilitySourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreAbilitySourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreAbilitySourceInterface()
{
	if (!Z_Registration_Info_UClass_UCoreAbilitySourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreAbilitySourceInterface.OuterSingleton, Z_Construct_UClass_UCoreAbilitySourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreAbilitySourceInterface.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAbilitySourceInterface);
// ********** End Interface UCoreAbilitySourceInterface ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreAbilitySourceInterface, UCoreAbilitySourceInterface::StaticClass, TEXT("UCoreAbilitySourceInterface"), &Z_Registration_Info_UClass_UCoreAbilitySourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreAbilitySourceInterface), 403871258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h__Script_GameCore_2948354877(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
