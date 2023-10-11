// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/SplineMovementActors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMovementActors() {}
// Cross Module References
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ASplineMovementActors();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ASplineMovementActors_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ASplineMovementActors::execProcessMovementTimeline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessMovementTimeline(Z_Param_value);
		P_NATIVE_END;
	}
	void ASplineMovementActors::StaticRegisterNativesASplineMovementActors()
	{
		UClass* Class = ASplineMovementActors::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProcessMovementTimeline", &ASplineMovementActors::execProcessMovementTimeline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics
	{
		struct SplineMovementActors_eventProcessMovementTimeline_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMovementActors_eventProcessMovementTimeline_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineMovementActors.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineMovementActors, nullptr, "ProcessMovementTimeline", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::SplineMovementActors_eventProcessMovementTimeline_Parms), Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASplineMovementActors);
	UClass* Z_Construct_UClass_ASplineMovementActors_NoRegister()
	{
		return ASplineMovementActors::StaticClass();
	}
	struct Z_Construct_UClass_ASplineMovementActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimelineLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineMovementActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASplineMovementActors_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplineMovementActors_ProcessMovementTimeline, "ProcessMovementTimeline" }, // 898062689
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMovementActors_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineMovementActors.h" },
		{ "ModuleRelativePath", "Public/SplineMovementActors.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_SplineComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineMovementActors.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineMovementActors, SplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_SplineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_SplineComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_MeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineMovementActors.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineMovementActors, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_MoveCurve_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/SplineMovementActors.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_MoveCurve = { "MoveCurve", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineMovementActors, MoveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_MoveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_MoveCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_TimelineLength_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/SplineMovementActors.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_TimelineLength = { "TimelineLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineMovementActors, TimelineLength), METADATA_PARAMS(Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_TimelineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_TimelineLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineMovementActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_SplineComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_MoveCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMovementActors_Statics::NewProp_TimelineLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineMovementActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineMovementActors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplineMovementActors_Statics::ClassParams = {
		&ASplineMovementActors::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASplineMovementActors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovementActors_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASplineMovementActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovementActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplineMovementActors()
	{
		if (!Z_Registration_Info_UClass_ASplineMovementActors.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplineMovementActors.OuterSingleton, Z_Construct_UClass_ASplineMovementActors_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASplineMovementActors.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<ASplineMovementActors>()
	{
		return ASplineMovementActors::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineMovementActors);
	ASplineMovementActors::~ASplineMovementActors() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_SplineMovementActors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_SplineMovementActors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASplineMovementActors, ASplineMovementActors::StaticClass, TEXT("ASplineMovementActors"), &Z_Registration_Info_UClass_ASplineMovementActors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplineMovementActors), 1965655613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_SplineMovementActors_h_3525691088(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_SplineMovementActors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_SplineMovementActors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
