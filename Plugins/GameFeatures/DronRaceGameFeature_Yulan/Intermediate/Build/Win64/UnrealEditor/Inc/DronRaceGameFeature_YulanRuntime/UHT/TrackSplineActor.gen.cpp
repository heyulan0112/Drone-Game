// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/TrackSplineActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrackSplineActor() {}
// Cross Module References
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ATrackSplineActor();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ATrackSplineActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ATrackSplineActor::execGenerateSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateSpline();
		P_NATIVE_END;
	}
	void ATrackSplineActor::StaticRegisterNativesATrackSplineActor()
	{
		UClass* Class = ATrackSplineActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateSpline", &ATrackSplineActor::execGenerateSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATrackSplineActor_GenerateSpline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrackSplineActor_GenerateSpline_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Public/TrackSplineActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrackSplineActor_GenerateSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrackSplineActor, nullptr, "GenerateSpline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrackSplineActor_GenerateSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrackSplineActor_GenerateSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrackSplineActor_GenerateSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrackSplineActor_GenerateSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrackSplineActor);
	UClass* Z_Construct_UClass_ATrackSplineActor_NoRegister()
	{
		return ATrackSplineActor::StaticClass();
	}
	struct Z_Construct_UClass_ATrackSplineActor_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrackSplineActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATrackSplineActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrackSplineActor_GenerateSpline, "GenerateSpline" }, // 2760791
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrackSplineActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrackSplineActor.h" },
		{ "ModuleRelativePath", "Public/TrackSplineActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrackSplineActor_Statics::NewProp_SplineComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrackSplineActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrackSplineActor_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrackSplineActor, SplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrackSplineActor_Statics::NewProp_SplineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrackSplineActor_Statics::NewProp_SplineComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrackSplineActor_Statics::NewProp_LandscapeProxy_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Public/TrackSplineActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrackSplineActor_Statics::NewProp_LandscapeProxy = { "LandscapeProxy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATrackSplineActor, LandscapeProxy), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrackSplineActor_Statics::NewProp_LandscapeProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrackSplineActor_Statics::NewProp_LandscapeProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrackSplineActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrackSplineActor_Statics::NewProp_SplineComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrackSplineActor_Statics::NewProp_LandscapeProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrackSplineActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrackSplineActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrackSplineActor_Statics::ClassParams = {
		&ATrackSplineActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATrackSplineActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrackSplineActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATrackSplineActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrackSplineActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrackSplineActor()
	{
		if (!Z_Registration_Info_UClass_ATrackSplineActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrackSplineActor.OuterSingleton, Z_Construct_UClass_ATrackSplineActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrackSplineActor.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<ATrackSplineActor>()
	{
		return ATrackSplineActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrackSplineActor);
	ATrackSplineActor::~ATrackSplineActor() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_TrackSplineActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_TrackSplineActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrackSplineActor, ATrackSplineActor::StaticClass, TEXT("ATrackSplineActor"), &Z_Registration_Info_UClass_ATrackSplineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrackSplineActor), 3647276069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_TrackSplineActor_h_2672663683(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_TrackSplineActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_TrackSplineActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
