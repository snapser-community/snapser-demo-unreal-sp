// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnapserSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAPSERPLUGIN_SnapserSubsystem_generated_h
#error "SnapserSubsystem.generated.h already included, missing '#pragma once' in SnapserSubsystem.h"
#endif
#define SNAPSERPLUGIN_SnapserSubsystem_generated_h

#define FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSignOut); \
	DECLARE_FUNCTION(execOtpSignIn); \
	DECLARE_FUNCTION(execAnonSignIn);


#define FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSnapserSubsystem(); \
	friend struct Z_Construct_UClass_USnapserSubsystem_Statics; \
public: \
	DECLARE_CLASS(USnapserSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnapserPlugin"), NO_API) \
	DECLARE_SERIALIZER(USnapserSubsystem)


#define FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapserSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapserSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapserSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapserSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnapserSubsystem(USnapserSubsystem&&); \
	USnapserSubsystem(const USnapserSubsystem&); \
public: \
	NO_API virtual ~USnapserSubsystem();


#define FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_20_PROLOG
#define FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_23_RPC_WRAPPERS \
	FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_23_INCLASS \
	FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAPSERPLUGIN_API UClass* StaticClass<class USnapserSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h


#define FOREACH_ENUM_SNAPSERSIGNINMODE(op) \
	op(SIGNINMODE_NONE) \
	op(SIGNINMODE_ANON) \
	op(SIGNINMODE_OTP) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
