// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MingerGamesHUD.generated.h"

UCLASS()
class AMingerGamesHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMingerGamesHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

