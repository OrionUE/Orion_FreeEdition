// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/CoreExperienceManagerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreExperienceManagerComponent() {}

// ********** Begin Cross Module References ********************************************************
COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceDefinition_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceManagerComponent();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceManagerComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreExperienceManagerComponent Function OnRep_CurrentExperience *********
struct Z_Construct_UFunction_UCoreExperienceManagerComponent_OnRep_CurrentExperience_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreExperienceManagerComponent_OnRep_CurrentExperience_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreExperienceManagerComponent, nullptr, "OnRep_CurrentExperience", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreExperienceManagerComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreExperienceManagerComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCoreExperienceManagerComponent_OnRep_CurrentExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreExperienceManagerComponent_OnRep_CurrentExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreExperienceManagerComponent::execOnRep_CurrentExperience)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentExperience();
	P_NATIVE_END;
}
// ********** End Class UCoreExperienceManagerComponent Function OnRep_CurrentExperience ***********

// ********** Begin Class UCoreExperienceManagerComponent ******************************************
void UCoreExperienceManagerComponent::StaticRegisterNativesUCoreExperienceManagerComponent()
{
	UClass* Class = UCoreExperienceManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentExperience", &UCoreExperienceManagerComponent::execOnRep_CurrentExperience },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreExperienceManagerComponent;
UClass* UCoreExperienceManagerComponent::GetPrivateStaticClass()
{
	using TClass = UCoreExperienceManagerComponent;
	if (!Z_Registration_Info_UClass_UCoreExperienceManagerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreExperienceManagerComponent"),
			Z_Registration_Info_UClass_UCoreExperienceManagerComponent.InnerSingleton,
			StaticRegisterNativesUCoreExperienceManagerComponent,
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
	return Z_Registration_Info_UClass_UCoreExperienceManagerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreExperienceManagerComponent_NoRegister()
{
	return UCoreExperienceManagerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreExperienceManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UCoreExperienceManagerComponent\n *\n * Experience\xe7\xae\xa1\xe7\x90\x86\xe7\xbb\x84\xe4\xbb\xb6\n *\n * @note \xe9\x9c\x80\xe5\x9c\xa8GameState\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe5\xb9\xb6\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe8\xaf\xa5\xe7\xbb\x84\xe4\xbb\xb6\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GameModes/CoreExperienceManagerComponent.h" },
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCoreExperienceManagerComponent\n\nExperience\xe7\xae\xa1\xe7\x90\x86\xe7\xbb\x84\xe4\xbb\xb6\n\n@note \xe9\x9c\x80\xe5\x9c\xa8GameState\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe5\xb9\xb6\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe8\xaf\xa5\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExperience_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceManagerComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreExperienceManagerComponent_OnRep_CurrentExperience, "OnRep_CurrentExperience" }, // 1199924878
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreExperienceManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::NewProp_CurrentExperience = { "CurrentExperience", "OnRep_CurrentExperience", (EPropertyFlags)0x0144000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceManagerComponent, CurrentExperience), Z_Construct_UClass_UCoreExperienceDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentExperience_MetaData), NewProp_CurrentExperience_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::NewProp_CurrentExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULoadingProcessInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreExperienceManagerComponent, ILoadingProcessInterface), false },  // 2401025800
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreExperienceManagerComponent, IGameFrameworkInitStateInterface), false },  // 2413971871
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::ClassParams = {
	&UCoreExperienceManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreExperienceManagerComponent()
{
	if (!Z_Registration_Info_UClass_UCoreExperienceManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreExperienceManagerComponent.OuterSingleton, Z_Construct_UClass_UCoreExperienceManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreExperienceManagerComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UCoreExperienceManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentExperience(TEXT("CurrentExperience"));
	const bool bIsValid = true
		&& Name_CurrentExperience == ClassReps[(int32)ENetFields_Private::CurrentExperience].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCoreExperienceManagerComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreExperienceManagerComponent);
UCoreExperienceManagerComponent::~UCoreExperienceManagerComponent() {}
// ********** End Class UCoreExperienceManagerComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreExperienceManagerComponent, UCoreExperienceManagerComponent::StaticClass, TEXT("UCoreExperienceManagerComponent"), &Z_Registration_Info_UClass_UCoreExperienceManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreExperienceManagerComponent), 1395040405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h__Script_GameCore_3782124138(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
