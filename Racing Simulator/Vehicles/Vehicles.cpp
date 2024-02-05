#include "Vehicles.h"

namespace race
{
	Vehicles::Vehicles(std::string name_, float speed_)
	{
		name = name_;
		speed = speed_;
	};

	std::string Vehicles::get_name() { return name; };
	float Vehicles::get_speed() { return speed; };
	void Vehicles::set_transportType(const char* transportType_)
	{
		transportType = transportType_;
	};
	const char* Vehicles::get_transportType() { return transportType; };
	float Vehicles::get_drivingTime()
	{
		return drivingTime;
	};
	float Vehicles::get_firstRestTime()
	{
		return firstRestTime;
	};
	float Vehicles::get_secondRestTime()
	{
		return secondRestTime;
	};
	float Vehicles::get_nextRestTime()
	{
		return nextRestTime;
	};
	float Vehicles::get_drf() { return drf; };
	void Vehicles::set_drf(float drf_) { drf = drf_; };


}