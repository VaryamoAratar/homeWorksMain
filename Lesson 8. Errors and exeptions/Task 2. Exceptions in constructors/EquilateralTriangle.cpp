#include "EquilateralTriangle.h"


EquilateralTriangle::EquilateralTriangle() : EquilateralTriangle(100, 60)
{
    name = "Равносторонний треугольник";
    sides_count = 3;
    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" Ошибка создания фигуры. Причина: Все стороны не равны, и/или все углы не равны 60");
    }
};
bool EquilateralTriangle::checkCorrectness()
{
    if (IsoscelesTriangle::checkCorrectness() &&
        get_side_a() == get_side_b() &&
        get_angle_A() == get_angle_B() &&
        get_angle_A() == 60)
    {
        return true;
    }
    else
    {
        return false;
    }
}


    EquilateralTriangle::EquilateralTriangle(int side_a, int angle_A) : IsoscelesTriangle(side_a, side_a, angle_A, angle_A)
    {};
