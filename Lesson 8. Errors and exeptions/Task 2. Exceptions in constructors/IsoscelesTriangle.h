#pragma once
#include "Triangle.h"
//�������������� �����������
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle();

protected:
    bool checkCorrectness() override;
    IsoscelesTriangle(int a, int b, int angle_A, int angle_B);
};
