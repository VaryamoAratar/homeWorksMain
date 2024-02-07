#pragma once
#include "AirVehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace race
{
    class Eagle :
        public AirVehicles
    {
    protected:
        Eagle(std::string name_, float speed_);

    public:
        VEHICLES_API Eagle(int distance);

    };
}