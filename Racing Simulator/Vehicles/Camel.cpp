#include "Camel.h"

namespace race
{
	Camel::Camel() : Camel("Верблюд", 10, 30, 5, 8)
	{};

	Camel::Camel(
		std::string name_,
		short speed_,
		short drivingTime_,
		short firstRestTime_,
		short nextRestTime_) :
		GroundVehicles(name_, speed_, drivingTime_, firstRestTime_, nextRestTime_, nextRestTime_)
	{};
}