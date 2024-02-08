#include "Function.h"

namespace race
{
	//Приветствие и выбор типа гонки
	void printStart(RaceType& raceType)
	{
		do
		{
			system("CLS");

			std::cout << "Добро пожаловать в гоночный симулятор!\n 1. Гонка для воздушного транспорта\n 2. Гонка для наземного транспорта\n 3. Гонка для наземного и воздушного транспорта\n Выберите тип гонки (1, 2 или 3): ";
			int in;
			std::cin >> in;
			raceType = static_cast<RaceType>(in);

		} while (raceType < RaceType::AIR || raceType > RaceType::OTHER);
	}
	//Выбор действия после объявления результатов
	void printFin(FinRace& finRace)
	{
		do
		{
			std::cout << "\n1. Провести ещё одну гонку\n2. Выйти\n Выберите действие : ";
			int in;
			std::cin >> in;
			finRace = static_cast<FinRace>(in);

			system("CLS");

		} while (finRace < FinRace::RESTART || finRace > FinRace::EXIT);
	}
	//Выбор действия перед гонкой
	void printRun(RunRace& runRace, int& countTranspotr)
	{
		if (countTranspotr < 2)
		{
			do
			{
				system("CLS");

				std::cout << "Должно быть зарегистрировано хотя бы 2 транспротных средства" << std::endl;
				std::cout << "Зарегистрировано транспортных средств: " << countTranspotr << std::endl;
				std::cout << "1. Зарегистрировать транспорт\n Выберите действие : ";
				int in;
				std::cin >> in;
				runRace = static_cast<RunRace>(in);

			} while (runRace != RunRace::REGTRANSPORT);
		}
		else
		{
			do
			{
				system("CLS");

				std::cout << "Зарегистрировано транспортных средств: " << countTranspotr << std::endl;
				std::cout << "1. Зарегистрировать транспорт\n2. Начать гонку\nВыберите действие: ";
				int in;
				std::cin >> in;
				runRace = static_cast<RunRace>(in);

			} while (runRace < RunRace::REGTRANSPORT || runRace > RunRace::STARTRACE);
		}
	}
	//Назначение расстояния
	int enteringDistance(int& distance)
	{
		std::cout << "Укажите длину дистанции (Должна быть положительная): ";
		std::cin >> distance;
		return distance;
	}
	//Сброс флагов
	void setTransportFlag()
	{
		roverBootsFlag = false;
		camelFlag = false;
		swiftCamelFlag = false;
		eagleFlag = false;
		centaurFlag = false;
		magicCarpetFlag = false;
		broomstickFlag = false;

	}
	//Заполнения данных ТС
	void initCase(Transport& transport, std::string in, RaceType& raceType, int& countTranspotr, static std::string& reg, bool flag)
	{
		if (!(raceType == RaceType::OTHER))
		{
			if (transport == Transport::CAMEL ||
				transport == Transport::ROVERBOOTS ||
				transport == Transport::CENTAUR ||
				transport == Transport::SWIFTCAMEL)
			{
				if (raceType == RaceType::AIR) { std::cout << "Вы пытаетесь зарегистрировать неподходящий тип транспорта!\n"; }
				else if (flag) { std::cout << in << " уже зарегистрирован!\n"; }
				else
				{
					std::cout << in << " зарегистрирован!\n";
					if (countTranspotr == 0) { reg += ' '; }
					else { reg += ", "; }
					countTranspotr++;
					reg += in;
				}
			}
			else if (transport == Transport::EAGLE ||
				transport == Transport::MAGICCARPET ||
				transport == Transport::BROOMSTICK)
			{
				if (raceType == RaceType::GROUND) { std::cout << "Вы пытаетесь зарегистрировать неподходящий тип транспорта!\n"; }
				else if (flag) { std::cout << in << " уже зарегистрирован!\n"; }
				else
				{
					std::cout << in << " зарегистрирован!\n";
					if (countTranspotr == 0) { reg += ' '; }
					else { reg += ", "; }
					countTranspotr++;
					reg += in;
				}
			}
		}
		else
		{
			if (flag) { std::cout << in << " уже зарегистрирован!\n"; }
			else
			{
				std::cout << in << " зарегистрирован!\n";
				if (countTranspotr == 0) { reg += ' '; }
				else { reg += ", "; }
				countTranspotr++;
				reg += in;
			}
		}
	}
	//Регистрация транспорта
	void regTransport(Transport& transport, RaceType raceType, const int& distance, int& countTranspotr)
	{
		static std::string reg;
		if (countTranspotr == 0) { reg = "Зарегистрированные транспортные средства: "; }

		system("CLS");
		//Выбор и инициализация ТС 
		switch (transport)
		{
		case Transport::ROVERBOOTS:
		{
			initCase(transport, "Ботинки-вездеходы", raceType, countTranspotr, reg, roverBootsFlag);
			roverBootsFlag = true;
		}
		break;
		case Transport::CAMEL:
		{
			initCase(transport, "Верблюд", raceType, countTranspotr, reg, camelFlag);
			camelFlag = true;
		}
		break;
		case Transport::CENTAUR:
		{
			initCase(transport, "Кентавр", raceType, countTranspotr, reg, centaurFlag);
			centaurFlag = true;
		}
		break;
		case Transport::SWIFTCAMEL:
		{
			initCase(transport, "Верблюд-скороход", raceType, countTranspotr, reg, swiftCamelFlag);
			swiftCamelFlag = true;
		}
		break;
		case Transport::BROOMSTICK:
		{
			initCase(transport, "Метла", raceType, countTranspotr, reg, broomstickFlag);
			broomstickFlag = true;
		}
		break;
		case Transport::EAGLE:
		{
			initCase(transport, "Орёл", raceType, countTranspotr, reg, eagleFlag);
			eagleFlag = true;
		}
		break;
		case Transport::MAGICCARPET:
		{
			initCase(transport, "Ковер-самолёт", raceType, countTranspotr, reg, magicCarpetFlag);
			magicCarpetFlag = true;
		}
		break;

		default:
			break;
		}
		//Вывод типа гонки
		switch (raceType)
		{
		case RaceType::AIR: std::cout << "Гонка для воздушного транспорта. ";
			break;
		case RaceType::GROUND:std::cout << "Гонка для наземного транспорта. ";
			break;
		case RaceType::OTHER:std::cout << "Гонка для наземного и воздушного транспорта. ";
			break;

		default:
			break;
		}
		//Вывод расстояния
		std::cout << "Расстояние: " << distance << std::endl;
		if (countTranspotr > 0) { std::cout << reg << std::endl; }
		//Вывод меню выбора ТС
		std::cout << "1. Ботинки-везеходы\n2. Метла\n3. Верблюд\n4. Кентавр\n5. Орёл\n6. Верблюд-скороход\n7. Ковер-самолёт\n0. Закончить регистрацию\nВыберите транспорт или 0 для завершения регистрации: ";
		int in;
		std::cin >> in;
		//запись выбора пользователя
		transport = static_cast<Transport>(in);
	}
	//Сортировка пузырьком и вывод результатов гонки
	void printResult(Race_compil** race_compil_, int& nSize)
	{
		system("CLS");
		//сортировка наименьшее время -> вперед
		for (int i = 0; i < nSize; i++) {
			for (int j = 0; j < nSize - 1 - i; j++) {

				if (race_compil_[j]->get_race_time() > race_compil_[j + 1]->get_race_time())
				{
					*race_compil_[nSize] = *race_compil_[j];
					*race_compil_[j] = *race_compil_[j + 1];
					*race_compil_[j + 1] = *race_compil_[nSize];
				}
			}
		}
		//Вывод результатов имя ТС + время
		std::cout << "Результаты гонки" << std::endl;
		for (int i = 0; i < nSize; i++)
		{
			std::cout << race_compil_[i]->get_name() << ". Время: " << race_compil_[i]->get_race_time() << std::endl;
		}
	}
	//Очистка выделенной памяти
	void clearMemory(Race_compil** race_compil, int& nSize)
	{
		//удаляем члены массива указателей
		for (int i = 0; i < nSize; i++)
		{
			delete race_compil[i];
		}
		//удаляем массив указателей
		delete[] race_compil;
	}
}