// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatures/GameFeatureAction_AddAbilities.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddAbilities() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySet_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilityGrant();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAttributeSetGrant();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCoreAbilityGrant *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreAbilityGrant;
class UScriptStruct* FCoreAbilityGrant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilityGrant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreAbilityGrant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreAbilityGrant, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreAbilityGrant"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilityGrant.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[] = {
		{ "AssetBundles", "Client, Server" },
		{ "Category", "CoreAbilityGrant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of ability to grant\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of ability to grant" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AbilityType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreAbilityGrant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilityGrant, AbilityType), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityType_MetaData), NewProp_AbilityType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::NewProp_AbilityType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreAbilityGrant",
	Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::PropPointers),
	sizeof(FCoreAbilityGrant),
	alignof(FCoreAbilityGrant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilityGrant()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilityGrant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreAbilityGrant.InnerSingleton, Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilityGrant.InnerSingleton;
}
// ********** End ScriptStruct FCoreAbilityGrant ***************************************************

// ********** Begin ScriptStruct FCoreAttributeSetGrant ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreAttributeSetGrant;
class UScriptStruct* FCoreAttributeSetGrant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAttributeSetGrant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreAttributeSetGrant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreAttributeSetGrant, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreAttributeSetGrant"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreAttributeSetGrant.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetType_MetaData[] = {
		{ "AssetBundles", "Client, Server" },
		{ "Category", "CoreAttributeSetGrant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability set to grant\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability set to grant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializationData_MetaData[] = {
		{ "AssetBundles", "Client, Server" },
		{ "Category", "CoreAttributeSetGrant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data table referent to initialize the attributes with, if any (can be left unset)\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data table referent to initialize the attributes with, if any (can be left unset)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AttributeSetType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InitializationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreAttributeSetGrant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::NewProp_AttributeSetType = { "AttributeSetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAttributeSetGrant, AttributeSetType), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetType_MetaData), NewProp_AttributeSetType_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::NewProp_InitializationData = { "InitializationData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAttributeSetGrant, InitializationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializationData_MetaData), NewProp_InitializationData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::NewProp_AttributeSetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::NewProp_InitializationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreAttributeSetGrant",
	Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::PropPointers),
	sizeof(FCoreAttributeSetGrant),
	alignof(FCoreAttributeSetGrant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreAttributeSetGrant()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAttributeSetGrant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreAttributeSetGrant.InnerSingleton, Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreAttributeSetGrant.InnerSingleton;
}
// ********** End ScriptStruct FCoreAttributeSetGrant **********************************************

// ********** Begin ScriptStruct FGameFeatureAbilitiesEntry ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameFeatureAbilitiesEntry;
class UScriptStruct* FGameFeatureAbilitiesEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameFeatureAbilitiesEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameFeatureAbilitiesEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("GameFeatureAbilitiesEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FGameFeatureAbilitiesEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The base actor class to add to\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base actor class to add to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of abilities to grant to actors of the specified class\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of abilities to grant to actors of the specified class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of attribute sets to grant to actors of the specified class \n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of attribute sets to grant to actors of the specified class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilitySets_MetaData[] = {
		{ "AssetBundles", "Client, Server" },
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of ability sets to grant to actors of the specified class\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of ability sets to grant to actors of the specified class" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GrantedAbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilitySets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameFeatureAbilitiesEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCoreAbilityGrant, METADATA_PARAMS(0, nullptr) }; // 3609151510
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilities_MetaData), NewProp_GrantedAbilities_MetaData) }; // 3609151510
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCoreAttributeSetGrant, METADATA_PARAMS(0, nullptr) }; // 535930909
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributes_MetaData), NewProp_GrantedAttributes_MetaData) }; // 535930909
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_Inner = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilitySets_MetaData), NewProp_GrantedAbilitySets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"GameFeatureAbilitiesEntry",
	Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers),
	sizeof(FGameFeatureAbilitiesEntry),
	alignof(FGameFeatureAbilitiesEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FGameFeatureAbilitiesEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameFeatureAbilitiesEntry.InnerSingleton, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGameFeatureAbilitiesEntry.InnerSingleton;
}
// ********** End ScriptStruct FGameFeatureAbilitiesEntry ******************************************

// ********** Begin Class UGameFeatureAction_AddAbilities ******************************************
void UGameFeatureAction_AddAbilities::StaticRegisterNativesUGameFeatureAction_AddAbilities()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities;
UClass* UGameFeatureAction_AddAbilities::GetPrivateStaticClass()
{
	using TClass = UGameFeatureAction_AddAbilities;
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameFeatureAction_AddAbilities"),
			Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.InnerSingleton,
			StaticRegisterNativesUGameFeatureAction_AddAbilities,
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
	return Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities_NoRegister()
{
	return UGameFeatureAction_AddAbilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameFeatureAction - \xe6\xb7\xbb\xe5\x8a\xa0""Abilities\n * GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type.\n */" },
#endif
		{ "DisplayName", "Add Abilities" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameFeatureAction - \xe6\xb7\xbb\xe5\x8a\xa0""Abilities\nGameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesList_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "ActorClass" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitiesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitiesList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddAbilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner = { "AbilitiesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry, METADATA_PARAMS(0, nullptr) }; // 1814002186
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList = { "AbilitiesList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddAbilities, AbilitiesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitiesList_MetaData), NewProp_AbilitiesList_MetaData) }; // 1814002186
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::ClassParams = {
	&UGameFeatureAction_AddAbilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.OuterSingleton;
}
UGameFeatureAction_AddAbilities::UGameFeatureAction_AddAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddAbilities);
UGameFeatureAction_AddAbilities::~UGameFeatureAction_AddAbilities() {}
// ********** End Class UGameFeatureAction_AddAbilities ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h__Script_GameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoreAbilityGrant::StaticStruct, Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics::NewStructOps, TEXT("CoreAbilityGrant"), &Z_Registration_Info_UScriptStruct_FCoreAbilityGrant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreAbilityGrant), 3609151510U) },
		{ FCoreAttributeSetGrant::StaticStruct, Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics::NewStructOps, TEXT("CoreAttributeSetGrant"), &Z_Registration_Info_UScriptStruct_FCoreAttributeSetGrant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreAttributeSetGrant), 535930909U) },
		{ FGameFeatureAbilitiesEntry::StaticStruct, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewStructOps, TEXT("GameFeatureAbilitiesEntry"), &Z_Registration_Info_UScriptStruct_FGameFeatureAbilitiesEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameFeatureAbilitiesEntry), 1814002186U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddAbilities, UGameFeatureAction_AddAbilities::StaticClass, TEXT("UGameFeatureAction_AddAbilities"), &Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddAbilities), 840695837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h__Script_GameCore_2114827068(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h__Script_GameCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h__Script_GameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h__Script_GameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
