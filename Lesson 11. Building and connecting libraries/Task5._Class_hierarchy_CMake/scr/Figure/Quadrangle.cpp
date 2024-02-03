#include "Quadrangle.h"

Quadrangle::Quadrangle() : Quadrangle(10, 20, 30, 40, 50, 60, 70, 80)
    {
        name = "Четырехугольник";
        sides_count = 4;
    };

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

    void Quadrangle::print()
    {
        std::cout << get_name() << std::endl;
        std::cout << "Стороны: " << "a=" << get_side_a() << ' '
            << "b=" << get_side_b() << ' '
            << "c=" << get_side_c() << ' '
            << "d=" << get_side_d() << std::endl;
        std::cout << "Углы: " << "A=" << get_angle_A() << ' '
            << "B=" << get_angle_B() << ' '
            << "C=" << get_angle_C() << ' '
            << "D=" << get_angle_D() << std::endl;
    }