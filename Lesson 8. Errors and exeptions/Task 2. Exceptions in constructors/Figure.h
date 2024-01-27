#pragma once
#include<iostream>
#include"MyError.h"

//Базовый класс Фигуры
class Figure
{
public:
    Figure();
    //виртуальный метод для вывода данных в консоль
    virtual void print_info();
    
   

protected:
    //виртуальный метод для проверки правильности фигуры
    virtual bool checkCorrectness();
    int get_sides_count();
    std::string get_name();

    int sides_count;
    std::string name;
};
