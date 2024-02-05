#pragma once
#include "AirVehicles.h"

#ifndef FEAGLE_EXPORT
#define EAGLE_EXPORT_API __declspec(dllexport)
#elif
#define EAGLE_EXPORT_API __declspec(dllimport)
#endif // !FEAGLE_EXPORT

namespace race
{
    class Eagle :
        public AirVehicles
    {
    protected:
        Eagle(std::string name_, float speed_);

    public:
        EAGLE_EXPORT_API Eagle(int distance);

    };
}