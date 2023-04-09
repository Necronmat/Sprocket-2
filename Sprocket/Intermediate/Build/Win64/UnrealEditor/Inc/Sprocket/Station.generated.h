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
#ifdef SPROCKET_Station_generated_h
#error "Station.generated.h already included, missing '#pragma once' in Station.h"
#endif
#define SPROCKET_Station_generated_h

#define FID_Sprocket_Source_Sprocket_Station_h_15_SPARSE_DATA
#define FID_Sprocket_Source_Sprocket_Station_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLandingOverlapEnd); \
	DECLARE_FUNCTION(execOnApproachOverlapEnd); \
	DECLARE_FUNCTION(execOnFarOverlapEnd); \
	DECLARE_FUNCTION(execOnLandingOverlapBegin); \
	DECLARE_FUNCTION(execOnApproachOverlapBegin); \
	DECLARE_FUNCTION(execOnFarOverlapBegin); \
	DECLARE_FUNCTION(execGetIsTarget);


#define FID_Sprocket_Source_Sprocket_Station_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLandingOverlapEnd); \
	DECLARE_FUNCTION(execOnApproachOverlapEnd); \
	DECLARE_FUNCTION(execOnFarOverlapEnd); \
	DECLARE_FUNCTION(execOnLandingOverlapBegin); \
	DECLARE_FUNCTION(execOnApproachOverlapBegin); \
	DECLARE_FUNCTION(execOnFarOverlapBegin); \
	DECLARE_FUNCTION(execGetIsTarget);


#define FID_Sprocket_Source_Sprocket_Station_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStation(); \
	friend struct Z_Construct_UClass_AStation_Statics; \
public: \
	DECLARE_CLASS(AStation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AStation)


#define FID_Sprocket_Source_Sprocket_Station_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAStation(); \
	friend struct Z_Construct_UClass_AStation_Statics; \
public: \
	DECLARE_CLASS(AStation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AStation)


#define FID_Sprocket_Source_Sprocket_Station_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStation(AStation&&); \
	NO_API AStation(const AStation&); \
public:


#define FID_Sprocket_Source_Sprocket_Station_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStation(AStation&&); \
	NO_API AStation(const AStation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStation)


#define FID_Sprocket_Source_Sprocket_Station_h_12_PROLOG
#define FID_Sprocket_Source_Sprocket_Station_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_Station_h_15_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_Station_h_15_RPC_WRAPPERS \
	FID_Sprocket_Source_Sprocket_Station_h_15_INCLASS \
	FID_Sprocket_Source_Sprocket_Station_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Sprocket_Source_Sprocket_Station_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_Station_h_15_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_Station_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_Station_h_15_INCLASS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_Station_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPROCKET_API UClass* StaticClass<class AStation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sprocket_Source_Sprocket_Station_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
