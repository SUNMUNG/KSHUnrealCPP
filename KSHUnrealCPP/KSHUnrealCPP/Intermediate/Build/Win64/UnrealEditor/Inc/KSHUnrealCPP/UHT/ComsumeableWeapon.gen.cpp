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
KSHUNREALCPP_API UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnWeaponUseEnded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Delegate FOnWeaponUseEnded
struct Z_Construct_UDelegateFunction_KSHUnrealCPP_OnWeaponUseEnded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/ComsumeableWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KSHUnrealCPP_OnWeaponUseEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KSHUnrealCPP, nullptr, "OnWeaponUseEnded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KSHUnrealCPP_OnWeaponUseEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_KSHUnrealCPP_OnWeaponUseEnded__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnWeaponUseEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KSHUnrealCPP_OnWeaponUseEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWeaponUseEnded_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponUseEnded)
{
	OnWeaponUseEnded.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnWeaponUseEnded

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxUseCount_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Weapon/ComsumeableWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingUseCount_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Weapon/ComsumeableWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponUseEnded_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/ComsumeableWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxUseCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingUseCount;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponUseEnded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComsumeableWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AComsumeableWeapon_Statics::NewProp_MaxUseCount = { "MaxUseCount", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComsumeableWeapon, MaxUseCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxUseCount_MetaData), NewProp_MaxUseCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AComsumeableWeapon_Statics::NewProp_RemainingUseCount = { "RemainingUseCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComsumeableWeapon, RemainingUseCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingUseCount_MetaData), NewProp_RemainingUseCount_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AComsumeableWeapon_Statics::NewProp_OnWeaponUseEnded = { "OnWeaponUseEnded", nullptr, (EPropertyFlags)0x0020080010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComsumeableWeapon, OnWeaponUseEnded), Z_Construct_UDelegateFunction_KSHUnrealCPP_OnWeaponUseEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponUseEnded_MetaData), NewProp_OnWeaponUseEnded_MetaData) }; // 3709803051
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComsumeableWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComsumeableWeapon_Statics::NewProp_MaxUseCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComsumeableWeapon_Statics::NewProp_RemainingUseCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComsumeableWeapon_Statics::NewProp_OnWeaponUseEnded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AComsumeableWeapon_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AComsumeableWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AComsumeableWeapon_Statics::PropPointers),
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
		{ Z_Construct_UClass_AComsumeableWeapon, AComsumeableWeapon::StaticClass, TEXT("AComsumeableWeapon"), &Z_Registration_Info_UClass_AComsumeableWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AComsumeableWeapon), 3469259005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_ComsumeableWeapon_h_1271394961(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_ComsumeableWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Weapon_ComsumeableWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
