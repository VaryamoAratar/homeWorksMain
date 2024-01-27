#include "Square.h"

Square::Square() : Square(100)
{
    name = "Квадрат";
    sides_count = 4;
    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" Ошибка создания фигуры. Причина: все стороны не равны,и/или все углы не равны 90");
    }
};
bool Square::checkCorrectness()
{
    if (Rectangle::checkCorrectness() &&
        get_side_a() == get_side_b())
    {
        return true;
    }
    else
    {
        return false;
    }
}

    Square::Square(int a) : Rectangle(a, a, 90)
    {};
