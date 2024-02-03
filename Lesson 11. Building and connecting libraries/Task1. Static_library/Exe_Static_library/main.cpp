#include "Greeter.h"
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Greeter hello;
	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << hello.greet(name) << std::endl;

	return 0;
}