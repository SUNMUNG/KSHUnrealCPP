// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Item/PickUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_APickUp();
KSHUNREALCPP_API UClass* Z_Construct_UClass_APickUp_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UPickUpable_NoRegister();
KSHUNREALCPP_API UEnum* Z_Construct_UEnum_KSHUnrealCPP_EItemCode();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class APickUp Function OnTimeLineFinished
struct Z_Construct_UFunction_APickUp_OnTimeLineFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUp_OnTimeLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUp, nullptr, "OnTimeLineFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_OnTimeLineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickUp_OnTimeLineFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APickUp_OnTimeLineFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickUp_OnTimeLineFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickUp::execOnTimeLineFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTimeLineFinished();
	P_NATIVE_END;
}
// End Class APickUp Function OnTimeLineFinished

// Begin Class APickUp Function OnTimeLineUpdate
struct Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics
{
	struct PickUp_eventOnTimeLineUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickUp_eventOnTimeLineUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUp, nullptr, "OnTimeLineUpdate", nullptr, nullptr, Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::PickUp_eventOnTimeLineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::PickUp_eventOnTimeLineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickUp_OnTimeLineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickUp_OnTimeLineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickUp::execOnTimeLineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTimeLineUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// End Class APickUp Function OnTimeLineUpdate

// Begin Class APickUp
void APickUp::StaticRegisterNativesAPickUp()
{
	UClass* Class = APickUp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTimeLineFinished", &APickUp::execOnTimeLineFinished },
		{ "OnTimeLineUpdate", &APickUp::execOnTimeLineUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickUp);
UClass* Z_Construct_UClass_APickUp_NoRegister()
{
	return APickUp::StaticClass();
}
struct Z_Construct_UClass_APickUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item/PickUp.h" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupOverlap_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupEffect_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupTimeline_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupItem_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurve_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Item/PickUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupOverlap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupTimeline;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PickupItem_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PickupItem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScaleCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUp_OnTimeLineFinished, "OnTimeLineFinished" }, // 2736872321
		{ &Z_Construct_UFunction_APickUp_OnTimeLineUpdate, "OnTimeLineUpdate" }, // 282999262
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_BaseRoot = { "BaseRoot", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, BaseRoot), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRoot_MetaData), NewProp_BaseRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_PickupOverlap = { "PickupOverlap", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, PickupOverlap), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupOverlap_MetaData), NewProp_PickupOverlap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_PickupEffect = { "PickupEffect", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, PickupEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupEffect_MetaData), NewProp_PickupEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_PickupTimeline = { "PickupTimeline", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, PickupTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupTimeline_MetaData), NewProp_PickupTimeline_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_PickupItem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_PickupItem = { "PickupItem", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, PickupItem), Z_Construct_UEnum_KSHUnrealCPP_EItemCode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupItem_MetaData), NewProp_PickupItem_MetaData) }; // 3628415129
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, RotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateSpeed_MetaData), NewProp_RotateSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_duration_MetaData), NewProp_duration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_ScaleCurve = { "ScaleCurve", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, ScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleCurve_MetaData), NewProp_ScaleCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_LocationCurve = { "LocationCurve", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, LocationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationCurve_MetaData), NewProp_LocationCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_BaseRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_PickupOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_PickupEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_PickupTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_PickupItem_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_PickupItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_RotateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_ScaleCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_LocationCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickUp_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPickUpable_NoRegister, (int32)VTABLE_OFFSET(APickUp, IPickUpable), false },  // 1686627259
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickUp_Statics::ClassParams = {
	&APickUp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APickUp_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickUp()
{
	if (!Z_Registration_Info_UClass_APickUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickUp.OuterSingleton, Z_Construct_UClass_APickUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickUp.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<APickUp>()
{
	return APickUp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickUp);
APickUp::~APickUp() {}
// End Class APickUp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickUp, APickUp::StaticClass, TEXT("APickUp"), &Z_Registration_Info_UClass_APickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickUp), 193593078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUp_h_1229616343(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
