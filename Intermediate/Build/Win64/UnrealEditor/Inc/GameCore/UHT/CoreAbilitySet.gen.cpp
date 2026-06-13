// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/CoreAbilitySet.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreAbilitySet() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySet();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySet_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameplayAbility_NoRegister();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCoreAbilitySet_GameplayAbility ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayAbility;
class UScriptStruct* FCoreAbilitySet_GameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreAbilitySet_GameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayAbility.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09\xe7\x94\xa8\xe4\xba\x8e\xe6\x8e\x88\xe4\xba\x88\xe8\x83\xbd\xe5\x8a\x9bGA\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\n */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\x8e\x88\xe4\xba\x88\xe8\x83\xbd\xe5\x8a\x9bGA\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "CoreAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8e\x88\xe4\xba\x88\xe7\x9a\x84GA\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\x88\xe4\xba\x88\xe7\x9a\x84GA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "CoreAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x83\xbd\xe5\x8a\x9b\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xbd\xe5\x8a\x9b\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "CoreAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\x84\xe7\x90\x86\xe8\xbe\x93\xe5\x85\xa5\xe8\x83\xbd\xe5\x8a\x9b\xe7\x9a\x84Tag\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x84\xe7\x90\x86\xe8\xbe\x93\xe5\x85\xa5\xe8\x83\xbd\xe5\x8a\x9b\xe7\x9a\x84Tag" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreAbilitySet_GameplayAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySet_GameplayAbility, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UCoreGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySet_GameplayAbility, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySet_GameplayAbility, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreAbilitySet_GameplayAbility",
	Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::PropPointers),
	sizeof(FCoreAbilitySet_GameplayAbility),
	alignof(FCoreAbilitySet_GameplayAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayAbility.InnerSingleton;
}
// ********** End ScriptStruct FCoreAbilitySet_GameplayAbility *************************************

