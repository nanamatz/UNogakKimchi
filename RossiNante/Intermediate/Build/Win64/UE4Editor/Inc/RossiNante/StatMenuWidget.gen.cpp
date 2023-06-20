// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/StatMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatMenuWidget() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_UStatMenuWidget_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UStatMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UStatMenuWidget_OnUpgrade1ButtonClicked();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UStatMenuWidget::StaticRegisterNativesUStatMenuWidget()
	{
		UClass* Class = UStatMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUpgrade1ButtonClicked", &UStatMenuWidget::execOnUpgrade1ButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatMenuWidget_OnUpgrade1ButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatMenuWidget_OnUpgrade1ButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StatMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatMenuWidget_OnUpgrade1ButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatMenuWidget, nullptr, "OnUpgrade1ButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatMenuWidget_OnUpgrade1ButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatMenuWidget_OnUpgrade1ButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatMenuWidget_OnUpgrade1ButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatMenuWidget_OnUpgrade1ButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStatMenuWidget_NoRegister()
	{
		return UStatMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStatMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TB_AttackUpgradeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TB_AttackUpgradeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TB_StatpointValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TB_StatpointValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TB_ExpValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TB_ExpValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TB_LevelValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TB_LevelValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_Upgrade1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_Upgrade1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatMenuWidget_OnUpgrade1ButtonClicked, "OnUpgrade1ButtonClicked" }, // 3120959012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StatMenuWidget.h" },
		{ "ModuleRelativePath", "StatMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_AttackUpgradeValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StatMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StatMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_AttackUpgradeValue = { "TB_AttackUpgradeValue", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatMenuWidget, TB_AttackUpgradeValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_AttackUpgradeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_AttackUpgradeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_StatpointValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StatMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StatMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_StatpointValue = { "TB_StatpointValue", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatMenuWidget, TB_StatpointValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_StatpointValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_StatpointValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_ExpValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StatMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StatMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_ExpValue = { "TB_ExpValue", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatMenuWidget, TB_ExpValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_ExpValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_ExpValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_LevelValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StatMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StatMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_LevelValue = { "TB_LevelValue", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatMenuWidget, TB_LevelValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_LevelValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_LevelValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_BT_Upgrade1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StatMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StatMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_BT_Upgrade1 = { "BT_Upgrade1", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatMenuWidget, BT_Upgrade1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_BT_Upgrade1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_BT_Upgrade1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_AttackUpgradeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_StatpointValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_ExpValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_TB_LevelValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatMenuWidget_Statics::NewProp_BT_Upgrade1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatMenuWidget_Statics::ClassParams = {
		&UStatMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStatMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStatMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatMenuWidget, 1542058051);
	template<> ROSSINANTE_API UClass* StaticClass<UStatMenuWidget>()
	{
		return UStatMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatMenuWidget(Z_Construct_UClass_UStatMenuWidget, &UStatMenuWidget::StaticClass, TEXT("/Script/RossiNante"), TEXT("UStatMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
