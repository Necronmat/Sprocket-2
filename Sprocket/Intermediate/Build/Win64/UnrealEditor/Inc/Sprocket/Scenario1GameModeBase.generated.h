// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPROCKET_Scenario1GameModeBase_generated_h
#error "Scenario1GameModeBase.generated.h already included, missing '#pragma once' in Scenario1GameModeBase.h"
#endif
#define SPROCKET_Scenario1GameModeBase_generated_h

#define FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_SPARSE_DATA
#define FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStationSphereOverlap); \
	DECLARE_FUNCTION(execIsGamePaused); \
	DECLARE_FUNCTION(execTogglePaused);


#define FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStationSphereOverlap); \
	DECLARE_FUNCTION(execIsGamePaused); \
	DECLARE_FUNCTION(execTogglePaused);


#define FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScenario1GameModeBase(); \
	friend struct Z_Construct_UClass_AScenario1GameModeBase_Statics; \
public: \
	DECLARE_CLASS(AScenario1GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AScenario1GameModeBase)


#define FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAScenario1GameModeBase(); \
	friend struct Z_Construct_UClass_AScenario1GameModeBase_Statics; \
public: \
	DECLARE_CLASS(AScenario1GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AScenario1GameModeBase)


#define FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScenario1GameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScenario1GameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScenario1GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScenario1GameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScenario1GameModeBase(AScenario1GameModeBase&&); \
	NO_API AScenario1GameModeBase(const AScenario1GameModeBase&); \
public:


#define FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScenario1GameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScenario1GameModeBase(AScenario1GameModeBase&&); \
	NO_API AScenario1GameModeBase(const AScenario1GameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScenario1GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScenario1GameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScenario1GameModeBase)


#define FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_12_PROLOG
#define FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_RPC_WRAPPERS \
	FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_INCLASS \
	FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPROCKET_API UClass* StaticClass<class AScenario1GameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
