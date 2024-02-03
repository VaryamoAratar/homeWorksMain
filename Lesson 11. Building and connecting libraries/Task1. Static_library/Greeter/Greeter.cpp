#include "Greeter.h"

Greeter::Greeter()
{};

std::string Greeter::greet(std::string in)
{
	return "Здравствуйте, " + in + '!';
}