// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/AiShipPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAiShipPawn() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_AAiShipPawn_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_AAiShipPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPROCKET_API UClass* Z_Construct_UClass_AShipGun_NoRegister();
// End Cross Module References
	void AAiShipPawn::StaticRegisterNativesAAiShipPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAiShipPawn);
	UClass* Z_Construct_UClass_AAiShipPawn_NoRegister()
	{
		return AAiShipPawn::StaticClass();
	}
	struct Z_Construct_UClass_AAiShipPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mBaseGun_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mBaseGun;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGuns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGuns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mGuns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseHull_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHull;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAiShipPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiShipPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AiShipPawn.h" },
		{ "ModuleRelativePath", "AiShipPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiShipPawn_Statics::NewProp_ShipMesh_MetaData[] = {
		{ "Category", "AiShipPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AiShipPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAiShipPawn_Statics::NewProp_ShipMesh = { "ShipMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiShipPawn, ShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAiShipPawn_Statics::NewProp_ShipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAiShipPawn_Statics::NewProp_ShipMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mBaseGun_MetaData[] = {
		{ "Category", "AiShipPawn" },
		{ "ModuleRelativePath", "AiShipPawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mBaseGun = { "mBaseGun", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiShipPawn, mBaseGun), Z_Construct_UClass_AShipGun_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mBaseGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mBaseGun_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mGuns_Inner = { "mGuns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AShipGun_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mGuns_MetaData[] = {
		{ "Category", "AiShipPawn" },
		{ "ModuleRelativePath", "AiShipPawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mGuns = { "mGuns", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiShipPawn, mGuns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mGuns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mGuns_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiShipPawn_Statics::NewProp_BaseHull_MetaData[] = {
		{ "Category", "AiShipPawn" },
		{ "ModuleRelativePath", "AiShipPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAiShipPawn_Statics::NewProp_BaseHull = { "BaseHull", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiShipPawn, BaseHull), METADATA_PARAMS(Z_Construct_UClass_AAiShipPawn_Statics::NewProp_BaseHull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAiShipPawn_Statics::NewProp_BaseHull_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAiShipPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiShipPawn_Statics::NewProp_ShipMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mBaseGun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mGuns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiShipPawn_Statics::NewProp_mGuns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiShipPawn_Statics::NewProp_BaseHull,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAiShipPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAiShipPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAiShipPawn_Statics::ClassParams = {
		&AAiShipPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAiShipPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAiShipPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAiShipPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAiShipPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAiShipPawn()
	{
		if (!Z_Registration_Info_UClass_AAiShipPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAiShipPawn.OuterSingleton, Z_Construct_UClass_AAiShipPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAiShipPawn.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<AAiShipPawn>()
	{
		return AAiShipPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAiShipPawn);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_AiShipPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_AiShipPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAiShipPawn, AAiShipPawn::StaticClass, TEXT("AAiShipPawn"), &Z_Registration_Info_UClass_AAiShipPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAiShipPawn), 274036166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_AiShipPawn_h_3983211354(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_AiShipPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_AiShipPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
