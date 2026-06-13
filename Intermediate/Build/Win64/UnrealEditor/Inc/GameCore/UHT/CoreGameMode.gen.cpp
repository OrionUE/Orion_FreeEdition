// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/CoreGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreGameMode() {}

// ********** Begin Cross Module References ********************************************************
COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();
COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext();
COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_ACoreGameMode();
GAMECORE_API UClass* Z_Construct_UClass_ACoreGameMode_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnData_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACoreGameMode Function GetPawnDataForController **************************
struct Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics
{
	struct CoreGameMode_eventGetPawnDataForController_Parms
	{
		const AController* InController;
		const UCorePawnData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameCore|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xbb\x8e\xe7\x8e\xa9\xe5\xae\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe4\xb8\xad\xe8\x8e\xb7\xe5\x8f\x96\xe5\x88\xb0PawnData\n\x09 * @param InController\x09\x09\x09PlayerController\n\x09 * @return\x09\x09\x09\x09\x09\x09PawnData\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe7\x8e\xa9\xe5\xae\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe4\xb8\xad\xe8\x8e\xb7\xe5\x8f\x96\xe5\x88\xb0PawnData\n@param InController                  PlayerController\n@return                                              PawnData" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InController_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameMode_eventGetPawnDataForController_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InController_MetaData), NewProp_InController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameMode_eventGetPawnDataForController_Parms, ReturnValue), Z_Construct_UClass_UCorePawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::NewProp_InController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACoreGameMode, nullptr, "GetPawnDataForController", Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::CoreGameMode_eventGetPawnDataForController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::CoreGameMode_eventGetPawnDataForController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoreGameMode::execGetPawnDataForController)
{
	P_GET_OBJECT(AController,Z_Param_InController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UCorePawnData**)Z_Param__Result=P_THIS->GetPawnDataForController(Z_Param_InController);
	P_NATIVE_END;
}
// ********** End Class ACoreGameMode Function GetPawnDataForController ****************************

// ********** Begin Class ACoreGameMode Function OnUserInitializedForDedicatedServer ***************
struct Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics
{
	struct CoreGameMode_eventOnUserInitializedForDedicatedServer_Parms
	{
		const UCommonUserInfo* UserInfo;
		bool bSuccess;
		FText Error;
		ECommonUserPrivilege RequestedPrivilege;
		ECommonUserOnlineContext OnlineContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameModes/CoreGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Error;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedPrivilege_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedPrivilege;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OnlineContext_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OnlineContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameMode_eventOnUserInitializedForDedicatedServer_Parms, UserInfo), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserInfo_MetaData), NewProp_UserInfo_MetaData) };
void Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((CoreGameMode_eventOnUserInitializedForDedicatedServer_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CoreGameMode_eventOnUserInitializedForDedicatedServer_Parms), &Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameMode_eventOnUserInitializedForDedicatedServer_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege = { "RequestedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameMode_eventOnUserInitializedForDedicatedServer_Parms, RequestedPrivilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(0, nullptr) }; // 3165184135
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext = { "OnlineContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameMode_eventOnUserInitializedForDedicatedServer_Parms, OnlineContext), Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, METADATA_PARAMS(0, nullptr) }; // 3178011620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACoreGameMode, nullptr, "OnUserInitializedForDedicatedServer", Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::CoreGameMode_eventOnUserInitializedForDedicatedServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::CoreGameMode_eventOnUserInitializedForDedicatedServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoreGameMode::execOnUserInitializedForDedicatedServer)
{
	P_GET_OBJECT(UCommonUserInfo,Z_Param_UserInfo);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FTextProperty,Z_Param_Error);
	P_GET_ENUM(ECommonUserPrivilege,Z_Param_RequestedPrivilege);
	P_GET_ENUM(ECommonUserOnlineContext,Z_Param_OnlineContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUserInitializedForDedicatedServer(Z_Param_UserInfo,Z_Param_bSuccess,Z_Param_Error,ECommonUserPrivilege(Z_Param_RequestedPrivilege),ECommonUserOnlineContext(Z_Param_OnlineContext));
	P_NATIVE_END;
}
// ********** End Class ACoreGameMode Function OnUserInitializedForDedicatedServer *****************

// ********** Begin Class ACoreGameMode Function RequestPlayerRestartNextFrame *********************
struct Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics
{
	struct CoreGameMode_eventRequestPlayerRestartNextFrame_Parms
	{
		AController* Controller;
		bool bForceReset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Restart (respawn) the specified player or bot next frame\n\x09 * \n\x09 * @param bForceReset If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)\n\x09 */" },
#endif
		{ "CPP_Default_bForceReset", "false" },
		{ "ModuleRelativePath", "Public/GameModes/CoreGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restart (respawn) the specified player or bot next frame\n\n@param bForceReset If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static void NewProp_bForceReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameMode_eventRequestPlayerRestartNextFrame_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit(void* Obj)
{
	((CoreGameMode_eventRequestPlayerRestartNextFrame_Parms*)Obj)->bForceReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset = { "bForceReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CoreGameMode_eventRequestPlayerRestartNextFrame_Parms), &Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACoreGameMode, nullptr, "RequestPlayerRestartNextFrame", Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::CoreGameMode_eventRequestPlayerRestartNextFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::CoreGameMode_eventRequestPlayerRestartNextFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoreGameMode::execRequestPlayerRestartNextFrame)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_GET_UBOOL(Z_Param_bForceReset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestPlayerRestartNextFrame(Z_Param_Controller,Z_Param_bForceReset);
	P_NATIVE_END;
}
// ********** End Class ACoreGameMode Function RequestPlayerRestartNextFrame ***********************

// ********** Begin Class ACoreGameMode ************************************************************
void ACoreGameMode::StaticRegisterNativesACoreGameMode()
{
	UClass* Class = ACoreGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPawnDataForController", &ACoreGameMode::execGetPawnDataForController },
		{ "OnUserInitializedForDedicatedServer", &ACoreGameMode::execOnUserInitializedForDedicatedServer },
		{ "RequestPlayerRestartNextFrame", &ACoreGameMode::execRequestPlayerRestartNextFrame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACoreGameMode;
UClass* ACoreGameMode::GetPrivateStaticClass()
{
	using TClass = ACoreGameMode;
	if (!Z_Registration_Info_UClass_ACoreGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGameMode"),
			Z_Registration_Info_UClass_ACoreGameMode.InnerSingleton,
			StaticRegisterNativesACoreGameMode,
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
	return Z_Registration_Info_UClass_ACoreGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACoreGameMode_NoRegister()
{
	return ACoreGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACoreGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ACoreGameMode\n * \n * \xe6\xb8\xb8\xe6\x88\x8f\xe6\xa8\xa1\xe5\xbc\x8f\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n *\n * @see https://idealitycentury.yuque.com/bt1dl9/project_doc/tyraebi7rh8t9us8\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/CoreGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/CoreGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base game mode class used by this project." },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ACoreGameMode\n\n\xe6\xb8\xb8\xe6\x88\x8f\xe6\xa8\xa1\xe5\xbc\x8f\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n\n@see https://idealitycentury.yuque.com/bt1dl9/project_doc/tyraebi7rh8t9us8" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoreGameMode_GetPawnDataForController, "GetPawnDataForController" }, // 1109191080
		{ &Z_Construct_UFunction_ACoreGameMode_OnUserInitializedForDedicatedServer, "OnUserInitializedForDedicatedServer" }, // 3849820232
		{ &Z_Construct_UFunction_ACoreGameMode_RequestPlayerRestartNextFrame, "RequestPlayerRestartNextFrame" }, // 3084124455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoreGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACoreGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoreGameMode_Statics::ClassParams = {
	&ACoreGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoreGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoreGameMode()
{
	if (!Z_Registration_Info_UClass_ACoreGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoreGameMode.OuterSingleton, Z_Construct_UClass_ACoreGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoreGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoreGameMode);
ACoreGameMode::~ACoreGameMode() {}
// ********** End Class ACoreGameMode **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoreGameMode, ACoreGameMode::StaticClass, TEXT("ACoreGameMode"), &Z_Registration_Info_UClass_ACoreGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoreGameMode), 1712750989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h__Script_GameCore_178457415(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
