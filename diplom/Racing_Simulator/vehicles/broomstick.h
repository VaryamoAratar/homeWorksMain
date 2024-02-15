#pragma once
#include "air_vehicles.h"
#include "spec.h"

namespace racing_simulator
{
    class Broomstick :
        public AirVehicles
    {
    protected:
        Broomstick(std::string name, float speed);

    public:
        VEHICLES_API Broomstick();
        VEHICLES_API float GetDrf(int distance) override;

    };
}