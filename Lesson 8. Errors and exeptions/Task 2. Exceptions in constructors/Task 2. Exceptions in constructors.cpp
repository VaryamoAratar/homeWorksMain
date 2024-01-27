#include <iostream>
#include <string>
#include "Task 2. Exceptions in constructors.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    //Создаем объекты
    try
    {
        Figure figure;                  //фигура без сторон
        Figure* f_figure = &figure;
        f_figure->print_info();
    }
    catch (MyError& err)
    {
        std::cout << err.what() << std::endl;
    }
    try
    {
        Triangle triangle;              //треугольник
        Figure* f_triangle = &triangle;
        f_triangle->print_info();
    }
    catch (MyError& err)
    {
        std::cout << err.what() << std::endl;
    }
    try
    {
        RightTriangle rTriangle;        //прямоугольный треугольник
        Figure* f_rTriangle = &rTriangle;
        f_rTriangle->print_info();
    }
    catch (MyError& err)
    {
        std::cout << err.what() << std::endl;
    }
    try
    {
        IsoscelesTriangle iTriangle;    //равнобедренный треугольник
        Figure* f_iTriangle = &iTriangle;
        f_iTriangle->print_info();
    }
    catch (MyError& err)
    {
        std::cout << err.what() << std::endl;
    }
    try
    {
        EquilateralTriangle eTriangle;  //равносторонний треугольник
        Figure* f_eTriangle = &eTriangle;
        f_eTriangle->print_info();
    }
    catch (MyError& err)
    {
        std::cout << err.what() << std::endl;
    }
    try
    {
        Quadrangle quadrangle;          //четырехугольник
        Figure* f_quadrangle = &quadrangle;
        f_quadrangle->print_info();
    }
    catch (MyError& err)
    {
        std::cout << err.what() << std::endl;
    }
    try
    {
        Rectangle rectangle;            //прямоугольник
        Figure* f_rectangle = &rectangle;
        f_rectangle->print_info();
    }
    catch (MyError& err)
    {
        std::cout << err.what() << std::endl;
    }
    try
    {
        Square square;                  //квадрат
        Figure* f_square = &square;
        f_square->print_info();
    }
    catch (MyError& err)
    {
        std::cout << err.what() << std::endl;
    }
    try
    {
        Parallelogram parallelogram;    //параллелограмм
        Figure* f_parallelogram = &parallelogram;
        f_parallelogram->print_info();
    }
    catch (MyError& err)
    {
        std::cout << err.what() << std::endl;
    }
    try
    {
        Rhomb rhomb;                    //ромб
        Figure* f_rhomb = &rhomb;
        f_rhomb->print_info();
    }
    catch (MyError& err)
    {
        std::cout << err.what() << std::endl;
    }

    return 0;
}

