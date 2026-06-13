// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/CoreGameplayEffectContext.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreGameplayEffectContext() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreGameplayEffectContext();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCoreGameplayEffectContext ****************************************
static_assert(std::is_polymorphic<FCoreGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FCoreGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreGameplayEffectContext;
class UScriptStruct* FCoreGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreGameplayEffectContext.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartridgeID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ID to allow the identification of multiple bullets that were part of the same cartridge */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGameplayEffectContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID to allow the identification of multiple bullets that were part of the same cartridge" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySourceObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability Source object (should implement ICoreAbilitySourceInterface). NOT replicated currently */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGameplayEffectContext.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability Source object (should implement ICoreAbilitySourceInterface). NOT replicated currently" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CartridgeID;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySourceObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreGameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::NewProp_CartridgeID = { "CartridgeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreGameplayEffectContext, CartridgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartridgeID_MetaData), NewProp_CartridgeID_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::NewProp_AbilitySourceObject = { "AbilitySourceObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreGameplayEffectContext, AbilitySourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySourceObject_MetaData), NewProp_AbilitySourceObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::NewProp_CartridgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::NewProp_AbilitySourceObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"CoreGameplayEffectContext",
	Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::PropPointers),
	sizeof(FCoreGameplayEffectContext),
	alignof(FCoreGameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreGameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreGameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreGameplayEffectContext.InnerSingleton;
}
// ********** End ScriptStruct FCoreGameplayEffectContext ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGameplayEffectContext_h__Script_GameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoreGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FCoreGameplayEffectContext_Statics::NewStructOps, TEXT("CoreGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_FCoreGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreGameplayEffectContext), 2916613658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGameplayEffectContext_h__Script_GameCore_884801129(TEXT("/Script/GameCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGameplayEffectContext_h__Script_GameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGameplayEffectContext_h__Script_GameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
