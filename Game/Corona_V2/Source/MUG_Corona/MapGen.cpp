// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGen.h"
#include <string>
#include <iostream>
#include "CoreMinimal.h"




// ----------------------------------------- //
// ----------------  INITS  ---------------- //
// ----------------------------------------- //

FString AMapGen::NUMBER_PI = "141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587006606315588174881520920962829254091715364367892590360011330530548820466521384146951941511609433057270365759591953092186117381932611793105118548074462379962749567351885752724891227938183011949129833673362440656643086"; 

// INIT LOOPS
int AMapGen::citzenLoop = 0;
int AMapGen::carLoop = 0;
int AMapGen::groupLoop = 0;
int AMapGen::trashLoop = 0;

// INIT TYPE
ETileType AMapGen::currentTileType = ETileType::MAIN;

int AMapGen::currentTilecount = 0;
int AMapGen::currentCountMain = 0;
int AMapGen::currentCountSP1 = 0;
int AMapGen::currentCountSP2 = 0;
int mainLength = 5;

// ----------------------------------------- //
// ---------------  DEFAULTS --------------- //
// ----------------------------------------- //

// Sets default values
AMapGen::AMapGen(){
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMapGen::BeginPlay(){

	// INIT LOOPS
	citzenLoop = 0;
	carLoop = 0;
	groupLoop = 0;
	trashLoop = 0;
	currentTileType = ETileType::MAIN;
	currentTilecount = 0;
	currentCountMain = 0;
	currentCountSP1 = 0;
	currentCountSP2 = 0;
	Super::BeginPlay();
	
}

// Called every frame
void AMapGen::Tick(float DeltaTime){
	Super::Tick(DeltaTime);
}

// ----------------------------------------- //
// -----------  MAP GENERATION ------------- //
// ----------------------------------------- //



int AMapGen::getPiPosotion(int position) {
	int i = 0;
	int vPosition = position % NUMBER_PI.Len();
	FString myf = NUMBER_PI.Mid(vPosition, 1);
	return FCString::Atoi(*myf);
}



ETileType AMapGen::getTileType(int currentTile) {

	currentTilecount++;

	

	if (currentTileType == ETileType::MAIN) {

		if (currentTilecount + 1 > mainLength) {
			currentTileType = ETileType::SPECIAL_1;
			currentTilecount = 0;
		}

	}else if (currentTileType == ETileType::SPECIAL_1) {

		if (currentTilecount + 1 > 3) {
			currentTileType = ETileType::MAIN;
			currentTilecount = 0;
		}

	}else if (currentTileType == ETileType::SPECIAL_2) {

	}
	
	return currentTileType;

}


int AMapGen::getTileVariant(int currentTile) {

	int returnedVariant = 0;

	if (currentTileType == ETileType::MAIN) {

		int piResult = getPiPosotion(currentTile);
		int tileVariant = piResult % mainLength;
		if (currentTilecount == mainLength && tileVariant == 4) {
			tileVariant = 0;
		}
		
		returnedVariant = tileVariant;




	} else if (currentTileType == ETileType::SPECIAL_1) {
		returnedVariant = currentCountSP1;
		currentCountSP1++;
		// RESET IF REACH THE LIMIT OF OUR BP'S
		if (currentCountSP1 + 1 > 3) {
			currentCountSP1 = 0;
		}
	} else if (currentTileType == ETileType::SPECIAL_2) {
		returnedVariant = currentCountSP2;
		currentCountSP2++;
		// RESET IF REACH THE LIMIT OF OUR BP'S
		if (currentCountSP2 + 1 > 3) {
			currentCountSP2 = 0;
		}
	}

	return returnedVariant;
}


// ----------------------------------------- //
// ------------  SPAWN ENEMIES ------------- //
// ----------------------------------------- //

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
	if (carLoop == 7) {
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





