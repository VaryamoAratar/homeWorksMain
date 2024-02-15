#pragma once
#include "ground_vehicles.h"
#include "spec.h"

namespace racing_simulator
{
    class Centaur :
        public GroundVehicles
    {
    protected:
        Centaur(std::string name, short speed, short driving_time, short next_rest_time);

    public:
        VEHICLES_API Centaur();

    };
}