// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/CoreAbilitySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySystemComponent();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreAbilitySystemComponent **********************************************
void UCoreAbilitySystemComponent::StaticRegisterNativesUCoreAbilitySystemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreAbilitySystemComponent;
UClass* UCoreAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UCoreAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UCoreAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreAbilitySystemComponent"),
			Z_Registration_Info_UClass_UCoreAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUCoreAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UCoreAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister()
{
	return UCoreAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ASC \xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n *\n * @note \xe9\x9c\x80\xe5\x9c\xa8GameState\xe3\x80\x81PlayerState\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe5\xb9\xb6\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe8\xaf\xa5\xe7\xbb\x84\xe4\xbb\xb6\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/CoreAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ASC \xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n\n@note \xe9\x9c\x80\xe5\x9c\xa8GameState\xe3\x80\x81PlayerState\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe5\xb9\xb6\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe8\xaf\xa5\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This table is used to look up tag relationships for activate and cancel\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This table is used to look up tag relationships for activate and cancel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAbilitySystemComponent, TagRelationshipMapping), Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRelationshipMapping_MetaData), NewProp_TagRelationshipMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::ClassParams = {
	&UCoreAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UCoreAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UCoreAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreAbilitySystemComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAbilitySystemComponent);
UCoreAbilitySystemComponent::~UCoreAbilitySystemComponent() {}
// ********** End Class UCoreAbilitySystemComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreAbilitySystemComponent, UCoreAbilitySystemComponent::StaticClass, TEXT("UCoreAbilitySystemComponent"), &Z_Registration_Info_UClass_UCoreAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreAbilitySystemComponent), 495876523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h__Script_GameCore_2231694134(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
