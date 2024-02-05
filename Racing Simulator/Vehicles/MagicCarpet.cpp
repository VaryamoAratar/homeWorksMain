#include "MagicCarpet.h"

namespace race
{
	MagicCarpet::MagicCarpet(int distance) : MagicCarpet("Ковер-самолет", 10)
	{
		if (distance <= 1000) { set_drf(0); }
		else if (1000 < distance && distance <= 5000) { set_drf(3); }
		else if (5000 < distance && distance <= 10000) { set_drf(10); }
		else { set_drf(5); }
	};

	MagicCarpet::MagicCarpet(std::string name_, float speed_) : AirVehicles(name_, speed_) {};
}