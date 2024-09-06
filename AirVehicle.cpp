#include "AirVehicle.h"

AirVehicle::AirVehicle() : weight(0), fuel(100), numberOfFlights(0) {}

AirVehicle::AirVehicle(int w) : weight(w), fuel(100), numberOfFlights(0) {}

void AirVehicle::fly(int headwind, int minutes) {
    numberOfFlights++;
}

void AirVehicle::refuel() {
    fuel = 100;
}

int AirVehicle::get_weight() const {
    return weight;
}

void AirVehicle::set_weight(int w) {
    weight = w;
}

float AirVehicle::get_fuel() const {
    return fuel;
}

void AirVehicle::set_fuel(float f) {
    fuel = f;
}

int AirVehicle::get_numberOfFlights() const {
    return numberOfFlights;
}

void AirVehicle::set_numberOfFlights(int n) {
    numberOfFlights = n;
}