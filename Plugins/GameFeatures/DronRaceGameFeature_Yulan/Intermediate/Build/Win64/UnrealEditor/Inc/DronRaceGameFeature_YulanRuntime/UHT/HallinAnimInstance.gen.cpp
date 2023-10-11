// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/HallinAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHallinAnimInstance() {}
// Cross Module References
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_UHallinAnimInstance();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_UHallinAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	void UHallinAnimInstance::StaticRegisterNativesUHallinAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHallinAnimInstance);
	UClass* Z_Construct_UClass_UHallinAnimInstance_NoRegister()
	{
		return UHallinAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHallinAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EnemyCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHitted_MetaData[];
#endif
		static void NewProp_IsHitted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHitted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacterMovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacterMovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsChasing_MetaData[];
#endif
		static void NewProp_IsChasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsChasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHallinAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHallinAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HallinAnimInstance.h" },
		{ "ModuleRelativePath", "Public/HallinAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_EnemyCharacter_MetaData[] = {
		{ "Category", "HallinAnimInstance" },
		{ "ModuleRelativePath", "Public/HallinAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_EnemyCharacter = { "EnemyCharacter", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHallinAnimInstance, EnemyCharacter), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_EnemyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_EnemyCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsHitted_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/HallinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsHitted_SetBit(void* Obj)
	{
		((UHallinAnimInstance*)Obj)->IsHitted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsHitted = { "IsHitted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHallinAnimInstance), &Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsHitted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsHitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsHitted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_EnemyCharacterMovementComp_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HallinAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_EnemyCharacterMovementComp = { "EnemyCharacterMovementComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHallinAnimInstance, EnemyCharacterMovementComp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_EnemyCharacterMovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_EnemyCharacterMovementComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/HallinAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHallinAnimInstance, GroundSpeed), METADATA_PARAMS(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_GroundSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_GroundSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsChasing_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/HallinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsChasing_SetBit(void* Obj)
	{
		((UHallinAnimInstance*)Obj)->IsChasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsChasing = { "IsChasing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHallinAnimInstance), &Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsChasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsChasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsChasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/HallinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((UHallinAnimInstance*)Obj)->IsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHallinAnimInstance), &Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsAttacking_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHallinAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_EnemyCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsHitted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_EnemyCharacterMovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_GroundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsChasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHallinAnimInstance_Statics::NewProp_IsAttacking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHallinAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHallinAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHallinAnimInstance_Statics::ClassParams = {
		&UHallinAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHallinAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHallinAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHallinAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHallinAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHallinAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UHallinAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHallinAnimInstance.OuterSingleton, Z_Construct_UClass_UHallinAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHallinAnimInstance.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<UHallinAnimInstance>()
	{
		return UHallinAnimInstance::StaticClass();
	}
	UHallinAnimInstance::UHallinAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHallinAnimInstance);
	UHallinAnimInstance::~UHallinAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_HallinAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_HallinAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHallinAnimInstance, UHallinAnimInstance::StaticClass, TEXT("UHallinAnimInstance"), &Z_Registration_Info_UClass_UHallinAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHallinAnimInstance), 965397736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_HallinAnimInstance_h_524429798(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_HallinAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_HallinAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
