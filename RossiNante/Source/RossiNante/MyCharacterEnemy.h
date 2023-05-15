// Fill out your copyright notice in the Description page of Project Settings.

/*

2023.05.05 이수환 - 변수 추가 및 함수 정의
몬스터 클래스
 - 플레이어 추적
 - 걷기
 - 뛰기
 - 일반 공격
 - 스킬 사용
 - 스킬 쿨타임 관리
 - HP감소
 - HP회복
 - 죽음

*/

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isDuringAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isPhase2;


	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* AttackCombo_AnimMt; // 평타 콤보 애니메이션
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* AttackSkill_AnimMt; // 스킬 애니메이션

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* HitReact_AnimMt; // 히트 애니메이션
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Death_AnimMt; // 히트 애니메이션

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Phase2_AnimMt; // 페이즈2모션 애니메이션

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void Attack_Melee();
	UFUNCTION(BlueprintCallable)
	void Attack_Melee_End();
	UFUNCTION(BlueprintCallable)
	void Attack_Skill_Melee();
	UFUNCTION(BlueprintCallable)
	void Attack_Skill_End();
	UFUNCTION(BlueprintCallable)
	void HitReact(float damage);

	void DieAnim();

};
