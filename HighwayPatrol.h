#pragma once 

#include "Vehicle.h"
#include "Highway.h"

struct HighwayPatrol : public Vehicle 
{
    HighwayPatrol(const std::string& n);
    ~HighwayPatrol();
    HighwayPatrol& operator=(const HighwayPatrol&) = default;
    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};
