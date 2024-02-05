#include "RoverBoots.h"

namespace race
{
	RoverBoots::RoverBoots() : RoverBoots("Ботинки-вездеходы", 6, 60, 10, 5)
	{};

	RoverBoots::RoverBoots(
		std::string name_,
		short speed_,
		short drivingTime_,
		short firstRestTime_,
		short nextRestTime_) :
		GroundVehicles(name_, speed_, drivingTime_, firstRestTime_, nextRestTime_, nextRestTime_)
	{}
};