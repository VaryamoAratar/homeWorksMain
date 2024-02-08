#pragma once
#include "Vehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace race
{
    class AirVehicles :
        public Vehicles
    {
    protected:
        AirVehicles(std::string name_, float speed_);
    public:
        VEHICLES_API AirVehicles();
    };
}