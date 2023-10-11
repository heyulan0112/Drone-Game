// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/DRDrone.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDRDrone() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ADRDrone();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ADRDrone_NoRegister();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ADRDrone::execOnCapsuleHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ADRDrone::StaticRegisterNativesADRDrone()
	{
		UClass* Class = ADRDrone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCapsuleHit", &ADRDrone::execOnCapsuleHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics
	{
		struct DRDrone_eventOnCapsuleHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DRDrone_eventOnCapsuleHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DRDrone_eventOnCapsuleHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DRDrone_eventOnCapsuleHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DRDrone_eventOnCapsuleHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DRDrone_eventOnCapsuleHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADRDrone, nullptr, "OnCapsuleHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::DRDrone_eventOnCapsuleHit_Parms), Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADRDrone_OnCapsuleHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADRDrone_OnCapsuleHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADRDrone);
	UClass* Z_Construct_UClass_ADRDrone_NoRegister()
	{
		return ADRDrone::StaticClass();
	}
	struct Z_Construct_UClass_ADRDrone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoationParam_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoationParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardScaleModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveForwardScaleModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpDownScaleModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpDownScaleModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalShiftScaleModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalShiftScaleModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAroundScaleModifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LookAroundScaleModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardPitchScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveForwardPitchScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalShiftRollScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalShiftRollScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootingPitchScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootingPitchScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blood_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Blood;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillEnemyNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KillEnemyNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectTreasureNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollectTreasureNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DroneMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneExtComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DroneExtComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMoveLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMoveLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightMoveLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightMoveLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADRDrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADRDrone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADRDrone_OnCapsuleHit, "OnCapsuleHit" }, // 1473926541
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DRDrone.h" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_RoationParam_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_RoationParam = { "RoationParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, RoationParam), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_RoationParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_RoationParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_MoveForwardScaleModifier_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_MoveForwardScaleModifier = { "MoveForwardScaleModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, MoveForwardScaleModifier), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_MoveForwardScaleModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_MoveForwardScaleModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_UpDownScaleModifier_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_UpDownScaleModifier = { "UpDownScaleModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, UpDownScaleModifier), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_UpDownScaleModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_UpDownScaleModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_HorizontalShiftScaleModifier_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_HorizontalShiftScaleModifier = { "HorizontalShiftScaleModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, HorizontalShiftScaleModifier), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_HorizontalShiftScaleModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_HorizontalShiftScaleModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_LookAroundScaleModifier_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_LookAroundScaleModifier = { "LookAroundScaleModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, LookAroundScaleModifier), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_LookAroundScaleModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_LookAroundScaleModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_MoveForwardPitchScale_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_MoveForwardPitchScale = { "MoveForwardPitchScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, MoveForwardPitchScale), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_MoveForwardPitchScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_MoveForwardPitchScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_HorizontalShiftRollScale_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_HorizontalShiftRollScale = { "HorizontalShiftRollScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, HorizontalShiftRollScale), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_HorizontalShiftRollScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_HorizontalShiftRollScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_ShootingPitchScale_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_ShootingPitchScale = { "ShootingPitchScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, ShootingPitchScale), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_ShootingPitchScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_ShootingPitchScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_Blood_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_Blood = { "Blood", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, Blood), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_Blood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_Blood_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_KillEnemyNum_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_KillEnemyNum = { "KillEnemyNum", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, KillEnemyNum), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_KillEnemyNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_KillEnemyNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_CollectTreasureNum_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_CollectTreasureNum = { "CollectTreasureNum", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, CollectTreasureNum), METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_CollectTreasureNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_CollectTreasureNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_DroneMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_DroneMappingContext = { "DroneMappingContext", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, DroneMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_DroneMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_DroneMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_DroneExtComponent_MetaData[] = {
		{ "Category", "Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_DroneExtComponent = { "DroneExtComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, DroneExtComponent), Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_DroneExtComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_DroneExtComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_LeftMoveLight_MetaData[] = {
		{ "Category", "DRDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_LeftMoveLight = { "LeftMoveLight", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, LeftMoveLight), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_LeftMoveLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_LeftMoveLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_RightMoveLight_MetaData[] = {
		{ "Category", "DRDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_RightMoveLight = { "RightMoveLight", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, RightMoveLight), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_RightMoveLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_RightMoveLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_AttackLight_MetaData[] = {
		{ "Category", "DRDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_AttackLight = { "AttackLight", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, AttackLight), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_AttackLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_AttackLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_IdleLight_MetaData[] = {
		{ "Category", "DRDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_IdleLight = { "IdleLight", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, IdleLight), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_IdleLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_IdleLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADRDrone_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "DRDrone" },
		{ "ModuleRelativePath", "Public/DRDrone.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADRDrone_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADRDrone, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADRDrone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_RoationParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_MoveForwardScaleModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_UpDownScaleModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_HorizontalShiftScaleModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_LookAroundScaleModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_MoveForwardPitchScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_HorizontalShiftRollScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_ShootingPitchScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_Blood,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_KillEnemyNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_CollectTreasureNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_DroneMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_DroneExtComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_LeftMoveLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_RightMoveLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_AttackLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_IdleLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADRDrone_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADRDrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADRDrone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADRDrone_Statics::ClassParams = {
		&ADRDrone::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADRDrone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADRDrone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADRDrone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADRDrone()
	{
		if (!Z_Registration_Info_UClass_ADRDrone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADRDrone.OuterSingleton, Z_Construct_UClass_ADRDrone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADRDrone.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<ADRDrone>()
	{
		return ADRDrone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADRDrone);
	ADRDrone::~ADRDrone() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DRDrone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DRDrone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADRDrone, ADRDrone::StaticClass, TEXT("ADRDrone"), &Z_Registration_Info_UClass_ADRDrone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADRDrone), 2116597573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DRDrone_h_3424295425(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DRDrone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_DRDrone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
