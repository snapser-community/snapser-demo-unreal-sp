// Copyright Thoughtloops Studio 2023. All Rights Reserved.
//
// Created: 26th July 2023
// Author: Richard Baxter, Recourse Design ltd. (richard@recourse.nz, www.recourse.nz)
//
// This is the Unreal Subsystem class. It exposes Blueprint Nodes for Signing in during game play.
// The Subsystems lifetime is for the duration of GameInstance.
//
#include "SnapserSubsystem.h"
#include "SnapserPlugin.h"
#include "Core.h"

#define LOCTEXT_NAMESPACE "FSnapserPluginModule"

//.................................................................................................
// Constructor 
//.................................................................................................
USnapserSubsystem::USnapserSubsystem(const FObjectInitializer& ObjectInitializer):bWaitingForResponse(false),bSignedIn(false),bCreated(false),bIsBanned(false),bIsVerified(false),refreshedAt(0),tokenValiditySeconds(0) {
}

USnapserSubsystem::USnapserSubsystem():bWaitingForResponse(false),bSignedIn(false),bCreated(false),bIsBanned(false),bIsVerified(false),refreshedAt(0),tokenValiditySeconds(0) {
}

//.................................................................................................
// httpRequestCompleteAnon
//
// This gets called once Snapser receives an HttpRequestComplete event and contains information
// on whether the SignIn was sucessful - this Hook is for the Anon SignIn
//.................................................................................................
void USnapserSubsystem::httpRequestCompleteAnon(const Snapser::OpenAPIAuthServiceApi::AnonLoginResponse& response) {

	bSignedIn=response.IsSuccessful();
	responseCode=(int32)response.GetHttpResponseCode(); // EHttpResponseCodes
	responseString=response.GetResponseString();

	if(response.Content.User.IsSet()) {
		if(response.Content.User->Id.IsSet()) {
			id=response.Content.User->Id.GetValue();
		}
		if(response.Content.User->Created.IsSet()) {
			bCreated=response.Content.User->Created.GetValue();
		}
		if(response.Content.User->IsBanned.IsSet()) {
			bIsBanned=response.Content.User->IsBanned.GetValue();
		}
		if(response.Content.User->IsVerified.IsSet()) {
			bIsVerified=response.Content.User->IsVerified.GetValue();
		}
		if(response.Content.User->SessionToken.IsSet()) {
			sessionToken=response.Content.User->SessionToken.GetValue();
		}
		if(response.Content.User->RefreshedAt.IsSet()) {
			refreshedAt=response.Content.User->RefreshedAt.GetValue();
		}
		if(response.Content.User->TokenValiditySeconds.IsSet()) {
			tokenValiditySeconds=response.Content.User->TokenValiditySeconds.GetValue();
		}
		if(response.Content.User->Tags.IsSet()) {
			tags=response.Content.User->Tags.GetValue();
		}
	}
	UE_LOG(LogTemp,Display,TEXT("anon response: signedIn: %d - created: %d - id: %s"),(int32)bSignedIn,(int32)bCreated,*id);//@@

	bWaitingForResponse=false; // the Blueprint Code can check this value (in Blueprint, "b" is omitted) - when it goes false, the server has responded
}

//.................................................................................................
// httpRequestCompleteOtp
//
// Hook that gets called when the server replies from an Otp SignIn
//.................................................................................................
void USnapserSubsystem::httpRequestCompleteOtp(const Snapser::OpenAPIAuthServiceApi::OtpResponse& response) {

	bSignedIn=response.IsSuccessful();
	responseCode=(int32)response.GetHttpResponseCode(); // EHttpResponseCodes
	responseString=response.GetResponseString();

	UE_LOG(LogTemp,Display,TEXT("opt response: signedIn: %d"),(int32)bSignedIn);//@@

	bWaitingForResponse=false; // the Blueprint Code can check this value (in Blueprint, "b" is omitted) - when it goes false, the server has responded
}

//.................................................................................................
// AnonSignIn
//
// This is the main routine.
//
// It just sets up the HTTP module and the request type, then it makes sure all the connection
// details have been reset.
//
// Then it just called the Snapser modules "AnonLogin" method. "snap" is defined in the header as 
// a static class of the Snapser module.
//.................................................................................................
bool USnapserSubsystem::AnonSignIn(const FString& name,bool create) {

	UE_LOG(LogTemp,Display,TEXT("SignIn (UE5.4): Anon..."));//@@

	FHttpModule& httpModule=FModuleManager::LoadModuleChecked<FHttpModule>("HTTP");
	FHttpRequestRef httpReq=httpModule.Get().CreateRequest();

	Snapser::OpenAPIAuthServiceApi::AnonLoginRequest request;
	request.Body.CreateUser=create;
	request.Body.Username=name;
	request.SetupHttpRequest(httpReq);

	completeDelegateAnon.BindUObject(this,&USnapserSubsystem::httpRequestCompleteAnon);

	bSignedIn=false;
	bWaitingForResponse=true;
	responseString=TEXT("");
	responseCode=0;
	id=TEXT("");
	signinMode=SIGNINMODE_NONE;

	FHttpRequestPtr ptr=snap.AnonLogin(request,completeDelegateAnon);

	UE_LOG(LogTemp,Display,TEXT("done."));//@@

	return true;
}

//.................................................................................................
// OtpSignIn
//.................................................................................................
bool USnapserSubsystem::OtpSignIn(const FString& email) {

	UE_LOG(LogTemp,Display,TEXT("SignIn: Otp..."));//@@

	FHttpModule& httpModule=FModuleManager::LoadModuleChecked<FHttpModule>("HTTP");
	FHttpRequestRef httpReq=httpModule.Get().CreateRequest();

	Snapser::OpenAPIAuthServiceApi::OtpRequest request;
	request.Body.Email=email;
	request.SetupHttpRequest(httpReq);

	completeDelegateOtp.BindUObject(this,&USnapserSubsystem::httpRequestCompleteOtp);

	bSignedIn=false;
	bWaitingForResponse=true;
	responseString=TEXT("");
	responseCode=0;
	id=TEXT("");
	signinMode=SIGNINMODE_NONE;

	FHttpRequestPtr ptr=snap.Otp(request,completeDelegateOtp);

	UE_LOG(LogTemp,Display,TEXT("done."));//@@

	return true;
}

//.................................................................................................
// SignOut
//
// Calls the Snapser LogOut method and resets all the connection data
//.................................................................................................
void USnapserSubsystem::SignOut() {

	Snapser::OpenAPIAuthServiceApi::LogoutRequest request;
	request.Token=sessionToken; // Session token to logout
	request.Token2=sessionToken; // Logged in user's session token

	snap.Logout(request);//, const FLogoutDelegate& Delegate

	// reset all the connection details
	bSignedIn=false;
	bWaitingForResponse=true;
	responseString=TEXT("");
	responseCode=0;
	id=TEXT("");
	signinMode=SIGNINMODE_NONE;
}

//.................................................................................................
#undef LOCTEXT_NAMESPACE
	

