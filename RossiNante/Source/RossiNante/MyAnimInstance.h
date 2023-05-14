// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackHit);
DECLARE_MULTICAST_DELEGATE(FOnTumbleEnd);
DECLARE_MULTICAST_DELEGATE(FOnSkillEnd);
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

	void PlayAttackMontage();//몽타주 실행 함수
	void PlaySkill_QMontage();
	void PlaySkill_EMontage();
	void PlayTumbleMontage();

	void JumpToSection(int32 SectionIndex);

	FName GetAttackMontageName(int32 SectionIndex);

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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* AttackMontage;//기본 공격 몽타주 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* TumbleMontage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* Skill_QMontage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* Skill_EMontage;
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsJumping = false;//점프하는지를 판단하기 위한 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsTumbling = false;//구르기하는지를 판단하기 위한 변수

	FOnAttackHit OnAttackHit;
	FOnTumbleEnd OnTumbleEnd;
	FOnSkillEnd OnSkillEnd;
	
	
};
