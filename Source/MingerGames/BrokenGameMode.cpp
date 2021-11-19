// Copyright Epic Games, Inc. All Rights Reserved.

#include "BrokenGameMode.h"
#include "MingerGamesHUD.h"
#include "MingerGamesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMingerGamesGameMode::AMingerGamesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMingerGamesHUD::StaticClass();
}
