#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle(50, 60, 90)
{
    name = "Прямоугольник";
};


Rectangle::Rectangle(int a, int b, int angle_A) : Parallelogram(a, b, angle_A, angle_A)
    {};