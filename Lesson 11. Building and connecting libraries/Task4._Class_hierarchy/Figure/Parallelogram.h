#pragma once
#include "Quadrangle.h"
#ifndef FIGURE_CLASS_EXPORT
#define FIGURE_EXP_API __declspec(dllexport)
#else
#define FIGURE_EXP_API __declspec(dllimport)
#endif

//ֿאנאככוכמדנאלל
class Parallelogram : public Quadrangle
{
public:
    FIGURE_EXP_API Parallelogram();

protected:
    Parallelogram(int a, int b, int angle_A, int angle_B);
};

