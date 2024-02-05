#include "GroundVehicles.h"

namespace race
{
	GroundVehicles::GroundVehicles(
		std::string name_,
		float speed_,
		float drivingTime_,
		float firstRestTime_,
		float secondRestTime_,
		float nextRestTime_) :
		Vehicles(name_, speed_)
	{
		drivingTime = drivingTime_;
		firstRestTime = firstRestTime_;
		secondRestTime = secondRestTime_;
		nextRestTime = nextRestTime_;
		set_transportType("Ground");
	};
}