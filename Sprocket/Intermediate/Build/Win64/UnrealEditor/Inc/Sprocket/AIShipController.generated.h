// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPROCKET_AIShipController_generated_h
#error "AIShipController.generated.h already included, missing '#pragma once' in AIShipController.h"
#endif
#define SPROCKET_AIShipController_generated_h

#define FID_Sprocket_Source_Sprocket_AIShipController_h_16_SPARSE_DATA
#define FID_Sprocket_Source_Sprocket_AIShipController_h_16_RPC_WRAPPERS
#define FID_Sprocket_Source_Sprocket_AIShipController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Sprocket_Source_Sprocket_AIShipController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIShipController(); \
	friend struct Z_Construct_UClass_AAIShipController_Statics; \
public: \
	DECLARE_CLASS(AAIShipController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AAIShipController)


#define FID_Sprocket_Source_Sprocket_AIShipController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAIShipController(); \
	friend struct Z_Construct_UClass_AAIShipController_Statics; \
public: \
	DECLARE_CLASS(AAIShipController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AAIShipController)


#define FID_Sprocket_Source_Sprocket_AIShipController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIShipController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIShipController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIShipController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIShipController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIShipController(AAIShipController&&); \
	NO_API AAIShipController(const AAIShipController&); \
public:


#define FID_Sprocket_Source_Sprocket_AIShipController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIShipController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIShipController(AAIShipController&&); \
	NO_API AAIShipController(const AAIShipController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIShipController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIShipController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIShipController)


#define FID_Sprocket_Source_Sprocket_AIShipController_h_13_PROLOG
#define FID_Sprocket_Source_Sprocket_AIShipController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_AIShipController_h_16_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_AIShipController_h_16_RPC_WRAPPERS \
	FID_Sprocket_Source_Sprocket_AIShipController_h_16_INCLASS \
	FID_Sprocket_Source_Sprocket_AIShipController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Sprocket_Source_Sprocket_AIShipController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_AIShipController_h_16_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_AIShipController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_AIShipController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_AIShipController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPROCKET_API UClass* StaticClass<class AAIShipController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sprocket_Source_Sprocket_AIShipController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
