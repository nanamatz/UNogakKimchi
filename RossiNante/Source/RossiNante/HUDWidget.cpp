// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDWidget.h"
#include "Components/ProgressBar.h"

void UHUDWidget::UpdateHealthPercent()
{
	float HealthPercent = static_cast<float>(Stat->GetHp()) / (Stat->GetMaxHp());

	HealthBar->SetPercent(HealthPercent);
}

void UHUDWidget::UpdateQSkillCoolTime(float waitingTime, float coolTime)
{
	QSkillBar->SetPercent(waitingTime / coolTime);
}

void UHUDWidget::InitHealthPercent(UMyStatComponent* _Stat)
{
	Stat = _Stat;
	UpdateHealthPercent();
}

