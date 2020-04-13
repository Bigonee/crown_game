// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGen.h"


int AMapGen::citzenLoop = 0;
int AMapGen::carLoop = 0;
int AMapGen::groupLoop = 0;
int AMapGen::trashLoop = 0;


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

	return ETileType::ROAD;


}

ECitzenType AMapGen::getCitzenType(int currentTile) { 

	ECitzenType citzenToReturn = ECitzenType(citzenLoop);
	citzenLoop++;
	if (citzenLoop == 8) {
		citzenLoop = 0;
	}

	return  citzenToReturn;

}

EVehicleType AMapGen::getVehicleType(int currentTile) {

	EVehicleType VehicleTypeToReturn = EVehicleType(carLoop);
	carLoop++;
	if (carLoop == 8) {
		carLoop = 0;
	}

	return VehicleTypeToReturn;

}


EGroupType AMapGen::getGroupType(int currentTile) {

	EGroupType groupToReturn = EGroupType(groupLoop);
	groupLoop++;
	if (groupLoop == 3) {
		groupLoop = 0;
	}

	return  groupToReturn;

}


ETrashType AMapGen::getTrashType(int currentTile) {

	ETrashType trashToReturn = ETrashType(trashLoop);
	trashLoop++;
	if (trashLoop == 2) {
		trashLoop = 0;
	}

	return  trashToReturn;

}





