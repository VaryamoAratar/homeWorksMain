#pragma once
#include "Triangle.h"
//�������������� �����������
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle() ;

protected:
    IsoscelesTriangle(int a, int b, int angle_A, int angle_B);
};

