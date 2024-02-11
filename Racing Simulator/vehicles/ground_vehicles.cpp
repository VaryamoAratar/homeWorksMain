#include "ground_vehicles.h"

namespace racing_simulator
{
	GroundVehicles::GroundVehicles(std::string name, float speed, float driving_time, float first_rest_time, float second_rest_time, float next_rest_time) :
		Vehicles(name, speed)
	{
		SetDrivingTime(driving_time);
		SetFirstRestTime(first_rest_time);
		SetSecondRestTime(second_rest_time);
		SetNextRestTime(next_rest_time);
		SetTransportType(TransportType::kGround);
	};
}