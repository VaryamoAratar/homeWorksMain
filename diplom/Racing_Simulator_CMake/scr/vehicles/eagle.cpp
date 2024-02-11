#include "eagle.h"

namespace racing_simulator
{
	Eagle::Eagle() : Eagle("Îð¸ë", 8) {};

	Eagle::Eagle(std::string name, float speed) : AirVehicles(name, speed) {};

	float Eagle::GetDrf(int distance) { return 6; }
}