// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/CorePlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCorePlayerState() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
GAMECORE_API UClass* Z_Construct_UClass_ACorePlayerState();
GAMECORE_API UClass* Z_Construct_UClass_ACorePlayerState_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnData_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACorePlayerState Function GetCoreAbilitySystemComponent ******************
struct Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics
{
	struct CorePlayerState_eventGetCoreAbilitySystemComponent_Parms
	{
		UCoreAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|PlayerState" },
		{ "ModuleRelativePath", "Public/Player/CorePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CorePlayerState_eventGetCoreAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACorePlayerState, nullptr, "GetCoreAbilitySystemComponent", Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::CorePlayerState_eventGetCoreAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::CorePlayerState_eventGetCoreAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACorePlayerState::execGetCoreAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCoreAbilitySystemComponent**)Z_Param__Result=P_THIS->GetCoreAbilitySystemComponent();
	P_NATIVE_END;
}
// ********** End Class ACorePlayerState Function GetCoreAbilitySystemComponent ********************

// ********** Begin Class ACorePlayerState Function OnRep_PawnData *********************************
struct Z_Construct_UFunction_ACorePlayerState_OnRep_PawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/CorePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACorePlayerState_OnRep_PawnData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACorePlayerState, nullptr, "OnRep_PawnData", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerState_OnRep_PawnData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACorePlayerState_OnRep_PawnData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACorePlayerState_OnRep_PawnData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACorePlayerState_OnRep_PawnData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACorePlayerState::execOnRep_PawnData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PawnData();
	P_NATIVE_END;
}
// ********** End Class ACorePlayerState Function OnRep_PawnData ***********************************

// ********** Begin Class ACorePlayerState *********************************************************
void ACorePlayerState::StaticRegisterNativesACorePlayerState()
{
	UClass* Class = ACorePlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCoreAbilitySystemComponent", &ACorePlayerState::execGetCoreAbilitySystemComponent },
		{ "OnRep_PawnData", &ACorePlayerState::execOnRep_PawnData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACorePlayerState;
UClass* ACorePlayerState::GetPrivateStaticClass()
{
	using TClass = ACorePlayerState;
	if (!Z_Registration_Info_UClass_ACorePlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CorePlayerState"),
			Z_Registration_Info_UClass_ACorePlayerState.InnerSingleton,
			StaticRegisterNativesACorePlayerState,
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
	return Z_Registration_Info_UClass_ACorePlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_ACorePlayerState_NoRegister()
{
	return ACorePlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACorePlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ACorePlayerState\n * \n * PlayerState\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n * \n * @note \xe5\xad\x90\xe7\xb1\xbb\xe9\x9c\x80\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96""AbilitySystemComponent\xe7\xbb\x84\xe4\xbb\xb6\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/CorePlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/CorePlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ACorePlayerState\n\nPlayerState\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n\n@note \xe5\xad\x90\xe7\xb1\xbb\xe9\x9c\x80\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96""AbilitySystemComponent\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/CorePlayerState.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "GameCore|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability system component sub-object used by player characters.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/CorePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component sub-object used by player characters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedViewRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/CorePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedViewRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACorePlayerState_GetCoreAbilitySystemComponent, "GetCoreAbilitySystemComponent" }, // 3655176557
		{ &Z_Construct_UFunction_ACorePlayerState_OnRep_PawnData, "OnRep_PawnData" }, // 2559901369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACorePlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorePlayerState_Statics::NewProp_PawnData = { "PawnData", "OnRep_PawnData", (EPropertyFlags)0x0124080100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorePlayerState, PawnData), Z_Construct_UClass_UCorePawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorePlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorePlayerState, AbilitySystemComponent), Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACorePlayerState_Statics::NewProp_ReplicatedViewRotation = { "ReplicatedViewRotation", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorePlayerState, ReplicatedViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedViewRotation_MetaData), NewProp_ReplicatedViewRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACorePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorePlayerState_Statics::NewProp_PawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorePlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorePlayerState_Statics::NewProp_ReplicatedViewRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorePlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACorePlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularPlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorePlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACorePlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACorePlayerState, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACorePlayerState_Statics::ClassParams = {
	&ACorePlayerState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACorePlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACorePlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorePlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACorePlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACorePlayerState()
{
	if (!Z_Registration_Info_UClass_ACorePlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACorePlayerState.OuterSingleton, Z_Construct_UClass_ACorePlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACorePlayerState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACorePlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_PawnData(TEXT("PawnData"));
	static FName Name_ReplicatedViewRotation(TEXT("ReplicatedViewRotation"));
	const bool bIsValid = true
		&& Name_PawnData == ClassReps[(int32)ENetFields_Private::PawnData].Property->GetFName()
		&& Name_ReplicatedViewRotation == ClassReps[(int32)ENetFields_Private::ReplicatedViewRotation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACorePlayerState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ACorePlayerState);
ACorePlayerState::~ACorePlayerState() {}
// ********** End Class ACorePlayerState ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACorePlayerState, ACorePlayerState::StaticClass, TEXT("ACorePlayerState"), &Z_Registration_Info_UClass_ACorePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACorePlayerState), 2477886206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h__Script_GameCore_2223378814(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
