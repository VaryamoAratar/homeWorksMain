#include <iostream>
#include <string>
#include <Windows.h>
#include "Counter.h"

//Изменение value в зависимости от введенного '+', '-' или '='
void foo_count(Counter* in)
{
    char sym = '=';
    while (sym != 'x')
    {
        std::cout << "Введите команду('+', '-', '=' или 'x'): ";
        std::cin >> sym;
        if (sym == '+')
        {
            in->increment();
        }
        else if (sym == '-')
        {
            in->dicrement();
        }
        else if (sym == '=')
        {
            std::cout << in->get_value() << std::endl;
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string yesOrNot = "нет";
    int value{ 0 };
    

    std::cout << "Вы хотите указать начальное значение счётчика? Введите 'да' или 'нет': ";
    std::cin >> yesOrNot;
    std::cout << std::endl;

    if (yesOrNot == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> value;
        Counter* count = new Counter(value);
        foo_count(count);
        delete count;
    }
    else
    {
        Counter* count = new Counter();
        foo_count(count);
        delete count;
    }
    return 0;
}

