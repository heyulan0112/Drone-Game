// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/DroneAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneAnimInstance() {}
// Cross Module References
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ADRDrone_NoRegister();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ADrone_NoRegister();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_UDRCharacterMovementComponent_NoRegister();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_UDroneAnimInstance();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_UDroneAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	void UDroneAnimInstance::StaticRegisterNativesUDroneAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDroneAnimInstance);
	UClass* Z_Construct_UClass_UDroneAnimInstance_NoRegister()
	{
		return UDroneAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDroneAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Drone_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Drone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DroneMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DroneCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneCharacterMovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DroneCharacterMovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsShooting_MetaData[];
#endif
		static void NewProp_IsShooting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsShooting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRising_MetaData[];
#endif
		static void NewProp_IsRising_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRising;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsLanding_MetaData[];
#endif
		static void NewProp_IsLanding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLanding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsForwarding_MetaData[];
#endif
		static void NewProp_IsForwarding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsForwarding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsOnTheGround_MetaData[];
#endif
		static void NewProp_IsOnTheGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnTheGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PawnHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDroneAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DroneAnimInstance.h" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_Drone_MetaData[] = {
		{ "Category", "DroneAnimInstance" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_Drone = { "Drone", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDroneAnimInstance, Drone), Z_Construct_UClass_ADrone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_Drone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_Drone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneMovementComponent = { "DroneMovementComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDroneAnimInstance, DroneMovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneMovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneCharacter_MetaData[] = {
		{ "Category", "DroneAnimInstance" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneCharacter = { "DroneCharacter", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDroneAnimInstance, DroneCharacter), Z_Construct_UClass_ADRDrone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneCharacterMovementComp_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneCharacterMovementComp = { "DroneCharacterMovementComp", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDroneAnimInstance, DroneCharacterMovementComp), Z_Construct_UClass_UDRCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneCharacterMovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneCharacterMovementComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDroneAnimInstance, GroundSpeed), METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_GroundSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_GroundSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsShooting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsShooting_SetBit(void* Obj)
	{
		((UDroneAnimInstance*)Obj)->IsShooting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsShooting = { "IsShooting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDroneAnimInstance), &Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsShooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsShooting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsRising_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsRising_SetBit(void* Obj)
	{
		((UDroneAnimInstance*)Obj)->IsRising = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsRising = { "IsRising", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDroneAnimInstance), &Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsRising_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsRising_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsRising_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsLanding_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsLanding_SetBit(void* Obj)
	{
		((UDroneAnimInstance*)Obj)->IsLanding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsLanding = { "IsLanding", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDroneAnimInstance), &Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsLanding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsLanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsLanding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsForwarding_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsForwarding_SetBit(void* Obj)
	{
		((UDroneAnimInstance*)Obj)->IsForwarding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsForwarding = { "IsForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDroneAnimInstance), &Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsForwarding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsForwarding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsForwarding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsOnTheGround_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsOnTheGround_SetBit(void* Obj)
	{
		((UDroneAnimInstance*)Obj)->IsOnTheGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsOnTheGround = { "IsOnTheGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDroneAnimInstance), &Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsOnTheGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsOnTheGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsOnTheGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_PawnHeight_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/DroneAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_PawnHeight = { "PawnHeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDroneAnimInstance, PawnHeight), METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_PawnHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_PawnHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDroneAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_Drone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_DroneCharacterMovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_GroundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsShooting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsRising,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsLanding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsForwarding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_IsOnTheGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneAnimInstance_Statics::NewProp_PawnHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDroneAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneAnimInstance_Statics::ClassParams = {
		&UDroneAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDroneAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDroneAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDroneAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UDroneAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneAnimInstance.OuterSingleton, Z_Construct_UClass_UDroneAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDroneAnimInstance.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<UDroneAnimInstance>()
	{
		return UDroneAnimInstance::StaticClass();
	}
	UDroneAnimInstance::UDroneAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDroneAnimInstance);
	UDroneAnimInstance::~UDroneAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DroneAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DroneAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDroneAnimInstance, UDroneAnimInstance::StaticClass, TEXT("UDroneAnimInstance"), &Z_Registration_Info_UClass_UDroneAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneAnimInstance), 785984237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DroneAnimInstance_h_844514950(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DroneAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DroneAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
