#include "Rhomb.h"

Rhomb::Rhomb() : Rhomb(50, 80, 100)
{
    name = "����";
    sides_count = 4;
    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" ������ �������� ������. �������: ��� ������� �� �����, �/��� ���� A,C � B,D ������� �� �����");
    }
};
bool Rhomb::checkCorrectness()
{
    if (get_sides_count() == 4 &&
        get_side_a() == get_side_c() &&
        get_side_a() == get_side_b() &&
        get_side_a() == get_side_d() &&
        get_angle_A() == get_angle_C() &&
        get_angle_B() == get_angle_D())
    {
        return true;
    }
    else
    {
        return false;
    }
}

    Rhomb::Rhomb(int a, int angle_A, int angle_B) : Parallelogram(a, a, angle_A, angle_B)
    {};
