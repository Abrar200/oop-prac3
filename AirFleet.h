#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"
#include "Airplane.h"
#include "Helicopter.h"

class AirFleet {
private:
    static const int FLEET_SIZE = 5;
    AirVehicle* fleet[FLEET_SIZE];

public:
    AirFleet();
    ~AirFleet();
    AirVehicle** get_fleet();
};

#endif