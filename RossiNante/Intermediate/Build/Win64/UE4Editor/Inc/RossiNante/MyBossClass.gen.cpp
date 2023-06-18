// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/MyBossClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBossClass() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_AMyBossClass_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_AMyBossClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyBossClass_Attack_Skill_End();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyBossClass_Attack_Skill_Melee();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyBossClass_DieAnim();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyBossClass_HitReact();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_End();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_End();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_Start();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyBossClass_SpawnAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
// End Cross Module References
	void AMyBossClass::StaticRegisterNativesAMyBossClass()
	{
		UClass* Class = AMyBossClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack_Skill_End", &AMyBossClass::execAttack_Skill_End },
			{ "Attack_Skill_Melee", &AMyBossClass::execAttack_Skill_Melee },
			{ "DieAnim", &AMyBossClass::execDieAnim },
			{ "HitReact", &AMyBossClass::execHitReact },
			{ "MyBossAttack_Melee", &AMyBossClass::execMyBossAttack_Melee },
			{ "MyBossAttack_Melee_End", &AMyBossClass::execMyBossAttack_Melee_End },
			{ "PowerDash_Skill_End", &AMyBossClass::execPowerDash_Skill_End },
			{ "PowerDash_Skill_Start", &AMyBossClass::execPowerDash_Skill_Start },
			{ "SpawnAnim", &AMyBossClass::execSpawnAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyBossClass_Attack_Skill_End_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyBossClass_Attack_Skill_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBossClass_Attack_Skill_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBossClass, nullptr, "Attack_Skill_End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyBossClass_Attack_Skill_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBossClass_Attack_Skill_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyBossClass_Attack_Skill_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyBossClass_Attack_Skill_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyBossClass_Attack_Skill_Melee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyBossClass_Attack_Skill_Melee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBossClass_Attack_Skill_Melee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBossClass, nullptr, "Attack_Skill_Melee", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyBossClass_Attack_Skill_Melee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBossClass_Attack_Skill_Melee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyBossClass_Attack_Skill_Melee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyBossClass_Attack_Skill_Melee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyBossClass_DieAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyBossClass_DieAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBossClass_DieAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBossClass, nullptr, "DieAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyBossClass_DieAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBossClass_DieAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyBossClass_DieAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyBossClass_DieAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyBossClass_HitReact_Statics
	{
		struct MyBossClass_eventHitReact_Parms
		{
			float damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyBossClass_HitReact_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBossClass_eventHitReact_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyBossClass_HitReact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyBossClass_HitReact_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyBossClass_HitReact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBossClass_HitReact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBossClass, nullptr, "HitReact", nullptr, nullptr, sizeof(MyBossClass_eventHitReact_Parms), Z_Construct_UFunction_AMyBossClass_HitReact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBossClass_HitReact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyBossClass_HitReact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBossClass_HitReact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyBossClass_HitReact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyBossClass_HitReact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBossClass, nullptr, "MyBossAttack_Melee", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_End_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBossClass, nullptr, "MyBossAttack_Melee_End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_End_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBossClass, nullptr, "PowerDash_Skill_End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBossClass, nullptr, "PowerDash_Skill_Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyBossClass_SpawnAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyBossClass_SpawnAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBossClass_SpawnAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBossClass, nullptr, "SpawnAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyBossClass_SpawnAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBossClass_SpawnAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyBossClass_SpawnAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyBossClass_SpawnAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyBossClass_NoRegister()
	{
		return AMyBossClass::StaticClass();
	}
	struct Z_Construct_UClass_AMyBossClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_Phase2Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_Phase2Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_DeathMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_DeathMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_HitReactMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_HitReactMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBossAttack2_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBossAttack2_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBoss_ChainMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBoss_ChainMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBoss_PowerDashMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBoss_PowerDashMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBossAttack_Skill_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBossAttack_Skill_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBossAttack_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBossAttack_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBossGameStart_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBossGameStart_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPhase2_MetaData[];
#endif
		static void NewProp_isPhase2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPhase2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSpawn_MetaData[];
#endif
		static void NewProp_isSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDie_MetaData[];
#endif
		static void NewProp_isDie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDuringAttack_MetaData[];
#endif
		static void NewProp_isDuringAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDuringAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isRunning_MetaData[];
#endif
		static void NewProp_isRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FollowDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseAttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyBossClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyBossClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyBossClass_Attack_Skill_End, "Attack_Skill_End" }, // 1033445057
		{ &Z_Construct_UFunction_AMyBossClass_Attack_Skill_Melee, "Attack_Skill_Melee" }, // 1005496388
		{ &Z_Construct_UFunction_AMyBossClass_DieAnim, "DieAnim" }, // 1549293278
		{ &Z_Construct_UFunction_AMyBossClass_HitReact, "HitReact" }, // 3702715350
		{ &Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee, "MyBossAttack_Melee" }, // 3715535638
		{ &Z_Construct_UFunction_AMyBossClass_MyBossAttack_Melee_End, "MyBossAttack_Melee_End" }, // 335653921
		{ &Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_End, "PowerDash_Skill_End" }, // 1748184250
		{ &Z_Construct_UFunction_AMyBossClass_PowerDash_Skill_Start, "PowerDash_Skill_Start" }, // 2061965093
		{ &Z_Construct_UFunction_AMyBossClass_SpawnAnim, "SpawnAnim" }, // 2739958924
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyBossClass.h" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_Phase2Montage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ???? ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "???? ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_Phase2Montage = { "Boss_Phase2Montage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, Boss_Phase2Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_Phase2Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_Phase2Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_DeathMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ?\xc7\xb0? ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "?\xc7\xb0? ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_DeathMontage = { "Boss_DeathMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, Boss_DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_DeathMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_DeathMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_HitReactMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_HitReactMontage = { "Boss_HitReactMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, Boss_HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_HitReactMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_HitReactMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack2_Montage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ???? ????\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack2_Montage = { "MyBossAttack2_Montage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, MyBossAttack2_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack2_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack2_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBoss_ChainMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ???? ????\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBoss_ChainMontage = { "MyBoss_ChainMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, MyBoss_ChainMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBoss_ChainMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBoss_ChainMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBoss_PowerDashMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ??\xc5\xb3 ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "??\xc5\xb3 ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBoss_PowerDashMontage = { "MyBoss_PowerDashMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, MyBoss_PowerDashMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBoss_PowerDashMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBoss_PowerDashMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack_Skill_Montage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ??\xc5\xb8 ?\xde\xba? ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "??\xc5\xb8 ?\xde\xba? ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack_Skill_Montage = { "MyBossAttack_Skill_Montage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, MyBossAttack_Skill_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack_Skill_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack_Skill_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack_Montage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ???? ???? ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "???? ???? ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack_Montage = { "MyBossAttack_Montage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, MyBossAttack_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossGameStart_Montage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossGameStart_Montage = { "MyBossGameStart_Montage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, MyBossGameStart_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossGameStart_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossGameStart_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_isPhase2_MetaData[] = {
		{ "Category", "MyBossClass" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	void Z_Construct_UClass_AMyBossClass_Statics::NewProp_isPhase2_SetBit(void* Obj)
	{
		((AMyBossClass*)Obj)->isPhase2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_isPhase2 = { "isPhase2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyBossClass), &Z_Construct_UClass_AMyBossClass_Statics::NewProp_isPhase2_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_isPhase2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_isPhase2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_isSpawn_MetaData[] = {
		{ "Category", "MyBossClass" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	void Z_Construct_UClass_AMyBossClass_Statics::NewProp_isSpawn_SetBit(void* Obj)
	{
		((AMyBossClass*)Obj)->isSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_isSpawn = { "isSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyBossClass), &Z_Construct_UClass_AMyBossClass_Statics::NewProp_isSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_isSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_isSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDie_MetaData[] = {
		{ "Category", "MyBossClass" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	void Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDie_SetBit(void* Obj)
	{
		((AMyBossClass*)Obj)->isDie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDie = { "isDie", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyBossClass), &Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDie_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDuringAttack_MetaData[] = {
		{ "Category", "MyBossClass" },
		{ "Comment", "// ??\xc5\xb3 ???\xd9\xbf?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "??\xc5\xb3 ???\xd9\xbf?" },
	};
#endif
	void Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDuringAttack_SetBit(void* Obj)
	{
		((AMyBossClass*)Obj)->isDuringAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDuringAttack = { "isDuringAttack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyBossClass), &Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDuringAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDuringAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDuringAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_SkillCooldownTime_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ??\xc5\xb3 ???\xd9\xbf?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "??\xc5\xb3 ???\xd9\xbf?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_SkillCooldownTime = { "SkillCooldownTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, SkillCooldownTime), METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_SkillCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_SkillCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_SkillCooldown_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ???? ???? ?\xc3\xb7??\xcc\xbe?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "???? ???? ?\xc3\xb7??\xcc\xbe?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_SkillCooldown = { "SkillCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, SkillCooldown), METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_SkillCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_SkillCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_TargetPlayer_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ?\xde\xb8??? ???? ????\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "?\xde\xb8??? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, TargetPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_TargetPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_TargetPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_isRunning_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ???? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "???? ?\xd3\xb5?" },
	};
#endif
	void Z_Construct_UClass_AMyBossClass_Statics::NewProp_isRunning_SetBit(void* Obj)
	{
		((AMyBossClass*)Obj)->isRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_isRunning = { "isRunning", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyBossClass), &Z_Construct_UClass_AMyBossClass_Statics::NewProp_isRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_isRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_isRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_AttackRate_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ?\xc8\xb4? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "?\xc8\xb4? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_AttackRate = { "AttackRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, AttackRate), METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_AttackRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_AttackRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ?\xde\xb8??? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "?\xde\xb8??? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ???? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "???? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_CurSpeed_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ???? ?\xc5\xb8?\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "???? ?\xc5\xb8?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_CurSpeed = { "CurSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, CurSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_CurSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_CurSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_FollowDistance_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ???? ????\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_FollowDistance = { "FollowDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, FollowDistance), METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_FollowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_FollowDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ?\xe2\xba\xbb ???? ??????\n" },
		{ "ModuleRelativePath", "MyBossClass.h" },
		{ "ToolTip", "?\xe2\xba\xbb ???? ??????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_BaseAttackDamage_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_BaseAttackDamage = { "BaseAttackDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, BaseAttackDamage), METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_BaseAttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_BaseAttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_DefaultHP_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_DefaultHP = { "DefaultHP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, DefaultHP), METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_DefaultHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_DefaultHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBossClass_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "MyBossClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBossClass_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBossClass, AnimInstance), Z_Construct_UClass_UMyAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::NewProp_AnimInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyBossClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_Phase2Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_DeathMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_Boss_HitReactMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack2_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBoss_ChainMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBoss_PowerDashMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack_Skill_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossAttack_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_MyBossGameStart_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_isPhase2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_isSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_isDuringAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_SkillCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_SkillCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_TargetPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_isRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_AttackRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_RunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_CurSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_FollowDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_AttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_BaseAttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_DefaultHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBossClass_Statics::NewProp_AnimInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyBossClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBossClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyBossClass_Statics::ClassParams = {
		&AMyBossClass::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyBossClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyBossClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBossClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyBossClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyBossClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyBossClass, 4167238489);
	template<> ROSSINANTE_API UClass* StaticClass<AMyBossClass>()
	{
		return AMyBossClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyBossClass(Z_Construct_UClass_AMyBossClass, &AMyBossClass::StaticClass, TEXT("/Script/RossiNante"), TEXT("AMyBossClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBossClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
