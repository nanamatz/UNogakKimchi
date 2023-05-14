// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
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
private:
	UPROPERTY(VisibleAnywhere, Category = Pawn)
		bool IsAttacking = false;
	UPROPERTY(VisibleAnywhere, Category = Pawn)
		bool IsSkillCasting = false;
	UPROPERTY()
		class UMyAnimInstance* AnimInstance;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Attack();
	void Tumble();
	void Skill_Q();
	void Skill_E();
	
	void IsAttackHit();



	void UpDown(float Value);
	void LeftRight(float Value);
	void Yaw(float Value);

	UFUNCTION()
		void OnAttackEnded(UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
		void OnTumbleEnded();
	UFUNCTION()
		void OnSkillCastEnded();
public:
	UPROPERTY()
		float UpDownValue = 0;
	UPROPERTY()
		float LeftRightValue = 0;
	UPROPERTY()
		int32 AttackIndex = 0;
};
