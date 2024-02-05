#pragma once
#include "GroundVehicles.h"

#ifndef FSWIFTCAMEL_EXPORT
#define SWIFTCAMEL_EXPORT_API __declspec(dllexport)
#elif
#define SWIFTCAMEL_EXPORT_API __declspec(dllimport)
#endif // !FSWIFTCAMEL_EXPORT

class SwiftCamel :
    public GroundVehicles
{
protected:
    SwiftCamel(std::string name_, float speed_, float drivingTime_, float firstRestTime_, float secondRestTime_, float nextRestTime_);

public:
    SWIFTCAMEL_EXPORT_API SwiftCamel();

};

