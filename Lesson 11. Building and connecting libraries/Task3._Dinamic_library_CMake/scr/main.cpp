#include "Leaver.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Leaver bye;
	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << bye.leave(name) << std::endl;

	return 0;
}