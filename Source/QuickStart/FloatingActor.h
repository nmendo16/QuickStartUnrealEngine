// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class QUICKSTART_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//instructions for 3.1 page 15
	float RunningTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating")
	float MovementMagnitude = 20.0f;

	UPROPERTY(EditAnywhere, Category = "Floating")
	float XYFrequency = 1.0f;
};
