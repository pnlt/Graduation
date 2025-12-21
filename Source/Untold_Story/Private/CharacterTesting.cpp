// Fill out your copyright notice in the Description page of Project Settings.
#include "Untold_Story/Public/CharacterTesting.h"

#include <nvaim_ai.h>
#include <nvaim_cpu.h>
#include <nvaim_gpt.h>
#include <string>
#include <vector>

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
	static const char* PluginPaths[] = {
		"D:/Doan_Cat_Phu/Graduation/Plugins/NV_ACE_Reference/ThirdParty/Nvigi/Models"
	};
	preferences.logLevel = nvaim::LogLevel::eVerbose; // Enable verbose logging
	preferences.utf8PathsToPlugins = PluginPaths; // Set plugin path
	
	const TCHAR* DLLName = AIM_CORE_BINARY_NAME;
	NvaimDllHandle = FPlatformProcess::GetDllHandle(DLLName);
	FString func_name = "nvaimInit";
	NvaimInitFuncPointer = static_cast<FnvaimInit>(FPlatformProcess::GetDllExport(NvaimDllHandle, *func_name));
	

	if (NvaimInitFuncPointer(preferences, nullptr, nvaim::kSDKVersion) != nvaim::ResultOk)
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
	}
	/*nvaim::InferenceInstance* gptInstance = nullptr;
	
	// Define NPC role in a system prompt
	std::string npcPrompt = "You are a helpful NPC named TJ in a fantasy game.";
	nvaim::CpuData systemPromptData(npcPrompt.length() + 1, npcPrompt.c_str());
	nvaim::InferenceDataText systemPromptSlot(systemPromptData);
 
	// Set runtime parameters
	nvaim::GPTRuntimeParameters runtime{};
	runtime.tokensToPredict = 200;  // Limit token prediction to 200 tokens
	runtime.interactive = true;     // Enable multi-turn conversations
	std::vector<nvaim::InferenceDataSlot> slots = {
		{nvaim::kGPTDataSlotSystem, &systemPromptSlot}
	};
	
	// Inference context
	nvaim::InferenceExecutionContext gptExecCtx{};
	gptExecCtx.instance = gptInstance;
	gptExecCtx.runtimeParameters = runtime;
	//gptExecCtx.inputs = slots.data();
	*/
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
