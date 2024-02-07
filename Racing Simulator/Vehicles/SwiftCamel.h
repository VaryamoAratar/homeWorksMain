#pragma once
#include "GroundVehicles.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace race
{
    class SwiftCamel :
        public GroundVehicles
    {
    protected:
        SwiftCamel(std::string name_, float speed_, float drivingTime_, float firstRestTime_, float secondRestTime_, float nextRestTime_);

    public:
        VEHICLES_API SwiftCamel();

    };
}