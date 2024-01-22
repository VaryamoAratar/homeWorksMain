#pragma once
#include "Figure.h"

//�����������
class Triangle : public Figure
{
public:
    Triangle();

protected:
    Triangle(int a, int b, int c, int angle_A, int angle_B, int angle_C);

    int get_side_a();
    int get_side_b();
    int get_side_c();

    int get_angle_A();
    int get_angle_B();
    int get_angle_C();

    void print() override;

private:
    int side_a{ 0 };
    int side_b{ 0 };
    int side_c{ 0 };

    int angle_A{ 0 };
    int angle_B{ 0 };
    int angle_C{ 0 };
};
