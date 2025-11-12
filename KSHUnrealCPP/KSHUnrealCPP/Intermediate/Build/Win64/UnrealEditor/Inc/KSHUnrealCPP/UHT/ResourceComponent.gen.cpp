// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Player/ResourceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UResourceComponent();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UResourceComponent_NoRegister();
KSHUNREALCPP_API UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnDie__DelegateSignature();
KSHUNREALCPP_API UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature();
KSHUNREALCPP_API UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaEmpty__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Delegate FOnStaminaEmpty
struct Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaEmpty__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FOnStaminaEmpty\xec\x9d\xb4\xeb\xa6\x84\xec\x9d\x98 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xea\xb0\x80 \xec\x9e\x88\xeb\x8b\xa4\xeb\x9d\xbc\xea\xb3\xa0 \xed\x83\x80\xec\x9e\x85\xec\x9d\x84 \xec\x84\xa0\xec\x96\xb8\xed\x95\x9c \xea\xb2\x83\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOnStaminaEmpty\xec\x9d\xb4\xeb\xa6\x84\xec\x9d\x98 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xea\xb0\x80 \xec\x9e\x88\xeb\x8b\xa4\xeb\x9d\xbc\xea\xb3\xa0 \xed\x83\x80\xec\x9e\x85\xec\x9d\x84 \xec\x84\xa0\xec\x96\xb8\xed\x95\x9c \xea\xb2\x83" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaEmpty__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KSHUnrealCPP, nullptr, "OnStaminaEmpty__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaEmpty__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaEmpty__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaEmpty__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaEmpty__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaEmpty_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaEmpty)
{
	OnStaminaEmpty.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnStaminaEmpty

// Begin Delegate FOnDie
struct Z_Construct_UDelegateFunction_KSHUnrealCPP_OnDie__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KSHUnrealCPP_OnDie__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KSHUnrealCPP, nullptr, "OnDie__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KSHUnrealCPP_OnDie__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_KSHUnrealCPP_OnDie__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnDie__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KSHUnrealCPP_OnDie__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDie_DelegateWrapper(const FMulticastScriptDelegate& OnDie)
{
	OnDie.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDie

// Begin Delegate FOnStaminaChanged
struct Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics
{
	struct _Script_KSHUnrealCPP_eventOnStaminaChanged_Parms
	{
		float Current;
		float Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xeb\xa7\x9d \xec\x95\x8c\xeb\xa6\xbc\xec\x9a\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xeb\xa7\x9d \xec\x95\x8c\xeb\xa6\xbc\xec\x9a\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_KSHUnrealCPP_eventOnStaminaChanged_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_KSHUnrealCPP_eventOnStaminaChanged_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KSHUnrealCPP, nullptr, "OnStaminaChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::_Script_KSHUnrealCPP_eventOnStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::_Script_KSHUnrealCPP_eventOnStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChanged, float Current, float Max)
{
	struct _Script_KSHUnrealCPP_eventOnStaminaChanged_Parms
	{
		float Current;
		float Max;
	};
	_Script_KSHUnrealCPP_eventOnStaminaChanged_Parms Parms;
	Parms.Current=Current;
	Parms.Max=Max;
	OnStaminaChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStaminaChanged

// Begin Class UResourceComponent Function AddHealth
struct Z_Construct_UFunction_UResourceComponent_AddHealth_Statics
{
	struct ResourceComponent_eventAddHealth_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5 \xec\xb6\x94\xea\xb0\x80/\xea\xb0\x90\xec\x86\x8c\xec\x9a\xa9 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5 \xec\xb6\x94\xea\xb0\x80/\xea\xb0\x90\xec\x86\x8c\xec\x9a\xa9 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceComponent_eventAddHealth_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResourceComponent, nullptr, "AddHealth", nullptr, nullptr, Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::ResourceComponent_eventAddHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::ResourceComponent_eventAddHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceComponent_AddHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceComponent_AddHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceComponent::execAddHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHealth(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UResourceComponent Function AddHealth

// Begin Class UResourceComponent Function AddStamina
struct Z_Construct_UFunction_UResourceComponent_AddStamina_Statics
{
	struct ResourceComponent_eventAddStamina_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xec\xb6\x94\xea\xb0\x80/\xea\xb0\x90\xec\x86\x8c\xec\x9a\xa9 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xec\xb6\x94\xea\xb0\x80/\xea\xb0\x90\xec\x86\x8c\xec\x9a\xa9 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceComponent_eventAddStamina_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResourceComponent, nullptr, "AddStamina", nullptr, nullptr, Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::ResourceComponent_eventAddStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::ResourceComponent_eventAddStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceComponent_AddStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceComponent_AddStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceComponent::execAddStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStamina(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UResourceComponent Function AddStamina

// Begin Class UResourceComponent Function GetCurrentHealth
struct Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics
{
	struct ResourceComponent_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceComponent_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResourceComponent, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::ResourceComponent_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::ResourceComponent_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceComponent_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceComponent_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceComponent::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// End Class UResourceComponent Function GetCurrentHealth

// Begin Class UResourceComponent Function HasEnoughStamina
struct Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics
{
	struct ResourceComponent_eventHasEnoughStamina_Parms
	{
		float InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88\xea\xb0\x80 \xec\xb6\xa9\xeb\xb6\x84\xed\x95\x9c\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88\xea\xb0\x80 \xec\xb6\xa9\xeb\xb6\x84\xed\x95\x9c\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceComponent_eventHasEnoughStamina_Parms, InValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceComponent_eventHasEnoughStamina_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceComponent_eventHasEnoughStamina_Parms), &Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResourceComponent, nullptr, "HasEnoughStamina", nullptr, nullptr, Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::ResourceComponent_eventHasEnoughStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::ResourceComponent_eventHasEnoughStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceComponent_HasEnoughStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceComponent_HasEnoughStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceComponent::execHasEnoughStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEnoughStamina(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UResourceComponent Function HasEnoughStamina

// Begin Class UResourceComponent Function IsAlive
struct Z_Construct_UFunction_UResourceComponent_IsAlive_Statics
{
	struct ResourceComponent_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceComponent_eventIsAlive_Parms), &Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResourceComponent, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::ResourceComponent_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::ResourceComponent_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceComponent_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceComponent_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceComponent::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class UResourceComponent Function IsAlive

// Begin Class UResourceComponent
void UResourceComponent::StaticRegisterNativesUResourceComponent()
{
	UClass* Class = UResourceComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHealth", &UResourceComponent::execAddHealth },
		{ "AddStamina", &UResourceComponent::execAddStamina },
		{ "GetCurrentHealth", &UResourceComponent::execGetCurrentHealth },
		{ "HasEnoughStamina", &UResourceComponent::execHasEnoughStamina },
		{ "IsAlive", &UResourceComponent::execIsAlive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResourceComponent);
UClass* Z_Construct_UClass_UResourceComponent_NoRegister()
{
	return UResourceComponent::StaticClass();
}
struct Z_Construct_UClass_UResourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5 \xeb\xb3\x80\xea\xb2\xbd \xec\x95\x8c\xeb\xa6\xbc\xec\x9a\xa9(\xeb\xb9\x84\xea\xb5\x90\xeb\xa5\xbc \xec\x9c\x84\xed\x95\xb4 \xec\x9d\xbc\xeb\xb0\x98 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xac)\n" },
#endif
		{ "IncludePath", "Player/ResourceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5 \xeb\xb3\x80\xea\xb2\xbd \xec\x95\x8c\xeb\xa6\xbc\xec\x9a\xa9(\xeb\xb9\x84\xea\xb5\x90\xeb\xa5\xbc \xec\x9c\x84\xed\x95\xb4 \xec\x9d\xbc\xeb\xb0\x98 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xac)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaEmpty_MetaData[] = {
		{ "Category", "Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88\xea\xb0\x80 \xeb\x8b\xa4 \xeb\x96\xa8\xec\x96\xb4\xec\xa1\x8c\xec\x9d\x8c\xec\x9d\x84 \xec\x95\x8c\xeb\xa6\xac\xeb\x8a\x94 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88\xea\xb0\x80 \xeb\x8b\xa4 \xeb\x96\xa8\xec\x96\xb4\xec\xa1\x8c\xec\x9d\x8c\xec\x9d\x84 \xec\x95\x8c\xeb\xa6\xac\xeb\x8a\x94 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ondie_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaChanged_MetaData[] = {
		{ "Category", "Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xeb\xb3\x80\xed\x99\x94\xeb\xa5\xbc \xec\x95\x8c\xeb\xa6\xac\xeb\x8a\x94 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xeb\xb3\x80\xed\x99\x94\xeb\xa5\xbc \xec\x95\x8c\xeb\xa6\xac\xeb\x8a\x94 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Data|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Data|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Data|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Data|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenCoolTime_MetaData[] = {
		{ "Category", "Data|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x85\x8c\xeb\xaf\xb8\xeb\x84\x88\xea\xb0\x80 \xec\x9e\x90\xeb\x8f\x99 \xed\x9a\x8c\xeb\xb3\xb5\xeb\x90\x98\xeb\x8a\x94\xeb\x8d\xb0 \xea\xb1\xb8\xeb\xa6\xac\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x85\x8c\xeb\xaf\xb8\xeb\x84\x88\xea\xb0\x80 \xec\x9e\x90\xeb\x8f\x99 \xed\x9a\x8c\xeb\xb3\xb5\xeb\x90\x98\xeb\x8a\x94\xeb\x8d\xb0 \xea\xb1\xb8\xeb\xa6\xac\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaTickInterval_MetaData[] = {
		{ "Category", "Data|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xed\x8b\xb1 \xea\xb0\x84\xea\xb2\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xed\x8b\xb1 \xea\xb0\x84\xea\xb2\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenAmountPerTick_MetaData[] = {
		{ "Category", "Data|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xec\x9e\x90\xeb\x8f\x99 \xed\x9a\x8c\xeb\xb3\xb5\xec\x96\x91(\xed\x8b\xb1\xeb\x8b\xb9)\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 \xec\x9e\x90\xeb\x8f\x99 \xed\x9a\x8c\xeb\xb3\xb5\xec\x96\x91(\xed\x8b\xb1\xeb\x8b\xb9)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaEmpty;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Ondie;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenCoolTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaTickInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenAmountPerTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UResourceComponent_AddHealth, "AddHealth" }, // 1728863256
		{ &Z_Construct_UFunction_UResourceComponent_AddStamina, "AddStamina" }, // 3367998407
		{ &Z_Construct_UFunction_UResourceComponent_GetCurrentHealth, "GetCurrentHealth" }, // 551090317
		{ &Z_Construct_UFunction_UResourceComponent_HasEnoughStamina, "HasEnoughStamina" }, // 2020483172
		{ &Z_Construct_UFunction_UResourceComponent_IsAlive, "IsAlive" }, // 3323068772
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResourceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_OnStaminaEmpty = { "OnStaminaEmpty", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, OnStaminaEmpty), Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaEmpty__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaEmpty_MetaData), NewProp_OnStaminaEmpty_MetaData) }; // 1483569765
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_Ondie = { "Ondie", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, Ondie), Z_Construct_UDelegateFunction_KSHUnrealCPP_OnDie__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ondie_MetaData), NewProp_Ondie_MetaData) }; // 3950746805
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_OnStaminaChanged = { "OnStaminaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, OnStaminaChanged), Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaChanged_MetaData), NewProp_OnStaminaChanged_MetaData) }; // 3625246571
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_StaminaRegenCoolTime = { "StaminaRegenCoolTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, StaminaRegenCoolTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenCoolTime_MetaData), NewProp_StaminaRegenCoolTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_StaminaTickInterval = { "StaminaTickInterval", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, StaminaTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaTickInterval_MetaData), NewProp_StaminaTickInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_StaminaRegenAmountPerTick = { "StaminaRegenAmountPerTick", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, StaminaRegenAmountPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenAmountPerTick_MetaData), NewProp_StaminaRegenAmountPerTick_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResourceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_OnStaminaEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_Ondie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_OnStaminaChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_StaminaRegenCoolTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_StaminaTickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_StaminaRegenAmountPerTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UResourceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResourceComponent_Statics::ClassParams = {
	&UResourceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UResourceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UResourceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UResourceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResourceComponent()
{
	if (!Z_Registration_Info_UClass_UResourceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResourceComponent.OuterSingleton, Z_Construct_UClass_UResourceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResourceComponent.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<UResourceComponent>()
{
	return UResourceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResourceComponent);
UResourceComponent::~UResourceComponent() {}
// End Class UResourceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ResourceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResourceComponent, UResourceComponent::StaticClass, TEXT("UResourceComponent"), &Z_Registration_Info_UClass_UResourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResourceComponent), 2589325563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ResourceComponent_h_495997582(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ResourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ResourceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
