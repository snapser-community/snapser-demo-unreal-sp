# snapser-demo-unreal-sp
Snapser Demo Game - Unreal Engine
# snapser-demo-unreal-sp
Snapser Demo Game - Unreal Engine

## Getting Started


## Install Unity



1. This demo project was built in 2022.3.8f. You could download the latest Unity version available or download the 2022.3.8f from the archives as mentioned below. You can run this example project in any 2021+ Unity version.
2. Unity Hub is the most convenient way to manage Unity installations. Typically, you should use the LTS version as they are the most stable. You can download Unity Hub for Windows/Mac from this link - [https://unity.com/unity-hub](https://unity.com/unity-hub)
3. Unity Hub allows you to download only the latest versions of Unity. You can download any version of Unity from the archives from here - [https://unity.com/releases/editor/archive](https://unity.com/releases/editor/archive)

## Setup Snapser



1. Go to [www.snapser.com](www.snapser.com) and login with your registered email address.
2. Create a new snapend (or you can choose to edit a snapend). On the following page, add the following snaps
    1. Authentication
    2. Leaderboard
    3. Profiles
    4. Statistics and segmentation
    5. Storage


![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Gifs/createproject.gif)
![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Gifs/addsnaps.gif)


3. Follow the rest of the steps to create your snapend.
4. Please note that it will take a few minutes to create your snapend.

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Gifs/creatingsnapendpopup.gif)
5. Once created, you will see your snapend ready in your dashboard.

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/4bac758225ee8a6b951fb77e128e2d81c9de0591/Docs/Images/Screenshot%202023-10-26%20204840.png)


6. From this dashboard, you can manage your snapend, download the sdk for your specific platform, access admin tools to update your snaps specific to your game, access api explorer etc.

## Setup Snapser Snaps

1. You can configure your individual snaps from the Admin Tools for your individual snapend.

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/AdminToolsIntro.png)


2. For this demo, we are going to use anonymous login which is the easiest way to set up authentication for your game. You can choose to have alternate method such as email, facebook, google etc.
3. Just add an anon connector under ‘Add an connector’’

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Gifs/anonconnector.gif)


4. Similarly, configure profiles, statistics, storage and leaderboards as follows

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Gifs/profileconnector.gif)

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Gifs/statsconnector.gif)

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Gifs/storageconnector.gif)

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Gifs/leaderboardconnector.gif)

## Download Project

1. Clone or download this example project and open it in Unreal.


The Snapser Plugin for Unreal is a C++ plugin that interfaces with the Snapser C++ Module. It Exposes a Subsystem to Blueprint from where Nodes are available for Signing In and Out of the server. It also maintains a set of connection variables such as “IsBanned” and “IsValidated”. Along with this PDF, there is an example project that you should have received a download link to. The example project is also the build project for the plugin, it contains the C++ code for both the plugin, and the Snapser Module-so you will need to have Visual Studio Installed (you mentioned you built the module, so should be ok). Just unzip the download and navigate into the root folder, there is a “.sln” file - double-click that to open it in Visual Studio.

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/1.png)


You should be able to just build this project and run it to see the example. The demo level will load with some text - just play that level to do the SignIn.


![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/2.png)


## Usage - Code Layout


1. The Snapser code is added to the plugin in its entirety. This means it can be compiled on any platform, and can be steppedintowiththe debugging tools.

2. The main Plugin Project is a C++ project, and has the plugin code, and the Snapser module code located in the “plugin” folder. Thisisthe only project that has to be C++ - once the plugin is compiled, it can be installed to Blueprint only Projects too.

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/3.png)


3. The plugin itself is just a simple SubSystem class based on the lifetime of the GameInstance - SnapserSubsystem.cpp. The SnapserPlugin.cpp file just handles the Startup and Shutdown of the plugin.


4. To incorporate the Snapser module, all that is need (seeing as the source files are included in the project) is to add its Module, andthe HTTP Module to our dependencies.


5. They’re just added to the “SnapserPlugin.Build.cs” file:


![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/4.png)



6. This code should build on all versions of UE5.



![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/5.png)



7. The plugin itself is not tied down to a specific version, but if you’re wanting to submit the plugin to the marketplace, you’ll needtohave a separate build for each version of UE. In the “.uplugin” file, you’ll need to add a engine version field such as:


![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/6.png)



8. The fields in this file that can be changed are:
    1. Version and VersionName - the plugin version
    2. FriendlyName
    3. Description
    4. Category - can be “RunTime”
    5. CreatedBy
    6. CreatedByURL
    7. MarketplaceURL (if you submit to the marketplace, they will give you a URL for this entry) SupportURL - your own website.


## Usage - The Snapser Subsystem

1. The Snapser Subsystem is the interface between Blueprints and the Snapser Module.

2. There are only a few functions and some variables:



![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/7.png)


3. You can get access to a “Snapser Subsystem” at any time by right-clicking in a blueprint and finding “snapser”.

4. Note that the lifetime of this subsystem is for the duration of the game - trying to use it from the editor will result inanerror(mustPlay).



![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/8.png)



## Demo - Signing In


1. The included example project contains a simple blueprint with a test Sign In and Sign Out in the BeginPlay and Tick Events.
2. Handling the response from the server can be done in so many ways I’ve tried to keep it as generic as possible. This exampleprojecthas a simple way of handling the response, and timing out if not received.
3. The code in the Begin Play simply calls the AnonSignIn method in the Snapser Module and sets a timeout counter to10. Inthetestthe timeout occurs after 10 seconds of no response from the server.




![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/9.png)



4. The code in the Tick is the bit of code that waits for a response from the server - The tick is set in the Class Settings tohavea1second interval - then in the Tick, the Timeout variable tested if it’s non-zero, and if it is and “WaitingForResponse” is True- thatmeans we are waiting for a response. If that is the case, then we decrement the timeout value (once per second) andtest if it’szero- if it is, we’ve timed out - log an error.

5. If timeout is greater than zero, but “WaitingForResponse” is False - that means we’ve received a response fromthe server - theSnapser Subsystem will now contain the details the server sent.

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/10.png)


6. There is also the OtpSignIn Node which accepts an email address. This system does not contain all the data the AnonSignIndoes-just if it succeeded.

![alt_text](https://github.com/snapser-community/snapser-demo-unreal-sp/blob/main/Docs/Images/11.png)


That’s it. Just play the test level to do a SignIn, log details and SignOut.

