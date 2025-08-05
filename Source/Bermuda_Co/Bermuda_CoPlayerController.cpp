// Copyright Epic Games, Inc. All Rights Reserved.


#include "Bermuda_CoPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "Bermuda_CoCameraManager.h"

ABermuda_CoPlayerController::ABermuda_CoPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = ABermuda_CoCameraManager::StaticClass();
}

void ABermuda_CoPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}
	}
}
