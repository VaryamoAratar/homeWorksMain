#include "math_function.h"

//сложение lsummand с rsummand
double addition(double lsummand, double rsummand)
{
    return lsummand + rsummand;
};
//вычитание subtrahend из minuend
double subtraction(double minuend, double subtrahend)
{
    return minuend - subtrahend;
};
//умножение lmultiplier на rmultiplier
double multiplication(double lmultiplier, double rmultiplier)
{
    return lmultiplier * rmultiplier;
};
//деление dividend на divider
double division(double dividend, double divider)
{
    return dividend / divider;
};
//возведение base в степень expo
double exponentiation(double base, int expo)
{
    double result = 1;
    for (int i = 0; i < expo; i++)
    {
        result *= base;
    }
    return result;
};
