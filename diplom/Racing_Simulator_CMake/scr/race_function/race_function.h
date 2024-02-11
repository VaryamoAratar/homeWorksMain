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
	//тип гонки
	enum class TypeRace
	{
		kAir = 1,
		kGround,
		kOther,
		kError = 0
	};
	//транспортные средства
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
	//начало гонки
	enum class StartRace
	{
		kRegTranport = 1,
		kStartRace,
		kError =  0
	};
	//конец гонки
	enum class FinRace
	{
		kRestart = 1,
		kExit,
		kError = 0
	};

	//Приветствие и выбор типа гонки
	FOO_EXP_API TypeRace Start();
	//Выбор действия перед гонкой принимает на вход количество зарегистрированных ТС
	FOO_EXP_API	StartRace BeforeRace(int& count_transpotr);
	//Назначение расстояния
	FOO_EXP_API	int EnteringDistance();
	//Выбор действия после объявления результатов
	FOO_EXP_API	FinRace AfterRace();
	//Заполнения данных ТС
	FOO_EXP_API	void InitCase(Transport& transport, std::string in, TypeRace& type_race, int& count_transpotr, std::string& reg, bool& flag);
	FOO_EXP_API	void IfReg(Transport& transport, std::string in);
	FOO_EXP_API	void IfNotReg(Transport& transport, std::string in, int& count_transpotr, std::string& reg);
	//Определение флагов если read true -> назначаем, иначе считываем
	FOO_EXP_API	bool DefineFlag(Transport& transport, bool read);
	//Регистрация транспорта
	FOO_EXP_API	void RegTransport(Transport& transport, TypeRace& type_race, const int& distance, int& count_transpotr);
	//Раполнение массива указателей на результаты гонок
	FOO_EXP_API void FillingArray(RunRace** run_race, int& count_transpotr, int& distance);
	//Сортировка пузырьком результатов
	FOO_EXP_API	void SortResult(RunRace** run_race, int& count_transpotr);
	//Вывод результатов имя ТС + время
	FOO_EXP_API	void PrintResult(RunRace** run_race, int& count_transpotr);
	//Очистка выделенной памяти
	FOO_EXP_API	void CleanMemory(RunRace** run_race, int& count_transpotr);
}
