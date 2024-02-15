#include "race_function.h"


namespace racing_simulator
{
	//Приветствие и выбор типа гонки
	TypeRace Start()
	{
		TypeRace type_race;
		do
		{
			system("CLS");

			std::cout << "\
Добро пожаловать в гоночный симулятор!\n\
\n 1. Гонка для воздушного транспорта\
\n 2. Гонка для наземного транспорта\
\n 3. Гонка для наземного и воздушного транспорта\
\n Выберите тип гонки (1, 2 или 3): ";
			try
			{
				std::string strIn;
				int in;
				std::cin >> strIn;
				in = std::stoi(strIn);
				type_race = static_cast<TypeRace>(in);

			}
			catch (const std::exception& out)
			{
				std::cerr << out.what() << std::endl;
				type_race = TypeRace::kError;
				system("pause");

			}

		} while (type_race < TypeRace::kAir || type_race > TypeRace::kOther);
		return type_race;
	}
	//Выбор действия после объявления результатов
	FinRace AfterRace()
	{
		FinRace fin_race;
		do
		{
			std::cout << "\
\n1. Провести ещё одну гонку\
\n2. Выйти\n\
\nВыберите действие : ";
			try
			{
				std::string strIn;
				int in;
				std::cin >> strIn;
				in = std::stoi(strIn);
				fin_race = static_cast<FinRace>(in);
			}
			catch (const std::exception& out)
			{
				std::cerr << out.what() << std::endl;
				fin_race = FinRace::kError;
				system("pause");

			}
			system("CLS");

		} while (fin_race < FinRace::kRestart || fin_race > FinRace::kExit);
		return fin_race;
	}
	//Выбор действия перед гонкой принимает на вход количество зарегистрированных ТС
	StartRace BeforeRace(int& count_transpotr)
	{
		StartRace run_race;
		do
		{
			system("CLS");
			if (count_transpotr < 2)
			{
				std::cout << "Должно быть зарегистрировано хотя бы 2 транспротных средства" << std::endl;
			}
			std::cout << "Зарегистрировано транспортных средств: " << count_transpotr << std::endl;
			std::cout << "\n1. Зарегистрировать транспорт";
			if (count_transpotr > 1)
			{
				std::cout << "\n2. Начать гонку";
			}
			std::cout << "\n\nВыберите действие: ";
			try
			{
				std::string strIn;
				int in;
				std::cin >> strIn;
				in = std::stoi(strIn);
				run_race = static_cast<StartRace>(in);
			}
			catch (const std::exception& out)
			{
				std::cerr << out.what() << std::endl;
				run_race = StartRace::kError;
				system("pause");

			}

		} while (run_race < StartRace::kRegTranport || run_race > StartRace::kStartRace);
		return run_race;
	}
	//Назначение расстояния
	int EnteringDistance()
	{
		system("CLS");
		int distance;
		std::cout << "Укажите длину дистанции в км.(Должна быть положительная): ";

		try
		{
			std::cin >> distance;
			if (distance < 0) { throw std::exception("Введено отрицательное значение! Дистанция = 0 км"); }
		}
		catch (const std::exception& out)
		{
			std::cerr << out.what() << std::endl;
			distance = 0;
			system("pause");
		}
		return distance;
	}
	//Заполнения данных ТС
	void InitCase(Transport& transport, std::string in, TypeRace& type_race, int& count_transpotr, std::string& reg, bool& flag)
	{
		if (!(type_race == TypeRace::kOther))
		{
			if (transport == Transport::kCamel ||
				transport == Transport::kRoverBoots ||
				transport == Transport::kCentaur ||
				transport == Transport::kSwiftCamel)
			{
				if (type_race == TypeRace::kAir) { std::cout << "Вы пытаетесь зарегистрировать неподходящий тип транспорта!\n"; }
				else if (flag) { IfReg(transport, in); }
				else { IfNotReg(transport, in, count_transpotr, reg); flag = DefineFlag(transport, false); }
			}
			else if (transport == Transport::kEagle ||
				transport == Transport::kMagicCarpet ||
				transport == Transport::kBroomstick)
			{
				if (type_race == TypeRace::kGround) { std::cout << "Вы пытаетесь зарегистрировать неподходящий тип транспорта!\n"; }
				else if (flag) { IfReg(transport, in); }
				else { IfNotReg(transport, in, count_transpotr, reg); flag = DefineFlag(transport, false); }
			}
		}
		else
		{
			if (flag) { IfReg(transport, in); }
			else { IfNotReg(transport, in, count_transpotr, reg); flag = DefineFlag(transport, false); }
		}
	}
	void IfReg(Transport& transport, std::string in)
	{
		std::cout << in;
		switch (transport)
		{
		case Transport::kRoverBoots: std::cout << " уже зарегистрированы!\n";
			break;
		case Transport::kBroomstick: std::cout << " уже зарегистрирована!\n";
			break;

		default: std::cout << " уже зарегистрирован!\n";
			break;
		}
	}
	void IfNotReg(Transport& transport, std::string in, int& count_transpotr, std::string& reg)
	{
		std::cout << in;
		switch (transport)
		{
		case Transport::kRoverBoots: std::cout << " зарегистрированы!\n";
			break;
		case Transport::kBroomstick: std::cout << " зарегистрирована!\n";
			break;

		default: std::cout << " зарегистрирован!\n";
			break;
		}
		if (count_transpotr == 0) { reg += ' '; }
		else { reg += ", "; }
		count_transpotr++;
		reg += in;
	}
	//Определение флагов если read true -> назначаем, иначе считываем
	bool DefineFlag(Transport& transport, bool read)
	{
		static bool rover_boots_flag;
		static bool camel_flag;
		static bool centaur_flag;
		static bool swift_camel_flag;
		static bool broomstick_flag;
		static bool eagle_flag;
		static bool magic_carpet_flag;

		if (!read)
		{
			switch (transport)
			{
			case Transport::kRoverBoots: rover_boots_flag = true;
				break;
			case Transport::kCamel: camel_flag = true;
				break;
			case Transport::kCentaur: centaur_flag = true;
				break;
			case Transport::kSwiftCamel: swift_camel_flag = true;
				break;
			case Transport::kBroomstick: broomstick_flag = true;
				break;
			case Transport::kEagle: eagle_flag = true;
				break;
			case Transport::kMagicCarpet: magic_carpet_flag = true;
				break;

			default:
			{
				rover_boots_flag = false;
				camel_flag = false;
				centaur_flag = false;
				swift_camel_flag = false;
				broomstick_flag = false;
				eagle_flag = false;
				magic_carpet_flag = false;
			}
				break;
			}
			return true;
		}
		else
		{
			switch (transport)
			{
			case Transport::kRoverBoots: return rover_boots_flag;
				break;
			case Transport::kCamel: return camel_flag;
				break;
			case Transport::kCentaur: return centaur_flag;
				break;
			case Transport::kSwiftCamel: return swift_camel_flag;
				break;
			case Transport::kBroomstick: return broomstick_flag;
				break;
			case Transport::kEagle: return eagle_flag;
				break;
			case Transport::kMagicCarpet: return magic_carpet_flag;
				break;

			default:
				break;
			}
			return false;
		}
	}
	//Регистрация транспорта
	void RegTransport(Transport& transport, TypeRace& type_race, const int& distance, int& count_transpotr)
	{
		static std::string reg;
		if (count_transpotr == 0) { reg = "Зарегистрированные транспортные средства: "; }

		system("CLS");
		//Выбор и инициализация ТС 
		switch (transport)
		{
		case Transport::kRoverBoots:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "Ботинки-вездеходы", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kCamel:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "Верблюд", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kCentaur:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "Кентавр", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kSwiftCamel:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "Верблюд-скороход", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kBroomstick:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "Метла", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kEagle:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "Орёл", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kMagicCarpet:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "Ковер-самолёт", type_race, count_transpotr, reg, flag);
		}
		break;

