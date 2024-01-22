#pragma once
#include "IsoscelesTriangle.h"

//Равносторонний треугольник
class EquilateralTriangle : public IsoscelesTriangle
{
public:
    EquilateralTriangle();

protected:
    EquilateralTriangle(int side_a, int angle_A);
};
