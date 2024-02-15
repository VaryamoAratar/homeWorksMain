#pragma once
#include "ground_vehicles.h"
#include "spec.h"

namespace racing_simulator
{
    class RoverBoots :
        public GroundVehicles
    {
    protected:
        RoverBoots(std::string name, short speed, short driving_time, short first_rest_time, short next_rest_time);

    public:
        VEHICLES_API RoverBoots();

    };
}