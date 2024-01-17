#include <iostream>
#include <string>

//Базовый класс Фигуры
class Figure
{
public:
    Figure()
    {
        sides_count = 0;
        name = "Фигура";
    };
    //виртуальный метод для вывода данных в консоль
    virtual void print_info()
    {
        std::cout << "Информация о фигуре:" << std::endl;
        std::cout << "Количество сторон: " << get_sides_count() << std::endl;
        std::cout << get_name() << std::endl;
        std::cout << checkCorrectness() << std::endl;
        std::cout << std::endl;
    }
    //виртуальный метод для проверки правильности фигуры
    virtual std::string checkCorrectness()
    {
        if (get_name() == "Фигура" && get_sides_count() == 0)
        {
            return std::string("Правильно");
        }
        else
        {
            return std::string("Неправильно");
        }
    }

protected:
    int get_sides_count() { return sides_count; }
    std::string get_name() { return (std::string(name)); }

    int sides_count;
    std::string name;
};

//Треугольник
class Triangle : public Figure
{
public:
    Triangle() : Triangle(10, 20, 30, 40, 50, 60)
    {
        name = "Треугольник";
        sides_count = 3;
    };
    void print_info() override
    {
        std::cout << "Информация о фигуре:" << std::endl;
        std::cout << "Количество сторон: " << get_sides_count() << std::endl;
        std::cout << get_name() << std::endl;
        std::cout << "Стороны: "
            << "a=" << get_side_a() << ' '
            << "b=" << get_side_b() << ' '
            << "c=" << get_side_c() << std::endl;
        std::cout << "Углы: "
            << "A=" << get_angle_A() << ' '
            << "B=" << get_angle_B() << ' '
            << "C=" << get_angle_C() << std::endl;
        std::cout << checkCorrectness() << std::endl;
        std::cout << std::endl;
    }

    std::string checkCorrectness() override
    {
        if (get_sides_count() == 3 && (get_angle_A() + get_angle_B() + get_angle_C()) == 180)
        {
            return std::string("Правильно");
        }
        else
        {
            return std::string("Неправильно\nСумма углов не 180 градусов");
        }
    }

protected:
    Triangle(int a, int b, int c, int angle_A, int angle_B, int angle_C) :
        side_a{ a }, side_b{ b }, side_c{ c }, angle_A{ angle_A }, angle_B{ angle_B }, angle_C{ angle_C }
    {};

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
};

//Прямоугольный треугольник
class RightTriangle : public Triangle
{
public:
    RightTriangle() : RightTriangle(12, 23, 34, 45, 56)
    {
        name = "Прямоугольный треугольник";
        sides_count = 3;
    };
    std::string checkCorrectness() override
    {
        if (Triangle::checkCorrectness() == "Правильно")
        {
            if (get_sides_count() == 3 && get_angle_C() == 90)
            {
                return std::string("Правильно");
            }
            else
            {
                return std::string("Неправильно");
            }
        }
        else
        {
            return Triangle::checkCorrectness();
        }
    }

protected:
    RightTriangle(int a, int b, int c, int angle_A, int angle_B) : Triangle(a, b, c, angle_A, angle_B, 90)
    {};
};

//Равнобедренный треугольник
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle() : IsoscelesTriangle(35, 55, 50, 80)
    {
        name = "Равнобедренный треугольник";
        sides_count = 3;
    };
    std::string checkCorrectness() override
    {
        if (Triangle::checkCorrectness() == "Правильно")
        {
            if (get_sides_count() == 3 &&
                get_side_a() == get_side_c() &&
                get_angle_A() == get_angle_C())
            {
                return std::string("Правильно");
            }
            else
            {
                return std::string("Неправильно");
            }
        }
        else
        {
            return Triangle::checkCorrectness();
        }
    }

protected:
    IsoscelesTriangle(int a, int b, int angle_A, int angle_B) : Triangle(a, b, a, angle_A, angle_B, angle_A)
    {};
};

//Равносторонний треугольник
class EquilateralTriangle : public IsoscelesTriangle
{
public:
    EquilateralTriangle() : EquilateralTriangle(100, 60)
    {
        name = "Равносторонний треугольник";
        sides_count = 3;
    };
    std::string checkCorrectness() override
    {
        if (Triangle::checkCorrectness() == "Правильно")
        {
            if (IsoscelesTriangle::checkCorrectness() == "Правильно" &&
                get_side_a() == get_side_b() &&
                get_angle_A() == get_angle_B() &&
                get_angle_A() == 60)
            {
                return std::string("Правильно");
            }
            else
            {
                return std::string("Неправильно");
            }
        }
        else
        {
            return Triangle::checkCorrectness();
        }
    }

protected:
    EquilateralTriangle(int side_a, int angle_A) : IsoscelesTriangle(side_a, side_a, angle_A, angle_A)
    {};
};

