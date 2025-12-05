// Fill out your copyright notice in the Description page of Project Settings.
#include "Untold_Story/Public/CharacterTesting.h"
#include "Engine/Engine.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

// Sets default values
ACharacterTesting::ACharacterTesting()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACharacterTesting::BeginPlay()
{
	Super::BeginPlay();
	nvaim::Preferences preferences{};
	
	/*
	 *const TCHAR* DLLName = AIM_CORE_BINARY_NAME;
	NvaimDllHandle = FPlatformProcess::GetDllHandle(DLLName);
	FString func_name = "nvaimInit";
	NvaimInitFuncPointer = static_cast<FnvaimInit>(FPlatformProcess::GetDllExport(NvaimDllHandle, *func_name));
	*/

	/*if (nvaimInit(preferences, nullptr, nvaim::kSDKVersion) != nvaim::ResultOk)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				5.f,
				FColor::Red,
				"Failed to initialize Nvaim"
			);
		}
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				5.f,
				FColor::Blue,
				"succeed in initializing Nvaim"
			);
		}
	}*/
}

// Called every frame
void ACharacterTesting::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterTesting::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

