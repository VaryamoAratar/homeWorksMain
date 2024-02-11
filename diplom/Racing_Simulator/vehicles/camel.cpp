#include "camel.h"

namespace racing_simulator
{
	Camel::Camel() : Camel("Верблюд", 10, 30, 5, 8)
	{};

	Camel::Camel(
		std::string name,
		short speed,
		short driving_time,
		short first_rest_time,
		short next_rest_time) :
		GroundVehicles(name, speed, driving_time, first_rest_time, next_rest_time, next_rest_time)
	{};
}