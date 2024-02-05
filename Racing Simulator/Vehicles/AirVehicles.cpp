#include "AirVehicles.h"


AirVehicles::AirVehicles(std::string name_, float speed_) :
	Vehicles(name_, speed_)
{};

float AirVehicles::get_drf() { return drf; };
