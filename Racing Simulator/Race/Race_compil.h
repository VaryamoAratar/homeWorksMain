#pragma once
#include "Vehicles.h"

#ifdef RACE_EXPORTS
#define RACE_EXP_API __declspec(dllexport)
#else
#define RACE_EXP_API __declspec(dllimport)
#endif // RACE_EXPORTS

namespace race
{
	enum class Rest
	{
		NOREST,
		FIRSTREST,
		SECONDREST,
		NEXTREST
	};


	class Race_compil
	{
	private:
		float raceTime;
		std::string name;

	protected:
		void set_race_time_air(Vehicles* vehicles, int distance);		//����� ����� ��� ���������� ����������
		void set_race_time_ground(Vehicles* vehicles, int distance);	//����� ����� ��� ��������� ����������


	public:
		RACE_EXP_API std::string get_name();
		RACE_EXP_API Race_compil(Vehicles* vehicles, int distance);
		RACE_EXP_API float get_race_time(); //������ ����� �����
	};
}

