#pragma once
#include<iostream>
#include "race.h"
#include "vehicles.h"
#include "broomstick.h"
#include "eagle.h"
#include "magic_carpet.h"
#include "camel.h"
#include "centaur.h"
#include "rover_boots.h"
#include "swift_camel.h"


#ifdef RACEFUNCTION_EXPORTS
#define FOO_EXP_API __declspec(dllexport)
#else
#define FOO_EXP_API __declspec(dllimport)
#endif // RACEFUNCTION


namespace racing_simulator
{
	//��� �����
	enum class TypeRace
	{
		kAir = 1,
		kGround,
		kOther,
		kError = 0
	};
	//������������ ��������
	enum class Transport
	{
		kRoverBoots = 1,
		kBroomstick,
		kCamel,
		kCentaur,
		kEagle,
		kSwiftCamel,
		kMagicCarpet,
		kEndRegisration = 0,
		kClearTransportFlag = 0,
		kError = 0
	};
	//������ �����
	enum class StartRace
	{
		kRegTranport = 1,
		kStartRace,
		kError =  0
	};
	//����� �����
	enum class FinRace
	{
		kRestart = 1,
		kExit,
		kError = 0
	};

	//����������� � ����� ���� �����
	FOO_EXP_API TypeRace Start();
	//����� �������� ����� ������ ��������� �� ���� ���������� ������������������ ��
	FOO_EXP_API	StartRace BeforeRace(int& count_transpotr);
	//���������� ����������
	FOO_EXP_API	int EnteringDistance();
	//����� �������� ����� ���������� �����������
	FOO_EXP_API	FinRace AfterRace();
	//���������� ������ ��
	FOO_EXP_API	void InitCase(Transport& transport, std::string in, TypeRace& type_race, int& count_transpotr, std::string& reg, bool& flag);
	FOO_EXP_API	void IfReg(Transport& transport, std::string in);
	FOO_EXP_API	void IfNotReg(Transport& transport, std::string in, int& count_transpotr, std::string& reg);
	//����������� ������ ���� read true -> ���������, ����� ���������
	FOO_EXP_API	bool DefineFlag(Transport& transport, bool read);
	//����������� ����������
	FOO_EXP_API	void RegTransport(Transport& transport, TypeRace& type_race, const int& distance, int& count_transpotr);
	//���������� ������� ���������� �� ���������� �����
	FOO_EXP_API void FillingArray(RunRace** run_race, int& count_transpotr, int& distance);
	//���������� ��������� �����������
	FOO_EXP_API	void SortResult(RunRace** run_race, int& count_transpotr);
	//����� ����������� ��� �� + �����
	FOO_EXP_API	void PrintResult(RunRace** run_race, int& count_transpotr);
	//������� ���������� ������
	FOO_EXP_API	void CleanMemory(RunRace** run_race, int& count_transpotr);
}
