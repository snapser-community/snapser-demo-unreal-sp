// Copyright Thoughtloops Studio 2023. All Rights Reserved.
#pragma once

#include "Subsystems/GameInstanceSubsystem.h"
#include "HttpModule.h"
#include "ThirdParty/sdk-cpp-ue4/Public/SnapserAuthServiceAPI.h"
#include "ThirdParty/sdk-cpp-ue4/Public/SnapserAuthServiceApiOperations.h"
#include "SnapserSubsystem.generated.h"

UENUM()
enum SnapserSignInMode {
	// None (not signed in)
	SIGNINMODE_NONE			UMETA(DisplayName="None"),
	// Anonymous
	SIGNINMODE_ANON			UMETA(DisplayName="Anon"),
	// Otp
	SIGNINMODE_OTP			UMETA(DisplayName="OTP")
};

UCLASS(BlueprintType, meta=(IgnoreClassThumbnail))
class USnapserSubsystem : public UGameInstanceSubsystem {
public:
	GENERATED_UCLASS_BODY()
	
	USnapserSubsystem();

	// Sign In using AnonLogin
	UFUNCTION(BlueprintCallable,Category="Snapser")
	bool	AnonSignIn(const FString& name,bool create);

	// Sign In using Otp
	UFUNCTION(BlueprintCallable,Category="Snapser")
	bool	OtpSignIn(const FString& email);

	// Sign Out of any current connection
	UFUNCTION(BlueprintCallable,Category="Snapser")
	void	SignOut();

protected:

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	bool			bWaitingForResponse=false;

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	bool			bSignedIn=false;

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	FString			id;

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	bool			bCreated=false;

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	bool			bIsBanned=false;

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	bool			bIsVerified=false;

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	TArray<FString>	tags;

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	FString			sessionToken;

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	int64			refreshedAt=0;

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	int64			tokenValiditySeconds=0;

	UPROPERTY(Category=Snapser,BlueprintReadOnly)
	TEnumAsByte<SnapserSignInMode>	signinMode=SnapserSignInMode::SIGNINMODE_NONE;

private:

	Snapser::SnapserAuthServiceApi snap;

	void	httpRequestCompleteAnon(const Snapser::SnapserAuthServiceApi::AuthAnonLoginResponse& response);
	Snapser::SnapserAuthServiceApi::FAuthAnonLoginDelegate completeDelegateAnon;

	void	httpRequestCompleteOtp(const Snapser::SnapserAuthServiceApi::AuthOtpResponse& response);
	Snapser::SnapserAuthServiceApi::FAuthOtpDelegate completeDelegateOtp;

	FString			responseString;
	int32			responseCode;
};
