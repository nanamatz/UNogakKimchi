// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"
#include "UObject/ConstructorHelpers.h"

UMyAnimInstance::UMyAnimInstance()
{
	
	ConstructorHelpers::FObjectFinder<UAnimMontage> AttackMont(TEXT("AnimMontage'/Game/Animations/BP_AttackMontage.BP_AttackMontage'"));
	if (AttackMont.Succeeded()) {
		AttackMontage = AttackMont.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> QMont(TEXT("AnimMontage'/Game/Animations/BP_SKillQMontage.BP_SKillQMontage'"));
	if (QMont.Succeeded()) {
		Skill_QMontage = QMont.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> TumbleMont(TEXT("AnimMontage'/Game/Animations/BP_TumbleMontage.BP_TumbleMontage'"));
	if (TumbleMont.Succeeded()) {
		TumbleMontage = TumbleMont.Object;
	}
}

void UMyAnimInstance::PlayAttackMontage() //Play Attack Animation
{
	if (!Montage_IsPlaying(AttackMontage)) {
		Montage_Play(AttackMontage, 1.f); 
	}
}

void UMyAnimInstance::PlaySkill_QMontage()
{
	if (!Montage_IsPlaying(Skill_QMontage)) {
		Montage_Play(Skill_QMontage,1.f);
	}
}

void UMyAnimInstance::PlayTumbleMontage()
{
	if (!Montage_IsPlaying(TumbleMontage)) {
		Montage_Play(TumbleMontage, 1.f);
	}
}

void UMyAnimInstance::JumpToSection(int32 SectionIndex)//Jump Attack Montage Section 
{
	FName Name = GetAttackMontageName(SectionIndex);
	Montage_JumpToSection(Name, AttackMontage);
}

FName UMyAnimInstance::GetAttackMontageName(int32 SectionIndex)	//Get Attack Montage Section 
{
	return FName(*FString::Printf(TEXT("Attack%d"),SectionIndex));
}

void UMyAnimInstance::AnimNotify_AttackHit() //When Attack Effect for example Sounds, Effects etc
{
	//UE_LOG(LogTemp, Log, TEXT("AnimNotify_AttackHit"));
	OnAttackHit.Broadcast();
}

void UMyAnimInstance::AnimNotify_OnTumbleEnd()
{
	UE_LOG(LogTemp, Warning, TEXT("Tumble"));
	OnTumbleEnd.Broadcast();
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds) //Every Frame, Update Animtaions
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (IsValid(Pawn)) {

		auto Character = Cast<AMyCharacter>(Pawn);

		if (Character) {	//if Character Is Valid, Get Parameters

			IsJumping = Character->GetMovementComponent()->IsFalling();

			Speed = Character->GetVelocity().Size();

			Vertical = Character->UpDownValue;
			Horizontal = Character->LeftRightValue;
		}
	}

}