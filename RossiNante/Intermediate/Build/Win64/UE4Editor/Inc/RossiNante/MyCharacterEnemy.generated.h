// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSSINANTE_MyCharacterEnemy_generated_h
#error "MyCharacterEnemy.generated.h already included, missing '#pragma once' in MyCharacterEnemy.h"
#endif
#define ROSSINANTE_MyCharacterEnemy_generated_h

#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_SPARSE_DATA
#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSmash_Skill_Start) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Smash_Skill_Start(); \
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
	DECLARE_FUNCTION(execAttack_Melee_End) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack_Melee_End(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack_Melee) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack_Melee(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execSmash_Skill_Start) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Smash_Skill_Start(); \
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
	DECLARE_FUNCTION(execAttack_Melee_End) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack_Melee_End(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack_Melee) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack_Melee(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacterEnemy(); \
	friend struct Z_Construct_UClass_AMyCharacterEnemy_Statics; \
public: \
	DECLARE_CLASS(AMyCharacterEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacterEnemy)


#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacterEnemy(); \
	friend struct Z_Construct_UClass_AMyCharacterEnemy_Statics; \
public: \
	DECLARE_CLASS(AMyCharacterEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacterEnemy)


#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacterEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacterEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacterEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacterEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacterEnemy(AMyCharacterEnemy&&); \
	NO_API AMyCharacterEnemy(const AMyCharacterEnemy&); \
public:


#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacterEnemy(AMyCharacterEnemy&&); \
	NO_API AMyCharacterEnemy(const AMyCharacterEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacterEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacterEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacterEnemy)


#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimInstance() { return STRUCT_OFFSET(AMyCharacterEnemy, AnimInstance); } \
	FORCEINLINE static uint32 __PPO__DefaultHP() { return STRUCT_OFFSET(AMyCharacterEnemy, DefaultHP); } \
	FORCEINLINE static uint32 __PPO__BaseAttackDamage() { return STRUCT_OFFSET(AMyCharacterEnemy, BaseAttackDamage); } \
	FORCEINLINE static uint32 __PPO__AttackRange() { return STRUCT_OFFSET(AMyCharacterEnemy, AttackRange); } \
	FORCEINLINE static uint32 __PPO__FollowDistance() { return STRUCT_OFFSET(AMyCharacterEnemy, FollowDistance); } \
	FORCEINLINE static uint32 __PPO__CurSpeed() { return STRUCT_OFFSET(AMyCharacterEnemy, CurSpeed); } \
	FORCEINLINE static uint32 __PPO__RunSpeed() { return STRUCT_OFFSET(AMyCharacterEnemy, RunSpeed); } \
	FORCEINLINE static uint32 __PPO__WalkSpeed() { return STRUCT_OFFSET(AMyCharacterEnemy, WalkSpeed); } \
	FORCEINLINE static uint32 __PPO__AttackRate() { return STRUCT_OFFSET(AMyCharacterEnemy, AttackRate); } \
	FORCEINLINE static uint32 __PPO__isRunning() { return STRUCT_OFFSET(AMyCharacterEnemy, isRunning); } \
	FORCEINLINE static uint32 __PPO__TargetPlayer() { return STRUCT_OFFSET(AMyCharacterEnemy, TargetPlayer); } \
	FORCEINLINE static uint32 __PPO__SkillCooldown() { return STRUCT_OFFSET(AMyCharacterEnemy, SkillCooldown); } \
	FORCEINLINE static uint32 __PPO__SkillCooldownTime() { return STRUCT_OFFSET(AMyCharacterEnemy, SkillCooldownTime); } \
	FORCEINLINE static uint32 __PPO__isDuringAttack() { return STRUCT_OFFSET(AMyCharacterEnemy, isDuringAttack); } \
	FORCEINLINE static uint32 __PPO__isPhase2() { return STRUCT_OFFSET(AMyCharacterEnemy, isPhase2); } \
	FORCEINLINE static uint32 __PPO__Boss_SpawnMontage() { return STRUCT_OFFSET(AMyCharacterEnemy, Boss_SpawnMontage); } \
	FORCEINLINE static uint32 __PPO__Boss_AttackMontage() { return STRUCT_OFFSET(AMyCharacterEnemy, Boss_AttackMontage); } \
	FORCEINLINE static uint32 __PPO__Boss_SkillMontage() { return STRUCT_OFFSET(AMyCharacterEnemy, Boss_SkillMontage); } \
	FORCEINLINE static uint32 __PPO__Boss_SmashStartMontage() { return STRUCT_OFFSET(AMyCharacterEnemy, Boss_SmashStartMontage); } \
	FORCEINLINE static uint32 __PPO__Boss_HitReactMontage() { return STRUCT_OFFSET(AMyCharacterEnemy, Boss_HitReactMontage); } \
	FORCEINLINE static uint32 __PPO__Boss_DeathMontage() { return STRUCT_OFFSET(AMyCharacterEnemy, Boss_DeathMontage); } \
	FORCEINLINE static uint32 __PPO__Boss_Phase2Montage() { return STRUCT_OFFSET(AMyCharacterEnemy, Boss_Phase2Montage); }


#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_9_PROLOG
#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_INCLASS \
	RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyCharacterEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class AMyCharacterEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_MyCharacterEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
