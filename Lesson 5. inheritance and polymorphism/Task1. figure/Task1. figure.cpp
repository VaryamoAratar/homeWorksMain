#include <iostream>
#include <string>

class Figure
{
public:
    Figure()
    {
        std::cout << get_name() << ':' << ' ' << get_sides_count() << std::endl;
    }

protected:
    Figure(int sides_count, std::string name) : sides_count{ sides_count }, name { name }
    {
        std::cout << get_name() << ':' << ' ' << get_sides_count() << std::endl;
    }
    int get_sides_count() { return sides_count; }
    std::string get_name() { return (std::string(name)); } 

private:
    int sides_count = 0;
    std::string name = "Фигура";
};

class Triangle : public Figure
{
public:
    Triangle() : Figure(3, "Треугольник") {};
};


class Quadrangle : public Figure
{
public:
    Quadrangle() : Figure(4, "Квадрат") {};
};

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Количество сторон:" << std::endl;
    Figure fig0;
    Triangle fig3;
    Quadrangle fig4;
    Figure fig0_v2;
    
    return 0;
 }

