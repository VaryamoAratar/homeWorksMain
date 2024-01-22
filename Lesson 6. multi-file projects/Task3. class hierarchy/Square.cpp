#include "Square.h"

Square::Square() : Square(100)
{
    name = " вадрат";
};

Square::Square(int a) : Rectangle(a, a, 90)
    {};