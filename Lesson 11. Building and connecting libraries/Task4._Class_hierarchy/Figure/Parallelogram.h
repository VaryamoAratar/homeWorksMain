#pragma once
#include "Quadrangle.h"
#ifdef FIGURE_EXPORTS
#define FIGURE_EXP_API __declspec(dllexport)
#else
#define FIGURE_EXP_API __declspec(dllimport)
#endif

//��������������
class Parallelogram : public Quadrangle
{
public:
    FIGURE_EXP_API Parallelogram();

protected:
    Parallelogram(int a, int b, int angle_A, int angle_B);
};

