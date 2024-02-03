#include "Parallelogram.h"

Parallelogram::Parallelogram() : Parallelogram(10, 20, 30, 40)
    {
        name = "ֿאנאככוכמדנאלל";
    };

Parallelogram::Parallelogram(int a, int b, int angle_A, int angle_B) : Quadrangle(a, b, a, b, angle_A, angle_B, angle_A, angle_B)
    {};
