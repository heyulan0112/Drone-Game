// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DronRaceGameFeature_YulanRuntime/Public/SplineTransportActors.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineTransportActors() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ASplineTransportActors();
	DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* Z_Construct_UClass_ASplineTransportActors_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ASplineTransportActors::execOnEndMovementTimeline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndMovementTimeline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASplineTransportActors::execOnCapsuleHit)
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
	DEFINE_FUNCTION(ASplineTransportActors::execProcessMovementTimeline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessMovementTimeline(Z_Param_value);
		P_NATIVE_END;
	}
	void ASplineTransportActors::StaticRegisterNativesASplineTransportActors()
	{
		UClass* Class = ASplineTransportActors::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCapsuleHit", &ASplineTransportActors::execOnCapsuleHit },
			{ "OnEndMovementTimeline", &ASplineTransportActors::execOnEndMovementTimeline },
			{ "ProcessMovementTimeline", &ASplineTransportActors::execProcessMovementTimeline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics
	{
		struct SplineTransportActors_eventOnCapsuleHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineTransportActors_eventOnCapsuleHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineTransportActors_eventOnCapsuleHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineTransportActors_eventOnCapsuleHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineTransportActors_eventOnCapsuleHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineTransportActors_eventOnCapsuleHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineTransportActors.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineTransportActors, nullptr, "OnCapsuleHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::SplineTransportActors_eventOnCapsuleHit_Parms), Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineTransportActors_OnEndMovementTimeline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineTransportActors_OnEndMovementTimeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineTransportActors.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineTransportActors_OnEndMovementTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineTransportActors, nullptr, "OnEndMovementTimeline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineTransportActors_OnEndMovementTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineTransportActors_OnEndMovementTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineTransportActors_OnEndMovementTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineTransportActors_OnEndMovementTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics
	{
		struct SplineTransportActors_eventProcessMovementTimeline_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineTransportActors_eventProcessMovementTimeline_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineTransportActors.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineTransportActors, nullptr, "ProcessMovementTimeline", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::SplineTransportActors_eventProcessMovementTimeline_Parms), Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASplineTransportActors);
	UClass* Z_Construct_UClass_ASplineTransportActors_NoRegister()
	{
		return ASplineTransportActors::StaticClass();
	}
	struct Z_Construct_UClass_ASplineTransportActors_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsReverseOnEnd_MetaData[];
#endif
		static void NewProp_IsReverseOnEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsReverseOnEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRestartOnEnd_MetaData[];
#endif
		static void NewProp_IsRestartOnEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRestartOnEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineTransportActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DronRaceGameFeature_YulanRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASplineTransportActors_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplineTransportActors_OnCapsuleHit, "OnCapsuleHit" }, // 1061632798
		{ &Z_Construct_UFunction_ASplineTransportActors_OnEndMovementTimeline, "OnEndMovementTimeline" }, // 93206718
		{ &Z_Construct_UFunction_ASplineTransportActors_ProcessMovementTimeline, "ProcessMovementTimeline" }, // 3633646190
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineTransportActors_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineTransportActors.h" },
		{ "ModuleRelativePath", "Public/SplineTransportActors.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_SplineComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineTransportActors.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineTransportActors, SplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_SplineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_SplineComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_MeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineTransportActors.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineTransportActors, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_MoveCurve_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/SplineTransportActors.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_MoveCurve = { "MoveCurve", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineTransportActors, MoveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_MoveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_MoveCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_TimelineLength_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/SplineTransportActors.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_TimelineLength = { "TimelineLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineTransportActors, TimelineLength), METADATA_PARAMS(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_TimelineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_TimelineLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsReverseOnEnd_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditCondition", "!isRestartOnEnd" },
		{ "ModuleRelativePath", "Public/SplineTransportActors.h" },
	};
#endif
	void Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsReverseOnEnd_SetBit(void* Obj)
	{
		((ASplineTransportActors*)Obj)->IsReverseOnEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsReverseOnEnd = { "IsReverseOnEnd", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASplineTransportActors), &Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsReverseOnEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsReverseOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsReverseOnEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsRestartOnEnd_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditCondition", "!isReverseOnEnd" },
		{ "ModuleRelativePath", "Public/SplineTransportActors.h" },
	};
#endif
	void Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsRestartOnEnd_SetBit(void* Obj)
	{
		((ASplineTransportActors*)Obj)->IsRestartOnEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsRestartOnEnd = { "IsRestartOnEnd", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASplineTransportActors), &Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsRestartOnEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsRestartOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsRestartOnEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineTransportActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_SplineComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_MoveCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_TimelineLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsReverseOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineTransportActors_Statics::NewProp_IsRestartOnEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineTransportActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineTransportActors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplineTransportActors_Statics::ClassParams = {
		&ASplineTransportActors::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASplineTransportActors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASplineTransportActors_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASplineTransportActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineTransportActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplineTransportActors()
	{
		if (!Z_Registration_Info_UClass_ASplineTransportActors.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplineTransportActors.OuterSingleton, Z_Construct_UClass_ASplineTransportActors_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASplineTransportActors.OuterSingleton;
	}
	template<> DRONRACEGAMEFEATURE_YULANRUNTIME_API UClass* StaticClass<ASplineTransportActors>()
	{
		return ASplineTransportActors::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineTransportActors);
	ASplineTransportActors::~ASplineTransportActors() {}
	struct Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_SplineTransportActors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_SplineTransportActors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASplineTransportActors, ASplineTransportActors::StaticClass, TEXT("ASplineTransportActors"), &Z_Registration_Info_UClass_ASplineTransportActors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplineTransportActors), 2123153543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_SplineTransportActors_h_1827586143(TEXT("/Script/DronRaceGameFeature_YulanRuntime"),
		Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_SplineTransportActors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P4VRoot_DroneRacer_DroneRacer_52_0G_Plugins_GameFeatures_DronRaceGameFeature_Yulan_Source_DronRaceGameFeature_YulanRuntime_Public_SplineTransportActors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
