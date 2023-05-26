// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterEnemy.h"
#include "MyAnimInstance.h"
#include "Engine.h"

// Sets default values
AMyCharacterEnemy::AMyCharacterEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UAnimMontage> Attack_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossAttack_Montage.BossAttack_Montage'"));
	if (Attack_AnimMt.Succeeded()) {
		Boss_AttackMontage = Attack_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> Skill_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossSmash_Montage.BossSmash_Montage'"));
	if (Skill_AnimMt.Succeeded()) {
		Boss_SkillMontage = Skill_AnimMt.Object;
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
	ConstructorHelpers::FObjectFinder<UAnimMontage> Spawn_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossSpawn_Montage.BossSpawn_Montage'"));
	if (Spawn_AnimMt.Succeeded()) {
		Boss_SpawnMontage = Spawn_AnimMt.Object;
	}


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


// 공격
void AMyCharacterEnemy::Attack_Melee()
{
	if (!isDuringAttack) {

		CurSpeed = 0;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Attack!"));

		PlayAnimMontage(Boss_AttackMontage);
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

		PlayAnimMontage(Boss_SkillMontage);
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

void AMyCharacterEnemy::Smash_Skill_Start()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Smash!"));

	PlayAnimMontage(Boss_SmashStartMontage);

	//FTimerHandle TH_Attack_End;
	//GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyCharacterEnemy::Smash_Skill_Loop, 1.f, false);


}

void AMyCharacterEnemy::SpawnAnim() {
	PlayAnimMontage(Boss_SpawnMontage);
	FTimerHandle TH_Attack_End;
	GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyCharacterEnemy::Attack_Melee_End, 4.f, false);
}

void AMyCharacterEnemy::HitReact(float damage) {
	CurSpeed = 0;

	DefaultHP -= damage;

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BossHit!"));


	//체력이 0이하면 죽는 애니메이션 실행
	if (DefaultHP <= 0) {
		FTimerHandle TH_Hit_End;
		PlayAnimMontage(Boss_DeathMontage);
		GetWorldTimerManager().SetTimer(TH_Hit_End, this, &AMyCharacterEnemy::DieAnim, 1.3f, false);
		return;
	}
	else {
		PlayAnimMontage(Boss_HitReactMontage);
	}

	FTimerHandle TH_Hit_End;
	GetWorldTimerManager().SetTimer(TH_Hit_End, this, &AMyCharacterEnemy::Attack_Melee_End, 2.f, false);
}

void AMyCharacterEnemy::DieAnim() {
	this->Destroy();
}


