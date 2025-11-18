// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Player/ActionCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AActionCharacter();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AActionCharacter_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_APickUp_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AUsedWeapon_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UAnimNotifyState_SectionJump_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UInventoryOwner_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UResourceComponent_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
KSHUNREALCPP_API UEnum* Z_Construct_UEnum_KSHUnrealCPP_EItemCode();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class AActionCharacter Function OnAttackMontageEnded
struct Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics
{
	struct ActionCharacter_eventOnAttackMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool binterrupt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_binterrupt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_binterrupt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionCharacter_eventOnAttackMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::NewProp_binterrupt_SetBit(void* Obj)
{
	((ActionCharacter_eventOnAttackMontageEnded_Parms*)Obj)->binterrupt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::NewProp_binterrupt = { "binterrupt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActionCharacter_eventOnAttackMontageEnded_Parms), &Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::NewProp_binterrupt_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::NewProp_binterrupt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActionCharacter, nullptr, "OnAttackMontageEnded", nullptr, nullptr, Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::ActionCharacter_eventOnAttackMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::ActionCharacter_eventOnAttackMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActionCharacter::execOnAttackMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_binterrupt);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_binterrupt);
	P_NATIVE_END;
}
// End Class AActionCharacter Function OnAttackMontageEnded

// Begin Class AActionCharacter Function OnBeginOverlap
struct Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics
{
	struct ActionCharacter_eventOnBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionCharacter_eventOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionCharacter_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActionCharacter, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::ActionCharacter_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::ActionCharacter_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActionCharacter_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActionCharacter_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActionCharacter::execOnBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AActionCharacter Function OnBeginOverlap

// Begin Class AActionCharacter Function SetWalkMode
struct Z_Construct_UFunction_AActionCharacter_SetWalkMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb1\xb7\xea\xb8\xb0 \xeb\xaa\xa8\xeb\x93\x9c \xec\x84\xa4\xec\xa0\x95(\xeb\x8b\xa4\xec\x9d\xb4\xeb\x82\x98\xeb\xaf\xb9 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xec\x97\x90 \xeb\xb0\x94\xec\x9d\xb8\xeb\x93\x9c\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 UFUNCTION \xec\xb6\x94\xea\xb0\x80)\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb1\xb7\xea\xb8\xb0 \xeb\xaa\xa8\xeb\x93\x9c \xec\x84\xa4\xec\xa0\x95(\xeb\x8b\xa4\xec\x9d\xb4\xeb\x82\x98\xeb\xaf\xb9 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xec\x97\x90 \xeb\xb0\x94\xec\x9d\xb8\xeb\x93\x9c\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 UFUNCTION \xec\xb6\x94\xea\xb0\x80)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActionCharacter_SetWalkMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActionCharacter, nullptr, "SetWalkMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActionCharacter_SetWalkMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActionCharacter_SetWalkMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActionCharacter_SetWalkMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActionCharacter_SetWalkMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActionCharacter::execSetWalkMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWalkMode();
	P_NATIVE_END;
}
// End Class AActionCharacter Function SetWalkMode

// Begin Class AActionCharacter Function TestDropCurrentWeapon
struct Z_Construct_UFunction_AActionCharacter_TestDropCurrentWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActionCharacter_TestDropCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActionCharacter, nullptr, "TestDropCurrentWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActionCharacter_TestDropCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActionCharacter_TestDropCurrentWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActionCharacter_TestDropCurrentWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActionCharacter_TestDropCurrentWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActionCharacter::execTestDropCurrentWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestDropCurrentWeapon();
	P_NATIVE_END;
}
// End Class AActionCharacter Function TestDropCurrentWeapon

// Begin Class AActionCharacter Function TestDropUsedWeapon
struct Z_Construct_UFunction_AActionCharacter_TestDropUsedWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActionCharacter_TestDropUsedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActionCharacter, nullptr, "TestDropUsedWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActionCharacter_TestDropUsedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActionCharacter_TestDropUsedWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActionCharacter_TestDropUsedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActionCharacter_TestDropUsedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActionCharacter::execTestDropUsedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestDropUsedWeapon();
	P_NATIVE_END;
}
// End Class AActionCharacter Function TestDropUsedWeapon

