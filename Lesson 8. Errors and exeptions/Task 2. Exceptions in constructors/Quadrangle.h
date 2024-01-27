#pragma once
#include "Figure.h"

//Четырехугольник
class Quadrangle : public Figure
{
public:
    Quadrangle();
    void print_info() override;


protected:
    Quadrangle(int a, int b, int c, int d, int angle_A, int angle_B, int angle_C, int angle_D);
    
    bool checkCorrectness() override;

    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_side_d();

    int get_angle_A();
    int get_angle_B();
    int get_angle_C();
    int get_angle_D();

private:
    int side_a{ 0 };
    int side_b{ 0 };
    int side_c{ 0 };
    int side_d{ 0 };

    int angle_A{ 0 };
    int angle_B{ 0 };
    int angle_C{ 0 };
    int angle_D{ 0 };

};
