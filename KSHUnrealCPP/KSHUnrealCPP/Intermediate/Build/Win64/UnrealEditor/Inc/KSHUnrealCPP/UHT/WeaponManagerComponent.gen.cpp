// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Player/WeaponManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponManagerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UWeaponManagerComponent();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UWeaponManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class UWeaponManagerComponent
void UWeaponManagerComponent::StaticRegisterNativesUWeaponManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponManagerComponent);
UClass* Z_Construct_UClass_UWeaponManagerComponent_NoRegister()
{
	return UWeaponManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UWeaponManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/WeaponManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Player/WeaponManagerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeaponManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponManagerComponent_Statics::ClassParams = {
	&UWeaponManagerComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponManagerComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponManagerComponent.OuterSingleton, Z_Construct_UClass_UWeaponManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponManagerComponent.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<UWeaponManagerComponent>()
{
	return UWeaponManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponManagerComponent);
UWeaponManagerComponent::~UWeaponManagerComponent() {}
// End Class UWeaponManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_WeaponManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponManagerComponent, UWeaponManagerComponent::StaticClass, TEXT("UWeaponManagerComponent"), &Z_Registration_Info_UClass_UWeaponManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponManagerComponent), 4241535994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_WeaponManagerComponent_h_1466250342(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_WeaponManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_WeaponManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
