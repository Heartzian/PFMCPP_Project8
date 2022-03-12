#pragma once
#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& n);

    void setCruiserSpeed();
    void pullOver();
};

