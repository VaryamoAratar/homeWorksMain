#include <iostream>
#include <string>
#include <Windows.h>

class Counter
{
public:
    Counter(int value)
    {
        set_value(value);
    }
    Counter()
    {
        value = 1;
    }

    void increment() { this->value = value++; } 
    void dicrement() { this->value = value--; }
    int get_value() { return value; }
    void set_value(int value) { this->value = value; }

private:
    int value;
};
void comand(char sym, Counter& count)
{
    while (sym != 'x')
    {
        std::cout << "Введите команду('+', '-', '=' или 'x'): ";
        std::cin >> sym;
        if (sym == '+')
        {
            count.increment();
        }
        else if (sym == '-')
        {
            count.dicrement();
        }
        else if (sym == '=')
        {
            std::cout << count.get_value() << std::endl;
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string yesOrNot = "нет";
    int value{ 0 };
    char sym = '=';

    std::cout << "Вы хотите указать начальное значение счётчика? Введите 'да' или 'нет': ";
    std::cin >> yesOrNot;
    std::cout << std::endl;

    if (yesOrNot == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> value;
        Counter* count = new Counter(value);
        comand(sym, *count);
        delete count;
    }
    else
    {
        Counter* count = new Counter();
        comand(sym, *count);
        delete count;
    } 
    return 0;
}

