#include "Vehicles.h"

Vehicles::Vehicles(std::string name_, float speed_)
{
	name = name_;
	speed = speed_;
};

std::string Vehicles::get_name() { return name; };
float Vehicles::get_speed() { return speed; };
