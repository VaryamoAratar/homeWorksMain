#pragma once
#include "vehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

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