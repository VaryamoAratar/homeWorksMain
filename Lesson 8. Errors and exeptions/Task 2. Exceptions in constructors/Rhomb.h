#pragma once
#include "Parallelogram.h"

//����
class Rhomb : public Parallelogram
{
public:
    Rhomb();

protected:
    bool checkCorrectness();
    Rhomb(int a, int angle_A, int angle_B);
};
