// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/CoreExperienceDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreExperienceDefinition() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceActionSet_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceDefinition();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceDefinition_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnData_NoRegister();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreExperienceDefinition ************************************************
void UCoreExperienceDefinition::StaticRegisterNativesUCoreExperienceDefinition()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreExperienceDefinition;
UClass* UCoreExperienceDefinition::GetPrivateStaticClass()
{
	using TClass = UCoreExperienceDefinition;
	if (!Z_Registration_Info_UClass_UCoreExperienceDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreExperienceDefinition"),
			Z_Registration_Info_UClass_UCoreExperienceDefinition.InnerSingleton,
			StaticRegisterNativesUCoreExperienceDefinition,
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
	return Z_Registration_Info_UClass_UCoreExperienceDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreExperienceDefinition_NoRegister()
{
	return UCoreExperienceDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreExperienceDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\xb8\xb8\xe6\x88\x8f\xe4\xbd\x93\xe9\xaa\x8c - \xe6\x95\xb0\xe6\x8d\xae\xe5\xae\x9a\xe4\xb9\x89\n */" },
#endif
		{ "IncludePath", "GameModes/CoreExperienceDefinition.h" },
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe4\xbd\x93\xe9\xaa\x8c - \xe6\x95\xb0\xe6\x8d\xae\xe5\xae\x9a\xe4\xb9\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesToEnable_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of Game Feature Plugins this experience wants to have active\n// \xe5\x90\xaf\xe7\x94\xa8\xe7\x9a\x84GameFeatures\xef\xbc\x88\xe9\x9c\x80\xe8\xa6\x81\xe6\xbf\x80\xe6\xb4\xbbGameFeature\xe6\x8f\x92\xe4\xbb\xb6\xe4\xb8\xad\xe6\xb8\xb8\xe6\x88\x8f\xe4\xbd\x93\xe9\xaa\x8c\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\xef\xbc\x8c\xe5\xa6\x82\xe8\xbe\x93\xe5\x85\xa5 ShooterCore\xef\xbc\x8c\xe5\x88\x99\xe6\xbf\x80\xe6\xb4\xbb\xe8\xaf\xa5\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Game Feature Plugins this experience wants to have active\n\xe5\x90\xaf\xe7\x94\xa8\xe7\x9a\x84GameFeatures\xef\xbc\x88\xe9\x9c\x80\xe8\xa6\x81\xe6\xbf\x80\xe6\xb4\xbbGameFeature\xe6\x8f\x92\xe4\xbb\xb6\xe4\xb8\xad\xe6\xb8\xb8\xe6\x88\x8f\xe4\xbd\x93\xe9\xaa\x8c\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\xef\xbc\x8c\xe5\xa6\x82\xe8\xbe\x93\xe5\x85\xa5 ShooterCore\xef\xbc\x8c\xe5\x88\x99\xe6\xbf\x80\xe6\xb4\xbb\xe8\xaf\xa5\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO: Make soft?\n// The default pawn class to spawn for players\n// \xe7\x8e\xa9\xe5\xae\xb6\xe9\xbb\x98\xe8\xae\xa4\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84Pawn\xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceDefinition.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: Make soft?\nThe default pawn class to spawn for players\n\xe7\x8e\xa9\xe5\xae\xb6\xe9\xbb\x98\xe8\xae\xa4\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84Pawn\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n// \xe5\x8a\xa0\xe8\xbd\xbd\xe6\xad\xa4\xe4\xbd\x93\xe9\xaa\x8c\xe6\x97\xb6\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c loaded/activated/deactivated/unloaded\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n\xe5\x8a\xa0\xe8\xbd\xbd\xe6\xad\xa4\xe4\xbd\x93\xe9\xaa\x8c\xe6\x97\xb6\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c loaded/activated/deactivated/unloaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n// \xe5\x8a\xa0\xe8\xbd\xbd\xe6\xad\xa4\xe4\xbd\x93\xe9\xaa\x8c\xe6\x97\xb6\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c loaded/activated/deactivated/unloaded\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n\xe5\x8a\xa0\xe8\xbd\xbd\xe6\xad\xa4\xe4\xbd\x93\xe9\xaa\x8c\xe6\x97\xb6\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c loaded/activated/deactivated/unloaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionSets_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of additional action sets to compose into this experience\n// \xe5\x8a\xa0\xe8\xbd\xbd\xe5\x88\xb0\xe6\xad\xa4\xe6\xb8\xb8\xe6\x88\x8f\xe4\xbd\x93\xe9\xaa\x8c\xe7\x9a\x84\xe5\x85\xb6\xe4\xbb\x96\xe6\x93\x8d\xe4\xbd\x9c\xe9\x9b\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of additional action sets to compose into this experience\n\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x88\xb0\xe6\xad\xa4\xe6\xb8\xb8\xe6\x88\x8f\xe4\xbd\x93\xe9\xaa\x8c\xe7\x9a\x84\xe5\x85\xb6\xe4\xbb\x96\xe6\x93\x8d\xe4\xbd\x9c\xe9\x9b\x86" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameFeaturesToEnable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameFeaturesToEnable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultPawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreExperienceDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_GameFeaturesToEnable = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceDefinition, GameFeaturesToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameFeaturesToEnable_MetaData), NewProp_GameFeaturesToEnable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0114000000010011, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceDefinition, DefaultPawnData), Z_Construct_UClass_UCorePawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPawnData_MetaData), NewProp_DefaultPawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114008000010019, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceDefinition, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_ActionSets_Inner = { "ActionSets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreExperienceActionSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_ActionSets = { "ActionSets", nullptr, (EPropertyFlags)0x0114000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceDefinition, ActionSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionSets_MetaData), NewProp_ActionSets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreExperienceDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_GameFeaturesToEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_DefaultPawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_ActionSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceDefinition_Statics::NewProp_ActionSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreExperienceDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreExperienceDefinition_Statics::ClassParams = {
	&UCoreExperienceDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCoreExperienceDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceDefinition_Statics::PropPointers),
	0,
	0x009100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreExperienceDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreExperienceDefinition()
{
	if (!Z_Registration_Info_UClass_UCoreExperienceDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreExperienceDefinition.OuterSingleton, Z_Construct_UClass_UCoreExperienceDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreExperienceDefinition.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreExperienceDefinition);
UCoreExperienceDefinition::~UCoreExperienceDefinition() {}
// ********** End Class UCoreExperienceDefinition **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreExperienceDefinition, UCoreExperienceDefinition::StaticClass, TEXT("UCoreExperienceDefinition"), &Z_Registration_Info_UClass_UCoreExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreExperienceDefinition), 1031832882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h__Script_GameCore_1162319944(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
