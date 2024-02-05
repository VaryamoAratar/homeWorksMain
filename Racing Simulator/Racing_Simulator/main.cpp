#include"Broomstick.h"
#include"Vehicles.h"
#include"Eagle.h"
#include"MagicCarpet.h"

int main()
{
	setlocale(LC_ALL, "russian");

	int distance{ 13580 };
	Broomstick broomstick(distance);
	Eagle eagle(distance);
	MagicCarpet magicCarpet(distance);

	std::cout << broomstick.get_name() << ' ' << broomstick.get_speed() << std::endl;
	std::cout << broomstick.get_drf() << '%' << std::endl;
	std::cout << eagle.get_name() << ' ' << eagle.get_speed() << std::endl;
	std::cout << eagle.get_drf() << '%' << std::endl;
	std::cout << magicCarpet.get_name() << ' ' << magicCarpet.get_speed() << std::endl;
	std::cout << magicCarpet.get_drf() << '%' << std::endl;

	return 0;
}