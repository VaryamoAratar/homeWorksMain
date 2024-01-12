#include <iostream>
#include <string>

class Triangle
{
public:
    Triangle(){};
    
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }

    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }

private:
    int side_a{ 0 };
    int side_b{ 0 };
    int side_c{ 0 };
    int angle_A{ 0 };
    int angle_B{ 0 };
    int angle_C{ 0 };
    std::string name = "треугольник";
};


class Quadrangle
{
public:
    Quadrangle(){};

    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_side_d() { return side_d; }

    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
    int get_angle_D() { return angle_D; }

private:
    int side_a{ 0 };
    int side_b{ 0 };
    int side_c{ 0 };
    int side_d{ 0 };

    int angle_A{ 0 };
    int angle_B{ 0 };
    int angle_C{ 0 };
    int angle_D{ 0 };

    std::string name = "четырехугольник";

};

class RightTriangle : public Triangle
{
    RightTriangle()
    {

    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    
    Triangle fig3;
    Quadrangle fig4;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << fig0.get_name() << ':' << ' ' << fig0.get_sides_count() << std::endl;
    std::cout << fig3.get_name() << ':' << ' ' << fig3.get_sides_count() << std::endl;
    std::cout << fig4.get_name() << ':' << ' ' << fig4.get_sides_count() << std::endl;

    return 0;
}

