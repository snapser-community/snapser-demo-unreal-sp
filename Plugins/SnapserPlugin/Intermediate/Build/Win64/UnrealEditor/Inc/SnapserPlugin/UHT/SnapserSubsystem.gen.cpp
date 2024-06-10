// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnapserPlugin/Public/SnapserSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapserSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SNAPSERPLUGIN_API UClass* Z_Construct_UClass_USnapserSubsystem();
SNAPSERPLUGIN_API UClass* Z_Construct_UClass_USnapserSubsystem_NoRegister();
SNAPSERPLUGIN_API UEnum* Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode();
UPackage* Z_Construct_UPackage__Script_SnapserPlugin();
// End Cross Module References

// Begin Enum SnapserSignInMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_SnapserSignInMode;
static UEnum* SnapserSignInMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_SnapserSignInMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_SnapserSignInMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode, (UObject*)Z_Construct_UPackage__Script_SnapserPlugin(), TEXT("SnapserSignInMode"));
	}
	return Z_Registration_Info_UEnum_SnapserSignInMode.OuterSingleton;
}
template<> SNAPSERPLUGIN_API UEnum* StaticEnum<SnapserSignInMode>()
{
	return SnapserSignInMode_StaticEnum();
}
struct Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
		{ "SIGNINMODE_ANON.Comment", "// Anonymous\n" },
		{ "SIGNINMODE_ANON.DisplayName", "Anon" },
		{ "SIGNINMODE_ANON.Name", "SIGNINMODE_ANON" },
		{ "SIGNINMODE_ANON.ToolTip", "Anonymous" },
		{ "SIGNINMODE_NONE.Comment", "// None (not signed in)\n" },
		{ "SIGNINMODE_NONE.DisplayName", "None" },
		{ "SIGNINMODE_NONE.Name", "SIGNINMODE_NONE" },
		{ "SIGNINMODE_NONE.ToolTip", "None (not signed in)" },
		{ "SIGNINMODE_OTP.Comment", "// Otp\n" },
		{ "SIGNINMODE_OTP.DisplayName", "OTP" },
		{ "SIGNINMODE_OTP.Name", "SIGNINMODE_OTP" },
		{ "SIGNINMODE_OTP.ToolTip", "Otp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SIGNINMODE_NONE", (int64)SIGNINMODE_NONE },
		{ "SIGNINMODE_ANON", (int64)SIGNINMODE_ANON },
		{ "SIGNINMODE_OTP", (int64)SIGNINMODE_OTP },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SnapserPlugin,
	nullptr,
	"SnapserSignInMode",
	"SnapserSignInMode",
	Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode()
{
	if (!Z_Registration_Info_UEnum_SnapserSignInMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SnapserSignInMode.InnerSingleton, Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_SnapserSignInMode.InnerSingleton;
}
// End Enum SnapserSignInMode

// Begin Class USnapserSubsystem Function AnonSignIn
struct Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics
{
	struct SnapserSubsystem_eventAnonSignIn_Parms
	{
		FString name;
		bool create;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Snapser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sign In using AnonLogin\n" },
#endif
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sign In using AnonLogin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static void NewProp_create_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_create;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapserSubsystem_eventAnonSignIn_Parms, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
void Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::NewProp_create_SetBit(void* Obj)
{
	((SnapserSubsystem_eventAnonSignIn_Parms*)Obj)->create = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::NewProp_create = { "create", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnapserSubsystem_eventAnonSignIn_Parms), &Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::NewProp_create_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SnapserSubsystem_eventAnonSignIn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnapserSubsystem_eventAnonSignIn_Parms), &Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::NewProp_create,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapserSubsystem, nullptr, "AnonSignIn", nullptr, nullptr, Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::SnapserSubsystem_eventAnonSignIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::SnapserSubsystem_eventAnonSignIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapserSubsystem_AnonSignIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapserSubsystem_AnonSignIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapserSubsystem::execAnonSignIn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_GET_UBOOL(Z_Param_create);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AnonSignIn(Z_Param_name,Z_Param_create);
	P_NATIVE_END;
}
// End Class USnapserSubsystem Function AnonSignIn

// Begin Class USnapserSubsystem Function OtpSignIn
struct Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics
{
	struct SnapserSubsystem_eventOtpSignIn_Parms
	{
		FString email;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Snapser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sign In using Otp\n" },
#endif
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sign In using Otp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_email;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::NewProp_email = { "email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapserSubsystem_eventOtpSignIn_Parms, email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_email_MetaData), NewProp_email_MetaData) };
void Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SnapserSubsystem_eventOtpSignIn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnapserSubsystem_eventOtpSignIn_Parms), &Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::NewProp_email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapserSubsystem, nullptr, "OtpSignIn", nullptr, nullptr, Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::SnapserSubsystem_eventOtpSignIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::SnapserSubsystem_eventOtpSignIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapserSubsystem_OtpSignIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapserSubsystem_OtpSignIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapserSubsystem::execOtpSignIn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_email);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OtpSignIn(Z_Param_email);
	P_NATIVE_END;
}
// End Class USnapserSubsystem Function OtpSignIn

// Begin Class USnapserSubsystem Function SignOut
struct Z_Construct_UFunction_USnapserSubsystem_SignOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Snapser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sign Out of any current connection\n" },
#endif
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sign Out of any current connection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapserSubsystem_SignOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapserSubsystem, nullptr, "SignOut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapserSubsystem_SignOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapserSubsystem_SignOut_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USnapserSubsystem_SignOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapserSubsystem_SignOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapserSubsystem::execSignOut)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SignOut();
	P_NATIVE_END;
}
// End Class USnapserSubsystem Function SignOut

// Begin Class USnapserSubsystem
void USnapserSubsystem::StaticRegisterNativesUSnapserSubsystem()
{
	UClass* Class = USnapserSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnonSignIn", &USnapserSubsystem::execAnonSignIn },
		{ "OtpSignIn", &USnapserSubsystem::execOtpSignIn },
		{ "SignOut", &USnapserSubsystem::execSignOut },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapserSubsystem);
UClass* Z_Construct_UClass_USnapserSubsystem_NoRegister()
{
	return USnapserSubsystem::StaticClass();
}
struct Z_Construct_UClass_USnapserSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IgnoreClassThumbnail", "" },
		{ "IncludePath", "SnapserSubsystem.h" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitingForResponse_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSignedIn_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreated_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBanned_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVerified_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sessionToken_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_refreshedAt_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tokenValiditySeconds_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_signinMode_MetaData[] = {
		{ "Category", "Snapser" },
		{ "ModuleRelativePath", "Public/SnapserSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWaitingForResponse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitingForResponse;
	static void NewProp_bSignedIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSignedIn;
	static const UECodeGen_Private::FStrPropertyParams NewProp_id;
	static void NewProp_bCreated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreated;
	static void NewProp_bIsBanned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBanned;
	static void NewProp_bIsVerified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVerified;
	static const UECodeGen_Private::FStrPropertyParams NewProp_tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_tags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_sessionToken;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_refreshedAt;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_tokenValiditySeconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_signinMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapserSubsystem_AnonSignIn, "AnonSignIn" }, // 1883885625
		{ &Z_Construct_UFunction_USnapserSubsystem_OtpSignIn, "OtpSignIn" }, // 2632932402
		{ &Z_Construct_UFunction_USnapserSubsystem_SignOut, "SignOut" }, // 1329638635
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapserSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bWaitingForResponse_SetBit(void* Obj)
{
	((USnapserSubsystem*)Obj)->bWaitingForResponse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bWaitingForResponse = { "bWaitingForResponse", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapserSubsystem), &Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bWaitingForResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitingForResponse_MetaData), NewProp_bWaitingForResponse_MetaData) };
void Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bSignedIn_SetBit(void* Obj)
{
	((USnapserSubsystem*)Obj)->bSignedIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bSignedIn = { "bSignedIn", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapserSubsystem), &Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bSignedIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSignedIn_MetaData), NewProp_bSignedIn_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapserSubsystem, id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_id_MetaData), NewProp_id_MetaData) };
void Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bCreated_SetBit(void* Obj)
{
	((USnapserSubsystem*)Obj)->bCreated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bCreated = { "bCreated", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapserSubsystem), &Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bCreated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreated_MetaData), NewProp_bCreated_MetaData) };
void Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bIsBanned_SetBit(void* Obj)
{
	((USnapserSubsystem*)Obj)->bIsBanned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bIsBanned = { "bIsBanned", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapserSubsystem), &Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bIsBanned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBanned_MetaData), NewProp_bIsBanned_MetaData) };
void Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bIsVerified_SetBit(void* Obj)
{
	((USnapserSubsystem*)Obj)->bIsVerified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bIsVerified = { "bIsVerified", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapserSubsystem), &Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bIsVerified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVerified_MetaData), NewProp_bIsVerified_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_tags_Inner = { "tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapserSubsystem, tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tags_MetaData), NewProp_tags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_sessionToken = { "sessionToken", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapserSubsystem, sessionToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sessionToken_MetaData), NewProp_sessionToken_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_refreshedAt = { "refreshedAt", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapserSubsystem, refreshedAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_refreshedAt_MetaData), NewProp_refreshedAt_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_tokenValiditySeconds = { "tokenValiditySeconds", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapserSubsystem, tokenValiditySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tokenValiditySeconds_MetaData), NewProp_tokenValiditySeconds_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_signinMode = { "signinMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapserSubsystem, signinMode), Z_Construct_UEnum_SnapserPlugin_SnapserSignInMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_signinMode_MetaData), NewProp_signinMode_MetaData) }; // 1704772758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapserSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bWaitingForResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bSignedIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bIsBanned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_bIsVerified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_sessionToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_refreshedAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_tokenValiditySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapserSubsystem_Statics::NewProp_signinMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapserSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapserSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SnapserPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapserSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapserSubsystem_Statics::ClassParams = {
	&USnapserSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USnapserSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapserSubsystem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapserSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapserSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapserSubsystem()
{
	if (!Z_Registration_Info_UClass_USnapserSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapserSubsystem.OuterSingleton, Z_Construct_UClass_USnapserSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapserSubsystem.OuterSingleton;
}
template<> SNAPSERPLUGIN_API UClass* StaticClass<USnapserSubsystem>()
{
	return USnapserSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapserSubsystem);
USnapserSubsystem::~USnapserSubsystem() {}
// End Class USnapserSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ SnapserSignInMode_StaticEnum, TEXT("SnapserSignInMode"), &Z_Registration_Info_UEnum_SnapserSignInMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1704772758U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapserSubsystem, USnapserSubsystem::StaticClass, TEXT("USnapserSubsystem"), &Z_Registration_Info_UClass_USnapserSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapserSubsystem), 1706976300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_994362063(TEXT("/Script/SnapserPlugin"),
	Z_CompiledInDeferFile_FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SnapserProject540_Plugins_SnapserPlugin_Source_SnapserPlugin_Public_SnapserSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
