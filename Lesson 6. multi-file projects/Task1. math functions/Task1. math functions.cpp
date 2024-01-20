#include <iostream>
#include "math_function.h"


//математические операции
enum MathFunction
{
    err_,
    add_,
    sub_,
    multi_,
    div_,
    exp_
};

int main()
{
    setlocale(LC_ALL, "Russian");

    double firstValue{ 1 };
    double secondValue{ 1 };
    int expValue{ 1 }; //показатель степени, целое число
    short count{ 0 };
    
    std::cout << "Введите первое число : ";
    std::cin >> firstValue;
    std::cout << std::endl;
    std::cout << "Введите второе число : ";
    std::cin >> secondValue;
    std::cout << std::endl;
    expValue = static_cast<int>(secondValue); //приведение введенного значения к целому числу

    //небольшая защита от дурака
    while (!count)
    {
        std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
        std::cin >> count;
        std::cout << std::endl;
        if (count < 0 || count > 5)
        {
            count = 0;
        }
    }
    //выбор функции в зависимости от введенного значения
    switch (count)
    {
    case add_:
        std::cout << "К " << firstValue << " прибавить " << secondValue << " = " << addition(firstValue, secondValue);
        break;
    case sub_:
        std::cout << "Из " << firstValue << " вычесть " << secondValue << " = " << subtraction(firstValue, secondValue);
        break;
    case multi_:
        std::cout << firstValue << " умножить на " << secondValue << " = " << multiplication(firstValue, secondValue);
        break;
    case div_:
        std::cout << firstValue << " делить на " << secondValue << " = " << division(firstValue, secondValue);
        break;
    case exp_:
        std::cout << firstValue << " в степени " << expValue << " = " << exponentiation(firstValue, expValue);
        break;
    case err_:
        std::cout << " Что-то пошло не так! ";
        break;
    }
   
    return 0;
}

