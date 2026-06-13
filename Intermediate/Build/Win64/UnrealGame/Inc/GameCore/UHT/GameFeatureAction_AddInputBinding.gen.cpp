// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatures/GameFeatureAction_AddInputBinding.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddInputBinding() {}

// ********** Begin Cross Module References ********************************************************
COMMONINPUTSYSTEM_API UClass* Z_Construct_UClass_UInputSystemConfig_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputBinding();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputBinding_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameFeatureAction_AddInputBinding ***************************************
void UGameFeatureAction_AddInputBinding::StaticRegisterNativesUGameFeatureAction_AddInputBinding()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding;
UClass* UGameFeatureAction_AddInputBinding::GetPrivateStaticClass()
{
	using TClass = UGameFeatureAction_AddInputBinding;
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameFeatureAction_AddInputBinding"),
			Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding.InnerSingleton,
			StaticRegisterNativesUGameFeatureAction_AddInputBinding,
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
	return Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameFeatureAction_AddInputBinding_NoRegister()
{
	return UGameFeatureAction_AddInputBinding::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameFeatureAction - \xe6\xb7\xbb\xe5\x8a\xa0\xe8\xbe\x93\xe5\x85\xa5\xe7\xbb\x91\xe5\xae\x9a\n * Expects that local players are set up to use the EnhancedInput system.\n */" },
#endif
		{ "DisplayName", "Add Input Binds" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddInputBinding.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddInputBinding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameFeatureAction - \xe6\xb7\xbb\xe5\x8a\xa0\xe8\xbe\x93\xe5\x85\xa5\xe7\xbb\x91\xe5\xae\x9a\nExpects that local players are set up to use the EnhancedInput system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigs_MetaData[] = {
		{ "AssetBundles", "Client, Server" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UObject interface\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddInputBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputConfigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddInputBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs_Inner = { "InputConfigs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputSystemConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs = { "InputConfigs", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddInputBinding, InputConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfigs_MetaData), NewProp_InputConfigs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::ClassParams = {
	&UGameFeatureAction_AddInputBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_AddInputBinding()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding.OuterSingleton;
}
UGameFeatureAction_AddInputBinding::UGameFeatureAction_AddInputBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddInputBinding);
UGameFeatureAction_AddInputBinding::~UGameFeatureAction_AddInputBinding() {}
// ********** End Class UGameFeatureAction_AddInputBinding *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddInputBinding, UGameFeatureAction_AddInputBinding::StaticClass, TEXT("UGameFeatureAction_AddInputBinding"), &Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddInputBinding), 421024766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h__Script_GameCore_3058220367(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
