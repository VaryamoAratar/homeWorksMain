#include "Eagle.h"

Eagle::Eagle(int distance) : Eagle("Îð¸ë", 8)
{
	if (distance)
	{
		drf = 6;
	}
	
};

Eagle::Eagle(std::string name_, float speed_) : AirVehicles(name_, speed_) {};
