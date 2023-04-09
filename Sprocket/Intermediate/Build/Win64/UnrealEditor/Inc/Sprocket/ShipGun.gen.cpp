// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/ShipGun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipGun() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_AShipGun_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_AShipGun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPROCKET_API UClass* Z_Construct_UClass_AShipProjectile_NoRegister();
// End Cross Module References
	void AShipGun::StaticRegisterNativesAShipGun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShipGun);
	UClass* Z_Construct_UClass_AShipGun_NoRegister()
	{
		return AShipGun::StaticClass();
	}
	struct Z_Construct_UClass_AShipGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGunMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGunMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGunMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGunMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGunRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mGunRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGunDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mGunDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGunForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mGunForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGunCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mGunCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mProjectileSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mProjectileSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mProjectileSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mProjectileSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mProjectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShipGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShipGun.h" },
		{ "ModuleRelativePath", "ShipGun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipGun_Statics::NewProp_mGunMesh_MetaData[] = {
		{ "Category", "ShipGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShipGun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipGun_Statics::NewProp_mGunMesh = { "mGunMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipGun, mGunMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipGun_Statics::NewProp_mGunMaterial_MetaData[] = {
		{ "Category", "ShipGun" },
		{ "ModuleRelativePath", "ShipGun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipGun_Statics::NewProp_mGunMaterial = { "mGunMaterial", nullptr, (EPropertyFlags)0x0040000000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipGun, mGunMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipGun_Statics::NewProp_mGunRange_MetaData[] = {
		{ "Category", "ShipGun" },
		{ "Comment", "//Range is the lifespan of the projectiles in seconds\n" },
		{ "ModuleRelativePath", "ShipGun.h" },
		{ "ToolTip", "Range is the lifespan of the projectiles in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShipGun_Statics::NewProp_mGunRange = { "mGunRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipGun, mGunRange), METADATA_PARAMS(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipGun_Statics::NewProp_mGunDamage_MetaData[] = {
		{ "Category", "ShipGun" },
		{ "ModuleRelativePath", "ShipGun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShipGun_Statics::NewProp_mGunDamage = { "mGunDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipGun, mGunDamage), METADATA_PARAMS(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipGun_Statics::NewProp_mGunForce_MetaData[] = {
		{ "Category", "ShipGun" },
		{ "ModuleRelativePath", "ShipGun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShipGun_Statics::NewProp_mGunForce = { "mGunForce", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipGun, mGunForce), METADATA_PARAMS(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipGun_Statics::NewProp_mGunCooldown_MetaData[] = {
		{ "Category", "ShipGun" },
		{ "ModuleRelativePath", "ShipGun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShipGun_Statics::NewProp_mGunCooldown = { "mGunCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipGun, mGunCooldown), METADATA_PARAMS(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::NewProp_mGunCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectileSpeed_MetaData[] = {
		{ "Category", "ShipGun" },
		{ "ModuleRelativePath", "ShipGun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectileSpeed = { "mProjectileSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipGun, mProjectileSpeed), METADATA_PARAMS(Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectileSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectileSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectileSpawn_MetaData[] = {
		{ "Category", "ShipGun" },
		{ "Comment", "//********************************************************************************************************\n//********************************************************************************************************\n//Projectile\n" },
		{ "ModuleRelativePath", "ShipGun.h" },
		{ "ToolTip", "Projectile" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectileSpawn = { "mProjectileSpawn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipGun, mProjectileSpawn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectileSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectileSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectile_MetaData[] = {
		{ "Category", "ShipGun" },
		{ "ModuleRelativePath", "ShipGun.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectile = { "mProjectile", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipGun, mProjectile), Z_Construct_UClass_AShipProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShipGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipGun_Statics::NewProp_mGunMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipGun_Statics::NewProp_mGunMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipGun_Statics::NewProp_mGunRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipGun_Statics::NewProp_mGunDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipGun_Statics::NewProp_mGunForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipGun_Statics::NewProp_mGunCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectileSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectileSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipGun_Statics::NewProp_mProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShipGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShipGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShipGun_Statics::ClassParams = {
		&AShipGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShipGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShipGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShipGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShipGun()
	{
		if (!Z_Registration_Info_UClass_AShipGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShipGun.OuterSingleton, Z_Construct_UClass_AShipGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShipGun.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<AShipGun>()
	{
		return AShipGun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShipGun);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_ShipGun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_ShipGun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShipGun, AShipGun::StaticClass, TEXT("AShipGun"), &Z_Registration_Info_UClass_AShipGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShipGun), 3538680151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_ShipGun_h_629762611(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_ShipGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_ShipGun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
