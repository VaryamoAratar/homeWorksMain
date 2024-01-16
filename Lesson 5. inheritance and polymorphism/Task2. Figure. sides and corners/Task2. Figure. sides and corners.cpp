#include <iostream>
#include <string>

//Базовый класс Фигуры
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

//Треугольник
class Triangle : public Figure
{
public:
    Triangle();
  
protected:
    Triangle(int a, int b, int c, int A, int B, std::string name);
    Triangle(int a, int b, int A, int B, std::string name);
    Triangle(int a, std::string name);
};

Triangle::Triangle()
{
    set_side_a(10);
    set_side_b(15);
    set_side_c(25);
    set_angle_A(35);
    set_angle_B(40);
    set_angle_C(105);
    set_name("Треугольник");
    set_sides_count(3);
};

//Прямоугольный треугольник
class RightTriangle : public Triangle
{
public:
    RightTriangle ();
};

RightTriangle::RightTriangle()
{
    set_angle_C(90);
    set_name("Прямоугольный треугольник");
}

//Равнобедренный треугольник
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle();
};

IsoscelesTriangle::IsoscelesTriangle()
{
    set_side_c(get_side_a());
    set_angle_C(get_angle_A());
    set_name("Равнобедренный треугольник");
}

//Равносторонний треугольник
class EquilateralTriangle : public IsoscelesTriangle
{
public:
    EquilateralTriangle();
};

EquilateralTriangle::EquilateralTriangle()
{
    set_side_b(get_side_a());
    set_angle_B(get_angle_A());
    set_name("Равносторонний треугольник");
}

//Четырехугольник
class Quadrangle : public Figure
{
public:
    Quadrangle();
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

    set_name("Четырехугольник");
    set_sides_count(4);
}

//Параллелограмм
class Parallelogram : public Quadrangle
{
public:
    Parallelogram();
};

Parallelogram::Parallelogram()
{
    set_side_c(get_side_a());
    set_side_d(get_side_b());

    set_angle_C(get_angle_A());
    set_angle_D(get_angle_B());

    set_name("Параллелограмм");
}

//Прямоугольник
class Rectangle : public Parallelogram
{
public:
    Rectangle();
};

Rectangle::Rectangle()
{
    set_angle_A(90);
    set_angle_B(get_angle_A());
    set_angle_C(get_angle_A());
    set_angle_D(get_angle_A());

    set_name("Прямоугольник");
}

//Квадрат
class Square : public Rectangle
{
public:
    Square();
};

Square::Square()
{
    set_side_b(get_side_a());
    set_side_c(get_side_a());
    set_side_d(get_side_a());

    set_name("Квадрат");
}

//Ромб
class Rhomb : public Quadrangle
{
public:
    Rhomb();
};

Rhomb::Rhomb()
{
    set_side_b(get_side_a());
    set_side_c(get_side_a());
    set_side_d(get_side_a());

    set_angle_C(get_angle_A());
    set_angle_D(get_angle_B());

    set_name("Ромб");
}

//Функция вывода данных объектов в консоль 
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
        std::cout << "Стороны: " << "a=" << in->get_side_a() << ' ' 
                                 << "b=" << in->get_side_b() << ' ' 
                                 << "c=" << in->get_side_c() << std::endl;
        std::cout << "Углы: "    << "A=" << in->get_angle_A() << ' ' 
                                 << "B=" << in->get_angle_B() << ' ' 
                                 << "C=" << in->get_angle_C() << std::endl;
    }
    else
    {
        std::cout << in->get_name() << std::endl;
        std::cout << "Стороны: " << "a=" << in->get_side_a() << ' ' 
                                 << "b=" << in->get_side_b() << ' ' 
                                 << "c=" << in->get_side_c() << ' ' 
                                 << "d=" << in->get_side_d() << std::endl;
        std::cout << "Углы: " << "A=" << in->get_angle_A() << ' ' 
                              << "B=" << in->get_angle_B() << ' ' 
                              << "C=" << in->get_angle_C() << ' ' 
                              << "D=" << in->get_angle_D() << std::endl;
    }
}

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

