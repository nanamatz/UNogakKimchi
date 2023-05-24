// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackHit);
DECLARE_MULTICAST_DELEGATE(FOnTumbleEnd);
DECLARE_MULTICAST_DELEGATE(FOnSkillEnd);
//DECLARE_MULTICAST_DELEGATE(FOnHitEnd);
/**
 * 
 */
UCLASS()
class ROSSINANTE_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

		virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UMyAnimInstance();

public:

	void PlayAttackMontage();//기본 공격 몽타주 실행 함수
	void PlaySkill_QMontage();//Q스킬 몽타주 실행 함수
	void PlaySkill_EMontage();//E스킬 몽타주 실행 함수
	void PlayTumbleMontage();//구르기 몽타주 실행 함수
	void PlayDeathMontage();
	void PlayHitReactMontage();


	void PlayBossAttackMontage();
	void PlayBossSkillMontage();
	void PlayBossHitReactMontage();
	void PlayBossDeathMontage();

	void JumpToSection(int32 SectionIndex);//기본 공격 애니메이션 섹션 넘기는 함수

	FName GetAttackMontageName(int32 SectionIndex);//섹션 인덱스에 따라서 기본 공격 애니메이션 불러오는 함수

private:
	UFUNCTION()
		void AnimNotify_AttackHit();
	UFUNCTION()
		void AnimNotify_OnTumbleEnd();
	UFUNCTION()
		void AnimNotify_SkillCastEnd();
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Speed;//캐릭터의 이동 여부를 결정하기 위한 속도 변수

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Horizontal; //이동 블렌드 스페이스에서 가로축의 값을 나타내는 변수

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Vertical;	//이동 블렌드 스페이스에서 세로축의 값을 나타내는 변수


	//==========================플레이어 애니메이션=================================
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* AttackMontage;//기본 공격 몽타주 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* TumbleMontage;//구르기 몽타주 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* Skill_QMontage;//Q스킬 몽타주 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* Skill_EMontage;//E스킬 몽타주 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* DeathMontage;//사망 몽타주 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* HitReactMontage;//사망 몽타주 변수

	//==========================보스 애니메이션=================================

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_AttackMontage; // 평타 콤보 애니메이션
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_SkillMontage; // 스킬 애니메이션

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_HitReactMontage; // 피격 애니메이션
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_DeathMontage; // 사망 애니메이션

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_Phase2Montage; // 페이즈2모션 애니메이션

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsJumping = false;//점프하는지를 판단하기 위한 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsTumbling = false;//구르기하는지를 판단하기 위한 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsAttacked = false;//피격을 판단하기 위한 변수

	FOnAttackHit OnAttackHit;
	FOnTumbleEnd OnTumbleEnd;
	FOnSkillEnd OnSkillEnd;
	/*FOnHitEnd OnHitEnd;*/
	
};
