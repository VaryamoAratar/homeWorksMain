#pragma once
#include "Quadrangle.h"

//��������������
class Parallelogram : public Quadrangle
{
public:
    Parallelogram();

protected: 
    bool checkCorrectness() override;
    Parallelogram(int a, int b, int angle_A, int angle_B);
};
