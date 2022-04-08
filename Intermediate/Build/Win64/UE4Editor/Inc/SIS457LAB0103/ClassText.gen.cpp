// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB0103/ClassText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassText() {}
// Cross Module References
	SIS457LAB0103_API UClass* Z_Construct_UClass_AClassText_NoRegister();
	SIS457LAB0103_API UClass* Z_Construct_UClass_AClassText();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB0103();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void AClassText::StaticRegisterNativesAClassText()
	{
	}
	UClass* Z_Construct_UClass_AClassText_NoRegister()
	{
		return AClassText::StaticClass();
	}
	struct Z_Construct_UClass_AClassText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Biografia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Biografia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClassText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB0103,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClassText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClassText.h" },
		{ "ModuleRelativePath", "ClassText.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClassText_Statics::NewProp_Biografia_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassText.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassText_Statics::NewProp_Biografia = { "Biografia", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClassText, Biografia), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClassText_Statics::NewProp_Biografia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClassText_Statics::NewProp_Biografia_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClassText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassText_Statics::NewProp_Biografia,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClassText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClassText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClassText_Statics::ClassParams = {
		&AClassText::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AClassText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AClassText_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClassText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClassText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClassText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClassText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClassText, 1484387677);
	template<> SIS457LAB0103_API UClass* StaticClass<AClassText>()
	{
		return AClassText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClassText(Z_Construct_UClass_AClassText, &AClassText::StaticClass, TEXT("/Script/SIS457LAB0103"), TEXT("AClassText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClassText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
