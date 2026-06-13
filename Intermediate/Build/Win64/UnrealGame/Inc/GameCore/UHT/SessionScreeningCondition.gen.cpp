// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Session/SessionScreeningCondition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSessionScreeningCondition() {}

// ********** Begin Cross Module References ********************************************************
COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchResult_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMECORE_API UClass* Z_Construct_UClass_UScreeningConditionComposite();
GAMECORE_API UClass* Z_Construct_UClass_UScreeningConditionComposite_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_USessionScreeningCondition();
GAMECORE_API UClass* Z_Construct_UClass_USessionScreeningCondition_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USessionScreeningCondition Function CheckCondition ***********************
struct SessionScreeningCondition_eventCheckCondition_Parms
{
	UCommonSession_SearchResult* InSearchResult;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SessionScreeningCondition_eventCheckCondition_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USessionScreeningCondition_CheckCondition = FName(TEXT("CheckCondition"));
bool USessionScreeningCondition::CheckCondition(UCommonSession_SearchResult* InSearchResult) const
{
	UFunction* Func = FindFunctionChecked(NAME_USessionScreeningCondition_CheckCondition);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SessionScreeningCondition_eventCheckCondition_Parms Parms;
		Parms.InSearchResult=InSearchResult;
		const_cast<USessionScreeningCondition*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<USessionScreeningCondition*>(this)->CheckCondition_Implementation(InSearchResult);
	}
}
struct Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Session/SessionScreeningCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSearchResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::NewProp_InSearchResult = { "InSearchResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SessionScreeningCondition_eventCheckCondition_Parms, InSearchResult), Z_Construct_UClass_UCommonSession_SearchResult_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SessionScreeningCondition_eventCheckCondition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SessionScreeningCondition_eventCheckCondition_Parms), &Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::NewProp_InSearchResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USessionScreeningCondition, nullptr, "CheckCondition", Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::PropPointers), sizeof(SessionScreeningCondition_eventCheckCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SessionScreeningCondition_eventCheckCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USessionScreeningCondition_CheckCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionScreeningCondition_CheckCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionScreeningCondition::execCheckCondition)
{
	P_GET_OBJECT(UCommonSession_SearchResult,Z_Param_InSearchResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCondition_Implementation(Z_Param_InSearchResult);
	P_NATIVE_END;
}
// ********** End Class USessionScreeningCondition Function CheckCondition *************************

// ********** Begin Class USessionScreeningCondition Function K2_FilterSearchResults ***************
struct Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics
{
	struct SessionScreeningCondition_eventK2_FilterSearchResults_Parms
	{
		TArray<UCommonSession_SearchResult*> InOutSearchResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "FilterSearchResults" },
		{ "ModuleRelativePath", "Public/Session/SessionScreeningCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOutSearchResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutSearchResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::NewProp_InOutSearchResults_Inner = { "InOutSearchResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCommonSession_SearchResult_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::NewProp_InOutSearchResults = { "InOutSearchResults", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SessionScreeningCondition_eventK2_FilterSearchResults_Parms, InOutSearchResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::NewProp_InOutSearchResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::NewProp_InOutSearchResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USessionScreeningCondition, nullptr, "K2_FilterSearchResults", Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::SessionScreeningCondition_eventK2_FilterSearchResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::SessionScreeningCondition_eventK2_FilterSearchResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionScreeningCondition::execK2_FilterSearchResults)
{
	P_GET_TARRAY_REF(UCommonSession_SearchResult*,Z_Param_Out_InOutSearchResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_FilterSearchResults(Z_Param_Out_InOutSearchResults);
	P_NATIVE_END;
}
// ********** End Class USessionScreeningCondition Function K2_FilterSearchResults *****************

// ********** Begin Class USessionScreeningCondition ***********************************************
void USessionScreeningCondition::StaticRegisterNativesUSessionScreeningCondition()
{
	UClass* Class = USessionScreeningCondition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCondition", &USessionScreeningCondition::execCheckCondition },
		{ "K2_FilterSearchResults", &USessionScreeningCondition::execK2_FilterSearchResults },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USessionScreeningCondition;
UClass* USessionScreeningCondition::GetPrivateStaticClass()
{
	using TClass = USessionScreeningCondition;
	if (!Z_Registration_Info_UClass_USessionScreeningCondition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SessionScreeningCondition"),
			Z_Registration_Info_UClass_USessionScreeningCondition.InnerSingleton,
			StaticRegisterNativesUSessionScreeningCondition,
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
	return Z_Registration_Info_UClass_USessionScreeningCondition.InnerSingleton;
}
UClass* Z_Construct_UClass_USessionScreeningCondition_NoRegister()
{
	return USessionScreeningCondition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USessionScreeningCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Session/SessionScreeningCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Session/SessionScreeningCondition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USessionScreeningCondition_CheckCondition, "CheckCondition" }, // 2177370723
		{ &Z_Construct_UFunction_USessionScreeningCondition_K2_FilterSearchResults, "K2_FilterSearchResults" }, // 288478445
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USessionScreeningCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USessionScreeningCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USessionScreeningCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USessionScreeningCondition_Statics::ClassParams = {
	&USessionScreeningCondition::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USessionScreeningCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_USessionScreeningCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USessionScreeningCondition()
{
	if (!Z_Registration_Info_UClass_USessionScreeningCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USessionScreeningCondition.OuterSingleton, Z_Construct_UClass_USessionScreeningCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USessionScreeningCondition.OuterSingleton;
}
USessionScreeningCondition::USessionScreeningCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USessionScreeningCondition);
USessionScreeningCondition::~USessionScreeningCondition() {}
// ********** End Class USessionScreeningCondition *************************************************

// ********** Begin Class UScreeningConditionComposite *********************************************
void UScreeningConditionComposite::StaticRegisterNativesUScreeningConditionComposite()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UScreeningConditionComposite;
UClass* UScreeningConditionComposite::GetPrivateStaticClass()
{
	using TClass = UScreeningConditionComposite;
	if (!Z_Registration_Info_UClass_UScreeningConditionComposite.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ScreeningConditionComposite"),
			Z_Registration_Info_UClass_UScreeningConditionComposite.InnerSingleton,
			StaticRegisterNativesUScreeningConditionComposite,
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
	return Z_Registration_Info_UClass_UScreeningConditionComposite.InnerSingleton;
}
UClass* Z_Construct_UClass_UScreeningConditionComposite_NoRegister()
{
	return UScreeningConditionComposite::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UScreeningConditionComposite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Session/SessionScreeningCondition.h" },
		{ "ModuleRelativePath", "Public/Session/SessionScreeningCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[] = {
		{ "Category", "ScreeningConditionComposite" },
		{ "ModuleRelativePath", "Public/Session/SessionScreeningCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUserOr_MetaData[] = {
		{ "Category", "ScreeningConditionComposite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// false -> AND, true -> OR\n" },
#endif
		{ "ModuleRelativePath", "Public/Session/SessionScreeningCondition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "false -> AND, true -> OR" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
	static void NewProp_bUserOr_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserOr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreeningConditionComposite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreeningConditionComposite_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USessionScreeningCondition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScreeningConditionComposite_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreeningConditionComposite, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_MetaData), NewProp_Conditions_MetaData) };
void Z_Construct_UClass_UScreeningConditionComposite_Statics::NewProp_bUserOr_SetBit(void* Obj)
{
	((UScreeningConditionComposite*)Obj)->bUserOr = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreeningConditionComposite_Statics::NewProp_bUserOr = { "bUserOr", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScreeningConditionComposite), &Z_Construct_UClass_UScreeningConditionComposite_Statics::NewProp_bUserOr_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUserOr_MetaData), NewProp_bUserOr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreeningConditionComposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreeningConditionComposite_Statics::NewProp_Conditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreeningConditionComposite_Statics::NewProp_Conditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreeningConditionComposite_Statics::NewProp_bUserOr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreeningConditionComposite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScreeningConditionComposite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USessionScreeningCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreeningConditionComposite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreeningConditionComposite_Statics::ClassParams = {
	&UScreeningConditionComposite::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScreeningConditionComposite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScreeningConditionComposite_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScreeningConditionComposite_Statics::Class_MetaDataParams), Z_Construct_UClass_UScreeningConditionComposite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScreeningConditionComposite()
{
	if (!Z_Registration_Info_UClass_UScreeningConditionComposite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreeningConditionComposite.OuterSingleton, Z_Construct_UClass_UScreeningConditionComposite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScreeningConditionComposite.OuterSingleton;
}
UScreeningConditionComposite::UScreeningConditionComposite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScreeningConditionComposite);
UScreeningConditionComposite::~UScreeningConditionComposite() {}
// ********** End Class UScreeningConditionComposite ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USessionScreeningCondition, USessionScreeningCondition::StaticClass, TEXT("USessionScreeningCondition"), &Z_Registration_Info_UClass_USessionScreeningCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USessionScreeningCondition), 1488636933U) },
		{ Z_Construct_UClass_UScreeningConditionComposite, UScreeningConditionComposite::StaticClass, TEXT("UScreeningConditionComposite"), &Z_Registration_Info_UClass_UScreeningConditionComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreeningConditionComposite), 2762953222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h__Script_GameCore_1214395852(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
