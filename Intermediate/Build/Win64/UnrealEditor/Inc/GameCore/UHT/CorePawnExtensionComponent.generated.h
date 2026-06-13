// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CorePawnExtensionComponent.h"

#ifdef GAMECORE_CorePawnExtensionComponent_generated_h
#error "CorePawnExtensionComponent.generated.h already included, missing '#pragma once' in CorePawnExtensionComponent.h"
#endif
#define GAMECORE_CorePawnExtensionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UCoreAbilitySystemComponent;
class UCorePawnExtensionComponent;

// ********** Begin Class UCorePawnExtensionComponent **********************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnExtensionComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execGetCoreAbilitySystemComponent); \
	DECLARE_FUNCTION(execFindPawnExtensionComponent);


GAMECORE_API UClass* Z_Construct_UClass_UCorePawnExtensionComponent_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnExtensionComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCorePawnExtensionComponent(); \
	friend struct Z_Construct_UClass_UCorePawnExtensionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UCorePawnExtensionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCorePawnExtensionComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCorePawnExtensionComponent_NoRegister) \
	DECLARE_SERIALIZER(UCorePawnExtensionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UCorePawnExtensionComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		NETFIELD_REP_END=PawnData	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnExtensionComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCorePawnExtensionComponent(UCorePawnExtensionComponent&&) = delete; \
	UCorePawnExtensionComponent(const UCorePawnExtensionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePawnExtensionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePawnExtensionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorePawnExtensionComponent) \
	NO_API virtual ~UCorePawnExtensionComponent();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnExtensionComponent_h_25_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnExtensionComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnExtensionComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnExtensionComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnExtensionComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCorePawnExtensionComponent;

// ********** End Class UCorePawnExtensionComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnExtensionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
