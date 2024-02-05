#pragma once
#include "GroundVehicles.h"

#ifndef FCENTAUR_EXPORT
#define CENTAUR_EXPORT_API __declspec(dllexport)
#elif
#define CENTAUR_EXPORT_API __declspec(dllimport)
#endif // !FCENTAUR_EXPORT

namespace race
{
    class Centaur :
        public GroundVehicles
    {
    protected:
        Centaur(std::string name_, short speed_, short drivingTime_, short nextRestTime_);

    public:
        CENTAUR_EXPORT_API Centaur();

    };
}