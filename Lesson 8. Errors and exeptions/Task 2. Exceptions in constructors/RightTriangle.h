#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle
{
public:
    RightTriangle();
    
protected:
    bool checkCorrectness() override;
    RightTriangle(int a, int b, int c, int angle_A, int angle_B);
};
