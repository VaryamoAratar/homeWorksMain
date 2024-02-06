#pragma once
#include "Parallelogram.h"
#ifdef FIGURE_EXPORTS
#define FIGURE_EXP_API __declspec(dllexport)
#else
#define FIGURE_EXP_API __declspec(dllimport)
#endif

//Прямоугольник
class Rectangle : public Parallelogram
{
public:
    FIGURE_EXP_API Rectangle();

protected:
    Rectangle(int a, int b, int angle_A);
};
