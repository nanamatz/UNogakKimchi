// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/MyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_AMyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacter_OnAttackEnded();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacter_OnHitEnded();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacter_OnSkillCastEnded();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacter_OnTumbleEnded();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_AMyCharacter_Tumble();
	ROSSINANTE_API UClass* Z_Construct_UClass_UMyStatComponent_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
// End Cross Module References
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
		UClass* Class = AMyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackEnded", &AMyCharacter::execOnAttackEnded },
			{ "OnHitEnded", &AMyCharacter::execOnHitEnded },
			{ "OnSkillCastEnded", &AMyCharacter::execOnSkillCastEnded },
			{ "OnTumbleEnded", &AMyCharacter::execOnTumbleEnded },
			{ "Tumble", &AMyCharacter::execTumble },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics
	{
		struct MyCharacter_eventOnAttackEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((MyCharacter_eventOnAttackEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyCharacter_eventOnAttackEnded_Parms), &Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCharacter_eventOnAttackEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "OnAttackEnded", nullptr, nullptr, sizeof(MyCharacter_eventOnAttackEnded_Parms), Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_OnAttackEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_OnHitEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_OnHitEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnHitEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "OnHitEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_OnHitEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnHitEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_OnHitEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnHitEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_OnSkillCastEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_OnSkillCastEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnSkillCastEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "OnSkillCastEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_OnSkillCastEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnSkillCastEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_OnSkillCastEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnSkillCastEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_OnTumbleEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_OnTumbleEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnTumbleEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "OnTumbleEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_OnTumbleEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnTumbleEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_OnTumbleEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnTumbleEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_Tumble_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_Tumble_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_Tumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "Tumble", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_Tumble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Tumble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_Tumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_Tumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Stat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRightValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftRightValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpDownValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpDownValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDie_MetaData[];
#endif
		static void NewProp_IsDie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsJumping_MetaData[];
#endif
		static void NewProp_IsJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTumbling_MetaData[];
#endif
		static void NewProp_IsTumbling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTumbling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSkillCasting_MetaData[];
#endif
		static void NewProp_IsSkillCasting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSkillCasting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_OnAttackEnded, "OnAttackEnded" }, // 2504896255
		{ &Z_Construct_UFunction_AMyCharacter_OnHitEnded, "OnHitEnded" }, // 1657668595
		{ &Z_Construct_UFunction_AMyCharacter_OnSkillCastEnded, "OnSkillCastEnded" }, // 1220475929
		{ &Z_Construct_UFunction_AMyCharacter_OnTumbleEnded, "OnTumbleEnded" }, // 3277593103
		{ &Z_Construct_UFunction_AMyCharacter_Tumble, "Tumble" }, // 3773061323
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Stat_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, Stat), Z_Construct_UClass_UMyStatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Stat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Stat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_AttackIndex_MetaData[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AttackIndex = { "AttackIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, AttackIndex), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_AttackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_AttackIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_LeftRightValue_MetaData[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_LeftRightValue = { "LeftRightValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, LeftRightValue), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_LeftRightValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_LeftRightValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_UpDownValue_MetaData[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_UpDownValue = { "UpDownValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, UpDownValue), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_UpDownValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_UpDownValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDie_MetaData[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDie_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->IsDie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDie = { "IsDie", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDie_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, Speed), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, AnimInstance), Z_Construct_UClass_UMyAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_AnimInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsJumping_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsJumping_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->IsJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsJumping = { "IsJumping", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsTumbling_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsTumbling_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->IsTumbling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsTumbling = { "IsTumbling", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsTumbling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsTumbling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsTumbling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsSkillCasting_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsSkillCasting_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->IsSkillCasting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsSkillCasting = { "IsSkillCasting", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsSkillCasting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsSkillCasting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsSkillCasting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->IsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsAttacking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AttackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_LeftRightValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_UpDownValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsTumbling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsSkillCasting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsAttacking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
		&AMyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCharacter, 2298928740);
	template<> ROSSINANTE_API UClass* StaticClass<AMyCharacter>()
	{
		return AMyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, &AMyCharacter::StaticClass, TEXT("/Script/RossiNante"), TEXT("AMyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
