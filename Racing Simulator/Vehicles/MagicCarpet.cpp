#include "MagicCarpet.h"

namespace race
{
	MagicCarpet::MagicCarpet() : MagicCarpet("Ковер-самолет", 10) {};
	
	MagicCarpet::MagicCarpet(std::string name_, float speed_) : AirVehicles(name_, speed_) {};

	float MagicCarpet::get_drf(int distance)
	{
		if (distance <= 1000) { return 0; }
		else if (1000 < distance && distance <= 5000) { return 3; }
		else if (5000 < distance && distance <= 10000) { return 10; }
		else { return 5; }
	};
	
}