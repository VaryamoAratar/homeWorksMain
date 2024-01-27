#include "Quadrangle.h"

Quadrangle::Quadrangle() : Quadrangle(10, 20, 30, 40, 50, 60, 70, 80)
{
    name = "Четырехугольник";
    sides_count = 4;
    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" Ошибка создания фигуры. Причина: сумма углов не равна 360 градусов");
    }
};
void Quadrangle::print_info()
{
    std::cout << get_name()
        << " (cтороны " << get_side_a() << ", " << get_side_b() << ", " << get_side_c() << ", " << get_side_d() << "; "
        << "углы " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ", " << get_angle_D() << ')';
    if (checkCorrectness())
    {
        std::cout << " создан" << std::endl;
    }

}

bool Quadrangle::checkCorrectness()
{
    if (get_sides_count() == 4 && (get_angle_A() + get_angle_B() + get_angle_C() + get_angle_D()) == 360)
    {
        return true;
    }
    else
    {
        return false;
    }
}

    Quadrangle::Quadrangle(int a, int b, int c, int d, int angle_A, int angle_B, int angle_C, int angle_D) :
        side_a{ a }, side_b{ b }, side_c{ c }, side_d{ d }, angle_A{ angle_A }, angle_B{ angle_B }, angle_C{ angle_C }, angle_D{ angle_D }
    {};

    int Quadrangle::get_side_a() { return side_a; }
    int Quadrangle::get_side_b() { return side_b; }
    int Quadrangle::get_side_c() { return side_c; }
    int Quadrangle::get_side_d() { return side_d; }

    int Quadrangle::get_angle_A() { return angle_A; }
    int Quadrangle::get_angle_B() { return angle_B; }
    int Quadrangle::get_angle_C() { return angle_C; }
    int Quadrangle::get_angle_D() { return angle_D; }
