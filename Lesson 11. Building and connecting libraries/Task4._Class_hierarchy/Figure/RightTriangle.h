#pragma once
#include "Triangle.h"
#ifdef FIGURE_EXPORTS
#define FIGURE_EXP_API __declspec(dllexport)
#else
#define FIGURE_EXP_API __declspec(dllimport)
#endif

class RightTriangle : public Triangle
{
public:
    FIGURE_EXP_API RightTriangle();

protected:
    RightTriangle(int a, int b, int c, int angle_A, int angle_B);
};

