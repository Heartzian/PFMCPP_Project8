#pragma once

#include "Vehicle.h"

struct Car : Vehicle
{
    Car(const std::string& n);
    void closeWindows();
    void tryToEvade();
};
