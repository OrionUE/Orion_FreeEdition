// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hotfix/CoreHotfixManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreHotfixManager() {}

// ********** Begin Cross Module References ********************************************************
GAMECORE_API UClass* Z_Construct_UClass_UCoreHotfixManager();
GAMECORE_API UClass* Z_Construct_UClass_UCoreHotfixManager_NoRegister();
HOTFIX_API UClass* Z_Construct_UClass_UOnlineHotfixManager();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreHotfixManager *******************************************************
void UCoreHotfixManager::StaticRegisterNativesUCoreHotfixManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreHotfixManager;
UClass* UCoreHotfixManager::GetPrivateStaticClass()
{
	using TClass = UCoreHotfixManager;
	if (!Z_Registration_Info_UClass_UCoreHotfixManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreHotfixManager"),
			Z_Registration_Info_UClass_UCoreHotfixManager.InnerSingleton,
			StaticRegisterNativesUCoreHotfixManager,
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
	return Z_Registration_Info_UClass_UCoreHotfixManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreHotfixManager_NoRegister()
{
	return UCoreHotfixManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreHotfixManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Hotfix/CoreHotfixManager.h" },
		{ "ModuleRelativePath", "Public/Hotfix/CoreHotfixManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHotfixManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreHotfixManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineHotfixManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHotfixManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreHotfixManager_Statics::ClassParams = {
	&UCoreHotfixManager::StaticClass,
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
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHotfixManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreHotfixManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreHotfixManager()
{
	if (!Z_Registration_Info_UClass_UCoreHotfixManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreHotfixManager.OuterSingleton, Z_Construct_UClass_UCoreHotfixManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreHotfixManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHotfixManager);
UCoreHotfixManager::~UCoreHotfixManager() {}
// ********** End Class UCoreHotfixManager *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreHotfixManager, UCoreHotfixManager::StaticClass, TEXT("UCoreHotfixManager"), &Z_Registration_Info_UClass_UCoreHotfixManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreHotfixManager), 1843240393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h__Script_GameCore_2099268933(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
