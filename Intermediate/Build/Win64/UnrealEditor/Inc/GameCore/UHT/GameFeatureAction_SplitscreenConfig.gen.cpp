// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatures/GameFeatureAction_SplitscreenConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_SplitscreenConfig() {}

// ********** Begin Cross Module References ********************************************************
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameFeatureAction_SplitscreenConfig *************************************
void UGameFeatureAction_SplitscreenConfig::StaticRegisterNativesUGameFeatureAction_SplitscreenConfig()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig;
UClass* UGameFeatureAction_SplitscreenConfig::GetPrivateStaticClass()
{
	using TClass = UGameFeatureAction_SplitscreenConfig;
	if (!Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameFeatureAction_SplitscreenConfig"),
			Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig.InnerSingleton,
			StaticRegisterNativesUGameFeatureAction_SplitscreenConfig,
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
	return Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_NoRegister()
{
	return UGameFeatureAction_SplitscreenConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameFeatureAction - \xe6\xb8\xb8\xe6\x88\x8f\xe5\x88\x86\xe5\xb1\x8f\xe9\x85\x8d\xe7\xbd\xae\n */" },
#endif
		{ "DisplayName", "Splitscreen Config" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_SplitscreenConfig.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_SplitscreenConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameFeatureAction - \xe6\xb8\xb8\xe6\x88\x8f\xe5\x88\x86\xe5\xb1\x8f\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSplitscreen_MetaData[] = {
		{ "Category", "Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\x90\xaf\xe7\x94\xa8\xe5\x88\x86\xe5\xb1\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_SplitscreenConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x90\xaf\xe7\x94\xa8\xe5\x88\x86\xe5\xb1\x8f" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDisableSplitscreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSplitscreen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_SplitscreenConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen_SetBit(void* Obj)
{
	((UGameFeatureAction_SplitscreenConfig*)Obj)->bDisableSplitscreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen = { "bDisableSplitscreen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameFeatureAction_SplitscreenConfig), &Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSplitscreen_MetaData), NewProp_bDisableSplitscreen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::ClassParams = {
	&UGameFeatureAction_SplitscreenConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig.OuterSingleton;
}
UGameFeatureAction_SplitscreenConfig::UGameFeatureAction_SplitscreenConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_SplitscreenConfig);
UGameFeatureAction_SplitscreenConfig::~UGameFeatureAction_SplitscreenConfig() {}
// ********** End Class UGameFeatureAction_SplitscreenConfig ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_SplitscreenConfig_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig, UGameFeatureAction_SplitscreenConfig::StaticClass, TEXT("UGameFeatureAction_SplitscreenConfig"), &Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_SplitscreenConfig), 589327694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_SplitscreenConfig_h__Script_GameCore_2244522224(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_SplitscreenConfig_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_SplitscreenConfig_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
