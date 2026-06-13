// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionAudioCaptureAndroid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionAudioCaptureAndroid() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionAudioCaptureAndroid();
ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionAudioCaptureAndroid_NoRegister();
ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionVoiceChat();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionAudioCaptureAndroid Function AskAndroidPermission ******************
struct Z_Construct_UFunction_UOrionAudioCaptureAndroid_AskAndroidPermission_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionAudioCaptureAndroid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionAudioCaptureAndroid_AskAndroidPermission_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionAudioCaptureAndroid, nullptr, "AskAndroidPermission", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionAudioCaptureAndroid_AskAndroidPermission_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionAudioCaptureAndroid_AskAndroidPermission_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionAudioCaptureAndroid_AskAndroidPermission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionAudioCaptureAndroid_AskAndroidPermission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionAudioCaptureAndroid::execAskAndroidPermission)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionAudioCaptureAndroid::AskAndroidPermission();
	P_NATIVE_END;
}
// ********** End Class UOrionAudioCaptureAndroid Function AskAndroidPermission ********************

// ********** Begin Class UOrionAudioCaptureAndroid Function HasAndroidPermission ******************
struct Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics
{
	struct OrionAudioCaptureAndroid_eventHasAndroidPermission_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionAudioCaptureAndroid.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionAudioCaptureAndroid_eventHasAndroidPermission_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionAudioCaptureAndroid_eventHasAndroidPermission_Parms), &Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionAudioCaptureAndroid, nullptr, "HasAndroidPermission", Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::OrionAudioCaptureAndroid_eventHasAndroidPermission_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::OrionAudioCaptureAndroid_eventHasAndroidPermission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionAudioCaptureAndroid::execHasAndroidPermission)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionAudioCaptureAndroid::HasAndroidPermission();
	P_NATIVE_END;
}
// ********** End Class UOrionAudioCaptureAndroid Function HasAndroidPermission ********************

