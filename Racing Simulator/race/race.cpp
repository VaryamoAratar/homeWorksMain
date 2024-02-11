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

	float RunRace::GetRaceTime() { return race_time_; };//получить время гонки

	void RunRace::SetRaceTimeAir(Vehicles* vehicles, int distance) //Время гонки
	{
		//время за вычетом коэфф. сокращения дистанции
		race_time_ = (distance / vehicles->GetSpeed()) * ((100 - vehicles->GetDrf(distance)) / 100);
	};

	void RunRace::setRaceTimeGround(Vehicles* vehicles, int distance)
	{ 
		float race_time_full_ = distance / vehicles->GetSpeed(); //общее время гонки
		float number_of_rest_vr_ = race_time_full_ / vehicles->GetDrivingTime(); //число перерывов Double
		int number_of_rest_;//число перерывов Int
		if (number_of_rest_vr_ == 1.0) //Если число перерывов на отдых целое и равно 1, то значит отдых не нужен
		{
			number_of_rest_ = 0;
		}
		else
		{
			number_of_rest_ = number_of_rest_vr_;
		}
		race_time_ = race_time_full_;
		//добавляем время отдыха ко времени гонки
		while (number_of_rest_)
		{
			if (number_of_rest_ == static_cast<int>(racing_simulator::Rest::kFirstRest))//первый раз
			{
				race_time_ = race_time_ + vehicles->GetFirstRestTime();
			}
			else if (number_of_rest_ == static_cast<int>(racing_simulator::Rest::kSecondRest))//второй раз
			{
				race_time_ = race_time_ + vehicles->GetSecondRestTime();
			}
			else//остальные разы
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