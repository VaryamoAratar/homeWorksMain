#pragma once
#include "Vehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace race
{
    class GroundVehicles :
        public Vehicles
    {
    protected:
        float drivingTime{ 0 };
        float firstRestTime{ 0 };
        float secondRestTime{ 0 };
        float nextRestTime{ 0 };
        GroundVehicles(std::string name_, float speed_, float drivingTime_, float firstRestTime_, float secondRestTime_, float nextRestTime_);
   
    };
}
