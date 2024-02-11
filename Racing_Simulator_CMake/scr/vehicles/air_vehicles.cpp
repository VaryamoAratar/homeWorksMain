#include "air_vehicles.h"

namespace racing_simulator
{
	AirVehicles::AirVehicles(std::string name, float speed) :
		Vehicles(name, speed)
	{
		SetTransportType(TransportType::kAir);
	};

	AirVehicles::AirVehicles() : AirVehicles("����������", 1) {};
}