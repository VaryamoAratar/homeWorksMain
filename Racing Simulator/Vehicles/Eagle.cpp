#include "Eagle.h"

Eagle::Eagle(int distance) : Eagle("���", 8)
{
	if (distance)
	{
		drf = 6;
	}
	
};

Eagle::Eagle(std::string name_, float speed_) : AirVehicles(name_, speed_) {};
