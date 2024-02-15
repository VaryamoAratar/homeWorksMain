#pragma once
#include "air_vehicles.h"
#include "spec.h"

namespace racing_simulator
{
    class MagicCarpet :
        public AirVehicles
    {
    protected:
        MagicCarpet(std::string name, float speed);

    public:
        VEHICLES_API MagicCarpet();  
        VEHICLES_API float GetDrf(int distance) override;

    };
}