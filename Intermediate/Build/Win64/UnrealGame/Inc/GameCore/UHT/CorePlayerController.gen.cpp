// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/CorePlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCorePlayerController() {}

// ********** Begin Cross Module References ********************************************************
COMMONGAME_API UClass* Z_Construct_UClass_ACommonPlayerController();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_ACorePlayerController();
GAMECORE_API UClass* Z_Construct_UClass_ACorePlayerController_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_ACorePlayerState_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACorePlayerController Function ClientOnPlayerInitialized *****************
static FName NAME_ACorePlayerController_ClientOnPlayerInitialized = FName(TEXT("ClientOnPlayerInitialized"));
void ACorePlayerController::ClientOnPlayerInitialized()
{
	UFunction* Func = FindFunctionChecked(NAME_ACorePlayerController_ClientOnPlayerInitialized);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACorePlayerController_ClientOnPlayerInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/CorePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACorePlayerController_ClientOnPlayerInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACorePlayerController, nullptr, "ClientOnPlayerInitialized", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerController_ClientOnPlayerInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACorePlayerController_ClientOnPlayerInitialized_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACorePlayerController_ClientOnPlayerInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACorePlayerController_ClientOnPlayerInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACorePlayerController::execClientOnPlayerInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientOnPlayerInitialized_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACorePlayerController Function ClientOnPlayerInitialized *******************

// ********** Begin Class ACorePlayerController Function GetCoreAbilitySystemComponent *************
struct Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics
{
	struct CorePlayerController_eventGetCoreAbilitySystemComponent_Parms
	{
		UCoreAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|PlayerController" },
		{ "ModuleRelativePath", "Public/Player/CorePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CorePlayerController_eventGetCoreAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACorePlayerController, nullptr, "GetCoreAbilitySystemComponent", Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::CorePlayerController_eventGetCoreAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::CorePlayerController_eventGetCoreAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACorePlayerController::execGetCoreAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCoreAbilitySystemComponent**)Z_Param__Result=P_THIS->GetCoreAbilitySystemComponent();
	P_NATIVE_END;
}
// ********** End Class ACorePlayerController Function GetCoreAbilitySystemComponent ***************

// ********** Begin Class ACorePlayerController Function GetCorePlayerState ************************
struct Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics
{
	struct CorePlayerController_eventGetCorePlayerState_Parms
	{
		ACorePlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|PlayerController" },
		{ "ModuleRelativePath", "Public/Player/CorePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CorePlayerController_eventGetCorePlayerState_Parms, ReturnValue), Z_Construct_UClass_ACorePlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACorePlayerController, nullptr, "GetCorePlayerState", Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::CorePlayerController_eventGetCorePlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::CorePlayerController_eventGetCorePlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACorePlayerController::execGetCorePlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACorePlayerState**)Z_Param__Result=P_THIS->GetCorePlayerState();
	P_NATIVE_END;
}
// ********** End Class ACorePlayerController Function GetCorePlayerState **************************

// ********** Begin Class ACorePlayerController Function RestartPlayer *****************************
struct Z_Construct_UFunction_ACorePlayerController_RestartPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|PlayerController" },
		{ "ModuleRelativePath", "Public/Player/CorePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACorePlayerController_RestartPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACorePlayerController, nullptr, "RestartPlayer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorePlayerController_RestartPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACorePlayerController_RestartPlayer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACorePlayerController_RestartPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACorePlayerController_RestartPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACorePlayerController::execRestartPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartPlayer();
	P_NATIVE_END;
}
// ********** End Class ACorePlayerController Function RestartPlayer *******************************

// ********** Begin Class ACorePlayerController ****************************************************
void ACorePlayerController::StaticRegisterNativesACorePlayerController()
{
	UClass* Class = ACorePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientOnPlayerInitialized", &ACorePlayerController::execClientOnPlayerInitialized },
		{ "GetCoreAbilitySystemComponent", &ACorePlayerController::execGetCoreAbilitySystemComponent },
		{ "GetCorePlayerState", &ACorePlayerController::execGetCorePlayerState },
		{ "RestartPlayer", &ACorePlayerController::execRestartPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACorePlayerController;
UClass* ACorePlayerController::GetPrivateStaticClass()
{
	using TClass = ACorePlayerController;
	if (!Z_Registration_Info_UClass_ACorePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CorePlayerController"),
			Z_Registration_Info_UClass_ACorePlayerController.InnerSingleton,
			StaticRegisterNativesACorePlayerController,
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
	return Z_Registration_Info_UClass_ACorePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACorePlayerController_NoRegister()
{
	return ACorePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACorePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ACorePlayerController\n * \n * \xe7\x8e\xa9\xe5\xae\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/CorePlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/CorePlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base player controller class used by this project." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ACorePlayerController\n\n\xe7\x8e\xa9\xe5\xae\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/CorePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastSeenPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACorePlayerController_ClientOnPlayerInitialized, "ClientOnPlayerInitialized" }, // 4127958703
		{ &Z_Construct_UFunction_ACorePlayerController_GetCoreAbilitySystemComponent, "GetCoreAbilitySystemComponent" }, // 1391907676
		{ &Z_Construct_UFunction_ACorePlayerController_GetCorePlayerState, "GetCorePlayerState" }, // 3713831505
		{ &Z_Construct_UFunction_ACorePlayerController_RestartPlayer, "RestartPlayer" }, // 3841326559
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACorePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorePlayerController_Statics::NewProp_LastSeenPlayerState = { "LastSeenPlayerState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorePlayerController, LastSeenPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSeenPlayerState_MetaData), NewProp_LastSeenPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACorePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorePlayerController_Statics::NewProp_LastSeenPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACorePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACommonPlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACorePlayerController_Statics::ClassParams = {
	&ACorePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACorePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACorePlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACorePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACorePlayerController()
{
	if (!Z_Registration_Info_UClass_ACorePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACorePlayerController.OuterSingleton, Z_Construct_UClass_ACorePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACorePlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACorePlayerController);
ACorePlayerController::~ACorePlayerController() {}
// ********** End Class ACorePlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACorePlayerController, ACorePlayerController::StaticClass, TEXT("ACorePlayerController"), &Z_Registration_Info_UClass_ACorePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACorePlayerController), 2628392337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h__Script_GameCore_2298411235(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
