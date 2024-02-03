#include "Triangle.h"

//Треугольник
Triangle::Triangle() : Triangle(10, 20, 30, 40, 50, 60)
    {
        name = "Треугольник";
        sides_count = 3;
    };

Triangle::Triangle(int a, int b, int c, int angle_A, int angle_B, int angle_C) :
        side_a{ a }, side_b{ b }, side_c{ c }, angle_A{ angle_A }, angle_B{ angle_B }, angle_C{ angle_C }
    {};

    int Triangle::get_side_a() { return side_a; }
    int Triangle::get_side_b() { return side_b; }
    int Triangle::get_side_c() { return side_c; }

    int Triangle::get_angle_A() { return angle_A; }
    int Triangle::get_angle_B() { return angle_B; }
    int Triangle::get_angle_C() { return angle_C; }

    void Triangle::print()
    {
        std::cout << get_name() << std::endl;
        std::cout << "Стороны: " << "a=" << get_side_a() << ' '
            << "b=" << get_side_b() << ' '
            << "c=" << get_side_c() << std::endl;
        std::cout << "Углы: " << "A=" << get_angle_A() << ' '
            << "B=" << get_angle_B() << ' '
            << "C=" << get_angle_C() << std::endl;
    }

