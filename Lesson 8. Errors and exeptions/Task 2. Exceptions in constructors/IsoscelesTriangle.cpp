#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle() : IsoscelesTriangle(35, 55, 50, 80)
{
    name = "�������������� �����������";
    sides_count = 3;
    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" ������ �������� ������. �������: ������� a � c �� �����, �/��� ���� A � C �� �����");
    }
};
bool IsoscelesTriangle::checkCorrectness()
{
    if (get_sides_count() == 3 &&
        get_side_a() == get_side_c() &&
        get_angle_A() == get_angle_C())
    {
        return true;
    }
    else
    {
        return false;
    }
}

    IsoscelesTriangle::IsoscelesTriangle(int a, int b, int angle_A, int angle_B) : Triangle(a, b, a, angle_A, angle_B, angle_A)
    {};

