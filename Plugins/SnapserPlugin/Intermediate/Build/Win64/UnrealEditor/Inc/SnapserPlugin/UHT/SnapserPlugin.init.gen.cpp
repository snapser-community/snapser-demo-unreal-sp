// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapserPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SnapserPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SnapserPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_SnapserPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SnapserPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFEB8C029,
				0x9559FB50,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SnapserPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SnapserPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SnapserPlugin(Z_Construct_UPackage__Script_SnapserPlugin, TEXT("/Script/SnapserPlugin"), Z_Registration_Info_UPackage__Script_SnapserPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFEB8C029, 0x9559FB50));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
