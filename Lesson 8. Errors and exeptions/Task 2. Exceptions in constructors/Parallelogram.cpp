#include "Parallelogram.h"

Parallelogram::Parallelogram() : Parallelogram(10, 20, 30, 40)
{
    name = "Параллелограмм";
    sides_count = 4;
    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" Ошибка создания фигуры. Причина: стороны a,c и b,d попарно не равны,и/или углы A,C и B,D попарно не равны");
    }
};
bool Parallelogram::checkCorrectness()
{
    if (get_sides_count() == 4 &&
        get_side_a() == get_side_c() &&
        get_side_b() == get_side_d() &&
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

    Parallelogram::Parallelogram(int a, int b, int angle_A, int angle_B) : Quadrangle(a, b, a, b, angle_A, angle_B, angle_A, angle_B)
    {};
