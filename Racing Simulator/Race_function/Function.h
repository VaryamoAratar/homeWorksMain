#pragma once
#include<iostream>
#include<string>
#include "Race_compil.h"


#ifdef RACEFUNCTION_EXPORTS
#define FUNCTION_API __declspec(dllexport)
#else
#define FUNCTION_API __declspec(dllimport)
#endif // RACE_FUNCTION_EXPORTS

namespace race
{
	static bool roverBootsFlag;
	static bool camelFlag;
	static bool swiftCamelFlag;
	static bool eagleFlag;
	static bool centaurFlag;
	static bool magicCarpetFlag;
	static bool broomstickFlag;

	enum class RaceType
	{
		AIR = 1,
		GROUND,
		OTHER
	};
	enum class Transport
	{
		ROVERBOOTS = 1,
		BROOMSTICK,
		CAMEL,
		CENTAUR,
		EAGLE,
		SWIFTCAMEL,
		MAGICCARPET,
		ENDREGISTRATION = 0
	};
	enum class RunRace
	{
		REGTRANSPORT = 1,
		STARTRACE
	};
	enum class FinRace
	{
		RESTART = 1,
		EXIT
	};

	//����������� � ����� ���� �����
	FUNCTION_API void printStart(RaceType& raceType);
	//����� �������� ����� ���������� �����������
	FUNCTION_API void printFin(FinRace& finRace);
	//����� �������� ����� ������
	FUNCTION_API void printRun(RunRace& runRace, int& countTranspotr);
	//���������� ����������
	FUNCTION_API int enteringDistance(int& distance);
	//����� ������
	FUNCTION_API void setTransportFlag();
	//���������� ������ ��
	FUNCTION_API void initCase(Transport& transport, std::string in, RaceType& raceType, int& countTranspotr, static std::string& reg, bool flag);
	//����������� ����������
	FUNCTION_API void regTransport(Transport& transport, RaceType raceType, const int& distance, int& countTranspotr);
	//���������� ��������� � ����� ����������� �����
	FUNCTION_API void printResult(Race_compil** race_compil_, int& nSize);
	//������� ���������� ������
	FUNCTION_API void clearMemory(Race_compil** race_compil, int& nSize);

}
