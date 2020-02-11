// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CorposGameMode.h"
#include "CorposHUD.h"
#include "CorposCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACorposGameMode::ACorposGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACorposHUD::StaticClass();
}
