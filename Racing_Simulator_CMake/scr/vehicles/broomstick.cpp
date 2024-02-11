#include "broomstick.h"

namespace racing_simulator
{

	Broomstick::Broomstick() : Broomstick("Метла", 20) {};

	Broomstick::Broomstick(std::string name, float speed) : AirVehicles(name, speed) {};

	float Broomstick::GetDrf(int distance) { return distance / 1000; }

}