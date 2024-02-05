#pragma once
#include "AirVehicles.h"

#ifndef FBROOMSTICK_EXPORT
#define BROOMSTICK_EXPORT_API __declspec(dllexport)
#elif
#define BROOMSTICK_EXPORT_API __declspec(dllimport)
#endif // !FBROOMSTICK_EXPORT

namespace race
{
    class Broomstick :
        public AirVehicles
    {
    protected:
        Broomstick(std::string name_, float speed_);

    public:
        BROOMSTICK_EXPORT_API Broomstick(int distance);

    };
}