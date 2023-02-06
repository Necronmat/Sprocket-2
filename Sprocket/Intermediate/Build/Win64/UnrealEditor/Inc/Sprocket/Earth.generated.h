// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPROCKET_Earth_generated_h
#error "Earth.generated.h already included, missing '#pragma once' in Earth.h"
#endif
#define SPROCKET_Earth_generated_h

#define FID_Sprocket_Source_Sprocket_Earth_h_12_SPARSE_DATA
#define FID_Sprocket_Source_Sprocket_Earth_h_12_RPC_WRAPPERS
#define FID_Sprocket_Source_Sprocket_Earth_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Sprocket_Source_Sprocket_Earth_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEarth(); \
	friend struct Z_Construct_UClass_AEarth_Statics; \
public: \
	DECLARE_CLASS(AEarth, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AEarth)


#define FID_Sprocket_Source_Sprocket_Earth_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEarth(); \
	friend struct Z_Construct_UClass_AEarth_Statics; \
public: \
	DECLARE_CLASS(AEarth, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AEarth)


#define FID_Sprocket_Source_Sprocket_Earth_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEarth(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEarth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEarth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEarth); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEarth(AEarth&&); \
	NO_API AEarth(const AEarth&); \
public:


#define FID_Sprocket_Source_Sprocket_Earth_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEarth(AEarth&&); \
	NO_API AEarth(const AEarth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEarth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEarth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEarth)


#define FID_Sprocket_Source_Sprocket_Earth_h_9_PROLOG
#define FID_Sprocket_Source_Sprocket_Earth_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_Earth_h_12_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_Earth_h_12_RPC_WRAPPERS \
	FID_Sprocket_Source_Sprocket_Earth_h_12_INCLASS \
	FID_Sprocket_Source_Sprocket_Earth_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Sprocket_Source_Sprocket_Earth_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_Earth_h_12_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_Earth_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_Earth_h_12_INCLASS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_Earth_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPROCKET_API UClass* StaticClass<class AEarth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sprocket_Source_Sprocket_Earth_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
