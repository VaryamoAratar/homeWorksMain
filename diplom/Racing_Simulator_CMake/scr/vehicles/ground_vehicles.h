#pragma once
#include "vehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace racing_simulator
{
    class GroundVehicles :
        public Vehicles
    {
    protected:
        GroundVehicles(std::string name, float speed, float driving_time, float first_rest_time, float second_rest_time, float next_rest_time);
    };
}
