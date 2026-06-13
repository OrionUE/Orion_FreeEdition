// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/CoreExperienceActionSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreExperienceActionSet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceActionSet();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceActionSet_NoRegister();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreExperienceActionSet *************************************************
void UCoreExperienceActionSet::StaticRegisterNativesUCoreExperienceActionSet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreExperienceActionSet;
UClass* UCoreExperienceActionSet::GetPrivateStaticClass()
{
	using TClass = UCoreExperienceActionSet;
	if (!Z_Registration_Info_UClass_UCoreExperienceActionSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreExperienceActionSet"),
			Z_Registration_Info_UClass_UCoreExperienceActionSet.InnerSingleton,
			StaticRegisterNativesUCoreExperienceActionSet,
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
	return Z_Registration_Info_UClass_UCoreExperienceActionSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreExperienceActionSet_NoRegister()
{
	return UCoreExperienceActionSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreExperienceActionSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\xb8\xb8\xe6\x88\x8f\xe4\xbd\x93\xe9\xaa\x8c\xe5\x8a\xa8\xe4\xbd\x9c\xe9\x9b\x86\xe5\x90\x88\n */" },
#endif
		{ "IncludePath", "GameModes/CoreExperienceActionSet.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceActionSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe4\xbd\x93\xe9\xaa\x8c\xe5\x8a\xa8\xe4\xbd\x9c\xe9\x9b\x86\xe5\x90\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesToEnable_MetaData[] = {
		{ "Category", "Feature Dependencies" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of Game Feature Plugins this experience wants to have active\n// \xe5\x90\xaf\xe7\x94\xa8\xe7\x9a\x84GameFeatures\xef\xbc\x88\xe9\x9c\x80\xe8\xa6\x81\xe6\xbf\x80\xe6\xb4\xbbGameFeature\xe6\x8f\x92\xe4\xbb\xb6\xe4\xb8\xad\xe6\xb8\xb8\xe6\x88\x8f\xe4\xbd\x93\xe9\xaa\x8c\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\xef\xbc\x8c\xe5\xa6\x82\xe8\xbe\x93\xe5\x85\xa5 ShooterCore\xef\xbc\x8c\xe5\x88\x99\xe6\xbf\x80\xe6\xb4\xbb\xe8\xaf\xa5\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceActionSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Game Feature Plugins this experience wants to have active\n\xe5\x90\xaf\xe7\x94\xa8\xe7\x9a\x84GameFeatures\xef\xbc\x88\xe9\x9c\x80\xe8\xa6\x81\xe6\xbf\x80\xe6\xb4\xbbGameFeature\xe6\x8f\x92\xe4\xbb\xb6\xe4\xb8\xad\xe6\xb8\xb8\xe6\x88\x8f\xe4\xbd\x93\xe9\xaa\x8c\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\xef\xbc\x8c\xe5\xa6\x82\xe8\xbe\x93\xe5\x85\xa5 ShooterCore\xef\xbc\x8c\xe5\x88\x99\xe6\xbf\x80\xe6\xb4\xbb\xe8\xaf\xa5\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions to Perform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n// \xe5\x8a\xa0\xe8\xbd\xbd\xe6\xad\xa4\xe4\xbd\x93\xe9\xaa\x8c\xe6\x97\xb6\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c loaded/activated/deactivated/unloaded\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceActionSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n\xe5\x8a\xa0\xe8\xbd\xbd\xe6\xad\xa4\xe4\xbd\x93\xe9\xaa\x8c\xe6\x97\xb6\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c loaded/activated/deactivated/unloaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Actions to Perform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n// \xe5\x8a\xa0\xe8\xbd\xbd\xe6\xad\xa4\xe4\xbd\x93\xe9\xaa\x8c\xe6\x97\xb6\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c loaded/activated/deactivated/unloaded\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceActionSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n\xe5\x8a\xa0\xe8\xbd\xbd\xe6\xad\xa4\xe4\xbd\x93\xe9\xaa\x8c\xe6\x97\xb6\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c loaded/activated/deactivated/unloaded" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameFeaturesToEnable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameFeaturesToEnable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreExperienceActionSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_Inner = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreExperienceActionSet_Statics::NewProp_GameFeaturesToEnable = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceActionSet, GameFeaturesToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameFeaturesToEnable_MetaData), NewProp_GameFeaturesToEnable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExperienceActionSet_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreExperienceActionSet_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceActionSet, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreExperienceActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceActionSet_Statics::NewProp_GameFeaturesToEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceActionSet_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceActionSet_Statics::NewProp_Actions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceActionSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreExperienceActionSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceActionSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreExperienceActionSet_Statics::ClassParams = {
	&UCoreExperienceActionSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCoreExperienceActionSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceActionSet_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceActionSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreExperienceActionSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreExperienceActionSet()
{
	if (!Z_Registration_Info_UClass_UCoreExperienceActionSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreExperienceActionSet.OuterSingleton, Z_Construct_UClass_UCoreExperienceActionSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreExperienceActionSet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreExperienceActionSet);
UCoreExperienceActionSet::~UCoreExperienceActionSet() {}
// ********** End Class UCoreExperienceActionSet ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceActionSet_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreExperienceActionSet, UCoreExperienceActionSet::StaticClass, TEXT("UCoreExperienceActionSet"), &Z_Registration_Info_UClass_UCoreExperienceActionSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreExperienceActionSet), 270683020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceActionSet_h__Script_GameCore_4120457399(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceActionSet_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceActionSet_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
