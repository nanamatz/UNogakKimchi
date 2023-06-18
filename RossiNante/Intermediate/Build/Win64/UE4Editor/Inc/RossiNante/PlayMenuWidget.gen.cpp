// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/PlayMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayMenuWidget() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_UPlayMenuWidget_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UPlayMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UPlayMenuWidget::StaticRegisterNativesUPlayMenuWidget()
	{
		UClass* Class = UPlayMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayButtonClicked", &UPlayMenuWidget::execOnPlayButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMenuWidget, nullptr, "OnPlayButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayMenuWidget_NoRegister()
	{
		return UPlayMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_Play_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_Play;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked, "OnPlayButtonClicked" }, // 3702717794
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayMenuWidget.h" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Play_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Play = { "BT_Play", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMenuWidget, BT_Play), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Play_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Play_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Play,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayMenuWidget_Statics::ClassParams = {
		&UPlayMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayMenuWidget, 1321944806);
	template<> ROSSINANTE_API UClass* StaticClass<UPlayMenuWidget>()
	{
		return UPlayMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayMenuWidget(Z_Construct_UClass_UPlayMenuWidget, &UPlayMenuWidget::StaticClass, TEXT("/Script/RossiNante"), TEXT("UPlayMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
