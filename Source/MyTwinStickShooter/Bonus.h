// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bonus.generated.h"

UCLASS()
class MYTWINSTICKSHOOTER_API ABonus : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABonus();
	int iBonusScore;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

public:

	UFUNCTION(BlueprintCallable, Category = "Bonus")
	void WasCollected();

	/** Static mesh to represent the pickup in the level*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PickupMesh;

};
