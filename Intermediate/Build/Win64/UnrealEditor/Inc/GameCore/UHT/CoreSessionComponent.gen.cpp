// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Session/CoreSessionComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreSessionComponent() {}

// ********** Begin Cross Module References ********************************************************
COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchResult_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceUserFacingDefinition_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreSessionComponent();
GAMECORE_API UClass* Z_Construct_UClass_UCoreSessionComponent_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_USessionScreeningCondition_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreSessionComponent Function CreateSession *****************************
struct CoreSessionComponent_eventCreateSession_Parms
{
	UCoreExperienceUserFacingDefinition* InGameExperience;
};
static FName NAME_UCoreSessionComponent_CreateSession = FName(TEXT("CreateSession"));
void UCoreSessionComponent::CreateSession(UCoreExperienceUserFacingDefinition* InGameExperience)
{
	CoreSessionComponent_eventCreateSession_Parms Parms;
	Parms.InGameExperience=InGameExperience;
	UFunction* Func = FindFunctionChecked(NAME_UCoreSessionComponent_CreateSession);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Session/CoreSessionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics::NewProp_InGameExperience = { "InGameExperience", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreSessionComponent_eventCreateSession_Parms, InGameExperience), Z_Construct_UClass_UCoreExperienceUserFacingDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics::NewProp_InGameExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreSessionComponent, nullptr, "CreateSession", Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics::PropPointers), sizeof(CoreSessionComponent_eventCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CoreSessionComponent_eventCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreSessionComponent_CreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreSessionComponent_CreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCoreSessionComponent Function CreateSession *******************************

// ********** Begin Class UCoreSessionComponent Function JoinInvitedSession ************************
struct CoreSessionComponent_eventJoinInvitedSession_Parms
{
	UCommonSession_SearchResult* InSessionSearchResult;
};
static FName NAME_UCoreSessionComponent_JoinInvitedSession = FName(TEXT("JoinInvitedSession"));
void UCoreSessionComponent::JoinInvitedSession(UCommonSession_SearchResult* InSessionSearchResult)
{
	UFunction* Func = FindFunctionChecked(NAME_UCoreSessionComponent_JoinInvitedSession);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CoreSessionComponent_eventJoinInvitedSession_Parms Parms;
		Parms.InSessionSearchResult=InSessionSearchResult;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		JoinInvitedSession_Implementation(InSessionSearchResult);
	}
}
struct Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Session/CoreSessionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSessionSearchResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics::NewProp_InSessionSearchResult = { "InSessionSearchResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreSessionComponent_eventJoinInvitedSession_Parms, InSessionSearchResult), Z_Construct_UClass_UCommonSession_SearchResult_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics::NewProp_InSessionSearchResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreSessionComponent, nullptr, "JoinInvitedSession", Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics::PropPointers), sizeof(CoreSessionComponent_eventJoinInvitedSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CoreSessionComponent_eventJoinInvitedSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreSessionComponent::execJoinInvitedSession)
{
	P_GET_OBJECT(UCommonSession_SearchResult,Z_Param_InSessionSearchResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinInvitedSession_Implementation(Z_Param_InSessionSearchResult);
	P_NATIVE_END;
}
// ********** End Class UCoreSessionComponent Function JoinInvitedSession **************************

// ********** Begin Class UCoreSessionComponent Function JoinSession *******************************
struct CoreSessionComponent_eventJoinSession_Parms
{
	UCommonSession_SearchResult* InSessionSearchResult;
};
static FName NAME_UCoreSessionComponent_JoinSession = FName(TEXT("JoinSession"));
void UCoreSessionComponent::JoinSession(UCommonSession_SearchResult* InSessionSearchResult)
{
	CoreSessionComponent_eventJoinSession_Parms Parms;
	Parms.InSessionSearchResult=InSessionSearchResult;
	UFunction* Func = FindFunctionChecked(NAME_UCoreSessionComponent_JoinSession);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Session/CoreSessionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSessionSearchResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics::NewProp_InSessionSearchResult = { "InSessionSearchResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreSessionComponent_eventJoinSession_Parms, InSessionSearchResult), Z_Construct_UClass_UCommonSession_SearchResult_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics::NewProp_InSessionSearchResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreSessionComponent, nullptr, "JoinSession", Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics::PropPointers), sizeof(CoreSessionComponent_eventJoinSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CoreSessionComponent_eventJoinSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreSessionComponent_JoinSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreSessionComponent_JoinSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCoreSessionComponent Function JoinSession *********************************

// ********** Begin Class UCoreSessionComponent Function QuickStart ********************************
struct CoreSessionComponent_eventQuickStart_Parms
{
	TArray<USessionScreeningCondition*> InSessionScreeningConditions;
};
static FName NAME_UCoreSessionComponent_QuickStart = FName(TEXT("QuickStart"));
void UCoreSessionComponent::QuickStart(TArray<USessionScreeningCondition*> const& InSessionScreeningConditions)
{
	CoreSessionComponent_eventQuickStart_Parms Parms;
	Parms.InSessionScreeningConditions=InSessionScreeningConditions;
	UFunction* Func = FindFunctionChecked(NAME_UCoreSessionComponent_QuickStart);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Session/CoreSessionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSessionScreeningConditions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSessionScreeningConditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSessionScreeningConditions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::NewProp_InSessionScreeningConditions_Inner = { "InSessionScreeningConditions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USessionScreeningCondition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::NewProp_InSessionScreeningConditions = { "InSessionScreeningConditions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreSessionComponent_eventQuickStart_Parms, InSessionScreeningConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSessionScreeningConditions_MetaData), NewProp_InSessionScreeningConditions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::NewProp_InSessionScreeningConditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::NewProp_InSessionScreeningConditions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreSessionComponent, nullptr, "QuickStart", Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::PropPointers), sizeof(CoreSessionComponent_eventQuickStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CoreSessionComponent_eventQuickStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreSessionComponent_QuickStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreSessionComponent_QuickStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCoreSessionComponent Function QuickStart **********************************

// ********** Begin Class UCoreSessionComponent Function QuitSession *******************************
static FName NAME_UCoreSessionComponent_QuitSession = FName(TEXT("QuitSession"));
void UCoreSessionComponent::QuitSession()
{
	UFunction* Func = FindFunctionChecked(NAME_UCoreSessionComponent_QuitSession);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		QuitSession_Implementation();
	}
}
struct Z_Construct_UFunction_UCoreSessionComponent_QuitSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Session/CoreSessionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessionComponent_QuitSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreSessionComponent, nullptr, "QuitSession", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessionComponent_QuitSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreSessionComponent_QuitSession_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCoreSessionComponent_QuitSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreSessionComponent_QuitSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreSessionComponent::execQuitSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuitSession_Implementation();
	P_NATIVE_END;
}
// ********** End Class UCoreSessionComponent Function QuitSession *********************************

// ********** Begin Class UCoreSessionComponent ****************************************************
void UCoreSessionComponent::StaticRegisterNativesUCoreSessionComponent()
{
	UClass* Class = UCoreSessionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "JoinInvitedSession", &UCoreSessionComponent::execJoinInvitedSession },
		{ "QuitSession", &UCoreSessionComponent::execQuitSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreSessionComponent;
UClass* UCoreSessionComponent::GetPrivateStaticClass()
{
	using TClass = UCoreSessionComponent;
	if (!Z_Registration_Info_UClass_UCoreSessionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreSessionComponent"),
			Z_Registration_Info_UClass_UCoreSessionComponent.InnerSingleton,
			StaticRegisterNativesUCoreSessionComponent,
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
	return Z_Registration_Info_UClass_UCoreSessionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreSessionComponent_NoRegister()
{
	return UCoreSessionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreSessionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Session/CoreSessionComponent.h" },
		{ "ModuleRelativePath", "Public/Session/CoreSessionComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreSessionComponent_CreateSession, "CreateSession" }, // 319159507
		{ &Z_Construct_UFunction_UCoreSessionComponent_JoinInvitedSession, "JoinInvitedSession" }, // 2887689472
		{ &Z_Construct_UFunction_UCoreSessionComponent_JoinSession, "JoinSession" }, // 797849671
		{ &Z_Construct_UFunction_UCoreSessionComponent_QuickStart, "QuickStart" }, // 2953449214
		{ &Z_Construct_UFunction_UCoreSessionComponent_QuitSession, "QuitSession" }, // 3007548787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreSessionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreSessionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreSessionComponent_Statics::ClassParams = {
	&UCoreSessionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreSessionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreSessionComponent()
{
	if (!Z_Registration_Info_UClass_UCoreSessionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreSessionComponent.OuterSingleton, Z_Construct_UClass_UCoreSessionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreSessionComponent.OuterSingleton;
}
UCoreSessionComponent::UCoreSessionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreSessionComponent);
UCoreSessionComponent::~UCoreSessionComponent() {}
// ********** End Class UCoreSessionComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreSessionComponent, UCoreSessionComponent::StaticClass, TEXT("UCoreSessionComponent"), &Z_Registration_Info_UClass_UCoreSessionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreSessionComponent), 1003827051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h__Script_GameCore_119930890(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
