#include <iostream>
#include <iomanip>
#include "Helicopter.h"

int main() {
    Helicopter heli(6000, "TestHeli");

    std::cout << std::fixed << std::setprecision(2);

    heli.fly(0, 45);
    std::cout << "Fuel after 45 minute flight, no head wind: " << heli.get_fuel() << "%" << std::endl;

    heli.refuel();
    std::cout << "Fuel after refuel: " << heli.get_fuel() << "%" << std::endl;

    heli.fly(0, 300);
    std::cout << "Fuel after trying 300 minute flight, no head wind, expected no takeoff: " << heli.get_fuel() << "%" << std::endl;
    std::cout << "Number of flights: " << heli.get_numberOfFlights() << std::endl;

    heli.refuel();
    heli.fly(45, 30);
    std::cout << "Fuel after 30 minute flight with 45km/h headwind: " << heli.get_fuel() << "%" << std::endl;

    heli.refuel();
    heli.fly(40, 30);
    std::cout << "Fuel after 30 minute flight with 40km/h: " << heli.get_fuel() << "%" << std::endl;

    return 0;
}