#include <iostream>
#include <string>
#include "Task3._class_hierarchy.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    //Создаем объекты
    Figure figure;                  //фигура без сторон
    Triangle triangle;              //треугольник
    RightTriangle rTriangle;        //прямоугольный треугольник
    IsoscelesTriangle iTriangle;    //равнобедренный треугольник
    EquilateralTriangle eTriangle;  //равносторонний треугольник
    Quadrangle quadrangle;          //четырехугольник
    Rectangle rectangle;            //прямоугольник
    Square square;                  //квадрат
    Parallelogram parallelogram;    //параллелограмм
    Rhomb rhomb;                    //ромб

    //Создаем указатели на базовый класс, со значениями производных классов
    Figure* f_figure = &figure;
    Figure* f_triangle = &triangle;
    Figure* f_rTriangle = &rTriangle;
    Figure* f_iTriangle = &iTriangle;
    Figure* f_eTriangle = &eTriangle;
    Figure* f_quadrangle = &quadrangle;
    Figure* f_rectangle = &rectangle;
    Figure* f_square = &square;
    Figure* f_parallelogram = &parallelogram;
    Figure* f_rhomb = &rhomb;

    //выводим данные объектов
    print_info(f_figure);
    std::cout << std::endl;
    print_info(f_triangle);
    std::cout << std::endl;
    print_info(f_rTriangle);
    std::cout << std::endl;
    print_info(f_iTriangle);
    std::cout << std::endl;
    print_info(f_eTriangle);
    std::cout << std::endl;
    print_info(f_quadrangle);
    std::cout << std::endl;
    print_info(f_rectangle);
    std::cout << std::endl;
    print_info(f_square);
    std::cout << std::endl;
    print_info(f_parallelogram);
    std::cout << std::endl;
    print_info(f_rhomb);

    return 0;
}

