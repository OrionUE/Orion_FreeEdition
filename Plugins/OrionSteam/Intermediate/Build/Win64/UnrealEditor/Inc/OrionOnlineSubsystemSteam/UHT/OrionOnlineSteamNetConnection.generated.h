// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/OrionOnlineSteamNetConnection.h"

#ifdef ORIONONLINESUBSYSTEMSTEAM_OrionOnlineSteamNetConnection_generated_h
#error "OrionOnlineSteamNetConnection.generated.h already included, missing '#pragma once' in OrionOnlineSteamNetConnection.h"
#endif
#define ORIONONLINESUBSYSTEMSTEAM_OrionOnlineSteamNetConnection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrionOnlineSteamNetConnection *******************************************
ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSteamNetConnection_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOrionOnlineSteamNetConnection(); \
	friend struct Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSteamNetConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionOnlineSteamNetConnection, UIpConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OrionOnlineSubsystemSteam"), Z_Construct_UClass_UOrionOnlineSteamNetConnection_NoRegister) \
	DECLARE_SERIALIZER(UOrionOnlineSteamNetConnection)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionOnlineSteamNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionOnlineSteamNetConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionOnlineSteamNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionOnlineSteamNetConnection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionOnlineSteamNetConnection(UOrionOnlineSteamNetConnection&&) = delete; \
	UOrionOnlineSteamNetConnection(const UOrionOnlineSteamNetConnection&) = delete; \
	NO_API virtual ~UOrionOnlineSteamNetConnection();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h_12_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h_15_INCLASS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionOnlineSteamNetConnection;

// ********** End Class UOrionOnlineSteamNetConnection *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
