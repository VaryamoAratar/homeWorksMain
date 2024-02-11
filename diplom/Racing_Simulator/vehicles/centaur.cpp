#include "centaur.h"

namespace racing_simulator
{
	Centaur::Centaur() : Centaur("Кентавр", 15, 8, 2)
	{};

	Centaur::Centaur(
		std::string name,
		short speed,
		short driving_time,
		short next_rest_time) :
		GroundVehicles(name, speed, driving_time, next_rest_time, next_rest_time, next_rest_time)
	{};
}