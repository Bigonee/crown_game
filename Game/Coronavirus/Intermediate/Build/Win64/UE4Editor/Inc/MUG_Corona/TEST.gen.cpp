// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MUG_Corona/TEST.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTEST() {}
// Cross Module References
	MUG_CORONA_API UClass* Z_Construct_UClass_ATEST_NoRegister();
	MUG_CORONA_API UClass* Z_Construct_UClass_ATEST();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MUG_Corona();
// End Cross Module References
	void ATEST::StaticRegisterNativesATEST()
	{
	}
	UClass* Z_Construct_UClass_ATEST_NoRegister()
	{
		return ATEST::StaticClass();
	}
	struct Z_Construct_UClass_ATEST_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATEST_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MUG_Corona,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATEST_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TEST.h" },
		{ "ModuleRelativePath", "TEST.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATEST_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATEST>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATEST_Statics::ClassParams = {
		&ATEST::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATEST_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATEST_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATEST()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATEST_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATEST, 1429926834);
	template<> MUG_CORONA_API UClass* StaticClass<ATEST>()
	{
		return ATEST::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATEST(Z_Construct_UClass_ATEST, &ATEST::StaticClass, TEXT("/Script/MUG_Corona"), TEXT("ATEST"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATEST);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
