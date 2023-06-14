// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/HUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDWidget() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UMyStatComponent_NoRegister();
// End Cross Module References
	void UHUDWidget::StaticRegisterNativesUHUDWidget()
	{
	}
	UClass* Z_Construct_UClass_UHUDWidget_NoRegister()
	{
		return UHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QSkillBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QSkillBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUDWidget.h" },
		{ "ModuleRelativePath", "HUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDWidget_Statics::NewProp_QSkillBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDWidget_Statics::NewProp_QSkillBar = { "QSkillBar", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDWidget, QSkillBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDWidget_Statics::NewProp_QSkillBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::NewProp_QSkillBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDWidget_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDWidget_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDWidget, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDWidget_Statics::NewProp_HealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::NewProp_HealthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDWidget_Statics::NewProp_Stat_MetaData[] = {
		{ "Category", "HUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDWidget_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDWidget, Stat), Z_Construct_UClass_UMyStatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDWidget_Statics::NewProp_Stat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::NewProp_Stat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDWidget_Statics::NewProp_QSkillBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDWidget_Statics::NewProp_HealthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDWidget_Statics::NewProp_Stat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHUDWidget_Statics::ClassParams = {
		&UHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHUDWidget, 163866574);
	template<> ROSSINANTE_API UClass* StaticClass<UHUDWidget>()
	{
		return UHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHUDWidget(Z_Construct_UClass_UHUDWidget, &UHUDWidget::StaticClass, TEXT("/Script/RossiNante"), TEXT("UHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
