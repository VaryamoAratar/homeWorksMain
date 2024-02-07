#include "Vehicles.h"

namespace race
{
	Vehicles::Vehicles(std::string name_, float speed_)
	{
		name = name_;
		speed = speed_;
	};

	void Vehicles::set_transport_type(const TransportType in) { transportType = in; }
	void Vehicles::set_driving_time(float drivingTime_) { drivingTime = drivingTime_; }
	void Vehicles::set_first_rest_time(float firstRestTime_) { firstRestTime = firstRestTime_; }
	void Vehicles::set_second_rest_time(float secondRestTime_) { secondRestTime = secondRestTime_; }
	void Vehicles::set_next_rest_time(float nextRestTime_) { nextRestTime = nextRestTime_; };

	std::string Vehicles::get_name() { return name; };//�������� ����������
	float Vehicles::get_speed() { return speed; };//��������
	TransportType Vehicles::get_transport_type() { return transportType; };//��� ���������� �������� ��� ���������
	float Vehicles::get_drivingTime() { return drivingTime; }; //����� �� ������
	float Vehicles::get_firstRestTime() { return firstRestTime; }; //����� ������ ������ ���
	float Vehicles::get_secondRestTime() { return secondRestTime; };//����� ������ ������ ���
	float Vehicles::get_nextRestTime() { return nextRestTime; };//����� ������ ��������� ����
	float Vehicles::get_drf(int distance) { return drf; }//���. ���������� ���������

}