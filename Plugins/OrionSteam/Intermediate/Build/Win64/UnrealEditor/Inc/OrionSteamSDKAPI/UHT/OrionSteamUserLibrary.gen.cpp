// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamUserLibrary.h"
#include "OrionSteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamUserLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserLibrary();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserLibrary_NoRegister();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FOrionSteamId();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamUserLibrary Function GetLocalUserId ***************************
struct Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics
{
	struct OrionSteamUserLibrary_eventGetLocalUserId_Parms
	{
		FOrionSteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|User" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserLibrary_eventGetLocalUserId_Parms, ReturnValue), Z_Construct_UScriptStruct_FOrionSteamId, METADATA_PARAMS(0, nullptr) }; // 3522859118
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserLibrary, nullptr, "GetLocalUserId", Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::OrionSteamUserLibrary_eventGetLocalUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::OrionSteamUserLibrary_eventGetLocalUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserLibrary::execGetLocalUserId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOrionSteamId*)Z_Param__Result=UOrionSteamUserLibrary::GetLocalUserId();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserLibrary Function GetLocalUserId *****************************

// ********** Begin Class UOrionSteamUserLibrary Function MakeUserIdFromString *********************
struct Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics
{
	struct OrionSteamUserLibrary_eventMakeUserIdFromString_Parms
	{
		FString InUserId;
		FOrionSteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|User" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUserLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserLibrary_eventMakeUserIdFromString_Parms, InUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUserId_MetaData), NewProp_InUserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserLibrary_eventMakeUserIdFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FOrionSteamId, METADATA_PARAMS(0, nullptr) }; // 3522859118
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::NewProp_InUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserLibrary, nullptr, "MakeUserIdFromString", Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::OrionSteamUserLibrary_eventMakeUserIdFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::OrionSteamUserLibrary_eventMakeUserIdFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserLibrary::execMakeUserIdFromString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOrionSteamId*)Z_Param__Result=UOrionSteamUserLibrary::MakeUserIdFromString(Z_Param_InUserId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserLibrary Function MakeUserIdFromString ***********************

// ********** Begin Class UOrionSteamUserLibrary ***************************************************
void UOrionSteamUserLibrary::StaticRegisterNativesUOrionSteamUserLibrary()
{
	UClass* Class = UOrionSteamUserLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLocalUserId", &UOrionSteamUserLibrary::execGetLocalUserId },
		{ "MakeUserIdFromString", &UOrionSteamUserLibrary::execMakeUserIdFromString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserLibrary;
UClass* UOrionSteamUserLibrary::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserLibrary;
	if (!Z_Registration_Info_UClass_UOrionSteamUserLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserLibrary"),
			Z_Registration_Info_UClass_UOrionSteamUserLibrary.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserLibrary,
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
	return Z_Registration_Info_UClass_UOrionSteamUserLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserLibrary_NoRegister()
{
	return UOrionSteamUserLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamSDKAPI/OrionSteamUserLibrary.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUserLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserLibrary_GetLocalUserId, "GetLocalUserId" }, // 4226260592
		{ &Z_Construct_UFunction_UOrionSteamUserLibrary_MakeUserIdFromString, "MakeUserIdFromString" }, // 1117572408
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamUserLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserLibrary_Statics::ClassParams = {
	&UOrionSteamUserLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserLibrary()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserLibrary.OuterSingleton, Z_Construct_UClass_UOrionSteamUserLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserLibrary.OuterSingleton;
}
UOrionSteamUserLibrary::UOrionSteamUserLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserLibrary);
UOrionSteamUserLibrary::~UOrionSteamUserLibrary() {}
// ********** End Class UOrionSteamUserLibrary *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamUserLibrary, UOrionSteamUserLibrary::StaticClass, TEXT("UOrionSteamUserLibrary"), &Z_Registration_Info_UClass_UOrionSteamUserLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserLibrary), 4386441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h__Script_OrionSteamSDKAPI_1095748695(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
