// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Weapon/ComsumeableWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComsumeableWeapon() {}

// Begin Cross Module References
KSHUNREALCPP_API UClass* Z_Construct_UClass_AComsumeableWeapon();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AComsumeableWeapon_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AWeaponActor();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class AComsumeableWeapon
void AComsumeableWeapon::StaticRegisterNativesAComsumeableWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AComsumeableWeapon);
UClass* Z_Construct_UClass_AComsumeableWeapon_NoRegister()
{
	return AComsumeableWeapon::StaticClass();
}
struct Z_Construct_UClass_AComsumeableWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/ComsumeableWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/ComsumeableWeapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComsumeableWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AComsumeableWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AComsumeableWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AComsumeableWeapon_Statics::ClassParams = {
	&AComsumeableWeapon::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AComsumeableWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AComsumeableWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AComsumeableWeapon()
{
	if (!Z_Registration_Info_UClass_AComsumeableWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AComsumeableWeapon.OuterSingleton, Z_Construct_UClass_AComsumeableWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AComsumeableWeapon.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<AComsumeableWeapon>()
{
	return AComsumeableWeapon::StaticClass();
}
AComsumeableWeapon::AComsumeableWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AComsumeableWeapon);
AComsumeableWeapon::~AComsumeableWeapon() {}
// End Class AComsumeableWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_ComsumeableWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AComsumeableWeapon, AComsumeableWeapon::StaticClass, TEXT("AComsumeableWeapon"), &Z_Registration_Info_UClass_AComsumeableWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AComsumeableWeapon), 1056962545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_ComsumeableWeapon_h_1406093326(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_ComsumeableWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_ComsumeableWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
