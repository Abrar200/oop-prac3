#include "Helicopter.h"
#include <algorithm>

Helicopter::Helicopter() : AirVehicle(), name("") {}

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w), name(n) {}

void Helicopter::fly(int headwind, int minutes) {
    float fuel_consumption = 0.0;
    
    if (headwind <= 40) {
        fuel_consumption = 0.18 * minutes;
    } else {
        fuel_consumption = 0.18 * 40 + 0.4 * (minutes - 40);
    }

    if (get_weight() > 5670) {
        fuel_consumption += 0.01 * minutes;
    }

    float current_fuel = get_fuel();
    if (current_fuel - fuel_consumption >= 20) {
        set_fuel(std::max(0.0f, current_fuel - fuel_consumption));
        AirVehicle::fly(headwind, minutes);  // This will increment numberOfFlights
    }
    // If fuel would drop below 20%, the flight doesn't occur and fuel isn't used
}

std::string Helicopter::get_name() const { return name; }
void Helicopter::set_name(const std::string& n) { name = n; }