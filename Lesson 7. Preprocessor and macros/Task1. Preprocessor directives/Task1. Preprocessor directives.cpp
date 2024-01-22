#include <iostream>

#define MODE 1

#ifndef MODE
#error MODE не определено. Определите MODE
#endif // !MODE

#if MODE == 1

int add(int a, int b) { return a + b; }

#endif // MODE == 1


int main()
{
    setlocale(LC_ALL, "Russian");

#if MODE == 0

    std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE !=0 && MODE !=1

    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    
#else

    int firstValue;
    int secondValue;

    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите первое число: ";
    std::cin >> firstValue;
    std::cout << std::endl;
    std::cout << "Введите второе число: ";
    std::cin >> secondValue;
    std::cout << std::endl;
    std::cout << "Результат сложения: " << add(firstValue, secondValue) << std::endl;

#endif // MODE == 0

    return 0;
}