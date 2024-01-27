#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle(50, 60, 90)
{
    name = "�������������";
    sides_count = 4;
    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" ������ �������� ������. �������: ������� a,c � b,d ������� �� �����, �/��� ��� ���� �� ����� 90");
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
            throw MyError("������ �������� ������. �������: ����� ����� �� ����� 180 ��������");
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
