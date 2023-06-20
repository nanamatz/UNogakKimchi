// Fill out your copyright notice in the Description page of Project Settings.


#include "BossHPWidget.h"
#include "Components/ProgressBar.h"

void UBossHPWidget::UpdateHealthPercent(float curHP, float maxHP)
{
	BossHealthBar->SetPercent(curHP / maxHP);
}

