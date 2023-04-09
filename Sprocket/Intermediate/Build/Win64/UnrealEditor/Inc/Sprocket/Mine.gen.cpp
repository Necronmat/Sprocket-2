// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/Mine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMine() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_AMine_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_AMine();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(AMine::execExplodeMine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExplodeMine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMine::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	void AMine::StaticRegisterNativesAMine()
	{
		UClass* Class = AMine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExplodeMine", &AMine::execExplodeMine },
			{ "OnOverlapBegin", &AMine::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMine_ExplodeMine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMine_ExplodeMine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMine_ExplodeMine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMine, nullptr, "ExplodeMine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMine_ExplodeMine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMine_ExplodeMine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMine_ExplodeMine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMine_ExplodeMine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMine_OnOverlapBegin_Statics
	{
		struct Mine_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Mine_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Mine_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Mine_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Mine_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Mine_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Mine_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Mine_eventOnOverlapBegin_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMine, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::Mine_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMine_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMine_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMine);
	UClass* Z_Construct_UClass_AMine_NoRegister()
	{
		return AMine::StaticClass();
	}
	struct Z_Construct_UClass_AMine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MineMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MineMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MineSphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MineSphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MineTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MineTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MineCountdown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MineCountdown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MineDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MineDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MineMinDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MineMinDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MineInnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MineInnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MineOuterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MineOuterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MineDamageFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MineDamageFalloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMine_ExplodeMine, "ExplodeMine" }, // 553187454
		{ &Z_Construct_UFunction_AMine_OnOverlapBegin, "OnOverlapBegin" }, // 4079696218
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Mine.h" },
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMine_Statics::NewProp_MineMesh_MetaData[] = {
		{ "Category", "Mine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMine_Statics::NewProp_MineMesh = { "MineMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMine, MineMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMine_Statics::NewProp_MineMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::NewProp_MineMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMine_Statics::NewProp_MineSphereComponent_MetaData[] = {
		{ "Category", "Mine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMine_Statics::NewProp_MineSphereComponent = { "MineSphereComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMine, MineSphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMine_Statics::NewProp_MineSphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::NewProp_MineSphereComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMine_Statics::NewProp_MineTimer_MetaData[] = {
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMine_Statics::NewProp_MineTimer = { "MineTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMine, MineTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AMine_Statics::NewProp_MineTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::NewProp_MineTimer_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMine_Statics::NewProp_MineCountdown_MetaData[] = {
		{ "Category", "Mine" },
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMine_Statics::NewProp_MineCountdown = { "MineCountdown", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMine, MineCountdown), METADATA_PARAMS(Z_Construct_UClass_AMine_Statics::NewProp_MineCountdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::NewProp_MineCountdown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMine_Statics::NewProp_MineDamage_MetaData[] = {
		{ "Category", "Mine" },
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMine_Statics::NewProp_MineDamage = { "MineDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMine, MineDamage), METADATA_PARAMS(Z_Construct_UClass_AMine_Statics::NewProp_MineDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::NewProp_MineDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMine_Statics::NewProp_MineMinDamage_MetaData[] = {
		{ "Category", "Mine" },
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMine_Statics::NewProp_MineMinDamage = { "MineMinDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMine, MineMinDamage), METADATA_PARAMS(Z_Construct_UClass_AMine_Statics::NewProp_MineMinDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::NewProp_MineMinDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMine_Statics::NewProp_MineInnerRadius_MetaData[] = {
		{ "Category", "Mine" },
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMine_Statics::NewProp_MineInnerRadius = { "MineInnerRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMine, MineInnerRadius), METADATA_PARAMS(Z_Construct_UClass_AMine_Statics::NewProp_MineInnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::NewProp_MineInnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMine_Statics::NewProp_MineOuterRadius_MetaData[] = {
		{ "Category", "Mine" },
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMine_Statics::NewProp_MineOuterRadius = { "MineOuterRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMine, MineOuterRadius), METADATA_PARAMS(Z_Construct_UClass_AMine_Statics::NewProp_MineOuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::NewProp_MineOuterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMine_Statics::NewProp_MineDamageFalloff_MetaData[] = {
		{ "Category", "Mine" },
		{ "ModuleRelativePath", "Mine.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMine_Statics::NewProp_MineDamageFalloff = { "MineDamageFalloff", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMine, MineDamageFalloff), METADATA_PARAMS(Z_Construct_UClass_AMine_Statics::NewProp_MineDamageFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::NewProp_MineDamageFalloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMine_Statics::NewProp_MineMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMine_Statics::NewProp_MineSphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMine_Statics::NewProp_MineTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMine_Statics::NewProp_MineCountdown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMine_Statics::NewProp_MineDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMine_Statics::NewProp_MineMinDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMine_Statics::NewProp_MineInnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMine_Statics::NewProp_MineOuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMine_Statics::NewProp_MineDamageFalloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMine_Statics::ClassParams = {
		&AMine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMine()
	{
		if (!Z_Registration_Info_UClass_AMine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMine.OuterSingleton, Z_Construct_UClass_AMine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMine.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<AMine>()
	{
		return AMine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMine);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Mine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Mine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMine, AMine::StaticClass, TEXT("AMine"), &Z_Registration_Info_UClass_AMine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMine), 796537442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Mine_h_1460945318(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Mine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Mine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
