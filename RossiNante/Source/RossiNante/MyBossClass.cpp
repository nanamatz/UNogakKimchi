// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBossClass.h"
#include "MyAnimInstance.h"
#include "Engine.h"

// Sets default values
AMyBossClass::AMyBossClass()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*
	ConstructorHelpers::FObjectFinder<UAnimMontage> Attack_AnimMt(TEXT("AnimMontage'/Game/MyBoss/Montage/MyBossAttack_Montage.BossAttack_Montage'"));
	if (Attack_AnimMt.Succeeded()) {
		MyBossAttack_Montage = Attack_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> Skill_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossSmash_Montage.BossSmash_Montage'"));
	if (Skill_AnimMt.Succeeded()) {
		MyBossAttack_Skill_Montage = Skill_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> BossHitReact_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossHitReact.BossHitReact'"));
	if (BossHitReact_AnimMt.Succeeded()) {
		Boss_HitReactMontage = BossHitReact_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> Death_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossDeath_Montage.BossDeath_Montage'"));
	if (Death_AnimMt.Succeeded()) {
		Boss_DeathMontage = Death_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> Phase2_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossPhase2_Montage.BossPhase2_Montage'"));
	if (Phase2_AnimMt.Succeeded()) {
		Boss_Phase2Montage = Phase2_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> Spawn_AnimMt(TEXT("AnimMontage'/Game/MyBoss/Montage/MyBossGameStart_Montage.MyBossGameStart_Montage'"));
	if (Spawn_AnimMt.Succeeded()) {
		MyBossGameStart_Montage = Spawn_AnimMt.Object;
	}
	*/

}

void AMyBossClass::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	AnimInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
}

// Called when the game starts or when spawned
void AMyBossClass::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyBossClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// 공격
void AMyBossClass::MyBossAttack_Melee()
{
	if (!isDuringAttack) {

		CurSpeed = 0;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Attack!"));

		PlayAnimMontage(MyBossAttack_Montage);
		isDuringAttack = true;

		FTimerHandle TH_Attack_End;
		GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyBossClass::MyBossAttack_Melee_End, 1.7f, false);

	}

}

void AMyBossClass::MyBossAttack_Melee_End()
{
	isDuringAttack = false;
	CurSpeed = WalkSpeed;
}

void AMyBossClass::Attack_Skill_Melee()
{
	if (!isDuringAttack) {

		CurSpeed = 0;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Attack2!"));

		PlayAnimMontage(MyBossAttack2_Montage);
		isDuringAttack = true;

		FTimerHandle TH_Attack_End;
		GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyBossClass::MyBossAttack_Melee_End, 2.f, false);

	}

}

void AMyBossClass::Attack_Skill_End()
{
	isDuringAttack = false;
	CurSpeed = WalkSpeed;
}


void AMyBossClass::PowerDash_Skill_Start()
{
	isDuringAttack = true;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PowerDash!"));
	PlayAnimMontage(MyBoss_PowerDashMontage);

	FTimerHandle TH_Attack_End;
	GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyBossClass::Attack_Skill_End, 1.f, false, 3.f);
}

void AMyBossClass::PowerDash_Skill_End()
{
	isDuringAttack = false;
	CurSpeed = WalkSpeed;
}

void AMyBossClass::SpawnAnim() {
	PlayAnimMontage(MyBossGameStart_Montage);
	FTimerHandle TH_Attack_End;
	GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyBossClass::MyBossAttack_Melee_End, 4.f, false);
}

void AMyBossClass::HitReact(float damage) {
	CurSpeed = 0;

	DefaultHP -= damage;

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BossHit!"));


	//체력이 0이하면 죽는 애니메이션 실행
	if (DefaultHP <= 0) {
		isDie = true;
		FTimerHandle TH_Hit_End;
		PlayAnimMontage(Boss_DeathMontage);
		GetWorldTimerManager().SetTimer(TH_Hit_End, this, &AMyBossClass::DieAnim, 1.3f, false);
		return;
	}
	else {
		if (!isDuringAttack) {
			PlayAnimMontage(Boss_HitReactMontage);
		}
	}

	FTimerHandle TH_Hit_End;
	GetWorldTimerManager().SetTimer(TH_Hit_End, this, &AMyBossClass::MyBossAttack_Melee_End, 2.f, false);
}

void AMyBossClass::DieAnim() {
	this->Destroy();
}

