#include"Broomstick.h"
#include"Vehicles.h"
#include"Eagle.h"
#include"MagicCarpet.h"

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

using namespace race;

int main()
{
	setlocale(LC_ALL, "russian");

	int distance{ 13580 };
	Broomstick broomstick(distance);
	Eagle eagle(distance);
	MagicCarpet magicCarpet(distance);

	Vehicles* p = &broomstick;
	std::cout << p->get_name() << ' ' << p->get_speed() << std::endl;
	std::cout << p->get_drf() << '%' << std::endl;

	p = &eagle;
	std::cout << p->get_name() << ' ' << p->get_speed() << std::endl;
	std::cout << p->get_drf() << '%' << std::endl;

	p = &magicCarpet;
	std::cout << p->get_name() << ' ' << p->get_speed() << std::endl;
	std::cout << p->get_drf() << '%' << std::endl;

	return 0;
}