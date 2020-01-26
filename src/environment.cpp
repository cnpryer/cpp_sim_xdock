#include "environment.h"

CrossDock::CrossDock(int nDwells, int nWorkers, int nDoors) {
    this->nDwells = nDwells;
    this->nWorkers = nWorkers;
    this->nDoors = nDoors;
};

void CrossDock::printCrossDock() {
    // print number of dwells, workers, and doors.
    std::cout << "CrossDock dwells(" << this->nDwells << ") nWorkers(" << this->nWorkers << ") nDoors(" << this->nDoors << ")" << std::endl;
};

int CrossDock::getNumDwells() {
    return this->nDwells;
};

Truck::Truck(int maxWeight, int maxCube) {
    this->maxWeight = maxWeight;
    this->maxCube = maxCube;
};

Shipment::Shipment(std::vector<int> dwells) {
    this->dwells = dwells;
};