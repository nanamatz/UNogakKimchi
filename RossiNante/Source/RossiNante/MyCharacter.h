// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyGameModeBase.h"
#include "MyCharacter.generated.h"

UCLASS()
class ROSSINANTE_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsAttacking = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsSkillCasting = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsTumbling = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsJumping = false;

private:
	AMyGameModeBase* GameMode;
	float q_waitingTime;
	
	UPROPERTY()
		class UMyAnimInstance* AnimInstance;

	UPROPERTY(EditAnywhere, Category = "Skill")
		float q_coolTime;
	UPROPERTY(EditAnywhere, Category = "Movement")
		float Speed = 200.f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Attack();
	void Skill_Q();
	void Skill_E();
	void IsAttackHit();
	void UpDown(float Value);
	void LeftRight(float Value);
	void Yaw(float Value);
	void UpdateHealthPercent();	// HealthBar HUD에 현재 체력을 Update함


	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION()
		void OnAttackEnded(UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
		void OnHitEnded();
	UFUNCTION()
		void OnTumbleEnded();
	UFUNCTION()
		void OnSkillCastEnded();

	UFUNCTION(BlueprintCallable)
		void Tumble();

	UPROPERTY()
		bool IsDie = false;
	UPROPERTY()
		float UpDownValue = 0;
	UPROPERTY()
		float LeftRightValue = 0;
	UPROPERTY()
		int32 AttackIndex = 0;

	UPROPERTY(EditAnywhere)
		class UMyStatComponent* Stat;

	UPROPERTY()
		class UHUDWidget* HUDWidget;
};
