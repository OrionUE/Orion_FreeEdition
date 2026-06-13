// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Session/CoreSessionSearchResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreSessionSearchResult() {}

// ********** Begin Cross Module References ********************************************************
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreSessionResult();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCoreSessionResult ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreSessionResult;
class UScriptStruct* FCoreSessionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreSessionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreSessionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreSessionResult, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreSessionResult"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreSessionResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreSessionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Session/CoreSessionSearchResult.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreSessionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreSessionResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreSessionResult",
	nullptr,
	0,
	sizeof(FCoreSessionResult),
	alignof(FCoreSessionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreSessionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreSessionResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreSessionResult()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreSessionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreSessionResult.InnerSingleton, Z_Construct_UScriptStruct_FCoreSessionResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreSessionResult.InnerSingleton;
}
// ********** End ScriptStruct FCoreSessionResult **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionSearchResult_h__Script_GameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoreSessionResult::StaticStruct, Z_Construct_UScriptStruct_FCoreSessionResult_Statics::NewStructOps, TEXT("CoreSessionResult"), &Z_Registration_Info_UScriptStruct_FCoreSessionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreSessionResult), 313659535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionSearchResult_h__Script_GameCore_341504299(TEXT("/Script/GameCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionSearchResult_h__Script_GameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionSearchResult_h__Script_GameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
