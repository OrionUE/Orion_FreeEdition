// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/CoreExperienceUserFacingDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreExperienceUserFacingDefinition() {}

// ********** Begin Cross Module References ********************************************************
COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceUserFacingDefinition();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceUserFacingDefinition_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreExperienceUserFacingDefinition Function CreateHostingRequest ********
struct Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics
{
	struct CoreExperienceUserFacingDefinition_eventCreateHostingRequest_Parms
	{
		const UObject* WorldContextObject;
		UCommonSession_HostSessionRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create a request object that is used to actually start a session with these settings */" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceUserFacingDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a request object that is used to actually start a session with these settings" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreExperienceUserFacingDefinition_eventCreateHostingRequest_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreExperienceUserFacingDefinition_eventCreateHostingRequest_Parms, ReturnValue), Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreExperienceUserFacingDefinition, nullptr, "CreateHostingRequest", Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::CoreExperienceUserFacingDefinition_eventCreateHostingRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::CoreExperienceUserFacingDefinition_eventCreateHostingRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreExperienceUserFacingDefinition::execCreateHostingRequest)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCommonSession_HostSessionRequest**)Z_Param__Result=P_THIS->CreateHostingRequest(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UCoreExperienceUserFacingDefinition Function CreateHostingRequest **********

// ********** Begin Class UCoreExperienceUserFacingDefinition **************************************
void UCoreExperienceUserFacingDefinition::StaticRegisterNativesUCoreExperienceUserFacingDefinition()
{
	UClass* Class = UCoreExperienceUserFacingDefinition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateHostingRequest", &UCoreExperienceUserFacingDefinition::execCreateHostingRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreExperienceUserFacingDefinition;
UClass* UCoreExperienceUserFacingDefinition::GetPrivateStaticClass()
{
	using TClass = UCoreExperienceUserFacingDefinition;
	if (!Z_Registration_Info_UClass_UCoreExperienceUserFacingDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreExperienceUserFacingDefinition"),
			Z_Registration_Info_UClass_UCoreExperienceUserFacingDefinition.InnerSingleton,
			StaticRegisterNativesUCoreExperienceUserFacingDefinition,
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
	return Z_Registration_Info_UClass_UCoreExperienceUserFacingDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreExperienceUserFacingDefinition_NoRegister()
{
	return UCoreExperienceUserFacingDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Description of settings used to start a new session\n */" },
#endif
		{ "IncludePath", "GameModes/CoreExperienceUserFacingDefinition.h" },
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceUserFacingDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of settings used to start a new session" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[] = {
		{ "AllowedTypes", "Map" },
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The specific map to load */" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceUserFacingDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The specific map to load" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceID_MetaData[] = {
		{ "AllowedTypes", "CoreExperienceDefinition" },
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The gameplay experience to load */" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceUserFacingDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The gameplay experience to load" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraArgs_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extra arguments passed as URL options to the game */" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceUserFacingDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra arguments passed as URL options to the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultExperience_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this is a default experience that should be used for quick play and given priority in the UI */" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceUserFacingDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this is a default experience that should be used for quick play and given priority in the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidget_MetaData[] = {
		{ "Category", "LoadingScreen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The loading screen widget to show when loading into (or back out of) a given experience */" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreExperienceUserFacingDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The loading screen widget to show when loading into (or back out of) a given experience" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraArgs;
	static void NewProp_bIsDefaultExperience_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultExperience;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LoadingScreenWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreExperienceUserFacingDefinition_CreateHostingRequest, "CreateHostingRequest" }, // 1506539818
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreExperienceUserFacingDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceUserFacingDefinition, MapID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapID_MetaData), NewProp_MapID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_ExperienceID = { "ExperienceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceUserFacingDefinition, ExperienceID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceID_MetaData), NewProp_ExperienceID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_ExtraArgs_ValueProp = { "ExtraArgs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_ExtraArgs_Key_KeyProp = { "ExtraArgs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_ExtraArgs = { "ExtraArgs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceUserFacingDefinition, ExtraArgs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraArgs_MetaData), NewProp_ExtraArgs_MetaData) };
void Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_bIsDefaultExperience_SetBit(void* Obj)
{
	((UCoreExperienceUserFacingDefinition*)Obj)->bIsDefaultExperience = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_bIsDefaultExperience = { "bIsDefaultExperience", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCoreExperienceUserFacingDefinition), &Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_bIsDefaultExperience_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDefaultExperience_MetaData), NewProp_bIsDefaultExperience_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_LoadingScreenWidget = { "LoadingScreenWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreExperienceUserFacingDefinition, LoadingScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenWidget_MetaData), NewProp_LoadingScreenWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_MapID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_ExperienceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_ExtraArgs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_ExtraArgs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_ExtraArgs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_bIsDefaultExperience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::NewProp_LoadingScreenWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::ClassParams = {
	&UCoreExperienceUserFacingDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreExperienceUserFacingDefinition()
{
	if (!Z_Registration_Info_UClass_UCoreExperienceUserFacingDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreExperienceUserFacingDefinition.OuterSingleton, Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreExperienceUserFacingDefinition.OuterSingleton;
}
UCoreExperienceUserFacingDefinition::UCoreExperienceUserFacingDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreExperienceUserFacingDefinition);
UCoreExperienceUserFacingDefinition::~UCoreExperienceUserFacingDefinition() {}
// ********** End Class UCoreExperienceUserFacingDefinition ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreExperienceUserFacingDefinition, UCoreExperienceUserFacingDefinition::StaticClass, TEXT("UCoreExperienceUserFacingDefinition"), &Z_Registration_Info_UClass_UCoreExperienceUserFacingDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreExperienceUserFacingDefinition), 1649667673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h__Script_GameCore_977295951(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
