#include "AirVehicles.h"

namespace race
{
	AirVehicles::AirVehicles(std::string name_, float speed_) :
		Vehicles(name_, speed_)
	{
		set_transport_type(TransportType::AIR);
	};

}