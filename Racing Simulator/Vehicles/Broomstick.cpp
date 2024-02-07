#include "Broomstick.h"

namespace race
{

	Broomstick::Broomstick() : Broomstick("�����", 20) {};

	Broomstick::Broomstick(std::string name_, float speed_) : AirVehicles(name_, speed_) {};

	float Broomstick::get_drf(int distance) { return distance / 1000; }

}