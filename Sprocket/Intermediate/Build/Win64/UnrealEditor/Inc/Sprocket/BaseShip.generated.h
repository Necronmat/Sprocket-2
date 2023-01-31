// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPROCKET_BaseShip_generated_h
#error "BaseShip.generated.h already included, missing '#pragma once' in BaseShip.h"
#endif
#define SPROCKET_BaseShip_generated_h

#define FID_Sprocket_Source_Sprocket_BaseShip_h_17_SPARSE_DATA
#define FID_Sprocket_Source_Sprocket_BaseShip_h_17_RPC_WRAPPERS
#define FID_Sprocket_Source_Sprocket_BaseShip_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Sprocket_Source_Sprocket_BaseShip_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseShip(); \
	friend struct Z_Construct_UClass_ABaseShip_Statics; \
public: \
	DECLARE_CLASS(ABaseShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(ABaseShip)


#define FID_Sprocket_Source_Sprocket_BaseShip_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaseShip(); \
	friend struct Z_Construct_UClass_ABaseShip_Statics; \
public: \
	DECLARE_CLASS(ABaseShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(ABaseShip)


#define FID_Sprocket_Source_Sprocket_BaseShip_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseShip(ABaseShip&&); \
	NO_API ABaseShip(const ABaseShip&); \
public:


#define FID_Sprocket_Source_Sprocket_BaseShip_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseShip(ABaseShip&&); \
	NO_API ABaseShip(const ABaseShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseShip)


#define FID_Sprocket_Source_Sprocket_BaseShip_h_14_PROLOG
#define FID_Sprocket_Source_Sprocket_BaseShip_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_BaseShip_h_17_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_BaseShip_h_17_RPC_WRAPPERS \
	FID_Sprocket_Source_Sprocket_BaseShip_h_17_INCLASS \
	FID_Sprocket_Source_Sprocket_BaseShip_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Sprocket_Source_Sprocket_BaseShip_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_BaseShip_h_17_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_BaseShip_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_BaseShip_h_17_INCLASS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_BaseShip_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPROCKET_API UClass* StaticClass<class ABaseShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sprocket_Source_Sprocket_BaseShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
