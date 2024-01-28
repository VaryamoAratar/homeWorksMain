#pragma once
#include "Parallelogram.h"

//Прямоугольник
class Rectangle : public Parallelogram
{
public:
    Rectangle();

protected:
    Rectangle(int a, int b, int angle_A);
};
