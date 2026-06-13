// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Session/SessionSearchResultSteam.h"
#include "FindSessionsCallbackProxy.h"
#include "Session/CoreSessionSearchResult.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSessionSearchResultSteam() {}

// ********** Begin Cross Module References ********************************************************
COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchResult();
GAMECORE_API UClass* Z_Construct_UClass_USessionSearchResultSteam();
GAMECORE_API UClass* Z_Construct_UClass_USessionSearchResultSteam_NoRegister();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreSessionResult();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionResult();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USessionSearchResultSteam Function GetBlueprintSessionResult *************
struct Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics
{
	struct SessionSearchResultSteam_eventGetBlueprintSessionResult_Parms
	{
		FBlueprintSessionResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Public/Session/SessionSearchResultSteam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SessionSearchResultSteam_eventGetBlueprintSessionResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 3859927135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USessionSearchResultSteam, nullptr, "GetBlueprintSessionResult", Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::SessionSearchResultSteam_eventGetBlueprintSessionResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::SessionSearchResultSteam_eventGetBlueprintSessionResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionSearchResultSteam::execGetBlueprintSessionResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintSessionResult*)Z_Param__Result=P_THIS->GetBlueprintSessionResult();
	P_NATIVE_END;
}
// ********** End Class USessionSearchResultSteam Function GetBlueprintSessionResult ***************

// ********** Begin Class USessionSearchResultSteam Function GetCurrentPlayers *********************
struct Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics
{
	struct SessionSearchResultSteam_eventGetCurrentPlayers_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Public/Session/SessionSearchResultSteam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SessionSearchResultSteam_eventGetCurrentPlayers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USessionSearchResultSteam, nullptr, "GetCurrentPlayers", Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::SessionSearchResultSteam_eventGetCurrentPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::SessionSearchResultSteam_eventGetCurrentPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionSearchResultSteam::execGetCurrentPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentPlayers();
	P_NATIVE_END;
}
// ********** End Class USessionSearchResultSteam Function GetCurrentPlayers ***********************

// ********** Begin Class USessionSearchResultSteam Function GetSessionResult **********************
struct Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics
{
	struct SessionSearchResultSteam_eventGetSessionResult_Parms
	{
		FCoreSessionResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Public/Session/SessionSearchResultSteam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SessionSearchResultSteam_eventGetSessionResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoreSessionResult, METADATA_PARAMS(0, nullptr) }; // 313659535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USessionSearchResultSteam, nullptr, "GetSessionResult", Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::SessionSearchResultSteam_eventGetSessionResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::SessionSearchResultSteam_eventGetSessionResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionSearchResultSteam::execGetSessionResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCoreSessionResult*)Z_Param__Result=P_THIS->GetSessionResult();
	P_NATIVE_END;
}
// ********** End Class USessionSearchResultSteam Function GetSessionResult ************************

// ********** Begin Class USessionSearchResultSteam Function SetSessionResult **********************
struct Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics
{
	struct SessionSearchResultSteam_eventSetSessionResult_Parms
	{
		FSteamSessionResult InSessionResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Public/Session/SessionSearchResultSteam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSessionResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSessionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::NewProp_InSessionResult = { "InSessionResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SessionSearchResultSteam_eventSetSessionResult_Parms, InSessionResult), Z_Construct_UScriptStruct_FSteamSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSessionResult_MetaData), NewProp_InSessionResult_MetaData) }; // 2123520971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::NewProp_InSessionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USessionSearchResultSteam, nullptr, "SetSessionResult", Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::SessionSearchResultSteam_eventSetSessionResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::SessionSearchResultSteam_eventSetSessionResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionSearchResultSteam::execSetSessionResult)
{
	P_GET_STRUCT_REF(FSteamSessionResult,Z_Param_Out_InSessionResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSessionResult(Z_Param_Out_InSessionResult);
	P_NATIVE_END;
}
// ********** End Class USessionSearchResultSteam Function SetSessionResult ************************

// ********** Begin Class USessionSearchResultSteam ************************************************
void USessionSearchResultSteam::StaticRegisterNativesUSessionSearchResultSteam()
{
	UClass* Class = USessionSearchResultSteam::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBlueprintSessionResult", &USessionSearchResultSteam::execGetBlueprintSessionResult },
		{ "GetCurrentPlayers", &USessionSearchResultSteam::execGetCurrentPlayers },
		{ "GetSessionResult", &USessionSearchResultSteam::execGetSessionResult },
		{ "SetSessionResult", &USessionSearchResultSteam::execSetSessionResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USessionSearchResultSteam;
UClass* USessionSearchResultSteam::GetPrivateStaticClass()
{
	using TClass = USessionSearchResultSteam;
	if (!Z_Registration_Info_UClass_USessionSearchResultSteam.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SessionSearchResultSteam"),
			Z_Registration_Info_UClass_USessionSearchResultSteam.InnerSingleton,
			StaticRegisterNativesUSessionSearchResultSteam,
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
	return Z_Registration_Info_UClass_USessionSearchResultSteam.InnerSingleton;
}
UClass* Z_Construct_UClass_USessionSearchResultSteam_NoRegister()
{
	return USessionSearchResultSteam::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USessionSearchResultSteam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Session/SessionSearchResultSteam.h" },
		{ "ModuleRelativePath", "Public/Session/SessionSearchResultSteam.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USessionSearchResultSteam_GetBlueprintSessionResult, "GetBlueprintSessionResult" }, // 976316279
		{ &Z_Construct_UFunction_USessionSearchResultSteam_GetCurrentPlayers, "GetCurrentPlayers" }, // 1416336130
		{ &Z_Construct_UFunction_USessionSearchResultSteam_GetSessionResult, "GetSessionResult" }, // 1532243159
		{ &Z_Construct_UFunction_USessionSearchResultSteam_SetSessionResult, "SetSessionResult" }, // 987985783
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USessionSearchResultSteam>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USessionSearchResultSteam_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonSession_SearchResult,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USessionSearchResultSteam_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USessionSearchResultSteam_Statics::ClassParams = {
	&USessionSearchResultSteam::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USessionSearchResultSteam_Statics::Class_MetaDataParams), Z_Construct_UClass_USessionSearchResultSteam_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USessionSearchResultSteam()
{
	if (!Z_Registration_Info_UClass_USessionSearchResultSteam.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USessionSearchResultSteam.OuterSingleton, Z_Construct_UClass_USessionSearchResultSteam_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USessionSearchResultSteam.OuterSingleton;
}
USessionSearchResultSteam::USessionSearchResultSteam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USessionSearchResultSteam);
USessionSearchResultSteam::~USessionSearchResultSteam() {}
// ********** End Class USessionSearchResultSteam **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USessionSearchResultSteam, USessionSearchResultSteam::StaticClass, TEXT("USessionSearchResultSteam"), &Z_Registration_Info_UClass_USessionSearchResultSteam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USessionSearchResultSteam), 1473768797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h__Script_GameCore_2332865831(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
