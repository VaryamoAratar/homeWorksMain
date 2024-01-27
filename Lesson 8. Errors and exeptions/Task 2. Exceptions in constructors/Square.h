#pragma once
#include "Rectangle.h"

// вадрат
class Square : public Rectangle
{
public:
    Square();

protected:
    bool checkCorrectness() override;
    Square(int a);
};
