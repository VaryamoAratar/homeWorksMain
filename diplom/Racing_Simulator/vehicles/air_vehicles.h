#pragma once
#include "vehicles.h"
#include"spec.h"

namespace racing_simulator
{
    class AirVehicles :
        public Vehicles
    {
    protected:
        AirVehicles(std::string name, float speed);
    public:
        VEHICLES_API AirVehicles();
    };
}