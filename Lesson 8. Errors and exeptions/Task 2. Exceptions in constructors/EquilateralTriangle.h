#pragma once
#include "IsoscelesTriangle.h"

//�������������� �����������
class EquilateralTriangle : public IsoscelesTriangle
{
public:
    EquilateralTriangle();

protected:
    bool checkCorrectness() override;
    EquilateralTriangle(int side_a, int angle_A);
};
