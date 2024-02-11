#pragma once
#include "air_vehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace racing_simulator
{
    class Broomstick :
        public AirVehicles
    {
    protected:
        Broomstick(std::string name, float speed);

    public:
        VEHICLES_API Broomstick();
        VEHICLES_API float GetDrf(int distance) override;

    };
}