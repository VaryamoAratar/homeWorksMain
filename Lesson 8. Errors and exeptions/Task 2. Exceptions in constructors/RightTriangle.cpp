#include "RightTriangle.h"

RightTriangle::RightTriangle() : RightTriangle(12, 23, 34, 45, 56)
{
    name = "Прямоугольный треугольник";
    sides_count = 3;
    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" Ошибка создания фигуры. Причина: угол C не 90 градусов");
    }
};
bool RightTriangle::checkCorrectness()
{
    if (get_angle_C() == 90)
    {
        return true;
    }
    else
    {
        return false;
    }
}

    RightTriangle::RightTriangle(int a, int b, int c, int angle_A, int angle_B) : Triangle(a, b, c, angle_A, angle_B, 90)
    {};
