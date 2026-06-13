// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/AsyncAction_ExperienceReady.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncAction_ExperienceReady() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMECORE_API UClass* Z_Construct_UClass_UAsyncAction_ExperienceReady();
GAMECORE_API UClass* Z_Construct_UClass_UAsyncAction_ExperienceReady_NoRegister();
GAMECORE_API UFunction* Z_Construct_UDelegateFunction_GameCore_ExperienceReadyAsyncDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FExperienceReadyAsyncDelegate *****************************************
struct Z_Construct_UDelegateFunction_GameCore_ExperienceReadyAsyncDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameModes/AsyncAction_ExperienceReady.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameCore_ExperienceReadyAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameCore, nullptr, "ExperienceReadyAsyncDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCore_ExperienceReadyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameCore_ExperienceReadyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_GameCore_ExperienceReadyAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameCore_ExperienceReadyAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FExperienceReadyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& ExperienceReadyAsyncDelegate)
{
	ExperienceReadyAsyncDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FExperienceReadyAsyncDelegate *******************************************

// ********** Begin Class UAsyncAction_ExperienceReady Function WaitForExperienceReady *************
struct Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics
{
	struct AsyncAction_ExperienceReady_eventWaitForExperienceReady_Parms
	{
		UObject* WorldContextObject;
		UAsyncAction_ExperienceReady* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/GameModes/AsyncAction_ExperienceReady.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ExperienceReady_eventWaitForExperienceReady_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ExperienceReady_eventWaitForExperienceReady_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_ExperienceReady_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ExperienceReady, nullptr, "WaitForExperienceReady", Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::AsyncAction_ExperienceReady_eventWaitForExperienceReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::AsyncAction_ExperienceReady_eventWaitForExperienceReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_ExperienceReady::execWaitForExperienceReady)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_ExperienceReady**)Z_Param__Result=UAsyncAction_ExperienceReady::WaitForExperienceReady(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UAsyncAction_ExperienceReady Function WaitForExperienceReady ***************

// ********** Begin Class UAsyncAction_ExperienceReady *********************************************
void UAsyncAction_ExperienceReady::StaticRegisterNativesUAsyncAction_ExperienceReady()
{
	UClass* Class = UAsyncAction_ExperienceReady::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitForExperienceReady", &UAsyncAction_ExperienceReady::execWaitForExperienceReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncAction_ExperienceReady;
UClass* UAsyncAction_ExperienceReady::GetPrivateStaticClass()
{
	using TClass = UAsyncAction_ExperienceReady;
	if (!Z_Registration_Info_UClass_UAsyncAction_ExperienceReady.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncAction_ExperienceReady"),
			Z_Registration_Info_UClass_UAsyncAction_ExperienceReady.InnerSingleton,
			StaticRegisterNativesUAsyncAction_ExperienceReady,
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
	return Z_Registration_Info_UClass_UAsyncAction_ExperienceReady.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncAction_ExperienceReady_NoRegister()
{
	return UAsyncAction_ExperienceReady::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameModes/AsyncAction_ExperienceReady.h" },
		{ "ModuleRelativePath", "Public/GameModes/AsyncAction_ExperienceReady.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/AsyncAction_ExperienceReady.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady, "WaitForExperienceReady" }, // 4238790282
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_ExperienceReady>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::NewProp_OnReady = { "OnReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_ExperienceReady, OnReady), Z_Construct_UDelegateFunction_GameCore_ExperienceReadyAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReady_MetaData), NewProp_OnReady_MetaData) }; // 1454277191
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::NewProp_OnReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::ClassParams = {
	&UAsyncAction_ExperienceReady::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAction_ExperienceReady()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_ExperienceReady.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_ExperienceReady.OuterSingleton, Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_ExperienceReady.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_ExperienceReady);
UAsyncAction_ExperienceReady::~UAsyncAction_ExperienceReady() {}
// ********** End Class UAsyncAction_ExperienceReady ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_ExperienceReady, UAsyncAction_ExperienceReady::StaticClass, TEXT("UAsyncAction_ExperienceReady"), &Z_Registration_Info_UClass_UAsyncAction_ExperienceReady, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_ExperienceReady), 3733300996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h__Script_GameCore_1009995835(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
