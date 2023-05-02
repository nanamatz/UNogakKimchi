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
}
void UMyAnimInstance::PlayAttackMontage()
{
	if (!Montage_IsPlaying(AttackMontage)) {
		Montage_Play(AttackMontage, 1.f); 
	}
}
void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (IsValid(Pawn)) {

		auto Character = Cast<AMyCharacter>(Pawn);

		if (Character) {

			IsJumping = Character->GetMovementComponent()->IsFalling();

			//Rotation = Character->GetActorRotation();
			//Velocity = Character->GetVelocity();

			Speed = Character->GetVelocity().Size();
			//Direction = this->CalculateDirection(Velocity, Rotation);

			Vertical = Character->UpDownValue;
			Horizontal = Character->LeftRightValue;
		}
	}

}