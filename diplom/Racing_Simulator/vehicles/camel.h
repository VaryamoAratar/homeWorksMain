#pragma once
#include "ground_vehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace racing_simulator
{
    class Camel :
        public GroundVehicles
    {
    protected:
        Camel(std::string name, short speed, short driving_time, short first_rest_time, short next_rest_time);

    public:
        VEHICLES_API Camel();

    };
}