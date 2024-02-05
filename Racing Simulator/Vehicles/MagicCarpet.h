#pragma once
#include "AirVehicles.h"

#ifndef FMAGICCARPET_EXPORT
#define MAGICCARPET_EXPORT_API __declspec(dllexport)
#elif
#define MAGICCARPET_EXPORT_API __declspec(dllimport)
#endif // !FMAGICCARPET_EXPORT

class MagicCarpet :
    public AirVehicles
{
protected:
    MagicCarpet(std::string name_, float speed_);

public:
    MAGICCARPET_EXPORT_API MagicCarpet(int distance);

};

