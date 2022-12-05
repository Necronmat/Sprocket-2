// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/SprocketGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSprocketGameModeBase() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_ASprocketGameModeBase_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_ASprocketGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
// End Cross Module References
	void ASprocketGameModeBase::StaticRegisterNativesASprocketGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASprocketGameModeBase);
	UClass* Z_Construct_UClass_ASprocketGameModeBase_NoRegister()
	{
		return ASprocketGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASprocketGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASprocketGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprocketGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SprocketGameModeBase.h" },
		{ "ModuleRelativePath", "SprocketGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASprocketGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASprocketGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASprocketGameModeBase_Statics::ClassParams = {
		&ASprocketGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASprocketGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASprocketGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASprocketGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASprocketGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASprocketGameModeBase.OuterSingleton, Z_Construct_UClass_ASprocketGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASprocketGameModeBase.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<ASprocketGameModeBase>()
	{
		return ASprocketGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASprocketGameModeBase);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_SprocketGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_SprocketGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASprocketGameModeBase, ASprocketGameModeBase::StaticClass, TEXT("ASprocketGameModeBase"), &Z_Registration_Info_UClass_ASprocketGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASprocketGameModeBase), 859241787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_SprocketGameModeBase_h_713629384(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_SprocketGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_SprocketGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
