// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Weapon/UsedWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUsedWeapon() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AUsedWeapon();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AUsedWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class AUsedWeapon
void AUsedWeapon::StaticRegisterNativesAUsedWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUsedWeapon);
UClass* Z_Construct_UClass_AUsedWeapon_NoRegister()
{
	return AUsedWeapon::StaticClass();
}
struct Z_Construct_UClass_AUsedWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/UsedWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/UsedWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/UsedWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceLocation_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/UsedWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Weapon/UsedWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUsedWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUsedWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUsedWeapon, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUsedWeapon_Statics::NewProp_ForceLocation = { "ForceLocation", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUsedWeapon, ForceLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceLocation_MetaData), NewProp_ForceLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUsedWeapon_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUsedWeapon, Force), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUsedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsedWeapon_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsedWeapon_Statics::NewProp_ForceLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsedWeapon_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUsedWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUsedWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUsedWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUsedWeapon_Statics::ClassParams = {
	&AUsedWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AUsedWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AUsedWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUsedWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AUsedWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUsedWeapon()
{
	if (!Z_Registration_Info_UClass_AUsedWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUsedWeapon.OuterSingleton, Z_Construct_UClass_AUsedWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUsedWeapon.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<AUsedWeapon>()
{
	return AUsedWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUsedWeapon);
AUsedWeapon::~AUsedWeapon() {}
// End Class AUsedWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_UsedWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUsedWeapon, AUsedWeapon::StaticClass, TEXT("AUsedWeapon"), &Z_Registration_Info_UClass_AUsedWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUsedWeapon), 4252568755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_UsedWeapon_h_3468961691(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_UsedWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_UsedWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
