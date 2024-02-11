#pragma once
#include "air_vehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

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