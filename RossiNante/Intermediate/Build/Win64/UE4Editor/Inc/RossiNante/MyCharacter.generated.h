// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef ROSSINANTE_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define ROSSINANTE_MyCharacter_generated_h

#define RossiNante_Source_RossiNante_MyCharacter_h_13_SPARSE_DATA
#define RossiNante_Source_RossiNante_MyCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTumble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tumble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSkillCastEnded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSkillCastEnded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTumbleEnded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTumbleEnded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHitEnded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHitEnded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttackEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackEnded(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_MyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTumble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tumble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSkillCastEnded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSkillCastEnded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTumbleEnded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTumbleEnded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHitEnded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHitEnded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttackEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackEnded(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_MyCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define RossiNante_Source_RossiNante_MyCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define RossiNante_Source_RossiNante_MyCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define RossiNante_Source_RossiNante_MyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define RossiNante_Source_RossiNante_MyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AMyCharacter, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__IsSkillCasting() { return STRUCT_OFFSET(AMyCharacter, IsSkillCasting); } \
	FORCEINLINE static uint32 __PPO__IsTumbling() { return STRUCT_OFFSET(AMyCharacter, IsTumbling); } \
	FORCEINLINE static uint32 __PPO__IsJumping() { return STRUCT_OFFSET(AMyCharacter, IsJumping); } \
	FORCEINLINE static uint32 __PPO__AnimInstance() { return STRUCT_OFFSET(AMyCharacter, AnimInstance); } \
	FORCEINLINE static uint32 __PPO__q_coolTime() { return STRUCT_OFFSET(AMyCharacter, q_coolTime); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(AMyCharacter, Speed); }


#define RossiNante_Source_RossiNante_MyCharacter_h_10_PROLOG
#define RossiNante_Source_RossiNante_MyCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyCharacter_h_13_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyCharacter_h_13_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_MyCharacter_h_13_INCLASS \
	RossiNante_Source_RossiNante_MyCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RossiNante_Source_RossiNante_MyCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyCharacter_h_13_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyCharacter_h_13_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
