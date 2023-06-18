// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSSINANTE_MyBossClass_generated_h
#error "MyBossClass.generated.h already included, missing '#pragma once' in MyBossClass.h"
#endif
#define ROSSINANTE_MyBossClass_generated_h

#define RossiNante_Source_RossiNante_MyBossClass_h_12_SPARSE_DATA
#define RossiNante_Source_RossiNante_MyBossClass_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDieAnim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DieAnim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnAnim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnAnim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHitReact) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HitReact(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPowerDash_Skill_End) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PowerDash_Skill_End(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPowerDash_Skill_Start) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PowerDash_Skill_Start(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack_Skill_End) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack_Skill_End(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack_Skill_Melee) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack_Skill_Melee(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyBossAttack_Melee_End) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyBossAttack_Melee_End(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyBossAttack_Melee) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyBossAttack_Melee(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_MyBossClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDieAnim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DieAnim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnAnim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnAnim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHitReact) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HitReact(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPowerDash_Skill_End) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PowerDash_Skill_End(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPowerDash_Skill_Start) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PowerDash_Skill_Start(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack_Skill_End) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack_Skill_End(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack_Skill_Melee) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack_Skill_Melee(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyBossAttack_Melee_End) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyBossAttack_Melee_End(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyBossAttack_Melee) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyBossAttack_Melee(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_MyBossClass_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyBossClass(); \
	friend struct Z_Construct_UClass_AMyBossClass_Statics; \
public: \
	DECLARE_CLASS(AMyBossClass, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(AMyBossClass)


#define RossiNante_Source_RossiNante_MyBossClass_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyBossClass(); \
	friend struct Z_Construct_UClass_AMyBossClass_Statics; \
public: \
	DECLARE_CLASS(AMyBossClass, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(AMyBossClass)


#define RossiNante_Source_RossiNante_MyBossClass_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyBossClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyBossClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBossClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBossClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBossClass(AMyBossClass&&); \
	NO_API AMyBossClass(const AMyBossClass&); \
public:


#define RossiNante_Source_RossiNante_MyBossClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBossClass(AMyBossClass&&); \
	NO_API AMyBossClass(const AMyBossClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBossClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBossClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyBossClass)


#define RossiNante_Source_RossiNante_MyBossClass_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimInstance() { return STRUCT_OFFSET(AMyBossClass, AnimInstance); } \
	FORCEINLINE static uint32 __PPO__DefaultHP() { return STRUCT_OFFSET(AMyBossClass, DefaultHP); } \
	FORCEINLINE static uint32 __PPO__BaseAttackDamage() { return STRUCT_OFFSET(AMyBossClass, BaseAttackDamage); } \
	FORCEINLINE static uint32 __PPO__AttackRange() { return STRUCT_OFFSET(AMyBossClass, AttackRange); } \
	FORCEINLINE static uint32 __PPO__FollowDistance() { return STRUCT_OFFSET(AMyBossClass, FollowDistance); } \
	FORCEINLINE static uint32 __PPO__CurSpeed() { return STRUCT_OFFSET(AMyBossClass, CurSpeed); } \
	FORCEINLINE static uint32 __PPO__RunSpeed() { return STRUCT_OFFSET(AMyBossClass, RunSpeed); } \
	FORCEINLINE static uint32 __PPO__WalkSpeed() { return STRUCT_OFFSET(AMyBossClass, WalkSpeed); } \
	FORCEINLINE static uint32 __PPO__AttackRate() { return STRUCT_OFFSET(AMyBossClass, AttackRate); } \
	FORCEINLINE static uint32 __PPO__isRunning() { return STRUCT_OFFSET(AMyBossClass, isRunning); } \
	FORCEINLINE static uint32 __PPO__TargetPlayer() { return STRUCT_OFFSET(AMyBossClass, TargetPlayer); } \
	FORCEINLINE static uint32 __PPO__SkillCooldown() { return STRUCT_OFFSET(AMyBossClass, SkillCooldown); } \
	FORCEINLINE static uint32 __PPO__SkillCooldownTime() { return STRUCT_OFFSET(AMyBossClass, SkillCooldownTime); } \
	FORCEINLINE static uint32 __PPO__isDuringAttack() { return STRUCT_OFFSET(AMyBossClass, isDuringAttack); } \
	FORCEINLINE static uint32 __PPO__isDie() { return STRUCT_OFFSET(AMyBossClass, isDie); } \
	FORCEINLINE static uint32 __PPO__isSpawn() { return STRUCT_OFFSET(AMyBossClass, isSpawn); } \
	FORCEINLINE static uint32 __PPO__isPhase2() { return STRUCT_OFFSET(AMyBossClass, isPhase2); } \
	FORCEINLINE static uint32 __PPO__MyBossGameStart_Montage() { return STRUCT_OFFSET(AMyBossClass, MyBossGameStart_Montage); } \
	FORCEINLINE static uint32 __PPO__MyBossAttack_Montage() { return STRUCT_OFFSET(AMyBossClass, MyBossAttack_Montage); } \
	FORCEINLINE static uint32 __PPO__MyBossAttack_Skill_Montage() { return STRUCT_OFFSET(AMyBossClass, MyBossAttack_Skill_Montage); } \
	FORCEINLINE static uint32 __PPO__MyBoss_PowerDashMontage() { return STRUCT_OFFSET(AMyBossClass, MyBoss_PowerDashMontage); } \
	FORCEINLINE static uint32 __PPO__MyBoss_ChainMontage() { return STRUCT_OFFSET(AMyBossClass, MyBoss_ChainMontage); } \
	FORCEINLINE static uint32 __PPO__MyBossAttack2_Montage() { return STRUCT_OFFSET(AMyBossClass, MyBossAttack2_Montage); } \
	FORCEINLINE static uint32 __PPO__Boss_HitReactMontage() { return STRUCT_OFFSET(AMyBossClass, Boss_HitReactMontage); } \
	FORCEINLINE static uint32 __PPO__Boss_DeathMontage() { return STRUCT_OFFSET(AMyBossClass, Boss_DeathMontage); } \
	FORCEINLINE static uint32 __PPO__Boss_Phase2Montage() { return STRUCT_OFFSET(AMyBossClass, Boss_Phase2Montage); }


#define RossiNante_Source_RossiNante_MyBossClass_h_9_PROLOG
#define RossiNante_Source_RossiNante_MyBossClass_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyBossClass_h_12_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyBossClass_h_12_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyBossClass_h_12_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_MyBossClass_h_12_INCLASS \
	RossiNante_Source_RossiNante_MyBossClass_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RossiNante_Source_RossiNante_MyBossClass_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyBossClass_h_12_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyBossClass_h_12_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyBossClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyBossClass_h_12_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyBossClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class AMyBossClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_MyBossClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
