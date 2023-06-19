// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/MyCharacterEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterEnemy() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_AMyCharacterEnemy_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_AMyCharacterEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_End();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_End();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_Melee();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_DieAnim();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_HitReact();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_JumpTowardsPlayer();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_End();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_Start();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_PlayerCameraShake();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_Smash_Skill_Start();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnim();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnimEnd();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UBossHPWidget_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
// End Cross Module References
	static FName NAME_AMyCharacterEnemy_OnJumpDecal_End = FName(TEXT("OnJumpDecal_End"));
	void AMyCharacterEnemy::OnJumpDecal_End()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyCharacterEnemy_OnJumpDecal_End),NULL);
	}
	static FName NAME_AMyCharacterEnemy_OnJumpDecal_Start = FName(TEXT("OnJumpDecal_Start"));
	void AMyCharacterEnemy::OnJumpDecal_Start()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyCharacterEnemy_OnJumpDecal_Start),NULL);
	}
	void AMyCharacterEnemy::StaticRegisterNativesAMyCharacterEnemy()
	{
		UClass* Class = AMyCharacterEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack_Melee", &AMyCharacterEnemy::execAttack_Melee },
			{ "Attack_Melee_End", &AMyCharacterEnemy::execAttack_Melee_End },
			{ "Attack_Skill_End", &AMyCharacterEnemy::execAttack_Skill_End },
			{ "Attack_Skill_Melee", &AMyCharacterEnemy::execAttack_Skill_Melee },
			{ "DieAnim", &AMyCharacterEnemy::execDieAnim },
			{ "HitReact", &AMyCharacterEnemy::execHitReact },
			{ "JumpTowardsPlayer", &AMyCharacterEnemy::execJumpTowardsPlayer },
			{ "PlayerCameraShake", &AMyCharacterEnemy::execPlayerCameraShake },
			{ "Smash_Skill_Start", &AMyCharacterEnemy::execSmash_Skill_Start },
			{ "SpawnAnim", &AMyCharacterEnemy::execSpawnAnim },
			{ "SpawnAnimEnd", &AMyCharacterEnemy::execSpawnAnimEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "Attack_Melee", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_End_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "Attack_Melee_End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_End_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "Attack_Skill_End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_Melee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_Melee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_Melee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "Attack_Skill_Melee", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_Melee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_Melee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_Melee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_Melee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_DieAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_DieAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_DieAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "DieAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_DieAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_DieAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_DieAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_DieAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics
	{
		struct MyCharacterEnemy_eventHitReact_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCharacterEnemy_eventHitReact_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "HitReact", nullptr, nullptr, sizeof(MyCharacterEnemy_eventHitReact_Parms), Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_HitReact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_HitReact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_JumpTowardsPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_JumpTowardsPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_JumpTowardsPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "JumpTowardsPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_JumpTowardsPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_JumpTowardsPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_JumpTowardsPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_JumpTowardsPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_End_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "OnJumpDecal_End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "OnJumpDecal_Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_PlayerCameraShake_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_PlayerCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xc4\xab?\xde\xb6? ????\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_PlayerCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "PlayerCameraShake", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_PlayerCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_PlayerCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_PlayerCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_PlayerCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_Smash_Skill_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_Smash_Skill_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_Smash_Skill_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "Smash_Skill_Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_Smash_Skill_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_Smash_Skill_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_Smash_Skill_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_Smash_Skill_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "SpawnAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnimEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnimEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnimEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterEnemy, nullptr, "SpawnAnimEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnimEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnimEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnimEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnimEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCharacterEnemy_NoRegister()
	{
		return AMyCharacterEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacterEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MyShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_Phase2Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_Phase2Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_JumpMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_JumpMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_DeathMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_DeathMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_HitReactMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_HitReactMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_SmashStartMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_SmashStartMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_SkillMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_SkillMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_AttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_AttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_SpawnMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_SpawnMontage;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Exp;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BossHPWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BossHPWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacterEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCharacterEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee, "Attack_Melee" }, // 396703107
		{ &Z_Construct_UFunction_AMyCharacterEnemy_Attack_Melee_End, "Attack_Melee_End" }, // 1403531609
		{ &Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_End, "Attack_Skill_End" }, // 3233563442
		{ &Z_Construct_UFunction_AMyCharacterEnemy_Attack_Skill_Melee, "Attack_Skill_Melee" }, // 1337519750
		{ &Z_Construct_UFunction_AMyCharacterEnemy_DieAnim, "DieAnim" }, // 1411721034
		{ &Z_Construct_UFunction_AMyCharacterEnemy_HitReact, "HitReact" }, // 2012324601
		{ &Z_Construct_UFunction_AMyCharacterEnemy_JumpTowardsPlayer, "JumpTowardsPlayer" }, // 4010715417
		{ &Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_End, "OnJumpDecal_End" }, // 2309600848
		{ &Z_Construct_UFunction_AMyCharacterEnemy_OnJumpDecal_Start, "OnJumpDecal_Start" }, // 1065123412
		{ &Z_Construct_UFunction_AMyCharacterEnemy_PlayerCameraShake, "PlayerCameraShake" }, // 96460581
		{ &Z_Construct_UFunction_AMyCharacterEnemy_Smash_Skill_Start, "Smash_Skill_Start" }, // 2396178100
		{ &Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnim, "SpawnAnim" }, // 3773619038
		{ &Z_Construct_UFunction_AMyCharacterEnemy_SpawnAnimEnd, "SpawnAnimEnd" }, // 1131592174
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacterEnemy.h" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_MyShake_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "//\xc4\xab?\xde\xb6? ??????\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? ??????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_MyShake = { "MyShake", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, MyShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_MyShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_MyShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_Phase2Montage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ?\xc7\xb0? ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "?\xc7\xb0? ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_Phase2Montage = { "Boss_Phase2Montage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, Boss_Phase2Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_Phase2Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_Phase2Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_JumpMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ???? ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "???? ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_JumpMontage = { "Boss_JumpMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, Boss_JumpMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_JumpMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_JumpMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_DeathMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ?\xc7\xb0? ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "?\xc7\xb0? ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_DeathMontage = { "Boss_DeathMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, Boss_DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_DeathMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_DeathMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_HitReactMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// Start\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "Start" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_HitReactMontage = { "Boss_HitReactMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, Boss_HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_HitReactMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_HitReactMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SmashStartMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// Smash\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "Smash" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SmashStartMontage = { "Boss_SmashStartMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, Boss_SmashStartMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SmashStartMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SmashStartMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SkillMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ??\xc5\xb8 ?\xde\xba? ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "??\xc5\xb8 ?\xde\xba? ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SkillMontage = { "Boss_SkillMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, Boss_SkillMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SkillMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SkillMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_AttackMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// ???? ???? ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "???? ???? ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_AttackMontage = { "Boss_AttackMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, Boss_AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_AttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_AttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SpawnMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SpawnMontage = { "Boss_SpawnMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, Boss_SpawnMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SpawnMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SpawnMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isPhase2_MetaData[] = {
		{ "Category", "MyCharacterEnemy" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isPhase2_SetBit(void* Obj)
	{
		((AMyCharacterEnemy*)Obj)->isPhase2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isPhase2 = { "isPhase2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacterEnemy), &Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isPhase2_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isPhase2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isPhase2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isSpawn_MetaData[] = {
		{ "Category", "MyCharacterEnemy" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isSpawn_SetBit(void* Obj)
	{
		((AMyCharacterEnemy*)Obj)->isSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isSpawn = { "isSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacterEnemy), &Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDie_MetaData[] = {
		{ "Category", "MyCharacterEnemy" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDie_SetBit(void* Obj)
	{
		((AMyCharacterEnemy*)Obj)->isDie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDie = { "isDie", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacterEnemy), &Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDie_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDuringAttack_MetaData[] = {
		{ "Category", "MyCharacterEnemy" },
		{ "Comment", "// ?????\xcd\xb0? ?\xd6\xb4? ????\xc4\xa1\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "?????\xcd\xb0? ?\xd6\xb4? ????\xc4\xa1" },
	};
#endif
	void Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDuringAttack_SetBit(void* Obj)
	{
		((AMyCharacterEnemy*)Obj)->isDuringAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDuringAttack = { "isDuringAttack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacterEnemy), &Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDuringAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDuringAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDuringAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Exp_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ??\xc5\xb3 ???\xd9\xbf?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "??\xc5\xb3 ???\xd9\xbf?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, Exp), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_SkillCooldownTime_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ??\xc5\xb3 ???\xd9\xbf?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "??\xc5\xb3 ???\xd9\xbf?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_SkillCooldownTime = { "SkillCooldownTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, SkillCooldownTime), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_SkillCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_SkillCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_SkillCooldown_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ???? ???? ?\xc3\xb7??\xcc\xbe?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "???? ???? ?\xc3\xb7??\xcc\xbe?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_SkillCooldown = { "SkillCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, SkillCooldown), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_SkillCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_SkillCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_TargetPlayer_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ?\xde\xb8??? ???? ????\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "?\xde\xb8??? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, TargetPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_TargetPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_TargetPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isRunning_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ???? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "???? ?\xd3\xb5?" },
	};
#endif
	void Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isRunning_SetBit(void* Obj)
	{
		((AMyCharacterEnemy*)Obj)->isRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isRunning = { "isRunning", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacterEnemy), &Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AttackRate_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ?\xc8\xb4? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "?\xc8\xb4? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AttackRate = { "AttackRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, AttackRate), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AttackRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AttackRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ?\xde\xb8??? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "?\xde\xb8??? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ???? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "???? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_CurSpeed_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ???? ?\xc5\xb8?\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "???? ?\xc5\xb8?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_CurSpeed = { "CurSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, CurSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_CurSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_CurSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_FollowDistance_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ???? ????\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_FollowDistance = { "FollowDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, FollowDistance), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_FollowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_FollowDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "Comment", "// ?\xe2\xba\xbb ???? ??????\n" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
		{ "ToolTip", "?\xe2\xba\xbb ???? ??????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_BaseAttackDamage_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_BaseAttackDamage = { "BaseAttackDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, BaseAttackDamage), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_BaseAttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_BaseAttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_DefaultHP_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_DefaultHP = { "DefaultHP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, DefaultHP), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_DefaultHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_DefaultHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "Boss Monster" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, MaxHP), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_BossHPWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_BossHPWidget = { "BossHPWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, BossHPWidget), Z_Construct_UClass_UBossHPWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_BossHPWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_BossHPWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "MyCharacterEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterEnemy, AnimInstance), Z_Construct_UClass_UMyAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AnimInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacterEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_MyShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_Phase2Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_JumpMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_DeathMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_HitReactMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SmashStartMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SkillMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_AttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Boss_SpawnMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isPhase2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isDuringAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_SkillCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_SkillCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_TargetPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_isRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AttackRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_RunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_CurSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_FollowDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_BaseAttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_DefaultHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_MaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_BossHPWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterEnemy_Statics::NewProp_AnimInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacterEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacterEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacterEnemy_Statics::ClassParams = {
		&AMyCharacterEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCharacterEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacterEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacterEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCharacterEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCharacterEnemy, 2869025166);
	template<> ROSSINANTE_API UClass* StaticClass<AMyCharacterEnemy>()
	{
		return AMyCharacterEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacterEnemy(Z_Construct_UClass_AMyCharacterEnemy, &AMyCharacterEnemy::StaticClass, TEXT("/Script/RossiNante"), TEXT("AMyCharacterEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacterEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
