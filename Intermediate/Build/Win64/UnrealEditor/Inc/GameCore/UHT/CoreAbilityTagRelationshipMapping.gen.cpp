// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/CoreAbilityTagRelationshipMapping.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreAbilityTagRelationshipMapping() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityTagRelationshipMapping();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_NoRegister();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilityTagRelationship();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCoreAbilityTagRelationship ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreAbilityTagRelationship;
class UScriptStruct* FCoreAbilityTagRelationship::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilityTagRelationship.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreAbilityTagRelationship.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreAbilityTagRelationship, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreAbilityTagRelationship"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilityTagRelationship.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct that defines the relationship between different ability tags\n * \xe5\xae\x9a\xe4\xb9\x89\xe4\xb8\x8d\xe5\x90\x8c""AbilityTag\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe5\x85\xb3\xe7\xb3\xbb\n */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct that defines the relationship between different ability tags\n\xe5\xae\x9a\xe4\xb9\x89\xe4\xb8\x8d\xe5\x90\x8c""AbilityTag\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe5\x85\xb3\xe7\xb3\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Categories", "Gameplay.Action" },
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The tag that this container relationship is about. Single tag, but abilities can have multiple of these\n// \xe6\x8a\x80\xe8\x83\xbd\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe6\xa0\x87\xe7\xad\xbe\xe5\x92\x8c\xe6\x8a\x80\xe8\x83\xbd\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\x80\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe5\x85\xb3\xe7\xb3\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tag that this container relationship is about. Single tag, but abilities can have multiple of these\n\xe6\x8a\x80\xe8\x83\xbd\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe6\xa0\x87\xe7\xad\xbe\xe5\x92\x8c\xe6\x8a\x80\xe8\x83\xbd\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\x80\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe5\x85\xb3\xe7\xb3\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagsToBlock_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The other ability tags that will be blocked by any ability using this tag\n// \xe6\xad\xa4\xe6\x8a\x80\xe8\x83\xbd\xe4\xbc\x9a\xe5\xb1\x8f\xe8\x94\xbd\xe5\x85\xb6\xe5\xae\x83\xe6\x8a\x80\xe8\x83\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The other ability tags that will be blocked by any ability using this tag\n\xe6\xad\xa4\xe6\x8a\x80\xe8\x83\xbd\xe4\xbc\x9a\xe5\xb1\x8f\xe8\x94\xbd\xe5\x85\xb6\xe5\xae\x83\xe6\x8a\x80\xe8\x83\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagsToCancel_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The other ability tags that will be canceled by any ability using this tag\n// \xe6\xad\xa4\xe6\x8a\x80\xe8\x83\xbd\xe4\xbc\x9a\xe5\x8f\x96\xe6\xb6\x88\xe4\xb9\x8b\xe5\x89\x8d\xe6\x96\xbd\xe6\x94\xbe\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The other ability tags that will be canceled by any ability using this tag\n\xe6\xad\xa4\xe6\x8a\x80\xe8\x83\xbd\xe4\xbc\x9a\xe5\x8f\x96\xe6\xb6\x88\xe4\xb9\x8b\xe5\x89\x8d\xe6\x96\xbd\xe6\x94\xbe\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationRequiredTags_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If an ability has the tag, this is implicitly added to the activation required tags of the ability\n// \xe6\x8a\x80\xe8\x83\xbd\xe6\x96\xbd\xe6\x94\xbe\xe6\x89\x80\xe5\xbf\x85\xe9\xa1\xbb\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe5\xa6\x82\xe5\x89\x8d\xe7\xbd\xae\xe6\x8a\x80\xe8\x83\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If an ability has the tag, this is implicitly added to the activation required tags of the ability\n\xe6\x8a\x80\xe8\x83\xbd\xe6\x96\xbd\xe6\x94\xbe\xe6\x89\x80\xe5\xbf\x85\xe9\xa1\xbb\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe5\xa6\x82\xe5\x89\x8d\xe7\xbd\xae\xe6\x8a\x80\xe8\x83\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If an ability has the tag, this is implicitly added to the activation blocked tags of the ability\n// \xe6\x8b\xa5\xe6\x9c\x89\xe6\xad\xa4\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe6\x8a\x80\xe8\x83\xbd\xe5\xb0\xb1\xe6\x97\xa0\xe6\xb3\x95\xe6\x96\xbd\xe6\x94\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If an ability has the tag, this is implicitly added to the activation blocked tags of the ability\n\xe6\x8b\xa5\xe6\x9c\x89\xe6\xad\xa4\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe6\x8a\x80\xe8\x83\xbd\xe5\xb0\xb1\xe6\x97\xa0\xe6\xb3\x95\xe6\x96\xbd\xe6\x94\xbe" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagsToBlock;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagsToCancel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreAbilityTagRelationship>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilityTagRelationship, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock = { "AbilityTagsToBlock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilityTagRelationship, AbilityTagsToBlock), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagsToBlock_MetaData), NewProp_AbilityTagsToBlock_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel = { "AbilityTagsToCancel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilityTagRelationship, AbilityTagsToCancel), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagsToCancel_MetaData), NewProp_AbilityTagsToCancel_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags = { "ActivationRequiredTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilityTagRelationship, ActivationRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationRequiredTags_MetaData), NewProp_ActivationRequiredTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilityTagRelationship, ActivationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationBlockedTags_MetaData), NewProp_ActivationBlockedTags_MetaData) }; // 2104890724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreAbilityTagRelationship",
	Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::PropPointers),
	sizeof(FCoreAbilityTagRelationship),
	alignof(FCoreAbilityTagRelationship),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilityTagRelationship()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilityTagRelationship.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreAbilityTagRelationship.InnerSingleton, Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilityTagRelationship.InnerSingleton;
}
// ********** End ScriptStruct FCoreAbilityTagRelationship *****************************************

