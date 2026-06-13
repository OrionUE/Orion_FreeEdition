// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatures/GameFeatureAction_WorldActionBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_WorldActionBase() {}

// ********** Begin Cross Module References ********************************************************
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase_NoRegister();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameFeatureAction_WorldActionBase ***************************************
void UGameFeatureAction_WorldActionBase::StaticRegisterNativesUGameFeatureAction_WorldActionBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase;
UClass* UGameFeatureAction_WorldActionBase::GetPrivateStaticClass()
{
	using TClass = UGameFeatureAction_WorldActionBase;
	if (!Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameFeatureAction_WorldActionBase"),
			Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.InnerSingleton,
			StaticRegisterNativesUGameFeatureAction_WorldActionBase,
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
	return Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase_NoRegister()
{
	return UGameFeatureAction_WorldActionBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameFeatureActions\xe5\x9f\xba\xe7\xb1\xbb\n */" },
#endif
		{ "IncludePath", "GameFeatures/GameFeatureAction_WorldActionBase.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_WorldActionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameFeatureActions\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_WorldActionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::ClassParams = {
	&UGameFeatureAction_WorldActionBase::StaticClass,
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
	0x002010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.OuterSingleton;
}
UGameFeatureAction_WorldActionBase::UGameFeatureAction_WorldActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_WorldActionBase);
UGameFeatureAction_WorldActionBase::~UGameFeatureAction_WorldActionBase() {}
// ********** End Class UGameFeatureAction_WorldActionBase *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_WorldActionBase, UGameFeatureAction_WorldActionBase::StaticClass, TEXT("UGameFeatureAction_WorldActionBase"), &Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_WorldActionBase), 1502123567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h__Script_GameCore_4094523544(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
