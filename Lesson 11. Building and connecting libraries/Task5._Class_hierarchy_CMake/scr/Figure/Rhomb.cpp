#include "Rhomb.h"

Rhomb::Rhomb() : Rhomb(50, 80, 100)
{
    name = "Ромб";
};


Rhomb::Rhomb(int a, int angle_A, int angle_B) : Parallelogram(a, a, angle_A, angle_B)
    {};