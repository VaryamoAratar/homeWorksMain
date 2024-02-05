#include "MagicCarpet.h"

MagicCarpet::MagicCarpet(int distance) : MagicCarpet("�����-�������", 10)
{
	if (distance <= 1000)
	{
		drf = 0;
	}
	else if (1000 < distance && distance <= 5000)
	{
		drf = 3;
	}
	else if (5000 < distance && distance <= 10000)
	{
		drf = 10;
	}
	else
	{
		drf = 5;
	}
};

MagicCarpet::MagicCarpet(std::string name_, float speed_) : AirVehicles(name_, speed_) {};