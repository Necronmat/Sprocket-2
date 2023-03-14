// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/BaseShipController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseShipController() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_ABaseShipController_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_ABaseShipController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
	SPROCKET_API UClass* Z_Construct_UClass_ABaseShip_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_UCrewComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	SPROCKET_API UClass* Z_Construct_UClass_AScenario1GameModeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseShipController::execGetPowerUsage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPowerUsage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseShipController::execGetMaxPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseShipController::execGetMaxShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseShipController::execGetCurrentShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseShipController::execGetMaxHull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseShipController::execGetCurrentHull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseShipController::execGetMaxSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseShipController::execGetCurrentSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeed();
		P_NATIVE_END;
	}
	void ABaseShipController::StaticRegisterNativesABaseShipController()
	{
		UClass* Class = ABaseShipController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentHull", &ABaseShipController::execGetCurrentHull },
			{ "GetCurrentShield", &ABaseShipController::execGetCurrentShield },
			{ "GetCurrentSpeed", &ABaseShipController::execGetCurrentSpeed },
			{ "GetMaxHull", &ABaseShipController::execGetMaxHull },
			{ "GetMaxPower", &ABaseShipController::execGetMaxPower },
			{ "GetMaxShield", &ABaseShipController::execGetMaxShield },
			{ "GetMaxSpeed", &ABaseShipController::execGetMaxSpeed },
			{ "GetPowerUsage", &ABaseShipController::execGetPowerUsage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics
	{
		struct BaseShipController_eventGetCurrentHull_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseShipController_eventGetCurrentHull_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShipController, nullptr, "GetCurrentHull", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::BaseShipController_eventGetCurrentHull_Parms), Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseShipController_GetCurrentHull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShipController_GetCurrentHull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics
	{
		struct BaseShipController_eventGetCurrentShield_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseShipController_eventGetCurrentShield_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShipController, nullptr, "GetCurrentShield", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::BaseShipController_eventGetCurrentShield_Parms), Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseShipController_GetCurrentShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShipController_GetCurrentShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics
	{
		struct BaseShipController_eventGetCurrentSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseShipController_eventGetCurrentSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShipController, nullptr, "GetCurrentSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::BaseShipController_eventGetCurrentSpeed_Parms), Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics
	{
		struct BaseShipController_eventGetMaxHull_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseShipController_eventGetMaxHull_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShipController, nullptr, "GetMaxHull", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::BaseShipController_eventGetMaxHull_Parms), Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseShipController_GetMaxHull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShipController_GetMaxHull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics
	{
		struct BaseShipController_eventGetMaxPower_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseShipController_eventGetMaxPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShipController, nullptr, "GetMaxPower", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::BaseShipController_eventGetMaxPower_Parms), Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseShipController_GetMaxPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShipController_GetMaxPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics
	{
		struct BaseShipController_eventGetMaxShield_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseShipController_eventGetMaxShield_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShipController, nullptr, "GetMaxShield", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::BaseShipController_eventGetMaxShield_Parms), Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseShipController_GetMaxShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShipController_GetMaxShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics
	{
		struct BaseShipController_eventGetMaxSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseShipController_eventGetMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShipController, nullptr, "GetMaxSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::BaseShipController_eventGetMaxSpeed_Parms), Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseShipController_GetMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShipController_GetMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics
	{
		struct BaseShipController_eventGetPowerUsage_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseShipController_eventGetPowerUsage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShipController, nullptr, "GetPowerUsage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::BaseShipController_eventGetPowerUsage_Parms), Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseShipController_GetPowerUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShipController_GetPowerUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseShipController);
	UClass* Z_Construct_UClass_ABaseShipController_NoRegister()
	{
		return ABaseShipController::StaticClass();
	}
	struct Z_Construct_UClass_ABaseShipController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerBaseShip_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerBaseShip;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCrew_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCrew_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mCrew;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaxHull_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMaxHull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaxShields_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMaxShields;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaxPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMaxPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mShipSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mShipSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mShipWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mShipWeight;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrafeCooldownTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrafeCooldownTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseShipController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseShipController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseShipController_GetCurrentHull, "GetCurrentHull" }, // 3655737067
		{ &Z_Construct_UFunction_ABaseShipController_GetCurrentShield, "GetCurrentShield" }, // 3979881434
		{ &Z_Construct_UFunction_ABaseShipController_GetCurrentSpeed, "GetCurrentSpeed" }, // 1444326149
		{ &Z_Construct_UFunction_ABaseShipController_GetMaxHull, "GetMaxHull" }, // 2116329409
		{ &Z_Construct_UFunction_ABaseShipController_GetMaxPower, "GetMaxPower" }, // 1367495711
		{ &Z_Construct_UFunction_ABaseShipController_GetMaxShield, "GetMaxShield" }, // 2304180366
		{ &Z_Construct_UFunction_ABaseShipController_GetMaxSpeed, "GetMaxSpeed" }, // 2623791820
		{ &Z_Construct_UFunction_ABaseShipController_GetPowerUsage, "GetPowerUsage" }, // 2152148625
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BaseShipController.h" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_playerBaseShip_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_playerBaseShip = { "playerBaseShip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, playerBaseShip), Z_Construct_UClass_ABaseShip_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_playerBaseShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_playerBaseShip_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mCrew_Inner = { "mCrew", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCrewComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mCrew_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "Comment", "//********************************************************************************************************\n//********************************************************************************************************\n//Ship Stats\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseShipController.h" },
		{ "ToolTip", "Ship Stats" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mCrew = { "mCrew", nullptr, (EPropertyFlags)0x0040008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mCrew), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mCrew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mCrew_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mAcceleration_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mAcceleration = { "mAcceleration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mAcceleration), METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxSpeed_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxSpeed = { "mMaxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxHull_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxHull = { "mMaxHull", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mMaxHull), METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxHull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxHull_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxShields_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxShields = { "mMaxShields", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mMaxShields), METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxShields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxShields_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxPower_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxPower = { "mMaxPower", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mMaxPower), METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mShipSize_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mShipSize = { "mShipSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mShipSize), METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mShipSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mShipSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mShipWeight_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mShipWeight = { "mShipWeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mShipWeight), METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mShipWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mShipWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mStrafeSpeed_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "Comment", "//Speed of the strafe thrusters\n" },
		{ "ModuleRelativePath", "BaseShipController.h" },
		{ "ToolTip", "Speed of the strafe thrusters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mStrafeSpeed = { "mStrafeSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mStrafeSpeed), METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mStrafeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mStrafeSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mGrappleForce_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mGrappleForce = { "mGrappleForce", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mGrappleForce), METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mGrappleForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mGrappleForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_mGrappleLength_MetaData[] = {
		{ "Category", "BaseShipController" },
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_mGrappleLength = { "mGrappleLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, mGrappleLength), METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mGrappleLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_mGrappleLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_StrafeCooldownTimer_MetaData[] = {
		{ "Comment", "//********************************************************************************************************\n//********************************************************************************************************\n//Timers\n" },
		{ "ModuleRelativePath", "BaseShipController.h" },
		{ "ToolTip", "Timers" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_StrafeCooldownTimer = { "StrafeCooldownTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, StrafeCooldownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_StrafeCooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_StrafeCooldownTimer_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShipController_Statics::NewProp_GameModeRef_MetaData[] = {
		{ "ModuleRelativePath", "BaseShipController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShipController_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseShipController, GameModeRef), Z_Construct_UClass_AScenario1GameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::NewProp_GameModeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::NewProp_GameModeRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseShipController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_playerBaseShip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mCrew_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mCrew,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxHull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxShields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mMaxPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mShipSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mShipWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mStrafeSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mGrappleForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_mGrappleLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_StrafeCooldownTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShipController_Statics::NewProp_GameModeRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseShipController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseShipController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseShipController_Statics::ClassParams = {
		&ABaseShipController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseShipController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseShipController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShipController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseShipController()
	{
		if (!Z_Registration_Info_UClass_ABaseShipController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseShipController.OuterSingleton, Z_Construct_UClass_ABaseShipController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseShipController.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<ABaseShipController>()
	{
		return ABaseShipController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseShipController);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseShipController, ABaseShipController::StaticClass, TEXT("ABaseShipController"), &Z_Registration_Info_UClass_ABaseShipController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseShipController), 4177980697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipController_h_3867975131(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_BaseShipController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
