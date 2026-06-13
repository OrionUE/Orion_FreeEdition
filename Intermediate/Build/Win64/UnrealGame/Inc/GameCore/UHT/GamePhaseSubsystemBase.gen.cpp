// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/Phases/GamePhaseSubsystemBase.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGamePhaseSubsystemBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMECORE_API UClass* Z_Construct_UClass_UCoreWorldSubsystem();
GAMECORE_API UClass* Z_Construct_UClass_UGamePhaseAbility_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UGamePhaseSubsystemBase();
GAMECORE_API UClass* Z_Construct_UClass_UGamePhaseSubsystemBase_NoRegister();
GAMECORE_API UEnum* Z_Construct_UEnum_GameCore_EPhaseTagMatchType();
GAMECORE_API UFunction* Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature();
GAMECORE_API UFunction* Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FGamePhaseDynamicDelegate *********************************************
struct Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_GameCore_eventGamePhaseDynamicDelegate_Parms
	{
		const UGamePhaseAbility* Phase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameModes/Phases/GamePhaseSubsystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Phase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameCore_eventGamePhaseDynamicDelegate_Parms, Phase), Z_Construct_UClass_UGamePhaseAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Phase_MetaData), NewProp_Phase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::NewProp_Phase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameCore, nullptr, "GamePhaseDynamicDelegate__DelegateSignature", Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::_Script_GameCore_eventGamePhaseDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::_Script_GameCore_eventGamePhaseDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGamePhaseDynamicDelegate_DelegateWrapper(const FScriptDelegate& GamePhaseDynamicDelegate, const UGamePhaseAbility* Phase)
{
	struct _Script_GameCore_eventGamePhaseDynamicDelegate_Parms
	{
		const UGamePhaseAbility* Phase;
	};
	_Script_GameCore_eventGamePhaseDynamicDelegate_Parms Parms;
	Parms.Phase=Phase;
	GamePhaseDynamicDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FGamePhaseDynamicDelegate ***********************************************

// ********** Begin Delegate FGamePhaseTagDynamicDelegate ******************************************
struct Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_GameCore_eventGamePhaseTagDynamicDelegate_Parms
	{
		FGameplayTag PhaseTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameModes/Phases/GamePhaseSubsystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::NewProp_PhaseTag = { "PhaseTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameCore_eventGamePhaseTagDynamicDelegate_Parms, PhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseTag_MetaData), NewProp_PhaseTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::NewProp_PhaseTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameCore, nullptr, "GamePhaseTagDynamicDelegate__DelegateSignature", Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::_Script_GameCore_eventGamePhaseTagDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::_Script_GameCore_eventGamePhaseTagDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGamePhaseTagDynamicDelegate_DelegateWrapper(const FScriptDelegate& GamePhaseTagDynamicDelegate, FGameplayTag const& PhaseTag)
{
	struct _Script_GameCore_eventGamePhaseTagDynamicDelegate_Parms
	{
		FGameplayTag PhaseTag;
	};
	_Script_GameCore_eventGamePhaseTagDynamicDelegate_Parms Parms;
	Parms.PhaseTag=PhaseTag;
	GamePhaseTagDynamicDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FGamePhaseTagDynamicDelegate ********************************************

// ********** Begin Enum EPhaseTagMatchType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhaseTagMatchType;
static UEnum* EPhaseTagMatchType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPhaseTagMatchType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPhaseTagMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameCore_EPhaseTagMatchType, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("EPhaseTagMatchType"));
	}
	return Z_Registration_Info_UEnum_EPhaseTagMatchType.OuterSingleton;
}
template<> GAMECORE_API UEnum* StaticEnum<EPhaseTagMatchType>()
{
	return EPhaseTagMatchType_StaticEnum();
}
struct Z_Construct_UEnum_GameCore_EPhaseTagMatchType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Match rule for message receivers */" },
#endif
		{ "ExactMatch.Comment", "// An exact match will only receive messages with exactly the same channel\n// (e.g., registering for \"A.B\" will match a broadcast of A.B but not A.B.C)\n" },
		{ "ExactMatch.Name", "EPhaseTagMatchType::ExactMatch" },
		{ "ExactMatch.ToolTip", "An exact match will only receive messages with exactly the same channel\n(e.g., registering for \"A.B\" will match a broadcast of A.B but not A.B.C)" },
		{ "ModuleRelativePath", "Public/GameModes/Phases/GamePhaseSubsystemBase.h" },
		{ "PartialMatch.Comment", "// A partial match will receive any messages rooted in the same channel\n// (e.g., registering for \"A.B\" will match a broadcast of A.B as well as A.B.C)\n" },
		{ "PartialMatch.Name", "EPhaseTagMatchType::PartialMatch" },
		{ "PartialMatch.ToolTip", "A partial match will receive any messages rooted in the same channel\n(e.g., registering for \"A.B\" will match a broadcast of A.B as well as A.B.C)" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Match rule for message receivers" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPhaseTagMatchType::ExactMatch", (int64)EPhaseTagMatchType::ExactMatch },
		{ "EPhaseTagMatchType::PartialMatch", (int64)EPhaseTagMatchType::PartialMatch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameCore_EPhaseTagMatchType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	"EPhaseTagMatchType",
	"EPhaseTagMatchType",
	Z_Construct_UEnum_GameCore_EPhaseTagMatchType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameCore_EPhaseTagMatchType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameCore_EPhaseTagMatchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameCore_EPhaseTagMatchType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameCore_EPhaseTagMatchType()
{
	if (!Z_Registration_Info_UEnum_EPhaseTagMatchType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhaseTagMatchType.InnerSingleton, Z_Construct_UEnum_GameCore_EPhaseTagMatchType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPhaseTagMatchType.InnerSingleton;
}
// ********** End Enum EPhaseTagMatchType **********************************************************

// ********** Begin Class UGamePhaseSubsystemBase Function IsPhaseActive ***************************
struct Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics
{
	struct GamePhaseSubsystemBase_eventIsPhaseActive_Parms
	{
		FGameplayTag PhaseTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PhaseTag" },
		{ "ModuleRelativePath", "Public/GameModes/Phases/GamePhaseSubsystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::NewProp_PhaseTag = { "PhaseTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePhaseSubsystemBase_eventIsPhaseActive_Parms, PhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseTag_MetaData), NewProp_PhaseTag_MetaData) }; // 133831994
void Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GamePhaseSubsystemBase_eventIsPhaseActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GamePhaseSubsystemBase_eventIsPhaseActive_Parms), &Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::NewProp_PhaseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamePhaseSubsystemBase, nullptr, "IsPhaseActive", Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::GamePhaseSubsystemBase_eventIsPhaseActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::GamePhaseSubsystemBase_eventIsPhaseActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamePhaseSubsystemBase::execIsPhaseActive)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PhaseTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPhaseActive(Z_Param_Out_PhaseTag);
	P_NATIVE_END;
}
// ********** End Class UGamePhaseSubsystemBase Function IsPhaseActive *****************************

