// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/BTTask_FlyToPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FlyToPoint() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_UBTTask_FlyToPoint_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_UBTTask_FlyToPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
// End Cross Module References
	void UBTTask_FlyToPoint::StaticRegisterNativesUBTTask_FlyToPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FlyToPoint);
	UClass* Z_Construct_UClass_UBTTask_FlyToPoint_NoRegister()
	{
		return UBTTask_FlyToPoint::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FlyToPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_acceptableRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_acceptableRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_desiredLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_prevLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_prevLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveRequestId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveRequestId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FlyToPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyToPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_FlyToPoint.h" },
		{ "ModuleRelativePath", "BTTask_FlyToPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_acceptableRadius_MetaData[] = {
		{ "Category", "BTTask_FlyToPoint" },
		{ "ModuleRelativePath", "BTTask_FlyToPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_acceptableRadius = { "acceptableRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyToPoint, acceptableRadius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_acceptableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_acceptableRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_desiredLocation_MetaData[] = {
		{ "ModuleRelativePath", "BTTask_FlyToPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_desiredLocation = { "desiredLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyToPoint, desiredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_desiredLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_desiredLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_prevLocation_MetaData[] = {
		{ "ModuleRelativePath", "BTTask_FlyToPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_prevLocation = { "prevLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyToPoint, prevLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_prevLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_prevLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_moveRequestId_MetaData[] = {
		{ "ModuleRelativePath", "BTTask_FlyToPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_moveRequestId = { "moveRequestId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FlyToPoint, moveRequestId), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_moveRequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_moveRequestId_MetaData)) }; // 2930851505
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FlyToPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_acceptableRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_desiredLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_prevLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyToPoint_Statics::NewProp_moveRequestId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FlyToPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FlyToPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FlyToPoint_Statics::ClassParams = {
		&UBTTask_FlyToPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_FlyToPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyToPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FlyToPoint()
	{
		if (!Z_Registration_Info_UClass_UBTTask_FlyToPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FlyToPoint.OuterSingleton, Z_Construct_UClass_UBTTask_FlyToPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_FlyToPoint.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<UBTTask_FlyToPoint>()
	{
		return UBTTask_FlyToPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FlyToPoint);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BTTask_FlyToPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BTTask_FlyToPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FlyToPoint, UBTTask_FlyToPoint::StaticClass, TEXT("UBTTask_FlyToPoint"), &Z_Registration_Info_UClass_UBTTask_FlyToPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FlyToPoint), 3669519656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BTTask_FlyToPoint_h_772023090(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BTTask_FlyToPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BTTask_FlyToPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
