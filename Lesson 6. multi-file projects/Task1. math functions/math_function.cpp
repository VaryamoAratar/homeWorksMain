#include "math_function.h"

//�������� lsummand � rsummand
double addition(double lsummand, double rsummand)
{
    return lsummand + rsummand;
};
//��������� subtrahend �� minuend
double subtraction(double minuend, double subtrahend)
{
    return minuend - subtrahend;
};
//��������� lmultiplier �� rmultiplier
double multiplication(double lmultiplier, double rmultiplier)
{
    return lmultiplier * rmultiplier;
};
//������� dividend �� divider
double division(double dividend, double divider)
{
    return dividend / divider;
};
//���������� base � ������� expo
double exponentiation(double base, int expo)
{
    double result = 1;
    for (int i = 0; i < expo; i++)
    {
        result *= base;
    }
    return result;
};
