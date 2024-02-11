#pragma once
#include "vehicles.h"

#ifdef RACE_EXPORTS
#define RACE_EXP_API __declspec(dllexport)
#else
#define RACE_EXP_API __declspec(dllimport)
#endif // RACE_EXPORTS

namespace racing_simulator
{
	enum class Rest
	{
		kNoRest,
		kFirstRest,
		kSecondRest,
		kNextRest
	};

	//Класс, принимает на входе указатель на ТС и дистанцию
	class RunRace
	{
	private:
		float race_time_;
		std::string name_;

	protected:
		void SetRaceTimeAir(Vehicles* vehicles, int distance);		//Время гонки для воздушного транспорта
		void setRaceTimeGround(Vehicles* vehicles, int distance);	//Время гонки для наземного транспорта

	public:
		RACE_EXP_API RunRace(Vehicles* vehicles, int distance);
		RACE_EXP_API std::string GetName();//Выдает название ТС
		RACE_EXP_API float GetRaceTime(); //Выдает время гонки
	};
}