// ********** Begin Class UGamePhaseSubsystemBase Function K2_StartPhase ***************************
struct Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics
{
	struct GamePhaseSubsystemBase_eventK2_StartPhase_Parms
	{
		TSubclassOf<UGamePhaseAbility> PhaseAbility;
		FScriptDelegate PhaseEnded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PhaseEnded" },
		{ "Category", "Game Phase" },
		{ "DisplayName", "Start Phase" },
		{ "ModuleRelativePath", "Public/GameModes/Phases/GamePhaseSubsystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseEnded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PhaseAbility;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PhaseEnded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::NewProp_PhaseAbility = { "PhaseAbility", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePhaseSubsystemBase_eventK2_StartPhase_Parms, PhaseAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGamePhaseAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::NewProp_PhaseEnded = { "PhaseEnded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePhaseSubsystemBase_eventK2_StartPhase_Parms, PhaseEnded), Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseEnded_MetaData), NewProp_PhaseEnded_MetaData) }; // 4203014712
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::NewProp_PhaseAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::NewProp_PhaseEnded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamePhaseSubsystemBase, nullptr, "K2_StartPhase", Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::GamePhaseSubsystemBase_eventK2_StartPhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::GamePhaseSubsystemBase_eventK2_StartPhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamePhaseSubsystemBase::execK2_StartPhase)
{
	P_GET_OBJECT(UClass,Z_Param_PhaseAbility);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PhaseEnded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_StartPhase(Z_Param_PhaseAbility,FGamePhaseDynamicDelegate(Z_Param_Out_PhaseEnded));
	P_NATIVE_END;
}
// ********** End Class UGamePhaseSubsystemBase Function K2_StartPhase *****************************

