// Fill out your copyright notice in the Description page of Project Settings.

#include "TileAlgorithm.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

int32 UTileAlgorithm::getTile(int currentTile) {
	return 100 + currentTile;
}

