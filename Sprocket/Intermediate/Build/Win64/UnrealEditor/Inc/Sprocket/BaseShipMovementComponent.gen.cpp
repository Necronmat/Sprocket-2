// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/BaseShipMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseShipMovementComponent() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_UBaseShipMovementComponent_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_UBaseShipMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
// End Cross Module References
	void UBaseShipMovementComponent::StaticRegisterNativesUBaseShipMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseShipMovementComponent);
	UClass* Z_Construct_UClass_UBaseShipMovementComponent_NoRegister()
	{
		return UBaseShipMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseShipMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseShipMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseShipMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseShipMovementComponent.h" },
		{ "ModuleRelativePath", "BaseShipMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseShipMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseShipMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseShipMovementComponent_Statics::ClassParams = {
		&UBaseShipMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseShipMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseShipMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseShipMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UBaseShipMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseShipMovementComponent.OuterSingleton, Z_Construct_UClass_UBaseShipMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseShipMovementComponent.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<UBaseShipMovementComponent>()
	{
		return UBaseShipMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseShipMovementComponent);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseShipMovementComponent, UBaseShipMovementComponent::StaticClass, TEXT("UBaseShipMovementComponent"), &Z_Registration_Info_UClass_UBaseShipMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseShipMovementComponent), 4019150197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipMovementComponent_h_3453907678(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
