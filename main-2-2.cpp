#include <iostream>
#include "Airplane.h"

int main() {
    Airplane plane1;
    Airplane plane2(5000, 100);

    std::cout << "Plane 1 - Initial state:" << std::endl;
    std::cout << "Weight: " << plane1.get_weight() << ", Passengers: " << plane1.get_numPassengers() << ", Fuel: " << plane1.get_fuel() << std::endl;

    std::cout << "\nPlane 2 - Initial state:" << std::endl;
    std::cout << "Weight: " << plane2.get_weight() << ", Passengers: " << plane2.get_numPassengers() << ", Fuel: " << plane2.get_fuel() << std::endl;

    plane2.reducePassengers(20);
    std::cout << "\nPlane 2 - After reducing 20 passengers:" << std::endl;
    std::cout << "Passengers: " << plane2.get_numPassengers() << std::endl;

    plane2.fly(65, 120);
    std::cout << "\nPlane 2 - After flying for 120 minutes with 65 km/h headwind:" << std::endl;
    std::cout << "Fuel: " << plane2.get_fuel() << ", Flights: " << plane2.get_numberOfFlights() << std::endl;

    plane2.fly(40, 500);
    std::cout << "\nPlane 2 - Attempting to fly for 500 minutes with 40 km/h headwind:" << std::endl;
    std::cout << "Fuel: " << plane2.get_fuel() << ", Flights: " << plane2.get_numberOfFlights() << std::endl;

    return 0;
}