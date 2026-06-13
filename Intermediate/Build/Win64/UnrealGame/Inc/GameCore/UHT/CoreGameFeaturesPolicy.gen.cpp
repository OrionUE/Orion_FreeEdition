// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatures/CoreGameFeaturesPolicy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreGameFeaturesPolicy() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameFeature_HotfixManager();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameFeature_HotfixManager_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameFeaturesPolicy();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameFeaturesPolicy_NoRegister();
GAMEFEATURES_API UClass* Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreGameFeaturesPolicy **************************************************
void UCoreGameFeaturesPolicy::StaticRegisterNativesUCoreGameFeaturesPolicy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreGameFeaturesPolicy;
UClass* UCoreGameFeaturesPolicy::GetPrivateStaticClass()
{
	using TClass = UCoreGameFeaturesPolicy;
	if (!Z_Registration_Info_UClass_UCoreGameFeaturesPolicy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGameFeaturesPolicy"),
			Z_Registration_Info_UClass_UCoreGameFeaturesPolicy.InnerSingleton,
			StaticRegisterNativesUCoreGameFeaturesPolicy,
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
	return Z_Registration_Info_UClass_UCoreGameFeaturesPolicy.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreGameFeaturesPolicy_NoRegister()
{
	return UCoreGameFeaturesPolicy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manager to keep track of the state machines that bring a game feature plugin into memory and active\n *\n * @note\n * \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8""DefaultGame.ini\xe4\xb8\xad\xef\xbc\x8c\xe5\xb0\x86GameFeaturesManagerClass\xe6\x8c\x87\xe5\xae\x9a\xe4\xb8\xba\xe6\xad\xa4\xe7\xb1\xbb\n * [/Script/GameFeatures.GameFeaturesSubsystemSettings]\n * GameFeaturesManagerClassName=/Script/GameCore.CoreGameFeaturesPolicy\n */" },
#endif
		{ "IncludePath", "GameFeatures/CoreGameFeaturesPolicy.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/CoreGameFeaturesPolicy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager to keep track of the state machines that bring a game feature plugin into memory and active\n\n@note\n\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8""DefaultGame.ini\xe4\xb8\xad\xef\xbc\x8c\xe5\xb0\x86GameFeaturesManagerClass\xe6\x8c\x87\xe5\xae\x9a\xe4\xb8\xba\xe6\xad\xa4\xe7\xb1\xbb\n[/Script/GameFeatures.GameFeaturesSubsystemSettings]\nGameFeaturesManagerClassName=/Script/GameCore.CoreGameFeaturesPolicy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observers_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFeatures/CoreGameFeaturesPolicy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Observers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Observers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGameFeaturesPolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::NewProp_Observers_Inner = { "Observers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::NewProp_Observers = { "Observers", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreGameFeaturesPolicy, Observers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observers_MetaData), NewProp_Observers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::NewProp_Observers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::NewProp_Observers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::ClassParams = {
	&UCoreGameFeaturesPolicy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreGameFeaturesPolicy()
{
	if (!Z_Registration_Info_UClass_UCoreGameFeaturesPolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreGameFeaturesPolicy.OuterSingleton, Z_Construct_UClass_UCoreGameFeaturesPolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreGameFeaturesPolicy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGameFeaturesPolicy);
UCoreGameFeaturesPolicy::~UCoreGameFeaturesPolicy() {}
// ********** End Class UCoreGameFeaturesPolicy ****************************************************

// ********** Begin Class UCoreGameFeature_HotfixManager *******************************************
void UCoreGameFeature_HotfixManager::StaticRegisterNativesUCoreGameFeature_HotfixManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreGameFeature_HotfixManager;
UClass* UCoreGameFeature_HotfixManager::GetPrivateStaticClass()
{
	using TClass = UCoreGameFeature_HotfixManager;
	if (!Z_Registration_Info_UClass_UCoreGameFeature_HotfixManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGameFeature_HotfixManager"),
			Z_Registration_Info_UClass_UCoreGameFeature_HotfixManager.InnerSingleton,
			StaticRegisterNativesUCoreGameFeature_HotfixManager,
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
	return Z_Registration_Info_UClass_UCoreGameFeature_HotfixManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreGameFeature_HotfixManager_NoRegister()
{
	return UCoreGameFeature_HotfixManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreGameFeature_HotfixManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFeatures/CoreGameFeaturesPolicy.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/CoreGameFeaturesPolicy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGameFeature_HotfixManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreGameFeature_HotfixManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameFeature_HotfixManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreGameFeature_HotfixManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister, (int32)VTABLE_OFFSET(UCoreGameFeature_HotfixManager, IGameFeatureStateChangeObserver), false },  // 3053962442
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreGameFeature_HotfixManager_Statics::ClassParams = {
	&UCoreGameFeature_HotfixManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameFeature_HotfixManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreGameFeature_HotfixManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreGameFeature_HotfixManager()
{
	if (!Z_Registration_Info_UClass_UCoreGameFeature_HotfixManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreGameFeature_HotfixManager.OuterSingleton, Z_Construct_UClass_UCoreGameFeature_HotfixManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreGameFeature_HotfixManager.OuterSingleton;
}
UCoreGameFeature_HotfixManager::UCoreGameFeature_HotfixManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGameFeature_HotfixManager);
UCoreGameFeature_HotfixManager::~UCoreGameFeature_HotfixManager() {}
// ********** End Class UCoreGameFeature_HotfixManager *********************************************

// ********** Begin Class UCoreGameFeature_AddGameplayCuePaths *************************************
void UCoreGameFeature_AddGameplayCuePaths::StaticRegisterNativesUCoreGameFeature_AddGameplayCuePaths()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreGameFeature_AddGameplayCuePaths;
UClass* UCoreGameFeature_AddGameplayCuePaths::GetPrivateStaticClass()
{
	using TClass = UCoreGameFeature_AddGameplayCuePaths;
	if (!Z_Registration_Info_UClass_UCoreGameFeature_AddGameplayCuePaths.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGameFeature_AddGameplayCuePaths"),
			Z_Registration_Info_UClass_UCoreGameFeature_AddGameplayCuePaths.InnerSingleton,
			StaticRegisterNativesUCoreGameFeature_AddGameplayCuePaths,
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
	return Z_Registration_Info_UClass_UCoreGameFeature_AddGameplayCuePaths.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths_NoRegister()
{
	return UCoreGameFeature_AddGameplayCuePaths::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFeatures/CoreGameFeaturesPolicy.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/CoreGameFeaturesPolicy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGameFeature_AddGameplayCuePaths>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister, (int32)VTABLE_OFFSET(UCoreGameFeature_AddGameplayCuePaths, IGameFeatureStateChangeObserver), false },  // 3053962442
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths_Statics::ClassParams = {
	&UCoreGameFeature_AddGameplayCuePaths::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths()
{
	if (!Z_Registration_Info_UClass_UCoreGameFeature_AddGameplayCuePaths.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreGameFeature_AddGameplayCuePaths.OuterSingleton, Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreGameFeature_AddGameplayCuePaths.OuterSingleton;
}
UCoreGameFeature_AddGameplayCuePaths::UCoreGameFeature_AddGameplayCuePaths(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGameFeature_AddGameplayCuePaths);
UCoreGameFeature_AddGameplayCuePaths::~UCoreGameFeature_AddGameplayCuePaths() {}
// ********** End Class UCoreGameFeature_AddGameplayCuePaths ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_CoreGameFeaturesPolicy_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreGameFeaturesPolicy, UCoreGameFeaturesPolicy::StaticClass, TEXT("UCoreGameFeaturesPolicy"), &Z_Registration_Info_UClass_UCoreGameFeaturesPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreGameFeaturesPolicy), 700839059U) },
		{ Z_Construct_UClass_UCoreGameFeature_HotfixManager, UCoreGameFeature_HotfixManager::StaticClass, TEXT("UCoreGameFeature_HotfixManager"), &Z_Registration_Info_UClass_UCoreGameFeature_HotfixManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreGameFeature_HotfixManager), 4188282085U) },
		{ Z_Construct_UClass_UCoreGameFeature_AddGameplayCuePaths, UCoreGameFeature_AddGameplayCuePaths::StaticClass, TEXT("UCoreGameFeature_AddGameplayCuePaths"), &Z_Registration_Info_UClass_UCoreGameFeature_AddGameplayCuePaths, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreGameFeature_AddGameplayCuePaths), 802771600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_CoreGameFeaturesPolicy_h__Script_GameCore_3337714823(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_CoreGameFeaturesPolicy_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_CoreGameFeaturesPolicy_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
