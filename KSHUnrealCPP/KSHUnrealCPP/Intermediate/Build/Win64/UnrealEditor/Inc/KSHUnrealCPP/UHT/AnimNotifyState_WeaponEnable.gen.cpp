// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/AnimNotify/AnimNotifyState_WeaponEnable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_WeaponEnable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AActionCharacter_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UAnimNotifyState_WeaponEnable();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UAnimNotifyState_WeaponEnable_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class UAnimNotifyState_WeaponEnable
void UAnimNotifyState_WeaponEnable::StaticRegisterNativesUAnimNotifyState_WeaponEnable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_WeaponEnable);
UClass* Z_Construct_UClass_UAnimNotifyState_WeaponEnable_NoRegister()
{
	return UAnimNotifyState_WeaponEnable::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotifyState_WeaponEnable.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotifyState_WeaponEnable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotifyState_WeaponEnable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_WeaponEnable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0044000000000010, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_WeaponEnable, OwnerCharacter), Z_Construct_UClass_AActionCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::NewProp_OwnerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::ClassParams = {
	&UAnimNotifyState_WeaponEnable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_WeaponEnable()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_WeaponEnable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_WeaponEnable.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_WeaponEnable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_WeaponEnable.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<UAnimNotifyState_WeaponEnable>()
{
	return UAnimNotifyState_WeaponEnable::StaticClass();
}
UAnimNotifyState_WeaponEnable::UAnimNotifyState_WeaponEnable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_WeaponEnable);
UAnimNotifyState_WeaponEnable::~UAnimNotifyState_WeaponEnable() {}
// End Class UAnimNotifyState_WeaponEnable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_AnimNotify_AnimNotifyState_WeaponEnable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_WeaponEnable, UAnimNotifyState_WeaponEnable::StaticClass, TEXT("UAnimNotifyState_WeaponEnable"), &Z_Registration_Info_UClass_UAnimNotifyState_WeaponEnable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_WeaponEnable), 2597653101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_AnimNotify_AnimNotifyState_WeaponEnable_h_3548652811(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_AnimNotify_AnimNotifyState_WeaponEnable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_AnimNotify_AnimNotifyState_WeaponEnable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
