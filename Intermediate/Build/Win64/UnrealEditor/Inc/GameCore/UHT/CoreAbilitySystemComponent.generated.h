// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/CoreAbilitySystemComponent.h"

#ifdef GAMECORE_CoreAbilitySystemComponent_generated_h
#error "CoreAbilitySystemComponent.generated.h already included, missing '#pragma once' in CoreAbilitySystemComponent.h"
#endif
#define GAMECORE_CoreAbilitySystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreAbilitySystemComponent **********************************************
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UCoreAbilitySystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreAbilitySystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UCoreAbilitySystemComponent)


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreAbilitySystemComponent(UCoreAbilitySystemComponent&&) = delete; \
	UCoreAbilitySystemComponent(const UCoreAbilitySystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreAbilitySystemComponent) \
	NO_API virtual ~UCoreAbilitySystemComponent();


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h_20_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreAbilitySystemComponent;

// ********** End Class UCoreAbilitySystemComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