// ********** Begin Class UOrionAudioCaptureAndroid Function StartAndroidMicrophone ****************
struct Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics
{
	struct OrionAudioCaptureAndroid_eventStartAndroidMicrophone_Parms
	{
		UOrionMicrophoneSpeakComponent* callbackComp;
		int32 SampleRateToUse;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionAudioCaptureAndroid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_callbackComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_callbackComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRateToUse;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::NewProp_callbackComp = { "callbackComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionAudioCaptureAndroid_eventStartAndroidMicrophone_Parms, callbackComp), Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_callbackComp_MetaData), NewProp_callbackComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::NewProp_SampleRateToUse = { "SampleRateToUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionAudioCaptureAndroid_eventStartAndroidMicrophone_Parms, SampleRateToUse), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionAudioCaptureAndroid_eventStartAndroidMicrophone_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionAudioCaptureAndroid_eventStartAndroidMicrophone_Parms), &Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::NewProp_callbackComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::NewProp_SampleRateToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionAudioCaptureAndroid, nullptr, "StartAndroidMicrophone", Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::OrionAudioCaptureAndroid_eventStartAndroidMicrophone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::OrionAudioCaptureAndroid_eventStartAndroidMicrophone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionAudioCaptureAndroid::execStartAndroidMicrophone)
{
	P_GET_OBJECT(UOrionMicrophoneSpeakComponent,Z_Param_callbackComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRateToUse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionAudioCaptureAndroid::StartAndroidMicrophone(Z_Param_callbackComp,Z_Param_SampleRateToUse);
	P_NATIVE_END;
}
// ********** End Class UOrionAudioCaptureAndroid Function StartAndroidMicrophone ******************

// ********** Begin Class UOrionAudioCaptureAndroid Function StopAndroidMicrophone *****************
struct Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics
{
	struct OrionAudioCaptureAndroid_eventStopAndroidMicrophone_Parms
	{
		UOrionMicrophoneSpeakComponent* callbackComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionAudioCaptureAndroid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_callbackComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_callbackComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::NewProp_callbackComp = { "callbackComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionAudioCaptureAndroid_eventStopAndroidMicrophone_Parms, callbackComp), Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_callbackComp_MetaData), NewProp_callbackComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::NewProp_callbackComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionAudioCaptureAndroid, nullptr, "StopAndroidMicrophone", Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::OrionAudioCaptureAndroid_eventStopAndroidMicrophone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::OrionAudioCaptureAndroid_eventStopAndroidMicrophone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionAudioCaptureAndroid::execStopAndroidMicrophone)
{
	P_GET_OBJECT(UOrionMicrophoneSpeakComponent,Z_Param_callbackComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionAudioCaptureAndroid::StopAndroidMicrophone(Z_Param_callbackComp);
	P_NATIVE_END;
}
// ********** End Class UOrionAudioCaptureAndroid Function StopAndroidMicrophone *******************

// ********** Begin Class UOrionAudioCaptureAndroid ************************************************
void UOrionAudioCaptureAndroid::StaticRegisterNativesUOrionAudioCaptureAndroid()
{
	UClass* Class = UOrionAudioCaptureAndroid::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AskAndroidPermission", &UOrionAudioCaptureAndroid::execAskAndroidPermission },
		{ "HasAndroidPermission", &UOrionAudioCaptureAndroid::execHasAndroidPermission },
		{ "StartAndroidMicrophone", &UOrionAudioCaptureAndroid::execStartAndroidMicrophone },
		{ "StopAndroidMicrophone", &UOrionAudioCaptureAndroid::execStopAndroidMicrophone },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionAudioCaptureAndroid;
UClass* UOrionAudioCaptureAndroid::GetPrivateStaticClass()
{
	using TClass = UOrionAudioCaptureAndroid;
	if (!Z_Registration_Info_UClass_UOrionAudioCaptureAndroid.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionAudioCaptureAndroid"),
			Z_Registration_Info_UClass_UOrionAudioCaptureAndroid.InnerSingleton,
			StaticRegisterNativesUOrionAudioCaptureAndroid,
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
	return Z_Registration_Info_UClass_UOrionAudioCaptureAndroid.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionAudioCaptureAndroid_NoRegister()
{
	return UOrionAudioCaptureAndroid::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionAudioCaptureAndroid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionAudioCaptureAndroid.h" },
		{ "ModuleRelativePath", "Public/OrionAudioCaptureAndroid.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionAudioCaptureAndroid_AskAndroidPermission, "AskAndroidPermission" }, // 1819804307
		{ &Z_Construct_UFunction_UOrionAudioCaptureAndroid_HasAndroidPermission, "HasAndroidPermission" }, // 1679294529
		{ &Z_Construct_UFunction_UOrionAudioCaptureAndroid_StartAndroidMicrophone, "StartAndroidMicrophone" }, // 1410748721
		{ &Z_Construct_UFunction_UOrionAudioCaptureAndroid_StopAndroidMicrophone, "StopAndroidMicrophone" }, // 1143853314
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionAudioCaptureAndroid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionAudioCaptureAndroid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionVoiceChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAudioCaptureAndroid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionAudioCaptureAndroid_Statics::ClassParams = {
	&UOrionAudioCaptureAndroid::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAudioCaptureAndroid_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionAudioCaptureAndroid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionAudioCaptureAndroid()
{
	if (!Z_Registration_Info_UClass_UOrionAudioCaptureAndroid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionAudioCaptureAndroid.OuterSingleton, Z_Construct_UClass_UOrionAudioCaptureAndroid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionAudioCaptureAndroid.OuterSingleton;
}
UOrionAudioCaptureAndroid::UOrionAudioCaptureAndroid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionAudioCaptureAndroid);
UOrionAudioCaptureAndroid::~UOrionAudioCaptureAndroid() {}
// ********** End Class UOrionAudioCaptureAndroid **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h__Script_OrionVoiceChat_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionAudioCaptureAndroid, UOrionAudioCaptureAndroid::StaticClass, TEXT("UOrionAudioCaptureAndroid"), &Z_Registration_Info_UClass_UOrionAudioCaptureAndroid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionAudioCaptureAndroid), 1915360889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h__Script_OrionVoiceChat_3675770947(TEXT("/Script/OrionVoiceChat"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h__Script_OrionVoiceChat_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h__Script_OrionVoiceChat_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
