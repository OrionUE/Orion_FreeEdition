// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/CoreGameplayCueManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreGameplayCueManager() {}

// ********** Begin Cross Module References ********************************************************
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameplayCueManager();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameplayCueManager_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreGameplayCueManager **************************************************
void UCoreGameplayCueManager::StaticRegisterNativesUCoreGameplayCueManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreGameplayCueManager;
UClass* UCoreGameplayCueManager::GetPrivateStaticClass()
{
	using TClass = UCoreGameplayCueManager;
	if (!Z_Registration_Info_UClass_UCoreGameplayCueManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGameplayCueManager"),
			Z_Registration_Info_UClass_UCoreGameplayCueManager.InnerSingleton,
			StaticRegisterNativesUCoreGameplayCueManager,
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
	return Z_Registration_Info_UClass_UCoreGameplayCueManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreGameplayCueManager_NoRegister()
{
	return UCoreGameplayCueManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreGameplayCueManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UCoreGameplayCueManager\n * \n * Game-specific manager for gameplay cues\n * \xe9\x92\x88\xe5\xaf\xb9\xe6\xb8\xb8\xe6\x88\x8f\xe7\x8e\xa9\xe6\xb3\x95\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe7\x89\xb9\xe5\xae\x9a\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\n *\n * @note\n * \xe9\x9c\x80\xe5\x9c\xa8""DefaultGame.ini\xe6\xb7\xbb\xe5\x8a\xa0\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\xe5\x92\x8c\xe8\xb7\xaf\xe5\xbe\x84\n * [/Script/GameplayAbilities.AbilitySystemGlobals]\n * GlobalGameplayCueManagerClass=/Script/ModuleName.GameplayCueManagerClassName\n */" },
#endif
		{ "IncludePath", "AbilitySystem/CoreGameplayCueManager.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGameplayCueManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCoreGameplayCueManager\n\nGame-specific manager for gameplay cues\n\xe9\x92\x88\xe5\xaf\xb9\xe6\xb8\xb8\xe6\x88\x8f\xe7\x8e\xa9\xe6\xb3\x95\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe7\x89\xb9\xe5\xae\x9a\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\n\n@note\n\xe9\x9c\x80\xe5\x9c\xa8""DefaultGame.ini\xe6\xb7\xbb\xe5\x8a\xa0\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\xe5\x92\x8c\xe8\xb7\xaf\xe5\xbe\x84\n[/Script/GameplayAbilities.AbilitySystemGlobals]\nGlobalGameplayCueManagerClass=/Script/ModuleName.GameplayCueManagerClassName" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGameplayCueManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreGameplayCueManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameplayCueManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreGameplayCueManager_Statics::ClassParams = {
	&UCoreGameplayCueManager::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameplayCueManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreGameplayCueManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreGameplayCueManager()
{
	if (!Z_Registration_Info_UClass_UCoreGameplayCueManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreGameplayCueManager.OuterSingleton, Z_Construct_UClass_UCoreGameplayCueManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreGameplayCueManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGameplayCueManager);
UCoreGameplayCueManager::~UCoreGameplayCueManager() {}
// ********** End Class UCoreGameplayCueManager ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGameplayCueManager_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreGameplayCueManager, UCoreGameplayCueManager::StaticClass, TEXT("UCoreGameplayCueManager"), &Z_Registration_Info_UClass_UCoreGameplayCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreGameplayCueManager), 3297464141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGameplayCueManager_h__Script_GameCore_588077646(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGameplayCueManager_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGameplayCueManager_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
