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

	//начало
	do
	{
		//Приветствие и выбор типа гонки
		printStart(raceType);
		//Ввод длины дистанции
		enteringDistance(distance);
		//Сброс флагов
		setTransportFlag();
		countTranspotr = 0;
		//выбор регистрация или гонка
		do
		{
			if (countTranspotr == 0) { printRun(runRace, countTranspotr); };
			//регистрация ТС
			do
			{
				regTransport(transport, raceType, distance, countTranspotr);
			} while (!(transport == Transport::ENDREGISTRATION));

			if (countTranspotr > 0) { printRun(runRace, countTranspotr); };

		} while (!(runRace == RunRace::STARTRACE));
		//Создаем массив указателей для сортировки и вывода результата
		Race_compil** race_compil = new Race_compil * [countTranspotr + 1];
		//Заполняем массив в зависимости от зарегистрированных ТС
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
			//Вывод результатов гонки
			printResult(race_compil, countTranspotr);
		}
		//Выбор действий после объявления результатов
		printFin(finRace);
		//Очистка памяти	
		clearMemory(race_compil, countTranspotr);

	} while (finRace != FinRace::EXIT);


 	return 0;
}