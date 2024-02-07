#pragma once
#include "AirVehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace race
{
    class MagicCarpet :
        public AirVehicles
    {
    protected:
        MagicCarpet(std::string name_, float speed_);

    public:
        VEHICLES_API MagicCarpet();  
        VEHICLES_API float get_drf(int distance) override;

    };
}