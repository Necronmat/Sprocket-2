// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/MainMenuControllerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuControllerController() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_AMainMenuControllerController_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_AMainMenuControllerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
// End Cross Module References
	void AMainMenuControllerController::StaticRegisterNativesAMainMenuControllerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuControllerController);
	UClass* Z_Construct_UClass_AMainMenuControllerController_NoRegister()
	{
		return AMainMenuControllerController::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuControllerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuControllerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuControllerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MainMenuControllerController.h" },
		{ "ModuleRelativePath", "MainMenuControllerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuControllerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuControllerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuControllerController_Statics::ClassParams = {
		&AMainMenuControllerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuControllerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuControllerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuControllerController()
	{
		if (!Z_Registration_Info_UClass_AMainMenuControllerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuControllerController.OuterSingleton, Z_Construct_UClass_AMainMenuControllerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainMenuControllerController.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<AMainMenuControllerController>()
	{
		return AMainMenuControllerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuControllerController);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_MainMenuControllerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_MainMenuControllerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuControllerController, AMainMenuControllerController::StaticClass, TEXT("AMainMenuControllerController"), &Z_Registration_Info_UClass_AMainMenuControllerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuControllerController), 4015620947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_MainMenuControllerController_h_3227485659(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_MainMenuControllerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_MainMenuControllerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
