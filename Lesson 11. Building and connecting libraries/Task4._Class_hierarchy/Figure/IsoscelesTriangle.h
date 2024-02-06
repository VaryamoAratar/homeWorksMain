#pragma once
#include "Triangle.h"
#ifdef FIGURE_EXPORTS
#define FIGURE_EXP_API __declspec(dllexport)
#else
#define FIGURE_EXP_API __declspec(dllimport)
#endif

//равнобедренный треугольник
class IsoscelesTriangle : public Triangle
{
public:
    FIGURE_EXP_API IsoscelesTriangle() ;

protected:
    IsoscelesTriangle(int a, int b, int angle_A, int angle_B);
};

