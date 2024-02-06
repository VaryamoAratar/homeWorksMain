#pragma once
#include "Rectangle.h"
#ifdef FIGURE_EXPORTS
#define FIGURE_EXP_API __declspec(dllexport)
#else
#define FIGURE_EXP_API __declspec(dllimport)
#endif

// вадрат
class Square : public Rectangle
{
public:
    FIGURE_EXP_API Square();

protected:
    Square(int a);
};
