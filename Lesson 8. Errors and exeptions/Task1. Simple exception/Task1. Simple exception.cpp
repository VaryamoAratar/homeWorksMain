#include <Windows.h>
#include "function.h"
#include <exception>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int forbidden_length{ 0 };
    std::string str;

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    try
    {
        while (true)
        {
            std::cout << "\nВведите слово: ";
            std::cin >> str;
            std::cout << "Длина слова " << '"' << str << '"' << " равна " << function(&str, forbidden_length);
        }
    }
    catch (const std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}

