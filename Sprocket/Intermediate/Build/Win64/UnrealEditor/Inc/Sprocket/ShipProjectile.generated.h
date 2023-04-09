// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SPROCKET_ShipProjectile_generated_h
#error "ShipProjectile.generated.h already included, missing '#pragma once' in ShipProjectile.h"
#endif
#define SPROCKET_ShipProjectile_generated_h

#define FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_SPARSE_DATA
#define FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShipProjectile(); \
	friend struct Z_Construct_UClass_AShipProjectile_Statics; \
public: \
	DECLARE_CLASS(AShipProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AShipProjectile)


#define FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAShipProjectile(); \
	friend struct Z_Construct_UClass_AShipProjectile_Statics; \
public: \
	DECLARE_CLASS(AShipProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AShipProjectile)


#define FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShipProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShipProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShipProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShipProjectile(AShipProjectile&&); \
	NO_API AShipProjectile(const AShipProjectile&); \
public:


#define FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShipProjectile(AShipProjectile&&); \
	NO_API AShipProjectile(const AShipProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShipProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShipProjectile)


#define FID_Sprocket_Source_Sprocket_ShipProjectile_h_11_PROLOG
#define FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_RPC_WRAPPERS \
	FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_INCLASS \
	FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_ShipProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPROCKET_API UClass* StaticClass<class AShipProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sprocket_Source_Sprocket_ShipProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
