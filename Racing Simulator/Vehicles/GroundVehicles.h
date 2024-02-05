#pragma once
#include "Vehicles.h"

#ifndef FGROUND_VEHICLES_EXPORT
#define GROUND_VEHICLES_EXPORT_API __declspec(dllexport)
#elif
#define GROUND_VEHICLES_EXPORT_API __declspec(dllimport)
#endif // !FGROUND_VEHICLES_EXPORT

class GroundVehicles :
    public Vehicles
{
protected:
    float drivingTime{ 0 };
    float firstRestTime{ 0 };
    float secondRestTime{ 0 };
    float nextRestTime{ 0 };
    GroundVehicles(std::string name_, float speed_, float drivingTime_, float firstRestTime_, float secondRestTime_, float nextRestTime_);

public:

    GROUND_VEHICLES_EXPORT_API float get_drivingTime(); // �������� ����� �� ������
    GROUND_VEHICLES_EXPORT_API float get_firstRestTime(); // �������� ����� ������ � ������ ���
    GROUND_VEHICLES_EXPORT_API float get_secondRestTime(); // �������� ����� ������ �� ������ ���
    GROUND_VEHICLES_EXPORT_API float get_nextRestTime(); // �������� ����� ������ � ��������� ����

};

