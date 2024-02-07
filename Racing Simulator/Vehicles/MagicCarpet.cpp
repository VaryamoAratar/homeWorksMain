#include "MagicCarpet.h"

namespace race
{
	MagicCarpet::MagicCarpet() : MagicCarpet("Ковер-самолет", 10)
	{
		set_transportType("Air");
	};
	
	MagicCarpet::MagicCarpet(std::string name_, float speed_) : AirVehicles(name_, speed_) {};
	void det_drf(float distance)
	{
		if (distance <= 1000) { race::Vehicles::set_drf(0); }
		else if (1000 < distance && distance <= 5000) { set_drf(3); }
		else if (5000 < distance && distance <= 10000) { set_drf(10); }
		else { ; }
	};
}