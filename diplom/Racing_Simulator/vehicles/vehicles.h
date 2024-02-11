#pragma once
#include<iostream>
#include<string>

#ifdef VEHICLES_EXPORTS
#define VEHICLES_API __declspec(dllexport)
#else
#define VEHICLES_API __declspec(dllimport)
#endif // !VEHICLES_EXPORTS

namespace racing_simulator
{
	enum class TransportType
	{
		kAir = 1,
		kGround
	};

	class Vehicles
	{
	private:
		TransportType transport_type_;
		float driving_time_;
		float first_rest_time_;
		float second_rest_time_;
		float next_rest_time_;
		float drf_ = 0;

	protected:
		std::string name_;
		float speed_;
		Vehicles(std::string name_, float speed_);
		void SetTransportType(const TransportType in);
		void SetDrivingTime(float driving_time);
		void SetFirstRestTime(float first_rest_time);
		void SetSecondRestTime(float second_rest_time);
		void SetNextRestTime(float next_rest_time);

	public:
		VEHICLES_API std::string GetName();// получить название
		VEHICLES_API float GetSpeed(); // получить скорость
		VEHICLES_API TransportType GetTransportType(); // получить тип транспорта
		VEHICLES_API float GetDrivingTime(); // получить время до отдыха
		VEHICLES_API float GetFirstRestTime(); // получить время отдыха в первый раз
		VEHICLES_API float GetSecondRestTime(); // получить время отдыха во второй раз
		VEHICLES_API float GetNextRestTime(); // получить время отдыха в остальные разы
		VEHICLES_API virtual float GetDrf(int distance);// получить коэффициент сокращения расстояния
	};
}
