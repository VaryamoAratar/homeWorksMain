#include "vehicles.h"

namespace racing_simulator
{
	Vehicles::Vehicles(std::string name, float speed)
	{
		name_ = name;
		speed_ = speed;
		transport_type_ = TransportType::kAir;
	};

	void Vehicles::SetTransportType(const TransportType in) { transport_type_ = in; }
	void Vehicles::SetDrivingTime(float driving_time) { driving_time_ = driving_time; }
	void Vehicles::SetFirstRestTime(float first_rest_time) { first_rest_time_ = first_rest_time; }
	void Vehicles::SetSecondRestTime(float second_rest_time) { second_rest_time_ = second_rest_time; }
	void Vehicles::SetNextRestTime(float next_rest_time) { next_rest_time_ = next_rest_time; };

	std::string Vehicles::GetName() { return name_; };//�������� ����������
	float Vehicles::GetSpeed() { return speed_; };//��������
	TransportType Vehicles::GetTransportType() { return transport_type_; };//��� ���������� �������� ��� ���������
	float Vehicles::GetDrivingTime() { return driving_time_; }; //����� �� ������
	float Vehicles::GetFirstRestTime() { return first_rest_time_; }; //����� ������ ������ ���
	float Vehicles::GetSecondRestTime() { return second_rest_time_; };//����� ������ ������ ���
	float Vehicles::GetNextRestTime() { return next_rest_time_; };//����� ������ ��������� ����
	float Vehicles::GetDrf(int distance) { return drf_; }//���. ���������� ���������

}