// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/Treasure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreasure() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ATreasure();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ATreasure_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ATreasure::execTransformedSin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TransformedSin();
		P_NATIVE_END;
	}
	void ATreasure::StaticRegisterNativesATreasure()
	{
		UClass* Class = ATreasure::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TransformedSin", &ATreasure::execTransformedSin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATreasure_TransformedSin_Statics
	{
		struct Treasure_eventTransformedSin_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATreasure_TransformedSin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Treasure_eventTransformedSin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreasure_TransformedSin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreasure_TransformedSin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreasure_TransformedSin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Treasure.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreasure_TransformedSin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreasure, nullptr, "TransformedSin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATreasure_TransformedSin_Statics::Treasure_eventTransformedSin_Parms), Z_Construct_UFunction_ATreasure_TransformedSin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreasure_TransformedSin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreasure_TransformedSin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreasure_TransformedSin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreasure_TransformedSin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATreasure_TransformedSin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATreasure);
	UClass* Z_Construct_UClass_ATreasure_NoRegister()
	{
		return ATreasure::StaticClass();
	}
	struct Z_Construct_UClass_ATreasure_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TreasureAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureTimeConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TreasureTimeConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TreasureLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TreasureMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TreasureClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATreasure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATreasure_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATreasure_TransformedSin, "TransformedSin" }, // 434886952
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Treasure.h" },
		{ "ModuleRelativePath", "Public/Treasure.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "Treasure" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Treasure.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATreasure, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureAmplitude_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/Treasure.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureAmplitude = { "TreasureAmplitude", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATreasure, TreasureAmplitude), METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureTimeConstant_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/Treasure.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureTimeConstant = { "TreasureTimeConstant", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATreasure, TreasureTimeConstant), METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureTimeConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureTimeConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureLight_MetaData[] = {
		{ "Category", "Treasure" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Treasure.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureLight = { "TreasureLight", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATreasure, TreasureLight), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureMesh_MetaData[] = {
		{ "Category", "Treasure" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Treasure.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureMesh = { "TreasureMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATreasure, TreasureMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureClass_MetaData[] = {
		{ "Category", "Treasure" },
		{ "ModuleRelativePath", "Public/Treasure.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureClass = { "TreasureClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATreasure, TreasureClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATreasure_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::NewProp_RunningTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Treasure" },
		{ "ModuleRelativePath", "Public/Treasure.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATreasure, RunningTime), METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::NewProp_RunningTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::NewProp_RunningTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATreasure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_Sphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureTimeConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_TreasureClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_RunningTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATreasure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreasure>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATreasure_Statics::ClassParams = {
		&ATreasure::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATreasure_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATreasure()
	{
		if (!Z_Registration_Info_UClass_ATreasure.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATreasure.OuterSingleton, Z_Construct_UClass_ATreasure_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATreasure.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<ATreasure>()
	{
		return ATreasure::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreasure);
	ATreasure::~ATreasure() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_Treasure_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_Treasure_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATreasure, ATreasure::StaticClass, TEXT("ATreasure"), &Z_Registration_Info_UClass_ATreasure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATreasure), 3717834606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_Treasure_h_3608997011(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_Treasure_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_Treasure_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
