#pragma once
#include "GroundVehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace race
{
    class RoverBoots :
        public GroundVehicles
    {
    protected:
        RoverBoots(std::string name_, short speed_, short drivingTime_, short firstRestTime_, short nextRestTime_);

    public:
        VEHICLES_API RoverBoots();

    };
}