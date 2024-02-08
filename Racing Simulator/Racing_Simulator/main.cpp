#include "main.h"


using namespace race;

int main()
{
	setlocale(LC_ALL, "russian");

	RaceType raceType;
	RunRace runRace;
	FinRace finRace;
	Transport transport;
	int distance;
	int countTranspotr;
	Race_compil** race_compil;

	//������
	do
	{
		//����������� � ����� ���� �����
		printStart(raceType);
		//���� ����� ���������
		enteringDistance(distance);
		//����� ������
		setTransportFlag();
		countTranspotr = 0;
		//����� ����������� ��� �����
		do
		{
			if (countTranspotr == 0) { printRun(runRace, countTranspotr); };
			//����������� ��
			do
			{
				regTransport(transport, raceType, distance, countTranspotr);
			} while (!(transport == Transport::ENDREGISTRATION));

			if (countTranspotr > 0) { printRun(runRace, countTranspotr); };

		} while (!(runRace == RunRace::STARTRACE));
		//������� ������ ���������� ��� ���������� � ������ ����������
		Race_compil** race_compil = new Race_compil * [countTranspotr + 1];
		//��������� ������ � ����������� �� ������������������ ��
		if (countTranspotr != 0)
		{
			for (int i = 0; i < countTranspotr;)
			{
				AirVehicles tmp;
				Vehicles* vehicles = &tmp;
				race_compil[countTranspotr] = new Race_compil(vehicles, distance);

				if (roverBootsFlag)
				{
					RoverBoots roverBoots;
					Vehicles* vehicles = &roverBoots;
					race_compil[i] = new Race_compil(vehicles, distance);
					i++;
				}
				if (camelFlag)
				{
					Camel camel;
					Vehicles* vehicles = &camel;
					race_compil[i] = new Race_compil(vehicles, distance);
					i++;
				}
				if (swiftCamelFlag)
				{
					SwiftCamel swiftCamel;
					Vehicles* vehicles = &swiftCamel;
					race_compil[i] = new Race_compil(vehicles, distance);
					i++;
				}
				if (eagleFlag)
				{
					Eagle eagle;
					Vehicles* vehicles = &eagle;
					race_compil[i] = new Race_compil(vehicles, distance);
					i++;
				}
				if (centaurFlag)
				{
					Centaur centaur;
					Vehicles* vehicles = &centaur;
					race_compil[i] = new Race_compil(vehicles, distance);
					i++;
				}
				if (magicCarpetFlag)
				{
					MagicCarpet magicCarpet;
					Vehicles* vehicles = &magicCarpet;
					race_compil[i] = new Race_compil(vehicles, distance);
					i++;
				}
				if (broomstickFlag)
				{
					Broomstick broomstick;
					Vehicles* vehicles = &broomstick;
					race_compil[i] = new Race_compil(vehicles, distance);
					i++;
				}
			}
			//����� ����������� �����
			printResult(race_compil, countTranspotr);
		}
		//����� �������� ����� ���������� �����������
		printFin(finRace);
		//������� ������	
		clearMemory(race_compil, countTranspotr);

	} while (finRace != FinRace::EXIT);


 	return 0;
}