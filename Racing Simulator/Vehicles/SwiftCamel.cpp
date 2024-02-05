#include "SwiftCamel.h"

namespace race
{
	SwiftCamel::SwiftCamel() : SwiftCamel("Верблюд-быстроход", 40, 10, 5, 6.5, 8)
	{};

	SwiftCamel::SwiftCamel(
		std::string name_,
		float speed_,
		float drivingTime_,
		float firstRestTime_,
		float secondRestTime_,
		float nextRestTime_) :
		GroundVehicles(name_, speed_, drivingTime_, firstRestTime_, secondRestTime_, nextRestTime_)
	{};
}