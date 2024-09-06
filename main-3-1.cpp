#include <iostream>
#include "AirFleet.h"

int main() {
    AirFleet myFleet;
    AirVehicle** fleet = myFleet.get_fleet();

    std::cout << "Air Fleet Contents:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Vehicle " << i + 1 << ":" << std::endl;
        std::cout << "  Weight: " << fleet[i]->get_weight() << std::endl;
        
        Helicopter* heli = dynamic_cast<Helicopter*>(fleet[i]);
        if (heli) {
            std::cout << "  Type: Helicopter" << std::endl;
            std::cout << "  Name: " << heli->get_name() << std::endl;
        }
        
        else if (Airplane* plane = dynamic_cast<Airplane*>(fleet[i]) ) {
            std::cout << "  Type: Airplane" << std::endl;
            std::cout << "  Passengers: " << plane->get_numPassengers() << std::endl;
        }
        else {
            std::cout << "  Type: Generic AirVehicle" << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}