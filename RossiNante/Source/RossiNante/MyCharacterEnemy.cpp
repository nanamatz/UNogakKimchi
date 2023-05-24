// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterEnemy.h"
#include "MyAnimInstance.h"
#include "Engine.h"

// Sets default values
AMyCharacterEnemy::AMyCharacterEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyCharacterEnemy::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	AnimInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
}

// Called when the game starts or when spawned
void AMyCharacterEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyCharacterEnemy::Attack_Melee()
{
	if (!isDuringAttack) {

		CurSpeed = 0;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Attack!"));

		AnimInstance->PlayBossAttackMontage();
		isDuringAttack = true;

		FTimerHandle TH_Attack_End;
		GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyCharacterEnemy::Attack_Melee_End, 1.7f, false);

	}

}

void AMyCharacterEnemy::Attack_Melee_End()
{
	isDuringAttack = false;
	CurSpeed = WalkSpeed;
}

void AMyCharacterEnemy::Attack_Skill_Melee()
{
	if (!isDuringAttack) {

		CurSpeed = 0;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Skill!"));

		AnimInstance->PlayBossSkillMontage();
		isDuringAttack = true;

		FTimerHandle TH_Attack_End;
		GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyCharacterEnemy::Attack_Melee_End, 2.f, false);

	}

}

void AMyCharacterEnemy::Attack_Skill_End()
{
	isDuringAttack = false;
	CurSpeed = WalkSpeed;
}


void AMyCharacterEnemy::HitReact(float damage) {
	CurSpeed = 0;

	DefaultHP -= damage;

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BossHit!"));


	//체력이 0이하면 죽는 애니메이션 실행
	if (DefaultHP <= 0) {
		FTimerHandle TH_Hit_End;
		AnimInstance->PlayBossDeathMontage();
		GetWorldTimerManager().SetTimer(TH_Hit_End, this, &AMyCharacterEnemy::DieAnim, 1.3f, false);
		return;
	}
	else {
		AnimInstance->PlayBossHitReactMontage();
	}

	FTimerHandle TH_Hit_End;
	GetWorldTimerManager().SetTimer(TH_Hit_End, this, &AMyCharacterEnemy::Attack_Melee_End, 2.f, false);
}

void AMyCharacterEnemy::DieAnim() {
	this->Destroy();
}
