// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PalWorld/PalWorldGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePalWorldGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PALWORLD_API UClass* Z_Construct_UClass_APalWorldGameMode();
PALWORLD_API UClass* Z_Construct_UClass_APalWorldGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PalWorld();
// End Cross Module References

// Begin Class APalWorldGameMode
void APalWorldGameMode::StaticRegisterNativesAPalWorldGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APalWorldGameMode);
UClass* Z_Construct_UClass_APalWorldGameMode_NoRegister()
{
	return APalWorldGameMode::StaticClass();
}
struct Z_Construct_UClass_APalWorldGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PalWorldGameMode.h" },
		{ "ModuleRelativePath", "PalWorldGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APalWorldGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APalWorldGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PalWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APalWorldGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APalWorldGameMode_Statics::ClassParams = {
	&APalWorldGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APalWorldGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APalWorldGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APalWorldGameMode()
{
	if (!Z_Registration_Info_UClass_APalWorldGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APalWorldGameMode.OuterSingleton, Z_Construct_UClass_APalWorldGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APalWorldGameMode.OuterSingleton;
}
template<> PALWORLD_API UClass* StaticClass<APalWorldGameMode>()
{
	return APalWorldGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APalWorldGameMode);
APalWorldGameMode::~APalWorldGameMode() {}
// End Class APalWorldGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_UnrealGit_PalWorld_Source_PalWorld_PalWorldGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APalWorldGameMode, APalWorldGameMode::StaticClass, TEXT("APalWorldGameMode"), &Z_Registration_Info_UClass_APalWorldGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APalWorldGameMode), 1930211348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_UnrealGit_PalWorld_Source_PalWorld_PalWorldGameMode_h_2332671169(TEXT("/Script/PalWorld"),
	Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_UnrealGit_PalWorld_Source_PalWorld_PalWorldGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_UnrealGit_PalWorld_Source_PalWorld_PalWorldGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
