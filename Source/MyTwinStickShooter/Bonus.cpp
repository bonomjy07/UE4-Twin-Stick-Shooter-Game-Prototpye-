// Fill out your copyright notice in the Description page of Project Settings.


#include "Bonus.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABonus::ABonus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Bonus score
	iBonusScore = 30;

	// Set PickupMesh
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	RootComponent = PickupMesh;

	// Physics on
	PickupMesh->SetSimulatePhysics(true);

}

// Called when the game starts or when spawned
void ABonus::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABonus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ABonus::WasCollected()
{
	Destroy();
}

