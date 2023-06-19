// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BossHPWidget.generated.h"

/**
 * 
 */
UCLASS()
class ROSSINANTE_API UBossHPWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
		class UProgressBar* BossHealthBar;

	void UpdateHealthPercent(float curHP, float maxHP);
};
