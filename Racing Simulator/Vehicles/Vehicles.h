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
	enum class TransportType
	{
		AIR = 1,
		GROUND
	};

	class Vehicles
	{
	private:
		TransportType transportType;
		float drivingTime;
		float firstRestTime;
		float secondRestTime;
		float nextRestTime;
		float drf;

	protected:
		std::string name{ "Неизвестный транспорт" };
		float speed;
		Vehicles(std::string name_, float speed_);
		void set_transport_type(const TransportType in);
		void set_driving_time(float drivingTime_);
		void set_first_rest_time(float firstRestTime_);
		void set_second_rest_time(float secondRestTime_);
		void set_next_rest_time(float nextRestTime_);

	public:
		VEHICLES_API std::string get_name();// получить название
		VEHICLES_API float get_speed(); // получить скорость
		VEHICLES_API TransportType get_transport_type(); // получить тип транспорта
		VEHICLES_API float get_drivingTime(); // получить время до отдыха
		VEHICLES_API float get_firstRestTime(); // получить время отдыха в первый раз
		VEHICLES_API float get_secondRestTime(); // получить время отдыха во второй раз
		VEHICLES_API float get_nextRestTime(); // получить время отдыха в остальные разы
		VEHICLES_API virtual float get_drf(int distance);// получить коэффициент сокращения расстояния

	};
}
