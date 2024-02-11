#include "swift_camel.h"

namespace racing_simulator
{
	SwiftCamel::SwiftCamel() : SwiftCamel("Верблюд-быстроход", 40, 10, 5, 6.5, 8)
	{};

	SwiftCamel::SwiftCamel(
		std::string name,
		float speed,
		float driving_time,
		float first_rest_time,
		float second_rest_time,
		float next_rest_time) :
		GroundVehicles(name, speed, driving_time, first_rest_time, second_rest_time, next_rest_time)
	{};
}