#include "Airplane.h"
#include <algorithm>

Airplane::Airplane() : AirVehicle(), numPassengers(0) {}

Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}

void Airplane::reducePassengers(int x) {
    numPassengers = std::max(0, numPassengers - x);
}

int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes) {
    float fuel_consumption = 0.0;
    
    if (headwind < 60) {
        fuel_consumption = 0.25 * minutes;
    } else {
        fuel_consumption = 0.25 * 60 + 0.5 * (minutes - 60);
    }

    fuel_consumption += 0.001 * numPassengers * minutes;

    float current_fuel = get_fuel();
    if (current_fuel - fuel_consumption >= 20) {
        set_fuel(std::max(0.0f, current_fuel - fuel_consumption));
        AirVehicle::fly(headwind, minutes);  // This will increment numberOfFlights
    }
    // If fuel would drop below 20%, the flight doesn't occur and fuel isn't used
}