#pragma once
#include "air_vehicles.h"
#include "spec.h"

namespace racing_simulator
{
    class Eagle :
        public AirVehicles
    {
    protected:
        Eagle(std::string name, float speed);

    public:
        VEHICLES_API Eagle();
        VEHICLES_API float GetDrf(int distance) override;

    };
}