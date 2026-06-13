// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Session/CoreSessionComponent.h"

#ifdef GAMECORE_CoreSessionComponent_generated_h
#error "CoreSessionComponent.generated.h already included, missing '#pragma once' in CoreSessionComponent.h"
#endif
#define GAMECORE_CoreSessionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCommonSession_SearchResult;
class UCoreExperienceUserFacingDefinition;
class USessionScreeningCondition;

// ********** Begin Class UCoreSessionComponent ****************************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void QuitSession_Implementation(); \
	virtual void JoinInvitedSession_Implementation(UCommonSession_SearchResult* InSessionSearchResult); \
	DECLARE_FUNCTION(execQuitSession); \
	DECLARE_FUNCTION(execJoinInvitedSession);


#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h_19_CALLBACK_WRAPPERS
GAMECORE_API UClass* Z_Construct_UClass_UCoreSessionComponent_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreSessionComponent(); \
	friend struct Z_Construct_UClass_UCoreSessionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UCoreSessionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreSessionComponent, UGameStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreSessionComponent_NoRegister) \
	DECLARE_SERIALIZER(UCoreSessionComponent)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreSessionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreSessionComponent(UCoreSessionComponent&&) = delete; \
	UCoreSessionComponent(const UCoreSessionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSessionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSessionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreSessionComponent) \
	NO_API virtual ~UCoreSessionComponent();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h_16_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h_19_CALLBACK_WRAPPERS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreSessionComponent;

// ********** End Class UCoreSessionComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Session_CoreSessionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
