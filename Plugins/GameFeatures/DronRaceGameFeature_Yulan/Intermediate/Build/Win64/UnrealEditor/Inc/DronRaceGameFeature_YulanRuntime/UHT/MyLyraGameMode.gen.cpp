// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/MyLyraGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLyraGameMode() {}
// Cross Module References
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ADRDrone_NoRegister();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_AMyLyraGameMode();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_AMyLyraGameMode_NoRegister();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_AMyLyraGameState_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameMode();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	DEFINE_FUNCTION(AMyLyraGameMode::execEndGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EndGame();
		P_NATIVE_END;
	}
	void AMyLyraGameMode::StaticRegisterNativesAMyLyraGameMode()
	{
		UClass* Class = AMyLyraGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndGame", &AMyLyraGameMode::execEndGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics
	{
		struct MyLyraGameMode_eventEndGame_Parms
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
	void Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyLyraGameMode_eventEndGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MyLyraGameMode_eventEndGame_Parms), &Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyLyraGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLyraGameMode, nullptr, "EndGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::MyLyraGameMode_eventEndGame_Parms), Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyLyraGameMode_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyLyraGameMode_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyLyraGameMode);
	UClass* Z_Construct_UClass_AMyLyraGameMode_NoRegister()
	{
		return AMyLyraGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyLyraGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameTimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameTimeLimit;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreBoard_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreBoard_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScoreBoard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Drone_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Drone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneGameState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DroneGameState;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Levels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Levels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyLyraGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALyraGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyLyraGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyLyraGameMode_EndGame, "EndGame" }, // 2165572732
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyLyraGameMode.h" },
		{ "ModuleRelativePath", "Public/MyLyraGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_GameTimeLimit_MetaData[] = {
		{ "Category", "GameStatus" },
		{ "ModuleRelativePath", "Public/MyLyraGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_GameTimeLimit = { "GameTimeLimit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameMode, GameTimeLimit), METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_GameTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_GameTimeLimit_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_ScoreBoard_Inner = { "ScoreBoard", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_ScoreBoard_MetaData[] = {
		{ "Category", "GameHistory" },
		{ "ModuleRelativePath", "Public/MyLyraGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_ScoreBoard = { "ScoreBoard", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameMode, ScoreBoard), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_ScoreBoard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_ScoreBoard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Drone_MetaData[] = {
		{ "Category", "MyLyraGameMode" },
		{ "ModuleRelativePath", "Public/MyLyraGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Drone = { "Drone", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameMode, Drone), Z_Construct_UClass_ADRDrone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Drone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Drone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_DroneGameState_MetaData[] = {
		{ "Category", "MyLyraGameMode" },
		{ "ModuleRelativePath", "Public/MyLyraGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_DroneGameState = { "DroneGameState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameMode, DroneGameState), Z_Construct_UClass_AMyLyraGameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_DroneGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_DroneGameState_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Levels_Inner = { "Levels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Levels_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Levels" },
		{ "ModuleRelativePath", "Public/MyLyraGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyLyraGameMode, Levels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Levels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyLyraGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_GameTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_ScoreBoard_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_ScoreBoard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Drone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_DroneGameState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLyraGameMode_Statics::NewProp_Levels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyLyraGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyLyraGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyLyraGameMode_Statics::ClassParams = {
		&AMyLyraGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyLyraGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyLyraGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLyraGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyLyraGameMode()
	{
		if (!Z_Registration_Info_UClass_AMyLyraGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyLyraGameMode.OuterSingleton, Z_Construct_UClass_AMyLyraGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyLyraGameMode.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<AMyLyraGameMode>()
	{
		return AMyLyraGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLyraGameMode);
	AMyLyraGameMode::~AMyLyraGameMode() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_MyLyraGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_MyLyraGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyLyraGameMode, AMyLyraGameMode::StaticClass, TEXT("AMyLyraGameMode"), &Z_Registration_Info_UClass_AMyLyraGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyLyraGameMode), 1908149647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_MyLyraGameMode_h_3508697791(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_MyLyraGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_MyLyraGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
