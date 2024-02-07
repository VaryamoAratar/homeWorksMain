#include "Race_compil.h"

namespace race
{
	Race_compil::Race_compil(Vehicles* vehicles, int distance)
	{
		if (vehicles->get_transport_type() == race::TransportType::AIR)
		{
			set_race_time_air(vehicles, distance);
		}
		else
		{
			set_race_time_ground(vehicles, distance);
		}
	};

	float Race_compil::get_race_time() { return raceTime; };//получить время гонки

	void Race_compil::set_race_time_air(Vehicles* vehicles, int distance) //Время гонки
	{
		//время за вычетом коэфф. сокращения дистанции
		raceTime = (distance / vehicles->get_speed()) * ((100 - vehicles->get_drf(distance)) / 100);
	};

	void Race_compil::set_race_time_ground(Vehicles* vehicles, int distance) 
	{ 
		float raceTimeFull = distance / vehicles->get_speed(); //общее время гонки
		double numberOfRestVr = raceTimeFull / vehicles->get_drivingTime(); //число перерывов Double
		int numberOfRest;//число перерывов Int
		if (numberOfRestVr == 1.0) //Если число перерывов на отдых целое и равно 1, то значит отдых не нужен
		{
			numberOfRest = 0;
		}
		else
		{
			numberOfRest = numberOfRestVr;
		}
		raceTime = raceTimeFull;
		//добавляем время отдыха ко времени гонки
		while (numberOfRest)
		{
			if (numberOfRest == static_cast<int>(race::Rest::FIRSTREST))//первый раз
			{
				raceTime = raceTime + vehicles->get_firstRestTime();
			}
			else if (numberOfRest == static_cast<int>(race::Rest::SECONDREST))//второй раз
			{
				raceTime = raceTime + vehicles->get_secondRestTime();
			}
			else//остальные разы
			{
				raceTime = raceTime + (vehicles->get_nextRestTime()*(numberOfRest-2));
				numberOfRest -= (numberOfRest - 3);
			}
			numberOfRest--;
		}
	};

}