// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Player/ActionCharacterAnimtion.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionCharacterAnimtion() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UActionCharacterAnimtion();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UActionCharacterAnimtion_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class UActionCharacterAnimtion
void UActionCharacterAnimtion::StaticRegisterNativesUActionCharacterAnimtion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionCharacterAnimtion);
UClass* Z_Construct_UClass_UActionCharacterAnimtion_NoRegister()
{
	return UActionCharacterAnimtion::StaticClass();
}
struct Z_Construct_UClass_UActionCharacterAnimtion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/ActionCharacterAnimtion.h" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacterAnimtion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bisWalk_MetaData[] = {
		{ "Category", "ActionCharacterAnimtion" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacterAnimtion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/ActionCharacterAnimtion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/ActionCharacterAnimtion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacterAnimtion.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bisWalk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bisWalk;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionCharacterAnimtion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UActionCharacterAnimtion_Statics::NewProp_bisWalk_SetBit(void* Obj)
{
	((UActionCharacterAnimtion*)Obj)->bisWalk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionCharacterAnimtion_Statics::NewProp_bisWalk = { "bisWalk", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActionCharacterAnimtion), &Z_Construct_UClass_UActionCharacterAnimtion_Statics::NewProp_bisWalk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bisWalk_MetaData), NewProp_bisWalk_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionCharacterAnimtion_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionCharacterAnimtion, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPawn_MetaData), NewProp_OwnerPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionCharacterAnimtion_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionCharacterAnimtion, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionCharacterAnimtion_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionCharacterAnimtion, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMovement_MetaData), NewProp_CharacterMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionCharacterAnimtion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionCharacterAnimtion_Statics::NewProp_bisWalk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionCharacterAnimtion_Statics::NewProp_OwnerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionCharacterAnimtion_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionCharacterAnimtion_Statics::NewProp_CharacterMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionCharacterAnimtion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActionCharacterAnimtion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionCharacterAnimtion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionCharacterAnimtion_Statics::ClassParams = {
	&UActionCharacterAnimtion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActionCharacterAnimtion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActionCharacterAnimtion_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionCharacterAnimtion_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionCharacterAnimtion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActionCharacterAnimtion()
{
	if (!Z_Registration_Info_UClass_UActionCharacterAnimtion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionCharacterAnimtion.OuterSingleton, Z_Construct_UClass_UActionCharacterAnimtion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActionCharacterAnimtion.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<UActionCharacterAnimtion>()
{
	return UActionCharacterAnimtion::StaticClass();
}
UActionCharacterAnimtion::UActionCharacterAnimtion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActionCharacterAnimtion);
UActionCharacterAnimtion::~UActionCharacterAnimtion() {}
// End Class UActionCharacterAnimtion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionCharacterAnimtion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActionCharacterAnimtion, UActionCharacterAnimtion::StaticClass, TEXT("UActionCharacterAnimtion"), &Z_Registration_Info_UClass_UActionCharacterAnimtion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionCharacterAnimtion), 620876464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionCharacterAnimtion_h_3993601570(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionCharacterAnimtion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionCharacterAnimtion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
