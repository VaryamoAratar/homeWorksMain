#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	std::string name;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << "������������, " << name << '!' << std::endl;

	return 0;
}