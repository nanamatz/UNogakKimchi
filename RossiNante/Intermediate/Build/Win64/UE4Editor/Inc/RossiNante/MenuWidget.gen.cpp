// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/MenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuWidget() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UMenuWidget_OnPlayMenuButtonClicked();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UMenuWidget_OnStatMenuButtonClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UMenuWidget::StaticRegisterNativesUMenuWidget()
	{
		UClass* Class = UMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayMenuButtonClicked", &UMenuWidget::execOnPlayMenuButtonClicked },
			{ "OnStatMenuButtonClicked", &UMenuWidget::execOnStatMenuButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMenuWidget_OnPlayMenuButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidget_OnPlayMenuButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_OnPlayMenuButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "OnPlayMenuButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidget_OnPlayMenuButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_OnPlayMenuButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidget_OnPlayMenuButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidget_OnPlayMenuButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidget_OnStatMenuButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidget_OnStatMenuButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// BT_SignIn ??\xc6\xb0 \xc5\xac?? ?\xcc\xba?\xc6\xae ?\xda\xb5\xe9\xb7\xaf ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "MenuWidget.h" },
		{ "ToolTip", "BT_SignIn ??\xc6\xb0 \xc5\xac?? ?\xcc\xba?\xc6\xae ?\xda\xb5\xe9\xb7\xaf ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_OnStatMenuButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "OnStatMenuButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidget_OnStatMenuButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_OnStatMenuButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidget_OnStatMenuButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidget_OnStatMenuButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMenuWidget_NoRegister()
	{
		return UMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_StatMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_StatMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_PlayMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_PlayMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuWidget_OnPlayMenuButtonClicked, "OnPlayMenuButtonClicked" }, // 3114757368
		{ &Z_Construct_UFunction_UMenuWidget_OnStatMenuButtonClicked, "OnStatMenuButtonClicked" }, // 3131995941
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MenuWidget.h" },
		{ "ModuleRelativePath", "MenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::NewProp_BT_StatMenu_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_BT_StatMenu = { "BT_StatMenu", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidget, BT_StatMenu), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::NewProp_BT_StatMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::NewProp_BT_StatMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::NewProp_BT_PlayMenu_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_BT_PlayMenu = { "BT_PlayMenu", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidget, BT_PlayMenu), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::NewProp_BT_PlayMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::NewProp_BT_PlayMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_BT_StatMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_BT_PlayMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuWidget_Statics::ClassParams = {
		&UMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuWidget, 4115540471);
	template<> ROSSINANTE_API UClass* StaticClass<UMenuWidget>()
	{
		return UMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuWidget(Z_Construct_UClass_UMenuWidget, &UMenuWidget::StaticClass, TEXT("/Script/RossiNante"), TEXT("UMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
