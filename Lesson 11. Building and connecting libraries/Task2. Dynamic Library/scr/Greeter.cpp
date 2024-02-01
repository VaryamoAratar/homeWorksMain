#include"Greeter.h"

Greeter::Greeter()
{};
void Greeter::greet(std::string& in)
{
	std::cout << "Здравствуйте, " << in << '!' << std::endl;
}