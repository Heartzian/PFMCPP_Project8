#pragma once 

#include "Vehicle.h"
#include "Highway.h"

struct HighwayPatrol : public Vehicle 
{
    HighwayPatrol(const std::string& n);
    void scanHighway(Highway* h);
    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};
