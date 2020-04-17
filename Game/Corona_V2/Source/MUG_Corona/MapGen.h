// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapGen.generated.h"




UENUM(BlueprintType)
enum class ETileType : uint8 {
	MAIN				UMETA(DisplayName = "MAIN"),
	SPECIAL_1 			UMETA(DisplayName = "SPECIAL_1"),
	SPECIAL_2			UMETA(DisplayName = "SPECIAL_2")
};



UENUM(BlueprintType)
enum class ECitzenType : uint8 {
	SON					UMETA(DisplayName = "SON"),
	DAUGTHER 			UMETA(DisplayName = "DAUGHTER"),
	FATHER				UMETA(DisplayName = "FATHER"),
	GRANDPA				UMETA(DisplayName = "GRANDPA"),
	MOTHER				UMETA(DisplayName = "MOTHER"),
	GRANDMA				UMETA(DisplayName = "GRANDMA"),
	SCHOOL_BOY			UMETA(DisplayName = "SCHOOL_BOY"),
	SCHOOL_GIRL			UMETA(DisplayName = "SCHOOOL_GIRL")
};


UENUM(BlueprintType)
enum class EVehicleType : uint8 {
	PICKUP				UMETA(DisplayName = "PICKUP"),
	SPORTCAR 			UMETA(DisplayName = "SPORTCAR"),
	FIRETRUCK			UMETA(DisplayName = "FIRETRUCK"),
	BUS					UMETA(DisplayName = "BUS"),
	SCHOOLBUS			UMETA(DisplayName = "SCHOOLBUS"),
	TRUCK				UMETA(DisplayName = "TRUCK"),
	TRUCKDELIVERY		UMETA(DisplayName = "TRUCK_DELIVERY"),
	TRUCKGARBAGE		UMETA(DisplayName = "TRUCK_GARBAGE")
};


UENUM(BlueprintType)
enum class EGroupType : uint8 {
	TALKERS				UMETA(DisplayName = "TALKERS"),
	KIDS 				UMETA(DisplayName = "KIDS"),
	FAMILY				UMETA(DisplayName = "FAMILY")
};


UENUM(BlueprintType)
enum class ETrashType : uint8 {
	TRASH1				UMETA(DisplayName = "TRASH1"),
	TRASH2 				UMETA(DisplayName = "TRASH2")
};


UCLASS()
class MUG_CORONA_API AMapGen : public AActor{
	GENERATED_BODY()

public:	

	// Sets default values for this actor's properties
	AMapGen();

	UFUNCTION(BlueprintCallable, Exec, Category = "MapGen")
	ETileType getTileType(int currentTile);

	UFUNCTION(BlueprintCallable, Exec, Category = "MapGen")
	int getTileVariant(int currentTile);

	/******** ENEMIES ********/

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MapGen")
	static ECitzenType getCitzenType(int currentTile);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MapGen")
	static EVehicleType getVehicleType(int currentTile);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MapGen")
	static EGroupType getGroupType(int currentTile);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MapGen")
	static ETrashType getTrashType(int currentTile);

	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int getPiPosotion(int position);
	static FString NUMBER_PI;

	// LOOPS
	static int citzenLoop;
	static int carLoop;
	static int groupLoop;
	static int trashLoop;

	// CURRENTS TILES
	static ETileType currentTileType;
	static int currentCountMain;
	static int currentCountSP1;
	static int currentCountSP2;


};