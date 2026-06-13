// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatures/GameFeatureAction_AddGameplayCuePath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddGameplayCuePath() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_NoRegister();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameFeatureAction_AddGameplayCuePath ************************************
void UGameFeatureAction_AddGameplayCuePath::StaticRegisterNativesUGameFeatureAction_AddGameplayCuePath()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath;
UClass* UGameFeatureAction_AddGameplayCuePath::GetPrivateStaticClass()
{
	using TClass = UGameFeatureAction_AddGameplayCuePath;
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameFeatureAction_AddGameplayCuePath"),
			Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath.InnerSingleton,
			StaticRegisterNativesUGameFeatureAction_AddGameplayCuePath,
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
	return Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_NoRegister()
{
	return UGameFeatureAction_AddGameplayCuePath::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameFeatureAction - \xe6\xb7\xbb\xe5\x8a\xa0GameplayCues\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84\n * GameFeatureAction responsible for adding gameplay cue paths to the gameplay cue manager.\n */" },
#endif
		{ "DisplayName", "Add Gameplay Cue Path" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddGameplayCuePath.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddGameplayCuePath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameFeatureAction - \xe6\xb7\xbb\xe5\x8a\xa0GameplayCues\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84\nGameFeatureAction responsible for adding gameplay cue paths to the gameplay cue manager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPathsToAdd_MetaData[] = {
		{ "Category", "GameFeature|GameplayCues" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddGameplayCuePath.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoryPathsToAdd_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoryPathsToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddGameplayCuePath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::NewProp_DirectoryPathsToAdd_Inner = { "DirectoryPathsToAdd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::NewProp_DirectoryPathsToAdd = { "DirectoryPathsToAdd", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddGameplayCuePath, DirectoryPathsToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectoryPathsToAdd_MetaData), NewProp_DirectoryPathsToAdd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::NewProp_DirectoryPathsToAdd_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::NewProp_DirectoryPathsToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::ClassParams = {
	&UGameFeatureAction_AddGameplayCuePath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddGameplayCuePath);
UGameFeatureAction_AddGameplayCuePath::~UGameFeatureAction_AddGameplayCuePath() {}
// ********** End Class UGameFeatureAction_AddGameplayCuePath **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddGameplayCuePath_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath, UGameFeatureAction_AddGameplayCuePath::StaticClass, TEXT("UGameFeatureAction_AddGameplayCuePath"), &Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddGameplayCuePath), 170035457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddGameplayCuePath_h__Script_GameCore_2999153951(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddGameplayCuePath_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddGameplayCuePath_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
