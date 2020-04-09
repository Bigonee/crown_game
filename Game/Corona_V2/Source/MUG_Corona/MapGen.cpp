// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGen.h"

// Sets default values
AMapGen::AMapGen()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



// Called when the game starts or when spawned
void AMapGen::BeginPlay(){
	Super::BeginPlay();
	
}

// Called every frame
void AMapGen::Tick(float DeltaTime){
	Super::Tick(DeltaTime);
}


/******** CUSTOM******/

ETileTheme AMapGen::getTileTheme(int currentTile) {


	if (currentTile % 2 == 0) {
		return ETileTheme::TT_CITY;
	}else {
		return ETileTheme::TT_CITY;
	}


}


ETileType AMapGen::getTileType(int currentTile) {


	/*if (currentTile % 5 == 0 && currentTile != 1 && currentTile != 0) {

		if (lastshown) {
			lastshown = false;
			return ETileType::TT_FUEL_STATION;
		}
		lastshown = true;
		return ETileType::TT_CHURCH;

	} else if (currentTile % 3 == 0) {
		return ETileType::TT_CROSSROAD;
	}else {
		return ETileType::TT_ROAD;
	}*/

	return ETileType::TT_ROAD;


}

