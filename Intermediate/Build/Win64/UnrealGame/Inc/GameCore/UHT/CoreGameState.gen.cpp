// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/CoreGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreGameState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_ACoreGameState();
GAMECORE_API UClass* Z_Construct_UClass_ACoreGameState_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceManagerComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACoreGameState Function GetCoreAbilitySystemComponent ********************
struct Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics
{
	struct CoreGameState_eventGetCoreAbilitySystemComponent_Parms
	{
		UCoreAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|GameState" },
		{ "ModuleRelativePath", "Public/GameModes/CoreGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventGetCoreAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "GetCoreAbilitySystemComponent", Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::CoreGameState_eventGetCoreAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::CoreGameState_eventGetCoreAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoreGameState::execGetCoreAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCoreAbilitySystemComponent**)Z_Param__Result=P_THIS->GetCoreAbilitySystemComponent();
	P_NATIVE_END;
}
// ********** End Class ACoreGameState Function GetCoreAbilitySystemComponent **********************

// ********** Begin Class ACoreGameState Function OnRep_RecorderPlayerState ************************
struct Z_Construct_UFunction_ACoreGameState_OnRep_RecorderPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameModes/CoreGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_OnRep_RecorderPlayerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "OnRep_RecorderPlayerState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_OnRep_RecorderPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_OnRep_RecorderPlayerState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACoreGameState_OnRep_RecorderPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_OnRep_RecorderPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoreGameState::execOnRep_RecorderPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RecorderPlayerState();
	P_NATIVE_END;
}
// ********** End Class ACoreGameState Function OnRep_RecorderPlayerState **************************

// ********** Begin Class ACoreGameState ***********************************************************
void ACoreGameState::StaticRegisterNativesACoreGameState()
{
	UClass* Class = ACoreGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCoreAbilitySystemComponent", &ACoreGameState::execGetCoreAbilitySystemComponent },
		{ "OnRep_RecorderPlayerState", &ACoreGameState::execOnRep_RecorderPlayerState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACoreGameState;
UClass* ACoreGameState::GetPrivateStaticClass()
{
	using TClass = ACoreGameState;
	if (!Z_Registration_Info_UClass_ACoreGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGameState"),
			Z_Registration_Info_UClass_ACoreGameState.InnerSingleton,
			StaticRegisterNativesACoreGameState,
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
	return Z_Registration_Info_UClass_ACoreGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ACoreGameState_NoRegister()
{
	return ACoreGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACoreGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ACoreGameState\n * \n * GameState\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n * \n * @note \xe5\xad\x90\xe7\xb1\xbb\xe9\x9c\x80\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96""ExperienceManagerComponent\xe3\x80\x81""AbilitySystemComponent\xe7\xbb\x84\xe4\xbb\xb6\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/CoreGameState.h" },
		{ "ModuleRelativePath", "Public/GameModes/CoreGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ACoreGameState\n\nGameState\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n\n@note \xe5\xad\x90\xe7\xb1\xbb\xe9\x9c\x80\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96""ExperienceManagerComponent\xe3\x80\x81""AbilitySystemComponent\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceManagerComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles loading and managing the current gameplay experience\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameModes/CoreGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles loading and managing the current gameplay experience" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "GameCore|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability system component sub object for game-wide things (primarily gameplay cues)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameModes/CoreGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component sub object for game-wide things (primarily gameplay cues)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/CoreGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecorderPlayerState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The player state that recorded a replay, it is used to select the right pawn to follow\n// This is only set in replay streams and is not replicated normally\n" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player state that recorded a replay, it is used to select the right pawn to follow\nThis is only set in replay streams and is not replicated normally" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExperienceManagerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerFPS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecorderPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoreGameState_GetCoreAbilitySystemComponent, "GetCoreAbilitySystemComponent" }, // 2762436880
		{ &Z_Construct_UFunction_ACoreGameState_OnRep_RecorderPlayerState, "OnRep_RecorderPlayerState" }, // 3599116695
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoreGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_ExperienceManagerComponent = { "ExperienceManagerComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, ExperienceManagerComponent), Z_Construct_UClass_UCoreExperienceManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceManagerComponent_MetaData), NewProp_ExperienceManagerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, AbilitySystemComponent), Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_ServerFPS = { "ServerFPS", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, ServerFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFPS_MetaData), NewProp_ServerFPS_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_RecorderPlayerState = { "RecorderPlayerState", "OnRep_RecorderPlayerState", (EPropertyFlags)0x0124080100002020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, RecorderPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecorderPlayerState_MetaData), NewProp_RecorderPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoreGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_ExperienceManagerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_ServerFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_RecorderPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoreGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACoreGameState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACoreGameState, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoreGameState_Statics::ClassParams = {
	&ACoreGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACoreGameState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoreGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoreGameState()
{
	if (!Z_Registration_Info_UClass_ACoreGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoreGameState.OuterSingleton, Z_Construct_UClass_ACoreGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoreGameState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACoreGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_ServerFPS(TEXT("ServerFPS"));
	static FName Name_RecorderPlayerState(TEXT("RecorderPlayerState"));
	const bool bIsValid = true
		&& Name_ServerFPS == ClassReps[(int32)ENetFields_Private::ServerFPS].Property->GetFName()
		&& Name_RecorderPlayerState == ClassReps[(int32)ENetFields_Private::RecorderPlayerState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACoreGameState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoreGameState);
ACoreGameState::~ACoreGameState() {}
// ********** End Class ACoreGameState *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoreGameState, ACoreGameState::StaticClass, TEXT("ACoreGameState"), &Z_Registration_Info_UClass_ACoreGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoreGameState), 263941908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h__Script_GameCore_2668342435(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
