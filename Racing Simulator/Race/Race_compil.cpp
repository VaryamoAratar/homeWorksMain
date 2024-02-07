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

	float Race_compil::get_race_time() { return raceTime; };//�������� ����� �����

	void Race_compil::set_race_time_air(Vehicles* vehicles, int distance) //����� �����
	{
		//����� �� ������� �����. ���������� ���������
		raceTime = (distance / vehicles->get_speed()) * ((100 - vehicles->get_drf(distance)) / 100);
	};

	void Race_compil::set_race_time_ground(Vehicles* vehicles, int distance) 
	{ 
		float raceTimeFull = distance / vehicles->get_speed(); //����� ����� �����
		double numberOfRestVr = raceTimeFull / vehicles->get_drivingTime(); //����� ��������� Double
		int numberOfRest;//����� ��������� Int
		if (numberOfRestVr == 1.0) //���� ����� ��������� �� ����� ����� � ����� 1, �� ������ ����� �� �����
		{
			numberOfRest = 0;
		}
		else
		{
			numberOfRest = numberOfRestVr;
		}
		raceTime = raceTimeFull;
		//��������� ����� ������ �� ������� �����
		while (numberOfRest)
		{
			if (numberOfRest == static_cast<int>(race::Rest::FIRSTREST))//������ ���
			{
				raceTime = raceTime + vehicles->get_firstRestTime();
			}
			else if (numberOfRest == static_cast<int>(race::Rest::SECONDREST))//������ ���
			{
				raceTime = raceTime + vehicles->get_secondRestTime();
			}
			else//��������� ����
			{
				raceTime = raceTime + (vehicles->get_nextRestTime()*(numberOfRest-2));
				numberOfRest -= (numberOfRest - 3);
			}
			numberOfRest--;
		}
	};

}