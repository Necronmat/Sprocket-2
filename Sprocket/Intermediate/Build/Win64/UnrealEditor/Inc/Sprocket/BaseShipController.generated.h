// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPROCKET_BaseShipController_generated_h
#error "BaseShipController.generated.h already included, missing '#pragma once' in BaseShipController.h"
#endif
#define SPROCKET_BaseShipController_generated_h

#define FID_Sprocket_Source_Sprocket_BaseShipController_h_17_SPARSE_DATA
#define FID_Sprocket_Source_Sprocket_BaseShipController_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxShield); \
	DECLARE_FUNCTION(execGetCurrentShield); \
	DECLARE_FUNCTION(execGetMaxHull); \
	DECLARE_FUNCTION(execGetCurrentHull); \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execGetCurrentSpeed);


#define FID_Sprocket_Source_Sprocket_BaseShipController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxShield); \
	DECLARE_FUNCTION(execGetCurrentShield); \
	DECLARE_FUNCTION(execGetMaxHull); \
	DECLARE_FUNCTION(execGetCurrentHull); \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execGetCurrentSpeed);


#define FID_Sprocket_Source_Sprocket_BaseShipController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseShipController(); \
	friend struct Z_Construct_UClass_ABaseShipController_Statics; \
public: \
	DECLARE_CLASS(ABaseShipController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(ABaseShipController)


#define FID_Sprocket_Source_Sprocket_BaseShipController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaseShipController(); \
	friend struct Z_Construct_UClass_ABaseShipController_Statics; \
public: \
	DECLARE_CLASS(ABaseShipController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(ABaseShipController)


#define FID_Sprocket_Source_Sprocket_BaseShipController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseShipController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseShipController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseShipController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseShipController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseShipController(ABaseShipController&&); \
	NO_API ABaseShipController(const ABaseShipController&); \
public:


#define FID_Sprocket_Source_Sprocket_BaseShipController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseShipController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseShipController(ABaseShipController&&); \
	NO_API ABaseShipController(const ABaseShipController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseShipController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseShipController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseShipController)


#define FID_Sprocket_Source_Sprocket_BaseShipController_h_14_PROLOG
#define FID_Sprocket_Source_Sprocket_BaseShipController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_BaseShipController_h_17_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_BaseShipController_h_17_RPC_WRAPPERS \
	FID_Sprocket_Source_Sprocket_BaseShipController_h_17_INCLASS \
	FID_Sprocket_Source_Sprocket_BaseShipController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Sprocket_Source_Sprocket_BaseShipController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_BaseShipController_h_17_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_BaseShipController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_BaseShipController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_BaseShipController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPROCKET_API UClass* StaticClass<class ABaseShipController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sprocket_Source_Sprocket_BaseShipController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
