// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/CoreExperienceManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreExperienceManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceManager();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreExperienceManager ***************************************************
void UCoreExperienceManager::StaticRegisterNativesUCoreExperienceManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreExperienceManager;
UClass* UCoreExperienceManager::GetPrivateStaticClass()
{
	using TClass = UCoreExperienceManager;
	if (!Z_Registration_Info_UClass_UCoreExperienceManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreExperienceManager"),
			Z_Registration_Info_UClass_UCoreExperienceManager.InnerSingleton,
			StaticRegisterNativesUCoreExperienceManager,
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
	return Z_Registration_Info_UClass_UCoreExperienceManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreExperienceManager_NoRegister()
{
	return UCoreExperienceManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreExperienceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manager for experiences - primarily for arbitration between multiple PIE sessions\n *\n * @see https://idealitycentury.yuque.com/bt1dl9/project_doc/ip7igcmsi8a25n14\n *\n * @note \xe8\xaf\xa5\xe5\x9f\xba\xe7\xb1\xbb\xe4\xb8\xba\xe6\x8a\xbd\xe8\xb1\xa1\xe7\xb1\xbb\xef\xbc\x8c\xe9\x9c\x80\xe7\xbb\xa7\xe6\x89\xbf\xe8\xaf\xa5\xe7\xb1\xbb\xe4\xbb\xa5\xe5\x88\x9b\xe5\xbb\xba\xe8\xaf\xa5\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\n */" },
#endif
		{ "IncludePath", "GameModes/CoreExperienceManager.h" },
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager for experiences - primarily for arbitration between multiple PIE sessions\n\n@see https://idealitycentury.yuque.com/bt1dl9/project_doc/ip7igcmsi8a25n14\n\n@note \xe8\xaf\xa5\xe5\x9f\xba\xe7\xb1\xbb\xe4\xb8\xba\xe6\x8a\xbd\xe8\xb1\xa1\xe7\xb1\xbb\xef\xbc\x8c\xe9\x9c\x80\xe7\xbb\xa7\xe6\x89\xbf\xe8\xaf\xa5\xe7\xb1\xbb\xe4\xbb\xa5\xe5\x88\x9b\xe5\xbb\xba\xe8\xaf\xa5\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreExperienceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreExperienceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreExperienceManager_Statics::ClassParams = {
	&UCoreExperienceManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreExperienceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreExperienceManager()
{
	if (!Z_Registration_Info_UClass_UCoreExperienceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreExperienceManager.OuterSingleton, Z_Construct_UClass_UCoreExperienceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreExperienceManager.OuterSingleton;
}
UCoreExperienceManager::UCoreExperienceManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreExperienceManager);
UCoreExperienceManager::~UCoreExperienceManager() {}
// ********** End Class UCoreExperienceManager *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreExperienceManager, UCoreExperienceManager::StaticClass, TEXT("UCoreExperienceManager"), &Z_Registration_Info_UClass_UCoreExperienceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreExperienceManager), 1308440172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h__Script_GameCore_2665306769(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
