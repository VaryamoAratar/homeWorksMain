#pragma once
#include<iostream>
#include<string>

#ifndef FVEHICLES_EXPORT
#define VEHICLES_EXPORT_API __declspec(dllexport)
#elif
#define VEHICLES_EXPORT_API __declspec(dllimport)
#endif // !FVEHICLES_EXPORT

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
		std::string name{ "����������� ���������" };
		float speed{ 0 };
		Vehicles(std::string name_, float speed_);
		void set_transportType(const char*); // ���������� ��� ����������
		void set_drf(float drf_);//���������� ����������� ���������� ����������;

	public:
		VEHICLES_EXPORT_API std::string get_name();// �������� ��������
		VEHICLES_EXPORT_API float get_speed(); // �������� ��������
		VEHICLES_EXPORT_API const char* get_transportType(); // �������� ��� ����������
		VEHICLES_EXPORT_API float get_drivingTime(); // �������� ����� �� ������
		VEHICLES_EXPORT_API float get_firstRestTime(); // �������� ����� ������ � ������ ���
		VEHICLES_EXPORT_API float get_secondRestTime(); // �������� ����� ������ �� ������ ���
		VEHICLES_EXPORT_API float get_nextRestTime(); // �������� ����� ������ � ��������� ����
		VEHICLES_EXPORT_API float get_drf();//�������� ����������� ���������� ����������
		
	};
}
