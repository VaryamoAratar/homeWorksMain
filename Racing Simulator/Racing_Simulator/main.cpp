#include "main.h"

namespace race
{
	enum class Transport
	{
		ROVERBOOTS = 1,
		BROOMSTICK,
		CAMEL,
		CENTAUR,
		EAGLE,
		SWIFTCAMEL,
		MAGICCARPET,
		EXIT = 0
	};
}

using namespace race;

int main()
{
	setlocale(LC_ALL, "russian");

	int distance{ 0 };
	std::cout << "¬ведите длину гонки: ";
	std::cin >> distance;
	Broomstick broomstick;
	Eagle eagle;
	MagicCarpet magicCarpet;
	Camel camel;
	Centaur centaur;
	RoverBoots roverBoots;
	SwiftCamel swiftCamel;

	Vehicles* p = &broomstick;
	Race_compil f1(p, distance);
	std::cout << "\nName: \t\t" << p->get_name() << '\n' << "Speed: \t\t" << p->get_speed() << "km/h" << std::endl;
	std::cout << "Distance: \t" << distance << "km\n" << "Time race: \t" << f1.get_race_time() << 'h' << '\n' << std::endl;


	p = &eagle;
	Race_compil f2(p, distance);
	std::cout << "Name: \t\t" << p->get_name() << '\n' << "Speed: \t\t" << p->get_speed() << "km/h" << std::endl;
	std::cout << "Distance: \t" << distance << "km\n" << "Time race: \t" << f2.get_race_time() << 'h' << '\n' << std::endl;

	p = &magicCarpet;
	Race_compil f3(p, distance);
	std::cout << "Name: \t\t" << p->get_name() << '\n' << "Speed: \t\t" << p->get_speed() << "km/h" << std::endl;
	std::cout << "Distance: \t" << distance << "km\n" << "Time race: \t" << f3.get_race_time() << 'h' << '\n' << std::endl;

	p = &camel;
	Race_compil f4(p, distance);
	std::cout << "Name: \t\t" << p->get_name() << '\n' << "Speed: \t\t" << p->get_speed() << "km/h" << std::endl;
	std::cout << "Distance: \t" << distance << "km\n" << "Time race: \t" << f4.get_race_time() << 'h' << '\n' << std::endl;

	p = &centaur;
	Race_compil f5(p, distance);
	std::cout << "Name: \t\t" << p->get_name() << '\n' << "Speed: \t\t" << p->get_speed() << "km/h" << std::endl;
	std::cout << "Distance: \t" << distance << "km\n" << "Time race: \t" << f5.get_race_time() << 'h' << '\n' << std::endl;

	p = &roverBoots;
	Race_compil f6(p, distance);
	std::cout << "Name: \t\t" << p->get_name() << '\n' << "Speed: \t\t" << p->get_speed() << "km/h" << std::endl;
	std::cout << "Distance: \t" << distance << "km\n" << "Time race: \t" << f6.get_race_time() << 'h' << '\n' << std::endl;

	p = &swiftCamel;
	Race_compil f7(p, distance);
	std::cout << "Name: \t\t" << p->get_name() << '\n' << "Speed: \t\t" << p->get_speed() << "km/h" << std::endl;
	std::cout << "Distance: \t" << distance << "km\n" << "Time race: \t" << f7.get_race_time() << 'h' << '\n' << std::endl;

	return 0;
}