// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/CoreGameplayAbility.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_ACoreCharacter_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_ACorePlayerController_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityCost_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameplayAbility();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameplayAbility_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnControlComponent_NoRegister();
GAMECORE_API UEnum* Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup();
GAMECORE_API UEnum* Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECoreAbilityActivationPolicy **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECoreAbilityActivationPolicy;
static UEnum* ECoreAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECoreAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECoreAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("ECoreAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_ECoreAbilityActivationPolicy.OuterSingleton;
}
template<> GAMECORE_API UEnum* StaticEnum<ECoreAbilityActivationPolicy>()
{
	return ECoreAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ECoreAbilityActivationPolicy\n * \n * Defines how an ability is meant to activate.\n * \xe5\xa6\x82\xe4\xbd\x95\xe5\x8e\xbb\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\n */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
		{ "OnInputStarted.Comment", "// Try to activate the ability when the input is triggered.\n// \xe5\xbd\x93\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x80\xe5\xa7\x8b\xe6\x8c\x89\xe5\x8e\x8b\xe8\xa7\xa6\xe5\x8f\x91\xe6\x97\xb6\xef\xbc\x8c\xe5\xb0\x9d\xe8\xaf\x95\xe6\xbf\x80\xe6\xb4\xbb\xe5\x8f\x8a\xe8\x83\xbd\xe5\x8a\x9b\n" },
		{ "OnInputStarted.Name", "ECoreAbilityActivationPolicy::OnInputStarted" },
		{ "OnInputStarted.ToolTip", "Try to activate the ability when the input is triggered.\n\xe5\xbd\x93\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x80\xe5\xa7\x8b\xe6\x8c\x89\xe5\x8e\x8b\xe8\xa7\xa6\xe5\x8f\x91\xe6\x97\xb6\xef\xbc\x8c\xe5\xb0\x9d\xe8\xaf\x95\xe6\xbf\x80\xe6\xb4\xbb\xe5\x8f\x8a\xe8\x83\xbd\xe5\x8a\x9b" },
		{ "OnInputTriggered.Comment", "// Try to activate the ability when the input is triggered.\n// \xe5\xbd\x93\xe8\xbe\x93\xe5\x85\xa5\xe8\xa7\xa6\xe5\x8f\x91\xe6\x97\xb6\xef\xbc\x8c\xe5\xb0\x9d\xe8\xaf\x95\xe6\xbf\x80\xe6\xb4\xbb\xe5\x8f\x8a\xe8\x83\xbd\xe5\x8a\x9b\n" },
		{ "OnInputTriggered.Name", "ECoreAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Try to activate the ability when the input is triggered.\n\xe5\xbd\x93\xe8\xbe\x93\xe5\x85\xa5\xe8\xa7\xa6\xe5\x8f\x91\xe6\x97\xb6\xef\xbc\x8c\xe5\xb0\x9d\xe8\xaf\x95\xe6\xbf\x80\xe6\xb4\xbb\xe5\x8f\x8a\xe8\x83\xbd\xe5\x8a\x9b" },
		{ "OnSpawn.Comment", "// Try to activate the ability when an avatar is assigned.\n// \xe5\xbd\x93\xe8\xa7\x92\xe8\x89\xb2\xe8\xa2\xab\xe5\x88\x86\xe9\x85\x8d\xe6\x97\xb6\xe5\xb0\x9d\xe8\xaf\x95\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\n" },
		{ "OnSpawn.Name", "ECoreAbilityActivationPolicy::OnSpawn" },
		{ "OnSpawn.ToolTip", "Try to activate the ability when an avatar is assigned.\n\xe5\xbd\x93\xe8\xa7\x92\xe8\x89\xb2\xe8\xa2\xab\xe5\x88\x86\xe9\x85\x8d\xe6\x97\xb6\xe5\xb0\x9d\xe8\xaf\x95\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ECoreAbilityActivationPolicy\n\nDefines how an ability is meant to activate.\n\xe5\xa6\x82\xe4\xbd\x95\xe5\x8e\xbb\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b" },
#endif
		{ "WhileInputActive.Comment", "// Continually try to activate the ability while the input is active.\n// \xe5\xbd\x93\xe8\xbe\x93\xe5\x85\xa5\xe6\xbf\x80\xe6\xb4\xbb\xe6\x97\xb6\xef\xbc\x8c\xe6\x8c\x81\xe7\xbb\xad\xe5\x9c\xb0\xe5\xb0\x9d\xe8\xaf\x95\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\n" },
		{ "WhileInputActive.Name", "ECoreAbilityActivationPolicy::WhileInputActive" },
		{ "WhileInputActive.ToolTip", "Continually try to activate the ability while the input is active.\n\xe5\xbd\x93\xe8\xbe\x93\xe5\x85\xa5\xe6\xbf\x80\xe6\xb4\xbb\xe6\x97\xb6\xef\xbc\x8c\xe6\x8c\x81\xe7\xbb\xad\xe5\x9c\xb0\xe5\xb0\x9d\xe8\xaf\x95\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECoreAbilityActivationPolicy::OnInputTriggered", (int64)ECoreAbilityActivationPolicy::OnInputTriggered },
		{ "ECoreAbilityActivationPolicy::WhileInputActive", (int64)ECoreAbilityActivationPolicy::WhileInputActive },
		{ "ECoreAbilityActivationPolicy::OnSpawn", (int64)ECoreAbilityActivationPolicy::OnSpawn },
		{ "ECoreAbilityActivationPolicy::OnInputStarted", (int64)ECoreAbilityActivationPolicy::OnInputStarted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	"ECoreAbilityActivationPolicy",
	"ECoreAbilityActivationPolicy",
	Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_ECoreAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECoreAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECoreAbilityActivationPolicy.InnerSingleton;
}
// ********** End Enum ECoreAbilityActivationPolicy ************************************************

// ********** Begin Enum ECoreAbilityActivationGroup ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECoreAbilityActivationGroup;
static UEnum* ECoreAbilityActivationGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECoreAbilityActivationGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECoreAbilityActivationGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("ECoreAbilityActivationGroup"));
	}
	return Z_Registration_Info_UEnum_ECoreAbilityActivationGroup.OuterSingleton;
}
template<> GAMECORE_API UEnum* StaticEnum<ECoreAbilityActivationGroup>()
{
	return ECoreAbilityActivationGroup_StaticEnum();
}
struct Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ECoreAbilityActivationGroup\n *\n * Defines how an ability activates in relation to other abilities.\n * \xe5\xae\x9a\xe4\xb9\x89\xe4\xb8\x80\xe7\xa7\x8d\xe6\xbf\x80\xe6\xb4\xbb\xe8\x83\xbd\xe5\x8a\x9b\xe5\xa6\x82\xe4\xbd\x95\xe4\xb8\x8e\xe5\x85\xb6\xe4\xbb\x96\xe8\x83\xbd\xe5\x8a\x9b\xe7\x9b\xb8\xe5\x85\xb3\xe8\x81\x94\xe3\x80\x82\n */" },
#endif
		{ "Exclusive_Blocking.Comment", "// Ability blocks all other exclusive abilities from activating.\n// \xe8\xaf\xa5\xe6\x8a\x80\xe8\x83\xbd\xe9\x98\xbb\xe6\xad\xa2\xe6\x89\x80\xe6\x9c\x89\xe5\x85\xb6\xe4\xbb\x96\xe7\x89\xb9\xe6\xae\x8a\xe8\x83\xbd\xe5\x8a\x9b\xe7\x9a\x84\xe6\xbf\x80\xe6\xb4\xbb\n" },
		{ "Exclusive_Blocking.Name", "ECoreAbilityActivationGroup::Exclusive_Blocking" },
		{ "Exclusive_Blocking.ToolTip", "Ability blocks all other exclusive abilities from activating.\n\xe8\xaf\xa5\xe6\x8a\x80\xe8\x83\xbd\xe9\x98\xbb\xe6\xad\xa2\xe6\x89\x80\xe6\x9c\x89\xe5\x85\xb6\xe4\xbb\x96\xe7\x89\xb9\xe6\xae\x8a\xe8\x83\xbd\xe5\x8a\x9b\xe7\x9a\x84\xe6\xbf\x80\xe6\xb4\xbb" },
		{ "Exclusive_Replaceable.Comment", "// Ability is canceled and replaced by other exclusive abilities.\n// \xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\x8f\xaf\xe8\xa2\xab\xe5\x85\xb6\xe4\xbb\x96\xe7\x89\xb9\xe6\xae\x8a\xe8\x83\xbd\xe5\x8a\x9b\xe5\x8f\x96\xe6\xb6\x88\xe6\x88\x96\xe6\x9b\xbf\xe6\x8d\xa2\n" },
		{ "Exclusive_Replaceable.Name", "ECoreAbilityActivationGroup::Exclusive_Replaceable" },
		{ "Exclusive_Replaceable.ToolTip", "Ability is canceled and replaced by other exclusive abilities.\n\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\x8f\xaf\xe8\xa2\xab\xe5\x85\xb6\xe4\xbb\x96\xe7\x89\xb9\xe6\xae\x8a\xe8\x83\xbd\xe5\x8a\x9b\xe5\x8f\x96\xe6\xb6\x88\xe6\x88\x96\xe6\x9b\xbf\xe6\x8d\xa2" },
		{ "Independent.Comment", "// Ability runs independently of all other abilities.\n// \xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe7\x8b\xac\xe7\xab\x8b\xe4\xba\x8e\xe5\x85\xb6\xe4\xbb\x96\xe6\x89\x80\xe6\x9c\x89\xe8\x83\xbd\xe5\x8a\x9b\n" },
		{ "Independent.Name", "ECoreAbilityActivationGroup::Independent" },
		{ "Independent.ToolTip", "Ability runs independently of all other abilities.\n\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe7\x8b\xac\xe7\xab\x8b\xe4\xba\x8e\xe5\x85\xb6\xe4\xbb\x96\xe6\x89\x80\xe6\x9c\x89\xe8\x83\xbd\xe5\x8a\x9b" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ECoreAbilityActivationGroup::MAX" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ECoreAbilityActivationGroup\n\nDefines how an ability activates in relation to other abilities.\n\xe5\xae\x9a\xe4\xb9\x89\xe4\xb8\x80\xe7\xa7\x8d\xe6\xbf\x80\xe6\xb4\xbb\xe8\x83\xbd\xe5\x8a\x9b\xe5\xa6\x82\xe4\xbd\x95\xe4\xb8\x8e\xe5\x85\xb6\xe4\xbb\x96\xe8\x83\xbd\xe5\x8a\x9b\xe7\x9b\xb8\xe5\x85\xb3\xe8\x81\x94\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECoreAbilityActivationGroup::Independent", (int64)ECoreAbilityActivationGroup::Independent },
		{ "ECoreAbilityActivationGroup::Exclusive_Replaceable", (int64)ECoreAbilityActivationGroup::Exclusive_Replaceable },
		{ "ECoreAbilityActivationGroup::Exclusive_Blocking", (int64)ECoreAbilityActivationGroup::Exclusive_Blocking },
		{ "ECoreAbilityActivationGroup::MAX", (int64)ECoreAbilityActivationGroup::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	"ECoreAbilityActivationGroup",
	"ECoreAbilityActivationGroup",
	Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup()
{
	if (!Z_Registration_Info_UEnum_ECoreAbilityActivationGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECoreAbilityActivationGroup.InnerSingleton, Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECoreAbilityActivationGroup.InnerSingleton;
}
// ********** End Enum ECoreAbilityActivationGroup *************************************************

// ********** Begin ScriptStruct FCoreAbilitySimpleFailureMessage **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreAbilitySimpleFailureMessage;
class UScriptStruct* FCoreAbilitySimpleFailureMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilitySimpleFailureMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreAbilitySimpleFailureMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreAbilitySimpleFailureMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilitySimpleFailureMessage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x83\xbd\xe5\x8a\x9b\xe6\xbf\x80\xe6\xb4\xbb\xe5\xa4\xb1\xe8\xb4\xa5\xe7\xae\x80\xe5\x8d\x95\xe6\xb6\x88\xe6\x81\xaf\n */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xbd\xe5\x8a\x9b\xe6\xbf\x80\xe6\xb4\xbb\xe5\xa4\xb1\xe8\xb4\xa5\xe7\xae\x80\xe5\x8d\x95\xe6\xb6\x88\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "CoreAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[] = {
		{ "Category", "CoreAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserFacingReason_MetaData[] = {
		{ "Category", "CoreAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UserFacingReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreAbilitySimpleFailureMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySimpleFailureMessage, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySimpleFailureMessage, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTags_MetaData), NewProp_FailureTags_MetaData) }; // 2104890724
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason = { "UserFacingReason", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilitySimpleFailureMessage, UserFacingReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserFacingReason_MetaData), NewProp_UserFacingReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::NewProp_FailureTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreAbilitySimpleFailureMessage",
	Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::PropPointers),
	sizeof(FCoreAbilitySimpleFailureMessage),
	alignof(FCoreAbilitySimpleFailureMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilitySimpleFailureMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreAbilitySimpleFailureMessage.InnerSingleton, Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilitySimpleFailureMessage.InnerSingleton;
}
// ********** End ScriptStruct FCoreAbilitySimpleFailureMessage ************************************

// ********** Begin ScriptStruct FCoreAbilityMontageFailureMessage *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreAbilityMontageFailureMessage;
class UScriptStruct* FCoreAbilityMontageFailureMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilityMontageFailureMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreAbilityMontageFailureMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreAbilityMontageFailureMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilityMontageFailureMessage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Failure reason that can be used to play an animation montage when a failure occurs\n * \xe6\x95\x85\xe9\x9a\x9c\xe5\x8e\x9f\xe5\x9b\xa0\xef\xbc\x8c\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe6\x92\xad\xe6\x94\xbe\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe6\x97\xb6\xe5\x8f\x91\xe7\x94\x9f\xe6\x95\x85\xe9\x9a\x9c\n */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Failure reason that can be used to play an animation montage when a failure occurs\n\xe6\x95\x85\xe9\x9a\x9c\xe5\x8e\x9f\xe5\x9b\xa0\xef\xbc\x8c\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe6\x92\xad\xe6\x94\xbe\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe6\x97\xb6\xe5\x8f\x91\xe7\x94\x9f\xe6\x95\x85\xe9\x9a\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "CoreAbilityMontageFailureMessage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player controller that failed to activate the ability, if the AbilitySystemComponent was player owned\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player controller that failed to activate the ability, if the AbilitySystemComponent was player owned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarActor_MetaData[] = {
		{ "Category", "CoreAbilityMontageFailureMessage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Avatar actor that failed to activate the ability\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Avatar actor that failed to activate the ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[] = {
		{ "Category", "CoreAbilityMontageFailureMessage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All the reasons why this ability has failed\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the reasons why this ability has failed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureMontage_MetaData[] = {
		{ "Category", "CoreAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreAbilityMontageFailureMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilityMontageFailureMessage, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::NewProp_AvatarActor = { "AvatarActor", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilityMontageFailureMessage, AvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarActor_MetaData), NewProp_AvatarActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilityMontageFailureMessage, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTags_MetaData), NewProp_FailureTags_MetaData) }; // 2104890724
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::NewProp_FailureMontage = { "FailureMontage", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreAbilityMontageFailureMessage, FailureMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureMontage_MetaData), NewProp_FailureMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::NewProp_AvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::NewProp_FailureTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::NewProp_FailureMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreAbilityMontageFailureMessage",
	Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::PropPointers),
	sizeof(FCoreAbilityMontageFailureMessage),
	alignof(FCoreAbilityMontageFailureMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreAbilityMontageFailureMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreAbilityMontageFailureMessage.InnerSingleton, Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreAbilityMontageFailureMessage.InnerSingleton;
}
// ********** End ScriptStruct FCoreAbilityMontageFailureMessage ***********************************

// ********** Begin Class UCoreGameplayAbility Function CanChangeActivationGroup *******************
struct Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics
{
	struct CoreGameplayAbility_eventCanChangeActivationGroup_Parms
	{
		ECoreAbilityActivationGroup NewGroup;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true if the requested activation group is a valid transition.\n\x09 * \xe5\xa6\x82\xe6\x9e\x9c\xe8\xaf\xb7\xe6\xb1\x82\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\xe5\x85\xb3\xe8\x81\x94\xe7\xbb\x84\xe6\x97\xb6\xe6\x9c\x89\xe6\x95\x88\xe7\x9a\x84\xe8\xbd\xac\xe6\x8d\xa2\xef\xbc\x8c\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9etrue\n\x09 */" },
#endif
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the requested activation group is a valid transition.\n\xe5\xa6\x82\xe6\x9e\x9c\xe8\xaf\xb7\xe6\xb1\x82\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\xe5\x85\xb3\xe8\x81\x94\xe7\xbb\x84\xe6\x97\xb6\xe6\x9c\x89\xe6\x95\x88\xe7\x9a\x84\xe8\xbd\xac\xe6\x8d\xa2\xef\xbc\x8c\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9etrue" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameplayAbility_eventCanChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup, METADATA_PARAMS(0, nullptr) }; // 573612608
void Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CoreGameplayAbility_eventCanChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CoreGameplayAbility_eventCanChangeActivationGroup_Parms), &Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "CanChangeActivationGroup", Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::CoreGameplayAbility_eventCanChangeActivationGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::CoreGameplayAbility_eventCanChangeActivationGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGameplayAbility::execCanChangeActivationGroup)
{
	P_GET_ENUM(ECoreAbilityActivationGroup,Z_Param_NewGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanChangeActivationGroup(ECoreAbilityActivationGroup(Z_Param_NewGroup));
	P_NATIVE_END;
}
// ********** End Class UCoreGameplayAbility Function CanChangeActivationGroup *********************

// ********** Begin Class UCoreGameplayAbility Function ChangeActivationGroup **********************
struct Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics
{
	struct CoreGameplayAbility_eventChangeActivationGroup_Parms
	{
		ECoreAbilityActivationGroup NewGroup;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to change the activation group.  Returns true if it successfully changed.\n\x09 * \xe5\xb0\x9d\xe8\xaf\x95\xe6\x9b\xb4\xe6\x94\xb9\xe8\x83\xbd\xe5\x8a\x9b\xe5\x85\xb3\xe8\x81\x94\xe7\xbb\x84\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\x9b\xb4\xe6\x94\xb9\xe6\x88\x90\xe5\x8a\x9f\xe8\xbf\x94\xe5\x9b\x9etrue\n\x09 */" },
#endif
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to change the activation group.  Returns true if it successfully changed.\n\xe5\xb0\x9d\xe8\xaf\x95\xe6\x9b\xb4\xe6\x94\xb9\xe8\x83\xbd\xe5\x8a\x9b\xe5\x85\xb3\xe8\x81\x94\xe7\xbb\x84\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\x9b\xb4\xe6\x94\xb9\xe6\x88\x90\xe5\x8a\x9f\xe8\xbf\x94\xe5\x9b\x9etrue" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameplayAbility_eventChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup, METADATA_PARAMS(0, nullptr) }; // 573612608
void Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CoreGameplayAbility_eventChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CoreGameplayAbility_eventChangeActivationGroup_Parms), &Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "ChangeActivationGroup", Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::CoreGameplayAbility_eventChangeActivationGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::CoreGameplayAbility_eventChangeActivationGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGameplayAbility::execChangeActivationGroup)
{
	P_GET_ENUM(ECoreAbilityActivationGroup,Z_Param_NewGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChangeActivationGroup(ECoreAbilityActivationGroup(Z_Param_NewGroup));
	P_NATIVE_END;
}
// ********** End Class UCoreGameplayAbility Function ChangeActivationGroup ************************

// ********** Begin Class UCoreGameplayAbility Function GetControllerFromActorInfo *****************
struct Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics
{
	struct CoreGameplayAbility_eventGetControllerFromActorInfo_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameplayAbility_eventGetControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "GetControllerFromActorInfo", Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::CoreGameplayAbility_eventGetControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::CoreGameplayAbility_eventGetControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGameplayAbility::execGetControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetControllerFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UCoreGameplayAbility Function GetControllerFromActorInfo *******************

// ********** Begin Class UCoreGameplayAbility Function GetCoreAbilitySystemComponentFromActorInfo *
struct Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics
{
	struct CoreGameplayAbility_eventGetCoreAbilitySystemComponentFromActorInfo_Parms
	{
		UCoreAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameplayAbility_eventGetCoreAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "GetCoreAbilitySystemComponentFromActorInfo", Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::CoreGameplayAbility_eventGetCoreAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::CoreGameplayAbility_eventGetCoreAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGameplayAbility::execGetCoreAbilitySystemComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCoreAbilitySystemComponent**)Z_Param__Result=P_THIS->GetCoreAbilitySystemComponentFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UCoreGameplayAbility Function GetCoreAbilitySystemComponentFromActorInfo ***

// ********** Begin Class UCoreGameplayAbility Function GetCoreCharacterFromActorInfo **************
struct Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics
{
	struct CoreGameplayAbility_eventGetCoreCharacterFromActorInfo_Parms
	{
		ACoreCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameplayAbility_eventGetCoreCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ACoreCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "GetCoreCharacterFromActorInfo", Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::CoreGameplayAbility_eventGetCoreCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::CoreGameplayAbility_eventGetCoreCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGameplayAbility::execGetCoreCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACoreCharacter**)Z_Param__Result=P_THIS->GetCoreCharacterFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UCoreGameplayAbility Function GetCoreCharacterFromActorInfo ****************

// ********** Begin Class UCoreGameplayAbility Function GetCorePlayerControllerFromActorInfo *******
struct Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics
{
	struct CoreGameplayAbility_eventGetCorePlayerControllerFromActorInfo_Parms
	{
		ACorePlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameplayAbility_eventGetCorePlayerControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ACorePlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "GetCorePlayerControllerFromActorInfo", Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::CoreGameplayAbility_eventGetCorePlayerControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::CoreGameplayAbility_eventGetCorePlayerControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGameplayAbility::execGetCorePlayerControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACorePlayerController**)Z_Param__Result=P_THIS->GetCorePlayerControllerFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UCoreGameplayAbility Function GetCorePlayerControllerFromActorInfo *********

// ********** Begin Class UCoreGameplayAbility Function GetPawnControlComponentFromActorInfo *******
struct Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics
{
	struct CoreGameplayAbility_eventGetPawnControlComponentFromActorInfo_Parms
	{
		UCorePawnControlComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameplayAbility_eventGetPawnControlComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UCorePawnControlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "GetPawnControlComponentFromActorInfo", Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::CoreGameplayAbility_eventGetPawnControlComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::CoreGameplayAbility_eventGetPawnControlComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGameplayAbility::execGetPawnControlComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCorePawnControlComponent**)Z_Param__Result=P_THIS->GetPawnControlComponentFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UCoreGameplayAbility Function GetPawnControlComponentFromActorInfo *********

// ********** Begin Class UCoreGameplayAbility Function K2_OnAbilityAdded **************************
static FName NAME_UCoreGameplayAbility_K2_OnAbilityAdded = FName(TEXT("K2_OnAbilityAdded"));
void UCoreGameplayAbility::K2_OnAbilityAdded()
{
	UFunction* Func = FindFunctionChecked(NAME_UCoreGameplayAbility_K2_OnAbilityAdded);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is granted to the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityAdded" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is granted to the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "K2_OnAbilityAdded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCoreGameplayAbility Function K2_OnAbilityAdded ****************************

// ********** Begin Class UCoreGameplayAbility Function K2_OnAbilityRemoved ************************
static FName NAME_UCoreGameplayAbility_K2_OnAbilityRemoved = FName(TEXT("K2_OnAbilityRemoved"));
void UCoreGameplayAbility::K2_OnAbilityRemoved()
{
	UFunction* Func = FindFunctionChecked(NAME_UCoreGameplayAbility_K2_OnAbilityRemoved);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is removed from the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityRemoved" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is removed from the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "K2_OnAbilityRemoved", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCoreGameplayAbility Function K2_OnAbilityRemoved **************************

// ********** Begin Class UCoreGameplayAbility Function K2_OnPawnAvatarSet *************************
static FName NAME_UCoreGameplayAbility_K2_OnPawnAvatarSet = FName(TEXT("K2_OnPawnAvatarSet"));
void UCoreGameplayAbility::K2_OnPawnAvatarSet()
{
	UFunction* Func = FindFunctionChecked(NAME_UCoreGameplayAbility_K2_OnPawnAvatarSet);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCoreGameplayAbility_K2_OnPawnAvatarSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the ability system is initialized with a pawn avatar. */" },
#endif
		{ "DisplayName", "OnPawnAvatarSet" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the ability system is initialized with a pawn avatar." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "K2_OnPawnAvatarSet", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_K2_OnPawnAvatarSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCoreGameplayAbility Function K2_OnPawnAvatarSet ***************************

// ********** Begin Class UCoreGameplayAbility Function ScriptOnAbilityFailedToActivate ************
struct CoreGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms
{
	FGameplayTagContainer FailedReason;
};
static FName NAME_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate = FName(TEXT("ScriptOnAbilityFailedToActivate"));
void UCoreGameplayAbility::ScriptOnAbilityFailedToActivate(FGameplayTagContainer const& FailedReason) const
{
	CoreGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms Parms;
	Parms.FailedReason=FailedReason;
	UFunction* Func = FindFunctionChecked(NAME_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate);
		const_cast<UCoreGameplayAbility*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when the ability fails to activate\n\x09 * \xe5\xbd\x93\xe8\x83\xbd\xe5\x8a\x9b\xe6\xbf\x80\xe6\xb4\xbb\xe5\xa4\xb1\xe8\xb4\xa5\xe6\x89\xa7\xe8\xa1\x8c\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the ability fails to activate\n\xe5\xbd\x93\xe8\x83\xbd\xe5\x8a\x9b\xe6\xbf\x80\xe6\xb4\xbb\xe5\xa4\xb1\xe8\xb4\xa5\xe6\x89\xa7\xe8\xa1\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailedReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason = { "FailedReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms, FailedReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedReason_MetaData), NewProp_FailedReason_MetaData) }; // 2104890724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGameplayAbility, nullptr, "ScriptOnAbilityFailedToActivate", Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers), sizeof(CoreGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CoreGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCoreGameplayAbility Function ScriptOnAbilityFailedToActivate **************

// ********** Begin Class UCoreGameplayAbility *****************************************************
void UCoreGameplayAbility::StaticRegisterNativesUCoreGameplayAbility()
{
	UClass* Class = UCoreGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanChangeActivationGroup", &UCoreGameplayAbility::execCanChangeActivationGroup },
		{ "ChangeActivationGroup", &UCoreGameplayAbility::execChangeActivationGroup },
		{ "GetControllerFromActorInfo", &UCoreGameplayAbility::execGetControllerFromActorInfo },
		{ "GetCoreAbilitySystemComponentFromActorInfo", &UCoreGameplayAbility::execGetCoreAbilitySystemComponentFromActorInfo },
		{ "GetCoreCharacterFromActorInfo", &UCoreGameplayAbility::execGetCoreCharacterFromActorInfo },
		{ "GetCorePlayerControllerFromActorInfo", &UCoreGameplayAbility::execGetCorePlayerControllerFromActorInfo },
		{ "GetPawnControlComponentFromActorInfo", &UCoreGameplayAbility::execGetPawnControlComponentFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreGameplayAbility;
UClass* UCoreGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UCoreGameplayAbility;
	if (!Z_Registration_Info_UClass_UCoreGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGameplayAbility"),
			Z_Registration_Info_UClass_UCoreGameplayAbility.InnerSingleton,
			StaticRegisterNativesUCoreGameplayAbility,
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
	return Z_Registration_Info_UClass_UCoreGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreGameplayAbility_NoRegister()
{
	return UCoreGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\xb8\xb8\xe6\x88\x8fGA\xe5\x9f\xba\xe7\xb1\xbb\n *\n * @see https://idealitycentury.yuque.com/bt1dl9/project_doc/bvxbw55e64c2yysw\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/CoreGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base gameplay ability class used by this project." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8fGA\xe5\x9f\xba\xe7\xb1\xbb\n\n@see https://idealitycentury.yuque.com/bt1dl9/project_doc/bvxbw55e64c2yysw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "GameCore|Ability Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how this ability is meant to activate.\n// \xe5\xae\x9a\xe4\xb9\x89\xe6\x80\x8e\xe6\xa0\xb7\xe5\x8e\xbb\xe6\xbf\x80\xe6\xb4\xbb\xe8\xbf\x99\xe4\xb8\xaa\xe8\x83\xbd\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how this ability is meant to activate.\n\xe5\xae\x9a\xe4\xb9\x89\xe6\x80\x8e\xe6\xa0\xb7\xe5\x8e\xbb\xe6\xbf\x80\xe6\xb4\xbb\xe8\xbf\x99\xe4\xb8\xaa\xe8\x83\xbd\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationGroup_MetaData[] = {
		{ "Category", "GameCore|Ability Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the relationship between this ability activating and other abilities activating.\n// \xe5\xae\x9a\xe4\xb9\x89\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe6\xbf\x80\xe6\xb4\xbb\xe4\xb8\x8e\xe5\x85\xb6\xe4\xbb\x96\xe8\x83\xbd\xe5\x8a\x9b\xe6\xbf\x80\xe6\xb4\xbb\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe5\x85\xb3\xe7\xb3\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the relationship between this ability activating and other abilities activating.\n\xe5\xae\x9a\xe4\xb9\x89\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe6\xbf\x80\xe6\xb4\xbb\xe4\xb8\x8e\xe5\x85\xb6\xe4\xbb\x96\xe8\x83\xbd\xe5\x8a\x9b\xe6\xbf\x80\xe6\xb4\xbb\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe5\x85\xb3\xe7\xb3\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_Inner_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n// \xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xbf\x85\xe9\xa1\xbb\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe6\x88\x90\xe6\x9c\xac\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability\n\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xbf\x85\xe9\xa1\xbb\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe6\x88\x90\xe6\x9c\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n// \xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xbf\x85\xe9\xa1\xbb\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe6\x88\x90\xe6\x9c\xac\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability\n\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xbf\x85\xe9\xa1\xbb\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe6\x88\x90\xe6\x9c\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToUserFacingMessages_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of failure tags to simple error messages\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of failure tags to simple error messages" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToAnimMontage_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of failure tags to anim montages that should be played with them\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of failure tags to anim montages that should be played with them" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogCancelation_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalCosts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCosts;
	static const UECodeGen_Private::FTextPropertyParams NewProp_FailureTagToUserFacingMessages_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToUserFacingMessages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToUserFacingMessages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureTagToAnimMontage_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToAnimMontage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToAnimMontage;
	static void NewProp_bLogCancelation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogCancelation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreGameplayAbility_CanChangeActivationGroup, "CanChangeActivationGroup" }, // 2852779090
		{ &Z_Construct_UFunction_UCoreGameplayAbility_ChangeActivationGroup, "ChangeActivationGroup" }, // 2969383972
		{ &Z_Construct_UFunction_UCoreGameplayAbility_GetControllerFromActorInfo, "GetControllerFromActorInfo" }, // 2445019517
		{ &Z_Construct_UFunction_UCoreGameplayAbility_GetCoreAbilitySystemComponentFromActorInfo, "GetCoreAbilitySystemComponentFromActorInfo" }, // 4271512590
		{ &Z_Construct_UFunction_UCoreGameplayAbility_GetCoreCharacterFromActorInfo, "GetCoreCharacterFromActorInfo" }, // 3599478854
		{ &Z_Construct_UFunction_UCoreGameplayAbility_GetCorePlayerControllerFromActorInfo, "GetCorePlayerControllerFromActorInfo" }, // 2579993901
		{ &Z_Construct_UFunction_UCoreGameplayAbility_GetPawnControlComponentFromActorInfo, "GetPawnControlComponentFromActorInfo" }, // 3421776329
		{ &Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityAdded, "K2_OnAbilityAdded" }, // 3543596082
		{ &Z_Construct_UFunction_UCoreGameplayAbility_K2_OnAbilityRemoved, "K2_OnAbilityRemoved" }, // 278154335
		{ &Z_Construct_UFunction_UCoreGameplayAbility_K2_OnPawnAvatarSet, "K2_OnPawnAvatarSet" }, // 4055010905
		{ &Z_Construct_UFunction_UCoreGameplayAbility_ScriptOnAbilityFailedToActivate, "ScriptOnAbilityFailedToActivate" }, // 1115992088
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreGameplayAbility, ActivationPolicy), Z_Construct_UEnum_GameCore_ECoreAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 996725243
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_ActivationGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_ActivationGroup = { "ActivationGroup", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreGameplayAbility, ActivationGroup), Z_Construct_UEnum_GameCore_ECoreAbilityActivationGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationGroup_MetaData), NewProp_ActivationGroup_MetaData) }; // 573612608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_AdditionalCosts_Inner = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreAbilityCost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_Inner_MetaData), NewProp_AdditionalCosts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_AdditionalCosts = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0124088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreGameplayAbility, AdditionalCosts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_MetaData), NewProp_AdditionalCosts_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp = { "FailureTagToUserFacingMessages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreGameplayAbility, FailureTagToUserFacingMessages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTagToUserFacingMessages_MetaData), NewProp_FailureTagToUserFacingMessages_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp = { "FailureTagToAnimMontage_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToAnimMontage = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreGameplayAbility, FailureTagToAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTagToAnimMontage_MetaData), NewProp_FailureTagToAnimMontage_MetaData) }; // 133831994
void Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_bLogCancelation_SetBit(void* Obj)
{
	((UCoreGameplayAbility*)Obj)->bLogCancelation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_bLogCancelation = { "bLogCancelation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCoreGameplayAbility), &Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_bLogCancelation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogCancelation_MetaData), NewProp_bLogCancelation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_ActivationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_ActivationGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_ActivationGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_AdditionalCosts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_AdditionalCosts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_FailureTagToAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameplayAbility_Statics::NewProp_bLogCancelation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreGameplayAbility_Statics::ClassParams = {
	&UCoreGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCoreGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameplayAbility_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UCoreGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreGameplayAbility.OuterSingleton, Z_Construct_UClass_UCoreGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreGameplayAbility.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGameplayAbility);
UCoreGameplayAbility::~UCoreGameplayAbility() {}
// ********** End Class UCoreGameplayAbility *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h__Script_GameCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECoreAbilityActivationPolicy_StaticEnum, TEXT("ECoreAbilityActivationPolicy"), &Z_Registration_Info_UEnum_ECoreAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 996725243U) },
		{ ECoreAbilityActivationGroup_StaticEnum, TEXT("ECoreAbilityActivationGroup"), &Z_Registration_Info_UEnum_ECoreAbilityActivationGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 573612608U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoreAbilitySimpleFailureMessage::StaticStruct, Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics::NewStructOps, TEXT("CoreAbilitySimpleFailureMessage"), &Z_Registration_Info_UScriptStruct_FCoreAbilitySimpleFailureMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreAbilitySimpleFailureMessage), 4071897785U) },
		{ FCoreAbilityMontageFailureMessage::StaticStruct, Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics::NewStructOps, TEXT("CoreAbilityMontageFailureMessage"), &Z_Registration_Info_UScriptStruct_FCoreAbilityMontageFailureMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreAbilityMontageFailureMessage), 1027458888U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreGameplayAbility, UCoreGameplayAbility::StaticClass, TEXT("UCoreGameplayAbility"), &Z_Registration_Info_UClass_UCoreGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreGameplayAbility), 3158817894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h__Script_GameCore_766647824(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h__Script_GameCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h__Script_GameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h__Script_GameCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h__Script_GameCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h__Script_GameCore_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
