// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapGen.generated.h"

UCLASS()
class MUG_CORONA_API AMapGen : public AActor
{
	GENERATED_BODY()
	FString CATEGORY = "MapGen";
	
public:	
	// Sets default values for this actor's properties
	AMapGen();

	UPROPERTY(BlueprintReadWrite, Category = CATEGORY)
	TSubclassOf<AActor> tileToSpawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION()
	void spawnObject(FVector fvector, FRotator frotator);

};