		default:
			break;
		}
		//Вывод типа гонки
		switch (type_race)
		{
		case TypeRace::kAir: std::cout << "Гонка для воздушного транспорта. ";
			break;
		case TypeRace::kGround:std::cout << "Гонка для наземного транспорта. ";
			break;
		case TypeRace::kOther:std::cout << "Гонка для наземного и воздушного транспорта. ";
			break;

		default:
			break;
		}
		//Вывод расстояния
		std::cout << "Расстояние: " << distance << std::endl;
		if (count_transpotr > 0) { std::cout << reg << std::endl; }
		//Вывод меню выбора ТС
		std::cout << "\
1. Ботинки-вездеходы\n\
2. Метла\n\
3. Верблюд\n\
4. Кентавр\n\
5. Орёл\n\
6. Верблюд-скороход\n\
7. Ковер-самолёт\n\
0. Закончить регистрацию\n\n\
Выберите транспорт или 0 для завершения регистрации: ";
		try
		{
			std::string strIn;
			int in;
			std::cin >> strIn;
			in = std::stoi(strIn);
			//запись выбора пользователя
			transport = static_cast<Transport>(in);
		}
		catch (const std::exception& out)
		{
			std::cerr << out.what() << std::endl;
			transport = Transport::kError;
			system("pause");

		}
	}
	//Раполнение массива указателей на результаты гонок
	FOO_EXP_API void FillingArray(RunRace** run_race, int& count_transpotr, int& distance)
	{
		int i = 0;
		while (i < count_transpotr)
		{
			AirVehicles tmp;
			Vehicles* p = &tmp;
			run_race[count_transpotr] = new RunRace(p, distance);

			Transport rover_boots = Transport::kRoverBoots;
			Transport broomstick = Transport::kBroomstick;
			Transport camel = Transport::kCamel;
			Transport centaur = Transport::kCentaur;
			Transport eagle = Transport::kEagle;
			Transport swift_camel = Transport::kSwiftCamel;
			Transport magic_carpet = Transport::kMagicCarpet;

			if (DefineFlag(rover_boots, true))
			{
				RoverBoots tmp;
				Vehicles* p = &tmp;
				run_race[i] = new RunRace(p, distance);
				i++;
			};
			if (DefineFlag(broomstick, true))
			{
				Broomstick tmp;
				Vehicles* p = &tmp;
				run_race[i] = new RunRace(p, distance);
				i++;
			};
			if (DefineFlag(camel, true))
			{
				Camel tmp;
				Vehicles* p = &tmp;
				run_race[i] = new RunRace(p, distance);
				i++;
			};
			if (DefineFlag(centaur, true))
			{
				Centaur tmp;
				Vehicles* p = &tmp;
				run_race[i] = new RunRace(p, distance);
				i++;

			};
			if (DefineFlag(eagle, true))
			{
				Eagle tmp;
				Vehicles* p = &tmp;
				run_race[i] = new RunRace(p, distance);
				i++;
			};
			if (DefineFlag(swift_camel, true))
			{
				SwiftCamel tmp;
				Vehicles* p = &tmp;
				run_race[i] = new RunRace(p, distance);
				i++;
			};
			if (DefineFlag(magic_carpet, true))
			{
				MagicCarpet tmp;
				Vehicles* p = &tmp;
				run_race[i] = new RunRace(p, distance);
				i++;
			};
		}
	};
	//Сортировка пузырьком результатов
	void SortResult(RunRace** run_race, int& count_transpotr)
	{
		//сортировка наименьшее время -> вперед
		for (int i = 0; i < count_transpotr; i++) {
			for (int j = 0; j < count_transpotr - 1 - i; j++) {

				if (run_race[j]->GetRaceTime() > run_race[j + 1]->GetRaceTime())
				{
					*run_race[count_transpotr] = *run_race[j];
					*run_race[j] = *run_race[j + 1];
					*run_race[j + 1] = *run_race[count_transpotr];
				}
			}
		}
	}
	//Вывод результатов имя ТС + время
	void PrintResult(RunRace** run_race, int& count_transpotr)
	{
		system("CLS");

		std::cout << "Результаты гонки:\n" << std::endl;
		std::cout << "\a!Победитель: " << run_race[0]->GetName() << "!" << " Со временем: " << run_race[0]->GetRaceTime() << "ч.\n" << std::endl;
		for (int i = 0; i < count_transpotr; i++)
		{
			std::cout << run_race[i]->GetName() << ". Время: " << run_race[i]->GetRaceTime() << " ч." << std::endl;
		}
	}
	//Очистка выделенной памяти
	void CleanMemory(RunRace** run_race, int& count_transpotr)
	{
		//удаляем члены массива указателей
		for (int i = 0; i <= count_transpotr; i++)
		{
			delete run_race[i];
		}
		//удаляем массив указателей
		delete[] run_race;
	}
}