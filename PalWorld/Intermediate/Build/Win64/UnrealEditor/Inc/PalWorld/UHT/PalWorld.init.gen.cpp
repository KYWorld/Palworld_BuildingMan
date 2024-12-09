// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePalWorld_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PalWorld;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PalWorld()
	{
		if (!Z_Registration_Info_UPackage__Script_PalWorld.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PalWorld",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBACD2C12,
				0xD7748F1A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PalWorld.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PalWorld.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PalWorld(Z_Construct_UPackage__Script_PalWorld, TEXT("/Script/PalWorld"), Z_Registration_Info_UPackage__Script_PalWorld, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBACD2C12, 0xD7748F1A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
