#include "race.h"

namespace racing_simulator
{
	RunRace::RunRace(Vehicles* vehicles, int distance)
	{
		if (vehicles->GetTransportType() == racing_simulator::TransportType::kAir)
		{
			SetRaceTimeAir(vehicles, distance);

		}
		else
		{
			setRaceTimeGround(vehicles, distance);
		}
		name_ = vehicles->GetName();
	};

	float RunRace::GetRaceTime() { return race_time_; };//�������� ����� �����

	void RunRace::SetRaceTimeAir(Vehicles* vehicles, int distance) //����� �����
	{
		//����� �� ������� �����. ���������� ���������
		race_time_ = (distance / vehicles->GetSpeed()) * ((100 - vehicles->GetDrf(distance)) / 100);
	};

	void RunRace::setRaceTimeGround(Vehicles* vehicles, int distance)
	{ 
		float race_time_full_ = distance / vehicles->GetSpeed(); //����� ����� �����
		float number_of_rest_vr_ = race_time_full_ / vehicles->GetDrivingTime(); //����� ��������� Double
		int number_of_rest_;//����� ��������� Int
		if (number_of_rest_vr_ == 1.0) //���� ����� ��������� �� ����� ����� � ����� 1, �� ������ ����� �� �����
		{
			number_of_rest_ = 0;
		}
		else
		{
			number_of_rest_ = number_of_rest_vr_;
		}
		race_time_ = race_time_full_;
		//��������� ����� ������ �� ������� �����
		while (number_of_rest_)
		{
			if (number_of_rest_ == static_cast<int>(racing_simulator::Rest::kFirstRest))//������ ���
			{
				race_time_ = race_time_ + vehicles->GetFirstRestTime();
			}
			else if (number_of_rest_ == static_cast<int>(racing_simulator::Rest::kSecondRest))//������ ���
			{
				race_time_ = race_time_ + vehicles->GetSecondRestTime();
			}
			else//��������� ����
			{
				race_time_ = race_time_ + (vehicles->GetNextRestTime()*(number_of_rest_-2));
				number_of_rest_ -= (number_of_rest_ - 3);
			}
			number_of_rest_--;
		}
	};

	std::string RunRace::GetName()
	{
		return name_;
	}

}