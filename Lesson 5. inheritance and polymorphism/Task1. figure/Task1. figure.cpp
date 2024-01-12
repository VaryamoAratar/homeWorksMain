#include <iostream>
#include <string>

class Figure
{
public:
    Figure() : Figure(0, "Фигура")
    {}
    int get_sides_count() { return sides_count; }
    std::string get_name() { return (std::string(name)); }
protected:
    Figure(int sides_count, std::string name) : sides_count{ sides_count }, name{ name }
    {}
     
private:
    int sides_count;
    std::string name;
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

    Figure fig0;
    Triangle fig3;
    Quadrangle fig4;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << fig0.get_name() << ':' << ' ' << fig0.get_sides_count() << std::endl;
    std::cout << fig3.get_name() << ':' << ' ' << fig3.get_sides_count() << std::endl;
    std::cout << fig4.get_name() << ':' << ' ' << fig4.get_sides_count() << std::endl;

    return 0;
 }