// ********** Begin Class UCoreAbilityTagRelationshipMapping ***************************************
void UCoreAbilityTagRelationshipMapping::StaticRegisterNativesUCoreAbilityTagRelationshipMapping()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreAbilityTagRelationshipMapping;
UClass* UCoreAbilityTagRelationshipMapping::GetPrivateStaticClass()
{
	using TClass = UCoreAbilityTagRelationshipMapping;
	if (!Z_Registration_Info_UClass_UCoreAbilityTagRelationshipMapping.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreAbilityTagRelationshipMapping"),
			Z_Registration_Info_UClass_UCoreAbilityTagRelationshipMapping.InnerSingleton,
			StaticRegisterNativesUCoreAbilityTagRelationshipMapping,
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
	return Z_Registration_Info_UClass_UCoreAbilityTagRelationshipMapping.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_NoRegister()
{
	return UCoreAbilityTagRelationshipMapping::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mapping of how ability tags block or cancel other abilities\n * \xe4\xb8\x80\xe4\xb8\xaa\xe8\x83\xbd\xe5\x8a\x9b\xe5\xa6\x82\xe4\xbd\x95\xe9\x98\xbb\xe7\xa2\x8d\xe6\x88\x96\xe5\x8f\x96\xe6\xb6\x88\xe5\x8f\xa6\xe4\xb8\x80\xe4\xb8\xaa\xe8\x83\xbd\xe5\x8a\x9b\xe7\x9a\x84\xe6\x98\xa0\xe5\xb0\x84\n */" },
#endif
		{ "IncludePath", "AbilitySystem/CoreAbilityTagRelationshipMapping.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of how ability tags block or cancel other abilities\n\xe4\xb8\x80\xe4\xb8\xaa\xe8\x83\xbd\xe5\x8a\x9b\xe5\xa6\x82\xe4\xbd\x95\xe9\x98\xbb\xe7\xa2\x8d\xe6\x88\x96\xe5\x8f\x96\xe6\xb6\x88\xe5\x8f\xa6\xe4\xb8\x80\xe4\xb8\xaa\xe8\x83\xbd\xe5\x8a\x9b\xe7\x9a\x84\xe6\x98\xa0\xe5\xb0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagRelationships_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The list of relationships between different gameplay tags (which ones block or cancel others) */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilityTagRelationshipMapping.h" },
		{ "TitleProperty", "AbilityTag" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of relationships between different gameplay tags (which ones block or cancel others)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagRelationships_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityTagRelationships;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAbilityTagRelationshipMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_Inner = { "AbilityTagRelationships", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCoreAbilityTagRelationship, METADATA_PARAMS(0, nullptr) }; // 1702511636
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships = { "AbilityTagRelationships", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAbilityTagRelationshipMapping, AbilityTagRelationships), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagRelationships_MetaData), NewProp_AbilityTagRelationships_MetaData) }; // 1702511636
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::ClassParams = {
	&UCoreAbilityTagRelationshipMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreAbilityTagRelationshipMapping()
{
	if (!Z_Registration_Info_UClass_UCoreAbilityTagRelationshipMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreAbilityTagRelationshipMapping.OuterSingleton, Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreAbilityTagRelationshipMapping.OuterSingleton;
}
UCoreAbilityTagRelationshipMapping::UCoreAbilityTagRelationshipMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAbilityTagRelationshipMapping);
UCoreAbilityTagRelationshipMapping::~UCoreAbilityTagRelationshipMapping() {}
// ********** End Class UCoreAbilityTagRelationshipMapping *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h__Script_GameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoreAbilityTagRelationship::StaticStruct, Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics::NewStructOps, TEXT("CoreAbilityTagRelationship"), &Z_Registration_Info_UScriptStruct_FCoreAbilityTagRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreAbilityTagRelationship), 1702511636U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreAbilityTagRelationshipMapping, UCoreAbilityTagRelationshipMapping::StaticClass, TEXT("UCoreAbilityTagRelationshipMapping"), &Z_Registration_Info_UClass_UCoreAbilityTagRelationshipMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreAbilityTagRelationshipMapping), 3376797964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h__Script_GameCore_2339088239(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h__Script_GameCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h__Script_GameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h__Script_GameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
