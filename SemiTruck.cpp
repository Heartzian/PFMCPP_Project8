#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::setCruiserSpeed()
{
    setSpeed(65);
    std::cout << name << ": Cruising Speed Achieved!" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": hello officer, how can I help you?" << std::endl;
}
