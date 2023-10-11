// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/RaceDrone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaceDrone() {}
// Cross Module References
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ARaceDrone();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ARaceDrone_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	void ARaceDrone::StaticRegisterNativesARaceDrone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARaceDrone);
	UClass* Z_Construct_UClass_ARaceDrone_NoRegister()
	{
		return ARaceDrone::StaticClass();
	}
	struct Z_Construct_UClass_ARaceDrone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaceDrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceDrone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Yulan He: ARaceDrone class is deprecated, go to DRDrone class\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RaceDrone.h" },
		{ "ModuleRelativePath", "Public/RaceDrone.h" },
		{ "ToolTip", "Yulan He: ARaceDrone class is deprecated, go to DRDrone class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaceDrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaceDrone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaceDrone_Statics::ClassParams = {
		&ARaceDrone::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARaceDrone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceDrone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaceDrone()
	{
		if (!Z_Registration_Info_UClass_ARaceDrone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARaceDrone.OuterSingleton, Z_Construct_UClass_ARaceDrone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARaceDrone.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<ARaceDrone>()
	{
		return ARaceDrone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaceDrone);
	ARaceDrone::~ARaceDrone() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_RaceDrone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_RaceDrone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARaceDrone, ARaceDrone::StaticClass, TEXT("ARaceDrone"), &Z_Registration_Info_UClass_ARaceDrone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaceDrone), 1086073952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_RaceDrone_h_3560365293(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_RaceDrone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_RaceDrone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
