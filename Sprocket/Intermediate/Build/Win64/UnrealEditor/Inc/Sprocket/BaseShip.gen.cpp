// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/BaseShip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseShip() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_ABaseShip_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_ABaseShip();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
// End Cross Module References
	void ABaseShip::StaticRegisterNativesABaseShip()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseShip);
	UClass* Z_Construct_UClass_ABaseShip_NoRegister()
	{
		return ABaseShip::StaticClass();
	}
	struct Z_Construct_UClass_ABaseShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseShip.h" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseShip_Statics::ClassParams = {
		&ABaseShip::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseShip()
	{
		if (!Z_Registration_Info_UClass_ABaseShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseShip.OuterSingleton, Z_Construct_UClass_ABaseShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseShip.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<ABaseShip>()
	{
		return ABaseShip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseShip);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseShip, ABaseShip::StaticClass, TEXT("ABaseShip"), &Z_Registration_Info_UClass_ABaseShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseShip), 2343774866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShip_h_4235000026(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
