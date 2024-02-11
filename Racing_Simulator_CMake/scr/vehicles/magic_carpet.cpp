#include "magic_carpet.h"

namespace racing_simulator
{
	MagicCarpet::MagicCarpet() : MagicCarpet("Ковер-самолет", 10) {};
	
	MagicCarpet::MagicCarpet(std::string name, float speed) : AirVehicles(name, speed) {};

	float MagicCarpet::GetDrf(int distance)
	{
		if (distance <= 1000) { return 0; }
		else if (1000 < distance && distance <= 5000) { return 3; }
		else if (5000 < distance && distance <= 10000) { return 10; }
		else { return 5; }
	};
	
}