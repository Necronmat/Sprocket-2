// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/BaseShipController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseShipController() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_ABaseShipController_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_ABaseShipController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
// End Cross Module References
	void ABaseShipController::StaticRegisterNativesABaseShipController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseShipController);
	UClass* Z_Construct_UClass_ABaseShipController_NoRegister()
	{
		return ABaseShipController::StaticClass();
	}
	struct Z_Construct_UClass_ABaseShipController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseShipController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BaseShipController.h" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseShipController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseShipController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseShipController_Statics::ClassParams = {
		&ABaseShipController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseShipController()
	{
		if (!Z_Registration_Info_UClass_ABaseShipController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseShipController.OuterSingleton, Z_Construct_UClass_ABaseShipController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseShipController.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<ABaseShipController>()
	{
		return ABaseShipController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseShipController);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseShipController, ABaseShipController::StaticClass, TEXT("ABaseShipController"), &Z_Registration_Info_UClass_ABaseShipController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseShipController), 3375429310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipController_h_4219252155(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
