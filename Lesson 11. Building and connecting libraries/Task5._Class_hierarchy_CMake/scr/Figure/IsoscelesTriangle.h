#pragma once
#include "Triangle.h"
#ifndef FIGURE_CLASS_EXPORT
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

