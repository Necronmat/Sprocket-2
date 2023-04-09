// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sprocket/SprocketGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSprocketGameInstance() {}
// Cross Module References
	SPROCKET_API UClass* Z_Construct_UClass_USprocketGameInstance_NoRegister();
	SPROCKET_API UClass* Z_Construct_UClass_USprocketGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Sprocket();
// End Cross Module References
	DEFINE_FUNCTION(USprocketGameInstance::execSetSoundVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USprocketGameInstance::execSetMusicVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMusicVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USprocketGameInstance::execGetSoundVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSoundVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USprocketGameInstance::execGetMusicVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USprocketGameInstance::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_setPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_setPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USprocketGameInstance::execGetPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPaused();
		P_NATIVE_END;
	}
	void USprocketGameInstance::StaticRegisterNativesUSprocketGameInstance()
	{
		UClass* Class = USprocketGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMusicVolume", &USprocketGameInstance::execGetMusicVolume },
			{ "GetPaused", &USprocketGameInstance::execGetPaused },
			{ "GetSoundVolume", &USprocketGameInstance::execGetSoundVolume },
			{ "SetMusicVolume", &USprocketGameInstance::execSetMusicVolume },
			{ "SetPaused", &USprocketGameInstance::execSetPaused },
			{ "SetSoundVolume", &USprocketGameInstance::execSetSoundVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics
	{
		struct SprocketGameInstance_eventGetMusicVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SprocketGameInstance_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SprocketGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USprocketGameInstance, nullptr, "GetMusicVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::SprocketGameInstance_eventGetMusicVolume_Parms), Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics
	{
		struct SprocketGameInstance_eventGetPaused_Parms
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
	void Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SprocketGameInstance_eventGetPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SprocketGameInstance_eventGetPaused_Parms), &Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SprocketGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USprocketGameInstance, nullptr, "GetPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::SprocketGameInstance_eventGetPaused_Parms), Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USprocketGameInstance_GetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USprocketGameInstance_GetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics
	{
		struct SprocketGameInstance_eventGetSoundVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SprocketGameInstance_eventGetSoundVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SprocketGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USprocketGameInstance, nullptr, "GetSoundVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::SprocketGameInstance_eventGetSoundVolume_Parms), Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics
	{
		struct SprocketGameInstance_eventSetMusicVolume_Parms
		{
			float volume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SprocketGameInstance_eventSetMusicVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SprocketGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USprocketGameInstance, nullptr, "SetMusicVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::SprocketGameInstance_eventSetMusicVolume_Parms), Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics
	{
		struct SprocketGameInstance_eventSetPaused_Parms
		{
			bool setPaused;
		};
		static void NewProp_setPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_setPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::NewProp_setPaused_SetBit(void* Obj)
	{
		((SprocketGameInstance_eventSetPaused_Parms*)Obj)->setPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::NewProp_setPaused = { "setPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SprocketGameInstance_eventSetPaused_Parms), &Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::NewProp_setPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::NewProp_setPaused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SprocketGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USprocketGameInstance, nullptr, "SetPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::SprocketGameInstance_eventSetPaused_Parms), Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USprocketGameInstance_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USprocketGameInstance_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics
	{
		struct SprocketGameInstance_eventSetSoundVolume_Parms
		{
			float volume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SprocketGameInstance_eventSetSoundVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SprocketGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USprocketGameInstance, nullptr, "SetSoundVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::SprocketGameInstance_eventSetSoundVolume_Parms), Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USprocketGameInstance);
	UClass* Z_Construct_UClass_USprocketGameInstance_NoRegister()
	{
		return USprocketGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USprocketGameInstance_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USprocketGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Sprocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USprocketGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USprocketGameInstance_GetMusicVolume, "GetMusicVolume" }, // 4098076096
		{ &Z_Construct_UFunction_USprocketGameInstance_GetPaused, "GetPaused" }, // 1689006738
		{ &Z_Construct_UFunction_USprocketGameInstance_GetSoundVolume, "GetSoundVolume" }, // 1761814527
		{ &Z_Construct_UFunction_USprocketGameInstance_SetMusicVolume, "SetMusicVolume" }, // 4290535724
		{ &Z_Construct_UFunction_USprocketGameInstance_SetPaused, "SetPaused" }, // 1923428584
		{ &Z_Construct_UFunction_USprocketGameInstance_SetSoundVolume, "SetSoundVolume" }, // 2419248361
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USprocketGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SprocketGameInstance.h" },
		{ "ModuleRelativePath", "SprocketGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_bPaused_MetaData[] = {
		{ "ModuleRelativePath", "SprocketGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((USprocketGameInstance*)Obj)->bPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USprocketGameInstance), &Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_bPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_bPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_MusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "SprocketGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USprocketGameInstance, MusicVolume), METADATA_PARAMS(Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_MusicVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_MusicVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_SoundVolume_MetaData[] = {
		{ "ModuleRelativePath", "SprocketGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_SoundVolume = { "SoundVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USprocketGameInstance, SoundVolume), METADATA_PARAMS(Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_SoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_SoundVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USprocketGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_bPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_MusicVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USprocketGameInstance_Statics::NewProp_SoundVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USprocketGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USprocketGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USprocketGameInstance_Statics::ClassParams = {
		&USprocketGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USprocketGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USprocketGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USprocketGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USprocketGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USprocketGameInstance()
	{
		if (!Z_Registration_Info_UClass_USprocketGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USprocketGameInstance.OuterSingleton, Z_Construct_UClass_USprocketGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USprocketGameInstance.OuterSingleton;
	}
	template<> SPROCKET_API UClass* StaticClass<USprocketGameInstance>()
	{
		return USprocketGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USprocketGameInstance);
	struct Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USprocketGameInstance, USprocketGameInstance::StaticClass, TEXT("USprocketGameInstance"), &Z_Registration_Info_UClass_USprocketGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USprocketGameInstance), 1631914056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_1934986487(TEXT("/Script/Sprocket"),
		Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sprocket_Source_Sprocket_SprocketGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
