// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/CrewComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrewComponent() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_UCrewComponent_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_UCrewComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
// End Cross Module References
	void UCrewComponent::StaticRegisterNativesUCrewComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrewComponent);
	UClass* Z_Construct_UClass_UCrewComponent_NoRegister()
	{
		return UCrewComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCrewComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrewComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrewComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CrewComponent.h" },
		{ "ModuleRelativePath", "CrewComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrewComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrewComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrewComponent_Statics::ClassParams = {
		&UCrewComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCrewComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrewComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrewComponent()
	{
		if (!Z_Registration_Info_UClass_UCrewComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrewComponent.OuterSingleton, Z_Construct_UClass_UCrewComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrewComponent.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<UCrewComponent>()
	{
		return UCrewComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrewComponent);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_CrewComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_CrewComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrewComponent, UCrewComponent::StaticClass, TEXT("UCrewComponent"), &Z_Registration_Info_UClass_UCrewComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrewComponent), 653648552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_CrewComponent_h_3585601727(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_CrewComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_CrewComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
