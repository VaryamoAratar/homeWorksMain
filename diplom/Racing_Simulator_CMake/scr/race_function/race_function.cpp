#include "race_function.h"


namespace racing_simulator
{
	//����������� � ����� ���� �����
	TypeRace Start()
	{
		TypeRace type_race;
		do
		{
			system("CLS");

			std::cout << "\
����� ���������� � �������� ���������!\n\
\n 1. ����� ��� ���������� ����������\
\n 2. ����� ��� ��������� ����������\
\n 3. ����� ��� ��������� � ���������� ����������\
\n �������� ��� ����� (1, 2 ��� 3): ";
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
	//����� �������� ����� ���������� �����������
	FinRace AfterRace()
	{
		FinRace fin_race;
		do
		{
			std::cout << "\
\n1. �������� ��� ���� �����\
\n2. �����\n\
\n�������� �������� : ";
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
	//����� �������� ����� ������ ��������� �� ���� ���������� ������������������ ��
	StartRace BeforeRace(int& count_transpotr)
	{
		StartRace run_race;
		do
		{
			system("CLS");
			if (count_transpotr < 2)
			{
				std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������" << std::endl;
			}
			std::cout << "���������������� ������������ �������: " << count_transpotr << std::endl;
			std::cout << "\n1. ���������������� ���������";
			if (count_transpotr > 1)
			{
				std::cout << "\n2. ������ �����";
			}
			std::cout << "\n\n�������� ��������: ";
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
	//���������� ����������
	int EnteringDistance()
	{
		system("CLS");
		int distance;
		std::cout << "������� ����� ��������� � ��.(������ ���� �������������): ";

		try
		{
			std::cin >> distance;
			if (distance < 0) { throw std::exception("������� ������������� ��������! ��������� = 0 ��"); }
		}
		catch (const std::exception& out)
		{
			std::cerr << out.what() << std::endl;
			distance = 0;
			system("pause");
		}
		return distance;
	}
	//���������� ������ ��
	void InitCase(Transport& transport, std::string in, TypeRace& type_race, int& count_transpotr, std::string& reg, bool& flag)
	{
		if (!(type_race == TypeRace::kOther))
		{
			if (transport == Transport::kCamel ||
				transport == Transport::kRoverBoots ||
				transport == Transport::kCentaur ||
				transport == Transport::kSwiftCamel)
			{
				if (type_race == TypeRace::kAir) { std::cout << "�� ��������� ���������������� ������������ ��� ����������!\n"; }
				else if (flag) { IfReg(transport, in); }
				else { IfNotReg(transport, in, count_transpotr, reg); flag = DefineFlag(transport, false); }
			}
			else if (transport == Transport::kEagle ||
				transport == Transport::kMagicCarpet ||
				transport == Transport::kBroomstick)
			{
				if (type_race == TypeRace::kGround) { std::cout << "�� ��������� ���������������� ������������ ��� ����������!\n"; }
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
		case Transport::kRoverBoots: std::cout << " ��� ����������������!\n";
			break;
		case Transport::kBroomstick: std::cout << " ��� ����������������!\n";
			break;

		default: std::cout << " ��� ���������������!\n";
			break;
		}
	}
	void IfNotReg(Transport& transport, std::string in, int& count_transpotr, std::string& reg)
	{
		std::cout << in;
		switch (transport)
		{
		case Transport::kRoverBoots: std::cout << " ����������������!\n";
			break;
		case Transport::kBroomstick: std::cout << " ����������������!\n";
			break;

		default: std::cout << " ���������������!\n";
			break;
		}
		if (count_transpotr == 0) { reg += ' '; }
		else { reg += ", "; }
		count_transpotr++;
		reg += in;
	}
	//����������� ������ ���� read true -> ���������, ����� ���������
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
	//����������� ����������
	void RegTransport(Transport& transport, TypeRace& type_race, const int& distance, int& count_transpotr)
	{
		static std::string reg;
		if (count_transpotr == 0) { reg = "������������������ ������������ ��������: "; }

		system("CLS");
		//����� � ������������� �� 
		switch (transport)
		{
		case Transport::kRoverBoots:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "�������-���������", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kCamel:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "�������", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kCentaur:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "�������", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kSwiftCamel:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "�������-��������", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kBroomstick:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "�����", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kEagle:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "���", type_race, count_transpotr, reg, flag);
		}
		break;
		case Transport::kMagicCarpet:
		{
			bool flag = DefineFlag(transport, true);
			InitCase(transport, "�����-������", type_race, count_transpotr, reg, flag);
		}
		break;

		default:
			break;
		}
		//����� ���� �����
		switch (type_race)
		{
		case TypeRace::kAir: std::cout << "����� ��� ���������� ����������. ";
			break;
		case TypeRace::kGround:std::cout << "����� ��� ��������� ����������. ";
			break;
		case TypeRace::kOther:std::cout << "����� ��� ��������� � ���������� ����������. ";
			break;

		default:
			break;
		}
		//����� ����������
		std::cout << "����������: " << distance << std::endl;
		if (count_transpotr > 0) { std::cout << reg << std::endl; }
		//����� ���� ������ ��
		std::cout << "\
1. �������-���������\n\
2. �����\n\
3. �������\n\
4. �������\n\
5. ���\n\
6. �������-��������\n\
7. �����-������\n\
0. ��������� �����������\n\n\
�������� ��������� ��� 0 ��� ���������� �����������: ";
		try
		{
			std::string strIn;
			int in;
			std::cin >> strIn;
			in = std::stoi(strIn);
			//������ ������ ������������
			transport = static_cast<Transport>(in);
		}
		catch (const std::exception& out)
		{
			std::cerr << out.what() << std::endl;
			transport = Transport::kError;
			system("pause");

		}
	}
	//���������� ������� ���������� �� ���������� �����
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
	//���������� ��������� �����������
	void SortResult(RunRace** run_race, int& count_transpotr)
	{
		//���������� ���������� ����� -> ������
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
	//����� ����������� ��� �� + �����
	void PrintResult(RunRace** run_race, int& count_transpotr)
	{
		system("CLS");

		std::cout << "���������� �����:\n" << std::endl;
		std::cout << "\a!����������: " << run_race[0]->GetName() << "!" << " �� ��������: " << run_race[0]->GetRaceTime() << "�.\n" << std::endl;
		for (int i = 0; i < count_transpotr; i++)
		{
			std::cout << run_race[i]->GetName() << ". �����: " << run_race[i]->GetRaceTime() << " �." << std::endl;
		}
	}
	//������� ���������� ������
	void CleanMemory(RunRace** run_race, int& count_transpotr)
	{
		//������� ����� ������� ����������
		for (int i = 0; i <= count_transpotr; i++)
		{
			delete run_race[i];
		}
		//������� ������ ����������
		delete[] run_race;
	}
}