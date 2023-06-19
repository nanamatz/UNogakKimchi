// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacterEnemy.generated.h"

UCLASS()
class ROSSINANTE_API AMyCharacterEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacterEnemy();
protected:

	virtual void PostInitializeComponents() override;

private:
	UPROPERTY()
		class UMyAnimInstance* AnimInstance;
	UPROPERTY()
		class UBossHPWidget* BossHPWidget;

	void InitHPWidget();
	void UpdateHPWidget();

	class AMyGameModeBase* GameMode;
	float hpBarDuration;
	float currentHPBarDuration;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float DefaultHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float BaseAttackDamage; // 기본 공격 데미지

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float AttackRange; // 공격 범위

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float FollowDistance; // 추적 거리

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float CurSpeed; // 현재 속도

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float RunSpeed; // 달리는 속도

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float WalkSpeed; // 걷는 속도

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float AttackRate; // 공격 속도

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		bool isRunning; // 달리는 상태 여부
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		AActor* TargetPlayer; // 추적 대상 플레이어
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float SkillCooldown; // 스킬 쿨다운
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float SkillCooldownTime; // 스킬 쿨다운

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float Exp; // 몬스터가 주는 경험치


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isDuringAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isDie;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isSpawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isPhase2;

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_SpawnMontage; // 보스 생성 애니메이션
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_AttackMontage; // 평타 콤보 애니메이션
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_SkillMontage; // 스킬 애니메이션

	// Smash
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_SmashStartMontage; // Start

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_HitReactMontage; // 피격 애니메이션
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_DeathMontage; // 사망 애니메이션

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_JumpMontage; // 피격 애니메이션

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_Phase2Montage; // 페이즈2모션 애니메이션

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void Attack_Melee();
	UFUNCTION(BlueprintCallable)
		void Attack_Melee_End();
	UFUNCTION(BlueprintCallable)
		void Attack_Skill_Melee();
	UFUNCTION(BlueprintCallable)
		void Attack_Skill_End();
	UFUNCTION(BlueprintCallable)
		void Smash_Skill_Start();
	UFUNCTION(BlueprintCallable)
		void SpawnAnimEnd();
	UFUNCTION(BlueprintCallable)
		void JumpTowardsPlayer();

	UFUNCTION(BlueprintCallable)
		void HitReact(float damage);
	UFUNCTION(BlueprintCallable)
		void SpawnAnim();
	UFUNCTION(BlueprintCallable)
		void DieAnim();

	// 카메라 진동
	UFUNCTION(BlueprintCallable)
		void PlayerCameraShake();


	UFUNCTION(BlueprintImplementableEvent)
		void OnJumpDecal_Start();
	UFUNCTION(BlueprintImplementableEvent)
		void OnJumpDecal_End();

	//카메라 흔들기
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		TSubclassOf<UCameraShake> MyShake;
};
