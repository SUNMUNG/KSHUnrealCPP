// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Test/FloatingActor2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingActor2() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AFloatingActor2();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AFloatingActor2_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class AFloatingActor2 Function MoveUpDown
struct Z_Construct_UFunction_AFloatingActor2_MoveUpDown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/FloatingActor2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloatingActor2_MoveUpDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloatingActor2, nullptr, "MoveUpDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloatingActor2_MoveUpDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloatingActor2_MoveUpDown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFloatingActor2_MoveUpDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloatingActor2_MoveUpDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloatingActor2::execMoveUpDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveUpDown();
	P_NATIVE_END;
}
// End Class AFloatingActor2 Function MoveUpDown

// Begin Class AFloatingActor2 Function MoveUpDownCos
struct Z_Construct_UFunction_AFloatingActor2_MoveUpDownCos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/FloatingActor2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloatingActor2_MoveUpDownCos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloatingActor2, nullptr, "MoveUpDownCos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloatingActor2_MoveUpDownCos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloatingActor2_MoveUpDownCos_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFloatingActor2_MoveUpDownCos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloatingActor2_MoveUpDownCos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloatingActor2::execMoveUpDownCos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveUpDownCos();
	P_NATIVE_END;
}
// End Class AFloatingActor2 Function MoveUpDownCos

// Begin Class AFloatingActor2 Function RotateZ
struct Z_Construct_UFunction_AFloatingActor2_RotateZ_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/FloatingActor2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloatingActor2_RotateZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloatingActor2, nullptr, "RotateZ", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloatingActor2_RotateZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloatingActor2_RotateZ_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFloatingActor2_RotateZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloatingActor2_RotateZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloatingActor2::execRotateZ)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateZ();
	P_NATIVE_END;
}
// End Class AFloatingActor2 Function RotateZ

// Begin Class AFloatingActor2
void AFloatingActor2::StaticRegisterNativesAFloatingActor2()
{
	UClass* Class = AFloatingActor2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveUpDown", &AFloatingActor2::execMoveUpDown },
		{ "MoveUpDownCos", &AFloatingActor2::execMoveUpDownCos },
		{ "RotateZ", &AFloatingActor2::execRotateZ },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloatingActor2);
UClass* Z_Construct_UClass_AFloatingActor2_NoRegister()
{
	return AFloatingActor2::StaticClass();
}
struct Z_Construct_UClass_AFloatingActor2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Test/FloatingActor2.h" },
		{ "ModuleRelativePath", "Public/Test/FloatingActor2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[] = {
		{ "Category", "FloatingActor2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x8b\x9c\xea\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/Test/FloatingActor2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\x9c\xea\xb0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "FloatingActor2" },
		{ "ModuleRelativePath", "Public/Test/FloatingActor2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "FloatingActor2" },
		{ "ModuleRelativePath", "Public/Test/FloatingActor2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveHeight_MetaData[] = {
		{ "Category", "FloatingActor2" },
		{ "ModuleRelativePath", "Public/Test/FloatingActor2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpinSpeed_MetaData[] = {
		{ "Category", "FloatingActor2" },
		{ "ModuleRelativePath", "Public/Test/FloatingActor2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[] = {
		{ "Category", "FloatingActor2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Test/FloatingActor2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpinSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloatingActor2_MoveUpDown, "MoveUpDown" }, // 1618716054
		{ &Z_Construct_UFunction_AFloatingActor2_MoveUpDownCos, "MoveUpDownCos" }, // 89226680
		{ &Z_Construct_UFunction_AFloatingActor2_RotateZ, "RotateZ" }, // 1725013253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloatingActor2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingActor2_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingActor2, time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_time_MetaData), NewProp_time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingActor2_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingActor2, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTime_MetaData), NewProp_ElapsedTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingActor2_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingActor2, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingActor2_Statics::NewProp_MoveHeight = { "MoveHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingActor2, MoveHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveHeight_MetaData), NewProp_MoveHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingActor2_Statics::NewProp_SpinSpeed = { "SpinSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingActor2, SpinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpinSpeed_MetaData), NewProp_SpinSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingActor2_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingActor2, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyMesh_MetaData), NewProp_BodyMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloatingActor2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor2_Statics::NewProp_time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor2_Statics::NewProp_ElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor2_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor2_Statics::NewProp_MoveHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor2_Statics::NewProp_SpinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor2_Statics::NewProp_BodyMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFloatingActor2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloatingActor2_Statics::ClassParams = {
	&AFloatingActor2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFloatingActor2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor2_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor2_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloatingActor2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFloatingActor2()
{
	if (!Z_Registration_Info_UClass_AFloatingActor2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloatingActor2.OuterSingleton, Z_Construct_UClass_AFloatingActor2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFloatingActor2.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<AFloatingActor2>()
{
	return AFloatingActor2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingActor2);
AFloatingActor2::~AFloatingActor2() {}
// End Class AFloatingActor2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Test_FloatingActor2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFloatingActor2, AFloatingActor2::StaticClass, TEXT("AFloatingActor2"), &Z_Registration_Info_UClass_AFloatingActor2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloatingActor2), 1196694504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Test_FloatingActor2_h_2517609103(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Test_FloatingActor2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Test_FloatingActor2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
