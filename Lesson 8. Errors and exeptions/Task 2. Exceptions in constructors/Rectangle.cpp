#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle(50, 60, 90)
{
    name = "Прямоугольник";
    sides_count = 4;
    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" Ошибка создания фигуры. Причина: стороны a,c и b,d попарно не равны, и/или все углы не равны 90");
    }
};
bool Rectangle::checkCorrectness()
{
    if (Quadrangle::checkCorrectness())
    {
        if (Parallelogram::checkCorrectness() &&
            get_angle_A() == get_angle_B() &&
            get_angle_A() == 90)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        try
        {
            throw MyError("Ошибка создания фигуры. Причина: сумма углов не равна 180 градусов");
        }
        catch (MyError& err)
        {
            std::cout << err.what() << std::endl;
        }
        return false;
    }
}

    Rectangle::Rectangle(int a, int b, int angle_A) : Parallelogram(a, b, angle_A, angle_A)
    {};
