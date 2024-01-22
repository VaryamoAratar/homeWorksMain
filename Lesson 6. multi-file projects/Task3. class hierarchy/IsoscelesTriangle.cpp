#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle() : IsoscelesTriangle(35, 55, 50, 80)
{
    name = "Равнобедренный треугольник";
};
IsoscelesTriangle::IsoscelesTriangle(int a, int b, int angle_A, int angle_B) : Triangle(a, b, a, angle_A, angle_B, angle_A)
{};