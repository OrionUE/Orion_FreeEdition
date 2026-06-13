// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/CorePawnControlComponent.h"
#include "GameFeatures/GameFeatureAction_AddInputContextMapping.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCorePawnControlComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnControlComponent();
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnControlComponent_NoRegister();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingContextAndPriority();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCorePawnControlComponent Function FindControlComponent ******************
struct Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics
{
	struct CorePawnControlComponent_eventFindControlComponent_Parms
	{
		const AActor* Actor;
		UCorePawnControlComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the PawnControlComponent if one exists on the specified actor. */" },
#endif
		{ "ModuleRelativePath", "Public/Character/CorePawnControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the PawnControlComponent if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CorePawnControlComponent_eventFindControlComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CorePawnControlComponent_eventFindControlComponent_Parms, ReturnValue), Z_Construct_UClass_UCorePawnControlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCorePawnControlComponent, nullptr, "FindControlComponent", Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::CorePawnControlComponent_eventFindControlComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::CorePawnControlComponent_eventFindControlComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCorePawnControlComponent::execFindControlComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCorePawnControlComponent**)Z_Param__Result=UCorePawnControlComponent::FindControlComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UCorePawnControlComponent Function FindControlComponent ********************

// ********** Begin Class UCorePawnControlComponent ************************************************
void UCorePawnControlComponent::StaticRegisterNativesUCorePawnControlComponent()
{
	UClass* Class = UCorePawnControlComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindControlComponent", &UCorePawnControlComponent::execFindControlComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCorePawnControlComponent;
UClass* UCorePawnControlComponent::GetPrivateStaticClass()
{
	using TClass = UCorePawnControlComponent;
	if (!Z_Registration_Info_UClass_UCorePawnControlComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CorePawnControlComponent"),
			Z_Registration_Info_UClass_UCorePawnControlComponent.InnerSingleton,
			StaticRegisterNativesUCorePawnControlComponent,
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
	return Z_Registration_Info_UClass_UCorePawnControlComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCorePawnControlComponent_NoRegister()
{
	return UCorePawnControlComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCorePawnControlComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UCorePawnControlComponent\n * \n * Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).\n * This depends on a PawnExtensionComponent to coordinate initialization.\n * \xe4\xb8\xba\xe7\x8e\xa9\xe5\xae\xb6\xe7\x9a\x84""Controller\xef\xbc\x88\xe7\x8e\xa9\xe5\xae\xb6\xe6\x88\x96""AI\xef\xbc\x89\xe8\xae\xbe\xe7\xbd\xae\xe8\xbe\x93\xe5\x85\xa5\xe5\x92\x8c\xe9\x95\x9c\xe5\xa4\xb4\xe5\xa4\x84\xe7\x90\x86\xe7\xad\x89\xe7\xbb\x84\xe4\xbb\xb6\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/CorePawnControlComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/CorePawnControlComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCorePawnControlComponent\n\nComponent that sets up input and camera handling for player controlled pawns (or bots that simulate players).\nThis depends on a PawnExtensionComponent to coordinate initialization.\n\xe4\xb8\xba\xe7\x8e\xa9\xe5\xae\xb6\xe7\x9a\x84""Controller\xef\xbc\x88\xe7\x8e\xa9\xe5\xae\xb6\xe6\x88\x96""AI\xef\xbc\x89\xe8\xae\xbe\xe7\xbd\xae\xe8\xbe\x93\xe5\x85\xa5\xe5\x92\x8c\xe9\x95\x9c\xe5\xa4\xb4\xe5\xa4\x84\xe7\x90\x86\xe7\xad\x89\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputMappings_MetaData[] = {
		{ "Category", "CorePawnControlComponent" },
		{ "ModuleRelativePath", "Public/Character/CorePawnControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultInputMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePawnControlComponent_FindControlComponent, "FindControlComponent" }, // 916055051
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePawnControlComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCorePawnControlComponent_Statics::NewProp_DefaultInputMappings_Inner = { "DefaultInputMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingContextAndPriority, METADATA_PARAMS(0, nullptr) }; // 3295042090
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCorePawnControlComponent_Statics::NewProp_DefaultInputMappings = { "DefaultInputMappings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCorePawnControlComponent, DefaultInputMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputMappings_MetaData), NewProp_DefaultInputMappings_MetaData) }; // 3295042090
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePawnControlComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePawnControlComponent_Statics::NewProp_DefaultInputMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePawnControlComponent_Statics::NewProp_DefaultInputMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCorePawnControlComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCorePawnControlComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCorePawnControlComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCorePawnControlComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UCorePawnControlComponent, IGameFrameworkInitStateInterface), false },  // 2413971871
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCorePawnControlComponent_Statics::ClassParams = {
	&UCorePawnControlComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCorePawnControlComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCorePawnControlComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCorePawnControlComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCorePawnControlComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCorePawnControlComponent()
{
	if (!Z_Registration_Info_UClass_UCorePawnControlComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCorePawnControlComponent.OuterSingleton, Z_Construct_UClass_UCorePawnControlComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCorePawnControlComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePawnControlComponent);
UCorePawnControlComponent::~UCorePawnControlComponent() {}
// ********** End Class UCorePawnControlComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCorePawnControlComponent, UCorePawnControlComponent::StaticClass, TEXT("UCorePawnControlComponent"), &Z_Registration_Info_UClass_UCorePawnControlComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCorePawnControlComponent), 4238457667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h__Script_GameCore_1059529493(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
