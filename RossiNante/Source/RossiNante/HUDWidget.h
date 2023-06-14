// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyStatComponent.h"
#include "HUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class ROSSINANTE_API UHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
private:

	UPROPERTY(EditAnywhere)
		class UMyStatComponent* Stat;

public:
	UPROPERTY(meta = (BindWidget))
		class UProgressBar* HealthBar;
	UPROPERTY(meta = (BindWidget))
		class UProgressBar* QSkillBar;

	void UpdateHealthPercent();
	void UpdateQSkillCoolTime(float waitingTime, float coolTime);
	void InitHealthPercent(UMyStatComponent* Stat);
};
