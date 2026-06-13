// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/CoreAbilityCost.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreAbilityCost() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityCost();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityCost_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreAbilityCost *********************************************************
void UCoreAbilityCost::StaticRegisterNativesUCoreAbilityCost()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreAbilityCost;
UClass* UCoreAbilityCost::GetPrivateStaticClass()
{
	using TClass = UCoreAbilityCost;
	if (!Z_Registration_Info_UClass_UCoreAbilityCost.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreAbilityCost"),
			Z_Registration_Info_UClass_UCoreAbilityCost.InnerSingleton,
			StaticRegisterNativesUCoreAbilityCost,
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
	return Z_Registration_Info_UClass_UCoreAbilityCost.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreAbilityCost_NoRegister()
{
	return UCoreAbilityCost::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreAbilityCost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/CoreAbilityCost.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreAbilityCost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyCostOnHit_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this cost should only be applied if this ability hits successfully */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CoreAbilityCost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this cost should only be applied if this ability hits successfully" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyCostOnHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAbilityCost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCoreAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj)
{
	((UCoreAbilityCost*)Obj)->bOnlyApplyCostOnHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit = { "bOnlyApplyCostOnHit", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCoreAbilityCost), &Z_Construct_UClass_UCoreAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyApplyCostOnHit_MetaData), NewProp_bOnlyApplyCostOnHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAbilityCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilityCost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreAbilityCost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilityCost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreAbilityCost_Statics::ClassParams = {
	&UCoreAbilityCost::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCoreAbilityCost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilityCost_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAbilityCost_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreAbilityCost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreAbilityCost()
{
	if (!Z_Registration_Info_UClass_UCoreAbilityCost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreAbilityCost.OuterSingleton, Z_Construct_UClass_UCoreAbilityCost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreAbilityCost.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAbilityCost);
UCoreAbilityCost::~UCoreAbilityCost() {}
// ********** End Class UCoreAbilityCost ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreAbilityCost, UCoreAbilityCost::StaticClass, TEXT("UCoreAbilityCost"), &Z_Registration_Info_UClass_UCoreAbilityCost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreAbilityCost), 2205510547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h__Script_GameCore_444273382(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
