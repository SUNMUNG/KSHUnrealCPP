// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/CommonEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KSHUNREALCPP_CommonEnums_generated_h
#error "CommonEnums.generated.h already included, missing '#pragma once' in CommonEnums.h"
#endif
#define KSHUNREALCPP_CommonEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Common_CommonEnums_h


#define FOREACH_ENUM_EITEMCODE(op) \
	op(EItemCode::BasicWeapon) \
	op(EItemCode::Sword) \
	op(EItemCode::Hammer) 

enum class EItemCode : uint8;
template<> struct TIsUEnumClass<EItemCode> { enum { Value = true }; };
template<> KSHUNREALCPP_API UEnum* StaticEnum<EItemCode>();

#define FOREACH_ENUM_EBITFLAG(op) \
	op(EBitFlag::None) \
	op(EBitFlag::Test1) \
	op(EBitFlag::Test2) \
	op(EBitFlag::Test3) \
	op(EBitFlag::Test4) \
	op(EBitFlag::Test5) 

enum class EBitFlag : uint8;
template<> struct TIsUEnumClass<EBitFlag> { enum { Value = true }; };
template<> KSHUNREALCPP_API UEnum* StaticEnum<EBitFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