// ********** Begin ScriptStruct FCoreAbilitySet_GameplayEffect ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayEffect;
class UScriptStruct* FCoreAbilitySet_GameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreAbilitySet_GameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayEffect.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x94\xa8\xe4\xba\x8e\xe6\x8e\x88\xe4\xba\x88GE\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\n */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\x8e\x88\xe4\xba\x88GE\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[] = {
		{ "Category", "CoreAbilitySet_GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8e\x88\xe4\xba\x88\xe7\x9a\x84GE\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\x88\xe4\xba\x88\xe7\x9a\x84GE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectLevel_MetaData[] = {
		{ "Category", "CoreAbilitySet_GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GE\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GE\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreAbilitySet_GameplayEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySet_GameplayEffect, GameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffect_MetaData), NewProp_GameplayEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySet_GameplayEffect, EffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectLevel_MetaData), NewProp_EffectLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreAbilitySet_GameplayEffect",
	Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::PropPointers),
	sizeof(FCoreAbilitySet_GameplayEffect),
	alignof(FCoreAbilitySet_GameplayEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayEffect.InnerSingleton;
}
// ********** End ScriptStruct FCoreAbilitySet_GameplayEffect **************************************

// ********** Begin ScriptStruct FCoreAbilitySet_AttributeSet **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreAbilitySet_AttributeSet;
class UScriptStruct* FCoreAbilitySet_AttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilitySet_AttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreAbilitySet_AttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreAbilitySet_AttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilitySet_AttributeSet.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x94\xa8\xe4\xba\x8e\xe6\x8e\x88\xe4\xba\x88\xe5\xb1\x9e\xe6\x80\xa7\xe9\x9b\x86""AS\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\n */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\x8e\x88\xe4\xba\x88\xe5\xb1\x9e\xe6\x80\xa7\xe9\x9b\x86""AS\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "CoreAbilitySet_AttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8e\x88\xe4\xba\x88\xe7\x9a\x84""AS\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\x88\xe4\xba\x88\xe7\x9a\x84""AS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreAbilitySet_AttributeSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySet_AttributeSet, AttributeSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreAbilitySet_AttributeSet",
	Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::PropPointers),
	sizeof(FCoreAbilitySet_AttributeSet),
	alignof(FCoreAbilitySet_AttributeSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilitySet_AttributeSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreAbilitySet_AttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilitySet_AttributeSet.InnerSingleton;
}
// ********** End ScriptStruct FCoreAbilitySet_AttributeSet ****************************************

// ********** Begin ScriptStruct FCoreAbilitySet_GrantedHandles ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GrantedHandles;
class UScriptStruct* FCoreAbilitySet_GrantedHandles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GrantedHandles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GrantedHandles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreAbilitySet_GrantedHandles"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GrantedHandles.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data used to store handles to what has been granted by the ability set.\n * \xe7\x94\xa8\xe4\xba\x8e\xe5\x82\xa8\xe5\xad\x98\xe8\x83\xbd\xe5\x8a\x9b\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\xe7\x9a\x84\xe5\x8f\xa5\xe6\x9f\x84\n */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data used to store handles to what has been granted by the ability set.\n\xe7\x94\xa8\xe4\xba\x8e\xe5\x82\xa8\xe5\xad\x98\xe8\x83\xbd\xe5\x8a\x9b\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\xe7\x9a\x84\xe5\x8f\xa5\xe6\x9f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GA\xe5\x8f\xa5\xe6\x9f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GA\xe5\x8f\xa5\xe6\x9f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GE\xe5\x8f\xa5\xe6\x9f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GE\xe5\x8f\xa5\xe6\x9f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributeSets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AS\xe5\x8f\xa5\xe6\x9f\x84\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AS\xe5\x8f\xa5\xe6\x9f\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySpecHandles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectHandles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrantedAttributeSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributeSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreAbilitySet_GrantedHandles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySet_GrantedHandles, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySpecHandles_MetaData), NewProp_AbilitySpecHandles_MetaData) }; // 417001783
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 386907876
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySet_GrantedHandles, GameplayEffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectHandles_MetaData), NewProp_GameplayEffectHandles_MetaData) }; // 386907876
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySet_GrantedHandles, GrantedAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributeSets_MetaData), NewProp_GrantedAttributeSets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreAbilitySet_GrantedHandles",
	Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::PropPointers),
	sizeof(FCoreAbilitySet_GrantedHandles),
	alignof(FCoreAbilitySet_GrantedHandles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GrantedHandles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GrantedHandles.InnerSingleton, Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GrantedHandles.InnerSingleton;
}
// ********** End ScriptStruct FCoreAbilitySet_GrantedHandles **************************************

