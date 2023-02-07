// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/Scenario1GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScenario1GameModeBase() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_AScenario1GameModeBase_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_AScenario1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_AStation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AScenario1GameModeBase::execTriggerLandingStationEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_stationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerLandingStationEvent(Z_Param_stationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScenario1GameModeBase::execTriggerApproachStationEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_stationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerApproachStationEvent(Z_Param_stationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScenario1GameModeBase::execTriggerFarStationEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_stationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerFarStationEvent(Z_Param_stationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScenario1GameModeBase::execStationSphereOverlap)
	{
		P_GET_UBOOL(Z_Param_bStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_stationNo);
		P_GET_PROPERTY(FIntProperty,Z_Param_sphereNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StationSphereOverlap(Z_Param_bStart,Z_Param_stationNo,Z_Param_sphereNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScenario1GameModeBase::execIsGamePaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGamePaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScenario1GameModeBase::execTogglePaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TogglePaused();
		P_NATIVE_END;
	}
	void AScenario1GameModeBase::StaticRegisterNativesAScenario1GameModeBase()
	{
		UClass* Class = AScenario1GameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGamePaused", &AScenario1GameModeBase::execIsGamePaused },
			{ "StationSphereOverlap", &AScenario1GameModeBase::execStationSphereOverlap },
			{ "TogglePaused", &AScenario1GameModeBase::execTogglePaused },
			{ "TriggerApproachStationEvent", &AScenario1GameModeBase::execTriggerApproachStationEvent },
			{ "TriggerFarStationEvent", &AScenario1GameModeBase::execTriggerFarStationEvent },
			{ "TriggerLandingStationEvent", &AScenario1GameModeBase::execTriggerLandingStationEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics
	{
		struct Scenario1GameModeBase_eventIsGamePaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Scenario1GameModeBase_eventIsGamePaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Scenario1GameModeBase_eventIsGamePaused_Parms), &Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScenario1GameModeBase, nullptr, "IsGamePaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::Scenario1GameModeBase_eventIsGamePaused_Parms), Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics
	{
		struct Scenario1GameModeBase_eventStationSphereOverlap_Parms
		{
			bool bStart;
			int32 stationNo;
			int32 sphereNo;
		};
		static void NewProp_bStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStart;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stationNo;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_sphereNo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::NewProp_bStart_SetBit(void* Obj)
	{
		((Scenario1GameModeBase_eventStationSphereOverlap_Parms*)Obj)->bStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::NewProp_bStart = { "bStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Scenario1GameModeBase_eventStationSphereOverlap_Parms), &Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::NewProp_bStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::NewProp_stationNo = { "stationNo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Scenario1GameModeBase_eventStationSphereOverlap_Parms, stationNo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::NewProp_sphereNo = { "sphereNo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Scenario1GameModeBase_eventStationSphereOverlap_Parms, sphereNo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::NewProp_bStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::NewProp_stationNo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::NewProp_sphereNo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScenario1GameModeBase, nullptr, "StationSphereOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::Scenario1GameModeBase_eventStationSphereOverlap_Parms), Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScenario1GameModeBase_TogglePaused_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScenario1GameModeBase_TogglePaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScenario1GameModeBase_TogglePaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScenario1GameModeBase, nullptr, "TogglePaused", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScenario1GameModeBase_TogglePaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_TogglePaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScenario1GameModeBase_TogglePaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScenario1GameModeBase_TogglePaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics
	{
		struct Scenario1GameModeBase_eventTriggerApproachStationEvent_Parms
		{
			int32 stationId;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stationId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::NewProp_stationId = { "stationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Scenario1GameModeBase_eventTriggerApproachStationEvent_Parms, stationId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::NewProp_stationId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScenario1GameModeBase, nullptr, "TriggerApproachStationEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::Scenario1GameModeBase_eventTriggerApproachStationEvent_Parms), Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics
	{
		struct Scenario1GameModeBase_eventTriggerFarStationEvent_Parms
		{
			int32 stationId;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stationId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::NewProp_stationId = { "stationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Scenario1GameModeBase_eventTriggerFarStationEvent_Parms, stationId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::NewProp_stationId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScenario1GameModeBase, nullptr, "TriggerFarStationEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::Scenario1GameModeBase_eventTriggerFarStationEvent_Parms), Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics
	{
		struct Scenario1GameModeBase_eventTriggerLandingStationEvent_Parms
		{
			int32 stationId;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stationId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::NewProp_stationId = { "stationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Scenario1GameModeBase_eventTriggerLandingStationEvent_Parms, stationId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::NewProp_stationId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScenario1GameModeBase, nullptr, "TriggerLandingStationEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::Scenario1GameModeBase_eventTriggerLandingStationEvent_Parms), Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScenario1GameModeBase);
	UClass* Z_Construct_UClass_AScenario1GameModeBase_NoRegister()
	{
		return AScenario1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AScenario1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaused_MetaData[];
#endif
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScenarioProgressTracker_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ScenarioProgressTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuCount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseMenuCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_station1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_station1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_station2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_station2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_station3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_station3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StationClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StationClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScenario1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AScenario1GameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScenario1GameModeBase_IsGamePaused, "IsGamePaused" }, // 101576888
		{ &Z_Construct_UFunction_AScenario1GameModeBase_StationSphereOverlap, "StationSphereOverlap" }, // 301022538
		{ &Z_Construct_UFunction_AScenario1GameModeBase_TogglePaused, "TogglePaused" }, // 3322142254
		{ &Z_Construct_UFunction_AScenario1GameModeBase_TriggerApproachStationEvent, "TriggerApproachStationEvent" }, // 4099519057
		{ &Z_Construct_UFunction_AScenario1GameModeBase_TriggerFarStationEvent, "TriggerFarStationEvent" }, // 2697906124
		{ &Z_Construct_UFunction_AScenario1GameModeBase_TriggerLandingStationEvent, "TriggerLandingStationEvent" }, // 2099964653
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Scenario1GameModeBase.h" },
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_bPaused_MetaData[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((AScenario1GameModeBase*)Obj)->bPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AScenario1GameModeBase), &Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_bPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_bPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_ScenarioProgressTracker_MetaData[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_ScenarioProgressTracker = { "ScenarioProgressTracker", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScenario1GameModeBase, ScenarioProgressTracker), METADATA_PARAMS(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_ScenarioProgressTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_ScenarioProgressTracker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_PauseMenuClass_MetaData[] = {
		{ "Category", "Scenario1GameModeBase" },
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_PauseMenuClass = { "PauseMenuClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScenario1GameModeBase, PauseMenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_PauseMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_PauseMenuClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_PauseMenuCount_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_PauseMenuCount = { "PauseMenuCount", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScenario1GameModeBase, PauseMenuCount), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_PauseMenuCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_PauseMenuCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station1_MetaData[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station1 = { "station1", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScenario1GameModeBase, station1), Z_Construct_UClass_AStation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station2_MetaData[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station2 = { "station2", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScenario1GameModeBase, station2), Z_Construct_UClass_AStation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station3_MetaData[] = {
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station3 = { "station3", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScenario1GameModeBase, station3), Z_Construct_UClass_AStation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_StationClass_MetaData[] = {
		{ "Category", "Scenario1GameModeBase" },
		{ "ModuleRelativePath", "Scenario1GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_StationClass = { "StationClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScenario1GameModeBase, StationClass), Z_Construct_UClass_AStation_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_StationClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_StationClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScenario1GameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_bPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_ScenarioProgressTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_PauseMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_PauseMenuCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_station3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenario1GameModeBase_Statics::NewProp_StationClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScenario1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScenario1GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AScenario1GameModeBase_Statics::ClassParams = {
		&AScenario1GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AScenario1GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AScenario1GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AScenario1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScenario1GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AScenario1GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScenario1GameModeBase.OuterSingleton, Z_Construct_UClass_AScenario1GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AScenario1GameModeBase.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<AScenario1GameModeBase>()
	{
		return AScenario1GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScenario1GameModeBase);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AScenario1GameModeBase, AScenario1GameModeBase::StaticClass, TEXT("AScenario1GameModeBase"), &Z_Registration_Info_UClass_AScenario1GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScenario1GameModeBase), 1620346808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_324428726(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_Scenario1GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
