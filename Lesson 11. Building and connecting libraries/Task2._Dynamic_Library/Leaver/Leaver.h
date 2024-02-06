#pragma once
#include <iostream>
#include <string>
#ifdef DYNAMIC_LIBRARY_EXPORTS
#define MY_LIBRARY_DYNAMIC_API __declspec(dllexport)
#else
#define MY_LIBRARY_DYNAMIC_API __declspec(dllimport)
#endif

class Leaver
{
public:
	Leaver() = default;
	MY_LIBRARY_DYNAMIC_API std::string leave(std::string in);
};

