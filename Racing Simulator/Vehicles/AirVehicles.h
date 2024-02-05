#pragma once
#include "Vehicles.h"

#ifndef FAIR_VEHICLES_EXPORT
#define AIR_VEHICLES_EXPORT_API __declspec(dllexport)
#elif
#define AIR_VEHICLES_EXPORT_API __declspec(dllimport)
#endif // !FAIR_VEHICLES_EXPORT

namespace race
{
    class AirVehicles :
        public Vehicles
    {
    protected:
        AirVehicles(std::string name_, float speed_);
        float drf{ 0 };

    };
}