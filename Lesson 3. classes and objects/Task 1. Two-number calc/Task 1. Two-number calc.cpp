#include <iostream>

class Calculator
{
private:
    double num1;
    double num2;
    // метод должен возвращать результат сложения num1 и num2
    double add() { return num1 + num2; }

    // метод должен возвращать результат перемножения num1 и num2
    double multiply() { return num1 * num2; }

    // метод должен возвращать результат вычитания num2 из num1
    double subtract_1_2() { return num1 - num2; }

    // метод должен возвращать результат вычитания num1 из num2
    double subtract_2_1() { return num2 - num1; }

    // метод должен возвращать результат деления num1 на num2
    double divide_1_2() { return num1 / num2; }

    // метод должен возвращать результат деления num2 на num1
    double divide_2_1() { return num2 / num1; }

public:
    Calculator(double num1, double num2) : num1{ num1 }, num2{ num2 }
    {}

    // метод должен выводить результаты мат. действий в консоль
    void cOutResult()
    {
        std::cout << "num1 + num2: " << add() << std::endl;
        std::cout << "num1 - num2: " << subtract_1_2() << std::endl;
        std::cout << "num2 - num1: " << subtract_2_1() << std::endl;
        std::cout << "num1 * num2: " << multiply() << std::endl;
        std::cout << "num1 / num2: " << divide_1_2() << std::endl;
        std::cout << "num2 / num2: " << divide_2_1() << std::endl;
    }
    
    //метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0.
    //Возвращает true, если установка произошла успешно, в обратном случае false
    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        else return false;
    };

    //метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0.
    //Возвращает true, если установка произошла успешно, в обратном случае false
    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else return false;
    };
};

int main()
{
    setlocale(LC_ALL, "russian");

    double num1{ 0 };
    double num2{ 0 };

    Calculator calc(num1, num2);

    while (true)
    {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        while (!calc.set_num1(num1))
        {
            std::cout << "Неверный ввод!\n";
            std::cout << "Введите num1: ";
            std::cin >> num1;
        }
        
        std::cout << "Введите num2: ";
        std::cin >> num2;
        while (!calc.set_num2(num2))
        {
            std::cout << "Неверный ввод!\n";
            std::cout << "Введите num2: ";
            std::cin >> num2;
        }
        calc.cOutResult();
    }
    return 0;
}

