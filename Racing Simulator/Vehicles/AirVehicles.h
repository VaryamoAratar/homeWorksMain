#pragma once
#include "Vehicles.h"

#ifndef FAIR_VEHICLES_EXPORT
#define AIR_VEHICLES_EXPORT_API __declspec(dllexport)
#elif
#define AIR_VEHICLES_EXPORT_API __declspec(dllimport)
#endif // !FAIR_VEHICLES_EXPORT

class AirVehicles :
    public Vehicles
{
protected:
    AirVehicles(std::string name_, float speed_);
    float drf{ 0 };

public:
    AIR_VEHICLES_EXPORT_API float get_drf();//получить коэффициент сокращения расстояния
};

