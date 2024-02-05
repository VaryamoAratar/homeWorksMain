#include "Centaur.h"

Centaur::Centaur() : Centaur("Кентавр", 15, 8, 2)
{};
Centaur::Centaur(
	std::string name_,
	short speed_,
	short drivingTime_,
	short nextRestTime_) :
	GroundVehicles(name_, speed_, drivingTime_, nextRestTime_, nextRestTime_, nextRestTime_)
{};

