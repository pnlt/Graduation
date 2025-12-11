// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "nvaim.h"
#include "CharacterTesting.generated.h"

typedef nvaim::Result (*FnvaimInit) (
const nvaim::Preferences& pref, 
nvaim::PluginAndSystemInformation** pluginInfo, 
uint64_t sdkVersion
);

UCLASS()
class UNTOLD_STORY_API ACharacterTesting : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterTesting();

protected:
	// Called when the game starts or when spawned
	void* NvaimDllHandle = nullptr;
	FnvaimInit NvaimInitFuncPointer = nullptr;
	
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
