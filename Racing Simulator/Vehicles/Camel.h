#pragma once
#include "GroundVehicles.h"

#ifndef FCAMEL_EXPORT
#define CAMEL_EXPORT_API __declspec(dllexport)
#elif
#define CAMEL_EXPORT_API __declspec(dllimport)
#endif // !FCAMEL_EXPORT

namespace race
{
    class Camel :
        public GroundVehicles
    {
    protected:
        Camel(std::string name_, short speed_, short drivingTime_, short firstRestTime_, short nextRestTime_);

    public:
        CAMEL_EXPORT_API Camel();

    };
}