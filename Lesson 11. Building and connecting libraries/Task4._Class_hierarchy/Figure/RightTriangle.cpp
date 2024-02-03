#include "RightTriangle.h"

RightTriangle::RightTriangle() : RightTriangle(12, 23, 34, 45, 56)
{
    name = "Прямоугольный треугольник";
};
RightTriangle::RightTriangle(int a, int b, int c, int angle_A, int angle_B) : Triangle(a, b, c, angle_A, angle_B, 90)
{};