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
#ifdef SPROCKET_Mine_generated_h
#error "Mine.generated.h already included, missing '#pragma once' in Mine.h"
#endif
#define SPROCKET_Mine_generated_h

#define FID_Sprocket_Source_Sprocket_Mine_h_13_SPARSE_DATA
#define FID_Sprocket_Source_Sprocket_Mine_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExplodeMine); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Sprocket_Source_Sprocket_Mine_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExplodeMine); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Sprocket_Source_Sprocket_Mine_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMine(); \
	friend struct Z_Construct_UClass_AMine_Statics; \
public: \
	DECLARE_CLASS(AMine, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AMine)


#define FID_Sprocket_Source_Sprocket_Mine_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMine(); \
	friend struct Z_Construct_UClass_AMine_Statics; \
public: \
	DECLARE_CLASS(AMine, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(AMine)


#define FID_Sprocket_Source_Sprocket_Mine_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMine(AMine&&); \
	NO_API AMine(const AMine&); \
public:


#define FID_Sprocket_Source_Sprocket_Mine_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMine(AMine&&); \
	NO_API AMine(const AMine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMine)


#define FID_Sprocket_Source_Sprocket_Mine_h_10_PROLOG
#define FID_Sprocket_Source_Sprocket_Mine_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_Mine_h_13_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_Mine_h_13_RPC_WRAPPERS \
	FID_Sprocket_Source_Sprocket_Mine_h_13_INCLASS \
	FID_Sprocket_Source_Sprocket_Mine_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Sprocket_Source_Sprocket_Mine_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_Mine_h_13_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_Mine_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_Mine_h_13_INCLASS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_Mine_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPROCKET_API UClass* StaticClass<class AMine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sprocket_Source_Sprocket_Mine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