// ********** Begin Class UGamePhaseSubsystemBase Function K2_WhenPhaseEnds ************************
struct Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics
{
	struct GamePhaseSubsystemBase_eventK2_WhenPhaseEnds_Parms
	{
		FGameplayTag PhaseTag;
		EPhaseTagMatchType MatchType;
		FScriptDelegate WhenPhaseEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "WhenPhaseEnd" },
		{ "Category", "Game Phase" },
		{ "DisplayName", "When Phase Ends" },
		{ "ModuleRelativePath", "Public/GameModes/Phases/GamePhaseSubsystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchType;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_WhenPhaseEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::NewProp_PhaseTag = { "PhaseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePhaseSubsystemBase_eventK2_WhenPhaseEnds_Parms, PhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePhaseSubsystemBase_eventK2_WhenPhaseEnds_Parms, MatchType), Z_Construct_UEnum_GameCore_EPhaseTagMatchType, METADATA_PARAMS(0, nullptr) }; // 2308905775
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::NewProp_WhenPhaseEnd = { "WhenPhaseEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePhaseSubsystemBase_eventK2_WhenPhaseEnds_Parms, WhenPhaseEnd), Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1692349985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::NewProp_PhaseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::NewProp_MatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::NewProp_MatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::NewProp_WhenPhaseEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamePhaseSubsystemBase, nullptr, "K2_WhenPhaseEnds", Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::GamePhaseSubsystemBase_eventK2_WhenPhaseEnds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::GamePhaseSubsystemBase_eventK2_WhenPhaseEnds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamePhaseSubsystemBase::execK2_WhenPhaseEnds)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_PhaseTag);
	P_GET_ENUM(EPhaseTagMatchType,Z_Param_MatchType);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_WhenPhaseEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_WhenPhaseEnds(Z_Param_PhaseTag,EPhaseTagMatchType(Z_Param_MatchType),FGamePhaseTagDynamicDelegate(Z_Param_WhenPhaseEnd));
	P_NATIVE_END;
}
// ********** End Class UGamePhaseSubsystemBase Function K2_WhenPhaseEnds **************************

// ********** Begin Class UGamePhaseSubsystemBase Function K2_WhenPhaseStartsOrIsActive ************
struct Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics
{
	struct GamePhaseSubsystemBase_eventK2_WhenPhaseStartsOrIsActive_Parms
	{
		FGameplayTag PhaseTag;
		EPhaseTagMatchType MatchType;
		FScriptDelegate WhenPhaseActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "WhenPhaseActive" },
		{ "Category", "Game Phase" },
		{ "DisplayName", "When Phase Starts or Is Active" },
		{ "ModuleRelativePath", "Public/GameModes/Phases/GamePhaseSubsystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchType;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_WhenPhaseActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_PhaseTag = { "PhaseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePhaseSubsystemBase_eventK2_WhenPhaseStartsOrIsActive_Parms, PhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePhaseSubsystemBase_eventK2_WhenPhaseStartsOrIsActive_Parms, MatchType), Z_Construct_UEnum_GameCore_EPhaseTagMatchType, METADATA_PARAMS(0, nullptr) }; // 2308905775
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_WhenPhaseActive = { "WhenPhaseActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePhaseSubsystemBase_eventK2_WhenPhaseStartsOrIsActive_Parms, WhenPhaseActive), Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1692349985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_PhaseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_MatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_MatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::NewProp_WhenPhaseActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamePhaseSubsystemBase, nullptr, "K2_WhenPhaseStartsOrIsActive", Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::GamePhaseSubsystemBase_eventK2_WhenPhaseStartsOrIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::GamePhaseSubsystemBase_eventK2_WhenPhaseStartsOrIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamePhaseSubsystemBase::execK2_WhenPhaseStartsOrIsActive)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_PhaseTag);
	P_GET_ENUM(EPhaseTagMatchType,Z_Param_MatchType);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_WhenPhaseActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_WhenPhaseStartsOrIsActive(Z_Param_PhaseTag,EPhaseTagMatchType(Z_Param_MatchType),FGamePhaseTagDynamicDelegate(Z_Param_WhenPhaseActive));
	P_NATIVE_END;
}
// ********** End Class UGamePhaseSubsystemBase Function K2_WhenPhaseStartsOrIsActive **************

