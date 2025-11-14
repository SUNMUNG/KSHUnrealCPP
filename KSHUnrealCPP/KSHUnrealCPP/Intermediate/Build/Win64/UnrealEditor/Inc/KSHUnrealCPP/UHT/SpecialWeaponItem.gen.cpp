// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Weapon/SpecialWeaponItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialWeaponItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_ASpecialWeaponItem();
KSHUNREALCPP_API UClass* Z_Construct_UClass_ASpecialWeaponItem_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class ASpecialWeaponItem Function OnItemBeginOverlap
struct Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics
{
	struct SpecialWeaponItem_eventOnItemBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/SpecialWeaponItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpecialWeaponItem_eventOnItemBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpecialWeaponItem_eventOnItemBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpecialWeaponItem, nullptr, "OnItemBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::SpecialWeaponItem_eventOnItemBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::SpecialWeaponItem_eventOnItemBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpecialWeaponItem::execOnItemBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemBeginOverlap(Z_Param_OverlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ASpecialWeaponItem Function OnItemBeginOverlap

// Begin Class ASpecialWeaponItem
void ASpecialWeaponItem::StaticRegisterNativesASpecialWeaponItem()
{
	UClass* Class = ASpecialWeaponItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnItemBeginOverlap", &ASpecialWeaponItem::execOnItemBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpecialWeaponItem);
UClass* Z_Construct_UClass_ASpecialWeaponItem_NoRegister()
{
	return ASpecialWeaponItem::StaticClass();
}
struct Z_Construct_UClass_ASpecialWeaponItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/SpecialWeaponItem.h" },
		{ "ModuleRelativePath", "Public/Weapon/SpecialWeaponItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Componenets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/SpecialWeaponItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCollision_MetaData[] = {
		{ "Category", "Componenets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/SpecialWeaponItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThisWeaponItem_MetaData[] = {
		{ "Category", "OriginWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/SpecialWeaponItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemCollision;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ThisWeaponItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpecialWeaponItem_OnItemBeginOverlap, "OnItemBeginOverlap" }, // 2627967357
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpecialWeaponItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpecialWeaponItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpecialWeaponItem, ItemMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpecialWeaponItem_Statics::NewProp_ItemCollision = { "ItemCollision", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpecialWeaponItem, ItemCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCollision_MetaData), NewProp_ItemCollision_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpecialWeaponItem_Statics::NewProp_ThisWeaponItem = { "ThisWeaponItem", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpecialWeaponItem, ThisWeaponItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThisWeaponItem_MetaData), NewProp_ThisWeaponItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpecialWeaponItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpecialWeaponItem_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpecialWeaponItem_Statics::NewProp_ItemCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpecialWeaponItem_Statics::NewProp_ThisWeaponItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialWeaponItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpecialWeaponItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialWeaponItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpecialWeaponItem_Statics::ClassParams = {
	&ASpecialWeaponItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpecialWeaponItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialWeaponItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialWeaponItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpecialWeaponItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpecialWeaponItem()
{
	if (!Z_Registration_Info_UClass_ASpecialWeaponItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpecialWeaponItem.OuterSingleton, Z_Construct_UClass_ASpecialWeaponItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpecialWeaponItem.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<ASpecialWeaponItem>()
{
	return ASpecialWeaponItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpecialWeaponItem);
ASpecialWeaponItem::~ASpecialWeaponItem() {}
// End Class ASpecialWeaponItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_SpecialWeaponItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpecialWeaponItem, ASpecialWeaponItem::StaticClass, TEXT("ASpecialWeaponItem"), &Z_Registration_Info_UClass_ASpecialWeaponItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpecialWeaponItem), 405074621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_SpecialWeaponItem_h_727371330(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_SpecialWeaponItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_SpecialWeaponItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
