// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/CoreGlobalAbilitySubsystem.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreGlobalAbilitySubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGlobalAbilitySubsystem();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGlobalAbilitySubsystem_NoRegister();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedAbilityList();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedEffectList();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGlobalAppliedAbilityList *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGlobalAppliedAbilityList;
class UScriptStruct* FGlobalAppliedAbilityList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGlobalAppliedAbilityList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGlobalAppliedAbilityList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("GlobalAppliedAbilityList"));
	}
	return Z_Registration_Info_UScriptStruct_FGlobalAppliedAbilityList.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Handles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Handles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalAppliedAbilityList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_ValueProp = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_Key_KeyProp = { "Handles_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalAppliedAbilityList, Handles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handles_MetaData), NewProp_Handles_MetaData) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"GlobalAppliedAbilityList",
	Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers),
	sizeof(FGlobalAppliedAbilityList),
	alignof(FGlobalAppliedAbilityList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedAbilityList()
{
	if (!Z_Registration_Info_UScriptStruct_FGlobalAppliedAbilityList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGlobalAppliedAbilityList.InnerSingleton, Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGlobalAppliedAbilityList.InnerSingleton;
}
// ********** End ScriptStruct FGlobalAppliedAbilityList *******************************************

// ********** Begin ScriptStruct FGlobalAppliedEffectList ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGlobalAppliedEffectList;
class UScriptStruct* FGlobalAppliedEffectList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGlobalAppliedEffectList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGlobalAppliedEffectList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalAppliedEffectList, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("GlobalAppliedEffectList"));
	}
	return Z_Registration_Info_UScriptStruct_FGlobalAppliedEffectList.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Handles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Handles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalAppliedEffectList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_ValueProp = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 386907876
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_Key_KeyProp = { "Handles_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalAppliedEffectList, Handles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handles_MetaData), NewProp_Handles_MetaData) }; // 386907876
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"GlobalAppliedEffectList",
	Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers),
	sizeof(FGlobalAppliedEffectList),
	alignof(FGlobalAppliedEffectList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedEffectList()
{
	if (!Z_Registration_Info_UScriptStruct_FGlobalAppliedEffectList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGlobalAppliedEffectList.InnerSingleton, Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGlobalAppliedEffectList.InnerSingleton;
}
// ********** End ScriptStruct FGlobalAppliedEffectList ********************************************

// ********** Begin Class UCoreGlobalAbilitySubsystem Function ApplyAbilityToAll *******************
struct Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics
{
	struct CoreGlobalAbilitySubsystem_eventApplyAbilityToAll_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGlobalAbilitySubsystem_eventApplyAbilityToAll_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::NewProp_Ability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGlobalAbilitySubsystem, nullptr, "ApplyAbilityToAll", Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::CoreGlobalAbilitySubsystem_eventApplyAbilityToAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::CoreGlobalAbilitySubsystem_eventApplyAbilityToAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGlobalAbilitySubsystem::execApplyAbilityToAll)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAbilityToAll(Z_Param_Ability);
	P_NATIVE_END;
}
// ********** End Class UCoreGlobalAbilitySubsystem Function ApplyAbilityToAll *********************

// ********** Begin Class UCoreGlobalAbilitySubsystem Function ApplyEffectToAll ********************
struct Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics
{
	struct CoreGlobalAbilitySubsystem_eventApplyEffectToAll_Parms
	{
		TSubclassOf<UGameplayEffect> Effect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGlobalAbilitySubsystem_eventApplyEffectToAll_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::NewProp_Effect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGlobalAbilitySubsystem, nullptr, "ApplyEffectToAll", Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::CoreGlobalAbilitySubsystem_eventApplyEffectToAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::CoreGlobalAbilitySubsystem_eventApplyEffectToAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGlobalAbilitySubsystem::execApplyEffectToAll)
{
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEffectToAll(Z_Param_Effect);
	P_NATIVE_END;
}
// ********** End Class UCoreGlobalAbilitySubsystem Function ApplyEffectToAll **********************

// ********** Begin Class UCoreGlobalAbilitySubsystem Function RemoveAbilityFromAll ****************
struct Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics
{
	struct CoreGlobalAbilitySubsystem_eventRemoveAbilityFromAll_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGlobalAbilitySubsystem_eventRemoveAbilityFromAll_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::NewProp_Ability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGlobalAbilitySubsystem, nullptr, "RemoveAbilityFromAll", Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::CoreGlobalAbilitySubsystem_eventRemoveAbilityFromAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::CoreGlobalAbilitySubsystem_eventRemoveAbilityFromAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGlobalAbilitySubsystem::execRemoveAbilityFromAll)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAbilityFromAll(Z_Param_Ability);
	P_NATIVE_END;
}
// ********** End Class UCoreGlobalAbilitySubsystem Function RemoveAbilityFromAll ******************

// ********** Begin Class UCoreGlobalAbilitySubsystem Function RemoveEffectFromAll *****************
struct Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics
{
	struct CoreGlobalAbilitySubsystem_eventRemoveEffectFromAll_Parms
	{
		TSubclassOf<UGameplayEffect> Effect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGlobalAbilitySubsystem_eventRemoveEffectFromAll_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::NewProp_Effect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreGlobalAbilitySubsystem, nullptr, "RemoveEffectFromAll", Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::CoreGlobalAbilitySubsystem_eventRemoveEffectFromAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::CoreGlobalAbilitySubsystem_eventRemoveEffectFromAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreGlobalAbilitySubsystem::execRemoveEffectFromAll)
{
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEffectFromAll(Z_Param_Effect);
	P_NATIVE_END;
}
// ********** End Class UCoreGlobalAbilitySubsystem Function RemoveEffectFromAll *******************

// ********** Begin Class UCoreGlobalAbilitySubsystem **********************************************
void UCoreGlobalAbilitySubsystem::StaticRegisterNativesUCoreGlobalAbilitySubsystem()
{
	UClass* Class = UCoreGlobalAbilitySubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyAbilityToAll", &UCoreGlobalAbilitySubsystem::execApplyAbilityToAll },
		{ "ApplyEffectToAll", &UCoreGlobalAbilitySubsystem::execApplyEffectToAll },
		{ "RemoveAbilityFromAll", &UCoreGlobalAbilitySubsystem::execRemoveAbilityFromAll },
		{ "RemoveEffectFromAll", &UCoreGlobalAbilitySubsystem::execRemoveEffectFromAll },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreGlobalAbilitySubsystem;
UClass* UCoreGlobalAbilitySubsystem::GetPrivateStaticClass()
{
	using TClass = UCoreGlobalAbilitySubsystem;
	if (!Z_Registration_Info_UClass_UCoreGlobalAbilitySubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGlobalAbilitySubsystem"),
			Z_Registration_Info_UClass_UCoreGlobalAbilitySubsystem.InnerSingleton,
			StaticRegisterNativesUCoreGlobalAbilitySubsystem,
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
	return Z_Registration_Info_UClass_UCoreGlobalAbilitySubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreGlobalAbilitySubsystem_NoRegister()
{
	return UCoreGlobalAbilitySubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/CoreGlobalAbilitySubsystem.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppliedAbilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppliedEffects_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredASCs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CoreGlobalAbilitySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppliedAbilities_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AppliedAbilities_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppliedEffects_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AppliedEffects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredASCs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredASCs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyAbilityToAll, "ApplyAbilityToAll" }, // 4121215422
		{ &Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_ApplyEffectToAll, "ApplyEffectToAll" }, // 3087053627
		{ &Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveAbilityFromAll, "RemoveAbilityFromAll" }, // 2281303404
		{ &Z_Construct_UFunction_UCoreGlobalAbilitySubsystem_RemoveEffectFromAll, "RemoveEffectFromAll" }, // 2778356231
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGlobalAbilitySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedAbilities_ValueProp = { "AppliedAbilities", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGlobalAppliedAbilityList, METADATA_PARAMS(0, nullptr) }; // 2916651682
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedAbilities_Key_KeyProp = { "AppliedAbilities_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedAbilities = { "AppliedAbilities", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreGlobalAbilitySubsystem, AppliedAbilities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppliedAbilities_MetaData), NewProp_AppliedAbilities_MetaData) }; // 2916651682
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedEffects_ValueProp = { "AppliedEffects", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGlobalAppliedEffectList, METADATA_PARAMS(0, nullptr) }; // 1656699512
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedEffects_Key_KeyProp = { "AppliedEffects_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedEffects = { "AppliedEffects", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreGlobalAbilitySubsystem, AppliedEffects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppliedEffects_MetaData), NewProp_AppliedEffects_MetaData) }; // 1656699512
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_RegisteredASCs_Inner = { "RegisteredASCs", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_RegisteredASCs = { "RegisteredASCs", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreGlobalAbilitySubsystem, RegisteredASCs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredASCs_MetaData), NewProp_RegisteredASCs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedAbilities_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedAbilities_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedEffects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedEffects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_AppliedEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_RegisteredASCs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::NewProp_RegisteredASCs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::ClassParams = {
	&UCoreGlobalAbilitySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreGlobalAbilitySubsystem()
{
	if (!Z_Registration_Info_UClass_UCoreGlobalAbilitySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreGlobalAbilitySubsystem.OuterSingleton, Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreGlobalAbilitySubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGlobalAbilitySubsystem);
UCoreGlobalAbilitySubsystem::~UCoreGlobalAbilitySubsystem() {}
// ********** End Class UCoreGlobalAbilitySubsystem ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h__Script_GameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGlobalAppliedAbilityList::StaticStruct, Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewStructOps, TEXT("GlobalAppliedAbilityList"), &Z_Registration_Info_UScriptStruct_FGlobalAppliedAbilityList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalAppliedAbilityList), 2916651682U) },
		{ FGlobalAppliedEffectList::StaticStruct, Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewStructOps, TEXT("GlobalAppliedEffectList"), &Z_Registration_Info_UScriptStruct_FGlobalAppliedEffectList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalAppliedEffectList), 1656699512U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreGlobalAbilitySubsystem, UCoreGlobalAbilitySubsystem::StaticClass, TEXT("UCoreGlobalAbilitySubsystem"), &Z_Registration_Info_UClass_UCoreGlobalAbilitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreGlobalAbilitySubsystem), 3211953309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h__Script_GameCore_236543977(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h__Script_GameCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h__Script_GameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h__Script_GameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
