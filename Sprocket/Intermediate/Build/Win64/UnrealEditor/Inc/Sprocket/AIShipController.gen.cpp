// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/AIShipController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIShipController() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_AAIShipController_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_AAIShipController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
	SPROCKET_API UClass* Z_Construct_UClass_AAiShipPawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AAIShipController::StaticRegisterNativesAAIShipController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIShipController);
	UClass* Z_Construct_UClass_AAIShipController_NoRegister()
	{
		return AAIShipController::StaticClass();
	}
	struct Z_Construct_UClass_AAIShipController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_turningRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_turningRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHull_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxShields_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxShields;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aiShip_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aiShip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BT_HostileShipAI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BT_HostileShipAI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIShipController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShipController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIShipController.h" },
		{ "ModuleRelativePath", "AIShipController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShipController_Statics::NewProp_turningRadius_MetaData[] = {
		{ "Category", "AIShipController" },
		{ "ModuleRelativePath", "AIShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIShipController_Statics::NewProp_turningRadius = { "turningRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIShipController, turningRadius), METADATA_PARAMS(Z_Construct_UClass_AAIShipController_Statics::NewProp_turningRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShipController_Statics::NewProp_turningRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShipController_Statics::NewProp_acceleration_MetaData[] = {
		{ "Category", "AIShipController" },
		{ "ModuleRelativePath", "AIShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIShipController_Statics::NewProp_acceleration = { "acceleration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIShipController, acceleration), METADATA_PARAMS(Z_Construct_UClass_AAIShipController_Statics::NewProp_acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShipController_Statics::NewProp_acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShipController_Statics::NewProp_maxSpeed_MetaData[] = {
		{ "Category", "AIShipController" },
		{ "ModuleRelativePath", "AIShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIShipController_Statics::NewProp_maxSpeed = { "maxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIShipController, maxSpeed), METADATA_PARAMS(Z_Construct_UClass_AAIShipController_Statics::NewProp_maxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShipController_Statics::NewProp_maxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShipController_Statics::NewProp_maxHull_MetaData[] = {
		{ "Category", "AIShipController" },
		{ "ModuleRelativePath", "AIShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIShipController_Statics::NewProp_maxHull = { "maxHull", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIShipController, maxHull), METADATA_PARAMS(Z_Construct_UClass_AAIShipController_Statics::NewProp_maxHull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShipController_Statics::NewProp_maxHull_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShipController_Statics::NewProp_maxShields_MetaData[] = {
		{ "Category", "AIShipController" },
		{ "ModuleRelativePath", "AIShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIShipController_Statics::NewProp_maxShields = { "maxShields", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIShipController, maxShields), METADATA_PARAMS(Z_Construct_UClass_AAIShipController_Statics::NewProp_maxShields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShipController_Statics::NewProp_maxShields_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShipController_Statics::NewProp_aiShip_MetaData[] = {
		{ "ModuleRelativePath", "AIShipController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIShipController_Statics::NewProp_aiShip = { "aiShip", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIShipController, aiShip), Z_Construct_UClass_AAiShipPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIShipController_Statics::NewProp_aiShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShipController_Statics::NewProp_aiShip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShipController_Statics::NewProp_BT_HostileShipAI_MetaData[] = {
		{ "Category", "AIShipController" },
		{ "ModuleRelativePath", "AIShipController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIShipController_Statics::NewProp_BT_HostileShipAI = { "BT_HostileShipAI", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIShipController, BT_HostileShipAI), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIShipController_Statics::NewProp_BT_HostileShipAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShipController_Statics::NewProp_BT_HostileShipAI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIShipController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShipController_Statics::NewProp_turningRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShipController_Statics::NewProp_acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShipController_Statics::NewProp_maxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShipController_Statics::NewProp_maxHull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShipController_Statics::NewProp_maxShields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShipController_Statics::NewProp_aiShip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShipController_Statics::NewProp_BT_HostileShipAI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIShipController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIShipController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIShipController_Statics::ClassParams = {
		&AAIShipController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIShipController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIShipController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIShipController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShipController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIShipController()
	{
		if (!Z_Registration_Info_UClass_AAIShipController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIShipController.OuterSingleton, Z_Construct_UClass_AAIShipController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIShipController.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<AAIShipController>()
	{
		return AAIShipController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIShipController);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_AIShipController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_AIShipController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIShipController, AAIShipController::StaticClass, TEXT("AAIShipController"), &Z_Registration_Info_UClass_AAIShipController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIShipController), 2614586302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_AIShipController_h_2834685823(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_AIShipController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_AIShipController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
