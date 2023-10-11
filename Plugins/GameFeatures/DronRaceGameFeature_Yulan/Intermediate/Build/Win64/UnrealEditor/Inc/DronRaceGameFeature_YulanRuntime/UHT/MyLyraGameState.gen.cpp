// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/MyLyraGameState.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLyraGameState() {}
// Cross Module References
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_AMyLyraGameState();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_AMyLyraGameState_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameState();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	DEFINE_FUNCTION(AMyLyraGameState::execDecreaseGameTimeFaster)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseGameTimeFaster();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyLyraGameState::execDecreaseGameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseGameTime();
		P_NATIVE_END;
	}
	void AMyLyraGameState::StaticRegisterNativesAMyLyraGameState()
	{
		UClass* Class = AMyLyraGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseGameTime", &AMyLyraGameState::execDecreaseGameTime },
			{ "DecreaseGameTimeFaster", &AMyLyraGameState::execDecreaseGameTimeFaster },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLyraGameState, nullptr, "DecreaseGameTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTimeFaster_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTimeFaster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTimeFaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLyraGameState, nullptr, "DecreaseGameTimeFaster", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTimeFaster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTimeFaster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTimeFaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTimeFaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyLyraGameState);
	UClass* Z_Construct_UClass_AMyLyraGameState_NoRegister()
	{
		return AMyLyraGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMyLyraGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneBlood_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DroneBlood;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KilledHallin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KilledHallin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectedTreasure_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollectedTreasure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Difficulty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyModeDecreaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EasyModeDecreaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardModeDecreaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HardModeDecreaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyModeDecreaseBlood_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EasyModeDecreaseBlood;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardModeDecreaseBlood_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HardModeDecreaseBlood;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyLyraGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALyraGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyLyraGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTime, "DecreaseGameTime" }, // 3963937953
		{ &Z_Construct_UFunction_AMyLyraGameState_DecreaseGameTimeFaster, "DecreaseGameTimeFaster" }, // 2656034054
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyLyraGameState.h" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_GameTimerHandle_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_GameTimerHandle = { "GameTimerHandle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameState, GameTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_GameTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_GameTimerHandle_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_DroneBlood_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_DroneBlood = { "DroneBlood", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameState, DroneBlood), METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_DroneBlood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_DroneBlood_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_RemainTime_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_RemainTime = { "RemainTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameState, RemainTime), METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_RemainTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_RemainTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_KilledHallin_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_KilledHallin = { "KilledHallin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameState, KilledHallin), METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_KilledHallin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_KilledHallin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_CollectedTreasure_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_CollectedTreasure = { "CollectedTreasure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameState, CollectedTreasure), METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_CollectedTreasure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_CollectedTreasure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_Difficulty_MetaData[] = {
		{ "Category", "Game Difficulty" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameState, Difficulty), METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_Difficulty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_EasyModeDecreaseTime_MetaData[] = {
		{ "Category", "Game Difficulty" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_EasyModeDecreaseTime = { "EasyModeDecreaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameState, EasyModeDecreaseTime), METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_EasyModeDecreaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_EasyModeDecreaseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_HardModeDecreaseTime_MetaData[] = {
		{ "Category", "Game Difficulty" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_HardModeDecreaseTime = { "HardModeDecreaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameState, HardModeDecreaseTime), METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_HardModeDecreaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_HardModeDecreaseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_EasyModeDecreaseBlood_MetaData[] = {
		{ "Category", "Game Difficulty" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_EasyModeDecreaseBlood = { "EasyModeDecreaseBlood", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameState, EasyModeDecreaseBlood), METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_EasyModeDecreaseBlood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_EasyModeDecreaseBlood_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_HardModeDecreaseBlood_MetaData[] = {
		{ "Category", "Game Difficulty" },
		{ "ModuleRelativePath", "Public/MyLyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_HardModeDecreaseBlood = { "HardModeDecreaseBlood", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameState, HardModeDecreaseBlood), METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_HardModeDecreaseBlood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_HardModeDecreaseBlood_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyLyraGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_GameTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_DroneBlood,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_RemainTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_KilledHallin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_CollectedTreasure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_Difficulty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_EasyModeDecreaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_HardModeDecreaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_EasyModeDecreaseBlood,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameState_Statics::NewProp_HardModeDecreaseBlood,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyLyraGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyLyraGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyLyraGameState_Statics::ClassParams = {
		&AMyLyraGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyLyraGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyLyraGameState()
	{
		if (!Z_Registration_Info_UClass_AMyLyraGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyLyraGameState.OuterSingleton, Z_Construct_UClass_AMyLyraGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyLyraGameState.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<AMyLyraGameState>()
	{
		return AMyLyraGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLyraGameState);
	AMyLyraGameState::~AMyLyraGameState() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_MyLyraGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_MyLyraGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyLyraGameState, AMyLyraGameState::StaticClass, TEXT("AMyLyraGameState"), &Z_Registration_Info_UClass_AMyLyraGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyLyraGameState), 4005011044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_MyLyraGameState_h_906373634(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_MyLyraGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_MyLyraGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
