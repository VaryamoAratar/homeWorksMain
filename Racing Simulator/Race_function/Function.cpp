#include "Function.h"

namespace race
{
	//����������� � ����� ���� �����
	void printStart(RaceType& raceType)
	{
		do
		{
			system("CLS");

			std::cout << "����� ���������� � �������� ���������!\n 1. ����� ��� ���������� ����������\n 2. ����� ��� ��������� ����������\n 3. ����� ��� ��������� � ���������� ����������\n �������� ��� ����� (1, 2 ��� 3): ";
			int in;
			std::cin >> in;
			raceType = static_cast<RaceType>(in);

		} while (raceType < RaceType::AIR || raceType > RaceType::OTHER);
	}
	//����� �������� ����� ���������� �����������
	void printFin(FinRace& finRace)
	{
		do
		{
			std::cout << "\n1. �������� ��� ���� �����\n2. �����\n �������� �������� : ";
			int in;
			std::cin >> in;
			finRace = static_cast<FinRace>(in);

			system("CLS");

		} while (finRace < FinRace::RESTART || finRace > FinRace::EXIT);
	}
	//����� �������� ����� ������
	void printRun(RunRace& runRace, int& countTranspotr)
	{
		if (countTranspotr < 2)
		{
			do
			{
				system("CLS");

				std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������" << std::endl;
				std::cout << "���������������� ������������ �������: " << countTranspotr << std::endl;
				std::cout << "1. ���������������� ���������\n �������� �������� : ";
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

				std::cout << "���������������� ������������ �������: " << countTranspotr << std::endl;
				std::cout << "1. ���������������� ���������\n2. ������ �����\n�������� ��������: ";
				int in;
				std::cin >> in;
				runRace = static_cast<RunRace>(in);

			} while (runRace < RunRace::REGTRANSPORT || runRace > RunRace::STARTRACE);
		}
	}
	//���������� ����������
	int enteringDistance(int& distance)
	{
		std::cout << "������� ����� ��������� (������ ���� �������������): ";
		std::cin >> distance;
		return distance;
	}
	//����� ������
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
	//���������� ������ ��
	void initCase(Transport& transport, std::string in, RaceType& raceType, int& countTranspotr, static std::string& reg, bool flag)
	{
		if (!(raceType == RaceType::OTHER))
		{
			if (transport == Transport::CAMEL ||
				transport == Transport::ROVERBOOTS ||
				transport == Transport::CENTAUR ||
				transport == Transport::SWIFTCAMEL)
			{
				if (raceType == RaceType::AIR) { std::cout << "�� ��������� ���������������� ������������ ��� ����������!\n"; }
				else if (flag) { std::cout << in << " ��� ���������������!\n"; }
				else
				{
					std::cout << in << " ���������������!\n";
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
				if (raceType == RaceType::GROUND) { std::cout << "�� ��������� ���������������� ������������ ��� ����������!\n"; }
				else if (flag) { std::cout << in << " ��� ���������������!\n"; }
				else
				{
					std::cout << in << " ���������������!\n";
					if (countTranspotr == 0) { reg += ' '; }
					else { reg += ", "; }
					countTranspotr++;
					reg += in;
				}
			}
		}
		else
		{
			if (flag) { std::cout << in << " ��� ���������������!\n"; }
			else
			{
				std::cout << in << " ���������������!\n";
				if (countTranspotr == 0) { reg += ' '; }
				else { reg += ", "; }
				countTranspotr++;
				reg += in;
			}
		}
	}
	//����������� ����������
	void regTransport(Transport& transport, RaceType raceType, const int& distance, int& countTranspotr)
	{
		static std::string reg;
		if (countTranspotr == 0) { reg = "������������������ ������������ ��������: "; }

		system("CLS");
		//����� � ������������� �� 
		switch (transport)
		{
		case Transport::ROVERBOOTS:
		{
			initCase(transport, "�������-���������", raceType, countTranspotr, reg, roverBootsFlag);
			roverBootsFlag = true;
		}
		break;
		case Transport::CAMEL:
		{
			initCase(transport, "�������", raceType, countTranspotr, reg, camelFlag);
			camelFlag = true;
		}
		break;
		case Transport::CENTAUR:
		{
			initCase(transport, "�������", raceType, countTranspotr, reg, centaurFlag);
			centaurFlag = true;
		}
		break;
		case Transport::SWIFTCAMEL:
		{
			initCase(transport, "�������-��������", raceType, countTranspotr, reg, swiftCamelFlag);
			swiftCamelFlag = true;
		}
		break;
		case Transport::BROOMSTICK:
		{
			initCase(transport, "�����", raceType, countTranspotr, reg, broomstickFlag);
			broomstickFlag = true;
		}
		break;
		case Transport::EAGLE:
		{
			initCase(transport, "���", raceType, countTranspotr, reg, eagleFlag);
			eagleFlag = true;
		}
		break;
		case Transport::MAGICCARPET:
		{
			initCase(transport, "�����-������", raceType, countTranspotr, reg, magicCarpetFlag);
			magicCarpetFlag = true;
		}
		break;

		default:
			break;
		}
		//����� ���� �����
		switch (raceType)
		{
		case RaceType::AIR: std::cout << "����� ��� ���������� ����������. ";
			break;
		case RaceType::GROUND:std::cout << "����� ��� ��������� ����������. ";
			break;
		case RaceType::OTHER:std::cout << "����� ��� ��������� � ���������� ����������. ";
			break;

		default:
			break;
		}
		//����� ����������
		std::cout << "����������: " << distance << std::endl;
		if (countTranspotr > 0) { std::cout << reg << std::endl; }
		//����� ���� ������ ��
		std::cout << "1. �������-��������\n2. �����\n3. �������\n4. �������\n5. ���\n6. �������-��������\n7. �����-������\n0. ��������� �����������\n�������� ��������� ��� 0 ��� ���������� �����������: ";
		int in;
		std::cin >> in;
		//������ ������ ������������
		transport = static_cast<Transport>(in);
	}
	//���������� ��������� � ����� ����������� �����
	void printResult(Race_compil** race_compil_, int& nSize)
	{
		system("CLS");
		//���������� ���������� ����� -> ������
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
		//����� ����������� ��� �� + �����
		std::cout << "���������� �����" << std::endl;
		for (int i = 0; i < nSize; i++)
		{
			std::cout << race_compil_[i]->get_name() << ". �����: " << race_compil_[i]->get_race_time() << std::endl;
		}
	}
	//������� ���������� ������
	void clearMemory(Race_compil** race_compil, int& nSize)
	{
		//������� ����� ������� ����������
		for (int i = 0; i < nSize; i++)
		{
			delete race_compil[i];
		}
		//������� ������ ����������
		delete[] race_compil;
	}
}