//Четырехугольник
class Quadrangle : public Figure
{
public:
    Quadrangle() : Quadrangle(10, 20, 30, 40, 50, 60, 70, 80)
    {
        name = "Четырехугольник";
        sides_count = 4;
    };
    void print_info() override
    {
        std::cout << "Информация о фигуре:" << std::endl;
        std::cout << "Количество сторон: " << get_sides_count() << std::endl;
        std::cout << get_name() << std::endl;
        std::cout << "Стороны: "
            << "a=" << get_side_a() << ' '
            << "b=" << get_side_b() << ' '
            << "c=" << get_side_c() << ' '
            << "d=" << get_side_d() << std::endl;
        std::cout << "Углы: "
            << "A=" << get_angle_A() << ' '
            << "B=" << get_angle_B() << ' '
            << "C=" << get_angle_B() << ' '
            << "D=" << get_angle_D() << std::endl;
        std::cout << checkCorrectness() << std::endl;
        std::cout << std::endl;
    }

    std::string checkCorrectness() override
    {
        if (get_sides_count() == 4 && (get_angle_A() + get_angle_B() + get_angle_C() + get_angle_D()) == 360)
        {
            return std::string("Правильно");
        }
        else
        {
            return std::string("Неправильно\nСумма углов не 360 градусов");
        }
    }

protected:
    Quadrangle(int a, int b, int c, int d, int angle_A, int angle_B, int angle_C, int angle_D) :
        side_a{ a }, side_b{ b }, side_c{ c }, side_d{ d }, angle_A{ angle_A }, angle_B{ angle_B }, angle_C{ angle_C }, angle_D{ angle_D }
    {};

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

};

//Параллелограмм
class Parallelogram : public Quadrangle
{
public:
    Parallelogram() : Parallelogram(10, 20, 30, 40)
    {
        name = "Параллелограмм";
        sides_count = 4;
    };
    std::string checkCorrectness() override
    {
        if (Quadrangle::checkCorrectness() == "Правильно")
        {
            if (get_sides_count() == 4 &&
                get_side_a() == get_side_c() &&
                get_side_b() == get_side_d() &&
                get_angle_A() == get_angle_C() &&
                get_angle_B() == get_angle_D())
            {
                return std::string("Правильно");
            }
            else
            {
                return std::string("Неправильно");
            }
        }
        else
        {
            return Quadrangle::checkCorrectness();
        }
    }

protected:
    Parallelogram(int a, int b, int angle_A, int angle_B) : Quadrangle(a, b, a, b, angle_A, angle_B, angle_A, angle_B)
    {};
};

//Прямоугольник
class Rectangle : public Parallelogram
{
public:
    Rectangle() : Rectangle(50, 60, 90)
    {
        name = "Прямоугольник";
        sides_count = 4;
    };
    std::string checkCorrectness() override
    {
        if (Quadrangle::checkCorrectness() == "Правильно")
        {
            if (Parallelogram::checkCorrectness() == "Правильно" &&
                get_angle_A() == get_angle_B() &&
                get_angle_A() == 90)
            {
                return std::string("Правильно");
            }
            else
            {
                return std::string("Неправильно");
            }
        }
        else
        {
            return Quadrangle::checkCorrectness();
        }
    }

protected:
    Rectangle(int a, int b, int angle_A) : Parallelogram(a, b, angle_A, angle_A)
    {};
};

//Квадрат
class Square : public Rectangle
{
public:
    Square() : Square(100)
    {
        name = "Квадрат";
        sides_count = 4;
    };
    std::string checkCorrectness() override
    {
        if (Quadrangle::checkCorrectness() == "Правильно")
        {
            if (Rectangle::checkCorrectness() == "Правильно" &&
                get_side_a() == get_side_b())
            {
                return std::string("Правильно");
            }
            else
            {
                return std::string("Неправильно");
            }
        }
        else
        {
            return Quadrangle::checkCorrectness();
        }
    }

protected:
    Square(int a) : Rectangle(a, a, 90)
    {};
};

//Ромб
class Rhomb : public Parallelogram
{
public:
    Rhomb() : Rhomb(50, 80, 100)
    {
        name = "Ромб";
        sides_count = 4;
    };
    std::string checkCorrectness() override
    {
        if (Quadrangle::checkCorrectness() == "Правильно")
        {
            if (get_sides_count() == 4 &&
                get_side_a() == get_side_c() &&
                get_side_a() == get_side_b() &&
                get_side_a() == get_side_d() &&
                get_angle_A() == get_angle_C() &&
                get_angle_B() == get_angle_D())
            {
                return std::string("Правильно");
            }
            else
            {
                return std::string("Неправильно");
            }
        }
        else
        {
            return Quadrangle::checkCorrectness();
        }
    }

protected:
    Rhomb(int a, int angle_A, int angle_B) : Parallelogram(a, a, angle_A, angle_B)
    {};
};

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
    f_figure->print_info();
    f_triangle->print_info();
    f_rTriangle->print_info();
    f_iTriangle->print_info();
    f_eTriangle->print_info();
    f_quadrangle->print_info();
    f_rectangle->print_info();
    f_square->print_info();
    f_parallelogram->print_info();
    f_rhomb->print_info();

    return 0;
}

