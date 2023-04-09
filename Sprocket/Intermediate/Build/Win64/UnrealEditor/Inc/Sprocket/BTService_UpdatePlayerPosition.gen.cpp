// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/BTService_UpdatePlayerPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UpdatePlayerPosition() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_UBTService_UpdatePlayerPosition_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_UBTService_UpdatePlayerPosition();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
// End Cross Module References
	void UBTService_UpdatePlayerPosition::StaticRegisterNativesUBTService_UpdatePlayerPosition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_UpdatePlayerPosition);
	UClass* Z_Construct_UClass_UBTService_UpdatePlayerPosition_NoRegister()
	{
		return UBTService_UpdatePlayerPosition::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_UpdatePlayerPosition.h" },
		{ "ModuleRelativePath", "BTService_UpdatePlayerPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdatePlayerPosition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::ClassParams = {
		&UBTService_UpdatePlayerPosition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_UpdatePlayerPosition()
	{
		if (!Z_Registration_Info_UClass_UBTService_UpdatePlayerPosition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_UpdatePlayerPosition.OuterSingleton, Z_Construct_UClass_UBTService_UpdatePlayerPosition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_UpdatePlayerPosition.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<UBTService_UpdatePlayerPosition>()
	{
		return UBTService_UpdatePlayerPosition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UpdatePlayerPosition);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BTService_UpdatePlayerPosition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BTService_UpdatePlayerPosition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_UpdatePlayerPosition, UBTService_UpdatePlayerPosition::StaticClass, TEXT("UBTService_UpdatePlayerPosition"), &Z_Registration_Info_UClass_UBTService_UpdatePlayerPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_UpdatePlayerPosition), 3572294766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BTService_UpdatePlayerPosition_h_1909425522(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BTService_UpdatePlayerPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BTService_UpdatePlayerPosition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
