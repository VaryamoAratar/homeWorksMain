#pragma once
#include "Parallelogram.h"
#ifdef FIGURE_EXPORTS
#define FIGURE_EXP_API __declspec(dllexport)
#else
#define FIGURE_EXP_API __declspec(dllimport)
#endif

//Ромб
class Rhomb : public Parallelogram
{
public:
    FIGURE_EXP_API Rhomb();

protected:
    Rhomb(int a, int angle_A, int angle_B);
};
