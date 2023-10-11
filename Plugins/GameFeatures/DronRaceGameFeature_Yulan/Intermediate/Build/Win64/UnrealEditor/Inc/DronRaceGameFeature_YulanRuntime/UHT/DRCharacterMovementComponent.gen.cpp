// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/DRCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDRCharacterMovementComponent() {}
// Cross Module References
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_UDRCharacterMovementComponent();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_UDRCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	void UDRCharacterMovementComponent::StaticRegisterNativesUDRCharacterMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDRCharacterMovementComponent);
	UClass* Z_Construct_UClass_UDRCharacterMovementComponent_NoRegister()
	{
		return UDRCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDRCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDRCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDRCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DRCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/DRCharacterMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDRCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDRCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDRCharacterMovementComponent_Statics::ClassParams = {
		&UDRCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDRCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDRCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDRCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UDRCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDRCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UDRCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDRCharacterMovementComponent.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<UDRCharacterMovementComponent>()
	{
		return UDRCharacterMovementComponent::StaticClass();
	}
	UDRCharacterMovementComponent::UDRCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDRCharacterMovementComponent);
	UDRCharacterMovementComponent::~UDRCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DRCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DRCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDRCharacterMovementComponent, UDRCharacterMovementComponent::StaticClass, TEXT("UDRCharacterMovementComponent"), &Z_Registration_Info_UClass_UDRCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDRCharacterMovementComponent), 1838690277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DRCharacterMovementComponent_h_4291717779(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DRCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DRCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
