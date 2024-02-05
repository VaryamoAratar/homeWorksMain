#include "Broomstick.h"

Broomstick::Broomstick(int distance) : Broomstick("Метла", 20)
{
	drf = static_cast<int>(distance / 1000);

};

Broomstick::Broomstick(std::string name_, float speed_) : AirVehicles(name_, speed_) {};
