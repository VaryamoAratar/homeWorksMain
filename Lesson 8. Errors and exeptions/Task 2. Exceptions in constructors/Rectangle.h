#pragma once
#include "Parallelogram.h"

//Прямоугольник
class Rectangle : public Parallelogram
{
public:
    Rectangle();

protected:
    bool checkCorrectness() override;
    Rectangle(int a, int b, int angle_A);;
};