// ********** Begin Class UCoreAbilitySet **********************************************************
void UCoreAbilitySet::StaticRegisterNativesUCoreAbilitySet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreAbilitySet;
UClass* UCoreAbilitySet::GetPrivateStaticClass()
{
	using TClass = UCoreAbilitySet;
	if (!Z_Registration_Info_UClass_UCoreAbilitySet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreAbilitySet"),
			Z_Registration_Info_UClass_UCoreAbilitySet.InnerSingleton,
			StaticRegisterNativesUCoreAbilitySet,
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
	return Z_Registration_Info_UClass_UCoreAbilitySet.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreAbilitySet_NoRegister()
{
	return UCoreAbilitySet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\xb8\xb8\xe6\x88\x8f""Ability\xe8\x83\xbd\xe5\x8a\x9b\xe9\x9b\x86\n * \xe7\x94\xa8\xe4\xba\x8e\xe5\xae\x9a\xe4\xb9\x89GA\xe5\x92\x8cGE\xe4\xb8\x8d\xe5\x8f\xaf\xe5\x8f\x98\xe9\x85\x8d\xe7\xbd\xae\xe8\xb5\x84\xe4\xba\xa7\n */" },
#endif
		{ "IncludePath", "AbilitySystem/CoreAbilitySet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f""Ability\xe8\x83\xbd\xe5\x8a\x9b\xe9\x9b\x86\n\xe7\x94\xa8\xe4\xba\x8e\xe5\xae\x9a\xe4\xb9\x89GA\xe5\x92\x8cGE\xe4\xb8\x8d\xe5\x8f\xaf\xe5\x8f\x98\xe9\x85\x8d\xe7\xbd\xae\xe8\xb5\x84\xe4\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayAbilities_MetaData[] = {
		{ "Category", "GameplayAbilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe8\x83\xbd\xe5\x8a\x9b\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\xe8\xa2\xab\xe6\x8e\x88\xe4\xba\x88\xe6\x97\xb6\xe7\x9a\x84GA\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
		{ "TitleProperty", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe8\x83\xbd\xe5\x8a\x9b\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\xe8\xa2\xab\xe6\x8e\x88\xe4\xba\x88\xe6\x97\xb6\xe7\x9a\x84GA\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayEffects_MetaData[] = {
		{ "Category", "GameplayEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe8\x83\xbd\xe5\x8a\x9b\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\xe8\xa2\xab\xe6\x8e\x88\xe4\xba\x88\xe6\x97\xb6\xe7\x9a\x84GE\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
		{ "TitleProperty", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe8\x83\xbd\xe5\x8a\x9b\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\xe8\xa2\xab\xe6\x8e\x88\xe4\xba\x88\xe6\x97\xb6\xe7\x9a\x84GE\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "AttributeSets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe8\x83\xbd\xe5\x8a\x9b\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\xe8\xa2\xab\xe6\x8e\x88\xe4\xba\x88\xe6\x97\xb6\xe7\x9a\x84""AS\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreAbilitySet.h" },
		{ "TitleProperty", "AttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe8\x83\xbd\xe5\x8a\x9b\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86\xe8\xa2\xab\xe6\x8e\x88\xe4\xba\x88\xe6\x97\xb6\xe7\x9a\x84""AS\xe6\x95\xb0\xe6\x8d\xae\xe9\x9b\x86" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAbilitySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility, METADATA_PARAMS(0, nullptr) }; // 1289105649
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedGameplayAbilities = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAbilitySet, GrantedGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayAbilities_MetaData), NewProp_GrantedGameplayAbilities_MetaData) }; // 1289105649
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect, METADATA_PARAMS(0, nullptr) }; // 2465683053
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedGameplayEffects = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAbilitySet, GrantedGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayEffects_MetaData), NewProp_GrantedGameplayEffects_MetaData) }; // 2465683053
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet, METADATA_PARAMS(0, nullptr) }; // 571621650
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAbilitySet, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributes_MetaData), NewProp_GrantedAttributes_MetaData) }; // 571621650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedGameplayAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAbilitySet_Statics::NewProp_GrantedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilitySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreAbilitySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilitySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreAbilitySet_Statics::ClassParams = {
	&UCoreAbilitySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCoreAbilitySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilitySet_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreAbilitySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreAbilitySet()
{
	if (!Z_Registration_Info_UClass_UCoreAbilitySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreAbilitySet.OuterSingleton, Z_Construct_UClass_UCoreAbilitySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreAbilitySet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAbilitySet);
UCoreAbilitySet::~UCoreAbilitySet() {}
// ********** End Class UCoreAbilitySet ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h__Script_GameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoreAbilitySet_GameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics::NewStructOps, TEXT("CoreAbilitySet_GameplayAbility"), &Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreAbilitySet_GameplayAbility), 1289105649U) },
		{ FCoreAbilitySet_GameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics::NewStructOps, TEXT("CoreAbilitySet_GameplayEffect"), &Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreAbilitySet_GameplayEffect), 2465683053U) },
		{ FCoreAbilitySet_AttributeSet::StaticStruct, Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics::NewStructOps, TEXT("CoreAbilitySet_AttributeSet"), &Z_Registration_Info_UScriptStruct_FCoreAbilitySet_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreAbilitySet_AttributeSet), 571621650U) },
		{ FCoreAbilitySet_GrantedHandles::StaticStruct, Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics::NewStructOps, TEXT("CoreAbilitySet_GrantedHandles"), &Z_Registration_Info_UScriptStruct_FCoreAbilitySet_GrantedHandles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreAbilitySet_GrantedHandles), 3969198065U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreAbilitySet, UCoreAbilitySet::StaticClass, TEXT("UCoreAbilitySet"), &Z_Registration_Info_UClass_UCoreAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreAbilitySet), 803169173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h__Script_GameCore_3812586705(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h__Script_GameCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h__Script_GameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h__Script_GameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
