// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/Earth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEarth() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_AEarth_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_AEarth();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
// End Cross Module References
	void AEarth::StaticRegisterNativesAEarth()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEarth);
	UClass* Z_Construct_UClass_AEarth_NoRegister()
	{
		return AEarth::StaticClass();
	}
	struct Z_Construct_UClass_AEarth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarthMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EarthMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarthRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EarthRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarthRotationDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EarthRotationDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsEarthSpinning_MetaData[];
#endif
		static void NewProp_IsEarthSpinning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEarthSpinning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloudMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudRotationDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudRotationDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsCloudSpinning_MetaData[];
#endif
		static void NewProp_IsCloudSpinning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCloudSpinning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEarth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarth_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Earth.h" },
		{ "ModuleRelativePath", "Earth.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarth_Statics::NewProp_EarthMesh_MetaData[] = {
		{ "Category", "Earth" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Earth.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEarth_Statics::NewProp_EarthMesh = { "EarthMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEarth, EarthMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEarth_Statics::NewProp_EarthMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEarth_Statics::NewProp_EarthMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarth_Statics::NewProp_EarthRotationSpeed_MetaData[] = {
		{ "Category", "Earth" },
		{ "ModuleRelativePath", "Earth.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarth_Statics::NewProp_EarthRotationSpeed = { "EarthRotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEarth, EarthRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AEarth_Statics::NewProp_EarthRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEarth_Statics::NewProp_EarthRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarth_Statics::NewProp_EarthRotationDirection_MetaData[] = {
		{ "Category", "Earth" },
		{ "ModuleRelativePath", "Earth.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEarth_Statics::NewProp_EarthRotationDirection = { "EarthRotationDirection", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEarth, EarthRotationDirection), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UClass_AEarth_Statics::NewProp_EarthRotationDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEarth_Statics::NewProp_EarthRotationDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarth_Statics::NewProp_IsEarthSpinning_MetaData[] = {
		{ "Category", "Earth" },
		{ "ModuleRelativePath", "Earth.h" },
	};
#endif
	void Z_Construct_UClass_AEarth_Statics::NewProp_IsEarthSpinning_SetBit(void* Obj)
	{
		((AEarth*)Obj)->IsEarthSpinning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEarth_Statics::NewProp_IsEarthSpinning = { "IsEarthSpinning", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEarth), &Z_Construct_UClass_AEarth_Statics::NewProp_IsEarthSpinning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEarth_Statics::NewProp_IsEarthSpinning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEarth_Statics::NewProp_IsEarthSpinning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarth_Statics::NewProp_CloudMesh_MetaData[] = {
		{ "Category", "Earth" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Earth.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEarth_Statics::NewProp_CloudMesh = { "CloudMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEarth, CloudMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEarth_Statics::NewProp_CloudMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEarth_Statics::NewProp_CloudMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarth_Statics::NewProp_CloudRotationSpeed_MetaData[] = {
		{ "Category", "Earth" },
		{ "ModuleRelativePath", "Earth.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarth_Statics::NewProp_CloudRotationSpeed = { "CloudRotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEarth, CloudRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AEarth_Statics::NewProp_CloudRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEarth_Statics::NewProp_CloudRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarth_Statics::NewProp_CloudRotationDirection_MetaData[] = {
		{ "Category", "Earth" },
		{ "ModuleRelativePath", "Earth.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEarth_Statics::NewProp_CloudRotationDirection = { "CloudRotationDirection", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEarth, CloudRotationDirection), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UClass_AEarth_Statics::NewProp_CloudRotationDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEarth_Statics::NewProp_CloudRotationDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarth_Statics::NewProp_IsCloudSpinning_MetaData[] = {
		{ "Category", "Earth" },
		{ "ModuleRelativePath", "Earth.h" },
	};
#endif
	void Z_Construct_UClass_AEarth_Statics::NewProp_IsCloudSpinning_SetBit(void* Obj)
	{
		((AEarth*)Obj)->IsCloudSpinning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEarth_Statics::NewProp_IsCloudSpinning = { "IsCloudSpinning", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEarth), &Z_Construct_UClass_AEarth_Statics::NewProp_IsCloudSpinning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEarth_Statics::NewProp_IsCloudSpinning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEarth_Statics::NewProp_IsCloudSpinning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEarth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarth_Statics::NewProp_EarthMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarth_Statics::NewProp_EarthRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarth_Statics::NewProp_EarthRotationDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarth_Statics::NewProp_IsEarthSpinning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarth_Statics::NewProp_CloudMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarth_Statics::NewProp_CloudRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarth_Statics::NewProp_CloudRotationDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarth_Statics::NewProp_IsCloudSpinning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEarth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEarth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEarth_Statics::ClassParams = {
		&AEarth::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEarth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEarth_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEarth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEarth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEarth()
	{
		if (!Z_Registration_Info_UClass_AEarth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEarth.OuterSingleton, Z_Construct_UClass_AEarth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEarth.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<AEarth>()
	{
		return AEarth::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEarth);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Earth_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Earth_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEarth, AEarth::StaticClass, TEXT("AEarth"), &Z_Registration_Info_UClass_AEarth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEarth), 2932877184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Earth_h_3967126306(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Earth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Earth_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
