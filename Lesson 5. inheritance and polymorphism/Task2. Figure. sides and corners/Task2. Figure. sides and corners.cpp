#include <iostream>
#include <string>

class Figure
{
public:
    Figure();
    int get_sides_count() { return sides_count; }
    std::string get_name() { return (std::string(name)); }
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_side_d() { return side_d; }

    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
    int get_angle_D() { return angle_D; }
      
protected:
    Figure(int sides_count, std::string name);
    void set_name(std::string newName) { name = newName; };
    void set_sides_count(int newSideCount) { sides_count = newSideCount; }
    void set_side_a(int a) { side_a = a; }
    void set_side_b(int b) { side_b = b; }
    void set_side_c(int c) { side_c = c; }
    void set_side_d(int d) { side_d = d; }
    void set_angle_A(int A) { angle_A = A; }
    void set_angle_B(int B) { angle_B = B; }
    void set_angle_C(int C) { angle_C = C; }
    void set_angle_D(int D) { angle_D = D; }

private:
    int sides_count;
    std::string name;
    int side_a{ 0 };
    int side_b{ 0 };
    int side_c{ 0 };
    int side_d{ 0 };

    int angle_A{ 0 };
    int angle_B{ 0 };
    int angle_C{ 0 };
    int angle_D{ 0 };

};

Figure::Figure()
{
    sides_count = 0;
    name = "Фигура";
}

Figure::Figure(int sides_count, std::string name)
{
    this->sides_count = sides_count;
    this->name = name;
}

class Triangle : public Figure
{
public:
    Triangle();
    
    //int get_side_a() { return side_a; }
    //int get_side_b() { return side_b; }
    //int get_side_c() { return side_c; }

    //int get_angle_A() { return angle_A; }
    //int get_angle_B() { return angle_B; }
    //int get_angle_C() { return angle_C; }
  
protected:
    Triangle(int a, int b, int c, int A, int B, std::string name);
    Triangle(int a, int b, int A, int B, std::string name);
    Triangle(int a, std::string name);

private:
    int sides_count{ 3 };
    std::string name{ "Треугольник" };

 };
//Треугольник
Triangle::Triangle()
{
    set_side_a(10);
    set_side_b(15);
    set_side_c(25);
    set_angle_A(35);
    set_angle_B(40);
    set_angle_C(105);
    set_name(name);
    set_sides_count(sides_count);
};
//Прямоугольный треугольник
Triangle::Triangle(int a, int b, int c, int A, int B, std::string newName) 

{
    set_side_a(a);
    set_side_b(b);
    set_side_c(c);
    set_angle_A(A);
    set_angle_B(B);
    set_angle_C(90);
    set_name(newName);
    set_sides_count(sides_count);
}
//Равнобедренный треугольник
Triangle::Triangle(int a, int b, int A, int B, std::string newName)

{
    set_side_a(a);
    set_side_b(b);
    set_side_c(a);
    set_angle_A(A);
    set_angle_B(B);
    set_angle_C(A);
    set_name(newName);
    set_sides_count(sides_count);
}
//Равносторонний треугольник
Triangle::Triangle(int a, std::string newName)

{
    set_side_a(a);
    set_side_b(a);
    set_side_c(a);
    set_angle_A(60);
    set_angle_B(60);
    set_angle_C(60);
    set_name(newName);
    set_sides_count(sides_count);
}

//Прямоугольный треугольник
class RightTriangle : public Triangle
{
public:
    RightTriangle ();
    

private:

};

RightTriangle::RightTriangle() : Triangle{ 6, 3, 5, 30, 60, "Прямоугольный треугольник" }
{}

//Равнобедренный треугольник
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle();
    

private:

};

IsoscelesTriangle::IsoscelesTriangle() : Triangle{ 20, 40, 35, 70, "Равнобедренный треугольник"}
{
}

//Равносторонний треугольник
class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle();
   
private:

};

EquilateralTriangle::EquilateralTriangle() : Triangle{ 50, "Равносторонний треугольник" }
{
}



class Rectangle
{
public:
    Rectangle();


private:

};

Rectangle::Rectangle()
{
}

class Quadrangle : public Figure
{
public:
    Quadrangle();

private:
    
    int sides_count{ 4 };
    std::string name = "Четырехугольник";

};
Quadrangle::Quadrangle()
{
    set_side_a(10);
    set_side_b(15);
    set_side_c(25);
    set_side_d(40);
    set_angle_A(35);
    set_angle_B(40);
    set_angle_C(105);
    set_angle_D(100);
    set_name(name);
    set_sides_count(sides_count);

}

void print_info(Figure* in)
{
    if (in->get_sides_count() == 0)
    {
        std::cout << in->get_name() << std::endl;
        std::cout << "Количество сторон: " << in->get_sides_count() << std::endl;
    }

    else if (in->get_sides_count() == 3)
    {
        std::cout << in->get_name() << std::endl;
        std::cout << "Стороны: " << "a=" << in->get_side_a() << ' ' << "b=" << in->get_side_b() << ' ' << "c=" << in->get_side_c() << std::endl;
        std::cout << "Углы: "    << "A=" << in->get_angle_A() << ' ' << "B=" << in->get_angle_B() << ' ' << "C=" << in->get_angle_C() << std::endl;
    }
    else
    {
        std::cout << in->get_name() << std::endl;
        std::cout << "Стороны: " << "a=" << in->get_side_a() << ' ' << "b=" << in->get_side_b() << ' ' << "c=" << in->get_side_c() << ' ' << "d=" << in->get_side_d() << std::endl;
        std::cout << "Углы: " << "A=" << in->get_angle_A() << ' ' << "B=" << in->get_angle_B() << ' ' << "C=" << in->get_angle_C() << ' ' << "D=" << in->get_angle_D() << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
 
    Figure figure;
    Triangle triangle;
    RightTriangle rTriangle;
    IsoscelesTriangle iTriangle;
    EquilateralTriangle eTriangle;
    Quadrangle quadrangle;

    Figure* f_figure = &figure;
    Figure* f_triangle = &triangle;
    Figure* f_rTriangle = &rTriangle;
    Figure* f_iTriangle = &iTriangle;
    Figure* f_eTriangle = &eTriangle;
    Figure* f_quadrangle = &quadrangle;

    print_info(f_figure);
    print_info(f_triangle);
    print_info(f_rTriangle);
    print_info(f_iTriangle);
    print_info(f_eTriangle);
    print_info(f_quadrangle);

    return 0;
}

