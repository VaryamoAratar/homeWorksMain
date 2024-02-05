#include "GroundVehicles.h"

GroundVehicles::GroundVehicles(
	std::string name_,
	float speed_,
	float drivingTime_,
	float firstRestTime_,
	float secondRestTime_,
	float nextRestTime_):
	Vehicles(name_, speed_)
{
	drivingTime = drivingTime_;
	firstRestTime = firstRestTime_;
	secondRestTime = secondRestTime_;
	nextRestTime = nextRestTime_;

};

float GroundVehicles::get_drivingTime()
{
	return drivingTime;
};
float GroundVehicles::get_firstRestTime()
{
	return firstRestTime;
};
float GroundVehicles::get_secondRestTime()
{
	return secondRestTime;
};
float GroundVehicles::get_nextRestTime()
{
	return nextRestTime;
};
