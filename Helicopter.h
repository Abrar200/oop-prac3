#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"
#include <string>

class Helicopter : public AirVehicle {
private:
    std::string name;

public:
    Helicopter();
    Helicopter(int w, std::string n);

    void fly(int headwind, int minutes) override;

    std::string get_name() const;
    void set_name(const std::string& n);
};

#endif