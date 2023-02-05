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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPROCKET_API UClass* Z_Construct_UClass_AShipGun_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mShipMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mShipMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaxShields_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMaxShields;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaxHull_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMaxHull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mShipSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mShipSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mShipWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mShipWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaxPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMaxPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mStrafeSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mStrafeSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGrappleForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mGrappleForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGrappleLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mGrappleLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mBaseGun_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mBaseGun;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGuns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGuns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mGuns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipMesh_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "Comment", "//********************************************************************************************************\n//********************************************************************************************************\n//BLueprint componenets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseShip.h" },
		{ "ToolTip", "BLueprint componenets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipMesh = { "mShipMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mSpringArm_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mSpringArm = { "mSpringArm", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mCamera_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mCamera = { "mCamera", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mCable_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mCable = { "mCable", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mCable), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mCable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mCable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mAcceleration_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "Comment", "//********************************************************************************************************\n//********************************************************************************************************\n//Ship Stats\n" },
		{ "ModuleRelativePath", "BaseShip.h" },
		{ "ToolTip", "Ship Stats" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mAcceleration = { "mAcceleration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mAcceleration), METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxSpeed_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxSpeed = { "mMaxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxShields_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxShields = { "mMaxShields", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mMaxShields), METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxShields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxShields_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxHull_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxHull = { "mMaxHull", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mMaxHull), METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxHull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxHull_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipSize_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipSize = { "mShipSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mShipSize), METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipWeight_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipWeight = { "mShipWeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mShipWeight), METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxPower_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxPower = { "mMaxPower", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mMaxPower), METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mStrafeSpeed_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "Comment", "//Speed of the strafe thrusters\n" },
		{ "ModuleRelativePath", "BaseShip.h" },
		{ "ToolTip", "Speed of the strafe thrusters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mStrafeSpeed = { "mStrafeSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mStrafeSpeed), METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mStrafeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mStrafeSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mGrappleForce_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mGrappleForce = { "mGrappleForce", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mGrappleForce), METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mGrappleForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mGrappleForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mGrappleLength_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mGrappleLength = { "mGrappleLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mGrappleLength), METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mGrappleLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mGrappleLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mBaseGun_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "Comment", "//********************************************************************************************************\n//********************************************************************************************************\n//Shooting\n" },
		{ "ModuleRelativePath", "BaseShip.h" },
		{ "ToolTip", "Shooting" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mBaseGun = { "mBaseGun", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mBaseGun), Z_Construct_UClass_AShipGun_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mBaseGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mBaseGun_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mGuns_Inner = { "mGuns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AShipGun_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShip_Statics::NewProp_mGuns_MetaData[] = {
		{ "Category", "BaseShip" },
		{ "ModuleRelativePath", "BaseShip.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_mGuns = { "mGuns", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShip, mGuns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseShip_Statics::NewProp_mGuns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::NewProp_mGuns_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mCable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxShields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxHull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mShipWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mMaxPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mStrafeSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mGrappleForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mGrappleLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mBaseGun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mGuns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_mGuns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseShip_Statics::ClassParams = {
		&ABaseShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::PropPointers),
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
		{ Z_Construct_UClass_ABaseShip, ABaseShip::StaticClass, TEXT("ABaseShip"), &Z_Registration_Info_UClass_ABaseShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseShip), 2269076870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShip_h_3250169727(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