// ********** Begin Class UGamePhaseSubsystemBase **************************************************
void UGamePhaseSubsystemBase::StaticRegisterNativesUGamePhaseSubsystemBase()
{
	UClass* Class = UGamePhaseSubsystemBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPhaseActive", &UGamePhaseSubsystemBase::execIsPhaseActive },
		{ "K2_StartPhase", &UGamePhaseSubsystemBase::execK2_StartPhase },
		{ "K2_WhenPhaseEnds", &UGamePhaseSubsystemBase::execK2_WhenPhaseEnds },
		{ "K2_WhenPhaseStartsOrIsActive", &UGamePhaseSubsystemBase::execK2_WhenPhaseStartsOrIsActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGamePhaseSubsystemBase;
UClass* UGamePhaseSubsystemBase::GetPrivateStaticClass()
{
	using TClass = UGamePhaseSubsystemBase;
	if (!Z_Registration_Info_UClass_UGamePhaseSubsystemBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GamePhaseSubsystemBase"),
			Z_Registration_Info_UClass_UGamePhaseSubsystemBase.InnerSingleton,
			StaticRegisterNativesUGamePhaseSubsystemBase,
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
	return Z_Registration_Info_UClass_UGamePhaseSubsystemBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UGamePhaseSubsystemBase_NoRegister()
{
	return UGamePhaseSubsystemBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGamePhaseSubsystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGamePhaseSubsystemBase\n *\n * \xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5\xe7\xae\xa1\xe7\x90\x86\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\xe5\x9f\xba\xe7\xb1\xbb\n * \xe7\x94\xa8\xe4\xba\x8e\xe7\xae\xa1\xe7\x90\x86\xe4\xb8\x80\xe4\xb8\xaa\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\x96\xe7\x95\x8c\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5\n * \xe5\x85\x81\xe8\xae\xb8\xe5\xad\x90\xe6\xa0\x87\xe7\xad\xbe\xe9\x98\xb6\xe6\xae\xb5\xe5\x90\x8c\xe6\x97\xb6\xe8\xbf\x90\xe8\xa1\x8c\n */" },
#endif
		{ "IncludePath", "GameModes/Phases/GamePhaseSubsystemBase.h" },
		{ "ModuleRelativePath", "Public/GameModes/Phases/GamePhaseSubsystemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGamePhaseSubsystemBase\n\n\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5\xe7\xae\xa1\xe7\x90\x86\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\xe5\x9f\xba\xe7\xb1\xbb\n\xe7\x94\xa8\xe4\xba\x8e\xe7\xae\xa1\xe7\x90\x86\xe4\xb8\x80\xe4\xb8\xaa\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\x96\xe7\x95\x8c\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5\n\xe5\x85\x81\xe8\xae\xb8\xe5\xad\x90\xe6\xa0\x87\xe7\xad\xbe\xe9\x98\xb6\xe6\xae\xb5\xe5\x90\x8c\xe6\x97\xb6\xe8\xbf\x90\xe8\xa1\x8c" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGamePhaseSubsystemBase_IsPhaseActive, "IsPhaseActive" }, // 1192418257
		{ &Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_StartPhase, "K2_StartPhase" }, // 4292031809
		{ &Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseEnds, "K2_WhenPhaseEnds" }, // 4058022142
		{ &Z_Construct_UFunction_UGamePhaseSubsystemBase_K2_WhenPhaseStartsOrIsActive, "K2_WhenPhaseStartsOrIsActive" }, // 4098751325
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamePhaseSubsystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGamePhaseSubsystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCoreWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGamePhaseSubsystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGamePhaseSubsystemBase_Statics::ClassParams = {
	&UGamePhaseSubsystemBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGamePhaseSubsystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGamePhaseSubsystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGamePhaseSubsystemBase()
{
	if (!Z_Registration_Info_UClass_UGamePhaseSubsystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGamePhaseSubsystemBase.OuterSingleton, Z_Construct_UClass_UGamePhaseSubsystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGamePhaseSubsystemBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGamePhaseSubsystemBase);
UGamePhaseSubsystemBase::~UGamePhaseSubsystemBase() {}
// ********** End Class UGamePhaseSubsystemBase ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h__Script_GameCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPhaseTagMatchType_StaticEnum, TEXT("EPhaseTagMatchType"), &Z_Registration_Info_UEnum_EPhaseTagMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2308905775U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGamePhaseSubsystemBase, UGamePhaseSubsystemBase::StaticClass, TEXT("UGamePhaseSubsystemBase"), &Z_Registration_Info_UClass_UGamePhaseSubsystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGamePhaseSubsystemBase), 328676059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h__Script_GameCore_1491677310(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h__Script_GameCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h__Script_GameCore_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
