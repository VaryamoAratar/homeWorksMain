#include "Triangle.h"

//�����������
Triangle::Triangle() : Triangle(10, 20, 30, 40, 50, 60)
{
    name = "�����������";
    sides_count = 3;

    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" ������ �������� ������. �������: ����� ����� �� ����� 180 ��������");
    }
};
void Triangle::print_info()
{
    std::cout << get_name()
        << " (c������ " << get_side_a() << ", " << get_side_b() << ", " << get_side_c() << "; "
        << "���� " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ')';
    if (checkCorrectness())
    {
        std::cout << " ������" << std::endl;
    }

}

bool Triangle::checkCorrectness()
{
    if (get_sides_count() == 3 && (get_angle_A() + get_angle_B() + get_angle_C()) == 180)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Triangle::Triangle(int a, int b, int c, int angle_A, int angle_B, int angle_C) :
    side_a{ a }, side_b{ b }, side_c{ c }, angle_A{ angle_A }, angle_B{ angle_B }, angle_C{ angle_C }
{};

int Triangle::get_side_a() { return side_a; }
int Triangle::get_side_b() { return side_b; }
int Triangle::get_side_c() { return side_c; }

int Triangle::get_angle_A() { return angle_A; }
int Triangle::get_angle_B() { return angle_B; }
int Triangle::get_angle_C() { return angle_C; }
