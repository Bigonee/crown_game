// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapGen.generated.h"

UENUM(BlueprintType)
enum class ETileTheme : uint8 {
	TT_CITY 			UMETA(DisplayName = "city"),
	TT_DESERT 			UMETA(DisplayName = "desert"),
	TT_FOREST			UMETA(DisplayName = "forest")
};

UENUM(BlueprintType)
enum class ETileType : uint8 {
	TT_ROAD				UMETA(DisplayName = "road"),
	TT_CROSSROAD 		UMETA(DisplayName = "crossroad"),
	TT_FUEL_STATION		UMETA(DisplayName = "fuel_station"),
	TT_CHURCH			UMETA(DisplayName = "church")
};



UCLASS()
class MUG_CORONA_API AMapGen : public AActor{

	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AMapGen();

	UFUNCTION(BlueprintCallable, Exec, Category = CATEGORY)
	ETileTheme getTileTheme(int currentTile);

	UFUNCTION(BlueprintCallable, Exec, Category = CATEGORY)
	ETileType getTileType(int currentTile);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};







