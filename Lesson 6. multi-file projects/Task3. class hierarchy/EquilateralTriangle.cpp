#include "EquilateralTriangle.h"


EquilateralTriangle::EquilateralTriangle() : EquilateralTriangle(100, 60)
    {
        name = "Равносторонний треугольник";
    };


EquilateralTriangle::EquilateralTriangle(int side_a, int angle_A) : IsoscelesTriangle(side_a, side_a, angle_A, angle_A)
    {};

