// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/AsyncAction_PlayerStateReady.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncAction_PlayerStateReady() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMECORE_API UClass* Z_Construct_UClass_UAsyncAction_PlayerStateReady();
GAMECORE_API UClass* Z_Construct_UClass_UAsyncAction_PlayerStateReady_NoRegister();
GAMECORE_API UFunction* Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPlayerStateReadyAsyncDelegate ****************************************
struct Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_GameCore_eventPlayerStateReadyAsyncDelegate_Parms
	{
		APlayerState* PlayerState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AsyncAction_PlayerStateReady.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameCore_eventPlayerStateReadyAsyncDelegate_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::NewProp_PlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameCore, nullptr, "PlayerStateReadyAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::_Script_GameCore_eventPlayerStateReadyAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::_Script_GameCore_eventPlayerStateReadyAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlayerStateReadyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerStateReadyAsyncDelegate, APlayerState* PlayerState)
{
	struct _Script_GameCore_eventPlayerStateReadyAsyncDelegate_Parms
	{
		APlayerState* PlayerState;
	};
	_Script_GameCore_eventPlayerStateReadyAsyncDelegate_Parms Parms;
	Parms.PlayerState=PlayerState;
	PlayerStateReadyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPlayerStateReadyAsyncDelegate ******************************************

// ********** Begin Class UAsyncAction_PlayerStateReady Function WaitForPlayerStateReady ***********
struct Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics
{
	struct AsyncAction_PlayerStateReady_eventWaitForPlayerStateReady_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		UAsyncAction_PlayerStateReady* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/Player/AsyncAction_PlayerStateReady.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_PlayerStateReady_eventWaitForPlayerStateReady_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_PlayerStateReady_eventWaitForPlayerStateReady_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_PlayerStateReady_eventWaitForPlayerStateReady_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_PlayerStateReady_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncAction_PlayerStateReady, nullptr, "WaitForPlayerStateReady", Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::AsyncAction_PlayerStateReady_eventWaitForPlayerStateReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::AsyncAction_PlayerStateReady_eventWaitForPlayerStateReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_PlayerStateReady::execWaitForPlayerStateReady)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_PlayerStateReady**)Z_Param__Result=UAsyncAction_PlayerStateReady::WaitForPlayerStateReady(Z_Param_WorldContextObject,Z_Param_PlayerController);
	P_NATIVE_END;
}
// ********** End Class UAsyncAction_PlayerStateReady Function WaitForPlayerStateReady *************

// ********** Begin Class UAsyncAction_PlayerStateReady ********************************************
void UAsyncAction_PlayerStateReady::StaticRegisterNativesUAsyncAction_PlayerStateReady()
{
	UClass* Class = UAsyncAction_PlayerStateReady::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitForPlayerStateReady", &UAsyncAction_PlayerStateReady::execWaitForPlayerStateReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncAction_PlayerStateReady;
UClass* UAsyncAction_PlayerStateReady::GetPrivateStaticClass()
{
	using TClass = UAsyncAction_PlayerStateReady;
	if (!Z_Registration_Info_UClass_UAsyncAction_PlayerStateReady.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncAction_PlayerStateReady"),
			Z_Registration_Info_UClass_UAsyncAction_PlayerStateReady.InnerSingleton,
			StaticRegisterNativesUAsyncAction_PlayerStateReady,
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
	return Z_Registration_Info_UClass_UAsyncAction_PlayerStateReady.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncAction_PlayerStateReady_NoRegister()
{
	return UAsyncAction_PlayerStateReady::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/AsyncAction_PlayerStateReady.h" },
		{ "ModuleRelativePath", "Public/Player/AsyncAction_PlayerStateReady.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/AsyncAction_PlayerStateReady.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_PlayerStateReady_WaitForPlayerStateReady, "WaitForPlayerStateReady" }, // 741951427
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_PlayerStateReady>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::NewProp_OnReady = { "OnReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_PlayerStateReady, OnReady), Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReady_MetaData), NewProp_OnReady_MetaData) }; // 3295630674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::NewProp_OnReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::ClassParams = {
	&UAsyncAction_PlayerStateReady::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAction_PlayerStateReady()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_PlayerStateReady.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_PlayerStateReady.OuterSingleton, Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_PlayerStateReady.OuterSingleton;
}
UAsyncAction_PlayerStateReady::UAsyncAction_PlayerStateReady(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_PlayerStateReady);
UAsyncAction_PlayerStateReady::~UAsyncAction_PlayerStateReady() {}
// ********** End Class UAsyncAction_PlayerStateReady **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_PlayerStateReady, UAsyncAction_PlayerStateReady::StaticClass, TEXT("UAsyncAction_PlayerStateReady"), &Z_Registration_Info_UClass_UAsyncAction_PlayerStateReady, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_PlayerStateReady), 1326725286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h__Script_GameCore_2614344499(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
