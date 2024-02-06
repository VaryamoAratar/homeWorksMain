#pragma once
#include "IsoscelesTriangle.h"
#ifdef FIGURE_EXPORTS
#define FIGURE_EXP_API __declspec(dllexport)
#else
#define FIGURE_EXP_API __declspec(dllimport)
#endif

//Равносторонний треугольник
class EquilateralTriangle : public IsoscelesTriangle
{
public:
    FIGURE_EXP_API EquilateralTriangle();

protected:
    EquilateralTriangle(int side_a, int angle_A);
};
