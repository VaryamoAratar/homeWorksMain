#pragma once
#include<iostream>
#include<string>

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace race
{
	class Vehicles
	{
	private:
		const char* transportType;
		float drivingTime{ 0 };
		float firstRestTime{ 0 };
		float secondRestTime{ 0 };
		float nextRestTime{ 0 };
		float drf{ 0 };

	protected:
		std::string name{ "Неизвестный транспорт" };
		float speed{ 0 };
		Vehicles(std::string name_, float speed_);
		void set_transportType(const char*); // определить тип транспорта
		void set_drf(float drf_);//установить коэффициент сокращения расстояния;

	public:
		VEHICLES_API std::string get_name();// получить название
		VEHICLES_API float get_speed(); // получить скорость
		VEHICLES_API const char* get_transportType(); // получить тип транспорта
		VEHICLES_API float get_drivingTime(); // получить время до отдыха
		VEHICLES_API float get_firstRestTime(); // получить время отдыха в первый раз
		VEHICLES_API float get_secondRestTime(); // получить время отдыха во второй раз
		VEHICLES_API float get_nextRestTime(); // получить время отдыха в остальные разы
		VEHICLES_API float get_drf();//получить коэффициент сокращения расстояния
		
	};
}
