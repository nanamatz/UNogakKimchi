// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/MyGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	ROSSINANTE_API UScriptStruct* Z_Construct_UScriptStruct_FMyCharacterData();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ROSSINANTE_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FMyCharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROSSINANTE_API uint32 Get_Z_Construct_UScriptStruct_FMyCharacterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyCharacterData, Z_Construct_UPackage__Script_RossiNante(), TEXT("MyCharacterData"), sizeof(FMyCharacterData), Get_Z_Construct_UScriptStruct_FMyCharacterData_Hash());
	}
	return Singleton;
}
template<> ROSSINANTE_API UScriptStruct* StaticStruct<FMyCharacterData>()
{
	return FMyCharacterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMyCharacterData(FMyCharacterData::StaticStruct, TEXT("/Script/RossiNante"), TEXT("MyCharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_RossiNante_StaticRegisterNativesFMyCharacterData
{
	FScriptStruct_RossiNante_StaticRegisterNativesFMyCharacterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MyCharacterData")),new UScriptStruct::TCppStructOps<FMyCharacterData>);
	}
} ScriptStruct_RossiNante_StaticRegisterNativesFMyCharacterData;
	struct Z_Construct_UScriptStruct_FMyCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackUpgrade_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackUpgrade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequireExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequireExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyCharacterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_AttackUpgrade_MetaData[] = {
		{ "Category", "MyCharacterData" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_AttackUpgrade = { "AttackUpgrade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyCharacterData, AttackUpgrade), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_AttackUpgrade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_AttackUpgrade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_RequireExp_MetaData[] = {
		{ "Category", "MyCharacterData" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_RequireExp = { "RequireExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyCharacterData, RequireExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_RequireExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_RequireExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_MaxHp_MetaData[] = {
		{ "Category", "MyCharacterData" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_MaxHp = { "MaxHp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyCharacterData, MaxHp), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_MaxHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_MaxHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "MyCharacterData" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyCharacterData, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "MyCharacterData" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyCharacterData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_AttackUpgrade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_RequireExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_MaxHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyCharacterData_Statics::NewProp_Level,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MyCharacterData",
		sizeof(FMyCharacterData),
		alignof(FMyCharacterData),
		Z_Construct_UScriptStruct_FMyCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCharacterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyCharacterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyCharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMyCharacterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RossiNante();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MyCharacterData"), sizeof(FMyCharacterData), Get_Z_Construct_UScriptStruct_FMyCharacterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMyCharacterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMyCharacterData_Hash() { return 3055638829U; }
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyStats_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyStats = { "MyStats", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, MyStats), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyStats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyStats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
		&UMyGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyGameInstance, 3507876092);
	template<> ROSSINANTE_API UClass* StaticClass<UMyGameInstance>()
	{
		return UMyGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/RossiNante"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
