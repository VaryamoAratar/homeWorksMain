#include "Eagle.h"

namespace race
{
	Eagle::Eagle() : Eagle("Îð¸ë", 8) {};

	Eagle::Eagle(std::string name_, float speed_) : AirVehicles(name_, speed_) {};

	float Eagle::get_drf(int distance) { return 6; }
}