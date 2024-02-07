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
		std::string name{ "����������� ���������" };
		float speed;
		Vehicles(std::string name_, float speed_);
		void set_transport_type(const TransportType in);
		void set_driving_time(float drivingTime_);
		void set_first_rest_time(float firstRestTime_);
		void set_second_rest_time(float secondRestTime_);
		void set_next_rest_time(float nextRestTime_);

	public:
		VEHICLES_API std::string get_name();// �������� ��������
		VEHICLES_API float get_speed(); // �������� ��������
		VEHICLES_API TransportType get_transport_type(); // �������� ��� ����������
		VEHICLES_API float get_drivingTime(); // �������� ����� �� ������
		VEHICLES_API float get_firstRestTime(); // �������� ����� ������ � ������ ���
		VEHICLES_API float get_secondRestTime(); // �������� ����� ������ �� ������ ���
		VEHICLES_API float get_nextRestTime(); // �������� ����� ������ � ��������� ����
		VEHICLES_API virtual float get_drf(int distance);// �������� ����������� ���������� ����������

	};
}
