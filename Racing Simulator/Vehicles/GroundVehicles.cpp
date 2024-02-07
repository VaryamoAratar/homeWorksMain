#include "GroundVehicles.h"

namespace race
{
	GroundVehicles::GroundVehicles(std::string name_, float speed_, float drivingTime_, float firstRestTime_, float secondRestTime_, float nextRestTime_) :
		Vehicles(name_, speed_)
	{
		set_driving_time(drivingTime_);
		set_first_rest_time(firstRestTime_);
		set_second_rest_time(secondRestTime_);
		set_next_rest_time(nextRestTime_);
		set_transport_type(TransportType::GROUND);
	};
}