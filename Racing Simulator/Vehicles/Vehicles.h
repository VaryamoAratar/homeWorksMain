#pragma once
#include<iostream>
#include<string>

#ifndef FVEHICLES_EXPORT
#define VEHICLES_EXPORT_API __declspec(dllexport)
#elif
#define VEHICLES_EXPORT_API __declspec(dllimport)
#endif // !FVEHICLES_EXPORT


class Vehicles
{
protected:
	std::string name{ "Неизвестный транспорт" };
	float speed{ 0 };
	Vehicles(std::string name_, float speed_); 

public:
	VEHICLES_EXPORT_API std::string get_name();// получить название
	VEHICLES_EXPORT_API float get_speed(); // получить скорость

};

