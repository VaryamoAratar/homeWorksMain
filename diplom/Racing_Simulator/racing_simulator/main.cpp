#include "main.h"

using namespace racing_simulator;

int main()
{
	setlocale(LC_ALL, "rus");
	int count_transpotr;
	TypeRace type_race;
	StartRace start_race;
	FinRace fin_race;
	Transport transport;

	do
	{
		//Начало, определяем тип гонки
		type_race = Start();
		//Получаем длину дистанции
		int distance = EnteringDistance();
		//Обнуляем счетчик и флаги
		count_transpotr = 0;
		transport = Transport::kClearTransportFlag;
		DefineFlag(transport, 0);
		//Регистрируем транспорт
		do
		{
			if (count_transpotr == 0) start_race = BeforeRace(count_transpotr);

			do
			{
				RegTransport(transport, type_race, distance, count_transpotr);
			} while (transport != Transport::kEndRegisration);

			if (count_transpotr != 0) start_race = BeforeRace(count_transpotr);

		} while (start_race == StartRace::kRegTranport);
		//Создаем массив гонки
		RunRace** run_race = new RunRace * [count_transpotr + 1];
		//Заполняем массив зарегистрированным транспортом
		FillingArray(run_race, count_transpotr, distance);
		//Сортируем результаты гонки
		SortResult(run_race, count_transpotr);
		//Выводим результаты в консоль
		PrintResult(run_race, count_transpotr);
		//Спрашиваем: на выход или продолжим?
		fin_race = AfterRace();
		//Чистим память
		CleanMemory(run_race, count_transpotr);
	} while (fin_race == FinRace::kRestart);


	return 0;
}