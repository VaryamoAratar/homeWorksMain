#include "Eagle.h"

namespace race
{
	Eagle::Eagle(int distance) : Eagle("Îð¸ë", 8)
	{
		set_drf(6);
	};

	Eagle::Eagle(std::string name_, float speed_) : AirVehicles(name_, speed_) {};
}