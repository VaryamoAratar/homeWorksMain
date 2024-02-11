#include "rover_boots.h"

namespace racing_simulator
{
	RoverBoots::RoverBoots() : RoverBoots("Ботинки-вездеходы", 6, 60, 10, 5)
	{};

	RoverBoots::RoverBoots(
		std::string name,
		short speed,
		short driving_time,
		short first_rest_time,
		short next_rest_time) :
		GroundVehicles(name, speed, driving_time, first_rest_time, next_rest_time, next_rest_time)
	{}
};