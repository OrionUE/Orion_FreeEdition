// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Messages/CoreVerbMessage.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreVerbMessage() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreVerbMessage();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCoreVerbMessage **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreVerbMessage;
class UScriptStruct* FCoreVerbMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreVerbMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreVerbMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreVerbMessage, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreVerbMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreVerbMessage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreVerbMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Messages/CoreVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Messages/CoreVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Messages/CoreVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Messages/CoreVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorTags_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Messages/CoreVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Messages/CoreVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Messages/CoreVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Messages/CoreVerbMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreVerbMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreVerbMessage, Verb), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Verb_MetaData), NewProp_Verb_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreVerbMessage, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreVerbMessage, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_InstigatorTags = { "InstigatorTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreVerbMessage, InstigatorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorTags_MetaData), NewProp_InstigatorTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreVerbMessage, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreVerbMessage, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 2104890724
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreVerbMessage, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_Verb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_InstigatorTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_ContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreVerbMessage",
	Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::PropPointers),
	sizeof(FCoreVerbMessage),
	alignof(FCoreVerbMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreVerbMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreVerbMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreVerbMessage.InnerSingleton, Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreVerbMessage.InnerSingleton;
}
// ********** End ScriptStruct FCoreVerbMessage ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Messages_CoreVerbMessage_h__Script_GameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoreVerbMessage::StaticStruct, Z_Construct_UScriptStruct_FCoreVerbMessage_Statics::NewStructOps, TEXT("CoreVerbMessage"), &Z_Registration_Info_UScriptStruct_FCoreVerbMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreVerbMessage), 853455562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Messages_CoreVerbMessage_h__Script_GameCore_1304459519(TEXT("/Script/GameCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Messages_CoreVerbMessage_h__Script_GameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Messages_CoreVerbMessage_h__Script_GameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
