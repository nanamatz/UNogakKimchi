// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyGameModeBase.h"
#include "MyStatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROSSINANTE_API UMyStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMyStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void InitializeComponent() override;
public:
	void SetLevel(int32 NewLevel);
	void SetCurExp(int exp);
	void SetAttackUpgrade(int attack_upgrade);
	void OnAttacked(float DamageAmount);

	UFUNCTION(BlueprintCallable)
	int32 GetLevel() { return Level; }
	UFUNCTION(BlueprintCallable)
	int32 GetHp() { return Hp; }
	UFUNCTION(BlueprintCallable)
	int32 GetAttack() { return Attack; }
	UFUNCTION(BlueprintCallable)
	int32 GetMaxHp() { return maxHp; }
	UFUNCTION(BlueprintCallable)
	int32 GetExp() { return CurExp; }
	UFUNCTION(BlueprintCallable)
		int32 GetAttackUpgrade() { return AttackUpgrade; }

	UFUNCTION(BlueprintCallable)
		void SetExp(int32 exp) { 
			if (CurExp + exp >= RequireExp) {
				CurExp = RequireExp - CurExp - exp;
				SetLevel(Level + 1);
			}
			else {
				CurExp += exp;
			}
		}

private:
	int32 maxHp;

	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
		int32 Level;
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
		int32 Attack;
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
		int32 Hp;
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
		int32 CurExp;
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
		int32 RequireExp;
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
		int32 AttackUpgrade;

	AMyGameModeBase* GameMode;

};
