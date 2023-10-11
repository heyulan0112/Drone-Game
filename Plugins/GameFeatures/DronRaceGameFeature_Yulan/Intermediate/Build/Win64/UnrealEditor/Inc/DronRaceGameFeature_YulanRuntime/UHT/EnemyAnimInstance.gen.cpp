// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/EnemyAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnimInstance() {}
// Cross Module References
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_UEnemyAnimInstance();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	void UEnemyAnimInstance::StaticRegisterNativesUEnemyAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAnimInstance);
	UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister()
	{
		return UEnemyAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHitted_MetaData[];
#endif
		static void NewProp_IsHitted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHitted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Yulan He: EnemyAnimInstance class is deprecated\n" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EnemyAnimInstance.h" },
		{ "ModuleRelativePath", "Public/EnemyAnimInstance.h" },
		{ "ToolTip", "Yulan He: EnemyAnimInstance class is deprecated" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy_MetaData[] = {
		{ "Category", "EnemyAnimInstance" },
		{ "ModuleRelativePath", "Public/EnemyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyAnimInstance, Enemy), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_IsHitted_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/EnemyAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_IsHitted_SetBit(void* Obj)
	{
		((UEnemyAnimInstance*)Obj)->IsHitted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_IsHitted = { "IsHitted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnemyAnimInstance), &Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_IsHitted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_IsHitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_IsHitted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_IsHitted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams = {
		&UEnemyAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton, Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<UEnemyAnimInstance>()
	{
		return UEnemyAnimInstance::StaticClass();
	}
	UEnemyAnimInstance::UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnimInstance);
	UEnemyAnimInstance::~UEnemyAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_EnemyAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_EnemyAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAnimInstance, UEnemyAnimInstance::StaticClass, TEXT("UEnemyAnimInstance"), &Z_Registration_Info_UClass_UEnemyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAnimInstance), 345504619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_EnemyAnimInstance_h_1394594300(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_EnemyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_EnemyAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
