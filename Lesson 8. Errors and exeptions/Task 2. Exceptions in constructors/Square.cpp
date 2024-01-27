#include "Square.h"

Square::Square() : Square(100)
{
    name = "�������";
    sides_count = 4;
    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" ������ �������� ������. �������: ��� ������� �� �����,�/��� ��� ���� �� ����� 90");
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
