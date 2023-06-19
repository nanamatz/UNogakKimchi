// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/MyStatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStatComponent() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_UMyStatComponent_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UMyStatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UMyStatComponent_GetAttack();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UMyStatComponent_GetExp();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UMyStatComponent_GetHp();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UMyStatComponent_GetLevel();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UMyStatComponent_GetMaxHp();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UMyStatComponent_SetExp();
// End Cross Module References
	void UMyStatComponent::StaticRegisterNativesUMyStatComponent()
	{
		UClass* Class = UMyStatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttack", &UMyStatComponent::execGetAttack },
			{ "GetAttackUpgrade", &UMyStatComponent::execGetAttackUpgrade },
			{ "GetExp", &UMyStatComponent::execGetExp },
			{ "GetHp", &UMyStatComponent::execGetHp },
			{ "GetLevel", &UMyStatComponent::execGetLevel },
			{ "GetMaxHp", &UMyStatComponent::execGetMaxHp },
			{ "SetExp", &UMyStatComponent::execSetExp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics
	{
		struct MyStatComponent_eventGetAttack_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStatComponent_eventGetAttack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStatComponent, nullptr, "GetAttack", nullptr, nullptr, sizeof(MyStatComponent_eventGetAttack_Parms), Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStatComponent_GetAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStatComponent_GetAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics
	{
		struct MyStatComponent_eventGetAttackUpgrade_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStatComponent_eventGetAttackUpgrade_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStatComponent, nullptr, "GetAttackUpgrade", nullptr, nullptr, sizeof(MyStatComponent_eventGetAttackUpgrade_Parms), Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStatComponent_GetExp_Statics
	{
		struct MyStatComponent_eventGetExp_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyStatComponent_GetExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStatComponent_eventGetExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStatComponent_GetExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStatComponent_GetExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStatComponent_GetExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStatComponent_GetExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStatComponent, nullptr, "GetExp", nullptr, nullptr, sizeof(MyStatComponent_eventGetExp_Parms), Z_Construct_UFunction_UMyStatComponent_GetExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStatComponent_GetExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStatComponent_GetExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStatComponent_GetExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStatComponent_GetHp_Statics
	{
		struct MyStatComponent_eventGetHp_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyStatComponent_GetHp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStatComponent_eventGetHp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStatComponent_GetHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStatComponent_GetHp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStatComponent_GetHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStatComponent_GetHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStatComponent, nullptr, "GetHp", nullptr, nullptr, sizeof(MyStatComponent_eventGetHp_Parms), Z_Construct_UFunction_UMyStatComponent_GetHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStatComponent_GetHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStatComponent_GetHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStatComponent_GetHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics
	{
		struct MyStatComponent_eventGetLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStatComponent_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStatComponent, nullptr, "GetLevel", nullptr, nullptr, sizeof(MyStatComponent_eventGetLevel_Parms), Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStatComponent_GetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStatComponent_GetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics
	{
		struct MyStatComponent_eventGetMaxHp_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStatComponent_eventGetMaxHp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStatComponent, nullptr, "GetMaxHp", nullptr, nullptr, sizeof(MyStatComponent_eventGetMaxHp_Parms), Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStatComponent_GetMaxHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStatComponent_GetMaxHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStatComponent_SetExp_Statics
	{
		struct MyStatComponent_eventSetExp_Parms
		{
			int32 exp;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_exp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyStatComponent_SetExp_Statics::NewProp_exp = { "exp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyStatComponent_eventSetExp_Parms, exp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStatComponent_SetExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStatComponent_SetExp_Statics::NewProp_exp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStatComponent_SetExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStatComponent_SetExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStatComponent, nullptr, "SetExp", nullptr, nullptr, sizeof(MyStatComponent_eventSetExp_Parms), Z_Construct_UFunction_UMyStatComponent_SetExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_SetExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStatComponent_SetExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStatComponent_SetExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStatComponent_SetExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyStatComponent_SetExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyStatComponent_NoRegister()
	{
		return UMyStatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyStatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackUpgrade_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackUpgrade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequireExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequireExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyStatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyStatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyStatComponent_GetAttack, "GetAttack" }, // 3291546336
		{ &Z_Construct_UFunction_UMyStatComponent_GetAttackUpgrade, "GetAttackUpgrade" }, // 3894345059
		{ &Z_Construct_UFunction_UMyStatComponent_GetExp, "GetExp" }, // 2636580722
		{ &Z_Construct_UFunction_UMyStatComponent_GetHp, "GetHp" }, // 3999964826
		{ &Z_Construct_UFunction_UMyStatComponent_GetLevel, "GetLevel" }, // 2521277353
		{ &Z_Construct_UFunction_UMyStatComponent_GetMaxHp, "GetMaxHp" }, // 3448533252
		{ &Z_Construct_UFunction_UMyStatComponent_SetExp, "SetExp" }, // 587448149
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyStatComponent.h" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStatComponent_Statics::NewProp_AttackUpgrade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp_AttackUpgrade = { "AttackUpgrade", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyStatComponent, AttackUpgrade), METADATA_PARAMS(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_AttackUpgrade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_AttackUpgrade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStatComponent_Statics::NewProp_RequireExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp_RequireExp = { "RequireExp", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyStatComponent, RequireExp), METADATA_PARAMS(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_RequireExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_RequireExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStatComponent_Statics::NewProp_CurExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp_CurExp = { "CurExp", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyStatComponent, CurExp), METADATA_PARAMS(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_CurExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_CurExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Hp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Hp = { "Hp", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyStatComponent, Hp), METADATA_PARAMS(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Hp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Attack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyStatComponent, Attack), METADATA_PARAMS(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyStatComponent, Level), METADATA_PARAMS(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyStatComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp_AttackUpgrade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp_RequireExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp_CurExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Hp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp_Level,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyStatComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyStatComponent_Statics::ClassParams = {
		&UMyStatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyStatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyStatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyStatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyStatComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyStatComponent, 3193167890);
	template<> ROSSINANTE_API UClass* StaticClass<UMyStatComponent>()
	{
		return UMyStatComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyStatComponent(Z_Construct_UClass_UMyStatComponent, &UMyStatComponent::StaticClass, TEXT("/Script/RossiNante"), TEXT("UMyStatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyStatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
