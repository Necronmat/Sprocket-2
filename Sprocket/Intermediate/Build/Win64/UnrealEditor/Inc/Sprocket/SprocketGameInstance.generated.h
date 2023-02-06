// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPROCKET_SprocketGameInstance_generated_h
#error "SprocketGameInstance.generated.h already included, missing '#pragma once' in SprocketGameInstance.h"
#endif
#define SPROCKET_SprocketGameInstance_generated_h

#define FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_SPARSE_DATA
#define FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSoundVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execGetSoundVolume); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execGetPaused);


#define FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSoundVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execGetSoundVolume); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execGetPaused);


#define FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSprocketGameInstance(); \
	friend struct Z_Construct_UClass_USprocketGameInstance_Statics; \
public: \
	DECLARE_CLASS(USprocketGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(USprocketGameInstance)


#define FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSprocketGameInstance(); \
	friend struct Z_Construct_UClass_USprocketGameInstance_Statics; \
public: \
	DECLARE_CLASS(USprocketGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Sprocket"), NO_API) \
	DECLARE_SERIALIZER(USprocketGameInstance)


#define FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USprocketGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USprocketGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USprocketGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USprocketGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USprocketGameInstance(USprocketGameInstance&&); \
	NO_API USprocketGameInstance(const USprocketGameInstance&); \
public:


#define FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USprocketGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USprocketGameInstance(USprocketGameInstance&&); \
	NO_API USprocketGameInstance(const USprocketGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USprocketGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USprocketGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USprocketGameInstance)


#define FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_12_PROLOG
#define FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_RPC_WRAPPERS \
	FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_INCLASS \
	FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_SPARSE_DATA \
	FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPROCKET_API UClass* StaticClass<class USprocketGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sprocket_Source_Sprocket_SprocketGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
