#include"Greeter.h"
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Greeter hello;
	std::string name;

	std::cout << "¬ведите им€: ";
	std::cin >> name;
	hello.greet(name);
	system("pause");

	return 0;
}