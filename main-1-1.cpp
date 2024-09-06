#include <iostream>
#include "AirVehicle.h"

int main() {
    AirVehicle av1;
    AirVehicle av2(1000);

    std::cout << "AV1 weight: " << av1.get_weight() << std::endl;
    std::cout << "AV2 weight: " << av2.get_weight() << std::endl;

    av1.fly(10, 30);
    av2.fly(20, 45);

    std::cout << "AV1 flights: " << av1.get_numberOfFlights() << std::endl;
    std::cout << "AV2 flights: " << av2.get_numberOfFlights() << std::endl;

    av1.refuel();
    std::cout << "AV1 fuel after refuel: " << av1.get_fuel() << std::endl;

    return 0;
}