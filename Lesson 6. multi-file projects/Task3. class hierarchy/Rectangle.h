#pragma once
#include "Parallelogram.h"

//�������������
class Rectangle : public Parallelogram
{
public:
    Rectangle();

protected:
    Rectangle(int a, int b, int angle_A);
};
