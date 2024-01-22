//Параллелограмм
class Parallelogram : public Quadrangle
{
public:
    Parallelogram() : Parallelogram(10, 20, 30, 40)
    {
        name = "Параллелограмм";
    };

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
    };

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
    };

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
    };

protected:
    Rhomb(int a, int angle_A, int angle_B) : Parallelogram(a, a, angle_A, angle_B)
    {};
};
