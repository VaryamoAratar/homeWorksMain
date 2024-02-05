#pragma once
#include "GroundVehicles.h"

#ifndef FROVERROOTS_EXPORT
#define ROVERROOTS_EXPORT_API __declspec(dllexport)
#elif
#define ROVERROOTS_EXPORT_API __declspec(dllimport)
#endif // !FROVERROOTS_EXPORT

namespace race
{
    class RoverBoots :
        public GroundVehicles
    {
    protected:
        RoverBoots(std::string name_, short speed_, short drivingTime_, short firstRestTime_, short nextRestTime_);

    public:
        ROVERROOTS_EXPORT_API RoverBoots();

    };
}