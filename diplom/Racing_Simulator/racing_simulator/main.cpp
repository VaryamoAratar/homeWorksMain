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
		//������, ���������� ��� �����
		type_race = Start();
		//�������� ����� ���������
		int distance = EnteringDistance();
		//�������� ������� � �����
		count_transpotr = 0;
		transport = Transport::kClearTransportFlag;
		DefineFlag(transport, 0);
		//������������ ���������
		do
		{
			if (count_transpotr == 0) start_race = BeforeRace(count_transpotr);

			do
			{
				RegTransport(transport, type_race, distance, count_transpotr);
			} while (transport != Transport::kEndRegisration);

			if (count_transpotr != 0) start_race = BeforeRace(count_transpotr);

		} while (start_race == StartRace::kRegTranport);
		//������� ������ �����
		RunRace** run_race = new RunRace * [count_transpotr + 1];
		//��������� ������ ������������������ �����������
		FillingArray(run_race, count_transpotr, distance);
		//��������� ���������� �����
		SortResult(run_race, count_transpotr);
		//������� ���������� � �������
		PrintResult(run_race, count_transpotr);
		//����������: �� ����� ��� ���������?
		fin_race = AfterRace();
		//������ ������
		CleanMemory(run_race, count_transpotr);
	} while (fin_race == FinRace::kRestart);


	return 0;
}