#include "AI.h"
#include <cassert>

void GetAngerByFloor(BuildingState& buildingState, int totalAngerLevel[NUM_FLOORS]) {
	for (int i = 0; i < NUM_FLOORS; i++) {
		for (int j = 0; j < buildingState.floors[i].numPeople; j++) {
			totalAngerLevel[i] += buildingState.floors[i].people[j].angerLevel;
		}
	}
}

int WhichElevatorShouldGo(BuildingState& buildingState, int floorNum) {
	int diffInFloors = 9999999;
	int elevatorToGo = -1;
	for (int i = 0; i < NUM_ELEVATORS; i++) {
		if ((buildingState.elevators[i].currentFloor - floorNum) < diffInFloors) {
			diffInFloors = (buildingState.elevators[i].currentFloor - floorNum);
			elevatorToGo = i;
		}
	}
	return elevatorToGo;
}

Move getAIMove(const BuildingState& buildingState) {
    
    // TODO: finish getAIMove
    // Returning PASS move to prevent compilation error
    return Move();
}

void setAIPickupList(Move& move, const BuildingState& buildingState, const Floor& floorToPickup) {
    
    // TODO: finish setAIPickupList
}