// Begin Class AActionCharacter
void AActionCharacter::StaticRegisterNativesAActionCharacter()
{
	UClass* Class = AActionCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAttackMontageEnded", &AActionCharacter::execOnAttackMontageEnded },
		{ "OnBeginOverlap", &AActionCharacter::execOnBeginOverlap },
		{ "SetWalkMode", &AActionCharacter::execSetWalkMode },
		{ "TestDropCurrentWeapon", &AActionCharacter::execTestDropCurrentWeapon },
		{ "TestDropUsedWeapon", &AActionCharacter::execTestDropUsedWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActionCharacter);
UClass* Z_Construct_UClass_AActionCharacter_NoRegister()
{
	return AActionCharacter::StaticClass();
}
struct Z_Construct_UClass_AActionCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/ActionCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Player|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "Player|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[] = {
		{ "Category", "Player|Resource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "Player|Resource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropLocation_MetaData[] = {
		{ "Category", "Player|Resource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb8\xed\x92\x8b \xec\x95\xa1\xec\x85\x98\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb8\xed\x92\x8b \xec\x95\xa1\xec\x85\x98\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Sprint_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Roll_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Attack_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_MeleeAttack_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Player|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8b\xac\xeb\xa6\xac\xea\xb8\xb0 \xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8b\xac\xeb\xa6\xac\xea\xb8\xb0 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Player|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb1\xb7\xea\xb8\xb0 \xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb1\xb7\xea\xb8\xb0 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollMontage_MetaData[] = {
		{ "Category", "Animation|Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb5\xac\xeb\xa5\xb4\xea\xb8\xb0 \xeb\xaa\xbd\xed\x83\x80\xec\xa3\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb5\xac\xeb\xa5\xb4\xea\xb8\xb0 \xeb\xaa\xbd\xed\x83\x80\xec\xa3\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Animation|Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9 \xeb\xaa\xbd\xed\x83\x80\xec\xa3\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9 \xeb\xaa\xbd\xed\x83\x80\xec\xa3\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackMontage_MetaData[] = {
		{ "Category", "Animation|Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9""2 \xeb\xaa\xbd\xed\x83\x80\xec\xa3\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9""2 \xeb\xaa\xbd\xed\x83\x80\xec\xa3\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintStaminaCost_MetaData[] = {
		{ "Category", "Player|Resource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8b\xac\xeb\xa6\xac\xea\xb8\xb0 \xec\x83\x81\xed\x83\x9c\xec\x9d\xbc \xeb\x95\x8c \xec\xb4\x88\xeb\x8b\xb9 \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xeb\xb9\x84\xec\x9a\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8b\xac\xeb\xa6\xac\xea\xb8\xb0 \xec\x83\x81\xed\x83\x9c\xec\x9d\xbc \xeb\x95\x8c \xec\xb4\x88\xeb\x8b\xb9 \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xeb\xb9\x84\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollStaminaCost_MetaData[] = {
		{ "Category", "Player|Resource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb5\xac\xeb\xa5\xb4\xea\xb8\xb0\xeb\xa5\xbc \xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xeb\xb9\x84\xec\x9a\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb5\xac\xeb\xa5\xb4\xea\xb8\xb0\xeb\xa5\xbc \xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xeb\xb9\x84\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackStaminaCost_MetaData[] = {
		{ "Category", "Player|Resource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9\xec\x9d\x84 \xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xeb\xb9\x84\xec\x9a\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9\xec\x9d\x84 \xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xeb\xb9\x84\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackStaminaCost_MetaData[] = {
		{ "Category", "Player|Resource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9""2\xec\x9d\x84 \xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xeb\xb9\x84\xec\x9a\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9""2\xec\x9d\x84 \xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xeb\xb9\x84\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprint_MetaData[] = {
		{ "Category", "Player|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 \xeb\x9b\xb0\xea\xb3\xa0 \xec\x9e\x88\xeb\x8a\x94 \xec\xa4\x91\xec\x9d\xb8\xec\xa7\x80 \xed\x91\x9c\xec\x8b\x9c \xed\x95\xb4\xeb\x86\x93\xec\x9d\x80 \xeb\xb3\x80\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 \xeb\x9b\xb0\xea\xb3\xa0 \xec\x9e\x88\xeb\x8a\x94 \xec\xa4\x91\xec\x9d\xb8\xec\xa7\x80 \xed\x91\x9c\xec\x8b\x9c \xed\x95\xb4\xeb\x86\x93\xec\x9d\x80 \xeb\xb3\x80\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Player|Weapon" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsedWeapons_MetaData[] = {
		{ "Category", "Player|Weapon" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpWeapons_MetaData[] = {
		{ "Category", "Player|Weapon" },
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionJumpNotify_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/ActionCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Resource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Status;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Sprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Roll;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Attack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_MeleeAttack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeAttackMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintStaminaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollStaminaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackStaminaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeAttackStaminaCost;
	static void NewProp_bIsSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UsedWeapons_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UsedWeapons_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UsedWeapons_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UsedWeapons;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PickUpWeapons_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PickUpWeapons_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PickUpWeapons_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PickUpWeapons;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionJumpNotify;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AActionCharacter_OnAttackMontageEnded, "OnAttackMontageEnded" }, // 3336626854
		{ &Z_Construct_UFunction_AActionCharacter_OnBeginOverlap, "OnBeginOverlap" }, // 3847017286
		{ &Z_Construct_UFunction_AActionCharacter_SetWalkMode, "SetWalkMode" }, // 1205112217
		{ &Z_Construct_UFunction_AActionCharacter_TestDropCurrentWeapon, "TestDropCurrentWeapon" }, // 3314434607
		{ &Z_Construct_UFunction_AActionCharacter_TestDropUsedWeapon, "TestDropUsedWeapon" }, // 1482567345
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCamera_MetaData), NewProp_PlayerCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, Resource), Z_Construct_UClass_UResourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resource_MetaData), NewProp_Resource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, Status), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_DropLocation = { "DropLocation", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, DropLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropLocation_MetaData), NewProp_DropLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_IA_Sprint = { "IA_Sprint", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, IA_Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Sprint_MetaData), NewProp_IA_Sprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_IA_Roll = { "IA_Roll", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, IA_Roll), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Roll_MetaData), NewProp_IA_Roll_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_IA_Attack = { "IA_Attack", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, IA_Attack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Attack_MetaData), NewProp_IA_Attack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_IA_MeleeAttack = { "IA_MeleeAttack", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, IA_MeleeAttack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_MeleeAttack_MetaData), NewProp_IA_MeleeAttack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_RollMontage = { "RollMontage", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, RollMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollMontage_MetaData), NewProp_RollMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_MeleeAttackMontage = { "MeleeAttackMontage", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, MeleeAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAttackMontage_MetaData), NewProp_MeleeAttackMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_SprintStaminaCost = { "SprintStaminaCost", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, SprintStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintStaminaCost_MetaData), NewProp_SprintStaminaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_RollStaminaCost = { "RollStaminaCost", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, RollStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollStaminaCost_MetaData), NewProp_RollStaminaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_AttackStaminaCost = { "AttackStaminaCost", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, AttackStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackStaminaCost_MetaData), NewProp_AttackStaminaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_MeleeAttackStaminaCost = { "MeleeAttackStaminaCost", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, MeleeAttackStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAttackStaminaCost_MetaData), NewProp_MeleeAttackStaminaCost_MetaData) };
void Z_Construct_UClass_AActionCharacter_Statics::NewProp_bIsSprint_SetBit(void* Obj)
{
	((AActionCharacter*)Obj)->bIsSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_bIsSprint = { "bIsSprint", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AActionCharacter), &Z_Construct_UClass_AActionCharacter_Statics::NewProp_bIsSprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSprint_MetaData), NewProp_bIsSprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, CurrentWeapon), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_UsedWeapons_ValueProp = { "UsedWeapons", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_AUsedWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_UsedWeapons_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_UsedWeapons_Key_KeyProp = { "UsedWeapons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_KSHUnrealCPP_EItemCode, METADATA_PARAMS(0, nullptr) }; // 3628415129
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_UsedWeapons = { "UsedWeapons", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, UsedWeapons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsedWeapons_MetaData), NewProp_UsedWeapons_MetaData) }; // 3628415129
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_PickUpWeapons_ValueProp = { "PickUpWeapons", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_APickUp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_PickUpWeapons_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_PickUpWeapons_Key_KeyProp = { "PickUpWeapons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_KSHUnrealCPP_EItemCode, METADATA_PARAMS(0, nullptr) }; // 3628415129
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_PickUpWeapons = { "PickUpWeapons", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, PickUpWeapons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpWeapons_MetaData), NewProp_PickUpWeapons_MetaData) }; // 3628415129
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionCharacter_Statics::NewProp_SectionJumpNotify = { "SectionJumpNotify", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActionCharacter, SectionJumpNotify), Z_Construct_UClass_UAnimNotifyState_SectionJump_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionJumpNotify_MetaData), NewProp_SectionJumpNotify_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActionCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_PlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_Resource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_DropLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_IA_Sprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_IA_Roll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_IA_Attack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_IA_MeleeAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_RollMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_MeleeAttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_SprintStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_RollStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_AttackStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_MeleeAttackStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_bIsSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_UsedWeapons_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_UsedWeapons_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_UsedWeapons_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_UsedWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_PickUpWeapons_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_PickUpWeapons_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_PickUpWeapons_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_PickUpWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionCharacter_Statics::NewProp_SectionJumpNotify,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActionCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActionCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActionCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AActionCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryOwner_NoRegister, (int32)VTABLE_OFFSET(AActionCharacter, IInventoryOwner), false },  // 401072001
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActionCharacter_Statics::ClassParams = {
	&AActionCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AActionCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AActionCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActionCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AActionCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActionCharacter()
{
	if (!Z_Registration_Info_UClass_AActionCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActionCharacter.OuterSingleton, Z_Construct_UClass_AActionCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActionCharacter.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<AActionCharacter>()
{
	return AActionCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActionCharacter);
AActionCharacter::~AActionCharacter() {}
// End Class AActionCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActionCharacter, AActionCharacter::StaticClass, TEXT("AActionCharacter"), &Z_Registration_Info_UClass_AActionCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActionCharacter), 156142749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionCharacter_h_3562795051(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
